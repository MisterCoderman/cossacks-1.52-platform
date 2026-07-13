#include "recomp.h"

/* FUN_1000acb0 @ 0x1241acb0 (10 bytes, 5 insns) */
void f_1241acb0(void) {
  FTRACE(0x1241acb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241acb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1241acb1 mov ebp, esp */
  EBP = (ESP);
  /* 1241acb3 mov eax, dword ptr [0x12440c94] */
  EAX = (r32((uint32_t)(0x12440c94)));
  /* 1241acb8 pop ebp */
  EBP = (pop32());
  /* 1241acb9 ret  */
  ESPCHK(0x1241acb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000acc0 @ 0x1241acc0 (31 bytes, 11 insns) */
void f_1241acc0(void) {
  FTRACE(0x1241acc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241acc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1241acc1 mov ebp, esp */
  EBP = (ESP);
  /* 1241acc3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241acca jbe 0x1241acd0 */
  if ((C.cf||C.zf)) goto L_1241acd0;
  /* 1241accc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241acce jmp 0x1241acdd */
  goto L_1241acdd;
L_1241acd0:;
  /* 1241acd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241acd3 mov dword ptr [0x12440c94], eax */
  w32((uint32_t)(0x12440c94), (EAX));
  /* 1241acd8 mov eax, 1 */
  EAX = (0x1u);
L_1241acdd:;
  /* 1241acdd pop ebp */
  EBP = (pop32());
  /* 1241acde ret  */
  ESPCHK(0x1241acc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ace0 @ 0x1241ace0 (89 bytes, 20 insns) */
void f_1241ace0(void) {
  FTRACE(0x1241ace0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241ace0 push ebp */
  push32((uint32_t)(EBP));
  /* 1241ace1 mov ebp, esp */
  EBP = (ESP);
  /* 1241ace3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1241ace8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241acea mov eax, dword ptr [0x124441cc] */
  EAX = (r32((uint32_t)(0x124441cc)));
  /* 1241acef push eax */
  push32((uint32_t)(EAX));
  /* 1241acf0 call dword ptr [0x12445320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445320))), 0x1241acf6u);
  /* 1241acf6 mov dword ptr [0x124441c8], eax */
  w32((uint32_t)(0x124441c8), (EAX));
  /* 1241acfb cmp dword ptr [0x124441c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124441c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241ad02 jne 0x1241ad08 */
  if (!C.zf) goto L_1241ad08;
  /* 1241ad04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241ad06 jmp 0x1241ad37 */
  goto L_1241ad37;
L_1241ad08:;
  /* 1241ad08 mov ecx, dword ptr [0x124441c8] */
  ECX = (r32((uint32_t)(0x124441c8)));
  /* 1241ad0e mov dword ptr [0x124441bc], ecx */
  w32((uint32_t)(0x124441bc), (ECX));
  /* 1241ad14 mov dword ptr [0x124441c0], 0 */
  w32((uint32_t)(0x124441c0), (0x0u));
  /* 1241ad1e mov dword ptr [0x124441c4], 0 */
  w32((uint32_t)(0x124441c4), (0x0u));
  /* 1241ad28 mov dword ptr [0x124441a8], 0x10 */
  w32((uint32_t)(0x124441a8), (0x10u));
  /* 1241ad32 mov eax, 1 */
  EAX = (0x1u);
L_1241ad37:;
  /* 1241ad37 pop ebp */
  EBP = (pop32());
  /* 1241ad38 ret  */
  ESPCHK(0x1241ace0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ad40 @ 0x1241ad40 (85 bytes, 29 insns) */
void f_1241ad40(void) {
  FTRACE(0x1241ad40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241ad40 push ebp */
  push32((uint32_t)(EBP));
  /* 1241ad41 mov ebp, esp */
  EBP = (ESP);
  /* 1241ad43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241ad46 mov eax, dword ptr [0x124441c4] */
  EAX = (r32((uint32_t)(0x124441c4)));
  /* 1241ad4b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241ad4e mov ecx, dword ptr [0x124441c8] */
  ECX = (r32((uint32_t)(0x124441c8)));
  /* 1241ad54 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241ad56 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1241ad59 mov edx, dword ptr [0x124441c8] */
  EDX = (r32((uint32_t)(0x124441c8)));
  /* 1241ad5f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1241ad62:;
  /* 1241ad62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241ad65 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241ad68 jae 0x1241ad8f */
  if (!C.cf) goto L_1241ad8f;
  /* 1241ad6a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241ad6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241ad70 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241ad73 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1241ad76 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241ad7d jae 0x1241ad84 */
  if (!C.cf) goto L_1241ad84;
  /* 1241ad7f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241ad82 jmp 0x1241ad91 */
  goto L_1241ad91;
L_1241ad84:;
  /* 1241ad84 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241ad87 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241ad8a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1241ad8d jmp 0x1241ad62 */
  goto L_1241ad62;
L_1241ad8f:;
  /* 1241ad8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1241ad91:;
  /* 1241ad91 mov esp, ebp */
  ESP = (EBP);
  /* 1241ad93 pop ebp */
  EBP = (pop32());
  /* 1241ad94 ret  */
  ESPCHK(0x1241ad40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ada0 @ 0x1241ada0 (95 bytes, 33 insns) */
void f_1241ada0(void) {
  FTRACE(0x1241ada0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241ada0 push ebp */
  push32((uint32_t)(EBP));
  /* 1241ada1 mov ebp, esp */
  EBP = (ESP);
  /* 1241ada3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241ada6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241ada9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241adac sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241adaf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1241adb2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241adb5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1241adb8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1241adbb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1241adc0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241adc3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1241adc5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241adc8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1241adcb and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1241adcd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241adcf jne 0x1241adf1 */
  if (!C.zf) goto L_1241adf1;
  /* 1241add1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241add4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1241add7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241add9 jne 0x1241adf1 */
  if (!C.zf) goto L_1241adf1;
  /* 1241addb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241adde and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 1241ade4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1241ade6 je 0x1241adf1 */
  if (C.zf) goto L_1241adf1;
  /* 1241ade8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 1241adef jmp 0x1241adf8 */
  goto L_1241adf8;
L_1241adf1:;
  /* 1241adf1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1241adf8:;
  /* 1241adf8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241adfb mov esp, ebp */
  ESP = (EBP);
  /* 1241adfd pop ebp */
  EBP = (pop32());
  /* 1241adfe ret  */
  ESPCHK(0x1241ada0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae00 @ 0x1241ae00 (1485 bytes, 453 insns) */
void f_1241ae00(void) {
  FTRACE(0x1241ae00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241ae00 push ebp */
  push32((uint32_t)(EBP));
  /* 1241ae01 mov ebp, esp */
  EBP = (ESP);
  /* 1241ae03 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241ae06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241ae09 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1241ae0c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 1241ae0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241ae12 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241ae15 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241ae18 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1241ae1b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241ae1e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 1241ae21 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1241ae24 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241ae27 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241ae2d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1241ae30 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 1241ae37 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1241ae3a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241ae3d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241ae40 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1241ae43 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1241ae46 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1241ae48 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241ae4b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1241ae4e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1241ae51 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241ae54 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 1241ae57 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1241ae5a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1241ae5c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1241ae5f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1241ae62 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1241ae65 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1241ae68 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241ae6b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1241ae6e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1241ae70 jne 0x1241af98 */
  if (!C.zf) goto L_1241af98;
  /* 1241ae76 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241ae79 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1241ae7c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241ae7f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1241ae82 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241ae86 jbe 0x1241ae8f */
  if ((C.cf||C.zf)) goto L_1241ae8f;
  /* 1241ae88 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1241ae8f:;
  /* 1241ae8f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1241ae92 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1241ae95 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1241ae98 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241ae9b jne 0x1241af71 */
  if (!C.zf) goto L_1241af71;
  /* 1241aea1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241aea5 jae 0x1241af06 */
  if (!C.cf) goto L_1241af06;
  /* 1241aea7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1241aeac mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241aeaf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1241aeb1 not eax */
  EAX = (~(EAX));
  /* 1241aeb3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241aeb6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1241aeb9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1241aebd and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1241aebf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241aec2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1241aec5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1241aec9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1241aecc add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241aecf mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1241aed2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1241aed5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1241aed8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241aedb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1241aede mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1241aee1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241aee4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1241aee8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241aeea jne 0x1241af04 */
  if (!C.zf) goto L_1241af04;
  /* 1241aeec mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1241aef1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241aef4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1241aef6 not eax */
  EAX = (~(EAX));
  /* 1241aef8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241aefb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1241aefd and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1241aeff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241af02 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1241af04:;
  /* 1241af04 jmp 0x1241af71 */
  goto L_1241af71;
L_1241af06:;
  /* 1241af06 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241af09 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241af0c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1241af11 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1241af13 not edx */
  EDX = (~(EDX));
  /* 1241af15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241af18 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1241af1b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1241af22 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1241af24 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241af27 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1241af2a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1241af31 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1241af34 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241af37 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1241af3a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1241af3d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1241af40 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241af43 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1241af46 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1241af49 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241af4c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1241af50 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1241af52 jne 0x1241af71 */
  if (!C.zf) goto L_1241af71;
  /* 1241af54 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241af57 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241af5a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1241af5f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1241af61 not edx */
  EDX = (~(EDX));
  /* 1241af63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241af66 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1241af69 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1241af6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241af6e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1241af71:;
  /* 1241af71 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1241af74 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1241af77 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1241af7a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1241af7d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1241af80 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1241af83 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1241af86 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1241af89 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1241af8c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1241af8f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241af92 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241af95 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_1241af98:;
  /* 1241af98 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241af9b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1241af9e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241afa1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1241afa4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241afa8 jbe 0x1241afb1 */
  if ((C.cf||C.zf)) goto L_1241afb1;
  /* 1241afaa mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1241afb1:;
  /* 1241afb1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241afb4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1241afb7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1241afb9 jne 0x1241b115 */
  if (!C.zf) goto L_1241b115;
  /* 1241afbf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1241afc2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241afc5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 1241afc8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241afcb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1241afce sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241afd1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1241afd4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241afd8 jbe 0x1241afe1 */
  if ((C.cf||C.zf)) goto L_1241afe1;
  /* 1241afda mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_1241afe1:;
  /* 1241afe1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241afe4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241afe7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1241afea mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241afed sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1241aff0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241aff3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1241aff6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241affa jbe 0x1241b003 */
  if ((C.cf||C.zf)) goto L_1241b003;
  /* 1241affc mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1241b003:;
  /* 1241b003 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1241b006 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241b009 je 0x1241b10f */
  if (C.zf) goto L_1241b10f;
  /* 1241b00f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1241b012 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1241b015 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1241b018 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241b01b jne 0x1241b0f1 */
  if (!C.zf) goto L_1241b0f1;
  /* 1241b021 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241b025 jae 0x1241b086 */
  if (!C.cf) goto L_1241b086;
  /* 1241b027 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1241b02c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1241b02f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1241b031 not edx */
  EDX = (~(EDX));
  /* 1241b033 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241b036 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1241b039 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1241b03d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1241b03f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241b042 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1241b045 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1241b049 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1241b04c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b04f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1241b052 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1241b055 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1241b058 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b05b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1241b05e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1241b061 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b064 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1241b068 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1241b06a jne 0x1241b084 */
  if (!C.zf) goto L_1241b084;
  /* 1241b06c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1241b071 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1241b074 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1241b076 not edx */
  EDX = (~(EDX));
  /* 1241b078 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241b07b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1241b07d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1241b07f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241b082 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1241b084:;
  /* 1241b084 jmp 0x1241b0f1 */
  goto L_1241b0f1;
L_1241b086:;
  /* 1241b086 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1241b089 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241b08c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1241b091 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1241b093 not eax */
  EAX = (~(EAX));
  /* 1241b095 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241b098 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1241b09b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1241b0a2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1241b0a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241b0a7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1241b0aa mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1241b0b1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1241b0b4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b0b7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1241b0ba sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1241b0bd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1241b0c0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b0c3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1241b0c6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1241b0c9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b0cc movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1241b0d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241b0d2 jne 0x1241b0f1 */
  if (!C.zf) goto L_1241b0f1;
  /* 1241b0d4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1241b0d7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241b0da mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1241b0df shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1241b0e1 not eax */
  EAX = (~(EAX));
  /* 1241b0e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241b0e6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1241b0e9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1241b0eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241b0ee mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1241b0f1:;
  /* 1241b0f1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1241b0f4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1241b0f7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1241b0fa mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1241b0fd mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1241b100 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1241b103 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1241b106 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1241b109 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1241b10c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_1241b10f:;
  /* 1241b10f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1241b112 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_1241b115:;
  /* 1241b115 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241b118 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1241b11b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1241b11d jne 0x1241b12b */
  if (!C.zf) goto L_1241b12b;
  /* 1241b11f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1241b122 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241b125 je 0x1241b23b */
  if (C.zf) goto L_1241b23b;
L_1241b12b:;
  /* 1241b12b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1241b12e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241b131 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1241b134 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1241b137 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1241b13a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241b13d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1241b140 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1241b143 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1241b146 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241b149 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1241b14c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241b14f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1241b152 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1241b155 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1241b158 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1241b15b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1241b15e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1241b161 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1241b164 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1241b167 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1241b16a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241b16d jne 0x1241b23b */
  if (!C.zf) goto L_1241b23b;
  /* 1241b173 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241b177 jae 0x1241b1d4 */
  if (!C.cf) goto L_1241b1d4;
  /* 1241b179 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1241b17c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b17f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1241b183 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1241b186 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b189 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1241b18c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1241b18f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1241b192 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b195 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1241b198 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241b19a jne 0x1241b1b2 */
  if (!C.zf) goto L_1241b1b2;
  /* 1241b19c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1241b1a1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1241b1a4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1241b1a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241b1a9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1241b1ab or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1241b1ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241b1b0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1241b1b2:;
  /* 1241b1b2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1241b1b7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1241b1ba shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1241b1bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241b1bf mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1241b1c2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1241b1c6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1241b1c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241b1cb mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1241b1ce mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1241b1d2 jmp 0x1241b23b */
  goto L_1241b23b;
L_1241b1d4:;
  /* 1241b1d4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1241b1d7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b1da movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1241b1de mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1241b1e1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b1e4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1241b1e7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1241b1ea mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1241b1ed add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b1f0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1241b1f3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241b1f5 jne 0x1241b212 */
  if (!C.zf) goto L_1241b212;
  /* 1241b1f7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1241b1fa sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241b1fd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1241b202 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1241b204 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241b207 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1241b20a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1241b20c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241b20f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1241b212:;
  /* 1241b212 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1241b215 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241b218 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1241b21d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1241b21f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241b222 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1241b225 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1241b22c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1241b22e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241b231 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1241b234 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1241b23b:;
  /* 1241b23b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1241b23e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241b241 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1241b243 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1241b246 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b249 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241b24c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1241b24f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241b252 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1241b254 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241b257 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241b25a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1241b25c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241b25f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241b262 jne 0x1241b3c9 */
  if (!C.zf) goto L_1241b3c9;
  /* 1241b268 cmp dword ptr [0x124441c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124441c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241b26f je 0x1241b3b8 */
  if (C.zf) goto L_1241b3b8;
  /* 1241b275 mov eax, dword ptr [0x124441b8] */
  EAX = (r32((uint32_t)(0x124441b8)));
  /* 1241b27a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1241b27d mov ecx, dword ptr [0x124441c0] */
  ECX = (r32((uint32_t)(0x124441c0)));
  /* 1241b283 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1241b286 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b288 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1241b28b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1241b290 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1241b295 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241b298 push eax */
  push32((uint32_t)(EAX));
  /* 1241b299 call dword ptr [0x1244533c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244533c))), 0x1241b29fu);
  /* 1241b29f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1241b2a4 mov ecx, dword ptr [0x124441b8] */
  ECX = (r32((uint32_t)(0x124441b8)));
  /* 1241b2aa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1241b2ac mov eax, dword ptr [0x124441c0] */
  EAX = (r32((uint32_t)(0x124441c0)));
  /* 1241b2b1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1241b2b4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1241b2b6 mov edx, dword ptr [0x124441c0] */
  EDX = (r32((uint32_t)(0x124441c0)));
  /* 1241b2bc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1241b2bf mov eax, dword ptr [0x124441c0] */
  EAX = (r32((uint32_t)(0x124441c0)));
  /* 1241b2c4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1241b2c7 mov edx, dword ptr [0x124441b8] */
  EDX = (r32((uint32_t)(0x124441b8)));
  /* 1241b2cd mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1241b2d8 mov eax, dword ptr [0x124441c0] */
  EAX = (r32((uint32_t)(0x124441c0)));
  /* 1241b2dd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1241b2e0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1241b2e3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1241b2e6 mov eax, dword ptr [0x124441c0] */
  EAX = (r32((uint32_t)(0x124441c0)));
  /* 1241b2eb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1241b2ee mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1241b2f1 mov edx, dword ptr [0x124441c0] */
  EDX = (r32((uint32_t)(0x124441c0)));
  /* 1241b2f7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1241b2fa movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1241b2fe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1241b300 jne 0x1241b316 */
  if (!C.zf) goto L_1241b316;
  /* 1241b302 mov edx, dword ptr [0x124441c0] */
  EDX = (r32((uint32_t)(0x124441c0)));
  /* 1241b308 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1241b30b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1241b30d mov ecx, dword ptr [0x124441c0] */
  ECX = (r32((uint32_t)(0x124441c0)));
  /* 1241b313 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1241b316:;
  /* 1241b316 mov edx, dword ptr [0x124441c0] */
  EDX = (r32((uint32_t)(0x124441c0)));
  /* 1241b31c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241b320 jne 0x1241b3b8 */
  if (!C.zf) goto L_1241b3b8;
  /* 1241b326 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1241b32b push 0 */
  push32((uint32_t)(0x0u));
  /* 1241b32d mov eax, dword ptr [0x124441c0] */
  EAX = (r32((uint32_t)(0x124441c0)));
  /* 1241b332 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1241b335 push ecx */
  push32((uint32_t)(ECX));
  /* 1241b336 call dword ptr [0x1244533c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244533c))), 0x1241b33cu);
  /* 1241b33c mov edx, dword ptr [0x124441c0] */
  EDX = (r32((uint32_t)(0x124441c0)));
  /* 1241b342 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1241b345 push eax */
  push32((uint32_t)(EAX));
  /* 1241b346 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241b348 mov ecx, dword ptr [0x124441cc] */
  ECX = (r32((uint32_t)(0x124441cc)));
  /* 1241b34e push ecx */
  push32((uint32_t)(ECX));
  /* 1241b34f call dword ptr [0x12445340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445340))), 0x1241b355u);
  /* 1241b355 mov edx, dword ptr [0x124441c4] */
  EDX = (r32((uint32_t)(0x124441c4)));
  /* 1241b35b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241b35e mov eax, dword ptr [0x124441c8] */
  EAX = (r32((uint32_t)(0x124441c8)));
  /* 1241b363 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b365 mov ecx, dword ptr [0x124441c0] */
  ECX = (r32((uint32_t)(0x124441c0)));
  /* 1241b36b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b36e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241b370 push eax */
  push32((uint32_t)(EAX));
  /* 1241b371 mov edx, dword ptr [0x124441c0] */
  EDX = (r32((uint32_t)(0x124441c0)));
  /* 1241b377 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b37a push edx */
  push32((uint32_t)(EDX));
  /* 1241b37b mov eax, dword ptr [0x124441c0] */
  EAX = (r32((uint32_t)(0x124441c0)));
  /* 1241b380 push eax */
  push32((uint32_t)(EAX));
  /* 1241b381 call 0x1241e930 */
  push32(0x1241b386u); f_1241e930();
  /* 1241b386 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b389 mov ecx, dword ptr [0x124441c4] */
  ECX = (r32((uint32_t)(0x124441c4)));
  /* 1241b38f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241b392 mov dword ptr [0x124441c4], ecx */
  w32((uint32_t)(0x124441c4), (ECX));
  /* 1241b398 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241b39b cmp edx, dword ptr [0x124441c0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x124441c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241b3a1 jbe 0x1241b3ac */
  if ((C.cf||C.zf)) goto L_1241b3ac;
  /* 1241b3a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241b3a6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241b3a9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1241b3ac:;
  /* 1241b3ac mov ecx, dword ptr [0x124441c8] */
  ECX = (r32((uint32_t)(0x124441c8)));
  /* 1241b3b2 mov dword ptr [0x124441bc], ecx */
  w32((uint32_t)(0x124441bc), (ECX));
L_1241b3b8:;
  /* 1241b3b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241b3bb mov dword ptr [0x124441c0], edx */
  w32((uint32_t)(0x124441c0), (EDX));
  /* 1241b3c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241b3c4 mov dword ptr [0x124441b8], eax */
  w32((uint32_t)(0x124441b8), (EAX));
L_1241b3c9:;
  /* 1241b3c9 mov esp, ebp */
  ESP = (EBP);
  /* 1241b3cb pop ebp */
  EBP = (pop32());
  /* 1241b3cc ret  */
  ESPCHK(0x1241ae00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b3d0 @ 0x1241b3d0 (1334 bytes, 427 insns) */
void f_1241b3d0(void) {
  FTRACE(0x1241b3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241b3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1241b3d1 mov ebp, esp */
  EBP = (ESP);
  /* 1241b3d3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241b3d6 push esi */
  push32((uint32_t)(ESI));
  /* 1241b3d7 mov eax, dword ptr [0x124441c4] */
  EAX = (r32((uint32_t)(0x124441c4)));
  /* 1241b3dc imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241b3df mov ecx, dword ptr [0x124441c8] */
  ECX = (r32((uint32_t)(0x124441c8)));
  /* 1241b3e5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b3e7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1241b3ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241b3ed add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b3f0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1241b3f3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1241b3f6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1241b3f9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1241b3fc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241b3ff mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1241b402 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241b406 jge 0x1241b41c */
  if ((C.sf==C.of)) goto L_1241b41c;
  /* 1241b408 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1241b40b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241b40e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1241b410 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1241b413 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 1241b41a jmp 0x1241b431 */
  goto L_1241b431;
L_1241b41c:;
  /* 1241b41c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1241b423 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241b426 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241b429 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1241b42c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1241b42e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_1241b431:;
  /* 1241b431 mov ecx, dword ptr [0x124441bc] */
  ECX = (r32((uint32_t)(0x124441bc)));
  /* 1241b437 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1241b43a:;
  /* 1241b43a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241b43d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241b440 jae 0x1241b466 */
  if (!C.cf) goto L_1241b466;
  /* 1241b442 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241b445 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241b448 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 1241b44a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241b44d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1241b450 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 1241b453 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1241b455 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1241b457 je 0x1241b45b */
  if (C.zf) goto L_1241b45b;
  /* 1241b459 jmp 0x1241b466 */
  goto L_1241b466;
L_1241b45b:;
  /* 1241b45b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241b45e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b461 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1241b464 jmp 0x1241b43a */
  goto L_1241b43a;
L_1241b466:;
  /* 1241b466 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241b469 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241b46c jne 0x1241b54d */
  if (!C.zf) goto L_1241b54d;
  /* 1241b472 mov eax, dword ptr [0x124441c8] */
  EAX = (r32((uint32_t)(0x124441c8)));
  /* 1241b477 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1241b47a:;
  /* 1241b47a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241b47d cmp ecx, dword ptr [0x124441bc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x124441bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241b483 jae 0x1241b4a9 */
  if (!C.cf) goto L_1241b4a9;
  /* 1241b485 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241b488 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241b48b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1241b48d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241b490 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1241b493 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 1241b496 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1241b498 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241b49a je 0x1241b49e */
  if (C.zf) goto L_1241b49e;
  /* 1241b49c jmp 0x1241b4a9 */
  goto L_1241b4a9;
L_1241b49e:;
  /* 1241b49e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241b4a1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b4a4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1241b4a7 jmp 0x1241b47a */
  goto L_1241b47a;
L_1241b4a9:;
  /* 1241b4a9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241b4ac cmp ecx, dword ptr [0x124441bc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x124441bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241b4b2 jne 0x1241b54d */
  if (!C.zf) goto L_1241b54d;
L_1241b4b8:;
  /* 1241b4b8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241b4bb cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241b4be jae 0x1241b4d6 */
  if (!C.cf) goto L_1241b4d6;
  /* 1241b4c0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241b4c3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241b4c7 je 0x1241b4cb */
  if (C.zf) goto L_1241b4cb;
  /* 1241b4c9 jmp 0x1241b4d6 */
  goto L_1241b4d6;
L_1241b4cb:;
  /* 1241b4cb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241b4ce add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b4d1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1241b4d4 jmp 0x1241b4b8 */
  goto L_1241b4b8;
L_1241b4d6:;
  /* 1241b4d6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241b4d9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241b4dc jne 0x1241b527 */
  if (!C.zf) goto L_1241b527;
  /* 1241b4de mov eax, dword ptr [0x124441c8] */
  EAX = (r32((uint32_t)(0x124441c8)));
  /* 1241b4e3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1241b4e6:;
  /* 1241b4e6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241b4e9 cmp ecx, dword ptr [0x124441bc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x124441bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241b4ef jae 0x1241b507 */
  if (!C.cf) goto L_1241b507;
  /* 1241b4f1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241b4f4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241b4f8 je 0x1241b4fc */
  if (C.zf) goto L_1241b4fc;
  /* 1241b4fa jmp 0x1241b507 */
  goto L_1241b507;
L_1241b4fc:;
  /* 1241b4fc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241b4ff add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b502 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1241b505 jmp 0x1241b4e6 */
  goto L_1241b4e6;
L_1241b507:;
  /* 1241b507 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241b50a cmp ecx, dword ptr [0x124441bc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x124441bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241b510 jne 0x1241b527 */
  if (!C.zf) goto L_1241b527;
  /* 1241b512 call 0x1241b910 */
  push32(0x1241b517u); f_1241b910();
  /* 1241b517 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1241b51a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241b51e jne 0x1241b527 */
  if (!C.zf) goto L_1241b527;
  /* 1241b520 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241b522 jmp 0x1241b901 */
  goto L_1241b901;
L_1241b527:;
  /* 1241b527 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241b52a push edx */
  push32((uint32_t)(EDX));
  /* 1241b52b call 0x1241ba20 */
  push32(0x1241b530u); f_1241ba20();
  /* 1241b530 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b533 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241b536 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1241b539 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1241b53b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241b53e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1241b541 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241b544 jne 0x1241b54d */
  if (!C.zf) goto L_1241b54d;
  /* 1241b546 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241b548 jmp 0x1241b901 */
  goto L_1241b901;
L_1241b54d:;
  /* 1241b54d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241b550 mov dword ptr [0x124441bc], edx */
  w32((uint32_t)(0x124441bc), (EDX));
  /* 1241b556 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241b559 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1241b55c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 1241b55f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1241b562 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1241b564 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1241b567 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241b56b je 0x1241b590 */
  if (C.zf) goto L_1241b590;
  /* 1241b56d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241b570 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1241b573 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241b576 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 1241b57a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241b57d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1241b580 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1241b583 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1241b58a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1241b58c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241b58e jne 0x1241b5c5 */
  if (!C.zf) goto L_1241b5c5;
L_1241b590:;
  /* 1241b590 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_1241b597:;
  /* 1241b597 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241b59a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1241b59d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241b5a0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1241b5a4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241b5a7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1241b5aa mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1241b5ad and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1241b5b4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1241b5b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241b5b8 jne 0x1241b5c5 */
  if (!C.zf) goto L_1241b5c5;
  /* 1241b5ba mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241b5bd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b5c0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1241b5c3 jmp 0x1241b597 */
  goto L_1241b597;
L_1241b5c5:;
  /* 1241b5c5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241b5c8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241b5ce mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1241b5d1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1241b5d8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1241b5db mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1241b5e2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241b5e5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1241b5e8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241b5eb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1241b5ef mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1241b5f2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241b5f6 jne 0x1241b612 */
  if (!C.zf) goto L_1241b612;
  /* 1241b5f8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1241b5ff mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241b602 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1241b605 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1241b608 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1241b60f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_1241b612:;
  /* 1241b612 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241b616 jl 0x1241b62b */
  if ((C.sf!=C.of)) goto L_1241b62b;
  /* 1241b618 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1241b61b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1241b61d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1241b620 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241b623 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b626 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1241b629 jmp 0x1241b612 */
  goto L_1241b612;
L_1241b62b:;
  /* 1241b62b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241b62e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241b631 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 1241b635 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1241b638 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241b63b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1241b63d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241b640 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1241b643 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241b646 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1241b649 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241b64c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1241b64f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241b653 jle 0x1241b65c */
  if ((C.zf||C.sf!=C.of)) goto L_1241b65c;
  /* 1241b655 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_1241b65c:;
  /* 1241b65c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241b65f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241b662 je 0x1241b880 */
  if (C.zf) goto L_1241b880;
  /* 1241b668 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241b66b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241b66e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1241b671 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241b674 jne 0x1241b74a */
  if (!C.zf) goto L_1241b74a;
  /* 1241b67a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241b67e jge 0x1241b6df */
  if ((C.sf==C.of)) goto L_1241b6df;
  /* 1241b680 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1241b685 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241b688 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1241b68a not eax */
  EAX = (~(EAX));
  /* 1241b68c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241b68f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1241b692 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1241b696 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1241b698 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241b69b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1241b69e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1241b6a2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1241b6a5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b6a8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1241b6ab sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1241b6ae mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1241b6b1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b6b4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1241b6b7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1241b6ba add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b6bd movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1241b6c1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241b6c3 jne 0x1241b6dd */
  if (!C.zf) goto L_1241b6dd;
  /* 1241b6c5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1241b6ca mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241b6cd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1241b6cf not eax */
  EAX = (~(EAX));
  /* 1241b6d1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241b6d4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1241b6d6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1241b6d8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241b6db mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1241b6dd:;
  /* 1241b6dd jmp 0x1241b74a */
  goto L_1241b74a;
L_1241b6df:;
  /* 1241b6df mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241b6e2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241b6e5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1241b6ea shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1241b6ec not edx */
  EDX = (~(EDX));
  /* 1241b6ee mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241b6f1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1241b6f4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1241b6fb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1241b6fd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241b700 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1241b703 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1241b70a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1241b70d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b710 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1241b713 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1241b716 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1241b719 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b71c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1241b71f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1241b722 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b725 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1241b729 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1241b72b jne 0x1241b74a */
  if (!C.zf) goto L_1241b74a;
  /* 1241b72d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241b730 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241b733 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1241b738 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1241b73a not edx */
  EDX = (~(EDX));
  /* 1241b73c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241b73f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1241b742 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1241b744 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241b747 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1241b74a:;
  /* 1241b74a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241b74d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1241b750 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241b753 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1241b756 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1241b759 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241b75c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1241b75f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241b762 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1241b765 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1241b768 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241b76c je 0x1241b880 */
  if (C.zf) goto L_1241b880;
  /* 1241b772 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241b775 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241b778 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1241b77b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1241b77e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241b781 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241b784 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1241b787 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1241b78a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241b78d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241b790 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1241b793 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241b796 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241b799 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1241b79c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241b79f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1241b7a2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241b7a5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1241b7a8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241b7ab mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241b7ae mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1241b7b1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241b7b4 jne 0x1241b880 */
  if (!C.zf) goto L_1241b880;
  /* 1241b7ba cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241b7be jge 0x1241b81a */
  if ((C.sf==C.of)) goto L_1241b81a;
  /* 1241b7c0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1241b7c3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b7c6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1241b7ca mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1241b7cd add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b7d0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1241b7d3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1241b7d5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1241b7d8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b7db mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1241b7de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1241b7e0 jne 0x1241b7f8 */
  if (!C.zf) goto L_1241b7f8;
  /* 1241b7e2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1241b7e7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241b7ea shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1241b7ec mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241b7ef mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1241b7f1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1241b7f3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241b7f6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1241b7f8:;
  /* 1241b7f8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1241b7fd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241b800 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1241b802 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241b805 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1241b808 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1241b80c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1241b80e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241b811 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1241b814 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1241b818 jmp 0x1241b880 */
  goto L_1241b880;
L_1241b81a:;
  /* 1241b81a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1241b81d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b820 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1241b824 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1241b827 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b82a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1241b82d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1241b82f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1241b832 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b835 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1241b838 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1241b83a jne 0x1241b857 */
  if (!C.zf) goto L_1241b857;
  /* 1241b83c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241b83f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241b842 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1241b847 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1241b849 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241b84c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1241b84f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1241b851 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241b854 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1241b857:;
  /* 1241b857 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241b85a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241b85d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1241b862 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1241b864 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241b867 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1241b86a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1241b871 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1241b873 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241b876 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1241b879 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1241b880:;
  /* 1241b880 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241b884 je 0x1241b89a */
  if (C.zf) goto L_1241b89a;
  /* 1241b886 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241b889 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241b88c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1241b88e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241b891 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b894 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241b897 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1241b89a:;
  /* 1241b89a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241b89d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b8a0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1241b8a3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1241b8a6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b8a9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241b8ac mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1241b8ae mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1241b8b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b8b4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241b8b7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b8ba mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1241b8bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241b8c0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1241b8c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241b8c5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1241b8c7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b8ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241b8cd mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1241b8cf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1241b8d1 jne 0x1241b8f3 */
  if (!C.zf) goto L_1241b8f3;
  /* 1241b8d3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241b8d6 cmp eax, dword ptr [0x124441c0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x124441c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241b8dc jne 0x1241b8f3 */
  if (!C.zf) goto L_1241b8f3;
  /* 1241b8de mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241b8e1 cmp ecx, dword ptr [0x124441b8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x124441b8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241b8e7 jne 0x1241b8f3 */
  if (!C.zf) goto L_1241b8f3;
  /* 1241b8e9 mov dword ptr [0x124441c0], 0 */
  w32((uint32_t)(0x124441c0), (0x0u));
L_1241b8f3:;
  /* 1241b8f3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1241b8f6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241b8f9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1241b8fb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241b8fe add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1241b901:;
  /* 1241b901 pop esi */
  ESI = (pop32());
  /* 1241b902 mov esp, ebp */
  ESP = (EBP);
  /* 1241b904 pop ebp */
  EBP = (pop32());
  /* 1241b905 ret  */
  ESPCHK(0x1241b3d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b910 @ 0x1241b910 (271 bytes, 78 insns) */
void f_1241b910(void) {
  FTRACE(0x1241b910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241b910 push ebp */
  push32((uint32_t)(EBP));
  /* 1241b911 mov ebp, esp */
  EBP = (ESP);
  /* 1241b913 push ecx */
  push32((uint32_t)(ECX));
  /* 1241b914 mov eax, dword ptr [0x124441c4] */
  EAX = (r32((uint32_t)(0x124441c4)));
  /* 1241b919 cmp eax, dword ptr [0x124441a8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x124441a8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241b91f jne 0x1241b96b */
  if (!C.zf) goto L_1241b96b;
  /* 1241b921 mov ecx, dword ptr [0x124441a8] */
  ECX = (r32((uint32_t)(0x124441a8)));
  /* 1241b927 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b92a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241b92d push ecx */
  push32((uint32_t)(ECX));
  /* 1241b92e mov edx, dword ptr [0x124441c8] */
  EDX = (r32((uint32_t)(0x124441c8)));
  /* 1241b934 push edx */
  push32((uint32_t)(EDX));
  /* 1241b935 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241b937 mov eax, dword ptr [0x124441cc] */
  EAX = (r32((uint32_t)(0x124441cc)));
  /* 1241b93c push eax */
  push32((uint32_t)(EAX));
  /* 1241b93d call dword ptr [0x1244531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244531c))), 0x1241b943u);
  /* 1241b943 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1241b946 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241b94a jne 0x1241b953 */
  if (!C.zf) goto L_1241b953;
  /* 1241b94c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241b94e jmp 0x1241ba1b */
  goto L_1241ba1b;
L_1241b953:;
  /* 1241b953 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241b956 mov dword ptr [0x124441c8], ecx */
  w32((uint32_t)(0x124441c8), (ECX));
  /* 1241b95c mov edx, dword ptr [0x124441a8] */
  EDX = (r32((uint32_t)(0x124441a8)));
  /* 1241b962 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b965 mov dword ptr [0x124441a8], edx */
  w32((uint32_t)(0x124441a8), (EDX));
L_1241b96b:;
  /* 1241b96b mov eax, dword ptr [0x124441c4] */
  EAX = (r32((uint32_t)(0x124441c4)));
  /* 1241b970 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241b973 mov ecx, dword ptr [0x124441c8] */
  ECX = (r32((uint32_t)(0x124441c8)));
  /* 1241b979 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241b97b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1241b97e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1241b983 push 8 */
  push32((uint32_t)(0x8u));
  /* 1241b985 mov edx, dword ptr [0x124441cc] */
  EDX = (r32((uint32_t)(0x124441cc)));
  /* 1241b98b push edx */
  push32((uint32_t)(EDX));
  /* 1241b98c call dword ptr [0x12445320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445320))), 0x1241b992u);
  /* 1241b992 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241b995 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 1241b998 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241b99b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241b99f jne 0x1241b9a5 */
  if (!C.zf) goto L_1241b9a5;
  /* 1241b9a1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241b9a3 jmp 0x1241ba1b */
  goto L_1241ba1b;
L_1241b9a5:;
  /* 1241b9a5 push 4 */
  push32((uint32_t)(0x4u));
  /* 1241b9a7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1241b9ac push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1241b9b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241b9b3 call dword ptr [0x12445318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445318))), 0x1241b9b9u);
  /* 1241b9b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241b9bc mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1241b9bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241b9c2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241b9c6 jne 0x1241b9e2 */
  if (!C.zf) goto L_1241b9e2;
  /* 1241b9c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241b9cb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1241b9ce push ecx */
  push32((uint32_t)(ECX));
  /* 1241b9cf push 0 */
  push32((uint32_t)(0x0u));
  /* 1241b9d1 mov edx, dword ptr [0x124441cc] */
  EDX = (r32((uint32_t)(0x124441cc)));
  /* 1241b9d7 push edx */
  push32((uint32_t)(EDX));
  /* 1241b9d8 call dword ptr [0x12445340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445340))), 0x1241b9deu);
  /* 1241b9de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241b9e0 jmp 0x1241ba1b */
  goto L_1241ba1b;
L_1241b9e2:;
  /* 1241b9e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241b9e5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1241b9eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241b9ee mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1241b9f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241b9f8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1241b9ff mov eax, dword ptr [0x124441c4] */
  EAX = (r32((uint32_t)(0x124441c4)));
  /* 1241ba04 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241ba07 mov dword ptr [0x124441c4], eax */
  w32((uint32_t)(0x124441c4), (EAX));
  /* 1241ba0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241ba0f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1241ba12 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 1241ba18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1241ba1b:;
  /* 1241ba1b mov esp, ebp */
  ESP = (EBP);
  /* 1241ba1d pop ebp */
  EBP = (pop32());
  /* 1241ba1e ret  */
  ESPCHK(0x1241b910u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba20 @ 0x1241ba20 (494 bytes, 149 insns) */
void f_1241ba20(void) {
  FTRACE(0x1241ba20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241ba20 push ebp */
  push32((uint32_t)(EBP));
  /* 1241ba21 mov ebp, esp */
  EBP = (ESP);
  /* 1241ba23 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241ba26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241ba29 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1241ba2c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1241ba2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241ba32 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1241ba35 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1241ba38 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_1241ba3f:;
  /* 1241ba3f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241ba43 jl 0x1241ba58 */
  if ((C.sf!=C.of)) goto L_1241ba58;
  /* 1241ba45 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241ba48 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1241ba4a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1241ba4d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1241ba50 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241ba53 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1241ba56 jmp 0x1241ba3f */
  goto L_1241ba3f;
L_1241ba58:;
  /* 1241ba58 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1241ba5b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241ba61 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1241ba64 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1241ba6b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1241ba6e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1241ba75 jmp 0x1241ba80 */
  goto L_1241ba80;
L_1241ba77:;
  /* 1241ba77 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241ba7a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241ba7d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1241ba80:;
  /* 1241ba80 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241ba84 jge 0x1241baa6 */
  if ((C.sf==C.of)) goto L_1241baa6;
  /* 1241ba86 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241ba89 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241ba8c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 1241ba8f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1241ba92 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241ba95 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241ba98 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1241ba9b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241ba9e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241baa1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1241baa4 jmp 0x1241ba77 */
  goto L_1241ba77;
L_1241baa6:;
  /* 1241baa6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1241baa9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1241baac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241baaf mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1241bab2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241bab4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1241bab7 push 4 */
  push32((uint32_t)(0x4u));
  /* 1241bab9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1241babe push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1241bac3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241bac6 push edx */
  push32((uint32_t)(EDX));
  /* 1241bac7 call dword ptr [0x12445318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445318))), 0x1241bacdu);
  /* 1241bacd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241bacf jne 0x1241bad9 */
  if (!C.zf) goto L_1241bad9;
  /* 1241bad1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1241bad4 jmp 0x1241bc0a */
  goto L_1241bc0a;
L_1241bad9:;
  /* 1241bad9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241badc add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241bae1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1241bae4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241bae7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1241baea jmp 0x1241baf8 */
  goto L_1241baf8;
L_1241baec:;
  /* 1241baec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241baef add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241baf5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1241baf8:;
  /* 1241baf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241bafb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241bafe ja 0x1241bb5d */
  if ((!C.cf&&!C.zf)) goto L_1241bb5d;
  /* 1241bb00 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241bb03 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1241bb0a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241bb0d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 1241bb17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241bb1a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241bb1d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1241bb20 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241bb23 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1241bb29 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241bb2c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241bb32 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241bb35 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1241bb38 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241bb3b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241bb41 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241bb44 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1241bb47 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241bb4a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241bb4f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1241bb52 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241bb55 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1241bb5b jmp 0x1241baec */
  goto L_1241baec;
L_1241bb5d:;
  /* 1241bb5d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241bb60 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241bb66 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1241bb69 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241bb6c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241bb6f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241bb72 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1241bb75 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241bb78 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1241bb7b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1241bb7e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241bb81 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241bb84 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1241bb87 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1241bb8a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241bb8d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241bb90 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1241bb93 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241bb96 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1241bb99 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1241bb9c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241bb9f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241bba2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1241bba5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1241bba8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1241bbab mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 1241bbb3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1241bbb6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1241bbb9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 1241bbc4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1241bbc7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 1241bbcb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1241bbce mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 1241bbd1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1241bbd4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1241bbd7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 1241bbda test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241bbdc jne 0x1241bbed */
  if (!C.zf) goto L_1241bbed;
  /* 1241bbde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241bbe1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1241bbe4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1241bbe7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241bbea mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1241bbed:;
  /* 1241bbed mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1241bbf2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1241bbf5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1241bbf7 not edx */
  EDX = (~(EDX));
  /* 1241bbf9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241bbfc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1241bbff and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1241bc01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241bc04 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1241bc07 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1241bc0a:;
  /* 1241bc0a mov esp, ebp */
  ESP = (EBP);
  /* 1241bc0c pop ebp */
  EBP = (pop32());
  /* 1241bc0d ret  */
  ESPCHK(0x1241ba20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc10 @ 0x1241bc10 (1515 bytes, 489 insns) */
void f_1241bc10(void) {
  FTRACE(0x1241bc10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241bc10 push ebp */
  push32((uint32_t)(EBP));
  /* 1241bc11 mov ebp, esp */
  EBP = (ESP);
  /* 1241bc13 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241bc16 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1241bc19 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241bc1c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1241bc1e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1241bc21 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241bc24 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1241bc27 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1241bc2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241bc2d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241bc30 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241bc33 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1241bc36 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241bc39 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1241bc3c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1241bc3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241bc42 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241bc48 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241bc4b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1241bc52 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1241bc55 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241bc58 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241bc5b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1241bc5e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241bc61 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1241bc63 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241bc66 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1241bc69 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241bc6c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241bc6f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1241bc72 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1241bc75 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1241bc77 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1241bc7a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1241bc7d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241bc80 jle 0x1241bf36 */
  if ((C.zf||C.sf!=C.of)) goto L_1241bf36;
  /* 1241bc86 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241bc89 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1241bc8c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1241bc8e jne 0x1241bc9b */
  if (!C.zf) goto L_1241bc9b;
  /* 1241bc90 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1241bc93 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241bc96 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241bc99 jle 0x1241bca2 */
  if ((C.zf||C.sf!=C.of)) goto L_1241bca2;
L_1241bc9b:;
  /* 1241bc9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241bc9d jmp 0x1241c1f7 */
  goto L_1241c1f7;
L_1241bca2:;
  /* 1241bca2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241bca5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1241bca8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241bcab mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1241bcae cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241bcb2 jbe 0x1241bcbb */
  if ((C.cf||C.zf)) goto L_1241bcbb;
  /* 1241bcb4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1241bcbb:;
  /* 1241bcbb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1241bcbe mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1241bcc1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1241bcc4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241bcc7 jne 0x1241bd9d */
  if (!C.zf) goto L_1241bd9d;
  /* 1241bccd cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241bcd1 jae 0x1241bd32 */
  if (!C.cf) goto L_1241bd32;
  /* 1241bcd3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1241bcd8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241bcdb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1241bcdd not edx */
  EDX = (~(EDX));
  /* 1241bcdf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241bce2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241bce5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1241bce9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1241bceb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241bcee mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241bcf1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1241bcf5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241bcf8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241bcfb mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1241bcfe sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1241bd01 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241bd04 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241bd07 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1241bd0a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241bd0d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241bd10 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1241bd14 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1241bd16 jne 0x1241bd30 */
  if (!C.zf) goto L_1241bd30;
  /* 1241bd18 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1241bd1d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241bd20 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1241bd22 not edx */
  EDX = (~(EDX));
  /* 1241bd24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241bd27 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1241bd29 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1241bd2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241bd2e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1241bd30:;
  /* 1241bd30 jmp 0x1241bd9d */
  goto L_1241bd9d;
L_1241bd32:;
  /* 1241bd32 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241bd35 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241bd38 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1241bd3d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1241bd3f not eax */
  EAX = (~(EAX));
  /* 1241bd41 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241bd44 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241bd47 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1241bd4e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1241bd50 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241bd53 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241bd56 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1241bd5d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241bd60 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241bd63 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1241bd66 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1241bd69 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241bd6c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241bd6f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1241bd72 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241bd75 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241bd78 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1241bd7c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241bd7e jne 0x1241bd9d */
  if (!C.zf) goto L_1241bd9d;
  /* 1241bd80 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241bd83 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241bd86 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1241bd8b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1241bd8d not eax */
  EAX = (~(EAX));
  /* 1241bd8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241bd92 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1241bd95 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1241bd97 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241bd9a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1241bd9d:;
  /* 1241bd9d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1241bda0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1241bda3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1241bda6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1241bda9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1241bdac mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1241bdaf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1241bdb2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1241bdb5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1241bdb8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1241bdbb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1241bdbe add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241bdc1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241bdc4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1241bdc7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241bdcb jle 0x1241bf17 */
  if ((C.zf||C.sf!=C.of)) goto L_1241bf17;
  /* 1241bdd1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241bdd4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241bdd7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1241bdda mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241bddd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1241bde0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241bde3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1241bde6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241bdea jbe 0x1241bdf3 */
  if ((C.cf||C.zf)) goto L_1241bdf3;
  /* 1241bdec mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1241bdf3:;
  /* 1241bdf3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241bdf6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241bdf9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1241bdfc mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1241bdff mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1241be02 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241be05 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1241be08 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1241be0b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1241be0e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241be11 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1241be14 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241be17 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1241be1a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1241be1d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1241be20 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1241be23 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1241be26 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1241be29 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1241be2c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1241be2f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1241be32 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241be35 jne 0x1241bf03 */
  if (!C.zf) goto L_1241bf03;
  /* 1241be3b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241be3f jae 0x1241be9c */
  if (!C.cf) goto L_1241be9c;
  /* 1241be41 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241be44 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241be47 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1241be4b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241be4e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241be51 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1241be54 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1241be57 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241be5a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241be5d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1241be60 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241be62 jne 0x1241be7a */
  if (!C.zf) goto L_1241be7a;
  /* 1241be64 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1241be69 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241be6c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1241be6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241be71 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1241be73 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1241be75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241be78 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1241be7a:;
  /* 1241be7a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1241be7f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241be82 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1241be84 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241be87 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241be8a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1241be8e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1241be90 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241be93 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241be96 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1241be9a jmp 0x1241bf03 */
  goto L_1241bf03;
L_1241be9c:;
  /* 1241be9c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241be9f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241bea2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1241bea6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241bea9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241beac mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1241beaf add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1241beb2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241beb5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241beb8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1241bebb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241bebd jne 0x1241beda */
  if (!C.zf) goto L_1241beda;
  /* 1241bebf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241bec2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241bec5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1241beca shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1241becc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241becf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1241bed2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1241bed4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241bed7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1241beda:;
  /* 1241beda mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241bedd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241bee0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1241bee5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1241bee7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241beea mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241beed mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1241bef4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1241bef6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241bef9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241befc mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1241bf03:;
  /* 1241bf03 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1241bf06 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241bf09 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1241bf0b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1241bf0e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241bf11 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241bf14 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_1241bf17:;
  /* 1241bf17 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1241bf1a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241bf1d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241bf20 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1241bf22 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1241bf25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241bf28 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241bf2b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241bf2e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1241bf31 jmp 0x1241c1f2 */
  goto L_1241c1f2;
L_1241bf36:;
  /* 1241bf36 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1241bf39 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241bf3c jge 0x1241c1f2 */
  if ((C.sf==C.of)) goto L_1241c1f2;
  /* 1241bf42 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1241bf45 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241bf48 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241bf4b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1241bf4d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1241bf50 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241bf53 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241bf56 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241bf59 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1241bf5c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241bf5f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241bf62 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1241bf65 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1241bf68 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241bf6b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1241bf6e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1241bf71 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1241bf74 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241bf77 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1241bf7a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241bf7e jbe 0x1241bf87 */
  if ((C.cf||C.zf)) goto L_1241bf87;
  /* 1241bf80 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1241bf87:;
  /* 1241bf87 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241bf8a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1241bf8d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241bf8f jne 0x1241c0d0 */
  if (!C.zf) goto L_1241c0d0;
  /* 1241bf95 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241bf98 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1241bf9b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241bf9e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1241bfa1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241bfa5 jbe 0x1241bfae */
  if ((C.cf||C.zf)) goto L_1241bfae;
  /* 1241bfa7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1241bfae:;
  /* 1241bfae mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1241bfb1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1241bfb4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1241bfb7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241bfba jne 0x1241c090 */
  if (!C.zf) goto L_1241c090;
  /* 1241bfc0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241bfc4 jae 0x1241c025 */
  if (!C.cf) goto L_1241c025;
  /* 1241bfc6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1241bfcb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241bfce shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1241bfd0 not edx */
  EDX = (~(EDX));
  /* 1241bfd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241bfd5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241bfd8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1241bfdc and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1241bfde mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241bfe1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241bfe4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1241bfe8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241bfeb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241bfee mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1241bff1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1241bff4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241bff7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241bffa mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1241bffd mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241c000 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241c003 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1241c007 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1241c009 jne 0x1241c023 */
  if (!C.zf) goto L_1241c023;
  /* 1241c00b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1241c010 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241c013 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1241c015 not edx */
  EDX = (~(EDX));
  /* 1241c017 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241c01a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1241c01c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1241c01e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241c021 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1241c023:;
  /* 1241c023 jmp 0x1241c090 */
  goto L_1241c090;
L_1241c025:;
  /* 1241c025 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241c028 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241c02b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1241c030 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1241c032 not eax */
  EAX = (~(EAX));
  /* 1241c034 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241c037 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241c03a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1241c041 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1241c043 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241c046 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241c049 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1241c050 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241c053 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241c056 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1241c059 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1241c05c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241c05f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241c062 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1241c065 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241c068 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241c06b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1241c06f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241c071 jne 0x1241c090 */
  if (!C.zf) goto L_1241c090;
  /* 1241c073 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241c076 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241c079 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1241c07e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1241c080 not eax */
  EAX = (~(EAX));
  /* 1241c082 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241c085 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1241c088 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1241c08a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241c08d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1241c090:;
  /* 1241c090 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1241c093 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1241c096 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1241c099 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1241c09c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1241c09f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1241c0a2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1241c0a5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1241c0a8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1241c0ab mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1241c0ae mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1241c0b1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241c0b4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1241c0b7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1241c0ba sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1241c0bd sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241c0c0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1241c0c3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c0c7 jbe 0x1241c0d0 */
  if ((C.cf||C.zf)) goto L_1241c0d0;
  /* 1241c0c9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1241c0d0:;
  /* 1241c0d0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241c0d3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241c0d6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1241c0d9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1241c0dc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241c0df mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241c0e2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1241c0e5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1241c0e8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241c0eb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241c0ee mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1241c0f1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241c0f4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241c0f7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1241c0fa mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241c0fd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1241c100 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241c103 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1241c106 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241c109 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241c10c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1241c10f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c112 jne 0x1241c1de */
  if (!C.zf) goto L_1241c1de;
  /* 1241c118 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c11c jae 0x1241c178 */
  if (!C.cf) goto L_1241c178;
  /* 1241c11e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241c121 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241c124 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1241c128 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241c12b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241c12e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1241c131 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1241c133 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241c136 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241c139 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1241c13c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1241c13e jne 0x1241c156 */
  if (!C.zf) goto L_1241c156;
  /* 1241c140 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1241c145 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241c148 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1241c14a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241c14d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1241c14f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1241c151 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241c154 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1241c156:;
  /* 1241c156 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1241c15b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241c15e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1241c160 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241c163 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241c166 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1241c16a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1241c16c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241c16f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241c172 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1241c176 jmp 0x1241c1de */
  goto L_1241c1de;
L_1241c178:;
  /* 1241c178 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241c17b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241c17e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1241c182 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241c185 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241c188 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1241c18b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1241c18d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241c190 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241c193 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1241c196 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1241c198 jne 0x1241c1b5 */
  if (!C.zf) goto L_1241c1b5;
  /* 1241c19a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241c19d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241c1a0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1241c1a5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1241c1a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241c1aa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1241c1ad or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1241c1af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241c1b2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1241c1b5:;
  /* 1241c1b5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241c1b8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241c1bb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1241c1c0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1241c1c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241c1c5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241c1c8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1241c1cf or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1241c1d1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241c1d4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241c1d7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1241c1de:;
  /* 1241c1de mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241c1e1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1241c1e4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1241c1e6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241c1e9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241c1ec mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1241c1ef mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1241c1f2:;
  /* 1241c1f2 mov eax, 1 */
  EAX = (0x1u);
L_1241c1f7:;
  /* 1241c1f7 mov esp, ebp */
  ESP = (EBP);
  /* 1241c1f9 pop ebp */
  EBP = (pop32());
  /* 1241c1fa ret  */
  ESPCHK(0x1241bc10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c200 @ 0x1241c200 (304 bytes, 79 insns) */
void f_1241c200(void) {
  FTRACE(0x1241c200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241c200 push ebp */
  push32((uint32_t)(EBP));
  /* 1241c201 mov ebp, esp */
  EBP = (ESP);
  /* 1241c203 push ecx */
  push32((uint32_t)(ECX));
  /* 1241c204 cmp dword ptr [0x124441c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124441c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c20b je 0x1241c32c */
  if (C.zf) goto L_1241c32c;
  /* 1241c211 mov eax, dword ptr [0x124441b8] */
  EAX = (r32((uint32_t)(0x124441b8)));
  /* 1241c216 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1241c219 mov ecx, dword ptr [0x124441c0] */
  ECX = (r32((uint32_t)(0x124441c0)));
  /* 1241c21f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1241c222 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241c224 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1241c227 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1241c22c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1241c231 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241c234 push eax */
  push32((uint32_t)(EAX));
  /* 1241c235 call dword ptr [0x1244533c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244533c))), 0x1241c23bu);
  /* 1241c23b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1241c240 mov ecx, dword ptr [0x124441b8] */
  ECX = (r32((uint32_t)(0x124441b8)));
  /* 1241c246 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1241c248 mov eax, dword ptr [0x124441c0] */
  EAX = (r32((uint32_t)(0x124441c0)));
  /* 1241c24d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1241c250 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1241c252 mov edx, dword ptr [0x124441c0] */
  EDX = (r32((uint32_t)(0x124441c0)));
  /* 1241c258 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1241c25b mov eax, dword ptr [0x124441c0] */
  EAX = (r32((uint32_t)(0x124441c0)));
  /* 1241c260 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1241c263 mov edx, dword ptr [0x124441b8] */
  EDX = (r32((uint32_t)(0x124441b8)));
  /* 1241c269 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1241c274 mov eax, dword ptr [0x124441c0] */
  EAX = (r32((uint32_t)(0x124441c0)));
  /* 1241c279 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1241c27c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1241c27f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1241c282 mov eax, dword ptr [0x124441c0] */
  EAX = (r32((uint32_t)(0x124441c0)));
  /* 1241c287 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1241c28a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1241c28d mov edx, dword ptr [0x124441c0] */
  EDX = (r32((uint32_t)(0x124441c0)));
  /* 1241c293 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1241c296 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1241c29a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1241c29c jne 0x1241c2b2 */
  if (!C.zf) goto L_1241c2b2;
  /* 1241c29e mov edx, dword ptr [0x124441c0] */
  EDX = (r32((uint32_t)(0x124441c0)));
  /* 1241c2a4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1241c2a7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1241c2a9 mov ecx, dword ptr [0x124441c0] */
  ECX = (r32((uint32_t)(0x124441c0)));
  /* 1241c2af mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1241c2b2:;
  /* 1241c2b2 mov edx, dword ptr [0x124441c0] */
  EDX = (r32((uint32_t)(0x124441c0)));
  /* 1241c2b8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c2bc jne 0x1241c322 */
  if (!C.zf) goto L_1241c322;
  /* 1241c2be cmp dword ptr [0x124441c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x124441c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c2c5 jle 0x1241c322 */
  if ((C.zf||C.sf!=C.of)) goto L_1241c322;
  /* 1241c2c7 mov eax, dword ptr [0x124441c0] */
  EAX = (r32((uint32_t)(0x124441c0)));
  /* 1241c2cc mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1241c2cf push ecx */
  push32((uint32_t)(ECX));
  /* 1241c2d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241c2d2 mov edx, dword ptr [0x124441cc] */
  EDX = (r32((uint32_t)(0x124441cc)));
  /* 1241c2d8 push edx */
  push32((uint32_t)(EDX));
  /* 1241c2d9 call dword ptr [0x12445340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445340))), 0x1241c2dfu);
  /* 1241c2df mov eax, dword ptr [0x124441c4] */
  EAX = (r32((uint32_t)(0x124441c4)));
  /* 1241c2e4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241c2e7 mov ecx, dword ptr [0x124441c8] */
  ECX = (r32((uint32_t)(0x124441c8)));
  /* 1241c2ed add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241c2ef mov edx, dword ptr [0x124441c0] */
  EDX = (r32((uint32_t)(0x124441c0)));
  /* 1241c2f5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241c2f8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241c2fa push ecx */
  push32((uint32_t)(ECX));
  /* 1241c2fb mov eax, dword ptr [0x124441c0] */
  EAX = (r32((uint32_t)(0x124441c0)));
  /* 1241c300 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241c303 push eax */
  push32((uint32_t)(EAX));
  /* 1241c304 mov ecx, dword ptr [0x124441c0] */
  ECX = (r32((uint32_t)(0x124441c0)));
  /* 1241c30a push ecx */
  push32((uint32_t)(ECX));
  /* 1241c30b call 0x1241e930 */
  push32(0x1241c310u); f_1241e930();
  /* 1241c310 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241c313 mov edx, dword ptr [0x124441c4] */
  EDX = (r32((uint32_t)(0x124441c4)));
  /* 1241c319 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241c31c mov dword ptr [0x124441c4], edx */
  w32((uint32_t)(0x124441c4), (EDX));
L_1241c322:;
  /* 1241c322 mov dword ptr [0x124441c0], 0 */
  w32((uint32_t)(0x124441c0), (0x0u));
L_1241c32c:;
  /* 1241c32c mov esp, ebp */
  ESP = (EBP);
  /* 1241c32e pop ebp */
  EBP = (pop32());
  /* 1241c32f ret  */
  ESPCHK(0x1241c200u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c330 @ 0x1241c330 (1565 bytes, 343 insns) */
void f_1241c330(void) {
  FTRACE(0x1241c330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241c330 push ebp */
  push32((uint32_t)(EBP));
  /* 1241c331 mov ebp, esp */
  EBP = (ESP);
  /* 1241c333 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241c339 mov eax, dword ptr [0x124441c4] */
  EAX = (r32((uint32_t)(0x124441c4)));
  /* 1241c33e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241c341 push eax */
  push32((uint32_t)(EAX));
  /* 1241c342 mov ecx, dword ptr [0x124441c8] */
  ECX = (r32((uint32_t)(0x124441c8)));
  /* 1241c348 push ecx */
  push32((uint32_t)(ECX));
  /* 1241c349 call dword ptr [0x124453b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124453b4))), 0x1241c34fu);
  /* 1241c34f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241c351 je 0x1241c35b */
  if (C.zf) goto L_1241c35b;
  /* 1241c353 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1241c356 jmp 0x1241c949 */
  goto L_1241c949;
L_1241c35b:;
  /* 1241c35b mov edx, dword ptr [0x124441c8] */
  EDX = (r32((uint32_t)(0x124441c8)));
  /* 1241c361 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 1241c367 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 1241c371 jmp 0x1241c382 */
  goto L_1241c382;
L_1241c373:;
  /* 1241c373 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 1241c379 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241c37c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_1241c382:;
  /* 1241c382 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 1241c388 cmp ecx, dword ptr [0x124441c4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x124441c4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c38e jge 0x1241c947 */
  if ((C.sf==C.of)) goto L_1241c947;
  /* 1241c394 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1241c39a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1241c39d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 1241c3a3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1241c3a8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1241c3ae push ecx */
  push32((uint32_t)(ECX));
  /* 1241c3af call dword ptr [0x124453b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124453b4))), 0x1241c3b5u);
  /* 1241c3b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241c3b7 je 0x1241c3c3 */
  if (C.zf) goto L_1241c3c3;
  /* 1241c3b9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1241c3be jmp 0x1241c949 */
  goto L_1241c949;
L_1241c3c3:;
  /* 1241c3c3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1241c3c9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1241c3cc mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 1241c3d2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1241c3d8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241c3de mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1241c3e1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1241c3e7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1241c3ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1241c3ed mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 1241c3f7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 1241c401 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1241c408 jmp 0x1241c413 */
  goto L_1241c413;
L_1241c40a:;
  /* 1241c40a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241c40d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241c410 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1241c413:;
  /* 1241c413 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c417 jge 0x1241c90b */
  if ((C.sf==C.of)) goto L_1241c90b;
  /* 1241c41d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 1241c427 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 1241c431 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1241c43b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 1241c445 jmp 0x1241c456 */
  goto L_1241c456;
L_1241c447:;
  /* 1241c447 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1241c44d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241c450 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_1241c456:;
  /* 1241c456 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c45d jge 0x1241c472 */
  if ((C.sf==C.of)) goto L_1241c472;
  /* 1241c45f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1241c465 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 1241c470 jmp 0x1241c447 */
  goto L_1241c447;
L_1241c472:;
  /* 1241c472 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c476 jl 0x1241c8ad */
  if ((C.sf!=C.of)) goto L_1241c8ad;
  /* 1241c47c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1241c481 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 1241c487 push ecx */
  push32((uint32_t)(ECX));
  /* 1241c488 call dword ptr [0x124453b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124453b4))), 0x1241c48eu);
  /* 1241c48e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241c490 je 0x1241c49c */
  if (C.zf) goto L_1241c49c;
  /* 1241c492 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 1241c497 jmp 0x1241c949 */
  goto L_1241c949;
L_1241c49c:;
  /* 1241c49c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1241c4a2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1241c4a5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1241c4af jmp 0x1241c4c0 */
  goto L_1241c4c0;
L_1241c4b1:;
  /* 1241c4b1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 1241c4b7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241c4ba mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_1241c4c0:;
  /* 1241c4c0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c4c7 jge 0x1241c644 */
  if ((C.sf==C.of)) goto L_1241c644;
  /* 1241c4cd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241c4d0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241c4d3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 1241c4d9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1241c4df add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241c4e5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 1241c4eb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1241c4f1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c4f5 jne 0x1241c502 */
  if (!C.zf) goto L_1241c502;
  /* 1241c4f7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1241c4fd cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c500 je 0x1241c50c */
  if (C.zf) goto L_1241c50c;
L_1241c502:;
  /* 1241c502 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 1241c507 jmp 0x1241c949 */
  goto L_1241c949;
L_1241c50c:;
  /* 1241c50c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1241c512 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1241c514 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1241c51a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 1241c520 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 1241c526 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1241c52c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1241c52f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241c531 je 0x1241c569 */
  if (C.zf) goto L_1241c569;
  /* 1241c533 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1241c539 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241c53c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1241c542 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c54c jle 0x1241c558 */
  if ((C.zf||C.sf!=C.of)) goto L_1241c558;
  /* 1241c54e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 1241c553 jmp 0x1241c949 */
  goto L_1241c949;
L_1241c558:;
  /* 1241c558 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1241c55e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241c561 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 1241c567 jmp 0x1241c5ab */
  goto L_1241c5ab;
L_1241c569:;
  /* 1241c569 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1241c56f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1241c572 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241c575 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1241c57b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c582 jle 0x1241c58e */
  if ((C.zf||C.sf!=C.of)) goto L_1241c58e;
  /* 1241c584 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1241c58e:;
  /* 1241c58e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1241c594 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1241c59b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241c59e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1241c5a4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1241c5ab:;
  /* 1241c5ab cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c5b2 jl 0x1241c5cd */
  if ((C.sf!=C.of)) goto L_1241c5cd;
  /* 1241c5b4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1241c5ba and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1241c5bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241c5bf jne 0x1241c5cd */
  if (!C.zf) goto L_1241c5cd;
  /* 1241c5c1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c5cb jle 0x1241c5d7 */
  if ((C.zf||C.sf!=C.of)) goto L_1241c5d7;
L_1241c5cd:;
  /* 1241c5cd mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 1241c5d2 jmp 0x1241c949 */
  goto L_1241c949;
L_1241c5d7:;
  /* 1241c5d7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1241c5dd add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241c5e3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1241c5e6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c5ec je 0x1241c5f8 */
  if (C.zf) goto L_1241c5f8;
  /* 1241c5ee mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1241c5f3 jmp 0x1241c949 */
  goto L_1241c949;
L_1241c5f8:;
  /* 1241c5f8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1241c5fe add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241c604 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1241c60a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1241c610 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c616 jb 0x1241c50c */
  if (C.cf) goto L_1241c50c;
  /* 1241c61c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1241c622 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c628 je 0x1241c634 */
  if (C.zf) goto L_1241c634;
  /* 1241c62a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1241c62f jmp 0x1241c949 */
  goto L_1241c949;
L_1241c634:;
  /* 1241c634 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241c637 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241c63c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1241c63f jmp 0x1241c4b1 */
  goto L_1241c4b1;
L_1241c644:;
  /* 1241c644 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241c647 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1241c649 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c64f je 0x1241c65b */
  if (C.zf) goto L_1241c65b;
  /* 1241c651 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 1241c656 jmp 0x1241c949 */
  goto L_1241c949;
L_1241c65b:;
  /* 1241c65b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241c65e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 1241c664 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1241c66b jmp 0x1241c676 */
  goto L_1241c676;
L_1241c66d:;
  /* 1241c66d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241c670 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241c673 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1241c676:;
  /* 1241c676 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c67a jge 0x1241c8ad */
  if ((C.sf==C.of)) goto L_1241c8ad;
  /* 1241c680 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1241c68a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1241c690 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_1241c696:;
  /* 1241c696 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1241c69c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1241c69f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 1241c6a5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1241c6ab cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c6b1 je 0x1241c7da */
  if (C.zf) goto L_1241c7da;
  /* 1241c6b7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241c6ba mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1241c6c0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c6c7 je 0x1241c7da */
  if (C.zf) goto L_1241c7da;
  /* 1241c6cd mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1241c6d3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c6d9 jb 0x1241c6ee */
  if (C.cf) goto L_1241c6ee;
  /* 1241c6db mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 1241c6e1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241c6e6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c6ec jb 0x1241c6f8 */
  if (C.cf) goto L_1241c6f8;
L_1241c6ee:;
  /* 1241c6ee mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 1241c6f3 jmp 0x1241c949 */
  goto L_1241c949;
L_1241c6f8:;
  /* 1241c6f8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1241c6fe and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 1241c704 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1241c70a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 1241c710 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241c713 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1241c716 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241c719 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241c71e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_1241c724:;
  /* 1241c724 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241c727 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c72d je 0x1241c74e */
  if (C.zf) goto L_1241c74e;
  /* 1241c72f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241c732 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c738 jne 0x1241c73c */
  if (!C.zf) goto L_1241c73c;
  /* 1241c73a jmp 0x1241c74e */
  goto L_1241c74e;
L_1241c73c:;
  /* 1241c73c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241c73f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1241c741 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 1241c744 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241c747 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241c749 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1241c74c jmp 0x1241c724 */
  goto L_1241c724;
L_1241c74e:;
  /* 1241c74e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241c751 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c757 jne 0x1241c763 */
  if (!C.zf) goto L_1241c763;
  /* 1241c759 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1241c75e jmp 0x1241c949 */
  goto L_1241c949;
L_1241c763:;
  /* 1241c763 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1241c769 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1241c76b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1241c76e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241c771 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1241c777 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c77e jle 0x1241c78a */
  if ((C.zf||C.sf!=C.of)) goto L_1241c78a;
  /* 1241c780 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1241c78a:;
  /* 1241c78a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1241c790 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c793 je 0x1241c79f */
  if (C.zf) goto L_1241c79f;
  /* 1241c795 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1241c79a jmp 0x1241c949 */
  goto L_1241c949;
L_1241c79f:;
  /* 1241c79f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1241c7a5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1241c7a8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c7ae je 0x1241c7ba */
  if (C.zf) goto L_1241c7ba;
  /* 1241c7b0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 1241c7b5 jmp 0x1241c949 */
  goto L_1241c949;
L_1241c7ba:;
  /* 1241c7ba mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1241c7c0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1241c7c6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1241c7cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241c7cf mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 1241c7d5 jmp 0x1241c696 */
  goto L_1241c696;
L_1241c7da:;
  /* 1241c7da cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c7e1 je 0x1241c851 */
  if (C.zf) goto L_1241c851;
  /* 1241c7e3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c7e7 jge 0x1241c81b */
  if ((C.sf==C.of)) goto L_1241c81b;
  /* 1241c7e9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1241c7ee mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241c7f1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1241c7f3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1241c7f9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1241c7fb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 1241c801 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1241c806 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241c809 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1241c80b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1241c811 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1241c813 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 1241c819 jmp 0x1241c851 */
  goto L_1241c851;
L_1241c81b:;
  /* 1241c81b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241c81e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241c821 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1241c826 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1241c828 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1241c82e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1241c830 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 1241c836 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241c839 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241c83c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1241c841 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1241c843 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 1241c849 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1241c84b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_1241c851:;
  /* 1241c851 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1241c857 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1241c85a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c860 jne 0x1241c874 */
  if (!C.zf) goto L_1241c874;
  /* 1241c862 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241c865 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1241c86b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c872 je 0x1241c87e */
  if (C.zf) goto L_1241c87e;
L_1241c874:;
  /* 1241c874 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 1241c879 jmp 0x1241c949 */
  goto L_1241c949;
L_1241c87e:;
  /* 1241c87e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1241c884 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1241c887 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c88d je 0x1241c899 */
  if (C.zf) goto L_1241c899;
  /* 1241c88f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 1241c894 jmp 0x1241c949 */
  goto L_1241c949;
L_1241c899:;
  /* 1241c899 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1241c89f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241c8a2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 1241c8a8 jmp 0x1241c66d */
  goto L_1241c66d;
L_1241c8ad:;
  /* 1241c8ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241c8b0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1241c8b6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1241c8bc cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c8c0 jne 0x1241c8da */
  if (!C.zf) goto L_1241c8da;
  /* 1241c8c2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241c8c5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1241c8cb mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 1241c8d1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c8d8 je 0x1241c8e1 */
  if (C.zf) goto L_1241c8e1;
L_1241c8da:;
  /* 1241c8da mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1241c8df jmp 0x1241c949 */
  goto L_1241c949;
L_1241c8e1:;
  /* 1241c8e1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1241c8e7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241c8ed mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 1241c8f3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241c8f6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241c8fb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1241c8fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241c901 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1241c903 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1241c906 jmp 0x1241c40a */
  goto L_1241c40a;
L_1241c90b:;
  /* 1241c90b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1241c911 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1241c917 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c919 jne 0x1241c92c */
  if (!C.zf) goto L_1241c92c;
  /* 1241c91b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1241c921 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 1241c927 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c92a je 0x1241c933 */
  if (C.zf) goto L_1241c933;
L_1241c92c:;
  /* 1241c92c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 1241c931 jmp 0x1241c949 */
  goto L_1241c949;
L_1241c933:;
  /* 1241c933 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1241c939 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241c93c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 1241c942 jmp 0x1241c373 */
  goto L_1241c373;
L_1241c947:;
  /* 1241c947 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1241c949:;
  /* 1241c949 mov esp, ebp */
  ESP = (EBP);
  /* 1241c94b pop ebp */
  EBP = (pop32());
  /* 1241c94c ret  */
  ESPCHK(0x1241c330u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c950 @ 0x1241c950 (250 bytes, 92 insns) */
void f_1241c950(void) {
  FTRACE(0x1241c950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241c950 push ebp */
  push32((uint32_t)(EBP));
  /* 1241c951 mov ebp, esp */
  EBP = (ESP);
  /* 1241c953 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241c956 push ebx */
  push32((uint32_t)(EBX));
  /* 1241c957 push esi */
  push32((uint32_t)(ESI));
  /* 1241c958 push edi */
  push32((uint32_t)(EDI));
  /* 1241c959 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1241c95c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1241c95f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1241c962 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1241c965:;
  /* 1241c965 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c969 jne 0x1241c989 */
  if (!C.zf) goto L_1241c989;
  /* 1241c96b push 0x1243e48c */
  push32((uint32_t)(0x1243e48cu));
  /* 1241c970 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241c972 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1241c974 push 0x1243e480 */
  push32((uint32_t)(0x1243e480u));
  /* 1241c979 push 2 */
  push32((uint32_t)(0x2u));
  /* 1241c97b call 0x12415b00 */
  push32(0x1241c980u); f_12415b00();
  /* 1241c980 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241c983 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c986 jne 0x1241c989 */
  if (!C.zf) goto L_1241c989;
  /* 1241c988 int3  */
  x86_unimpl("int3 @ 0x1241c988");
L_1241c989:;
  /* 1241c989 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1241c98b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241c98d jne 0x1241c965 */
  if (!C.zf) goto L_1241c965;
L_1241c98f:;
  /* 1241c98f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c993 jne 0x1241c9b3 */
  if (!C.zf) goto L_1241c9b3;
  /* 1241c995 push 0x1243e470 */
  push32((uint32_t)(0x1243e470u));
  /* 1241c99a push 0 */
  push32((uint32_t)(0x0u));
  /* 1241c99c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1241c99e push 0x1243e480 */
  push32((uint32_t)(0x1243e480u));
  /* 1241c9a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1241c9a5 call 0x12415b00 */
  push32(0x1241c9aau); f_12415b00();
  /* 1241c9aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241c9ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241c9b0 jne 0x1241c9b3 */
  if (!C.zf) goto L_1241c9b3;
  /* 1241c9b2 int3  */
  x86_unimpl("int3 @ 0x1241c9b2");
L_1241c9b3:;
  /* 1241c9b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241c9b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241c9b7 jne 0x1241c98f */
  if (!C.zf) goto L_1241c98f;
  /* 1241c9b9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241c9bc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1241c9c3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241c9c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241c9c9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1241c9cc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241c9cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241c9d2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1241c9d4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241c9d7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1241c9de mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1241c9e1 push ecx */
  push32((uint32_t)(ECX));
  /* 1241c9e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241c9e5 push edx */
  push32((uint32_t)(EDX));
  /* 1241c9e6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241c9e9 push eax */
  push32((uint32_t)(EAX));
  /* 1241c9ea call 0x1241d9d0 */
  push32(0x1241c9efu); f_1241d9d0();
  /* 1241c9ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241c9f2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1241c9f5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241c9f8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1241c9fb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241c9fe mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241ca01 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1241ca04 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241ca07 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241ca0b jl 0x1241ca2f */
  if ((C.sf!=C.of)) goto L_1241ca2f;
  /* 1241ca0d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241ca10 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1241ca12 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1241ca15 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1241ca17 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1241ca1d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1241ca20 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241ca23 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1241ca25 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241ca28 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241ca2b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1241ca2d jmp 0x1241ca40 */
  goto L_1241ca40;
L_1241ca2f:;
  /* 1241ca2f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241ca32 push edx */
  push32((uint32_t)(EDX));
  /* 1241ca33 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241ca35 call 0x1241d750 */
  push32(0x1241ca3au); f_1241d750();
  /* 1241ca3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241ca3d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1241ca40:;
  /* 1241ca40 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1241ca43 pop edi */
  EDI = (pop32());
  /* 1241ca44 pop esi */
  ESI = (pop32());
  /* 1241ca45 pop ebx */
  EBX = (pop32());
  /* 1241ca46 mov esp, ebp */
  ESP = (EBP);
  /* 1241ca48 pop ebp */
  EBP = (pop32());
  /* 1241ca49 ret  */
  ESPCHK(0x1241c950u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca50 @ 0x1241ca50 (183 bytes, 58 insns) */
void f_1241ca50(void) {
  FTRACE(0x1241ca50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241ca50 push ebp */
  push32((uint32_t)(EBP));
  /* 1241ca51 mov ebp, esp */
  EBP = (ESP);
  /* 1241ca53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241ca56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241ca59 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241ca5c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241ca61 ja 0x1241ca7a */
  if ((!C.cf&&!C.zf)) goto L_1241ca7a;
  /* 1241ca63 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241ca66 mov edx, dword ptr [0x12440c98] */
  EDX = (r32((uint32_t)(0x12440c98)));
  /* 1241ca6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241ca6e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1241ca72 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1241ca75 jmp 0x1241cb03 */
  goto L_1241cb03;
L_1241ca7a:;
  /* 1241ca7a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241ca7d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1241ca80 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1241ca86 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1241ca8c mov edx, dword ptr [0x12440c98] */
  EDX = (r32((uint32_t)(0x12440c98)));
  /* 1241ca92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241ca94 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1241ca98 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1241ca9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241ca9f je 0x1241cac3 */
  if (C.zf) goto L_1241cac3;
  /* 1241caa1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241caa4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1241caa7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1241caad mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1241cab0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 1241cab3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 1241cab6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1241caba mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 1241cac1 jmp 0x1241cad4 */
  goto L_1241cad4;
L_1241cac3:;
  /* 1241cac3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1241cac6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1241cac9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1241cacd mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1241cad4:;
  /* 1241cad4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1241cad6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241cad8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241cada lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1241cadd push ecx */
  push32((uint32_t)(ECX));
  /* 1241cade mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241cae1 push edx */
  push32((uint32_t)(EDX));
  /* 1241cae2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1241cae5 push eax */
  push32((uint32_t)(EAX));
  /* 1241cae6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1241cae8 call 0x1241ec70 */
  push32(0x1241caedu); f_1241ec70();
  /* 1241caed add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241caf0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241caf2 jne 0x1241caf8 */
  if (!C.zf) goto L_1241caf8;
  /* 1241caf4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241caf6 jmp 0x1241cb03 */
  goto L_1241cb03;
L_1241caf8:;
  /* 1241caf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241cafb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1241cb00 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_1241cb03:;
  /* 1241cb03 mov esp, ebp */
  ESP = (EBP);
  /* 1241cb05 pop ebp */
  EBP = (pop32());
  /* 1241cb06 ret  */
  ESPCHK(0x1241ca50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb10 @ 0x1241cb10 (836 bytes, 238 insns) */
void f_1241cb10(void) {
  FTRACE(0x1241cb10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241cb10 push ebp */
  push32((uint32_t)(EBP));
  /* 1241cb11 mov ebp, esp */
  EBP = (ESP);
  /* 1241cb13 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241cb16 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1241cb18 call 0x1241a440 */
  push32(0x1241cb1du); f_1241a440();
  /* 1241cb1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241cb20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241cb23 push eax */
  push32((uint32_t)(EAX));
  /* 1241cb24 call 0x1241ce60 */
  push32(0x1241cb29u); f_1241ce60();
  /* 1241cb29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241cb2c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1241cb2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241cb32 cmp ecx, dword ptr [0x12443f04] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12443f04))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241cb38 jne 0x1241cb4b */
  if (!C.zf) goto L_1241cb4b;
  /* 1241cb3a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1241cb3c call 0x1241a4e0 */
  push32(0x1241cb41u); f_1241a4e0();
  /* 1241cb41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241cb44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241cb46 jmp 0x1241ce50 */
  goto L_1241ce50;
L_1241cb4b:;
  /* 1241cb4b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241cb4f jne 0x1241cb6c */
  if (!C.zf) goto L_1241cb6c;
  /* 1241cb51 call 0x1241cf40 */
  push32(0x1241cb56u); f_1241cf40();
  /* 1241cb56 call 0x1241cfc0 */
  push32(0x1241cb5bu); f_1241cfc0();
  /* 1241cb5b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1241cb5d call 0x1241a4e0 */
  push32(0x1241cb62u); f_1241a4e0();
  /* 1241cb62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241cb65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241cb67 jmp 0x1241ce50 */
  goto L_1241ce50;
L_1241cb6c:;
  /* 1241cb6c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1241cb73 jmp 0x1241cb7e */
  goto L_1241cb7e;
L_1241cb75:;
  /* 1241cb75 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241cb78 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241cb7b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1241cb7e:;
  /* 1241cb7e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241cb82 jae 0x1241cccf */
  if (!C.cf) goto L_1241cccf;
  /* 1241cb88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241cb8b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241cb8e mov ecx, dword ptr [eax + 0x12440eb8] */
  ECX = (r32((uint32_t)(EAX + 0x12440eb8)));
  /* 1241cb94 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241cb97 jne 0x1241ccca */
  if (!C.zf) goto L_1241ccca;
  /* 1241cb9d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1241cba4 jmp 0x1241cbaf */
  goto L_1241cbaf;
L_1241cba6:;
  /* 1241cba6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241cba9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241cbac mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1241cbaf:;
  /* 1241cbaf cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241cbb6 jae 0x1241cbc4 */
  if (!C.cf) goto L_1241cbc4;
  /* 1241cbb8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241cbbb mov byte ptr [eax + 0x124440a0], 0 */
  w8((uint32_t)(EAX + 0x124440a0), (0x0u));
  /* 1241cbc2 jmp 0x1241cba6 */
  goto L_1241cba6;
L_1241cbc4:;
  /* 1241cbc4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1241cbcb jmp 0x1241cbd6 */
  goto L_1241cbd6;
L_1241cbcd:;
  /* 1241cbcd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241cbd0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241cbd3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1241cbd6:;
  /* 1241cbd6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241cbda jae 0x1241cc57 */
  if (!C.cf) goto L_1241cc57;
  /* 1241cbdc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241cbdf imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241cbe2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241cbe5 lea ecx, [edx + eax*8 + 0x12440ec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x12440ec8));
  /* 1241cbec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1241cbef jmp 0x1241cbfa */
  goto L_1241cbfa;
L_1241cbf1:;
  /* 1241cbf1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241cbf4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241cbf7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1241cbfa:;
  /* 1241cbfa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241cbfd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1241cbff mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1241cc01 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1241cc03 je 0x1241cc52 */
  if (C.zf) goto L_1241cc52;
  /* 1241cc05 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241cc08 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241cc0a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1241cc0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241cc0f je 0x1241cc52 */
  if (C.zf) goto L_1241cc52;
  /* 1241cc11 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241cc14 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1241cc16 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1241cc18 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1241cc1b jmp 0x1241cc26 */
  goto L_1241cc26;
L_1241cc1d:;
  /* 1241cc1d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241cc20 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241cc23 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1241cc26:;
  /* 1241cc26 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241cc29 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1241cc2b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1241cc2e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241cc31 ja 0x1241cc50 */
  if ((!C.cf&&!C.zf)) goto L_1241cc50;
  /* 1241cc33 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241cc36 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241cc39 mov dl, byte ptr [eax + 0x124440a1] */
  DL = (r8((uint32_t)(EAX + 0x124440a1)));
  /* 1241cc3f or dl, byte ptr [ecx + 0x12440eb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x12440eb0))); DL = (_r); fl_logic(_r,8); }
  /* 1241cc45 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241cc48 mov byte ptr [eax + 0x124440a1], dl */
  w8((uint32_t)(EAX + 0x124440a1), (DL));
  /* 1241cc4e jmp 0x1241cc1d */
  goto L_1241cc1d;
L_1241cc50:;
  /* 1241cc50 jmp 0x1241cbf1 */
  goto L_1241cbf1;
L_1241cc52:;
  /* 1241cc52 jmp 0x1241cbcd */
  goto L_1241cbcd;
L_1241cc57:;
  /* 1241cc57 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241cc5a mov dword ptr [0x12443f04], ecx */
  w32((uint32_t)(0x12443f04), (ECX));
  /* 1241cc60 mov dword ptr [0x12443f8c], 1 */
  w32((uint32_t)(0x12443f8c), (0x1u));
  /* 1241cc6a mov edx, dword ptr [0x12443f04] */
  EDX = (r32((uint32_t)(0x12443f04)));
  /* 1241cc70 push edx */
  push32((uint32_t)(EDX));
  /* 1241cc71 call 0x1241cec0 */
  push32(0x1241cc76u); f_1241cec0();
  /* 1241cc76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241cc79 mov dword ptr [0x124441a4], eax */
  w32((uint32_t)(0x124441a4), (EAX));
  /* 1241cc7e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1241cc85 jmp 0x1241cc90 */
  goto L_1241cc90;
L_1241cc87:;
  /* 1241cc87 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241cc8a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241cc8d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1241cc90:;
  /* 1241cc90 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241cc94 jae 0x1241ccb4 */
  if (!C.cf) goto L_1241ccb4;
  /* 1241cc96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241cc99 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241cc9c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241cc9f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241cca2 mov cx, word ptr [ecx + eax*2 + 0x12440ebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x12440ebc)));
  /* 1241ccaa mov word ptr [edx*2 + 0x12443f80], cx */
  w16((uint32_t)(EDX*2 + 0x12443f80), (CX));
  /* 1241ccb2 jmp 0x1241cc87 */
  goto L_1241cc87;
L_1241ccb4:;
  /* 1241ccb4 call 0x1241cfc0 */
  push32(0x1241ccb9u); f_1241cfc0();
  /* 1241ccb9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1241ccbb call 0x1241a4e0 */
  push32(0x1241ccc0u); f_1241a4e0();
  /* 1241ccc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241ccc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241ccc5 jmp 0x1241ce50 */
  goto L_1241ce50;
L_1241ccca:;
  /* 1241ccca jmp 0x1241cb75 */
  goto L_1241cb75;
L_1241cccf:;
  /* 1241cccf lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 1241ccd2 push edx */
  push32((uint32_t)(EDX));
  /* 1241ccd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241ccd6 push eax */
  push32((uint32_t)(EAX));
  /* 1241ccd7 call dword ptr [0x12445314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445314))), 0x1241ccddu);
  /* 1241ccdd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241cce0 jne 0x1241ce22 */
  if (!C.zf) goto L_1241ce22;
  /* 1241cce6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1241cced jmp 0x1241ccf8 */
  goto L_1241ccf8;
L_1241ccef:;
  /* 1241ccef mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241ccf2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241ccf5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1241ccf8:;
  /* 1241ccf8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241ccff jae 0x1241cd0d */
  if (!C.cf) goto L_1241cd0d;
  /* 1241cd01 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241cd04 mov byte ptr [edx + 0x124440a0], 0 */
  w8((uint32_t)(EDX + 0x124440a0), (0x0u));
  /* 1241cd0b jmp 0x1241ccef */
  goto L_1241ccef;
L_1241cd0d:;
  /* 1241cd0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241cd10 mov dword ptr [0x12443f04], eax */
  w32((uint32_t)(0x12443f04), (EAX));
  /* 1241cd15 mov dword ptr [0x124441a4], 0 */
  w32((uint32_t)(0x124441a4), (0x0u));
  /* 1241cd1f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241cd23 jbe 0x1241cdde */
  if ((C.cf||C.zf)) goto L_1241cdde;
  /* 1241cd29 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1241cd2c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1241cd2f jmp 0x1241cd3a */
  goto L_1241cd3a;
L_1241cd31:;
  /* 1241cd31 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1241cd34 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241cd37 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1241cd3a:;
  /* 1241cd3a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1241cd3d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1241cd3f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1241cd41 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1241cd43 je 0x1241cd8c */
  if (C.zf) goto L_1241cd8c;
  /* 1241cd45 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1241cd48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241cd4a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1241cd4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241cd4f je 0x1241cd8c */
  if (C.zf) goto L_1241cd8c;
  /* 1241cd51 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1241cd54 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1241cd56 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1241cd58 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1241cd5b jmp 0x1241cd66 */
  goto L_1241cd66;
L_1241cd5d:;
  /* 1241cd5d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241cd60 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241cd63 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1241cd66:;
  /* 1241cd66 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1241cd69 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1241cd6b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1241cd6e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241cd71 ja 0x1241cd8a */
  if ((!C.cf&&!C.zf)) goto L_1241cd8a;
  /* 1241cd73 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241cd76 mov cl, byte ptr [eax + 0x124440a1] */
  CL = (r8((uint32_t)(EAX + 0x124440a1)));
  /* 1241cd7c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1241cd7f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241cd82 mov byte ptr [edx + 0x124440a1], cl */
  w8((uint32_t)(EDX + 0x124440a1), (CL));
  /* 1241cd88 jmp 0x1241cd5d */
  goto L_1241cd5d;
L_1241cd8a:;
  /* 1241cd8a jmp 0x1241cd31 */
  goto L_1241cd31;
L_1241cd8c:;
  /* 1241cd8c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1241cd93 jmp 0x1241cd9e */
  goto L_1241cd9e;
L_1241cd95:;
  /* 1241cd95 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241cd98 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241cd9b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1241cd9e:;
  /* 1241cd9e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241cda5 jae 0x1241cdbe */
  if (!C.cf) goto L_1241cdbe;
  /* 1241cda7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241cdaa mov dl, byte ptr [ecx + 0x124440a1] */
  DL = (r8((uint32_t)(ECX + 0x124440a1)));
  /* 1241cdb0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1241cdb3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241cdb6 mov byte ptr [eax + 0x124440a1], dl */
  w8((uint32_t)(EAX + 0x124440a1), (DL));
  /* 1241cdbc jmp 0x1241cd95 */
  goto L_1241cd95;
L_1241cdbe:;
  /* 1241cdbe mov ecx, dword ptr [0x12443f04] */
  ECX = (r32((uint32_t)(0x12443f04)));
  /* 1241cdc4 push ecx */
  push32((uint32_t)(ECX));
  /* 1241cdc5 call 0x1241cec0 */
  push32(0x1241cdcau); f_1241cec0();
  /* 1241cdca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241cdcd mov dword ptr [0x124441a4], eax */
  w32((uint32_t)(0x124441a4), (EAX));
  /* 1241cdd2 mov dword ptr [0x12443f8c], 1 */
  w32((uint32_t)(0x12443f8c), (0x1u));
  /* 1241cddc jmp 0x1241cde8 */
  goto L_1241cde8;
L_1241cdde:;
  /* 1241cdde mov dword ptr [0x12443f8c], 0 */
  w32((uint32_t)(0x12443f8c), (0x0u));
L_1241cde8:;
  /* 1241cde8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1241cdef jmp 0x1241cdfa */
  goto L_1241cdfa;
L_1241cdf1:;
  /* 1241cdf1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241cdf4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241cdf7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1241cdfa:;
  /* 1241cdfa cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241cdfe jae 0x1241ce0f */
  if (!C.cf) goto L_1241ce0f;
  /* 1241ce00 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241ce03 mov word ptr [eax*2 + 0x12443f80], 0 */
  w16((uint32_t)(EAX*2 + 0x12443f80), (0x0u));
  /* 1241ce0d jmp 0x1241cdf1 */
  goto L_1241cdf1;
L_1241ce0f:;
  /* 1241ce0f call 0x1241cfc0 */
  push32(0x1241ce14u); f_1241cfc0();
  /* 1241ce14 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1241ce16 call 0x1241a4e0 */
  push32(0x1241ce1bu); f_1241a4e0();
  /* 1241ce1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241ce1e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241ce20 jmp 0x1241ce50 */
  goto L_1241ce50;
L_1241ce22:;
  /* 1241ce22 cmp dword ptr [0x12442a18], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442a18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241ce29 je 0x1241ce43 */
  if (C.zf) goto L_1241ce43;
  /* 1241ce2b call 0x1241cf40 */
  push32(0x1241ce30u); f_1241cf40();
  /* 1241ce30 call 0x1241cfc0 */
  push32(0x1241ce35u); f_1241cfc0();
  /* 1241ce35 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1241ce37 call 0x1241a4e0 */
  push32(0x1241ce3cu); f_1241a4e0();
  /* 1241ce3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241ce3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241ce41 jmp 0x1241ce50 */
  goto L_1241ce50;
L_1241ce43:;
  /* 1241ce43 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1241ce45 call 0x1241a4e0 */
  push32(0x1241ce4au); f_1241a4e0();
  /* 1241ce4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241ce4d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1241ce50:;
  /* 1241ce50 mov esp, ebp */
  ESP = (EBP);
  /* 1241ce52 pop ebp */
  EBP = (pop32());
  /* 1241ce53 ret  */
  ESPCHK(0x1241cb10u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x1241ce60 (89 bytes, 21 insns) */
void f_1241ce60(void) {
  FTRACE(0x1241ce60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241ce60 push ebp */
  push32((uint32_t)(EBP));
  /* 1241ce61 mov ebp, esp */
  EBP = (ESP);
  /* 1241ce63 mov dword ptr [0x12442a18], 0 */
  w32((uint32_t)(0x12442a18), (0x0u));
  /* 1241ce6d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241ce71 jne 0x1241ce85 */
  if (!C.zf) goto L_1241ce85;
  /* 1241ce73 mov dword ptr [0x12442a18], 1 */
  w32((uint32_t)(0x12442a18), (0x1u));
  /* 1241ce7d call dword ptr [0x1244530c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244530c))), 0x1241ce83u);
  /* 1241ce83 jmp 0x1241ceb7 */
  goto L_1241ceb7;
L_1241ce85:;
  /* 1241ce85 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241ce89 jne 0x1241ce9d */
  if (!C.zf) goto L_1241ce9d;
  /* 1241ce8b mov dword ptr [0x12442a18], 1 */
  w32((uint32_t)(0x12442a18), (0x1u));
  /* 1241ce95 call dword ptr [0x12445310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445310))), 0x1241ce9bu);
  /* 1241ce9b jmp 0x1241ceb7 */
  goto L_1241ceb7;
L_1241ce9d:;
  /* 1241ce9d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241cea1 jne 0x1241ceb4 */
  if (!C.zf) goto L_1241ceb4;
  /* 1241cea3 mov dword ptr [0x12442a18], 1 */
  w32((uint32_t)(0x12442a18), (0x1u));
  /* 1241cead mov eax, dword ptr [0x12442a38] */
  EAX = (r32((uint32_t)(0x12442a38)));
  /* 1241ceb2 jmp 0x1241ceb7 */
  goto L_1241ceb7;
L_1241ceb4:;
  /* 1241ceb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1241ceb7:;
  /* 1241ceb7 pop ebp */
  EBP = (pop32());
  /* 1241ceb8 ret  */
  ESPCHK(0x1241ce60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cec0 @ 0x1241cec0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_1241cec0(void) {
  FTRACE(0x1241cec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241cec0 push ebp */
  push32((uint32_t)(EBP));
  /* 1241cec1 mov ebp, esp */
  EBP = (ESP);
  /* 1241cec3 push ecx */
  push32((uint32_t)(ECX));
  /* 1241cec4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241cec7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1241ceca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241cecd sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241ced3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1241ced6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241ceda ja 0x1241cf0a */
  if ((!C.cf&&!C.zf)) goto L_1241cf0a;
  /* 1241cedc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241cedf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1241cee1 mov dl, byte ptr [eax + 0x1241cf24] */
  DL = (r8((uint32_t)(EAX + 0x1241cf24)));
  /* 1241cee7 jmp dword ptr [edx*4 + 0x1241cf10] */
  switch (EDX) {
    case 0: goto L_1241ceee;
    case 1: goto L_1241cef5;
    case 2: goto L_1241cefc;
    case 3: goto L_1241cf03;
    case 4: goto L_1241cf0a;
    default: x86_unimpl("switch@0x1241cee7 out of table"); return;
  }
L_1241ceee:;
  /* 1241ceee mov eax, 0x411 */
  EAX = (0x411u);
  /* 1241cef3 jmp 0x1241cf0c */
  goto L_1241cf0c;
L_1241cef5:;
  /* 1241cef5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1241cefa jmp 0x1241cf0c */
  goto L_1241cf0c;
L_1241cefc:;
  /* 1241cefc mov eax, 0x412 */
  EAX = (0x412u);
  /* 1241cf01 jmp 0x1241cf0c */
  goto L_1241cf0c;
L_1241cf03:;
  /* 1241cf03 mov eax, 0x404 */
  EAX = (0x404u);
  /* 1241cf08 jmp 0x1241cf0c */
  goto L_1241cf0c;
L_1241cf0a:;
  /* 1241cf0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1241cf0c:;
  /* 1241cf0c mov esp, ebp */
  ESP = (EBP);
  /* 1241cf0e pop ebp */
  EBP = (pop32());
  /* 1241cf0f ret  */
  ESPCHK(0x1241cec0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x1241cf40 (116 bytes, 29 insns) */
void f_1241cf40(void) {
  FTRACE(0x1241cf40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241cf40 push ebp */
  push32((uint32_t)(EBP));
  /* 1241cf41 mov ebp, esp */
  EBP = (ESP);
  /* 1241cf43 push ecx */
  push32((uint32_t)(ECX));
  /* 1241cf44 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1241cf4b jmp 0x1241cf56 */
  goto L_1241cf56;
L_1241cf4d:;
  /* 1241cf4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241cf50 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241cf53 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1241cf56:;
  /* 1241cf56 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241cf5d jge 0x1241cf6b */
  if ((C.sf==C.of)) goto L_1241cf6b;
  /* 1241cf5f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241cf62 mov byte ptr [ecx + 0x124440a0], 0 */
  w8((uint32_t)(ECX + 0x124440a0), (0x0u));
  /* 1241cf69 jmp 0x1241cf4d */
  goto L_1241cf4d;
L_1241cf6b:;
  /* 1241cf6b mov dword ptr [0x12443f04], 0 */
  w32((uint32_t)(0x12443f04), (0x0u));
  /* 1241cf75 mov dword ptr [0x12443f8c], 0 */
  w32((uint32_t)(0x12443f8c), (0x0u));
  /* 1241cf7f mov dword ptr [0x124441a4], 0 */
  w32((uint32_t)(0x124441a4), (0x0u));
  /* 1241cf89 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1241cf90 jmp 0x1241cf9b */
  goto L_1241cf9b;
L_1241cf92:;
  /* 1241cf92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241cf95 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241cf98 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1241cf9b:;
  /* 1241cf9b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241cf9f jge 0x1241cfb0 */
  if ((C.sf==C.of)) goto L_1241cfb0;
  /* 1241cfa1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241cfa4 mov word ptr [eax*2 + 0x12443f80], 0 */
  w16((uint32_t)(EAX*2 + 0x12443f80), (0x0u));
  /* 1241cfae jmp 0x1241cf92 */
  goto L_1241cf92;
L_1241cfb0:;
  /* 1241cfb0 mov esp, ebp */
  ESP = (EBP);
  /* 1241cfb2 pop ebp */
  EBP = (pop32());
  /* 1241cfb3 ret  */
  ESPCHK(0x1241cf40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cfc0 @ 0x1241cfc0 (770 bytes, 175 insns) */
void f_1241cfc0(void) {
  FTRACE(0x1241cfc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241cfc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1241cfc1 mov ebp, esp */
  EBP = (ESP);
  /* 1241cfc3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241cfc9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1241cfcf push eax */
  push32((uint32_t)(EAX));
  /* 1241cfd0 mov ecx, dword ptr [0x12443f04] */
  ECX = (r32((uint32_t)(0x12443f04)));
  /* 1241cfd6 push ecx */
  push32((uint32_t)(ECX));
  /* 1241cfd7 call dword ptr [0x12445314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445314))), 0x1241cfddu);
  /* 1241cfdd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241cfe0 jne 0x1241d1f9 */
  if (!C.zf) goto L_1241d1f9;
  /* 1241cfe6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1241cff0 jmp 0x1241d001 */
  goto L_1241d001;
L_1241cff2:;
  /* 1241cff2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1241cff8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241cffb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1241d001:;
  /* 1241d001 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241d00b jae 0x1241d022 */
  if (!C.cf) goto L_1241d022;
  /* 1241d00d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1241d013 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 1241d019 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 1241d020 jmp 0x1241cff2 */
  goto L_1241cff2;
L_1241d022:;
  /* 1241d022 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 1241d029 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1241d02f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1241d032 jmp 0x1241d03d */
  goto L_1241d03d;
L_1241d034:;
  /* 1241d034 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241d037 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241d03a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1241d03d:;
  /* 1241d03d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241d040 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1241d042 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1241d044 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241d046 je 0x1241d088 */
  if (C.zf) goto L_1241d088;
  /* 1241d048 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241d04b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1241d04d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1241d04f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 1241d055 jmp 0x1241d066 */
  goto L_1241d066;
L_1241d057:;
  /* 1241d057 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1241d05d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241d060 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1241d066:;
  /* 1241d066 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241d069 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1241d06b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1241d06e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241d074 ja 0x1241d086 */
  if ((!C.cf&&!C.zf)) goto L_1241d086;
  /* 1241d076 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1241d07c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 1241d084 jmp 0x1241d057 */
  goto L_1241d057;
L_1241d086:;
  /* 1241d086 jmp 0x1241d034 */
  goto L_1241d034;
L_1241d088:;
  /* 1241d088 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241d08a mov eax, dword ptr [0x124441a4] */
  EAX = (r32((uint32_t)(0x124441a4)));
  /* 1241d08f push eax */
  push32((uint32_t)(EAX));
  /* 1241d090 mov ecx, dword ptr [0x12443f04] */
  ECX = (r32((uint32_t)(0x12443f04)));
  /* 1241d096 push ecx */
  push32((uint32_t)(ECX));
  /* 1241d097 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1241d09d push edx */
  push32((uint32_t)(EDX));
  /* 1241d09e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1241d0a3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1241d0a9 push eax */
  push32((uint32_t)(EAX));
  /* 1241d0aa push 1 */
  push32((uint32_t)(0x1u));
  /* 1241d0ac call 0x1241ec70 */
  push32(0x1241d0b1u); f_1241ec70();
  /* 1241d0b1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241d0b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241d0b6 mov ecx, dword ptr [0x12443f04] */
  ECX = (r32((uint32_t)(0x12443f04)));
  /* 1241d0bc push ecx */
  push32((uint32_t)(ECX));
  /* 1241d0bd push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1241d0c2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1241d0c8 push edx */
  push32((uint32_t)(EDX));
  /* 1241d0c9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1241d0ce lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1241d0d4 push eax */
  push32((uint32_t)(EAX));
  /* 1241d0d5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1241d0da mov ecx, dword ptr [0x124441a4] */
  ECX = (r32((uint32_t)(0x124441a4)));
  /* 1241d0e0 push ecx */
  push32((uint32_t)(ECX));
  /* 1241d0e1 call 0x1241ee30 */
  push32(0x1241d0e6u); f_1241ee30();
  /* 1241d0e6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241d0e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241d0eb mov edx, dword ptr [0x12443f04] */
  EDX = (r32((uint32_t)(0x12443f04)));
  /* 1241d0f1 push edx */
  push32((uint32_t)(EDX));
  /* 1241d0f2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1241d0f7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1241d0fd push eax */
  push32((uint32_t)(EAX));
  /* 1241d0fe push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1241d103 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 1241d109 push ecx */
  push32((uint32_t)(ECX));
  /* 1241d10a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1241d10f mov edx, dword ptr [0x124441a4] */
  EDX = (r32((uint32_t)(0x124441a4)));
  /* 1241d115 push edx */
  push32((uint32_t)(EDX));
  /* 1241d116 call 0x1241ee30 */
  push32(0x1241d11bu); f_1241ee30();
  /* 1241d11b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241d11e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1241d128 jmp 0x1241d139 */
  goto L_1241d139;
L_1241d12a:;
  /* 1241d12a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1241d130 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241d133 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1241d139:;
  /* 1241d139 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241d143 jae 0x1241d1f4 */
  if (!C.cf) goto L_1241d1f4;
  /* 1241d149 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1241d14f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1241d151 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 1241d159 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1241d15c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241d15e je 0x1241d196 */
  if (C.zf) goto L_1241d196;
  /* 1241d160 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1241d166 mov cl, byte ptr [eax + 0x124440a1] */
  CL = (r8((uint32_t)(EAX + 0x124440a1)));
  /* 1241d16c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1241d16f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1241d175 mov byte ptr [edx + 0x124440a1], cl */
  w8((uint32_t)(EDX + 0x124440a1), (CL));
  /* 1241d17b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1241d181 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1241d187 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1241d18e mov byte ptr [eax + 0x12443fa0], dl */
  w8((uint32_t)(EAX + 0x12443fa0), (DL));
  /* 1241d194 jmp 0x1241d1ef */
  goto L_1241d1ef;
L_1241d196:;
  /* 1241d196 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1241d19c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1241d19e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 1241d1a6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1241d1a9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1241d1ab je 0x1241d1e2 */
  if (C.zf) goto L_1241d1e2;
  /* 1241d1ad mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1241d1b3 mov al, byte ptr [edx + 0x124440a1] */
  AL = (r8((uint32_t)(EDX + 0x124440a1)));
  /* 1241d1b9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1241d1bb mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1241d1c1 mov byte ptr [ecx + 0x124440a1], al */
  w8((uint32_t)(ECX + 0x124440a1), (AL));
  /* 1241d1c7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1241d1cd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1241d1d3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1241d1da mov byte ptr [edx + 0x12443fa0], cl */
  w8((uint32_t)(EDX + 0x12443fa0), (CL));
  /* 1241d1e0 jmp 0x1241d1ef */
  goto L_1241d1ef;
L_1241d1e2:;
  /* 1241d1e2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1241d1e8 mov byte ptr [edx + 0x12443fa0], 0 */
  w8((uint32_t)(EDX + 0x12443fa0), (0x0u));
L_1241d1ef:;
  /* 1241d1ef jmp 0x1241d12a */
  goto L_1241d12a;
L_1241d1f4:;
  /* 1241d1f4 jmp 0x1241d2be */
  goto L_1241d2be;
L_1241d1f9:;
  /* 1241d1f9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1241d203 jmp 0x1241d214 */
  goto L_1241d214;
L_1241d205:;
  /* 1241d205 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1241d20b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241d20e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1241d214:;
  /* 1241d214 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241d21e jae 0x1241d2be */
  if (!C.cf) goto L_1241d2be;
  /* 1241d224 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241d22b jb 0x1241d268 */
  if (C.cf) goto L_1241d268;
  /* 1241d22d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241d234 ja 0x1241d268 */
  if ((!C.cf&&!C.zf)) goto L_1241d268;
  /* 1241d236 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1241d23c mov dl, byte ptr [ecx + 0x124440a1] */
  DL = (r8((uint32_t)(ECX + 0x124440a1)));
  /* 1241d242 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1241d245 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1241d24b mov byte ptr [eax + 0x124440a1], dl */
  w8((uint32_t)(EAX + 0x124440a1), (DL));
  /* 1241d251 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1241d257 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241d25a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1241d260 mov byte ptr [edx + 0x12443fa0], cl */
  w8((uint32_t)(EDX + 0x12443fa0), (CL));
  /* 1241d266 jmp 0x1241d2b9 */
  goto L_1241d2b9;
L_1241d268:;
  /* 1241d268 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241d26f jb 0x1241d2ac */
  if (C.cf) goto L_1241d2ac;
  /* 1241d271 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241d278 ja 0x1241d2ac */
  if ((!C.cf&&!C.zf)) goto L_1241d2ac;
  /* 1241d27a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1241d280 mov cl, byte ptr [eax + 0x124440a1] */
  CL = (r8((uint32_t)(EAX + 0x124440a1)));
  /* 1241d286 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1241d289 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1241d28f mov byte ptr [edx + 0x124440a1], cl */
  w8((uint32_t)(EDX + 0x124440a1), (CL));
  /* 1241d295 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1241d29b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241d29e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1241d2a4 mov byte ptr [ecx + 0x12443fa0], al */
  w8((uint32_t)(ECX + 0x12443fa0), (AL));
  /* 1241d2aa jmp 0x1241d2b9 */
  goto L_1241d2b9;
L_1241d2ac:;
  /* 1241d2ac mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1241d2b2 mov byte ptr [edx + 0x12443fa0], 0 */
  w8((uint32_t)(EDX + 0x12443fa0), (0x0u));
L_1241d2b9:;
  /* 1241d2b9 jmp 0x1241d205 */
  goto L_1241d205;
L_1241d2be:;
  /* 1241d2be mov esp, ebp */
  ESP = (EBP);
  /* 1241d2c0 pop ebp */
  EBP = (pop32());
  /* 1241d2c1 ret  */
  ESPCHK(0x1241cfc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2d0 @ 0x1241d2d0 (23 bytes, 9 insns) */
void f_1241d2d0(void) {
  FTRACE(0x1241d2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241d2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1241d2d1 mov ebp, esp */
  EBP = (ESP);
  /* 1241d2d3 cmp dword ptr [0x12443f8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12443f8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241d2da je 0x1241d2e3 */
  if (C.zf) goto L_1241d2e3;
  /* 1241d2dc mov eax, dword ptr [0x12443f04] */
  EAX = (r32((uint32_t)(0x12443f04)));
  /* 1241d2e1 jmp 0x1241d2e5 */
  goto L_1241d2e5;
L_1241d2e3:;
  /* 1241d2e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1241d2e5:;
  /* 1241d2e5 pop ebp */
  EBP = (pop32());
  /* 1241d2e6 ret  */
  ESPCHK(0x1241d2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2f0 @ 0x1241d2f0 (34 bytes, 10 insns) */
void f_1241d2f0(void) {
  FTRACE(0x1241d2f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241d2f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1241d2f1 mov ebp, esp */
  EBP = (ESP);
  /* 1241d2f3 cmp dword ptr [0x12444350], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12444350))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241d2fa jne 0x1241d310 */
  if (!C.zf) goto L_1241d310;
  /* 1241d2fc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1241d2fe call 0x1241cb10 */
  push32(0x1241d303u); f_1241cb10();
  /* 1241d303 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241d306 mov dword ptr [0x12444350], 1 */
  w32((uint32_t)(0x12444350), (0x1u));
L_1241d310:;
  /* 1241d310 pop ebp */
  EBP = (pop32());
  /* 1241d311 ret  */
  ESPCHK(0x1241d2f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d320 @ 0x1241d320 (664 bytes, 263 insns) [15 switch table(s)] */
void f_1241d320(void) {
  FTRACE(0x1241d320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241d320 push ebp */
  push32((uint32_t)(EBP));
  /* 1241d321 mov ebp, esp */
  EBP = (ESP);
  /* 1241d323 push edi */
  push32((uint32_t)(EDI));
  /* 1241d324 push esi */
  push32((uint32_t)(ESI));
  /* 1241d325 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1241d328 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1241d32b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1241d32e mov eax, ecx */
  EAX = (ECX);
  /* 1241d330 mov edx, ecx */
  EDX = (ECX);
  /* 1241d332 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241d334 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241d336 jbe 0x1241d340 */
  if ((C.cf||C.zf)) goto L_1241d340;
  /* 1241d338 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241d33a jb 0x1241d4b8 */
  if (C.cf) goto L_1241d4b8;
L_1241d340:;
  /* 1241d340 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1241d346 jne 0x1241d35c */
  if (!C.zf) goto L_1241d35c;
  /* 1241d348 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1241d34b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1241d34e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241d351 jb 0x1241d37c */
  if (C.cf) goto L_1241d37c;
  /* 1241d353 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1241d355 jmp dword ptr [edx*4 + 0x1241d468] */
  switch (EDX) {
    case 0: goto L_1241d478;
    case 1: goto L_1241d480;
    case 2: goto L_1241d48c;
    case 3: goto L_1241d4a0;
    default: x86_unimpl("switch@0x1241d355 out of table"); return;
  }
L_1241d35c:;
  /* 1241d35c mov eax, edi */
  EAX = (EDI);
  /* 1241d35e mov edx, 3 */
  EDX = (0x3u);
  /* 1241d363 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241d366 jb 0x1241d374 */
  if (C.cf) goto L_1241d374;
  /* 1241d368 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1241d36b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241d36d jmp dword ptr [eax*4 + 0x1241d380] */
  switch (EAX) {
    case 1: goto L_1241d390;
    case 2: goto L_1241d3bc;
    case 3: goto L_1241d3e0;
    default: x86_unimpl("switch@0x1241d36d out of table"); return;
  }
L_1241d374:;
  /* 1241d374 jmp dword ptr [ecx*4 + 0x1241d478] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1241d478)))); return;
  /* 1241d37b nop  */
  /* nop */
L_1241d37c:;
  /* 1241d37c jmp dword ptr [ecx*4 + 0x1241d3fc] */
  switch (ECX) {
    case 0: goto L_1241d45f;
    case 1: goto L_1241d44c;
    case 2: goto L_1241d444;
    case 3: goto L_1241d43c;
    case 4: goto L_1241d434;
    case 5: goto L_1241d42c;
    case 6: goto L_1241d424;
    case 7: goto L_1241d41c;
    default: x86_unimpl("switch@0x1241d37c out of table"); return;
  }
  /* 1241d383 nop  */
  /* nop */
L_1241d390:;
  /* 1241d390 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1241d392 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1241d394 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1241d396 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1241d399 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1241d39c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1241d39f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1241d3a2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1241d3a5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1241d3a8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1241d3ab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241d3ae jb 0x1241d37c */
  if (C.cf) goto L_1241d37c;
  /* 1241d3b0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1241d3b2 jmp dword ptr [edx*4 + 0x1241d468] */
  switch (EDX) {
    case 0: goto L_1241d478;
    case 1: goto L_1241d480;
    case 2: goto L_1241d48c;
    case 3: goto L_1241d4a0;
    default: x86_unimpl("switch@0x1241d3b2 out of table"); return;
  }
  /* 1241d3b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1241d3bc:;
  /* 1241d3bc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1241d3be mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1241d3c0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1241d3c2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1241d3c5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1241d3c8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1241d3cb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1241d3ce add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1241d3d1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241d3d4 jb 0x1241d37c */
  if (C.cf) goto L_1241d37c;
  /* 1241d3d6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1241d3d8 jmp dword ptr [edx*4 + 0x1241d468] */
  switch (EDX) {
    case 0: goto L_1241d478;
    case 1: goto L_1241d480;
    case 2: goto L_1241d48c;
    case 3: goto L_1241d4a0;
    default: x86_unimpl("switch@0x1241d3d8 out of table"); return;
  }
  /* 1241d3df nop  */
  /* nop */
L_1241d3e0:;
  /* 1241d3e0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1241d3e2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1241d3e4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1241d3e6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1241d3e7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1241d3ea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1241d3eb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241d3ee jb 0x1241d37c */
  if (C.cf) goto L_1241d37c;
  /* 1241d3f0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1241d3f2 jmp dword ptr [edx*4 + 0x1241d468] */
  switch (EDX) {
    case 0: goto L_1241d478;
    case 1: goto L_1241d480;
    case 2: goto L_1241d48c;
    case 3: goto L_1241d4a0;
    default: x86_unimpl("switch@0x1241d3f2 out of table"); return;
  }
  /* 1241d3f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1241d41c:;
  /* 1241d41c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1241d420 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1241d424:;
  /* 1241d424 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1241d428 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1241d42c:;
  /* 1241d42c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1241d430 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1241d434:;
  /* 1241d434 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1241d438 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1241d43c:;
  /* 1241d43c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1241d440 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1241d444:;
  /* 1241d444 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1241d448 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1241d44c:;
  /* 1241d44c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1241d450 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1241d454 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1241d45b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1241d45d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1241d45f:;
  /* 1241d45f jmp dword ptr [edx*4 + 0x1241d468] */
  switch (EDX) {
    case 0: goto L_1241d478;
    case 1: goto L_1241d480;
    case 2: goto L_1241d48c;
    case 3: goto L_1241d4a0;
    default: x86_unimpl("switch@0x1241d45f out of table"); return;
  }
  /* 1241d466 mov edi, edi */
  EDI = (EDI);
L_1241d478:;
  /* 1241d478 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241d47b pop esi */
  ESI = (pop32());
  /* 1241d47c pop edi */
  EDI = (pop32());
  /* 1241d47d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1241d47e ret  */
  ESPCHK(0x1241d320u, _esp0);
  ESP += 4; return;
  /* 1241d47f nop  */
  /* nop */
L_1241d480:;
  /* 1241d480 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1241d482 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1241d484 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241d487 pop esi */
  ESI = (pop32());
  /* 1241d488 pop edi */
  EDI = (pop32());
  /* 1241d489 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1241d48a ret  */
  ESPCHK(0x1241d320u, _esp0);
  ESP += 4; return;
  /* 1241d48b nop  */
  /* nop */
L_1241d48c:;
  /* 1241d48c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1241d48e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1241d490 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1241d493 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1241d496 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241d499 pop esi */
  ESI = (pop32());
  /* 1241d49a pop edi */
  EDI = (pop32());
  /* 1241d49b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1241d49c ret  */
  ESPCHK(0x1241d320u, _esp0);
  ESP += 4; return;
  /* 1241d49d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1241d4a0:;
  /* 1241d4a0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1241d4a2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1241d4a4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1241d4a7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1241d4aa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1241d4ad mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1241d4b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241d4b3 pop esi */
  ESI = (pop32());
  /* 1241d4b4 pop edi */
  EDI = (pop32());
  /* 1241d4b5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1241d4b6 ret  */
  ESPCHK(0x1241d320u, _esp0);
  ESP += 4; return;
  /* 1241d4b7 nop  */
  /* nop */
L_1241d4b8:;
  /* 1241d4b8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1241d4bc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1241d4c0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1241d4c6 jne 0x1241d4ec */
  if (!C.zf) goto L_1241d4ec;
  /* 1241d4c8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1241d4cb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1241d4ce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241d4d1 jb 0x1241d4e0 */
  if (C.cf) goto L_1241d4e0;
  /* 1241d4d3 std  */
  C.df=1;
  /* 1241d4d4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1241d4d6 cld  */
  C.df=0;
  /* 1241d4d7 jmp dword ptr [edx*4 + 0x1241d600] */
  switch (EDX) {
    case 0: goto L_1241d610;
    case 1: goto L_1241d618;
    case 2: goto L_1241d628;
    case 3: goto L_1241d63c;
    default: x86_unimpl("switch@0x1241d4d7 out of table"); return;
  }
  /* 1241d4de mov edi, edi */
  EDI = (EDI);
L_1241d4e0:;
  /* 1241d4e0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1241d4e2 jmp dword ptr [ecx*4 + 0x1241d5b0] */
  switch (ECX) {
    case 0: goto L_1241d5f7;
    default: x86_unimpl("switch@0x1241d4e2 out of table"); return;
  }
  /* 1241d4e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1241d4ec:;
  /* 1241d4ec mov eax, edi */
  EAX = (EDI);
  /* 1241d4ee mov edx, 3 */
  EDX = (0x3u);
  /* 1241d4f3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241d4f6 jb 0x1241d504 */
  if (C.cf) goto L_1241d504;
  /* 1241d4f8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1241d4fb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241d4fd jmp dword ptr [eax*4 + 0x1241d508] */
  switch (EAX) {
    case 1: goto L_1241d518;
    case 2: goto L_1241d538;
    case 3: goto L_1241d560;
    default: x86_unimpl("switch@0x1241d4fd out of table"); return;
  }
L_1241d504:;
  /* 1241d504 jmp dword ptr [ecx*4 + 0x1241d600] */
  switch (ECX) {
    case 0: goto L_1241d610;
    case 1: goto L_1241d618;
    case 2: goto L_1241d628;
    case 3: goto L_1241d63c;
    default: x86_unimpl("switch@0x1241d504 out of table"); return;
  }
  /* 1241d50b nop  */
  /* nop */
L_1241d518:;
  /* 1241d518 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1241d51b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1241d51d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1241d520 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1241d521 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1241d524 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1241d525 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241d528 jb 0x1241d4e0 */
  if (C.cf) goto L_1241d4e0;
  /* 1241d52a std  */
  C.df=1;
  /* 1241d52b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1241d52d cld  */
  C.df=0;
  /* 1241d52e jmp dword ptr [edx*4 + 0x1241d600] */
  switch (EDX) {
    case 0: goto L_1241d610;
    case 1: goto L_1241d618;
    case 2: goto L_1241d628;
    case 3: goto L_1241d63c;
    default: x86_unimpl("switch@0x1241d52e out of table"); return;
  }
  /* 1241d535 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1241d538:;
  /* 1241d538 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1241d53b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1241d53d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1241d540 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1241d543 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1241d546 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1241d549 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241d54c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241d54f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241d552 jb 0x1241d4e0 */
  if (C.cf) goto L_1241d4e0;
  /* 1241d554 std  */
  C.df=1;
  /* 1241d555 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1241d557 cld  */
  C.df=0;
  /* 1241d558 jmp dword ptr [edx*4 + 0x1241d600] */
  switch (EDX) {
    case 0: goto L_1241d610;
    case 1: goto L_1241d618;
    case 2: goto L_1241d628;
    case 3: goto L_1241d63c;
    default: x86_unimpl("switch@0x1241d558 out of table"); return;
  }
  /* 1241d55f nop  */
  /* nop */
L_1241d560:;
  /* 1241d560 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1241d563 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1241d565 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1241d568 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1241d56b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1241d56e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1241d571 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1241d574 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1241d577 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241d57a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241d57d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241d580 jb 0x1241d4e0 */
  if (C.cf) goto L_1241d4e0;
  /* 1241d586 std  */
  C.df=1;
  /* 1241d587 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1241d589 cld  */
  C.df=0;
  /* 1241d58a jmp dword ptr [edx*4 + 0x1241d600] */
  switch (EDX) {
    case 0: goto L_1241d610;
    case 1: goto L_1241d618;
    case 2: goto L_1241d628;
    case 3: goto L_1241d63c;
    default: x86_unimpl("switch@0x1241d58a out of table"); return;
  }
  /* 1241d591 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1241d594 mov ah, 0xd5 */
  AH = (0xd5u);
  /* 1241d596 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1241d597 adc bh, byte ptr [ebp + edx*8 - 0x2a3bedbf] */
  { uint32_t _a=(C.b.b.h),_b=(r8((uint32_t)(EBP + EDX*8 + -0x2a3bedbf))),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1241d59e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1241d59f adc cl, ah */
  { uint32_t _a=(CL),_b=(AH),_r=_a+_b+C.cf; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1241d5a1 aad 0x41 */
  x86_unimpl("aad @ 0x1241d5a1");
  /* 1241d5a3 adc dl, ah */
  { uint32_t _a=(DL),_b=(AH),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1241d5a5 aad 0x41 */
  x86_unimpl("aad @ 0x1241d5a5");
  /* 1241d5a7 adc bl, ah */
  { uint32_t _a=(BL),_b=(AH),_r=_a+_b+C.cf; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 1241d5a9 aad 0x41 */
  x86_unimpl("aad @ 0x1241d5a9");
  /* 1241d5ab adc ah, ah */
  { uint32_t _a=(AH),_b=(AH),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 1241d5ad aad 0x41 */
  x86_unimpl("aad @ 0x1241d5ad");
  /* 1241d5b4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1241d5b8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1241d5bc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1241d5c0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1241d5c4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1241d5c8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1241d5cc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1241d5d0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1241d5d4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1241d5d8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1241d5dc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1241d5e0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1241d5e4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1241d5e8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1241d5ec lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1241d5f3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1241d5f5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1241d5f7:;
  /* 1241d5f7 jmp dword ptr [edx*4 + 0x1241d600] */
  switch (EDX) {
    case 0: goto L_1241d610;
    case 1: goto L_1241d618;
    case 2: goto L_1241d628;
    case 3: goto L_1241d63c;
    default: x86_unimpl("switch@0x1241d5f7 out of table"); return;
  }
  /* 1241d5fe mov edi, edi */
  EDI = (EDI);
L_1241d610:;
  /* 1241d610 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241d613 pop esi */
  ESI = (pop32());
  /* 1241d614 pop edi */
  EDI = (pop32());
  /* 1241d615 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1241d616 ret  */
  ESPCHK(0x1241d320u, _esp0);
  ESP += 4; return;
  /* 1241d617 nop  */
  /* nop */
L_1241d618:;
  /* 1241d618 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1241d61b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1241d61e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241d621 pop esi */
  ESI = (pop32());
  /* 1241d622 pop edi */
  EDI = (pop32());
  /* 1241d623 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1241d624 ret  */
  ESPCHK(0x1241d320u, _esp0);
  ESP += 4; return;
  /* 1241d625 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1241d628:;
  /* 1241d628 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1241d62b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1241d62e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1241d631 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1241d634 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241d637 pop esi */
  ESI = (pop32());
  /* 1241d638 pop edi */
  EDI = (pop32());
  /* 1241d639 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1241d63a ret  */
  ESPCHK(0x1241d320u, _esp0);
  ESP += 4; return;
  /* 1241d63b nop  */
  /* nop */
L_1241d63c:;
  /* 1241d63c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1241d63f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1241d642 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1241d645 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1241d648 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1241d64b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1241d64e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241d651 pop esi */
  ESI = (pop32());
  /* 1241d652 pop edi */
  EDI = (pop32());
  /* 1241d653 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1241d654 ret  */
  ESPCHK(0x1241d320u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x1241d660 (104 bytes, 43 insns) */
void f_1241d660(void) {
  FTRACE(0x1241d660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241d660 push ebx */
  push32((uint32_t)(EBX));
  /* 1241d661 push esi */
  push32((uint32_t)(ESI));
  /* 1241d662 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1241d666 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241d668 jne 0x1241d682 */
  if (!C.zf) goto L_1241d682;
  /* 1241d66a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1241d66e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1241d672 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1241d674 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1241d676 mov ebx, eax */
  EBX = (EAX);
  /* 1241d678 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1241d67c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1241d67e mov edx, ebx */
  EDX = (EBX);
  /* 1241d680 jmp 0x1241d6c3 */
  goto L_1241d6c3;
L_1241d682:;
  /* 1241d682 mov ecx, eax */
  ECX = (EAX);
  /* 1241d684 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1241d688 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1241d68c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1241d690:;
  /* 1241d690 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1241d692 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1241d694 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1241d696 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1241d698 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1241d69a jne 0x1241d690 */
  if (!C.zf) goto L_1241d690;
  /* 1241d69c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1241d69e mov esi, eax */
  ESI = (EAX);
  /* 1241d6a0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1241d6a4 mov ecx, eax */
  ECX = (EAX);
  /* 1241d6a6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1241d6aa mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1241d6ac add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241d6ae jb 0x1241d6be */
  if (C.cf) goto L_1241d6be;
  /* 1241d6b0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241d6b4 ja 0x1241d6be */
  if ((!C.cf&&!C.zf)) goto L_1241d6be;
  /* 1241d6b6 jb 0x1241d6bf */
  if (C.cf) goto L_1241d6bf;
  /* 1241d6b8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241d6bc jbe 0x1241d6bf */
  if ((C.cf||C.zf)) goto L_1241d6bf;
L_1241d6be:;
  /* 1241d6be dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1241d6bf:;
  /* 1241d6bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1241d6c1 mov eax, esi */
  EAX = (ESI);
L_1241d6c3:;
  /* 1241d6c3 pop esi */
  ESI = (pop32());
  /* 1241d6c4 pop ebx */
  EBX = (pop32());
  /* 1241d6c5 ret 0x10 */
  ESPCHK(0x1241d660u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1241d6d0 (117 bytes, 44 insns) */
void f_1241d6d0(void) {
  FTRACE(0x1241d6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241d6d0 push ebx */
  push32((uint32_t)(EBX));
  /* 1241d6d1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1241d6d5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241d6d7 jne 0x1241d6f1 */
  if (!C.zf) goto L_1241d6f1;
  /* 1241d6d9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1241d6dd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1241d6e1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1241d6e3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1241d6e5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1241d6e9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1241d6eb mov eax, edx */
  EAX = (EDX);
  /* 1241d6ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1241d6ef jmp 0x1241d741 */
  goto L_1241d741;
L_1241d6f1:;
  /* 1241d6f1 mov ecx, eax */
  ECX = (EAX);
  /* 1241d6f3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1241d6f7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1241d6fb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1241d6ff:;
  /* 1241d6ff shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1241d701 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1241d703 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1241d705 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1241d707 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1241d709 jne 0x1241d6ff */
  if (!C.zf) goto L_1241d6ff;
  /* 1241d70b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1241d70d mov ecx, eax */
  ECX = (EAX);
  /* 1241d70f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1241d713 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1241d714 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1241d718 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241d71a jb 0x1241d72a */
  if (C.cf) goto L_1241d72a;
  /* 1241d71c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241d720 ja 0x1241d72a */
  if ((!C.cf&&!C.zf)) goto L_1241d72a;
  /* 1241d722 jb 0x1241d732 */
  if (C.cf) goto L_1241d732;
  /* 1241d724 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241d728 jbe 0x1241d732 */
  if ((C.cf||C.zf)) goto L_1241d732;
L_1241d72a:;
  /* 1241d72a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241d72e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1241d732:;
  /* 1241d732 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241d736 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241d73a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1241d73c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1241d73e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1241d741:;
  /* 1241d741 pop ebx */
  EBX = (pop32());
  /* 1241d742 ret 0x10 */
  ESPCHK(0x1241d6d0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000d750 @ 0x1241d750 (628 bytes, 214 insns) */
void f_1241d750(void) {
  FTRACE(0x1241d750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241d750 push ebp */
  push32((uint32_t)(EBP));
  /* 1241d751 mov ebp, esp */
  EBP = (ESP);
  /* 1241d753 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241d756 push ebx */
  push32((uint32_t)(EBX));
  /* 1241d757 push esi */
  push32((uint32_t)(ESI));
  /* 1241d758 push edi */
  push32((uint32_t)(EDI));
L_1241d759:;
  /* 1241d759 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241d75d jne 0x1241d77d */
  if (!C.zf) goto L_1241d77d;
  /* 1241d75f push 0x1243e538 */
  push32((uint32_t)(0x1243e538u));
  /* 1241d764 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241d766 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1241d768 push 0x1243e52c */
  push32((uint32_t)(0x1243e52cu));
  /* 1241d76d push 2 */
  push32((uint32_t)(0x2u));
  /* 1241d76f call 0x12415b00 */
  push32(0x1241d774u); f_12415b00();
  /* 1241d774 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241d777 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241d77a jne 0x1241d77d */
  if (!C.zf) goto L_1241d77d;
  /* 1241d77c int3  */
  x86_unimpl("int3 @ 0x1241d77c");
L_1241d77d:;
  /* 1241d77d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241d77f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241d781 jne 0x1241d759 */
  if (!C.zf) goto L_1241d759;
  /* 1241d783 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241d786 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1241d789 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241d78c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1241d78f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1241d792 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241d795 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1241d798 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1241d79e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241d7a0 je 0x1241d7af */
  if (C.zf) goto L_1241d7af;
  /* 1241d7a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241d7a5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1241d7a8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1241d7ab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1241d7ad je 0x1241d7c5 */
  if (C.zf) goto L_1241d7c5;
L_1241d7af:;
  /* 1241d7af mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241d7b2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1241d7b5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1241d7b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241d7ba mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1241d7bd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1241d7c0 jmp 0x1241d9bd */
  goto L_1241d9bd;
L_1241d7c5:;
  /* 1241d7c5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241d7c8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1241d7cb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1241d7ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241d7d0 je 0x1241d81c */
  if (C.zf) goto L_1241d81c;
  /* 1241d7d2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241d7d5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1241d7dc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241d7df mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1241d7e2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1241d7e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241d7e7 je 0x1241d805 */
  if (C.zf) goto L_1241d805;
  /* 1241d7e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241d7ec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241d7ef mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1241d7f2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1241d7f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241d7f7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1241d7fa and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1241d7fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241d800 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1241d803 jmp 0x1241d81c */
  goto L_1241d81c;
L_1241d805:;
  /* 1241d805 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241d808 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1241d80b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1241d80e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241d811 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1241d814 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1241d817 jmp 0x1241d9bd */
  goto L_1241d9bd;
L_1241d81c:;
  /* 1241d81c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241d81f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1241d822 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1241d825 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241d828 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1241d82b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241d82e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1241d831 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1241d834 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241d837 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1241d83a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241d83d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1241d844 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1241d84b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241d84e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1241d851 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241d854 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1241d857 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1241d85d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1241d85f jne 0x1241d88f */
  if (!C.zf) goto L_1241d88f;
  /* 1241d861 cmp dword ptr [ebp - 8], 0x12441140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12441140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241d868 je 0x1241d873 */
  if (C.zf) goto L_1241d873;
  /* 1241d86a cmp dword ptr [ebp - 8], 0x12441160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12441160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241d871 jne 0x1241d883 */
  if (!C.zf) goto L_1241d883;
L_1241d873:;
  /* 1241d873 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241d876 push edx */
  push32((uint32_t)(EDX));
  /* 1241d877 call 0x1241f6c0 */
  push32(0x1241d87cu); f_1241f6c0();
  /* 1241d87c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241d87f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241d881 jne 0x1241d88f */
  if (!C.zf) goto L_1241d88f;
L_1241d883:;
  /* 1241d883 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241d886 push eax */
  push32((uint32_t)(EAX));
  /* 1241d887 call 0x1241f5f0 */
  push32(0x1241d88cu); f_1241f5f0();
  /* 1241d88c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1241d88f:;
  /* 1241d88f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241d892 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1241d895 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1241d89b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241d89d je 0x1241d97b */
  if (C.zf) goto L_1241d97b;
L_1241d8a3:;
  /* 1241d8a3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241d8a6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241d8a9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1241d8ab sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241d8ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241d8b0 jge 0x1241d8d3 */
  if ((C.sf==C.of)) goto L_1241d8d3;
  /* 1241d8b2 push 0x1243e4ec */
  push32((uint32_t)(0x1243e4ecu));
  /* 1241d8b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241d8b9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1241d8be push 0x1243e52c */
  push32((uint32_t)(0x1243e52cu));
  /* 1241d8c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1241d8c5 call 0x12415b00 */
  push32(0x1241d8cau); f_12415b00();
  /* 1241d8ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241d8cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241d8d0 jne 0x1241d8d3 */
  if (!C.zf) goto L_1241d8d3;
  /* 1241d8d2 int3  */
  x86_unimpl("int3 @ 0x1241d8d2");
L_1241d8d3:;
  /* 1241d8d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241d8d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241d8d7 jne 0x1241d8a3 */
  if (!C.zf) goto L_1241d8a3;
  /* 1241d8d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241d8dc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241d8df mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1241d8e1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241d8e4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1241d8e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241d8ea mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1241d8ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241d8f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241d8f3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1241d8f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241d8f8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1241d8fb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241d8fe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241d901 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1241d904 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241d908 jle 0x1241d926 */
  if ((C.zf||C.sf!=C.of)) goto L_1241d926;
  /* 1241d90a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241d90d push ecx */
  push32((uint32_t)(ECX));
  /* 1241d90e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241d911 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1241d914 push eax */
  push32((uint32_t)(EAX));
  /* 1241d915 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241d918 push ecx */
  push32((uint32_t)(ECX));
  /* 1241d919 call 0x1241f2e0 */
  push32(0x1241d91eu); f_1241f2e0();
  /* 1241d91e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241d921 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1241d924 jmp 0x1241d96e */
  goto L_1241d96e;
L_1241d926:;
  /* 1241d926 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241d92a je 0x1241d949 */
  if (C.zf) goto L_1241d949;
  /* 1241d92c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241d92f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1241d932 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241d935 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1241d938 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241d93b mov ecx, dword ptr [edx*4 + 0x12444200] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12444200)));
  /* 1241d942 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241d944 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1241d947 jmp 0x1241d950 */
  goto L_1241d950;
L_1241d949:;
  /* 1241d949 mov dword ptr [ebp - 0x14], 0x12440a60 */
  w32((uint32_t)(EBP + -0x14), (0x12440a60u));
L_1241d950:;
  /* 1241d950 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241d953 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1241d957 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1241d95a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241d95c je 0x1241d96e */
  if (C.zf) goto L_1241d96e;
  /* 1241d95e push 2 */
  push32((uint32_t)(0x2u));
  /* 1241d960 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241d962 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241d965 push ecx */
  push32((uint32_t)(ECX));
  /* 1241d966 call 0x1241f190 */
  push32(0x1241d96bu); f_1241f190();
  /* 1241d96b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1241d96e:;
  /* 1241d96e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241d971 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1241d974 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1241d977 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1241d979 jmp 0x1241d999 */
  goto L_1241d999;
L_1241d97b:;
  /* 1241d97b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1241d982 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241d985 push edx */
  push32((uint32_t)(EDX));
  /* 1241d986 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1241d989 push eax */
  push32((uint32_t)(EAX));
  /* 1241d98a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241d98d push ecx */
  push32((uint32_t)(ECX));
  /* 1241d98e call 0x1241f2e0 */
  push32(0x1241d993u); f_1241f2e0();
  /* 1241d993 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241d996 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1241d999:;
  /* 1241d999 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241d99c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241d99f je 0x1241d9b5 */
  if (C.zf) goto L_1241d9b5;
  /* 1241d9a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241d9a4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1241d9a7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1241d9aa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241d9ad mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1241d9b0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1241d9b3 jmp 0x1241d9bd */
  goto L_1241d9bd;
L_1241d9b5:;
  /* 1241d9b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241d9b8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1241d9bd:;
  /* 1241d9bd pop edi */
  EDI = (pop32());
  /* 1241d9be pop esi */
  ESI = (pop32());
  /* 1241d9bf pop ebx */
  EBX = (pop32());
  /* 1241d9c0 mov esp, ebp */
  ESP = (EBP);
  /* 1241d9c2 pop ebp */
  EBP = (pop32());
  /* 1241d9c3 ret  */
  ESPCHK(0x1241d750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d9d0 @ 0x1241d9d0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1241d9d0(void) {
  FTRACE(0x1241d9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241d9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1241d9d1 mov ebp, esp */
  EBP = (ESP);
  /* 1241d9d3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241d9d9 push ebx */
  push32((uint32_t)(EBX));
  /* 1241d9da push esi */
  push32((uint32_t)(ESI));
  /* 1241d9db push edi */
  push32((uint32_t)(EDI));
  /* 1241d9dc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1241d9e3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1241d9ed mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1241d9f4:;
  /* 1241d9f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241d9f7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1241d9f9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1241d9fc movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1241da00 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241da03 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241da06 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1241da09 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241da0b je 0x1241e5e7 */
  if (C.zf) goto L_1241e5e7;
  /* 1241da11 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241da18 jl 0x1241e5e7 */
  if ((C.sf!=C.of)) goto L_1241e5e7;
  /* 1241da1e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1241da22 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241da25 jl 0x1241da46 */
  if ((C.sf!=C.of)) goto L_1241da46;
  /* 1241da27 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1241da2b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241da2e jg 0x1241da46 */
  if ((!C.zf&&C.sf==C.of)) goto L_1241da46;
  /* 1241da30 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1241da34 movsx ecx, byte ptr [eax + 0x1243e524] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x1243e524))));
  /* 1241da3b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1241da3e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1241da44 jmp 0x1241da50 */
  goto L_1241da50;
L_1241da46:;
  /* 1241da46 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1241da50:;
  /* 1241da50 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1241da56 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1241da59 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241da5c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241da5f movsx edx, byte ptr [ecx + eax*8 + 0x1243e544] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x1243e544))));
  /* 1241da67 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1241da6a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1241da6d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241da70 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1241da76 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241da7d ja 0x1241e5e2 */
  if ((!C.cf&&!C.zf)) goto L_1241e5e2;
  /* 1241da83 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1241da89 jmp dword ptr [ecx*4 + 0x1241e5f4] */
  switch (ECX) {
    case 0: goto L_1241da90;
    case 1: goto L_1241db2a;
    case 2: goto L_1241db6c;
    case 3: goto L_1241dbdb;
    case 4: goto L_1241dc33;
    case 5: goto L_1241dc42;
    case 6: goto L_1241dc8e;
    case 7: goto L_1241dd21;
    case 8: goto L_1241dbb8;
    case 9: goto L_1241dbc3;
    case 10: goto L_1241dbae;
    case 11: goto L_1241dba3;
    case 12: goto L_1241dbce;
    case 13: goto L_1241dbd6;
    default: x86_unimpl("switch@0x1241da89 out of table"); return;
  }
L_1241da90:;
  /* 1241da90 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1241da97 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1241da9a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1241daa0 mov eax, dword ptr [0x12440c98] */
  EAX = (r32((uint32_t)(0x12440c98)));
  /* 1241daa5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1241daa7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1241daab and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1241dab1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1241dab3 je 0x1241db0d */
  if (C.zf) goto L_1241db0d;
  /* 1241dab5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1241dabb push edx */
  push32((uint32_t)(EDX));
  /* 1241dabc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241dabf push eax */
  push32((uint32_t)(EAX));
  /* 1241dac0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1241dac4 push ecx */
  push32((uint32_t)(ECX));
  /* 1241dac5 call 0x1241e700 */
  push32(0x1241dacau); f_1241e700();
  /* 1241daca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241dacd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241dad0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1241dad2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1241dad5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241dad8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241dadb mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1241dade:;
  /* 1241dade movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1241dae2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241dae4 jne 0x1241db07 */
  if (!C.zf) goto L_1241db07;
  /* 1241dae6 push 0x1243e5c4 */
  push32((uint32_t)(0x1243e5c4u));
  /* 1241daeb push 0 */
  push32((uint32_t)(0x0u));
  /* 1241daed push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1241daf2 push 0x1243e5b8 */
  push32((uint32_t)(0x1243e5b8u));
  /* 1241daf7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1241daf9 call 0x12415b00 */
  push32(0x1241dafeu); f_12415b00();
  /* 1241dafe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241db01 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241db04 jne 0x1241db07 */
  if (!C.zf) goto L_1241db07;
  /* 1241db06 int3  */
  x86_unimpl("int3 @ 0x1241db06");
L_1241db07:;
  /* 1241db07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241db09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241db0b jne 0x1241dade */
  if (!C.zf) goto L_1241dade;
L_1241db0d:;
  /* 1241db0d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1241db13 push ecx */
  push32((uint32_t)(ECX));
  /* 1241db14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241db17 push edx */
  push32((uint32_t)(EDX));
  /* 1241db18 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1241db1c push eax */
  push32((uint32_t)(EAX));
  /* 1241db1d call 0x1241e700 */
  push32(0x1241db22u); f_1241e700();
  /* 1241db22 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241db25 jmp 0x1241e5e2 */
  goto L_1241e5e2;
L_1241db2a:;
  /* 1241db2a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1241db31 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241db34 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1241db3a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1241db40 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1241db46 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1241db4c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1241db4f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1241db56 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1241db60 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1241db67 jmp 0x1241e5e2 */
  goto L_1241e5e2;
L_1241db6c:;
  /* 1241db6c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1241db70 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1241db76 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1241db7c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241db7f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1241db85 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241db8c ja 0x1241dbd6 */
  if ((!C.cf&&!C.zf)) goto L_1241dbd6;
  /* 1241db8e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1241db94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241db96 mov al, byte ptr [ecx + 0x1241e62c] */
  AL = (r8((uint32_t)(ECX + 0x1241e62c)));
  /* 1241db9c jmp dword ptr [eax*4 + 0x1241e614] */
  switch (EAX) {
    case 0: goto L_1241dbb8;
    case 1: goto L_1241dbc3;
    case 2: goto L_1241dbae;
    case 3: goto L_1241dba3;
    case 4: goto L_1241dbce;
    case 5: goto L_1241dbd6;
    default: x86_unimpl("switch@0x1241db9c out of table"); return;
  }
L_1241dba3:;
  /* 1241dba3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241dba6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1241dba9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1241dbac jmp 0x1241dbd6 */
  goto L_1241dbd6;
L_1241dbae:;
  /* 1241dbae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241dbb1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1241dbb3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1241dbb6 jmp 0x1241dbd6 */
  goto L_1241dbd6;
L_1241dbb8:;
  /* 1241dbb8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241dbbb or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1241dbbe mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1241dbc1 jmp 0x1241dbd6 */
  goto L_1241dbd6;
L_1241dbc3:;
  /* 1241dbc3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241dbc6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1241dbc9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1241dbcc jmp 0x1241dbd6 */
  goto L_1241dbd6;
L_1241dbce:;
  /* 1241dbce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241dbd1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1241dbd3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1241dbd6:;
  /* 1241dbd6 jmp 0x1241e5e2 */
  goto L_1241e5e2;
L_1241dbdb:;
  /* 1241dbdb movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1241dbdf cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241dbe2 jne 0x1241dc17 */
  if (!C.zf) goto L_1241dc17;
  /* 1241dbe4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1241dbe7 push edx */
  push32((uint32_t)(EDX));
  /* 1241dbe8 call 0x1241e810 */
  push32(0x1241dbedu); f_1241e810();
  /* 1241dbed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241dbf0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1241dbf6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241dbfd jge 0x1241dc15 */
  if ((C.sf==C.of)) goto L_1241dc15;
  /* 1241dbff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241dc02 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1241dc04 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1241dc07 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1241dc0d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1241dc0f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1241dc15:;
  /* 1241dc15 jmp 0x1241dc2e */
  goto L_1241dc2e;
L_1241dc17:;
  /* 1241dc17 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1241dc1d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241dc20 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1241dc24 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1241dc28 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1241dc2e:;
  /* 1241dc2e jmp 0x1241e5e2 */
  goto L_1241e5e2;
L_1241dc33:;
  /* 1241dc33 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1241dc3d jmp 0x1241e5e2 */
  goto L_1241e5e2;
L_1241dc42:;
  /* 1241dc42 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1241dc46 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241dc49 jne 0x1241dc72 */
  if (!C.zf) goto L_1241dc72;
  /* 1241dc4b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1241dc4e push eax */
  push32((uint32_t)(EAX));
  /* 1241dc4f call 0x1241e810 */
  push32(0x1241dc54u); f_1241e810();
  /* 1241dc54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241dc57 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1241dc5d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241dc64 jge 0x1241dc70 */
  if ((C.sf==C.of)) goto L_1241dc70;
  /* 1241dc66 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1241dc70:;
  /* 1241dc70 jmp 0x1241dc89 */
  goto L_1241dc89;
L_1241dc72:;
  /* 1241dc72 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1241dc78 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241dc7b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1241dc7f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1241dc83 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1241dc89:;
  /* 1241dc89 jmp 0x1241e5e2 */
  goto L_1241e5e2;
L_1241dc8e:;
  /* 1241dc8e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1241dc92 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1241dc98 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1241dc9e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241dca1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1241dca7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241dcae ja 0x1241dd1c */
  if ((!C.cf&&!C.zf)) goto L_1241dd1c;
  /* 1241dcb0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1241dcb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241dcb8 mov al, byte ptr [ecx + 0x1241e651] */
  AL = (r8((uint32_t)(ECX + 0x1241e651)));
  /* 1241dcbe jmp dword ptr [eax*4 + 0x1241e63d] */
  switch (EAX) {
    case 0: goto L_1241dcd0;
    case 1: goto L_1241dd09;
    case 2: goto L_1241dcc5;
    case 3: goto L_1241dd13;
    case 4: goto L_1241dd1c;
    default: x86_unimpl("switch@0x1241dcbe out of table"); return;
  }
L_1241dcc5:;
  /* 1241dcc5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241dcc8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1241dccb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1241dcce jmp 0x1241dd1c */
  goto L_1241dd1c;
L_1241dcd0:;
  /* 1241dcd0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241dcd3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1241dcd6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241dcd9 jne 0x1241dcfb */
  if (!C.zf) goto L_1241dcfb;
  /* 1241dcdb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241dcde movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1241dce2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241dce5 jne 0x1241dcfb */
  if (!C.zf) goto L_1241dcfb;
  /* 1241dce7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241dcea add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241dced mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1241dcf0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241dcf3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1241dcf6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1241dcf9 jmp 0x1241dd07 */
  goto L_1241dd07;
L_1241dcfb:;
  /* 1241dcfb mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1241dd02 jmp 0x1241da90 */
  goto L_1241da90;
L_1241dd07:;
  /* 1241dd07 jmp 0x1241dd1c */
  goto L_1241dd1c;
L_1241dd09:;
  /* 1241dd09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241dd0c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1241dd0e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1241dd11 jmp 0x1241dd1c */
  goto L_1241dd1c;
L_1241dd13:;
  /* 1241dd13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241dd16 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1241dd19 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1241dd1c:;
  /* 1241dd1c jmp 0x1241e5e2 */
  goto L_1241e5e2;
L_1241dd21:;
  /* 1241dd21 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1241dd25 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1241dd2b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1241dd31 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241dd34 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1241dd3a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241dd41 ja 0x1241e407 */
  if ((!C.cf&&!C.zf)) goto L_1241e407;
  /* 1241dd47 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1241dd4d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1241dd4f mov cl, byte ptr [edx + 0x1241e6bc] */
  CL = (r8((uint32_t)(EDX + 0x1241e6bc)));
  /* 1241dd55 jmp dword ptr [ecx*4 + 0x1241e680] */
  switch (ECX) {
    case 0: goto L_1241dd5c;
    case 1: goto L_1241dff0;
    case 2: goto L_1241de80;
    case 3: goto L_1241e129;
    case 4: goto L_1241ddeb;
    case 5: goto L_1241dd71;
    case 6: goto L_1241e0fb;
    case 7: goto L_1241e000;
    case 8: goto L_1241dfa5;
    case 9: goto L_1241e175;
    case 10: goto L_1241e11f;
    case 11: goto L_1241de96;
    case 12: goto L_1241e113;
    case 13: goto L_1241e135;
    case 14: goto L_1241e407;
    default: x86_unimpl("switch@0x1241dd55 out of table"); return;
  }
L_1241dd5c:;
  /* 1241dd5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241dd5f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1241dd64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241dd66 jne 0x1241dd71 */
  if (!C.zf) goto L_1241dd71;
  /* 1241dd68 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241dd6b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1241dd6e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1241dd71:;
  /* 1241dd71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241dd74 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1241dd7a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241dd7c je 0x1241ddb7 */
  if (C.zf) goto L_1241ddb7;
  /* 1241dd7e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1241dd81 push eax */
  push32((uint32_t)(EAX));
  /* 1241dd82 call 0x1241e850 */
  push32(0x1241dd87u); f_1241e850();
  /* 1241dd87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241dd8a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1241dd8e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1241dd92 push ecx */
  push32((uint32_t)(ECX));
  /* 1241dd93 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1241dd99 push edx */
  push32((uint32_t)(EDX));
  /* 1241dd9a call 0x1241f930 */
  push32(0x1241dd9fu); f_1241f930();
  /* 1241dd9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241dda2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1241dda5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241dda9 jge 0x1241ddb5 */
  if ((C.sf==C.of)) goto L_1241ddb5;
  /* 1241ddab mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1241ddb5:;
  /* 1241ddb5 jmp 0x1241dddd */
  goto L_1241dddd;
L_1241ddb7:;
  /* 1241ddb7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1241ddba push eax */
  push32((uint32_t)(EAX));
  /* 1241ddbb call 0x1241e810 */
  push32(0x1241ddc0u); f_1241e810();
  /* 1241ddc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241ddc3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1241ddca mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1241ddd0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1241ddd6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1241dddd:;
  /* 1241dddd lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1241dde3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1241dde6 jmp 0x1241e407 */
  goto L_1241e407;
L_1241ddeb:;
  /* 1241ddeb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1241ddee push eax */
  push32((uint32_t)(EAX));
  /* 1241ddef call 0x1241e810 */
  push32(0x1241ddf4u); f_1241e810();
  /* 1241ddf4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241ddf7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1241ddfd cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241de04 je 0x1241de12 */
  if (C.zf) goto L_1241de12;
  /* 1241de06 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1241de0c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241de10 jne 0x1241de2c */
  if (!C.zf) goto L_1241de2c;
L_1241de12:;
  /* 1241de12 mov edx, dword ptr [0x12440fb0] */
  EDX = (r32((uint32_t)(0x12440fb0)));
  /* 1241de18 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1241de1b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241de1e push eax */
  push32((uint32_t)(EAX));
  /* 1241de1f call 0x12419870 */
  push32(0x1241de24u); f_12419870();
  /* 1241de24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241de27 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1241de2a jmp 0x1241de7b */
  goto L_1241de7b;
L_1241de2c:;
  /* 1241de2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241de2f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1241de35 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1241de37 je 0x1241de5c */
  if (C.zf) goto L_1241de5c;
  /* 1241de39 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1241de3f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1241de42 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1241de45 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1241de4b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1241de4e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1241de50 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1241de53 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1241de5a jmp 0x1241de7b */
  goto L_1241de7b;
L_1241de5c:;
  /* 1241de5c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1241de63 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1241de69 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1241de6c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1241de6f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1241de75 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1241de78 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1241de7b:;
  /* 1241de7b jmp 0x1241e407 */
  goto L_1241e407;
L_1241de80:;
  /* 1241de80 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241de83 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1241de89 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1241de8b jne 0x1241de96 */
  if (!C.zf) goto L_1241de96;
  /* 1241de8d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241de90 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1241de93 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1241de96:;
  /* 1241de96 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241de9d jne 0x1241deab */
  if (!C.zf) goto L_1241deab;
  /* 1241de9f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1241dea9 jmp 0x1241deb7 */
  goto L_1241deb7;
L_1241deab:;
  /* 1241deab mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1241deb1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1241deb7:;
  /* 1241deb7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1241debd mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1241dec3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1241dec6 push edx */
  push32((uint32_t)(EDX));
  /* 1241dec7 call 0x1241e810 */
  push32(0x1241deccu); f_1241e810();
  /* 1241decc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241decf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1241ded2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241ded5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1241deda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241dedc je 0x1241df46 */
  if (C.zf) goto L_1241df46;
  /* 1241dede cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241dee2 jne 0x1241deed */
  if (!C.zf) goto L_1241deed;
  /* 1241dee4 mov ecx, dword ptr [0x12440fb4] */
  ECX = (r32((uint32_t)(0x12440fb4)));
  /* 1241deea mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1241deed:;
  /* 1241deed mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1241def4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241def7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1241defd:;
  /* 1241defd mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1241df03 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1241df09 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241df0c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1241df12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241df14 je 0x1241df36 */
  if (C.zf) goto L_1241df36;
  /* 1241df16 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1241df1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241df1e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1241df21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241df23 je 0x1241df36 */
  if (C.zf) goto L_1241df36;
  /* 1241df25 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1241df2b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241df2e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1241df34 jmp 0x1241defd */
  goto L_1241defd;
L_1241df36:;
  /* 1241df36 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1241df3c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241df3f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1241df41 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1241df44 jmp 0x1241dfa0 */
  goto L_1241dfa0;
L_1241df46:;
  /* 1241df46 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241df4a jne 0x1241df54 */
  if (!C.zf) goto L_1241df54;
  /* 1241df4c mov eax, dword ptr [0x12440fb0] */
  EAX = (r32((uint32_t)(0x12440fb0)));
  /* 1241df51 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1241df54:;
  /* 1241df54 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241df57 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1241df5d:;
  /* 1241df5d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1241df63 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1241df69 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241df6c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1241df72 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241df74 je 0x1241df94 */
  if (C.zf) goto L_1241df94;
  /* 1241df76 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1241df7c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1241df7f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241df81 je 0x1241df94 */
  if (C.zf) goto L_1241df94;
  /* 1241df83 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1241df89 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241df8c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1241df92 jmp 0x1241df5d */
  goto L_1241df5d;
L_1241df94:;
  /* 1241df94 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1241df9a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241df9d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1241dfa0:;
  /* 1241dfa0 jmp 0x1241e407 */
  goto L_1241e407;
L_1241dfa5:;
  /* 1241dfa5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1241dfa8 push edx */
  push32((uint32_t)(EDX));
  /* 1241dfa9 call 0x1241e810 */
  push32(0x1241dfaeu); f_1241e810();
  /* 1241dfae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241dfb1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1241dfb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241dfba and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1241dfbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241dfbf je 0x1241dfd3 */
  if (C.zf) goto L_1241dfd3;
  /* 1241dfc1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1241dfc7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1241dfce mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1241dfd1 jmp 0x1241dfe1 */
  goto L_1241dfe1;
L_1241dfd3:;
  /* 1241dfd3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1241dfd9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1241dfdf mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1241dfe1:;
  /* 1241dfe1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1241dfeb jmp 0x1241e407 */
  goto L_1241e407;
L_1241dff0:;
  /* 1241dff0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1241dff7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1241dffa add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1241dffd mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1241e000:;
  /* 1241e000 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241e003 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1241e005 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1241e008 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1241e00e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1241e011 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241e018 jge 0x1241e026 */
  if ((C.sf==C.of)) goto L_1241e026;
  /* 1241e01a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1241e024 jmp 0x1241e042 */
  goto L_1241e042;
L_1241e026:;
  /* 1241e026 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241e02d jne 0x1241e042 */
  if (!C.zf) goto L_1241e042;
  /* 1241e02f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1241e033 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241e036 jne 0x1241e042 */
  if (!C.zf) goto L_1241e042;
  /* 1241e038 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1241e042:;
  /* 1241e042 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1241e045 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241e048 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1241e04b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1241e04e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241e051 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1241e053 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1241e056 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1241e05c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1241e062 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241e065 push ecx */
  push32((uint32_t)(ECX));
  /* 1241e066 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1241e06c push edx */
  push32((uint32_t)(EDX));
  /* 1241e06d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1241e071 push eax */
  push32((uint32_t)(EAX));
  /* 1241e072 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241e075 push ecx */
  push32((uint32_t)(ECX));
  /* 1241e076 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1241e07c push edx */
  push32((uint32_t)(EDX));
  /* 1241e07d call dword ptr [0x124413a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124413a0))), 0x1241e083u);
  /* 1241e083 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241e086 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241e089 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1241e08e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241e090 je 0x1241e0a8 */
  if (C.zf) goto L_1241e0a8;
  /* 1241e092 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241e099 jne 0x1241e0a8 */
  if (!C.zf) goto L_1241e0a8;
  /* 1241e09b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241e09e push ecx */
  push32((uint32_t)(ECX));
  /* 1241e09f call dword ptr [0x124413ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124413ac))), 0x1241e0a5u);
  /* 1241e0a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1241e0a8:;
  /* 1241e0a8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1241e0ac cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241e0af jne 0x1241e0ca */
  if (!C.zf) goto L_1241e0ca;
  /* 1241e0b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241e0b4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1241e0b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241e0bb jne 0x1241e0ca */
  if (!C.zf) goto L_1241e0ca;
  /* 1241e0bd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241e0c0 push ecx */
  push32((uint32_t)(ECX));
  /* 1241e0c1 call dword ptr [0x124413a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124413a4))), 0x1241e0c7u);
  /* 1241e0c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1241e0ca:;
  /* 1241e0ca mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241e0cd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1241e0d0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241e0d3 jne 0x1241e0e7 */
  if (!C.zf) goto L_1241e0e7;
  /* 1241e0d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241e0d8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1241e0db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1241e0de mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241e0e1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241e0e4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1241e0e7:;
  /* 1241e0e7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241e0ea push eax */
  push32((uint32_t)(EAX));
  /* 1241e0eb call 0x12419870 */
  push32(0x1241e0f0u); f_12419870();
  /* 1241e0f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241e0f3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1241e0f6 jmp 0x1241e407 */
  goto L_1241e407;
L_1241e0fb:;
  /* 1241e0fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241e0fe or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1241e101 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1241e104 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1241e10e jmp 0x1241e195 */
  goto L_1241e195;
L_1241e113:;
  /* 1241e113 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1241e11d jmp 0x1241e195 */
  goto L_1241e195;
L_1241e11f:;
  /* 1241e11f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1241e129:;
  /* 1241e129 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1241e133 jmp 0x1241e13f */
  goto L_1241e13f;
L_1241e135:;
  /* 1241e135 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1241e13f:;
  /* 1241e13f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1241e149 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241e14c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1241e152 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241e154 je 0x1241e173 */
  if (C.zf) goto L_1241e173;
  /* 1241e156 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1241e15d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1241e163 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241e166 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1241e16c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1241e173:;
  /* 1241e173 jmp 0x1241e195 */
  goto L_1241e195;
L_1241e175:;
  /* 1241e175 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1241e17f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241e182 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1241e188 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1241e18a je 0x1241e195 */
  if (C.zf) goto L_1241e195;
  /* 1241e18c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241e18f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1241e192 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1241e195:;
  /* 1241e195 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241e198 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1241e19d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241e19f je 0x1241e1be */
  if (C.zf) goto L_1241e1be;
  /* 1241e1a1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1241e1a4 push ecx */
  push32((uint32_t)(ECX));
  /* 1241e1a5 call 0x1241e830 */
  push32(0x1241e1aau); f_1241e830();
  /* 1241e1aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241e1ad mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1241e1b3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1241e1b9 jmp 0x1241e24f */
  goto L_1241e24f;
L_1241e1be:;
  /* 1241e1be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241e1c1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1241e1c4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241e1c6 je 0x1241e210 */
  if (C.zf) goto L_1241e210;
  /* 1241e1c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241e1cb and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1241e1ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241e1d0 je 0x1241e1f0 */
  if (C.zf) goto L_1241e1f0;
  /* 1241e1d2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1241e1d5 push ecx */
  push32((uint32_t)(ECX));
  /* 1241e1d6 call 0x1241e810 */
  push32(0x1241e1dbu); f_1241e810();
  /* 1241e1db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241e1de movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1241e1e1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1241e1e2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1241e1e8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1241e1ee jmp 0x1241e20e */
  goto L_1241e20e;
L_1241e1f0:;
  /* 1241e1f0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1241e1f3 push edx */
  push32((uint32_t)(EDX));
  /* 1241e1f4 call 0x1241e810 */
  push32(0x1241e1f9u); f_1241e810();
  /* 1241e1f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241e1fc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1241e201 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1241e202 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1241e208 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1241e20e:;
  /* 1241e20e jmp 0x1241e24f */
  goto L_1241e24f;
L_1241e210:;
  /* 1241e210 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241e213 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1241e216 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241e218 je 0x1241e235 */
  if (C.zf) goto L_1241e235;
  /* 1241e21a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1241e21d push ecx */
  push32((uint32_t)(ECX));
  /* 1241e21e call 0x1241e810 */
  push32(0x1241e223u); f_1241e810();
  /* 1241e223 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241e226 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1241e227 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1241e22d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1241e233 jmp 0x1241e24f */
  goto L_1241e24f;
L_1241e235:;
  /* 1241e235 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1241e238 push edx */
  push32((uint32_t)(EDX));
  /* 1241e239 call 0x1241e810 */
  push32(0x1241e23eu); f_1241e810();
  /* 1241e23e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241e241 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1241e243 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1241e249 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1241e24f:;
  /* 1241e24f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241e252 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1241e255 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241e257 je 0x1241e297 */
  if (C.zf) goto L_1241e297;
  /* 1241e259 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241e260 jg 0x1241e297 */
  if ((!C.zf&&C.sf==C.of)) goto L_1241e297;
  /* 1241e262 jl 0x1241e26d */
  if ((C.sf!=C.of)) goto L_1241e26d;
  /* 1241e264 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241e26b jae 0x1241e297 */
  if (!C.cf) goto L_1241e297;
L_1241e26d:;
  /* 1241e26d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1241e273 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1241e275 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1241e27b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241e27e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1241e280 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1241e286 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1241e28c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241e28f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1241e292 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1241e295 jmp 0x1241e2af */
  goto L_1241e2af;
L_1241e297:;
  /* 1241e297 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1241e29d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1241e2a3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1241e2a9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1241e2af:;
  /* 1241e2af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241e2b2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1241e2b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241e2ba jne 0x1241e2d7 */
  if (!C.zf) goto L_1241e2d7;
  /* 1241e2bc mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1241e2c2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1241e2c8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1241e2cb mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1241e2d1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1241e2d7:;
  /* 1241e2d7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241e2de jge 0x1241e2ec */
  if ((C.sf==C.of)) goto L_1241e2ec;
  /* 1241e2e0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1241e2ea jmp 0x1241e2f5 */
  goto L_1241e2f5;
L_1241e2ec:;
  /* 1241e2ec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241e2ef and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1241e2f2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1241e2f5:;
  /* 1241e2f5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1241e2fb or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1241e301 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241e303 jne 0x1241e30c */
  if (!C.zf) goto L_1241e30c;
  /* 1241e305 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1241e30c:;
  /* 1241e30c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1241e30f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1241e312:;
  /* 1241e312 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1241e318 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1241e31e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241e321 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1241e327 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241e329 jg 0x1241e33f */
  if ((!C.zf&&C.sf==C.of)) goto L_1241e33f;
  /* 1241e32b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1241e331 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1241e337 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1241e339 je 0x1241e3c0 */
  if (C.zf) goto L_1241e3c0;
L_1241e33f:;
  /* 1241e33f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1241e345 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1241e346 push edx */
  push32((uint32_t)(EDX));
  /* 1241e347 push eax */
  push32((uint32_t)(EAX));
  /* 1241e348 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1241e34e push edx */
  push32((uint32_t)(EDX));
  /* 1241e34f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1241e355 push eax */
  push32((uint32_t)(EAX));
  /* 1241e356 call 0x1241d6d0 */
  push32(0x1241e35bu); f_1241d6d0();
  /* 1241e35b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241e35e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1241e364 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1241e36a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1241e36b push edx */
  push32((uint32_t)(EDX));
  /* 1241e36c push eax */
  push32((uint32_t)(EAX));
  /* 1241e36d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1241e373 push ecx */
  push32((uint32_t)(ECX));
  /* 1241e374 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1241e37a push edx */
  push32((uint32_t)(EDX));
  /* 1241e37b call 0x1241d660 */
  push32(0x1241e380u); f_1241d660();
  /* 1241e380 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1241e386 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1241e38c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241e393 jle 0x1241e3a7 */
  if ((C.zf||C.sf!=C.of)) goto L_1241e3a7;
  /* 1241e395 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1241e39b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241e3a1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1241e3a7:;
  /* 1241e3a7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241e3aa mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1241e3b0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1241e3b2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241e3b5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241e3b8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1241e3bb jmp 0x1241e312 */
  goto L_1241e312;
L_1241e3c0:;
  /* 1241e3c0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1241e3c3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241e3c6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1241e3c9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241e3cc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241e3cf mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1241e3d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241e3d5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1241e3da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241e3dc je 0x1241e407 */
  if (C.zf) goto L_1241e407;
  /* 1241e3de mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241e3e1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1241e3e4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241e3e7 jne 0x1241e3ef */
  if (!C.zf) goto L_1241e3ef;
  /* 1241e3e9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241e3ed jne 0x1241e407 */
  if (!C.zf) goto L_1241e407;
L_1241e3ef:;
  /* 1241e3ef mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241e3f2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241e3f5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1241e3f8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241e3fb mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1241e3fe mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241e401 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241e404 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1241e407:;
  /* 1241e407 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241e40e jne 0x1241e5e2 */
  if (!C.zf) goto L_1241e5e2;
  /* 1241e414 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241e417 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1241e41a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241e41c je 0x1241e46d */
  if (C.zf) goto L_1241e46d;
  /* 1241e41e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241e421 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1241e427 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1241e429 je 0x1241e43b */
  if (C.zf) goto L_1241e43b;
  /* 1241e42b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1241e432 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1241e439 jmp 0x1241e46d */
  goto L_1241e46d;
L_1241e43b:;
  /* 1241e43b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241e43e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1241e441 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241e443 je 0x1241e455 */
  if (C.zf) goto L_1241e455;
  /* 1241e445 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1241e44c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1241e453 jmp 0x1241e46d */
  goto L_1241e46d;
L_1241e455:;
  /* 1241e455 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241e458 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1241e45b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241e45d je 0x1241e46d */
  if (C.zf) goto L_1241e46d;
  /* 1241e45f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1241e466 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1241e46d:;
  /* 1241e46d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1241e473 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241e476 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241e479 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1241e47f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241e482 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1241e485 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241e487 jne 0x1241e4a5 */
  if (!C.zf) goto L_1241e4a5;
  /* 1241e489 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1241e48f push eax */
  push32((uint32_t)(EAX));
  /* 1241e490 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241e493 push ecx */
  push32((uint32_t)(ECX));
  /* 1241e494 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1241e49a push edx */
  push32((uint32_t)(EDX));
  /* 1241e49b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1241e49d call 0x1241e780 */
  push32(0x1241e4a2u); f_1241e780();
  /* 1241e4a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1241e4a5:;
  /* 1241e4a5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1241e4ab push eax */
  push32((uint32_t)(EAX));
  /* 1241e4ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241e4af push ecx */
  push32((uint32_t)(ECX));
  /* 1241e4b0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241e4b3 push edx */
  push32((uint32_t)(EDX));
  /* 1241e4b4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1241e4ba push eax */
  push32((uint32_t)(EAX));
  /* 1241e4bb call 0x1241e7c0 */
  push32(0x1241e4c0u); f_1241e7c0();
  /* 1241e4c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241e4c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241e4c6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1241e4c9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1241e4cb je 0x1241e4f3 */
  if (C.zf) goto L_1241e4f3;
  /* 1241e4cd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241e4d0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1241e4d3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241e4d5 jne 0x1241e4f3 */
  if (!C.zf) goto L_1241e4f3;
  /* 1241e4d7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1241e4dd push eax */
  push32((uint32_t)(EAX));
  /* 1241e4de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241e4e1 push ecx */
  push32((uint32_t)(ECX));
  /* 1241e4e2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1241e4e8 push edx */
  push32((uint32_t)(EDX));
  /* 1241e4e9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1241e4eb call 0x1241e780 */
  push32(0x1241e4f0u); f_1241e780();
  /* 1241e4f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1241e4f3:;
  /* 1241e4f3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241e4f7 je 0x1241e5a1 */
  if (C.zf) goto L_1241e5a1;
  /* 1241e4fd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241e501 jle 0x1241e5a1 */
  if ((C.zf||C.sf!=C.of)) goto L_1241e5a1;
  /* 1241e507 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241e50a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1241e510 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241e513 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1241e519:;
  /* 1241e519 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1241e51f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1241e525 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241e528 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1241e52e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241e530 je 0x1241e59f */
  if (C.zf) goto L_1241e59f;
  /* 1241e532 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1241e538 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1241e53b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1241e542 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1241e549 push eax */
  push32((uint32_t)(EAX));
  /* 1241e54a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1241e550 push ecx */
  push32((uint32_t)(ECX));
  /* 1241e551 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1241e557 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241e55a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1241e560 call 0x1241f930 */
  push32(0x1241e565u); f_1241f930();
  /* 1241e565 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241e568 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1241e56e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241e575 jg 0x1241e579 */
  if ((!C.zf&&C.sf==C.of)) goto L_1241e579;
  /* 1241e577 jmp 0x1241e59f */
  goto L_1241e59f;
L_1241e579:;
  /* 1241e579 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1241e57f push eax */
  push32((uint32_t)(EAX));
  /* 1241e580 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241e583 push ecx */
  push32((uint32_t)(ECX));
  /* 1241e584 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1241e58a push edx */
  push32((uint32_t)(EDX));
  /* 1241e58b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1241e591 push eax */
  push32((uint32_t)(EAX));
  /* 1241e592 call 0x1241e7c0 */
  push32(0x1241e597u); f_1241e7c0();
  /* 1241e597 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241e59a jmp 0x1241e519 */
  goto L_1241e519;
L_1241e59f:;
  /* 1241e59f jmp 0x1241e5bc */
  goto L_1241e5bc;
L_1241e5a1:;
  /* 1241e5a1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1241e5a7 push ecx */
  push32((uint32_t)(ECX));
  /* 1241e5a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241e5ab push edx */
  push32((uint32_t)(EDX));
  /* 1241e5ac mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241e5af push eax */
  push32((uint32_t)(EAX));
  /* 1241e5b0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241e5b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1241e5b4 call 0x1241e7c0 */
  push32(0x1241e5b9u); f_1241e7c0();
  /* 1241e5b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1241e5bc:;
  /* 1241e5bc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241e5bf and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1241e5c2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241e5c4 je 0x1241e5e2 */
  if (C.zf) goto L_1241e5e2;
  /* 1241e5c6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1241e5cc push eax */
  push32((uint32_t)(EAX));
  /* 1241e5cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241e5d0 push ecx */
  push32((uint32_t)(ECX));
  /* 1241e5d1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1241e5d7 push edx */
  push32((uint32_t)(EDX));
  /* 1241e5d8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1241e5da call 0x1241e780 */
  push32(0x1241e5dfu); f_1241e780();
  /* 1241e5df add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1241e5e2:;
  /* 1241e5e2 jmp 0x1241d9f4 */
  goto L_1241d9f4;
L_1241e5e7:;
  /* 1241e5e7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1241e5ed pop edi */
  EDI = (pop32());
  /* 1241e5ee pop esi */
  ESI = (pop32());
  /* 1241e5ef pop ebx */
  EBX = (pop32());
  /* 1241e5f0 mov esp, ebp */
  ESP = (EBP);
  /* 1241e5f2 pop ebp */
  EBP = (pop32());
  /* 1241e5f3 ret  */
  ESPCHK(0x1241d9d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e700 @ 0x1241e700 (119 bytes, 44 insns) */
void f_1241e700(void) {
  FTRACE(0x1241e700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241e700 push ebp */
  push32((uint32_t)(EBP));
  /* 1241e701 mov ebp, esp */
  EBP = (ESP);
  /* 1241e703 push ecx */
  push32((uint32_t)(ECX));
  /* 1241e704 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241e707 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1241e70a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241e70d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241e710 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1241e713 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241e716 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241e71a jl 0x1241e742 */
  if ((C.sf!=C.of)) goto L_1241e742;
  /* 1241e71c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241e71f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1241e721 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1241e724 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1241e726 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1241e72a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1241e730 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1241e733 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241e736 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1241e738 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241e73b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241e73e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1241e740 jmp 0x1241e755 */
  goto L_1241e755;
L_1241e742:;
  /* 1241e742 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241e745 push edx */
  push32((uint32_t)(EDX));
  /* 1241e746 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241e749 push eax */
  push32((uint32_t)(EAX));
  /* 1241e74a call 0x1241d750 */
  push32(0x1241e74fu); f_1241d750();
  /* 1241e74f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241e752 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1241e755:;
  /* 1241e755 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241e759 jne 0x1241e766 */
  if (!C.zf) goto L_1241e766;
  /* 1241e75b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1241e75e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1241e764 jmp 0x1241e773 */
  goto L_1241e773;
L_1241e766:;
  /* 1241e766 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1241e769 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1241e76b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241e76e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1241e771 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1241e773:;
  /* 1241e773 mov esp, ebp */
  ESP = (EBP);
  /* 1241e775 pop ebp */
  EBP = (pop32());
  /* 1241e776 ret  */
  ESPCHK(0x1241e700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e780 @ 0x1241e780 (53 bytes, 23 insns) */
void f_1241e780(void) {
  FTRACE(0x1241e780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241e780 push ebp */
  push32((uint32_t)(EBP));
  /* 1241e781 mov ebp, esp */
  EBP = (ESP);
L_1241e783:;
  /* 1241e783 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241e786 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241e789 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241e78c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1241e78f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241e791 jle 0x1241e7b3 */
  if ((C.zf||C.sf!=C.of)) goto L_1241e7b3;
  /* 1241e793 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1241e796 push edx */
  push32((uint32_t)(EDX));
  /* 1241e797 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1241e79a push eax */
  push32((uint32_t)(EAX));
  /* 1241e79b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241e79e push ecx */
  push32((uint32_t)(ECX));
  /* 1241e79f call 0x1241e700 */
  push32(0x1241e7a4u); f_1241e700();
  /* 1241e7a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241e7a7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1241e7aa cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241e7ad jne 0x1241e7b1 */
  if (!C.zf) goto L_1241e7b1;
  /* 1241e7af jmp 0x1241e7b3 */
  goto L_1241e7b3;
L_1241e7b1:;
  /* 1241e7b1 jmp 0x1241e783 */
  goto L_1241e783;
L_1241e7b3:;
  /* 1241e7b3 pop ebp */
  EBP = (pop32());
  /* 1241e7b4 ret  */
  ESPCHK(0x1241e780u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e7c0 @ 0x1241e7c0 (74 bytes, 31 insns) */
void f_1241e7c0(void) {
  FTRACE(0x1241e7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241e7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1241e7c1 mov ebp, esp */
  EBP = (ESP);
  /* 1241e7c3 push ecx */
  push32((uint32_t)(ECX));
L_1241e7c4:;
  /* 1241e7c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241e7c7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241e7ca sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241e7cd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1241e7d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241e7d2 jle 0x1241e806 */
  if ((C.zf||C.sf!=C.of)) goto L_1241e806;
  /* 1241e7d4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1241e7d7 push edx */
  push32((uint32_t)(EDX));
  /* 1241e7d8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1241e7db push eax */
  push32((uint32_t)(EAX));
  /* 1241e7dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241e7df movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1241e7e2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1241e7e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241e7e8 push eax */
  push32((uint32_t)(EAX));
  /* 1241e7e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241e7ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241e7ef mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1241e7f2 call 0x1241e700 */
  push32(0x1241e7f7u); f_1241e700();
  /* 1241e7f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241e7fa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1241e7fd cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241e800 jne 0x1241e804 */
  if (!C.zf) goto L_1241e804;
  /* 1241e802 jmp 0x1241e806 */
  goto L_1241e806;
L_1241e804:;
  /* 1241e804 jmp 0x1241e7c4 */
  goto L_1241e7c4;
L_1241e806:;
  /* 1241e806 mov esp, ebp */
  ESP = (EBP);
  /* 1241e808 pop ebp */
  EBP = (pop32());
  /* 1241e809 ret  */
  ESPCHK(0x1241e7c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e810 @ 0x1241e810 (26 bytes, 12 insns) */
void f_1241e810(void) {
  FTRACE(0x1241e810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241e810 push ebp */
  push32((uint32_t)(EBP));
  /* 1241e811 mov ebp, esp */
  EBP = (ESP);
  /* 1241e813 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241e816 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1241e818 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241e81b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241e81e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1241e820 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241e823 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1241e825 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1241e828 pop ebp */
  EBP = (pop32());
  /* 1241e829 ret  */
  ESPCHK(0x1241e810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e830 @ 0x1241e830 (31 bytes, 14 insns) */
void f_1241e830(void) {
  FTRACE(0x1241e830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241e830 push ebp */
  push32((uint32_t)(EBP));
  /* 1241e831 mov ebp, esp */
  EBP = (ESP);
  /* 1241e833 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241e836 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1241e838 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241e83b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241e83e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1241e840 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241e843 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1241e845 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241e848 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1241e84a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1241e84d pop ebp */
  EBP = (pop32());
  /* 1241e84e ret  */
  ESPCHK(0x1241e830u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e850 @ 0x1241e850 (27 bytes, 12 insns) */
void f_1241e850(void) {
  FTRACE(0x1241e850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241e850 push ebp */
  push32((uint32_t)(EBP));
  /* 1241e851 mov ebp, esp */
  EBP = (ESP);
  /* 1241e853 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241e856 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1241e858 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241e85b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241e85e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1241e860 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241e863 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1241e865 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1241e869 pop ebp */
  EBP = (pop32());
  /* 1241e86a ret  */
  ESPCHK(0x1241e850u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1241e870 (145 bytes, 42 insns) */
void f_1241e870(void) {
  FTRACE(0x1241e870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241e870 push ebp */
  push32((uint32_t)(EBP));
  /* 1241e871 mov ebp, esp */
  EBP = (ESP);
  /* 1241e873 push ecx */
  push32((uint32_t)(ECX));
  /* 1241e874 call 0x1241e920 */
  push32(0x1241e879u); f_1241e920();
  /* 1241e879 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241e87c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1241e87e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1241e885 jmp 0x1241e890 */
  goto L_1241e890;
L_1241e887:;
  /* 1241e887 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241e88a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241e88d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1241e890:;
  /* 1241e890 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241e894 jae 0x1241e8ba */
  if (!C.cf) goto L_1241e8ba;
  /* 1241e896 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241e899 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241e89c cmp ecx, dword ptr [eax*8 + 0x12440fb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12440fb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241e8a3 jne 0x1241e8b8 */
  if (!C.zf) goto L_1241e8b8;
  /* 1241e8a5 call 0x1241e910 */
  push32(0x1241e8aau); f_1241e910();
  /* 1241e8aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241e8ad mov ecx, dword ptr [edx*8 + 0x12440fbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x12440fbc)));
  /* 1241e8b4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1241e8b6 jmp 0x1241e8fd */
  goto L_1241e8fd;
L_1241e8b8:;
  /* 1241e8b8 jmp 0x1241e887 */
  goto L_1241e887;
L_1241e8ba:;
  /* 1241e8ba cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241e8be jb 0x1241e8d3 */
  if (C.cf) goto L_1241e8d3;
  /* 1241e8c0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241e8c4 ja 0x1241e8d3 */
  if ((!C.cf&&!C.zf)) goto L_1241e8d3;
  /* 1241e8c6 call 0x1241e910 */
  push32(0x1241e8cbu); f_1241e910();
  /* 1241e8cb mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1241e8d1 jmp 0x1241e8fd */
  goto L_1241e8fd;
L_1241e8d3:;
  /* 1241e8d3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241e8da jb 0x1241e8f2 */
  if (C.cf) goto L_1241e8f2;
  /* 1241e8dc cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241e8e3 ja 0x1241e8f2 */
  if ((!C.cf&&!C.zf)) goto L_1241e8f2;
  /* 1241e8e5 call 0x1241e910 */
  push32(0x1241e8eau); f_1241e910();
  /* 1241e8ea mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1241e8f0 jmp 0x1241e8fd */
  goto L_1241e8fd;
L_1241e8f2:;
  /* 1241e8f2 call 0x1241e910 */
  push32(0x1241e8f7u); f_1241e910();
  /* 1241e8f7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1241e8fd:;
  /* 1241e8fd mov esp, ebp */
  ESP = (EBP);
  /* 1241e8ff pop ebp */
  EBP = (pop32());
  /* 1241e900 ret  */
  ESPCHK(0x1241e870u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e910 @ 0x1241e910 (13 bytes, 6 insns) */
void f_1241e910(void) {
  FTRACE(0x1241e910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241e910 push ebp */
  push32((uint32_t)(EBP));
  /* 1241e911 mov ebp, esp */
  EBP = (ESP);
  /* 1241e913 call 0x12416480 */
  push32(0x1241e918u); f_12416480();
  /* 1241e918 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241e91b pop ebp */
  EBP = (pop32());
  /* 1241e91c ret  */
  ESPCHK(0x1241e910u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e920 @ 0x1241e920 (13 bytes, 6 insns) */
void f_1241e920(void) {
  FTRACE(0x1241e920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241e920 push ebp */
  push32((uint32_t)(EBP));
  /* 1241e921 mov ebp, esp */
  EBP = (ESP);
  /* 1241e923 call 0x12416480 */
  push32(0x1241e928u); f_12416480();
  /* 1241e928 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241e92b pop ebp */
  EBP = (pop32());
  /* 1241e92c ret  */
  ESPCHK(0x1241e920u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e930 @ 0x1241e930 (664 bytes, 264 insns) [15 switch table(s)] */
void f_1241e930(void) {
  FTRACE(0x1241e930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241e930 push ebp */
  push32((uint32_t)(EBP));
  /* 1241e931 mov ebp, esp */
  EBP = (ESP);
  /* 1241e933 push edi */
  push32((uint32_t)(EDI));
  /* 1241e934 push esi */
  push32((uint32_t)(ESI));
  /* 1241e935 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1241e938 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1241e93b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1241e93e mov eax, ecx */
  EAX = (ECX);
  /* 1241e940 mov edx, ecx */
  EDX = (ECX);
  /* 1241e942 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241e944 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241e946 jbe 0x1241e950 */
  if ((C.cf||C.zf)) goto L_1241e950;
  /* 1241e948 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241e94a jb 0x1241eac8 */
  if (C.cf) goto L_1241eac8;
L_1241e950:;
  /* 1241e950 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1241e956 jne 0x1241e96c */
  if (!C.zf) goto L_1241e96c;
  /* 1241e958 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1241e95b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1241e95e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241e961 jb 0x1241e98c */
  if (C.cf) goto L_1241e98c;
  /* 1241e963 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1241e965 jmp dword ptr [edx*4 + 0x1241ea78] */
  switch (EDX) {
    case 0: goto L_1241ea88;
    case 1: goto L_1241ea90;
    case 2: goto L_1241ea9c;
    case 3: goto L_1241eab0;
    default: x86_unimpl("switch@0x1241e965 out of table"); return;
  }
L_1241e96c:;
  /* 1241e96c mov eax, edi */
  EAX = (EDI);
  /* 1241e96e mov edx, 3 */
  EDX = (0x3u);
  /* 1241e973 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241e976 jb 0x1241e984 */
  if (C.cf) goto L_1241e984;
  /* 1241e978 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1241e97b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241e97d jmp dword ptr [eax*4 + 0x1241e990] */
  switch (EAX) {
    case 1: goto L_1241e9a0;
    case 2: goto L_1241e9cc;
    case 3: goto L_1241e9f0;
    default: x86_unimpl("switch@0x1241e97d out of table"); return;
  }
L_1241e984:;
  /* 1241e984 jmp dword ptr [ecx*4 + 0x1241ea88] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1241ea88)))); return;
  /* 1241e98b nop  */
  /* nop */
L_1241e98c:;
  /* 1241e98c jmp dword ptr [ecx*4 + 0x1241ea0c] */
  switch (ECX) {
    case 0: goto L_1241ea6f;
    case 1: goto L_1241ea5c;
    case 2: goto L_1241ea54;
    case 3: goto L_1241ea4c;
    case 4: goto L_1241ea44;
    case 5: goto L_1241ea3c;
    case 6: goto L_1241ea34;
    case 7: goto L_1241ea2c;
    default: x86_unimpl("switch@0x1241e98c out of table"); return;
  }
  /* 1241e993 nop  */
  /* nop */
L_1241e9a0:;
  /* 1241e9a0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1241e9a2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1241e9a4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1241e9a6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1241e9a9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1241e9ac mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1241e9af shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1241e9b2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1241e9b5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1241e9b8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1241e9bb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241e9be jb 0x1241e98c */
  if (C.cf) goto L_1241e98c;
  /* 1241e9c0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1241e9c2 jmp dword ptr [edx*4 + 0x1241ea78] */
  switch (EDX) {
    case 0: goto L_1241ea88;
    case 1: goto L_1241ea90;
    case 2: goto L_1241ea9c;
    case 3: goto L_1241eab0;
    default: x86_unimpl("switch@0x1241e9c2 out of table"); return;
  }
  /* 1241e9c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1241e9cc:;
  /* 1241e9cc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1241e9ce mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1241e9d0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1241e9d2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1241e9d5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1241e9d8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1241e9db add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1241e9de add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1241e9e1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241e9e4 jb 0x1241e98c */
  if (C.cf) goto L_1241e98c;
  /* 1241e9e6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1241e9e8 jmp dword ptr [edx*4 + 0x1241ea78] */
  switch (EDX) {
    case 0: goto L_1241ea88;
    case 1: goto L_1241ea90;
    case 2: goto L_1241ea9c;
    case 3: goto L_1241eab0;
    default: x86_unimpl("switch@0x1241e9e8 out of table"); return;
  }
  /* 1241e9ef nop  */
  /* nop */
L_1241e9f0:;
  /* 1241e9f0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1241e9f2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1241e9f4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1241e9f6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1241e9f7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1241e9fa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1241e9fb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241e9fe jb 0x1241e98c */
  if (C.cf) goto L_1241e98c;
  /* 1241ea00 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1241ea02 jmp dword ptr [edx*4 + 0x1241ea78] */
  switch (EDX) {
    case 0: goto L_1241ea88;
    case 1: goto L_1241ea90;
    case 2: goto L_1241ea9c;
    case 3: goto L_1241eab0;
    default: x86_unimpl("switch@0x1241ea02 out of table"); return;
  }
  /* 1241ea09 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1241ea2c:;
  /* 1241ea2c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1241ea30 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1241ea34:;
  /* 1241ea34 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1241ea38 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1241ea3c:;
  /* 1241ea3c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1241ea40 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1241ea44:;
  /* 1241ea44 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1241ea48 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1241ea4c:;
  /* 1241ea4c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1241ea50 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1241ea54:;
  /* 1241ea54 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1241ea58 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1241ea5c:;
  /* 1241ea5c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1241ea60 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1241ea64 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1241ea6b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1241ea6d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1241ea6f:;
  /* 1241ea6f jmp dword ptr [edx*4 + 0x1241ea78] */
  switch (EDX) {
    case 0: goto L_1241ea88;
    case 1: goto L_1241ea90;
    case 2: goto L_1241ea9c;
    case 3: goto L_1241eab0;
    default: x86_unimpl("switch@0x1241ea6f out of table"); return;
  }
  /* 1241ea76 mov edi, edi */
  EDI = (EDI);
L_1241ea88:;
  /* 1241ea88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241ea8b pop esi */
  ESI = (pop32());
  /* 1241ea8c pop edi */
  EDI = (pop32());
  /* 1241ea8d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1241ea8e ret  */
  ESPCHK(0x1241e930u, _esp0);
  ESP += 4; return;
  /* 1241ea8f nop  */
  /* nop */
L_1241ea90:;
  /* 1241ea90 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1241ea92 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1241ea94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241ea97 pop esi */
  ESI = (pop32());
  /* 1241ea98 pop edi */
  EDI = (pop32());
  /* 1241ea99 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1241ea9a ret  */
  ESPCHK(0x1241e930u, _esp0);
  ESP += 4; return;
  /* 1241ea9b nop  */
  /* nop */
L_1241ea9c:;
  /* 1241ea9c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1241ea9e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1241eaa0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1241eaa3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1241eaa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241eaa9 pop esi */
  ESI = (pop32());
  /* 1241eaaa pop edi */
  EDI = (pop32());
  /* 1241eaab leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1241eaac ret  */
  ESPCHK(0x1241e930u, _esp0);
  ESP += 4; return;
  /* 1241eaad lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1241eab0:;
  /* 1241eab0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1241eab2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1241eab4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1241eab7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1241eaba mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1241eabd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1241eac0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241eac3 pop esi */
  ESI = (pop32());
  /* 1241eac4 pop edi */
  EDI = (pop32());
  /* 1241eac5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1241eac6 ret  */
  ESPCHK(0x1241e930u, _esp0);
  ESP += 4; return;
  /* 1241eac7 nop  */
  /* nop */
L_1241eac8:;
  /* 1241eac8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1241eacc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1241ead0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1241ead6 jne 0x1241eafc */
  if (!C.zf) goto L_1241eafc;
  /* 1241ead8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1241eadb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1241eade cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241eae1 jb 0x1241eaf0 */
  if (C.cf) goto L_1241eaf0;
  /* 1241eae3 std  */
  C.df=1;
  /* 1241eae4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1241eae6 cld  */
  C.df=0;
  /* 1241eae7 jmp dword ptr [edx*4 + 0x1241ec10] */
  switch (EDX) {
    case 0: goto L_1241ec20;
    case 1: goto L_1241ec28;
    case 2: goto L_1241ec38;
    case 3: goto L_1241ec4c;
    default: x86_unimpl("switch@0x1241eae7 out of table"); return;
  }
  /* 1241eaee mov edi, edi */
  EDI = (EDI);
L_1241eaf0:;
  /* 1241eaf0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1241eaf2 jmp dword ptr [ecx*4 + 0x1241ebc0] */
  switch (ECX) {
    case 0: goto L_1241ec07;
    default: x86_unimpl("switch@0x1241eaf2 out of table"); return;
  }
  /* 1241eaf9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1241eafc:;
  /* 1241eafc mov eax, edi */
  EAX = (EDI);
  /* 1241eafe mov edx, 3 */
  EDX = (0x3u);
  /* 1241eb03 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241eb06 jb 0x1241eb14 */
  if (C.cf) goto L_1241eb14;
  /* 1241eb08 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1241eb0b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241eb0d jmp dword ptr [eax*4 + 0x1241eb18] */
  switch (EAX) {
    case 1: goto L_1241eb28;
    case 2: goto L_1241eb48;
    case 3: goto L_1241eb70;
    default: x86_unimpl("switch@0x1241eb0d out of table"); return;
  }
L_1241eb14:;
  /* 1241eb14 jmp dword ptr [ecx*4 + 0x1241ec10] */
  switch (ECX) {
    case 0: goto L_1241ec20;
    case 1: goto L_1241ec28;
    case 2: goto L_1241ec38;
    case 3: goto L_1241ec4c;
    default: x86_unimpl("switch@0x1241eb14 out of table"); return;
  }
  /* 1241eb1b nop  */
  /* nop */
L_1241eb28:;
  /* 1241eb28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1241eb2b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1241eb2d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1241eb30 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1241eb31 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1241eb34 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1241eb35 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241eb38 jb 0x1241eaf0 */
  if (C.cf) goto L_1241eaf0;
  /* 1241eb3a std  */
  C.df=1;
  /* 1241eb3b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1241eb3d cld  */
  C.df=0;
  /* 1241eb3e jmp dword ptr [edx*4 + 0x1241ec10] */
  switch (EDX) {
    case 0: goto L_1241ec20;
    case 1: goto L_1241ec28;
    case 2: goto L_1241ec38;
    case 3: goto L_1241ec4c;
    default: x86_unimpl("switch@0x1241eb3e out of table"); return;
  }
  /* 1241eb45 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1241eb48:;
  /* 1241eb48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1241eb4b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1241eb4d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1241eb50 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1241eb53 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1241eb56 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1241eb59 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241eb5c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241eb5f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241eb62 jb 0x1241eaf0 */
  if (C.cf) goto L_1241eaf0;
  /* 1241eb64 std  */
  C.df=1;
  /* 1241eb65 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1241eb67 cld  */
  C.df=0;
  /* 1241eb68 jmp dword ptr [edx*4 + 0x1241ec10] */
  switch (EDX) {
    case 0: goto L_1241ec20;
    case 1: goto L_1241ec28;
    case 2: goto L_1241ec38;
    case 3: goto L_1241ec4c;
    default: x86_unimpl("switch@0x1241eb68 out of table"); return;
  }
  /* 1241eb6f nop  */
  /* nop */
L_1241eb70:;
  /* 1241eb70 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1241eb73 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1241eb75 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1241eb78 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1241eb7b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1241eb7e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1241eb81 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1241eb84 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1241eb87 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241eb8a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241eb8d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241eb90 jb 0x1241eaf0 */
  if (C.cf) goto L_1241eaf0;
  /* 1241eb96 std  */
  C.df=1;
  /* 1241eb97 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1241eb99 cld  */
  C.df=0;
  /* 1241eb9a jmp dword ptr [edx*4 + 0x1241ec10] */
  switch (EDX) {
    case 0: goto L_1241ec20;
    case 1: goto L_1241ec28;
    case 2: goto L_1241ec38;
    case 3: goto L_1241ec4c;
    default: x86_unimpl("switch@0x1241eb9a out of table"); return;
  }
  /* 1241eba1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1241eba5 jmp 0x1241ebe8 */
  goto L_1241ebe8;
  /* 1241eba7 adc cl, ah */
  { uint32_t _a=(CL),_b=(AH),_r=_a+_b+C.cf; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1241eba9 jmp 0x1241ebec */
  goto L_1241ebec;
  /* 1241ebab adc dl, ah */
  { uint32_t _a=(DL),_b=(AH),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1241ebad jmp 0x1241ebf0 */
  goto L_1241ebf0;
  /* 1241ebaf adc bl, ah */
  { uint32_t _a=(BL),_b=(AH),_r=_a+_b+C.cf; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 1241ebb1 jmp 0x1241ebf4 */
  goto L_1241ebf4;
  /* 1241ebb3 adc ah, ah */
  { uint32_t _a=(AH),_b=(AH),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 1241ebb5 jmp 0x1241ebf8 */
  goto L_1241ebf8;
  /* 1241ebb7 adc ch, ah */
  { uint32_t _a=(C.c.b.h),_b=(AH),_r=_a+_b+C.cf; C.c.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1241ebb9 jmp 0x1241ebfc */
  goto L_1241ebfc;
  /* 1241ebbb adc dh, ah */
  { uint32_t _a=(C.d.b.h),_b=(AH),_r=_a+_b+C.cf; C.d.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1241ebbd jmp 0x1241ec00 */
  goto L_1241ec00;
  /* 1241ebc4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1241ebc8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1241ebcc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1241ebd0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1241ebd4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1241ebd8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1241ebdc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1241ebe0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1241ebe4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
L_1241ebe8:;
  /* 1241ebe8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
L_1241ebec:;
  /* 1241ebec mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
L_1241ebf0:;
  /* 1241ebf0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
L_1241ebf4:;
  /* 1241ebf4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
L_1241ebf8:;
  /* 1241ebf8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
L_1241ebfc:;
  /* 1241ebfc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1241ec03 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1241ec05 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1241ec07:;
  /* 1241ec07 jmp dword ptr [edx*4 + 0x1241ec10] */
  switch (EDX) {
    case 0: goto L_1241ec20;
    case 1: goto L_1241ec28;
    case 2: goto L_1241ec38;
    case 3: goto L_1241ec4c;
    default: x86_unimpl("switch@0x1241ec07 out of table"); return;
  }
  /* 1241ec0e mov edi, edi */
  EDI = (EDI);
L_1241ec20:;
  /* 1241ec20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241ec23 pop esi */
  ESI = (pop32());
  /* 1241ec24 pop edi */
  EDI = (pop32());
  /* 1241ec25 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1241ec26 ret  */
  ESPCHK(0x1241e930u, _esp0);
  ESP += 4; return;
  /* 1241ec27 nop  */
  /* nop */
L_1241ec28:;
  /* 1241ec28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1241ec2b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1241ec2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241ec31 pop esi */
  ESI = (pop32());
  /* 1241ec32 pop edi */
  EDI = (pop32());
  /* 1241ec33 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1241ec34 ret  */
  ESPCHK(0x1241e930u, _esp0);
  ESP += 4; return;
  /* 1241ec35 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1241ec38:;
  /* 1241ec38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1241ec3b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1241ec3e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1241ec41 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1241ec44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241ec47 pop esi */
  ESI = (pop32());
  /* 1241ec48 pop edi */
  EDI = (pop32());
  /* 1241ec49 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1241ec4a ret  */
  ESPCHK(0x1241e930u, _esp0);
  ESP += 4; return;
  /* 1241ec4b nop  */
  /* nop */
L_1241ec4c:;
  /* 1241ec4c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1241ec4f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1241ec52 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1241ec55 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1241ec58 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1241ec5b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1241ec5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241ec61 pop esi */
  ESI = (pop32());
  /* 1241ec62 pop edi */
  EDI = (pop32());
  /* 1241ec63 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1241ec64 ret  */
  ESPCHK(0x1241e930u, _esp0);
  ESP += 4; return;
L_1241ec00: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1241ec00 (unresolved jump table)"); return;
}

/* FUN_1000ec70 @ 0x1241ec70 (421 bytes, 148 insns) */
void f_1241ec70(void) {
  FTRACE(0x1241ec70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241ec70 push ebp */
  push32((uint32_t)(EBP));
  /* 1241ec71 mov ebp, esp */
  EBP = (ESP);
  /* 1241ec73 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1241ec75 push 0x1243e5e0 */
  push32((uint32_t)(0x1243e5e0u));
  /* 1241ec7a push 0x1241fb48 */
  push32((uint32_t)(0x1241fb48u));
  /* 1241ec7f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1241ec85 push eax */
  push32((uint32_t)(EAX));
  /* 1241ec86 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1241ec8d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241ec90 push ebx */
  push32((uint32_t)(EBX));
  /* 1241ec91 push esi */
  push32((uint32_t)(ESI));
  /* 1241ec92 push edi */
  push32((uint32_t)(EDI));
  /* 1241ec93 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1241ec96 cmp dword ptr [0x12442a1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442a1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241ec9d jne 0x1241ecee */
  if (!C.zf) goto L_1241ecee;
  /* 1241ec9f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1241eca2 push eax */
  push32((uint32_t)(EAX));
  /* 1241eca3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1241eca5 push 0x1243e5d8 */
  push32((uint32_t)(0x1243e5d8u));
  /* 1241ecaa push 1 */
  push32((uint32_t)(0x1u));
  /* 1241ecac call dword ptr [0x12445300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445300))), 0x1241ecb2u);
  /* 1241ecb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241ecb4 je 0x1241ecc2 */
  if (C.zf) goto L_1241ecc2;
  /* 1241ecb6 mov dword ptr [0x12442a1c], 1 */
  w32((uint32_t)(0x12442a1c), (0x1u));
  /* 1241ecc0 jmp 0x1241ecee */
  goto L_1241ecee;
L_1241ecc2:;
  /* 1241ecc2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1241ecc5 push ecx */
  push32((uint32_t)(ECX));
  /* 1241ecc6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1241ecc8 push 0x1243e5d4 */
  push32((uint32_t)(0x1243e5d4u));
  /* 1241eccd push 1 */
  push32((uint32_t)(0x1u));
  /* 1241eccf push 0 */
  push32((uint32_t)(0x0u));
  /* 1241ecd1 call dword ptr [0x12445304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445304))), 0x1241ecd7u);
  /* 1241ecd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241ecd9 je 0x1241ece7 */
  if (C.zf) goto L_1241ece7;
  /* 1241ecdb mov dword ptr [0x12442a1c], 2 */
  w32((uint32_t)(0x12442a1c), (0x2u));
  /* 1241ece5 jmp 0x1241ecee */
  goto L_1241ecee;
L_1241ece7:;
  /* 1241ece7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241ece9 jmp 0x1241ee18 */
  goto L_1241ee18;
L_1241ecee:;
  /* 1241ecee cmp dword ptr [0x12442a1c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12442a1c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241ecf5 jne 0x1241ed25 */
  if (!C.zf) goto L_1241ed25;
  /* 1241ecf7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241ecfb jne 0x1241ed06 */
  if (!C.zf) goto L_1241ed06;
  /* 1241ecfd mov edx, dword ptr [0x12442a28] */
  EDX = (r32((uint32_t)(0x12442a28)));
  /* 1241ed03 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1241ed06:;
  /* 1241ed06 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1241ed09 push eax */
  push32((uint32_t)(EAX));
  /* 1241ed0a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1241ed0d push ecx */
  push32((uint32_t)(ECX));
  /* 1241ed0e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241ed11 push edx */
  push32((uint32_t)(EDX));
  /* 1241ed12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241ed15 push eax */
  push32((uint32_t)(EAX));
  /* 1241ed16 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1241ed19 push ecx */
  push32((uint32_t)(ECX));
  /* 1241ed1a call dword ptr [0x12445304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445304))), 0x1241ed20u);
  /* 1241ed20 jmp 0x1241ee18 */
  goto L_1241ee18;
L_1241ed25:;
  /* 1241ed25 cmp dword ptr [0x12442a1c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12442a1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241ed2c jne 0x1241ee16 */
  if (!C.zf) goto L_1241ee16;
  /* 1241ed32 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241ed36 jne 0x1241ed41 */
  if (!C.zf) goto L_1241ed41;
  /* 1241ed38 mov edx, dword ptr [0x12442a38] */
  EDX = (r32((uint32_t)(0x12442a38)));
  /* 1241ed3e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1241ed41:;
  /* 1241ed41 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241ed43 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241ed45 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1241ed48 push eax */
  push32((uint32_t)(EAX));
  /* 1241ed49 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241ed4c push ecx */
  push32((uint32_t)(ECX));
  /* 1241ed4d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1241ed50 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1241ed52 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241ed54 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1241ed57 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241ed5a push edx */
  push32((uint32_t)(EDX));
  /* 1241ed5b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1241ed5e push eax */
  push32((uint32_t)(EAX));
  /* 1241ed5f call dword ptr [0x12445308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445308))), 0x1241ed65u);
  /* 1241ed65 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1241ed68 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241ed6c jne 0x1241ed75 */
  if (!C.zf) goto L_1241ed75;
  /* 1241ed6e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241ed70 jmp 0x1241ee18 */
  goto L_1241ee18;
L_1241ed75:;
  /* 1241ed75 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1241ed7c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241ed7f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1241ed81 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241ed84 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1241ed86 call 0x12419be0 */
  push32(0x1241ed8bu); f_12419be0();
  /* 1241ed8b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1241ed8e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1241ed91 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1241ed94 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1241ed97 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241ed9a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1241ed9c push edx */
  push32((uint32_t)(EDX));
  /* 1241ed9d push 0 */
  push32((uint32_t)(0x0u));
  /* 1241ed9f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241eda2 push eax */
  push32((uint32_t)(EAX));
  /* 1241eda3 call 0x1241a7b0 */
  push32(0x1241eda8u); f_1241a7b0();
  /* 1241eda8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241edab mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1241edb2 jmp 0x1241edcb */
  goto L_1241edcb;
  /* 1241edb4 mov eax, 1 */
  EAX = (0x1u);
  /* 1241edb9 ret  */
  ESPCHK(0x1241ec70u, _esp0);
  ESP += 4; return;
  /* 1241edba mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1241edbd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1241edc4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1241edcb:;
  /* 1241edcb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241edcf jne 0x1241edd5 */
  if (!C.zf) goto L_1241edd5;
  /* 1241edd1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241edd3 jmp 0x1241ee18 */
  goto L_1241ee18;
L_1241edd5:;
  /* 1241edd5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241edd8 push ecx */
  push32((uint32_t)(ECX));
  /* 1241edd9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241eddc push edx */
  push32((uint32_t)(EDX));
  /* 1241eddd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1241ede0 push eax */
  push32((uint32_t)(EAX));
  /* 1241ede1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241ede4 push ecx */
  push32((uint32_t)(ECX));
  /* 1241ede5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1241ede7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1241edea push edx */
  push32((uint32_t)(EDX));
  /* 1241edeb call dword ptr [0x12445308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445308))), 0x1241edf1u);
  /* 1241edf1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1241edf4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241edf8 jne 0x1241edfe */
  if (!C.zf) goto L_1241edfe;
  /* 1241edfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241edfc jmp 0x1241ee18 */
  goto L_1241ee18;
L_1241edfe:;
  /* 1241edfe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1241ee01 push eax */
  push32((uint32_t)(EAX));
  /* 1241ee02 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1241ee05 push ecx */
  push32((uint32_t)(ECX));
  /* 1241ee06 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241ee09 push edx */
  push32((uint32_t)(EDX));
  /* 1241ee0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241ee0d push eax */
  push32((uint32_t)(EAX));
  /* 1241ee0e call dword ptr [0x12445300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445300))), 0x1241ee14u);
  /* 1241ee14 jmp 0x1241ee18 */
  goto L_1241ee18;
L_1241ee16:;
  /* 1241ee16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1241ee18:;
  /* 1241ee18 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1241ee1b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241ee1e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1241ee25 pop edi */
  EDI = (pop32());
  /* 1241ee26 pop esi */
  ESI = (pop32());
  /* 1241ee27 pop ebx */
  EBX = (pop32());
  /* 1241ee28 mov esp, ebp */
  ESP = (EBP);
  /* 1241ee2a pop ebp */
  EBP = (pop32());
  /* 1241ee2b ret  */
  ESPCHK(0x1241ec70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee30 @ 0x1241ee30 (727 bytes, 263 insns) */
void f_1241ee30(void) {
  FTRACE(0x1241ee30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241ee30 push ebp */
  push32((uint32_t)(EBP));
  /* 1241ee31 mov ebp, esp */
  EBP = (ESP);
  /* 1241ee33 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1241ee35 push 0x1243e5f0 */
  push32((uint32_t)(0x1243e5f0u));
  /* 1241ee3a push 0x1241fb48 */
  push32((uint32_t)(0x1241fb48u));
  /* 1241ee3f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1241ee45 push eax */
  push32((uint32_t)(EAX));
  /* 1241ee46 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1241ee4d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241ee50 push ebx */
  push32((uint32_t)(EBX));
  /* 1241ee51 push esi */
  push32((uint32_t)(ESI));
  /* 1241ee52 push edi */
  push32((uint32_t)(EDI));
  /* 1241ee53 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1241ee56 cmp dword ptr [0x12442a40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442a40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241ee5d jne 0x1241eeb6 */
  if (!C.zf) goto L_1241eeb6;
  /* 1241ee5f push 0 */
  push32((uint32_t)(0x0u));
  /* 1241ee61 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241ee63 push 1 */
  push32((uint32_t)(0x1u));
  /* 1241ee65 push 0x1243e5d8 */
  push32((uint32_t)(0x1243e5d8u));
  /* 1241ee6a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1241ee6f push 0 */
  push32((uint32_t)(0x0u));
  /* 1241ee71 call dword ptr [0x124452f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452f8))), 0x1241ee77u);
  /* 1241ee77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241ee79 je 0x1241ee87 */
  if (C.zf) goto L_1241ee87;
  /* 1241ee7b mov dword ptr [0x12442a40], 1 */
  w32((uint32_t)(0x12442a40), (0x1u));
  /* 1241ee85 jmp 0x1241eeb6 */
  goto L_1241eeb6;
L_1241ee87:;
  /* 1241ee87 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241ee89 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241ee8b push 1 */
  push32((uint32_t)(0x1u));
  /* 1241ee8d push 0x1243e5d4 */
  push32((uint32_t)(0x1243e5d4u));
  /* 1241ee92 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1241ee97 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241ee99 call dword ptr [0x124452fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452fc))), 0x1241ee9fu);
  /* 1241ee9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241eea1 je 0x1241eeaf */
  if (C.zf) goto L_1241eeaf;
  /* 1241eea3 mov dword ptr [0x12442a40], 2 */
  w32((uint32_t)(0x12442a40), (0x2u));
  /* 1241eead jmp 0x1241eeb6 */
  goto L_1241eeb6;
L_1241eeaf:;
  /* 1241eeaf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241eeb1 jmp 0x1241f121 */
  goto L_1241f121;
L_1241eeb6:;
  /* 1241eeb6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241eeba jle 0x1241eecf */
  if ((C.zf||C.sf!=C.of)) goto L_1241eecf;
  /* 1241eebc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1241eebf push eax */
  push32((uint32_t)(EAX));
  /* 1241eec0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1241eec3 push ecx */
  push32((uint32_t)(ECX));
  /* 1241eec4 call 0x1241f140 */
  push32(0x1241eec9u); f_1241f140();
  /* 1241eec9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241eecc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1241eecf:;
  /* 1241eecf cmp dword ptr [0x12442a40], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12442a40))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241eed6 jne 0x1241eefb */
  if (!C.zf) goto L_1241eefb;
  /* 1241eed8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1241eedb push edx */
  push32((uint32_t)(EDX));
  /* 1241eedc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1241eedf push eax */
  push32((uint32_t)(EAX));
  /* 1241eee0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1241eee3 push ecx */
  push32((uint32_t)(ECX));
  /* 1241eee4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1241eee7 push edx */
  push32((uint32_t)(EDX));
  /* 1241eee8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241eeeb push eax */
  push32((uint32_t)(EAX));
  /* 1241eeec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241eeef push ecx */
  push32((uint32_t)(ECX));
  /* 1241eef0 call dword ptr [0x124452fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452fc))), 0x1241eef6u);
  /* 1241eef6 jmp 0x1241f121 */
  goto L_1241f121;
L_1241eefb:;
  /* 1241eefb cmp dword ptr [0x12442a40], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12442a40))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241ef02 jne 0x1241f11f */
  if (!C.zf) goto L_1241f11f;
  /* 1241ef08 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241ef0c jne 0x1241ef17 */
  if (!C.zf) goto L_1241ef17;
  /* 1241ef0e mov edx, dword ptr [0x12442a38] */
  EDX = (r32((uint32_t)(0x12442a38)));
  /* 1241ef14 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1241ef17:;
  /* 1241ef17 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241ef19 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241ef1b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1241ef1e push eax */
  push32((uint32_t)(EAX));
  /* 1241ef1f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1241ef22 push ecx */
  push32((uint32_t)(ECX));
  /* 1241ef23 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1241ef26 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1241ef28 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241ef2a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1241ef2d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241ef30 push edx */
  push32((uint32_t)(EDX));
  /* 1241ef31 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1241ef34 push eax */
  push32((uint32_t)(EAX));
  /* 1241ef35 call dword ptr [0x12445308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445308))), 0x1241ef3bu);
  /* 1241ef3b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1241ef3e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241ef42 jne 0x1241ef4b */
  if (!C.zf) goto L_1241ef4b;
  /* 1241ef44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241ef46 jmp 0x1241f121 */
  goto L_1241f121;
L_1241ef4b:;
  /* 1241ef4b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1241ef52 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1241ef55 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1241ef57 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241ef5a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1241ef5c call 0x12419be0 */
  push32(0x1241ef61u); f_12419be0();
  /* 1241ef61 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1241ef64 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1241ef67 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1241ef6a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1241ef6d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1241ef74 jmp 0x1241ef8d */
  goto L_1241ef8d;
  /* 1241ef76 mov eax, 1 */
  EAX = (0x1u);
  /* 1241ef7b ret  */
  ESPCHK(0x1241ee30u, _esp0);
  ESP += 4; return;
  /* 1241ef7c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1241ef7f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1241ef86 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1241ef8d:;
  /* 1241ef8d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241ef91 jne 0x1241ef9a */
  if (!C.zf) goto L_1241ef9a;
  /* 1241ef93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241ef95 jmp 0x1241f121 */
  goto L_1241f121;
L_1241ef9a:;
  /* 1241ef9a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1241ef9d push edx */
  push32((uint32_t)(EDX));
  /* 1241ef9e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241efa1 push eax */
  push32((uint32_t)(EAX));
  /* 1241efa2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1241efa5 push ecx */
  push32((uint32_t)(ECX));
  /* 1241efa6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1241efa9 push edx */
  push32((uint32_t)(EDX));
  /* 1241efaa push 1 */
  push32((uint32_t)(0x1u));
  /* 1241efac mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1241efaf push eax */
  push32((uint32_t)(EAX));
  /* 1241efb0 call dword ptr [0x12445308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445308))), 0x1241efb6u);
  /* 1241efb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241efb8 jne 0x1241efc1 */
  if (!C.zf) goto L_1241efc1;
  /* 1241efba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241efbc jmp 0x1241f121 */
  goto L_1241f121;
L_1241efc1:;
  /* 1241efc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241efc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241efc5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1241efc8 push ecx */
  push32((uint32_t)(ECX));
  /* 1241efc9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241efcc push edx */
  push32((uint32_t)(EDX));
  /* 1241efcd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241efd0 push eax */
  push32((uint32_t)(EAX));
  /* 1241efd1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241efd4 push ecx */
  push32((uint32_t)(ECX));
  /* 1241efd5 call dword ptr [0x124452f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452f8))), 0x1241efdbu);
  /* 1241efdb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1241efde cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241efe2 jne 0x1241efeb */
  if (!C.zf) goto L_1241efeb;
  /* 1241efe4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241efe6 jmp 0x1241f121 */
  goto L_1241f121;
L_1241efeb:;
  /* 1241efeb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241efee and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1241eff4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241eff6 je 0x1241f03b */
  if (C.zf) goto L_1241f03b;
  /* 1241eff8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241effc je 0x1241f036 */
  if (C.zf) goto L_1241f036;
  /* 1241effe mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1241f001 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241f004 jle 0x1241f00d */
  if ((C.zf||C.sf!=C.of)) goto L_1241f00d;
  /* 1241f006 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241f008 jmp 0x1241f121 */
  goto L_1241f121;
L_1241f00d:;
  /* 1241f00d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1241f010 push ecx */
  push32((uint32_t)(ECX));
  /* 1241f011 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1241f014 push edx */
  push32((uint32_t)(EDX));
  /* 1241f015 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1241f018 push eax */
  push32((uint32_t)(EAX));
  /* 1241f019 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241f01c push ecx */
  push32((uint32_t)(ECX));
  /* 1241f01d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241f020 push edx */
  push32((uint32_t)(EDX));
  /* 1241f021 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241f024 push eax */
  push32((uint32_t)(EAX));
  /* 1241f025 call dword ptr [0x124452f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452f8))), 0x1241f02bu);
  /* 1241f02b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241f02d jne 0x1241f036 */
  if (!C.zf) goto L_1241f036;
  /* 1241f02f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241f031 jmp 0x1241f121 */
  goto L_1241f121;
L_1241f036:;
  /* 1241f036 jmp 0x1241f11a */
  goto L_1241f11a;
L_1241f03b:;
  /* 1241f03b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1241f03e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1241f041 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1241f048 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1241f04b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1241f04d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241f050 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1241f052 call 0x12419be0 */
  push32(0x1241f057u); f_12419be0();
  /* 1241f057 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1241f05a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1241f05d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1241f060 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1241f063 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1241f06a jmp 0x1241f083 */
  goto L_1241f083;
  /* 1241f06c mov eax, 1 */
  EAX = (0x1u);
  /* 1241f071 ret  */
  ESPCHK(0x1241ee30u, _esp0);
  ESP += 4; return;
  /* 1241f072 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1241f075 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1241f07c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1241f083:;
  /* 1241f083 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241f087 jne 0x1241f090 */
  if (!C.zf) goto L_1241f090;
  /* 1241f089 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241f08b jmp 0x1241f121 */
  goto L_1241f121;
L_1241f090:;
  /* 1241f090 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1241f093 push eax */
  push32((uint32_t)(EAX));
  /* 1241f094 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241f097 push ecx */
  push32((uint32_t)(ECX));
  /* 1241f098 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1241f09b push edx */
  push32((uint32_t)(EDX));
  /* 1241f09c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241f09f push eax */
  push32((uint32_t)(EAX));
  /* 1241f0a0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241f0a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1241f0a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241f0a7 push edx */
  push32((uint32_t)(EDX));
  /* 1241f0a8 call dword ptr [0x124452f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452f8))), 0x1241f0aeu);
  /* 1241f0ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241f0b0 jne 0x1241f0b6 */
  if (!C.zf) goto L_1241f0b6;
  /* 1241f0b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241f0b4 jmp 0x1241f121 */
  goto L_1241f121;
L_1241f0b6:;
  /* 1241f0b6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241f0ba jne 0x1241f0ea */
  if (!C.zf) goto L_1241f0ea;
  /* 1241f0bc push 0 */
  push32((uint32_t)(0x0u));
  /* 1241f0be push 0 */
  push32((uint32_t)(0x0u));
  /* 1241f0c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241f0c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241f0c4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1241f0c7 push eax */
  push32((uint32_t)(EAX));
  /* 1241f0c8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241f0cb push ecx */
  push32((uint32_t)(ECX));
  /* 1241f0cc push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1241f0d1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1241f0d4 push edx */
  push32((uint32_t)(EDX));
  /* 1241f0d5 call dword ptr [0x124453c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124453c4))), 0x1241f0dbu);
  /* 1241f0db mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1241f0de cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241f0e2 jne 0x1241f0e8 */
  if (!C.zf) goto L_1241f0e8;
  /* 1241f0e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241f0e6 jmp 0x1241f121 */
  goto L_1241f121;
L_1241f0e8:;
  /* 1241f0e8 jmp 0x1241f11a */
  goto L_1241f11a;
L_1241f0ea:;
  /* 1241f0ea push 0 */
  push32((uint32_t)(0x0u));
  /* 1241f0ec push 0 */
  push32((uint32_t)(0x0u));
  /* 1241f0ee mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1241f0f1 push eax */
  push32((uint32_t)(EAX));
  /* 1241f0f2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1241f0f5 push ecx */
  push32((uint32_t)(ECX));
  /* 1241f0f6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1241f0f9 push edx */
  push32((uint32_t)(EDX));
  /* 1241f0fa mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1241f0fd push eax */
  push32((uint32_t)(EAX));
  /* 1241f0fe push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1241f103 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1241f106 push ecx */
  push32((uint32_t)(ECX));
  /* 1241f107 call dword ptr [0x124453c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124453c4))), 0x1241f10du);
  /* 1241f10d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1241f110 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241f114 jne 0x1241f11a */
  if (!C.zf) goto L_1241f11a;
  /* 1241f116 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241f118 jmp 0x1241f121 */
  goto L_1241f121;
L_1241f11a:;
  /* 1241f11a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1241f11d jmp 0x1241f121 */
  goto L_1241f121;
L_1241f11f:;
  /* 1241f11f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1241f121:;
  /* 1241f121 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1241f124 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241f127 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1241f12e pop edi */
  EDI = (pop32());
  /* 1241f12f pop esi */
  ESI = (pop32());
  /* 1241f130 pop ebx */
  EBX = (pop32());
  /* 1241f131 mov esp, ebp */
  ESP = (EBP);
  /* 1241f133 pop ebp */
  EBP = (pop32());
  /* 1241f134 ret  */
  ESPCHK(0x1241ee30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f140 @ 0x1241f140 (80 bytes, 32 insns) */
void f_1241f140(void) {
  FTRACE(0x1241f140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241f140 push ebp */
  push32((uint32_t)(EBP));
  /* 1241f141 mov ebp, esp */
  EBP = (ESP);
  /* 1241f143 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241f146 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241f149 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1241f14c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241f14f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1241f152:;
  /* 1241f152 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241f155 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241f158 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241f15b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1241f15e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241f160 je 0x1241f177 */
  if (C.zf) goto L_1241f177;
  /* 1241f162 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241f165 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1241f168 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241f16a je 0x1241f177 */
  if (C.zf) goto L_1241f177;
  /* 1241f16c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241f16f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241f172 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1241f175 jmp 0x1241f152 */
  goto L_1241f152;
L_1241f177:;
  /* 1241f177 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241f17a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1241f17d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241f17f jne 0x1241f189 */
  if (!C.zf) goto L_1241f189;
  /* 1241f181 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241f184 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241f187 jmp 0x1241f18c */
  goto L_1241f18c;
L_1241f189:;
  /* 1241f189 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1241f18c:;
  /* 1241f18c mov esp, ebp */
  ESP = (EBP);
  /* 1241f18e pop ebp */
  EBP = (pop32());
  /* 1241f18f ret  */
  ESPCHK(0x1241f140u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f190 @ 0x1241f190 (130 bytes, 43 insns) */
void f_1241f190(void) {
  FTRACE(0x1241f190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241f190 push ebp */
  push32((uint32_t)(EBP));
  /* 1241f191 mov ebp, esp */
  EBP = (ESP);
  /* 1241f193 push ecx */
  push32((uint32_t)(ECX));
  /* 1241f194 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241f197 cmp eax, dword ptr [0x1244433c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1244433c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241f19d jae 0x1241f1c1 */
  if (!C.cf) goto L_1241f1c1;
  /* 1241f19f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241f1a2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1241f1a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241f1a8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1241f1ab imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241f1ae mov eax, dword ptr [ecx*4 + 0x12444200] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12444200)));
  /* 1241f1b5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1241f1ba and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1241f1bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1241f1bf jne 0x1241f1dc */
  if (!C.zf) goto L_1241f1dc;
L_1241f1c1:;
  /* 1241f1c1 call 0x1241e910 */
  push32(0x1241f1c6u); f_1241e910();
  /* 1241f1c6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1241f1cc call 0x1241e920 */
  push32(0x1241f1d1u); f_1241e920();
  /* 1241f1d1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1241f1d7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1241f1da jmp 0x1241f20e */
  goto L_1241f20e;
L_1241f1dc:;
  /* 1241f1dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241f1df push edx */
  push32((uint32_t)(EDX));
  /* 1241f1e0 call 0x12420130 */
  push32(0x1241f1e5u); f_12420130();
  /* 1241f1e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241f1e8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1241f1eb push eax */
  push32((uint32_t)(EAX));
  /* 1241f1ec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241f1ef push ecx */
  push32((uint32_t)(ECX));
  /* 1241f1f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241f1f3 push edx */
  push32((uint32_t)(EDX));
  /* 1241f1f4 call 0x1241f220 */
  push32(0x1241f1f9u); f_1241f220();
  /* 1241f1f9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241f1fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1241f1ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241f202 push eax */
  push32((uint32_t)(EAX));
  /* 1241f203 call 0x124201c0 */
  push32(0x1241f208u); f_124201c0();
  /* 1241f208 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241f20b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1241f20e:;
  /* 1241f20e mov esp, ebp */
  ESP = (EBP);
  /* 1241f210 pop ebp */
  EBP = (pop32());
  /* 1241f211 ret  */
  ESPCHK(0x1241f190u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f220 @ 0x1241f220 (178 bytes, 56 insns) */
void f_1241f220(void) {
  FTRACE(0x1241f220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241f220 push ebp */
  push32((uint32_t)(EBP));
  /* 1241f221 mov ebp, esp */
  EBP = (ESP);
  /* 1241f223 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241f226 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241f229 push eax */
  push32((uint32_t)(EAX));
  /* 1241f22a call 0x1241ffb0 */
  push32(0x1241f22fu); f_1241ffb0();
  /* 1241f22f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241f232 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1241f235 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241f239 jne 0x1241f24e */
  if (!C.zf) goto L_1241f24e;
  /* 1241f23b call 0x1241e910 */
  push32(0x1241f240u); f_1241e910();
  /* 1241f240 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1241f246 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1241f249 jmp 0x1241f2ce */
  goto L_1241f2ce;
L_1241f24e:;
  /* 1241f24e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1241f251 push ecx */
  push32((uint32_t)(ECX));
  /* 1241f252 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241f254 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241f257 push edx */
  push32((uint32_t)(EDX));
  /* 1241f258 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241f25b push eax */
  push32((uint32_t)(EAX));
  /* 1241f25c call dword ptr [0x124452f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452f4))), 0x1241f262u);
  /* 1241f262 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1241f265 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241f269 jne 0x1241f276 */
  if (!C.zf) goto L_1241f276;
  /* 1241f26b call dword ptr [0x1244539c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244539c))), 0x1241f271u);
  /* 1241f271 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1241f274 jmp 0x1241f27d */
  goto L_1241f27d;
L_1241f276:;
  /* 1241f276 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1241f27d:;
  /* 1241f27d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241f281 je 0x1241f294 */
  if (C.zf) goto L_1241f294;
  /* 1241f283 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241f286 push ecx */
  push32((uint32_t)(ECX));
  /* 1241f287 call 0x1241e870 */
  push32(0x1241f28cu); f_1241e870();
  /* 1241f28c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241f28f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1241f292 jmp 0x1241f2ce */
  goto L_1241f2ce;
L_1241f294:;
  /* 1241f294 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241f297 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1241f29a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241f29d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1241f2a0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241f2a3 mov ecx, dword ptr [edx*4 + 0x12444200] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12444200)));
  /* 1241f2aa mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1241f2ae and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1241f2b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241f2b4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1241f2b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241f2ba and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1241f2bd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241f2c0 mov eax, dword ptr [eax*4 + 0x12444200] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12444200)));
  /* 1241f2c7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1241f2cb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1241f2ce:;
  /* 1241f2ce mov esp, ebp */
  ESP = (EBP);
  /* 1241f2d0 pop ebp */
  EBP = (pop32());
  /* 1241f2d1 ret  */
  ESPCHK(0x1241f220u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f2e0 @ 0x1241f2e0 (130 bytes, 43 insns) */
void f_1241f2e0(void) {
  FTRACE(0x1241f2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241f2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1241f2e1 mov ebp, esp */
  EBP = (ESP);
  /* 1241f2e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1241f2e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241f2e7 cmp eax, dword ptr [0x1244433c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1244433c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241f2ed jae 0x1241f311 */
  if (!C.cf) goto L_1241f311;
  /* 1241f2ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241f2f2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1241f2f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241f2f8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1241f2fb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241f2fe mov eax, dword ptr [ecx*4 + 0x12444200] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12444200)));
  /* 1241f305 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1241f30a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1241f30d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1241f30f jne 0x1241f32c */
  if (!C.zf) goto L_1241f32c;
L_1241f311:;
  /* 1241f311 call 0x1241e910 */
  push32(0x1241f316u); f_1241e910();
  /* 1241f316 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1241f31c call 0x1241e920 */
  push32(0x1241f321u); f_1241e920();
  /* 1241f321 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1241f327 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1241f32a jmp 0x1241f35e */
  goto L_1241f35e;
L_1241f32c:;
  /* 1241f32c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241f32f push edx */
  push32((uint32_t)(EDX));
  /* 1241f330 call 0x12420130 */
  push32(0x1241f335u); f_12420130();
  /* 1241f335 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241f338 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1241f33b push eax */
  push32((uint32_t)(EAX));
  /* 1241f33c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241f33f push ecx */
  push32((uint32_t)(ECX));
  /* 1241f340 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241f343 push edx */
  push32((uint32_t)(EDX));
  /* 1241f344 call 0x1241f370 */
  push32(0x1241f349u); f_1241f370();
  /* 1241f349 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241f34c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1241f34f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241f352 push eax */
  push32((uint32_t)(EAX));
  /* 1241f353 call 0x124201c0 */
  push32(0x1241f358u); f_124201c0();
  /* 1241f358 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241f35b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1241f35e:;
  /* 1241f35e mov esp, ebp */
  ESP = (EBP);
  /* 1241f360 pop ebp */
  EBP = (pop32());
  /* 1241f361 ret  */
  ESPCHK(0x1241f2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f370 @ 0x1241f370 (627 bytes, 182 insns) */
void f_1241f370(void) {
  FTRACE(0x1241f370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241f370 push ebp */
  push32((uint32_t)(EBP));
  /* 1241f371 mov ebp, esp */
  EBP = (ESP);
  /* 1241f373 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241f379 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1241f380 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241f383 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1241f389 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241f38d jne 0x1241f396 */
  if (!C.zf) goto L_1241f396;
  /* 1241f38f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241f391 jmp 0x1241f5df */
  goto L_1241f5df;
L_1241f396:;
  /* 1241f396 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241f399 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1241f39c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241f39f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1241f3a2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241f3a5 mov eax, dword ptr [ecx*4 + 0x12444200] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12444200)));
  /* 1241f3ac movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1241f3b1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1241f3b4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1241f3b6 je 0x1241f3c8 */
  if (C.zf) goto L_1241f3c8;
  /* 1241f3b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1241f3ba push 0 */
  push32((uint32_t)(0x0u));
  /* 1241f3bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241f3bf push edx */
  push32((uint32_t)(EDX));
  /* 1241f3c0 call 0x1241f220 */
  push32(0x1241f3c5u); f_1241f220();
  /* 1241f3c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1241f3c8:;
  /* 1241f3c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241f3cb sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1241f3ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241f3d1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1241f3d4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241f3d7 mov edx, dword ptr [eax*4 + 0x12444200] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12444200)));
  /* 1241f3de movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1241f3e3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1241f3e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241f3ea je 0x1241f4fc */
  if (C.zf) goto L_1241f4fc;
  /* 1241f3f0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241f3f3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1241f3f6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1241f3fd:;
  /* 1241f3fd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241f400 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241f403 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241f406 jae 0x1241f4fa */
  if (!C.cf) goto L_1241f4fa;
  /* 1241f40c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1241f412 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1241f415:;
  /* 1241f415 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241f418 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1241f41e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241f420 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241f426 jge 0x1241f487 */
  if ((C.sf==C.of)) goto L_1241f487;
  /* 1241f428 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241f42b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241f42e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241f431 jae 0x1241f487 */
  if (!C.cf) goto L_1241f487;
  /* 1241f433 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241f436 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1241f438 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1241f43e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241f441 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241f444 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1241f447 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1241f44e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241f451 jne 0x1241f471 */
  if (!C.zf) goto L_1241f471;
  /* 1241f453 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1241f459 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241f45c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1241f462 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241f465 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1241f468 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241f46b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241f46e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1241f471:;
  /* 1241f471 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241f474 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1241f47a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1241f47c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241f47f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241f482 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1241f485 jmp 0x1241f415 */
  goto L_1241f415;
L_1241f487:;
  /* 1241f487 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241f489 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1241f48f push edx */
  push32((uint32_t)(EDX));
  /* 1241f490 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241f493 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1241f499 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241f49b push eax */
  push32((uint32_t)(EAX));
  /* 1241f49c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1241f4a2 push edx */
  push32((uint32_t)(EDX));
  /* 1241f4a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241f4a6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1241f4a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241f4ac and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1241f4af imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241f4b2 mov edx, dword ptr [eax*4 + 0x12444200] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12444200)));
  /* 1241f4b9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1241f4bc push eax */
  push32((uint32_t)(EAX));
  /* 1241f4bd call dword ptr [0x1244535c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244535c))), 0x1241f4c3u);
  /* 1241f4c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241f4c5 je 0x1241f4ea */
  if (C.zf) goto L_1241f4ea;
  /* 1241f4c7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241f4ca add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241f4d0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1241f4d3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241f4d6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1241f4dc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241f4de cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241f4e4 jge 0x1241f4e8 */
  if ((C.sf==C.of)) goto L_1241f4e8;
  /* 1241f4e6 jmp 0x1241f4fa */
  goto L_1241f4fa;
L_1241f4e8:;
  /* 1241f4e8 jmp 0x1241f4f5 */
  goto L_1241f4f5;
L_1241f4ea:;
  /* 1241f4ea call dword ptr [0x1244539c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244539c))), 0x1241f4f0u);
  /* 1241f4f0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1241f4f3 jmp 0x1241f4fa */
  goto L_1241f4fa;
L_1241f4f5:;
  /* 1241f4f5 jmp 0x1241f3fd */
  goto L_1241f3fd;
L_1241f4fa:;
  /* 1241f4fa jmp 0x1241f54c */
  goto L_1241f54c;
L_1241f4fc:;
  /* 1241f4fc push 0 */
  push32((uint32_t)(0x0u));
  /* 1241f4fe lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 1241f504 push ecx */
  push32((uint32_t)(ECX));
  /* 1241f505 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1241f508 push edx */
  push32((uint32_t)(EDX));
  /* 1241f509 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241f50c push eax */
  push32((uint32_t)(EAX));
  /* 1241f50d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241f510 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1241f513 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241f516 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1241f519 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241f51c mov eax, dword ptr [ecx*4 + 0x12444200] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12444200)));
  /* 1241f523 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1241f526 push ecx */
  push32((uint32_t)(ECX));
  /* 1241f527 call dword ptr [0x1244535c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244535c))), 0x1241f52du);
  /* 1241f52d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241f52f je 0x1241f543 */
  if (C.zf) goto L_1241f543;
  /* 1241f531 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1241f538 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1241f53e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1241f541 jmp 0x1241f54c */
  goto L_1241f54c;
L_1241f543:;
  /* 1241f543 call dword ptr [0x1244539c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244539c))), 0x1241f549u);
  /* 1241f549 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1241f54c:;
  /* 1241f54c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241f550 jne 0x1241f5d6 */
  if (!C.zf) goto L_1241f5d6;
  /* 1241f556 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241f55a je 0x1241f58a */
  if (C.zf) goto L_1241f58a;
  /* 1241f55c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241f560 jne 0x1241f579 */
  if (!C.zf) goto L_1241f579;
  /* 1241f562 call 0x1241e910 */
  push32(0x1241f567u); f_1241e910();
  /* 1241f567 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1241f56d call 0x1241e920 */
  push32(0x1241f572u); f_1241e920();
  /* 1241f572 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241f575 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1241f577 jmp 0x1241f585 */
  goto L_1241f585;
L_1241f579:;
  /* 1241f579 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241f57c push edx */
  push32((uint32_t)(EDX));
  /* 1241f57d call 0x1241e870 */
  push32(0x1241f582u); f_1241e870();
  /* 1241f582 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1241f585:;
  /* 1241f585 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1241f588 jmp 0x1241f5df */
  goto L_1241f5df;
L_1241f58a:;
  /* 1241f58a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241f58d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1241f590 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241f593 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1241f596 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241f599 mov edx, dword ptr [eax*4 + 0x12444200] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12444200)));
  /* 1241f5a0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1241f5a5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1241f5a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241f5aa je 0x1241f5bb */
  if (C.zf) goto L_1241f5bb;
  /* 1241f5ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241f5af movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1241f5b2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241f5b5 jne 0x1241f5bb */
  if (!C.zf) goto L_1241f5bb;
  /* 1241f5b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241f5b9 jmp 0x1241f5df */
  goto L_1241f5df;
L_1241f5bb:;
  /* 1241f5bb call 0x1241e910 */
  push32(0x1241f5c0u); f_1241e910();
  /* 1241f5c0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 1241f5c6 call 0x1241e920 */
  push32(0x1241f5cbu); f_1241e920();
  /* 1241f5cb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1241f5d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1241f5d4 jmp 0x1241f5df */
  goto L_1241f5df;
L_1241f5d6:;
  /* 1241f5d6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241f5d9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1241f5df:;
  /* 1241f5df mov esp, ebp */
  ESP = (EBP);
  /* 1241f5e1 pop ebp */
  EBP = (pop32());
  /* 1241f5e2 ret  */
  ESPCHK(0x1241f370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f5f0 @ 0x1241f5f0 (199 bytes, 68 insns) */
void f_1241f5f0(void) {
  FTRACE(0x1241f5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241f5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1241f5f1 mov ebp, esp */
  EBP = (ESP);
  /* 1241f5f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1241f5f4 push ebx */
  push32((uint32_t)(EBX));
  /* 1241f5f5 push esi */
  push32((uint32_t)(ESI));
  /* 1241f5f6 push edi */
  push32((uint32_t)(EDI));
L_1241f5f7:;
  /* 1241f5f7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241f5fb jne 0x1241f61b */
  if (!C.zf) goto L_1241f61b;
  /* 1241f5fd push 0x1243e538 */
  push32((uint32_t)(0x1243e538u));
  /* 1241f602 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241f604 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1241f606 push 0x1243e608 */
  push32((uint32_t)(0x1243e608u));
  /* 1241f60b push 2 */
  push32((uint32_t)(0x2u));
  /* 1241f60d call 0x12415b00 */
  push32(0x1241f612u); f_12415b00();
  /* 1241f612 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241f615 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241f618 jne 0x1241f61b */
  if (!C.zf) goto L_1241f61b;
  /* 1241f61a int3  */
  x86_unimpl("int3 @ 0x1241f61a");
L_1241f61b:;
  /* 1241f61b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241f61d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241f61f jne 0x1241f5f7 */
  if (!C.zf) goto L_1241f5f7;
  /* 1241f621 mov ecx, dword ptr [0x12442a44] */
  ECX = (r32((uint32_t)(0x12442a44)));
  /* 1241f627 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241f62a mov dword ptr [0x12442a44], ecx */
  w32((uint32_t)(0x12442a44), (ECX));
  /* 1241f630 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241f633 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1241f636 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1241f638 push 0x1243e608 */
  push32((uint32_t)(0x1243e608u));
  /* 1241f63d push 2 */
  push32((uint32_t)(0x2u));
  /* 1241f63f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1241f644 call 0x12416a40 */
  push32(0x1241f649u); f_12416a40();
  /* 1241f649 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241f64c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241f64f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1241f652 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241f655 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241f659 je 0x1241f676 */
  if (C.zf) goto L_1241f676;
  /* 1241f65b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241f65e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1241f661 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1241f664 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241f667 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1241f66a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241f66d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 1241f674 jmp 0x1241f69b */
  goto L_1241f69b;
L_1241f676:;
  /* 1241f676 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241f679 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1241f67c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1241f67f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241f682 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1241f685 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241f688 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241f68b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241f68e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1241f691 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241f694 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1241f69b:;
  /* 1241f69b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241f69e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241f6a1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1241f6a4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1241f6a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241f6a9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1241f6b0 pop edi */
  EDI = (pop32());
  /* 1241f6b1 pop esi */
  ESI = (pop32());
  /* 1241f6b2 pop ebx */
  EBX = (pop32());
  /* 1241f6b3 mov esp, ebp */
  ESP = (EBP);
  /* 1241f6b5 pop ebp */
  EBP = (pop32());
  /* 1241f6b6 ret  */
  ESPCHK(0x1241f5f0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x1241f6c0 (50 bytes, 17 insns) */
void f_1241f6c0(void) {
  FTRACE(0x1241f6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241f6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1241f6c1 mov ebp, esp */
  EBP = (ESP);
  /* 1241f6c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241f6c6 cmp eax, dword ptr [0x1244433c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1244433c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241f6cc jb 0x1241f6d2 */
  if (C.cf) goto L_1241f6d2;
  /* 1241f6ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241f6d0 jmp 0x1241f6f0 */
  goto L_1241f6f0;
L_1241f6d2:;
  /* 1241f6d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241f6d5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1241f6d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241f6db and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1241f6de imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241f6e1 mov eax, dword ptr [ecx*4 + 0x12444200] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12444200)));
  /* 1241f6e8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1241f6ed and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_1241f6f0:;
  /* 1241f6f0 pop ebp */
  EBP = (pop32());
  /* 1241f6f1 ret  */
  ESPCHK(0x1241f6c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f700 @ 0x1241f700 (300 bytes, 80 insns) */
void f_1241f700(void) {
  FTRACE(0x1241f700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241f700 push ebp */
  push32((uint32_t)(EBP));
  /* 1241f701 mov ebp, esp */
  EBP = (ESP);
  /* 1241f703 push ecx */
  push32((uint32_t)(ECX));
  /* 1241f704 cmp dword ptr [0x12443f00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12443f00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241f70b jne 0x1241f719 */
  if (!C.zf) goto L_1241f719;
  /* 1241f70d mov dword ptr [0x12443f00], 0x200 */
  w32((uint32_t)(0x12443f00), (0x200u));
  /* 1241f717 jmp 0x1241f72c */
  goto L_1241f72c;
L_1241f719:;
  /* 1241f719 cmp dword ptr [0x12443f00], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x12443f00))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241f720 jge 0x1241f72c */
  if ((C.sf==C.of)) goto L_1241f72c;
  /* 1241f722 mov dword ptr [0x12443f00], 0x14 */
  w32((uint32_t)(0x12443f00), (0x14u));
L_1241f72c:;
  /* 1241f72c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 1241f731 push 0x1243e614 */
  push32((uint32_t)(0x1243e614u));
  /* 1241f736 push 2 */
  push32((uint32_t)(0x2u));
  /* 1241f738 push 4 */
  push32((uint32_t)(0x4u));
  /* 1241f73a mov eax, dword ptr [0x12443f00] */
  EAX = (r32((uint32_t)(0x12443f00)));
  /* 1241f73f push eax */
  push32((uint32_t)(EAX));
  /* 1241f740 call 0x12416e50 */
  push32(0x1241f745u); f_12416e50();
  /* 1241f745 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241f748 mov dword ptr [0x12442bb8], eax */
  w32((uint32_t)(0x12442bb8), (EAX));
  /* 1241f74d cmp dword ptr [0x12442bb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442bb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241f754 jne 0x1241f795 */
  if (!C.zf) goto L_1241f795;
  /* 1241f756 mov dword ptr [0x12443f00], 0x14 */
  w32((uint32_t)(0x12443f00), (0x14u));
  /* 1241f760 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 1241f765 push 0x1243e614 */
  push32((uint32_t)(0x1243e614u));
  /* 1241f76a push 2 */
  push32((uint32_t)(0x2u));
  /* 1241f76c push 4 */
  push32((uint32_t)(0x4u));
  /* 1241f76e mov ecx, dword ptr [0x12443f00] */
  ECX = (r32((uint32_t)(0x12443f00)));
  /* 1241f774 push ecx */
  push32((uint32_t)(ECX));
  /* 1241f775 call 0x12416e50 */
  push32(0x1241f77au); f_12416e50();
  /* 1241f77a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241f77d mov dword ptr [0x12442bb8], eax */
  w32((uint32_t)(0x12442bb8), (EAX));
  /* 1241f782 cmp dword ptr [0x12442bb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442bb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241f789 jne 0x1241f795 */
  if (!C.zf) goto L_1241f795;
  /* 1241f78b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1241f78d call 0x124159b0 */
  push32(0x1241f792u); f_124159b0();
  /* 1241f792 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1241f795:;
  /* 1241f795 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1241f79c jmp 0x1241f7a7 */
  goto L_1241f7a7;
L_1241f79e:;
  /* 1241f79e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241f7a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241f7a4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1241f7a7:;
  /* 1241f7a7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241f7ab jge 0x1241f7c6 */
  if ((C.sf==C.of)) goto L_1241f7c6;
  /* 1241f7ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241f7b0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1241f7b3 add eax, 0x12441120 */
  { uint32_t _a=(EAX),_b=(0x12441120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241f7b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241f7bb mov edx, dword ptr [0x12442bb8] */
  EDX = (r32((uint32_t)(0x12442bb8)));
  /* 1241f7c1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1241f7c4 jmp 0x1241f79e */
  goto L_1241f79e;
L_1241f7c6:;
  /* 1241f7c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1241f7cd jmp 0x1241f7d8 */
  goto L_1241f7d8;
L_1241f7cf:;
  /* 1241f7cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241f7d2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241f7d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1241f7d8:;
  /* 1241f7d8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241f7dc jge 0x1241f828 */
  if ((C.sf==C.of)) goto L_1241f828;
  /* 1241f7de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241f7e1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1241f7e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241f7e7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1241f7ea imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241f7ed mov eax, dword ptr [ecx*4 + 0x12444200] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12444200)));
  /* 1241f7f4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241f7f8 je 0x1241f816 */
  if (C.zf) goto L_1241f816;
  /* 1241f7fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241f7fd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1241f800 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241f803 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1241f806 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241f809 mov eax, dword ptr [ecx*4 + 0x12444200] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12444200)));
  /* 1241f810 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241f814 jne 0x1241f826 */
  if (!C.zf) goto L_1241f826;
L_1241f816:;
  /* 1241f816 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241f819 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1241f81c mov dword ptr [ecx + 0x12441130], 0xffffffff */
  w32((uint32_t)(ECX + 0x12441130), (0xffffffffu));
L_1241f826:;
  /* 1241f826 jmp 0x1241f7cf */
  goto L_1241f7cf;
L_1241f828:;
  /* 1241f828 mov esp, ebp */
  ESP = (EBP);
  /* 1241f82a pop ebp */
  EBP = (pop32());
  /* 1241f82b ret  */
  ESPCHK(0x1241f700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f830 @ 0x1241f830 (26 bytes, 9 insns) */
void f_1241f830(void) {
  FTRACE(0x1241f830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241f830 push ebp */
  push32((uint32_t)(EBP));
  /* 1241f831 mov ebp, esp */
  EBP = (ESP);
  /* 1241f833 call 0x12420430 */
  push32(0x1241f838u); f_12420430();
  /* 1241f838 movsx eax, byte ptr [0x12442860] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x12442860))));
  /* 1241f83f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241f841 je 0x1241f848 */
  if (C.zf) goto L_1241f848;
  /* 1241f843 call 0x124201f0 */
  push32(0x1241f848u); f_124201f0();
L_1241f848:;
  /* 1241f848 pop ebp */
  EBP = (pop32());
  /* 1241f849 ret  */
  ESPCHK(0x1241f830u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f850 @ 0x1241f850 (61 bytes, 20 insns) */
void f_1241f850(void) {
  FTRACE(0x1241f850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241f850 push ebp */
  push32((uint32_t)(EBP));
  /* 1241f851 mov ebp, esp */
  EBP = (ESP);
  /* 1241f853 cmp dword ptr [ebp + 8], 0x12441120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12441120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241f85a jb 0x1241f87e */
  if (C.cf) goto L_1241f87e;
  /* 1241f85c cmp dword ptr [ebp + 8], 0x12441380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12441380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241f863 ja 0x1241f87e */
  if ((!C.cf&&!C.zf)) goto L_1241f87e;
  /* 1241f865 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241f868 sub eax, 0x12441120 */
  { uint32_t _a=(EAX),_b=(0x12441120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241f86d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1241f870 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241f873 push eax */
  push32((uint32_t)(EAX));
  /* 1241f874 call 0x1241a440 */
  push32(0x1241f879u); f_1241a440();
  /* 1241f879 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241f87c jmp 0x1241f88b */
  goto L_1241f88b;
L_1241f87e:;
  /* 1241f87e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241f881 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241f884 push ecx */
  push32((uint32_t)(ECX));
  /* 1241f885 call dword ptr [0x12445330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445330))), 0x1241f88bu);
L_1241f88b:;
  /* 1241f88b pop ebp */
  EBP = (pop32());
  /* 1241f88c ret  */
  ESPCHK(0x1241f850u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f890 @ 0x1241f890 (41 bytes, 16 insns) */
void f_1241f890(void) {
  FTRACE(0x1241f890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241f890 push ebp */
  push32((uint32_t)(EBP));
  /* 1241f891 mov ebp, esp */
  EBP = (ESP);
  /* 1241f893 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241f897 jge 0x1241f8aa */
  if ((C.sf==C.of)) goto L_1241f8aa;
  /* 1241f899 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241f89c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241f89f push eax */
  push32((uint32_t)(EAX));
  /* 1241f8a0 call 0x1241a440 */
  push32(0x1241f8a5u); f_1241a440();
  /* 1241f8a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241f8a8 jmp 0x1241f8b7 */
  goto L_1241f8b7;
L_1241f8aa:;
  /* 1241f8aa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241f8ad add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241f8b0 push ecx */
  push32((uint32_t)(ECX));
  /* 1241f8b1 call dword ptr [0x12445330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445330))), 0x1241f8b7u);
L_1241f8b7:;
  /* 1241f8b7 pop ebp */
  EBP = (pop32());
  /* 1241f8b8 ret  */
  ESPCHK(0x1241f890u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f8c0 @ 0x1241f8c0 (61 bytes, 20 insns) */
void f_1241f8c0(void) {
  FTRACE(0x1241f8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241f8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1241f8c1 mov ebp, esp */
  EBP = (ESP);
  /* 1241f8c3 cmp dword ptr [ebp + 8], 0x12441120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12441120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241f8ca jb 0x1241f8ee */
  if (C.cf) goto L_1241f8ee;
  /* 1241f8cc cmp dword ptr [ebp + 8], 0x12441380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12441380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241f8d3 ja 0x1241f8ee */
  if ((!C.cf&&!C.zf)) goto L_1241f8ee;
  /* 1241f8d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241f8d8 sub eax, 0x12441120 */
  { uint32_t _a=(EAX),_b=(0x12441120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241f8dd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1241f8e0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241f8e3 push eax */
  push32((uint32_t)(EAX));
  /* 1241f8e4 call 0x1241a4e0 */
  push32(0x1241f8e9u); f_1241a4e0();
  /* 1241f8e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241f8ec jmp 0x1241f8fb */
  goto L_1241f8fb;
L_1241f8ee:;
  /* 1241f8ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241f8f1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241f8f4 push ecx */
  push32((uint32_t)(ECX));
  /* 1241f8f5 call dword ptr [0x1244532c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244532c))), 0x1241f8fbu);
L_1241f8fb:;
  /* 1241f8fb pop ebp */
  EBP = (pop32());
  /* 1241f8fc ret  */
  ESPCHK(0x1241f8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f900 @ 0x1241f900 (41 bytes, 16 insns) */
void f_1241f900(void) {
  FTRACE(0x1241f900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241f900 push ebp */
  push32((uint32_t)(EBP));
  /* 1241f901 mov ebp, esp */
  EBP = (ESP);
  /* 1241f903 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241f907 jge 0x1241f91a */
  if ((C.sf==C.of)) goto L_1241f91a;
  /* 1241f909 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241f90c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241f90f push eax */
  push32((uint32_t)(EAX));
  /* 1241f910 call 0x1241a4e0 */
  push32(0x1241f915u); f_1241a4e0();
  /* 1241f915 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241f918 jmp 0x1241f927 */
  goto L_1241f927;
L_1241f91a:;
  /* 1241f91a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241f91d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241f920 push ecx */
  push32((uint32_t)(ECX));
  /* 1241f921 call dword ptr [0x1244532c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244532c))), 0x1241f927u);
L_1241f927:;
  /* 1241f927 pop ebp */
  EBP = (pop32());
  /* 1241f928 ret  */
  ESPCHK(0x1241f900u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f930 @ 0x1241f930 (119 bytes, 34 insns) */
void f_1241f930(void) {
  FTRACE(0x1241f930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241f930 push ebp */
  push32((uint32_t)(EBP));
  /* 1241f931 mov ebp, esp */
  EBP = (ESP);
  /* 1241f933 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241f936 push 0x12442bb4 */
  push32((uint32_t)(0x12442bb4u));
  /* 1241f93b call dword ptr [0x12445370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445370))), 0x1241f941u);
  /* 1241f941 cmp dword ptr [0x12442ba4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442ba4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241f948 je 0x1241f968 */
  if (C.zf) goto L_1241f968;
  /* 1241f94a push 0x12442bb4 */
  push32((uint32_t)(0x12442bb4u));
  /* 1241f94f call dword ptr [0x12445360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445360))), 0x1241f955u);
  /* 1241f955 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1241f957 call 0x1241a440 */
  push32(0x1241f95cu); f_1241a440();
  /* 1241f95c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241f95f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1241f966 jmp 0x1241f96f */
  goto L_1241f96f;
L_1241f968:;
  /* 1241f968 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1241f96f:;
  /* 1241f96f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 1241f973 push eax */
  push32((uint32_t)(EAX));
  /* 1241f974 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241f977 push ecx */
  push32((uint32_t)(ECX));
  /* 1241f978 call 0x1241f9b0 */
  push32(0x1241f97du); f_1241f9b0();
  /* 1241f97d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241f980 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1241f983 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241f987 je 0x1241f995 */
  if (C.zf) goto L_1241f995;
  /* 1241f989 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1241f98b call 0x1241a4e0 */
  push32(0x1241f990u); f_1241a4e0();
  /* 1241f990 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241f993 jmp 0x1241f9a0 */
  goto L_1241f9a0;
L_1241f995:;
  /* 1241f995 push 0x12442bb4 */
  push32((uint32_t)(0x12442bb4u));
  /* 1241f99a call dword ptr [0x12445360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445360))), 0x1241f9a0u);
L_1241f9a0:;
  /* 1241f9a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241f9a3 mov esp, ebp */
  ESP = (EBP);
  /* 1241f9a5 pop ebp */
  EBP = (pop32());
  /* 1241f9a6 ret  */
  ESPCHK(0x1241f930u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f9b0 @ 0x1241f9b0 (160 bytes, 50 insns) */
void f_1241f9b0(void) {
  FTRACE(0x1241f9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241f9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1241f9b1 mov ebp, esp */
  EBP = (ESP);
  /* 1241f9b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241f9b6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241f9ba jne 0x1241f9c3 */
  if (!C.zf) goto L_1241f9c3;
  /* 1241f9bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241f9be jmp 0x1241fa4c */
  goto L_1241fa4c;
L_1241f9c3:;
  /* 1241f9c3 cmp dword ptr [0x12442a28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442a28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241f9ca jne 0x1241f9fa */
  if (!C.zf) goto L_1241f9fa;
  /* 1241f9cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241f9cf and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1241f9d4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241f9d9 jle 0x1241f9eb */
  if ((C.zf||C.sf!=C.of)) goto L_1241f9eb;
  /* 1241f9db call 0x1241e910 */
  push32(0x1241f9e0u); f_1241e910();
  /* 1241f9e0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1241f9e6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1241f9e9 jmp 0x1241fa4c */
  goto L_1241fa4c;
L_1241f9eb:;
  /* 1241f9eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241f9ee mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 1241f9f1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1241f9f3 mov eax, 1 */
  EAX = (0x1u);
  /* 1241f9f8 jmp 0x1241fa4c */
  goto L_1241fa4c;
L_1241f9fa:;
  /* 1241f9fa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1241fa01 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1241fa04 push eax */
  push32((uint32_t)(EAX));
  /* 1241fa05 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241fa07 mov ecx, dword ptr [0x12440ea4] */
  ECX = (r32((uint32_t)(0x12440ea4)));
  /* 1241fa0d push ecx */
  push32((uint32_t)(ECX));
  /* 1241fa0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241fa11 push edx */
  push32((uint32_t)(EDX));
  /* 1241fa12 push 1 */
  push32((uint32_t)(0x1u));
  /* 1241fa14 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1241fa17 push eax */
  push32((uint32_t)(EAX));
  /* 1241fa18 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1241fa1d mov ecx, dword ptr [0x12442a38] */
  ECX = (r32((uint32_t)(0x12442a38)));
  /* 1241fa23 push ecx */
  push32((uint32_t)(ECX));
  /* 1241fa24 call dword ptr [0x124453c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124453c4))), 0x1241fa2au);
  /* 1241fa2a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1241fa2d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241fa31 je 0x1241fa39 */
  if (C.zf) goto L_1241fa39;
  /* 1241fa33 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241fa37 je 0x1241fa49 */
  if (C.zf) goto L_1241fa49;
L_1241fa39:;
  /* 1241fa39 call 0x1241e910 */
  push32(0x1241fa3eu); f_1241e910();
  /* 1241fa3e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1241fa44 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1241fa47 jmp 0x1241fa4c */
  goto L_1241fa4c;
L_1241fa49:;
  /* 1241fa49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1241fa4c:;
  /* 1241fa4c mov esp, ebp */
  ESP = (EBP);
  /* 1241fa4e pop ebp */
  EBP = (pop32());
  /* 1241fa4f ret  */
  ESPCHK(0x1241f9b0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1241fa50 (32 bytes, 18 insns) */
void f_1241fa50(void) {
  FTRACE(0x1241fa50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241fa50 push ebp */
  push32((uint32_t)(EBP));
  /* 1241fa51 mov ebp, esp */
  EBP = (ESP);
  /* 1241fa53 push ebx */
  push32((uint32_t)(EBX));
  /* 1241fa54 push esi */
  push32((uint32_t)(ESI));
  /* 1241fa55 push edi */
  push32((uint32_t)(EDI));
  /* 1241fa56 push ebp */
  push32((uint32_t)(EBP));
  /* 1241fa57 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241fa59 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241fa5b push 0x1241fa68 */
  push32((uint32_t)(0x1241fa68u));
  /* 1241fa60 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1241fa63 call 0x1242719c */
  push32(0x1241fa68u); f_1242719c();
  /* 1241fa68 pop ebp */
  EBP = (pop32());
  /* 1241fa69 pop edi */
  EDI = (pop32());
  /* 1241fa6a pop esi */
  ESI = (pop32());
  /* 1241fa6b pop ebx */
  EBX = (pop32());
  /* 1241fa6c mov esp, ebp */
  ESP = (EBP);
  /* 1241fa6e pop ebp */
  EBP = (pop32());
  /* 1241fa6f ret  */
  ESPCHK(0x1241fa50u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1241fa92 (104 bytes, 33 insns) */
void f_1241fa92(void) {
  FTRACE(0x1241fa92u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241fa92 push ebx */
  push32((uint32_t)(EBX));
  /* 1241fa93 push esi */
  push32((uint32_t)(ESI));
  /* 1241fa94 push edi */
  push32((uint32_t)(EDI));
  /* 1241fa95 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1241fa99 push eax */
  push32((uint32_t)(EAX));
  /* 1241fa9a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1241fa9c push 0x1241fa70 */
  push32((uint32_t)(0x1241fa70u));
  /* 1241faa1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1241faa8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1241faaf:;
  /* 1241faaf mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1241fab3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1241fab6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1241fab9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241fabc je 0x1241faec */
  if (C.zf) goto L_1241faec;
  /* 1241fabe cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241fac2 je 0x1241faec */
  if (C.zf) goto L_1241faec;
  /* 1241fac4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1241fac7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1241faca mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1241face mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1241fad1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241fad6 jne 0x1241faea */
  if (!C.zf) goto L_1241faea;
  /* 1241fad8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1241fadd mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1241fae1 call 0x1241fb26 */
  push32(0x1241fae6u); f_1241fb26();
  /* 1241fae6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1241faeau);
L_1241faea:;
  /* 1241faea jmp 0x1241faaf */
  goto L_1241faaf;
L_1241faec:;
  /* 1241faec pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1241faf3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241faf6 pop edi */
  EDI = (pop32());
  /* 1241faf7 pop esi */
  ESI = (pop32());
  /* 1241faf8 pop ebx */
  EBX = (pop32());
  /* 1241faf9 ret  */
  ESPCHK(0x1241fa92u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb26 @ 0x1241fb26 (24 bytes, 10 insns) */
void f_1241fb26(void) {
  FTRACE(0x1241fb26u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241fb26 push ebx */
  push32((uint32_t)(EBX));
  /* 1241fb27 push ecx */
  push32((uint32_t)(ECX));
  /* 1241fb28 mov ebx, 0x124413b8 */
  EBX = (0x124413b8u);
  /* 1241fb2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241fb30 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1241fb33 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1241fb36 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1241fb39 pop ecx */
  ECX = (pop32());
  /* 1241fb3a pop ebx */
  EBX = (pop32());
  /* 1241fb3b ret 4 */
  ESPCHK(0x1241fb26u, _esp0);
  ESP += 8; return;
}

/* FUN_1000fc05 @ 0x1241fc05 (27 bytes, 11 insns) */
void f_1241fc05(void) {
  FTRACE(0x1241fc05u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241fc05 push ebp */
  push32((uint32_t)(EBP));
  /* 1241fc06 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1241fc0a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1241fc0c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1241fc0f push eax */
  push32((uint32_t)(EAX));
  /* 1241fc10 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1241fc13 push eax */
  push32((uint32_t)(EAX));
  /* 1241fc14 call 0x1241fa92 */
  push32(0x1241fc19u); f_1241fa92();
  /* 1241fc19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241fc1c pop ebp */
  EBP = (pop32());
  /* 1241fc1d ret 4 */
  ESPCHK(0x1241fc05u, _esp0);
  ESP += 8; return;
}

/* FUN_1000fc20 @ 0x1241fc20 (482 bytes, 138 insns) */
void f_1241fc20(void) {
  FTRACE(0x1241fc20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241fc20 push ebp */
  push32((uint32_t)(EBP));
  /* 1241fc21 mov ebp, esp */
  EBP = (ESP);
  /* 1241fc23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241fc26 push esi */
  push32((uint32_t)(ESI));
  /* 1241fc27 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1241fc2e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1241fc30 call 0x1241a440 */
  push32(0x1241fc35u); f_1241a440();
  /* 1241fc35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241fc38 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1241fc3f jmp 0x1241fc4a */
  goto L_1241fc4a;
L_1241fc41:;
  /* 1241fc41 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241fc44 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241fc47 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1241fc4a:;
  /* 1241fc4a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241fc4e jge 0x1241fdf0 */
  if ((C.sf==C.of)) goto L_1241fdf0;
  /* 1241fc54 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241fc57 cmp dword ptr [ecx*4 + 0x12444200], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12444200))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241fc5f je 0x1241fd56 */
  if (C.zf) goto L_1241fd56;
  /* 1241fc65 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241fc68 mov eax, dword ptr [edx*4 + 0x12444200] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12444200)));
  /* 1241fc6f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1241fc72 jmp 0x1241fc7d */
  goto L_1241fc7d;
L_1241fc74:;
  /* 1241fc74 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241fc77 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241fc7a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1241fc7d:;
  /* 1241fc7d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241fc80 mov eax, dword ptr [edx*4 + 0x12444200] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12444200)));
  /* 1241fc87 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241fc8c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241fc8f jae 0x1241fd46 */
  if (!C.cf) goto L_1241fd46;
  /* 1241fc95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241fc98 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1241fc9c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1241fc9f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241fca1 jne 0x1241fd41 */
  if (!C.zf) goto L_1241fd41;
  /* 1241fca7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241fcaa cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241fcae jne 0x1241fce9 */
  if (!C.zf) goto L_1241fce9;
  /* 1241fcb0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1241fcb2 call 0x1241a440 */
  push32(0x1241fcb7u); f_1241a440();
  /* 1241fcb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241fcba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241fcbd cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241fcc1 jne 0x1241fcdf */
  if (!C.zf) goto L_1241fcdf;
  /* 1241fcc3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241fcc6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241fcc9 push edx */
  push32((uint32_t)(EDX));
  /* 1241fcca call dword ptr [0x12445334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445334))), 0x1241fcd0u);
  /* 1241fcd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241fcd3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1241fcd6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241fcd9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241fcdc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1241fcdf:;
  /* 1241fcdf push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1241fce1 call 0x1241a4e0 */
  push32(0x1241fce6u); f_1241a4e0();
  /* 1241fce6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1241fce9:;
  /* 1241fce9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241fcec add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241fcef push eax */
  push32((uint32_t)(EAX));
  /* 1241fcf0 call dword ptr [0x12445330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445330))), 0x1241fcf6u);
  /* 1241fcf6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241fcf9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1241fcfd and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1241fd00 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241fd02 je 0x1241fd16 */
  if (C.zf) goto L_1241fd16;
  /* 1241fd04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241fd07 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241fd0a push eax */
  push32((uint32_t)(EAX));
  /* 1241fd0b call dword ptr [0x1244532c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244532c))), 0x1241fd11u);
  /* 1241fd11 jmp 0x1241fc74 */
  goto L_1241fc74;
L_1241fd16:;
  /* 1241fd16 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241fd19 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1241fd1f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241fd22 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1241fd25 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241fd28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241fd2b sub eax, dword ptr [edx*4 + 0x12444200] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x12444200))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241fd32 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1241fd33 mov esi, 0x24 */
  ESI = (0x24u);
  /* 1241fd38 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1241fd3a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241fd3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1241fd3f jmp 0x1241fd46 */
  goto L_1241fd46;
L_1241fd41:;
  /* 1241fd41 jmp 0x1241fc74 */
  goto L_1241fc74;
L_1241fd46:;
  /* 1241fd46 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241fd4a je 0x1241fd51 */
  if (C.zf) goto L_1241fd51;
  /* 1241fd4c jmp 0x1241fdf0 */
  goto L_1241fdf0;
L_1241fd51:;
  /* 1241fd51 jmp 0x1241fdeb */
  goto L_1241fdeb;
L_1241fd56:;
  /* 1241fd56 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1241fd58 push 0x1243e61c */
  push32((uint32_t)(0x1243e61cu));
  /* 1241fd5d push 2 */
  push32((uint32_t)(0x2u));
  /* 1241fd5f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1241fd64 call 0x12416a40 */
  push32(0x1241fd69u); f_12416a40();
  /* 1241fd69 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241fd6c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1241fd6f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241fd73 je 0x1241fde9 */
  if (C.zf) goto L_1241fde9;
  /* 1241fd75 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241fd78 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241fd7b mov dword ptr [eax*4 + 0x12444200], ecx */
  w32((uint32_t)(EAX*4 + 0x12444200), (ECX));
  /* 1241fd82 mov edx, dword ptr [0x1244433c] */
  EDX = (r32((uint32_t)(0x1244433c)));
  /* 1241fd88 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241fd8b mov dword ptr [0x1244433c], edx */
  w32((uint32_t)(0x1244433c), (EDX));
  /* 1241fd91 jmp 0x1241fd9c */
  goto L_1241fd9c;
L_1241fd93:;
  /* 1241fd93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241fd96 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241fd99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1241fd9c:;
  /* 1241fd9c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241fd9f mov edx, dword ptr [ecx*4 + 0x12444200] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12444200)));
  /* 1241fda6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241fdac cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241fdaf jae 0x1241fdd4 */
  if (!C.cf) goto L_1241fdd4;
  /* 1241fdb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241fdb4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1241fdb8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241fdbb mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1241fdc1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241fdc4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1241fdc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241fdcb mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1241fdd2 jmp 0x1241fd93 */
  goto L_1241fd93;
L_1241fdd4:;
  /* 1241fdd4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241fdd7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1241fdda mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1241fddd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241fde0 push edx */
  push32((uint32_t)(EDX));
  /* 1241fde1 call 0x12420130 */
  push32(0x1241fde6u); f_12420130();
  /* 1241fde6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1241fde9:;
  /* 1241fde9 jmp 0x1241fdf0 */
  goto L_1241fdf0;
L_1241fdeb:;
  /* 1241fdeb jmp 0x1241fc41 */
  goto L_1241fc41;
L_1241fdf0:;
  /* 1241fdf0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1241fdf2 call 0x1241a4e0 */
  push32(0x1241fdf7u); f_1241a4e0();
  /* 1241fdf7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241fdfa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241fdfd pop esi */
  ESI = (pop32());
  /* 1241fdfe mov esp, ebp */
  ESP = (EBP);
  /* 1241fe00 pop ebp */
  EBP = (pop32());
  /* 1241fe01 ret  */
  ESPCHK(0x1241fc20u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x1241fe10 (183 bytes, 57 insns) */
void f_1241fe10(void) {
  FTRACE(0x1241fe10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241fe10 push ebp */
  push32((uint32_t)(EBP));
  /* 1241fe11 mov ebp, esp */
  EBP = (ESP);
  /* 1241fe13 push ecx */
  push32((uint32_t)(ECX));
  /* 1241fe14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241fe17 cmp eax, dword ptr [0x1244433c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1244433c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241fe1d jae 0x1241feaa */
  if (!C.cf) goto L_1241feaa;
  /* 1241fe23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241fe26 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1241fe29 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241fe2c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1241fe2f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241fe32 mov eax, dword ptr [ecx*4 + 0x12444200] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12444200)));
  /* 1241fe39 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241fe3d jne 0x1241feaa */
  if (!C.zf) goto L_1241feaa;
  /* 1241fe3f cmp dword ptr [0x12442820], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12442820))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241fe46 jne 0x1241fe8a */
  if (!C.zf) goto L_1241fe8a;
  /* 1241fe48 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241fe4b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1241fe4e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241fe52 je 0x1241fe62 */
  if (C.zf) goto L_1241fe62;
  /* 1241fe54 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241fe58 je 0x1241fe70 */
  if (C.zf) goto L_1241fe70;
  /* 1241fe5a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241fe5e je 0x1241fe7e */
  if (C.zf) goto L_1241fe7e;
  /* 1241fe60 jmp 0x1241fe8a */
  goto L_1241fe8a;
L_1241fe62:;
  /* 1241fe62 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241fe65 push edx */
  push32((uint32_t)(EDX));
  /* 1241fe66 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1241fe68 call dword ptr [0x124452ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452ec))), 0x1241fe6eu);
  /* 1241fe6e jmp 0x1241fe8a */
  goto L_1241fe8a;
L_1241fe70:;
  /* 1241fe70 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241fe73 push eax */
  push32((uint32_t)(EAX));
  /* 1241fe74 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1241fe76 call dword ptr [0x124452ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452ec))), 0x1241fe7cu);
  /* 1241fe7c jmp 0x1241fe8a */
  goto L_1241fe8a;
L_1241fe7e:;
  /* 1241fe7e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241fe81 push ecx */
  push32((uint32_t)(ECX));
  /* 1241fe82 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1241fe84 call dword ptr [0x124452ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452ec))), 0x1241fe8au);
L_1241fe8a:;
  /* 1241fe8a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241fe8d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1241fe90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241fe93 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1241fe96 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241fe99 mov ecx, dword ptr [edx*4 + 0x12444200] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12444200)));
  /* 1241fea0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241fea3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 1241fea6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241fea8 jmp 0x1241fec3 */
  goto L_1241fec3;
L_1241feaa:;
  /* 1241feaa call 0x1241e910 */
  push32(0x1241feafu); f_1241e910();
  /* 1241feaf mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1241feb5 call 0x1241e920 */
  push32(0x1241febau); f_1241e920();
  /* 1241feba mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1241fec0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1241fec3:;
  /* 1241fec3 mov esp, ebp */
  ESP = (EBP);
  /* 1241fec5 pop ebp */
  EBP = (pop32());
  /* 1241fec6 ret  */
  ESPCHK(0x1241fe10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fed0 @ 0x1241fed0 (216 bytes, 63 insns) */
void f_1241fed0(void) {
  FTRACE(0x1241fed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241fed0 push ebp */
  push32((uint32_t)(EBP));
  /* 1241fed1 mov ebp, esp */
  EBP = (ESP);
  /* 1241fed3 push ecx */
  push32((uint32_t)(ECX));
  /* 1241fed4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241fed7 cmp eax, dword ptr [0x1244433c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1244433c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241fedd jae 0x1241ff8b */
  if (!C.cf) goto L_1241ff8b;
  /* 1241fee3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241fee6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1241fee9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241feec and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1241feef imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241fef2 mov eax, dword ptr [ecx*4 + 0x12444200] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12444200)));
  /* 1241fef9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1241fefe and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1241ff01 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1241ff03 je 0x1241ff8b */
  if (C.zf) goto L_1241ff8b;
  /* 1241ff09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241ff0c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1241ff0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241ff12 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1241ff15 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241ff18 mov ecx, dword ptr [edx*4 + 0x12444200] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12444200)));
  /* 1241ff1f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241ff23 je 0x1241ff8b */
  if (C.zf) goto L_1241ff8b;
  /* 1241ff25 cmp dword ptr [0x12442820], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12442820))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241ff2c jne 0x1241ff6a */
  if (!C.zf) goto L_1241ff6a;
  /* 1241ff2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241ff31 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1241ff34 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241ff38 je 0x1241ff48 */
  if (C.zf) goto L_1241ff48;
  /* 1241ff3a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241ff3e je 0x1241ff54 */
  if (C.zf) goto L_1241ff54;
  /* 1241ff40 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241ff44 je 0x1241ff60 */
  if (C.zf) goto L_1241ff60;
  /* 1241ff46 jmp 0x1241ff6a */
  goto L_1241ff6a;
L_1241ff48:;
  /* 1241ff48 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241ff4a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1241ff4c call dword ptr [0x124452ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452ec))), 0x1241ff52u);
  /* 1241ff52 jmp 0x1241ff6a */
  goto L_1241ff6a;
L_1241ff54:;
  /* 1241ff54 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241ff56 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1241ff58 call dword ptr [0x124452ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452ec))), 0x1241ff5eu);
  /* 1241ff5e jmp 0x1241ff6a */
  goto L_1241ff6a;
L_1241ff60:;
  /* 1241ff60 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241ff62 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1241ff64 call dword ptr [0x124452ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452ec))), 0x1241ff6au);
L_1241ff6a:;
  /* 1241ff6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241ff6d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1241ff70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241ff73 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1241ff76 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241ff79 mov edx, dword ptr [eax*4 + 0x12444200] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12444200)));
  /* 1241ff80 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 1241ff87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241ff89 jmp 0x1241ffa4 */
  goto L_1241ffa4;
L_1241ff8b:;
  /* 1241ff8b call 0x1241e910 */
  push32(0x1241ff90u); f_1241e910();
  /* 1241ff90 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1241ff96 call 0x1241e920 */
  push32(0x1241ff9bu); f_1241e920();
  /* 1241ff9b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1241ffa1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1241ffa4:;
  /* 1241ffa4 mov esp, ebp */
  ESP = (EBP);
  /* 1241ffa6 pop ebp */
  EBP = (pop32());
  /* 1241ffa7 ret  */
  ESPCHK(0x1241fed0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ffb0 @ 0x1241ffb0 (102 bytes, 30 insns) */
void f_1241ffb0(void) {
  FTRACE(0x1241ffb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241ffb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1241ffb1 mov ebp, esp */
  EBP = (ESP);
  /* 1241ffb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241ffb6 cmp eax, dword ptr [0x1244433c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1244433c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241ffbc jae 0x1241fffb */
  if (!C.cf) goto L_1241fffb;
  /* 1241ffbe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241ffc1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1241ffc4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241ffc7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1241ffca imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241ffcd mov eax, dword ptr [ecx*4 + 0x12444200] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12444200)));
  /* 1241ffd4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1241ffd9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1241ffdc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1241ffde je 0x1241fffb */
  if (C.zf) goto L_1241fffb;
  /* 1241ffe0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241ffe3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1241ffe6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241ffe9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1241ffec imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241ffef mov ecx, dword ptr [edx*4 + 0x12444200] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12444200)));
  /* 1241fff6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 1241fff9 jmp 0x12420014 */
  goto L_12420014;
L_1241fffb:;
  /* 1241fffb call 0x1241e910 */
  push32(0x12420000u); f_1241e910();
  /* 12420000 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12420006 call 0x1241e920 */
  push32(0x1242000bu); f_1241e920();
  /* 1242000b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12420011 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12420014:;
  /* 12420014 pop ebp */
  EBP = (pop32());
  /* 12420015 ret  */
  ESPCHK(0x1241ffb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010020 @ 0x12420020 (260 bytes, 83 insns) */
void f_12420020(void) {
  FTRACE(0x12420020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12420020 push ebp */
  push32((uint32_t)(EBP));
  /* 12420021 mov ebp, esp */
  EBP = (ESP);
  /* 12420023 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12420026 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1242002a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1242002d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12420030 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12420032 je 0x1242003d */
  if (C.zf) goto L_1242003d;
  /* 12420034 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 12420037 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1242003a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1242003d:;
  /* 1242003d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12420040 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 12420046 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12420048 je 0x12420052 */
  if (C.zf) goto L_12420052;
  /* 1242004a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1242004d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1242004f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_12420052:;
  /* 12420052 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12420055 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1242005b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1242005d je 0x12420068 */
  if (C.zf) goto L_12420068;
  /* 1242005f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12420062 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 12420065 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_12420068:;
  /* 12420068 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242006b push eax */
  push32((uint32_t)(EAX));
  /* 1242006c call dword ptr [0x124453a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124453a8))), 0x12420072u);
  /* 12420072 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12420075 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420079 jne 0x12420092 */
  if (!C.zf) goto L_12420092;
  /* 1242007b call dword ptr [0x1244539c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244539c))), 0x12420081u);
  /* 12420081 push eax */
  push32((uint32_t)(EAX));
  /* 12420082 call 0x1241e870 */
  push32(0x12420087u); f_1241e870();
  /* 12420087 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242008a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1242008d jmp 0x12420120 */
  goto L_12420120;
L_12420092:;
  /* 12420092 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420096 jne 0x124200a3 */
  if (!C.zf) goto L_124200a3;
  /* 12420098 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1242009b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1242009e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 124200a1 jmp 0x124200b2 */
  goto L_124200b2;
L_124200a3:;
  /* 124200a3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124200a7 jne 0x124200b2 */
  if (!C.zf) goto L_124200b2;
  /* 124200a9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 124200ac or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 124200af mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_124200b2:;
  /* 124200b2 call 0x1241fc20 */
  push32(0x124200b7u); f_1241fc20();
  /* 124200b7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124200ba cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124200be jne 0x124200db */
  if (!C.zf) goto L_124200db;
  /* 124200c0 call 0x1241e910 */
  push32(0x124200c5u); f_1241e910();
  /* 124200c5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 124200cb call 0x1241e920 */
  push32(0x124200d0u); f_1241e920();
  /* 124200d0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 124200d6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124200d9 jmp 0x12420120 */
  goto L_12420120;
L_124200db:;
  /* 124200db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124200de push eax */
  push32((uint32_t)(EAX));
  /* 124200df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124200e2 push ecx */
  push32((uint32_t)(ECX));
  /* 124200e3 call 0x1241fe10 */
  push32(0x124200e8u); f_1241fe10();
  /* 124200e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124200eb mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 124200ee or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 124200f1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 124200f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124200f7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 124200fa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124200fd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12420100 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12420103 mov edx, dword ptr [eax*4 + 0x12444200] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12444200)));
  /* 1242010a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1242010d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 12420111 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12420114 push ecx */
  push32((uint32_t)(ECX));
  /* 12420115 call 0x124201c0 */
  push32(0x1242011au); f_124201c0();
  /* 1242011a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242011d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12420120:;
  /* 12420120 mov esp, ebp */
  ESP = (EBP);
  /* 12420122 pop ebp */
  EBP = (pop32());
  /* 12420123 ret  */
  ESPCHK(0x12420020u, _esp0);
  ESP += 4; return;
}

/* FUN_10010130 @ 0x12420130 (134 bytes, 44 insns) */
void f_12420130(void) {
  FTRACE(0x12420130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12420130 push ebp */
  push32((uint32_t)(EBP));
  /* 12420131 mov ebp, esp */
  EBP = (ESP);
  /* 12420133 push ecx */
  push32((uint32_t)(ECX));
  /* 12420134 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12420137 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1242013a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242013d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12420140 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12420143 mov edx, dword ptr [eax*4 + 0x12444200] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12444200)));
  /* 1242014a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242014c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1242014f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12420152 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420156 jne 0x12420191 */
  if (!C.zf) goto L_12420191;
  /* 12420158 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1242015a call 0x1241a440 */
  push32(0x1242015fu); f_1241a440();
  /* 1242015f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12420162 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12420165 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420169 jne 0x12420187 */
  if (!C.zf) goto L_12420187;
  /* 1242016b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1242016e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12420171 push edx */
  push32((uint32_t)(EDX));
  /* 12420172 call dword ptr [0x12445334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445334))), 0x12420178u);
  /* 12420178 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1242017b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1242017e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12420181 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12420184 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_12420187:;
  /* 12420187 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12420189 call 0x1241a4e0 */
  push32(0x1242018eu); f_1241a4e0();
  /* 1242018e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12420191:;
  /* 12420191 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12420194 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12420197 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242019a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1242019d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124201a0 mov edx, dword ptr [eax*4 + 0x12444200] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12444200)));
  /* 124201a7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 124201ab push eax */
  push32((uint32_t)(EAX));
  /* 124201ac call dword ptr [0x12445330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445330))), 0x124201b2u);
  /* 124201b2 mov esp, ebp */
  ESP = (EBP);
  /* 124201b4 pop ebp */
  EBP = (pop32());
  /* 124201b5 ret  */
  ESPCHK(0x12420130u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x124201c0 (38 bytes, 13 insns) */
void f_124201c0(void) {
  FTRACE(0x124201c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124201c0 push ebp */
  push32((uint32_t)(EBP));
  /* 124201c1 mov ebp, esp */
  EBP = (ESP);
  /* 124201c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124201c6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 124201c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124201cc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 124201cf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124201d2 mov edx, dword ptr [eax*4 + 0x12444200] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12444200)));
  /* 124201d9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 124201dd push eax */
  push32((uint32_t)(EAX));
  /* 124201de call dword ptr [0x1244532c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244532c))), 0x124201e4u);
  /* 124201e4 pop ebp */
  EBP = (pop32());
  /* 124201e5 ret  */
  ESPCHK(0x124201c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100101f0 @ 0x124201f0 (218 bytes, 63 insns) */
void f_124201f0(void) {
  FTRACE(0x124201f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124201f0 push ebp */
  push32((uint32_t)(EBP));
  /* 124201f1 mov ebp, esp */
  EBP = (ESP);
  /* 124201f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124201f6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124201fd push 2 */
  push32((uint32_t)(0x2u));
  /* 124201ff call 0x1241a440 */
  push32(0x12420204u); f_1241a440();
  /* 12420204 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12420207 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1242020e jmp 0x12420219 */
  goto L_12420219;
L_12420210:;
  /* 12420210 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12420213 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12420216 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12420219:;
  /* 12420219 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1242021c cmp ecx, dword ptr [0x12443f00] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12443f00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420222 jge 0x124202b9 */
  if ((C.sf==C.of)) goto L_124202b9;
  /* 12420228 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1242022b mov eax, dword ptr [0x12442bb8] */
  EAX = (r32((uint32_t)(0x12442bb8)));
  /* 12420230 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420234 je 0x124202b4 */
  if (C.zf) goto L_124202b4;
  /* 12420236 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12420239 mov edx, dword ptr [0x12442bb8] */
  EDX = (r32((uint32_t)(0x12442bb8)));
  /* 1242023f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12420242 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12420245 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1242024b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1242024d je 0x12420271 */
  if (C.zf) goto L_12420271;
  /* 1242024f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12420252 mov eax, dword ptr [0x12442bb8] */
  EAX = (r32((uint32_t)(0x12442bb8)));
  /* 12420257 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1242025a push ecx */
  push32((uint32_t)(ECX));
  /* 1242025b call 0x12420fe0 */
  push32(0x12420260u); f_12420fe0();
  /* 12420260 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12420263 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420266 je 0x12420271 */
  if (C.zf) goto L_12420271;
  /* 12420268 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1242026b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242026e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12420271:;
  /* 12420271 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420275 jl 0x124202b4 */
  if ((C.sf!=C.of)) goto L_124202b4;
  /* 12420277 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1242027a mov ecx, dword ptr [0x12442bb8] */
  ECX = (r32((uint32_t)(0x12442bb8)));
  /* 12420280 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12420283 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12420286 push edx */
  push32((uint32_t)(EDX));
  /* 12420287 call dword ptr [0x124453b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124453b0))), 0x1242028du);
  /* 1242028d push 2 */
  push32((uint32_t)(0x2u));
  /* 1242028f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12420292 mov ecx, dword ptr [0x12442bb8] */
  ECX = (r32((uint32_t)(0x12442bb8)));
  /* 12420298 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1242029b push edx */
  push32((uint32_t)(EDX));
  /* 1242029c call 0x124174d0 */
  push32(0x124202a1u); f_124174d0();
  /* 124202a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124202a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124202a7 mov ecx, dword ptr [0x12442bb8] */
  ECX = (r32((uint32_t)(0x12442bb8)));
  /* 124202ad mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_124202b4:;
  /* 124202b4 jmp 0x12420210 */
  goto L_12420210;
L_124202b9:;
  /* 124202b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 124202bb call 0x1241a4e0 */
  push32(0x124202c0u); f_1241a4e0();
  /* 124202c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124202c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124202c6 mov esp, ebp */
  ESP = (EBP);
  /* 124202c8 pop ebp */
  EBP = (pop32());
  /* 124202c9 ret  */
  ESPCHK(0x124201f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100102d0 @ 0x124202d0 (68 bytes, 26 insns) */
void f_124202d0(void) {
  FTRACE(0x124202d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124202d0 push ebp */
  push32((uint32_t)(EBP));
  /* 124202d1 mov ebp, esp */
  EBP = (ESP);
  /* 124202d3 push ecx */
  push32((uint32_t)(ECX));
  /* 124202d4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124202d8 jne 0x124202e6 */
  if (!C.zf) goto L_124202e6;
  /* 124202da push 0 */
  push32((uint32_t)(0x0u));
  /* 124202dc call 0x12420440 */
  push32(0x124202e1u); f_12420440();
  /* 124202e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124202e4 jmp 0x12420310 */
  goto L_12420310;
L_124202e6:;
  /* 124202e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124202e9 push eax */
  push32((uint32_t)(EAX));
  /* 124202ea call 0x1241f850 */
  push32(0x124202efu); f_1241f850();
  /* 124202ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124202f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124202f5 push ecx */
  push32((uint32_t)(ECX));
  /* 124202f6 call 0x12420320 */
  push32(0x124202fbu); f_12420320();
  /* 124202fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124202fe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12420301 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12420304 push edx */
  push32((uint32_t)(EDX));
  /* 12420305 call 0x1241f8c0 */
  push32(0x1242030au); f_1241f8c0();
  /* 1242030a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242030d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12420310:;
  /* 12420310 mov esp, ebp */
  ESP = (EBP);
  /* 12420312 pop ebp */
  EBP = (pop32());
  /* 12420313 ret  */
  ESPCHK(0x124202d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010320 @ 0x12420320 (65 bytes, 26 insns) */
void f_12420320(void) {
  FTRACE(0x12420320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12420320 push ebp */
  push32((uint32_t)(EBP));
  /* 12420321 mov ebp, esp */
  EBP = (ESP);
  /* 12420323 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12420326 push eax */
  push32((uint32_t)(EAX));
  /* 12420327 call 0x12420370 */
  push32(0x1242032cu); f_12420370();
  /* 1242032c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242032f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12420331 je 0x12420338 */
  if (C.zf) goto L_12420338;
  /* 12420333 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12420336 jmp 0x1242035f */
  goto L_1242035f;
L_12420338:;
  /* 12420338 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242033b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1242033e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 12420344 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12420346 je 0x1242035d */
  if (C.zf) goto L_1242035d;
  /* 12420348 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242034b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1242034e push ecx */
  push32((uint32_t)(ECX));
  /* 1242034f call 0x12421130 */
  push32(0x12420354u); f_12421130();
  /* 12420354 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12420357 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12420359 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1242035b jmp 0x1242035f */
  goto L_1242035f;
L_1242035d:;
  /* 1242035d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1242035f:;
  /* 1242035f pop ebp */
  EBP = (pop32());
  /* 12420360 ret  */
  ESPCHK(0x12420320u, _esp0);
  ESP += 4; return;
}

/* FUN_10010370 @ 0x12420370 (183 bytes, 62 insns) */
void f_12420370(void) {
  FTRACE(0x12420370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12420370 push ebp */
  push32((uint32_t)(EBP));
  /* 12420371 mov ebp, esp */
  EBP = (ESP);
  /* 12420373 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12420376 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1242037d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12420380 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12420383 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12420386 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12420389 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1242038c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242038f jne 0x1242040b */
  if (!C.zf) goto L_1242040b;
  /* 12420391 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12420394 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12420397 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1242039d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1242039f je 0x1242040b */
  if (C.zf) goto L_1242040b;
  /* 124203a1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124203a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124203a7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 124203a9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124203ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124203af cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124203b3 jle 0x1242040b */
  if ((C.zf||C.sf!=C.of)) goto L_1242040b;
  /* 124203b5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124203b8 push edx */
  push32((uint32_t)(EDX));
  /* 124203b9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124203bc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 124203bf push ecx */
  push32((uint32_t)(ECX));
  /* 124203c0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124203c3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 124203c6 push eax */
  push32((uint32_t)(EAX));
  /* 124203c7 call 0x1241f2e0 */
  push32(0x124203ccu); f_1241f2e0();
  /* 124203cc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124203cf cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124203d2 jne 0x124203f5 */
  if (!C.zf) goto L_124203f5;
  /* 124203d4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124203d7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 124203da and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 124203e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124203e2 je 0x124203f3 */
  if (C.zf) goto L_124203f3;
  /* 124203e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124203e7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 124203ea and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 124203ed mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124203f0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_124203f3:;
  /* 124203f3 jmp 0x1242040b */
  goto L_1242040b;
L_124203f5:;
  /* 124203f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124203f8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 124203fb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 124203fe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12420401 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12420404 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1242040b:;
  /* 1242040b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1242040e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12420411 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12420414 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12420416 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12420419 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 12420420 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12420423 mov esp, ebp */
  ESP = (EBP);
  /* 12420425 pop ebp */
  EBP = (pop32());
  /* 12420426 ret  */
  ESPCHK(0x12420370u, _esp0);
  ESP += 4; return;
}

/* FUN_10010430 @ 0x12420430 (15 bytes, 7 insns) */
void f_12420430(void) {
  FTRACE(0x12420430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12420430 push ebp */
  push32((uint32_t)(EBP));
  /* 12420431 mov ebp, esp */
  EBP = (ESP);
  /* 12420433 push 1 */
  push32((uint32_t)(0x1u));
  /* 12420435 call 0x12420440 */
  push32(0x1242043au); f_12420440();
  /* 1242043a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242043d pop ebp */
  EBP = (pop32());
  /* 1242043e ret  */
  ESPCHK(0x12420430u, _esp0);
  ESP += 4; return;
}

/* FUN_10010440 @ 0x12420440 (319 bytes, 94 insns) */
void f_12420440(void) {
  FTRACE(0x12420440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12420440 push ebp */
  push32((uint32_t)(EBP));
  /* 12420441 mov ebp, esp */
  EBP = (ESP);
  /* 12420443 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12420446 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1242044d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12420454 push 2 */
  push32((uint32_t)(0x2u));
  /* 12420456 call 0x1241a440 */
  push32(0x1242045bu); f_1241a440();
  /* 1242045b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242045e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12420465 jmp 0x12420470 */
  goto L_12420470;
L_12420467:;
  /* 12420467 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1242046a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242046d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12420470:;
  /* 12420470 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12420473 cmp ecx, dword ptr [0x12443f00] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12443f00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420479 jge 0x12420563 */
  if ((C.sf==C.of)) goto L_12420563;
  /* 1242047f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12420482 mov eax, dword ptr [0x12442bb8] */
  EAX = (r32((uint32_t)(0x12442bb8)));
  /* 12420487 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242048b je 0x1242055e */
  if (C.zf) goto L_1242055e;
  /* 12420491 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12420494 mov edx, dword ptr [0x12442bb8] */
  EDX = (r32((uint32_t)(0x12442bb8)));
  /* 1242049a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1242049d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 124204a0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 124204a6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124204a8 je 0x1242055e */
  if (C.zf) goto L_1242055e;
  /* 124204ae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124204b1 mov eax, dword ptr [0x12442bb8] */
  EAX = (r32((uint32_t)(0x12442bb8)));
  /* 124204b6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 124204b9 push ecx */
  push32((uint32_t)(ECX));
  /* 124204ba mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124204bd push edx */
  push32((uint32_t)(EDX));
  /* 124204be call 0x1241f890 */
  push32(0x124204c3u); f_1241f890();
  /* 124204c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124204c6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124204c9 mov ecx, dword ptr [0x12442bb8] */
  ECX = (r32((uint32_t)(0x12442bb8)));
  /* 124204cf mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 124204d2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 124204d5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 124204da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124204dc je 0x12420545 */
  if (C.zf) goto L_12420545;
  /* 124204de cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124204e2 jne 0x12420509 */
  if (!C.zf) goto L_12420509;
  /* 124204e4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124204e7 mov edx, dword ptr [0x12442bb8] */
  EDX = (r32((uint32_t)(0x12442bb8)));
  /* 124204ed mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 124204f0 push eax */
  push32((uint32_t)(EAX));
  /* 124204f1 call 0x12420320 */
  push32(0x124204f6u); f_12420320();
  /* 124204f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124204f9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124204fc je 0x12420507 */
  if (C.zf) goto L_12420507;
  /* 124204fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12420501 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12420504 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12420507:;
  /* 12420507 jmp 0x12420545 */
  goto L_12420545;
L_12420509:;
  /* 12420509 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242050d jne 0x12420545 */
  if (!C.zf) goto L_12420545;
  /* 1242050f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12420512 mov eax, dword ptr [0x12442bb8] */
  EAX = (r32((uint32_t)(0x12442bb8)));
  /* 12420517 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1242051a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1242051d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12420520 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12420522 je 0x12420545 */
  if (C.zf) goto L_12420545;
  /* 12420524 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12420527 mov ecx, dword ptr [0x12442bb8] */
  ECX = (r32((uint32_t)(0x12442bb8)));
  /* 1242052d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12420530 push edx */
  push32((uint32_t)(EDX));
  /* 12420531 call 0x12420320 */
  push32(0x12420536u); f_12420320();
  /* 12420536 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12420539 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242053c jne 0x12420545 */
  if (!C.zf) goto L_12420545;
  /* 1242053e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_12420545:;
  /* 12420545 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12420548 mov ecx, dword ptr [0x12442bb8] */
  ECX = (r32((uint32_t)(0x12442bb8)));
  /* 1242054e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12420551 push edx */
  push32((uint32_t)(EDX));
  /* 12420552 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12420555 push eax */
  push32((uint32_t)(EAX));
  /* 12420556 call 0x1241f900 */
  push32(0x1242055bu); f_1241f900();
  /* 1242055b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1242055e:;
  /* 1242055e jmp 0x12420467 */
  goto L_12420467;
L_12420563:;
  /* 12420563 push 2 */
  push32((uint32_t)(0x2u));
  /* 12420565 call 0x1241a4e0 */
  push32(0x1242056au); f_1241a4e0();
  /* 1242056a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242056d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420571 jne 0x12420578 */
  if (!C.zf) goto L_12420578;
  /* 12420573 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12420576 jmp 0x1242057b */
  goto L_1242057b;
L_12420578:;
  /* 12420578 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1242057b:;
  /* 1242057b mov esp, ebp */
  ESP = (EBP);
  /* 1242057d pop ebp */
  EBP = (pop32());
  /* 1242057e ret  */
  ESPCHK(0x12420440u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x12420580 (15 bytes, 7 insns) */
void f_12420580(void) {
  FTRACE(0x12420580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12420580 push ebp */
  push32((uint32_t)(EBP));
  /* 12420581 mov ebp, esp */
  EBP = (ESP);
  /* 12420583 push 2 */
  push32((uint32_t)(0x2u));
  /* 12420585 call 0x124159b0 */
  push32(0x1242058au); f_124159b0();
  /* 1242058a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242058d pop ebp */
  EBP = (pop32());
  /* 1242058e ret  */
  ESPCHK(0x12420580u, _esp0);
  ESP += 4; return;
}

/* FUN_10010590 @ 0x12420590 (1007 bytes, 269 insns) */
void f_12420590(void) {
  FTRACE(0x12420590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12420590 push ebp */
  push32((uint32_t)(EBP));
  /* 12420591 mov ebp, esp */
  EBP = (ESP);
  /* 12420593 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12420599 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242059d jl 0x124205a5 */
  if ((C.sf!=C.of)) goto L_124205a5;
  /* 1242059f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124205a3 jle 0x124205ac */
  if ((C.zf||C.sf!=C.of)) goto L_124205ac;
L_124205a5:;
  /* 124205a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124205a7 jmp 0x1242097b */
  goto L_1242097b;
L_124205ac:;
  /* 124205ac push 0x13 */
  push32((uint32_t)(0x13u));
  /* 124205ae call 0x1241a440 */
  push32(0x124205b3u); f_1241a440();
  /* 124205b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124205b6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 124205bd mov eax, dword ptr [0x12442ba4] */
  EAX = (r32((uint32_t)(0x12442ba4)));
  /* 124205c2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124205c5 mov dword ptr [0x12442ba4], eax */
  w32((uint32_t)(0x12442ba4), (EAX));
L_124205ca:;
  /* 124205ca cmp dword ptr [0x12442bb4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442bb4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124205d1 je 0x124205dd */
  if (C.zf) goto L_124205dd;
  /* 124205d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 124205d5 call dword ptr [0x124452e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452e8))), 0x124205dbu);
  /* 124205db jmp 0x124205ca */
  goto L_124205ca;
L_124205dd:;
  /* 124205dd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124205e1 je 0x12420621 */
  if (C.zf) goto L_12420621;
  /* 124205e3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124205e7 je 0x12420601 */
  if (C.zf) goto L_12420601;
  /* 124205e9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124205ec push ecx */
  push32((uint32_t)(ECX));
  /* 124205ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124205f0 push edx */
  push32((uint32_t)(EDX));
  /* 124205f1 call 0x12420980 */
  push32(0x124205f6u); f_12420980();
  /* 124205f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124205f9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 124205ff jmp 0x12420613 */
  goto L_12420613;
L_12420601:;
  /* 12420601 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12420604 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12420607 mov ecx, dword ptr [eax + 0x124414dc] */
  ECX = (r32((uint32_t)(EAX + 0x124414dc)));
  /* 1242060d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_12420613:;
  /* 12420613 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 12420619 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1242061c jmp 0x1242095b */
  goto L_1242095b;
L_12420621:;
  /* 12420621 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 12420628 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1242062f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420633 je 0x12420953 */
  if (C.zf) goto L_12420953;
  /* 12420639 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1242063c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1242063f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420642 jne 0x12420864 */
  if (!C.zf) goto L_12420864;
  /* 12420648 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1242064b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1242064f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420652 jne 0x12420864 */
  if (!C.zf) goto L_12420864;
  /* 12420658 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1242065b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1242065f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420662 jne 0x12420864 */
  if (!C.zf) goto L_12420864;
  /* 12420668 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1242066b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_12420671:;
  /* 12420671 push 0x1243e66c */
  push32((uint32_t)(0x1243e66cu));
  /* 12420676 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1242067c push ecx */
  push32((uint32_t)(ECX));
  /* 1242067d call 0x124227e0 */
  push32(0x12420682u); f_124227e0();
  /* 12420682 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12420685 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1242068b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420692 je 0x124206bd */
  if (C.zf) goto L_124206bd;
  /* 12420694 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1242069a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124206a0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 124206a6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124206ad je 0x124206bd */
  if (C.zf) goto L_124206bd;
  /* 124206af mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 124206b5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124206b8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124206bb jne 0x124206e3 */
  if (!C.zf) goto L_124206e3;
L_124206bd:;
  /* 124206bd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124206c1 je 0x124206dc */
  if (C.zf) goto L_124206dc;
  /* 124206c3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 124206c5 call 0x1241a4e0 */
  push32(0x124206cau); f_1241a4e0();
  /* 124206ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124206cd mov edx, dword ptr [0x12442ba4] */
  EDX = (r32((uint32_t)(0x12442ba4)));
  /* 124206d3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124206d6 mov dword ptr [0x12442ba4], edx */
  w32((uint32_t)(0x12442ba4), (EDX));
L_124206dc:;
  /* 124206dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124206de jmp 0x1242097b */
  goto L_1242097b;
L_124206e3:;
  /* 124206e3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 124206ea jmp 0x124206f5 */
  goto L_124206f5;
L_124206ec:;
  /* 124206ec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124206ef add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124206f2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_124206f5:;
  /* 124206f5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124206f9 jg 0x12420743 */
  if ((!C.zf&&C.sf==C.of)) goto L_12420743;
  /* 124206fb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12420701 push ecx */
  push32((uint32_t)(ECX));
  /* 12420702 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12420708 push edx */
  push32((uint32_t)(EDX));
  /* 12420709 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1242070c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1242070f mov ecx, dword ptr [eax + 0x124414d8] */
  ECX = (r32((uint32_t)(EAX + 0x124414d8)));
  /* 12420715 push ecx */
  push32((uint32_t)(ECX));
  /* 12420716 call 0x124227a0 */
  push32(0x1242071bu); f_124227a0();
  /* 1242071b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242071e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12420720 jne 0x12420741 */
  if (!C.zf) goto L_12420741;
  /* 12420722 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12420725 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12420728 mov eax, dword ptr [edx + 0x124414d8] */
  EAX = (r32((uint32_t)(EDX + 0x124414d8)));
  /* 1242072e push eax */
  push32((uint32_t)(EAX));
  /* 1242072f call 0x12419870 */
  push32(0x12420734u); f_12419870();
  /* 12420734 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12420737 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242073d jne 0x12420741 */
  if (!C.zf) goto L_12420741;
  /* 1242073f jmp 0x12420743 */
  goto L_12420743;
L_12420741:;
  /* 12420741 jmp 0x124206ec */
  goto L_124206ec;
L_12420743:;
  /* 12420743 push 0x1243e668 */
  push32((uint32_t)(0x1243e668u));
  /* 12420748 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1242074e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12420751 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 12420757 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1242075d push edx */
  push32((uint32_t)(EDX));
  /* 1242075e call 0x12422760 */
  push32(0x12420763u); f_12422760();
  /* 12420763 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12420766 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1242076c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420773 jne 0x124207a9 */
  if (!C.zf) goto L_124207a9;
  /* 12420775 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1242077b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1242077e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420781 je 0x124207a9 */
  if (C.zf) goto L_124207a9;
  /* 12420783 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420787 je 0x124207a2 */
  if (C.zf) goto L_124207a2;
  /* 12420789 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1242078b call 0x1241a4e0 */
  push32(0x12420790u); f_1241a4e0();
  /* 12420790 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12420793 mov edx, dword ptr [0x12442ba4] */
  EDX = (r32((uint32_t)(0x12442ba4)));
  /* 12420799 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1242079c mov dword ptr [0x12442ba4], edx */
  w32((uint32_t)(0x12442ba4), (EDX));
L_124207a2:;
  /* 124207a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124207a4 jmp 0x1242097b */
  goto L_1242097b;
L_124207a9:;
  /* 124207a9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124207ad jg 0x124207fa */
  if ((!C.zf&&C.sf==C.of)) goto L_124207fa;
  /* 124207af mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 124207b5 push eax */
  push32((uint32_t)(EAX));
  /* 124207b6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 124207bc push ecx */
  push32((uint32_t)(ECX));
  /* 124207bd lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 124207c3 push edx */
  push32((uint32_t)(EDX));
  /* 124207c4 call 0x1241a260 */
  push32(0x124207c9u); f_1241a260();
  /* 124207c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124207cc mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 124207d2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 124207da lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 124207e0 push ecx */
  push32((uint32_t)(ECX));
  /* 124207e1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124207e4 push edx */
  push32((uint32_t)(EDX));
  /* 124207e5 call 0x12420980 */
  push32(0x124207eau); f_12420980();
  /* 124207ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124207ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124207ef je 0x124207fa */
  if (C.zf) goto L_124207fa;
  /* 124207f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124207f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124207f7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_124207fa:;
  /* 124207fa mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12420800 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12420806 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1242080c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12420812 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12420815 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12420817 je 0x12420828 */
  if (C.zf) goto L_12420828;
  /* 12420819 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1242081f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12420822 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_12420828:;
  /* 12420828 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1242082e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12420831 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12420833 jne 0x12420671 */
  if (!C.zf) goto L_12420671;
  /* 12420839 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242083d je 0x1242084c */
  if (C.zf) goto L_1242084c;
  /* 1242083f call 0x12420b20 */
  push32(0x12420844u); f_12420b20();
  /* 12420844 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1242084a jmp 0x12420856 */
  goto L_12420856;
L_1242084c:;
  /* 1242084c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_12420856:;
  /* 12420856 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1242085c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1242085f jmp 0x12420951 */
  goto L_12420951;
L_12420864:;
  /* 12420864 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12420867 push edx */
  push32((uint32_t)(EDX));
  /* 12420868 push 0 */
  push32((uint32_t)(0x0u));
  /* 1242086a push 0 */
  push32((uint32_t)(0x0u));
  /* 1242086c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 12420872 push eax */
  push32((uint32_t)(EAX));
  /* 12420873 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12420876 push ecx */
  push32((uint32_t)(ECX));
  /* 12420877 call 0x12420c20 */
  push32(0x1242087cu); f_12420c20();
  /* 1242087c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242087f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12420882 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420886 je 0x12420951 */
  if (C.zf) goto L_12420951;
  /* 1242088c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12420893 jmp 0x1242089e */
  goto L_1242089e;
L_12420895:;
  /* 12420895 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12420898 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242089b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1242089e:;
  /* 1242089e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124208a2 jg 0x12420900 */
  if ((!C.zf&&C.sf==C.of)) goto L_12420900;
  /* 124208a4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124208a8 je 0x124208fe */
  if (C.zf) goto L_124208fe;
  /* 124208aa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 124208ad imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124208b0 mov ecx, dword ptr [eax + 0x124414dc] */
  ECX = (r32((uint32_t)(EAX + 0x124414dc)));
  /* 124208b6 push ecx */
  push32((uint32_t)(ECX));
  /* 124208b7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 124208bd push edx */
  push32((uint32_t)(EDX));
  /* 124208be call 0x124226d0 */
  push32(0x124208c3u); f_124226d0();
  /* 124208c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124208c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124208c8 je 0x124208f5 */
  if (C.zf) goto L_124208f5;
  /* 124208ca lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 124208d0 push eax */
  push32((uint32_t)(EAX));
  /* 124208d1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124208d4 push ecx */
  push32((uint32_t)(ECX));
  /* 124208d5 call 0x12420980 */
  push32(0x124208dau); f_12420980();
  /* 124208da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124208dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124208df je 0x124208ec */
  if (C.zf) goto L_124208ec;
  /* 124208e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124208e4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124208e7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 124208ea jmp 0x124208f3 */
  goto L_124208f3;
L_124208ec:;
  /* 124208ec mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_124208f3:;
  /* 124208f3 jmp 0x124208fe */
  goto L_124208fe;
L_124208f5:;
  /* 124208f5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124208f8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124208fb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_124208fe:;
  /* 124208fe jmp 0x12420895 */
  goto L_12420895;
L_12420900:;
  /* 12420900 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420904 je 0x1242092b */
  if (C.zf) goto L_1242092b;
  /* 12420906 call 0x12420b20 */
  push32(0x1242090bu); f_12420b20();
  /* 1242090b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1242090e push 2 */
  push32((uint32_t)(0x2u));
  /* 12420910 mov ecx, dword ptr [0x124414dc] */
  ECX = (r32((uint32_t)(0x124414dc)));
  /* 12420916 push ecx */
  push32((uint32_t)(ECX));
  /* 12420917 call 0x124174d0 */
  push32(0x1242091cu); f_124174d0();
  /* 1242091c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242091f mov dword ptr [0x124414dc], 0 */
  w32((uint32_t)(0x124414dc), (0x0u));
  /* 12420929 jmp 0x12420951 */
  goto L_12420951;
L_1242092b:;
  /* 1242092b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242092f je 0x1242093e */
  if (C.zf) goto L_1242093e;
  /* 12420931 call 0x12420b20 */
  push32(0x12420936u); f_12420b20();
  /* 12420936 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1242093c jmp 0x12420948 */
  goto L_12420948;
L_1242093e:;
  /* 1242093e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_12420948:;
  /* 12420948 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1242094e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12420951:;
  /* 12420951 jmp 0x1242095b */
  goto L_1242095b;
L_12420953:;
  /* 12420953 call 0x12420b20 */
  push32(0x12420958u); f_12420b20();
  /* 12420958 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1242095b:;
  /* 1242095b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242095f je 0x12420978 */
  if (C.zf) goto L_12420978;
  /* 12420961 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12420963 call 0x1241a4e0 */
  push32(0x12420968u); f_1241a4e0();
  /* 12420968 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242096b mov eax, dword ptr [0x12442ba4] */
  EAX = (r32((uint32_t)(0x12442ba4)));
  /* 12420970 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12420973 mov dword ptr [0x12442ba4], eax */
  w32((uint32_t)(0x12442ba4), (EAX));
L_12420978:;
  /* 12420978 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1242097b:;
  /* 1242097b mov esp, ebp */
  ESP = (EBP);
  /* 1242097d pop ebp */
  EBP = (pop32());
  /* 1242097e ret  */
  ESPCHK(0x12420590u, _esp0);
  ESP += 4; return;
}

/* FUN_10010980 @ 0x12420980 (403 bytes, 117 insns) */
void f_12420980(void) {
  FTRACE(0x12420980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12420980 push ebp */
  push32((uint32_t)(EBP));
  /* 12420981 mov ebp, esp */
  EBP = (ESP);
  /* 12420983 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12420989 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242098c push eax */
  push32((uint32_t)(EAX));
  /* 1242098d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 12420993 push ecx */
  push32((uint32_t)(ECX));
  /* 12420994 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1242099a push edx */
  push32((uint32_t)(EDX));
  /* 1242099b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 124209a1 push eax */
  push32((uint32_t)(EAX));
  /* 124209a2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124209a5 push ecx */
  push32((uint32_t)(ECX));
  /* 124209a6 call 0x12420c20 */
  push32(0x124209abu); f_12420c20();
  /* 124209ab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124209ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124209b0 jne 0x124209b9 */
  if (!C.zf) goto L_124209b9;
  /* 124209b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124209b4 jmp 0x12420b0f */
  goto L_12420b0f;
L_124209b9:;
  /* 124209b9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 124209be push 0x1243e670 */
  push32((uint32_t)(0x1243e670u));
  /* 124209c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 124209c5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 124209cb push edx */
  push32((uint32_t)(EDX));
  /* 124209cc call 0x12419870 */
  push32(0x124209d1u); f_12419870();
  /* 124209d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124209d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124209d7 push eax */
  push32((uint32_t)(EAX));
  /* 124209d8 call 0x12416a40 */
  push32(0x124209ddu); f_12416a40();
  /* 124209dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124209e0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124209e3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124209e7 jne 0x124209f0 */
  if (!C.zf) goto L_124209f0;
  /* 124209e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124209eb jmp 0x12420b0f */
  goto L_12420b0f;
L_124209f0:;
  /* 124209f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124209f3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124209f6 mov ecx, dword ptr [eax + 0x124414dc] */
  ECX = (r32((uint32_t)(EAX + 0x124414dc)));
  /* 124209fc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124209ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12420a02 mov eax, dword ptr [edx*4 + 0x12442a20] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12442a20)));
  /* 12420a09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12420a0c push 6 */
  push32((uint32_t)(0x6u));
  /* 12420a0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12420a11 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12420a14 add ecx, 0x12442a70 */
  { uint32_t _a=(ECX),_b=(0x12442a70u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12420a1a push ecx */
  push32((uint32_t)(ECX));
  /* 12420a1b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 12420a1e push edx */
  push32((uint32_t)(EDX));
  /* 12420a1f call 0x1241d320 */
  push32(0x12420a24u); f_1241d320();
  /* 12420a24 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12420a27 mov eax, dword ptr [0x12442a38] */
  EAX = (r32((uint32_t)(0x12442a38)));
  /* 12420a2c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12420a2f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 12420a35 push ecx */
  push32((uint32_t)(ECX));
  /* 12420a36 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12420a39 push edx */
  push32((uint32_t)(EDX));
  /* 12420a3a call 0x124199f0 */
  push32(0x12420a3fu); f_124199f0();
  /* 12420a3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12420a42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12420a45 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12420a48 mov dword ptr [ecx + 0x124414dc], eax */
  w32((uint32_t)(ECX + 0x124414dc), (EAX));
  /* 12420a4e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 12420a54 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12420a5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12420a5d mov dword ptr [eax*4 + 0x12442a20], edx */
  w32((uint32_t)(EAX*4 + 0x12442a20), (EDX));
  /* 12420a64 push 6 */
  push32((uint32_t)(0x6u));
  /* 12420a66 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 12420a6c push ecx */
  push32((uint32_t)(ECX));
  /* 12420a6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12420a70 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12420a73 add edx, 0x12442a70 */
  { uint32_t _a=(EDX),_b=(0x12442a70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12420a79 push edx */
  push32((uint32_t)(EDX));
  /* 12420a7a call 0x1241d320 */
  push32(0x12420a7fu); f_1241d320();
  /* 12420a7f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12420a82 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420a86 jne 0x12420a93 */
  if (!C.zf) goto L_12420a93;
  /* 12420a88 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12420a8e mov dword ptr [0x12442a38], eax */
  w32((uint32_t)(0x12442a38), (EAX));
L_12420a93:;
  /* 12420a93 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420a97 jne 0x12420aa5 */
  if (!C.zf) goto L_12420aa5;
  /* 12420a99 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12420a9f mov dword ptr [0x12442a3c], ecx */
  w32((uint32_t)(0x12442a3c), (ECX));
L_12420aa5:;
  /* 12420aa5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12420aa8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12420aab call dword ptr [edx + 0x124414e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x124414e0))), 0x12420ab1u);
  /* 12420ab1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12420ab3 je 0x12420aec */
  if (C.zf) goto L_12420aec;
  /* 12420ab5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12420ab8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12420abb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12420abe mov dword ptr [eax + 0x124414dc], ecx */
  w32((uint32_t)(EAX + 0x124414dc), (ECX));
  /* 12420ac4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12420ac6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12420ac9 push edx */
  push32((uint32_t)(EDX));
  /* 12420aca call 0x124174d0 */
  push32(0x12420acfu); f_124174d0();
  /* 12420acf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12420ad2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12420ad5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12420ad8 mov dword ptr [eax*4 + 0x12442a20], ecx */
  w32((uint32_t)(EAX*4 + 0x12442a20), (ECX));
  /* 12420adf mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12420ae2 mov dword ptr [0x12442a38], edx */
  w32((uint32_t)(0x12442a38), (EDX));
  /* 12420ae8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12420aea jmp 0x12420b0f */
  goto L_12420b0f;
L_12420aec:;
  /* 12420aec cmp dword ptr [ebp - 0xc], 0x124413c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x124413c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420af3 je 0x12420b03 */
  if (C.zf) goto L_12420b03;
  /* 12420af5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12420af7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12420afa push eax */
  push32((uint32_t)(EAX));
  /* 12420afb call 0x124174d0 */
  push32(0x12420b00u); f_124174d0();
  /* 12420b00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12420b03:;
  /* 12420b03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12420b06 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12420b09 mov eax, dword ptr [ecx + 0x124414dc] */
  EAX = (r32((uint32_t)(ECX + 0x124414dc)));
L_12420b0f:;
  /* 12420b0f mov esp, ebp */
  ESP = (EBP);
  /* 12420b11 pop ebp */
  EBP = (pop32());
  /* 12420b12 ret  */
  ESPCHK(0x12420980u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b20 @ 0x12420b20 (256 bytes, 72 insns) */
void f_12420b20(void) {
  FTRACE(0x12420b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12420b20 push ebp */
  push32((uint32_t)(EBP));
  /* 12420b21 mov ebp, esp */
  EBP = (ESP);
  /* 12420b23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12420b26 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12420b2d cmp dword ptr [0x124414dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124414dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420b34 jne 0x12420b54 */
  if (!C.zf) goto L_12420b54;
  /* 12420b36 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 12420b3b push 0x1243e670 */
  push32((uint32_t)(0x1243e670u));
  /* 12420b40 push 2 */
  push32((uint32_t)(0x2u));
  /* 12420b42 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 12420b47 call 0x12416a40 */
  push32(0x12420b4cu); f_12416a40();
  /* 12420b4c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12420b4f mov dword ptr [0x124414dc], eax */
  w32((uint32_t)(0x124414dc), (EAX));
L_12420b54:;
  /* 12420b54 mov eax, dword ptr [0x124414dc] */
  EAX = (r32((uint32_t)(0x124414dc)));
  /* 12420b59 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12420b5c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12420b63 jmp 0x12420b6e */
  goto L_12420b6e;
L_12420b65:;
  /* 12420b65 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12420b68 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12420b6b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12420b6e:;
  /* 12420b6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12420b71 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12420b74 mov eax, dword ptr [edx + 0x124414dc] */
  EAX = (r32((uint32_t)(EDX + 0x124414dc)));
  /* 12420b7a push eax */
  push32((uint32_t)(EAX));
  /* 12420b7b push 0x1243e67c */
  push32((uint32_t)(0x1243e67cu));
  /* 12420b80 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12420b83 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12420b86 mov edx, dword ptr [ecx + 0x124414d8] */
  EDX = (r32((uint32_t)(ECX + 0x124414d8)));
  /* 12420b8c push edx */
  push32((uint32_t)(EDX));
  /* 12420b8d push 3 */
  push32((uint32_t)(0x3u));
  /* 12420b8f mov eax, dword ptr [0x124414dc] */
  EAX = (r32((uint32_t)(0x124414dc)));
  /* 12420b94 push eax */
  push32((uint32_t)(EAX));
  /* 12420b95 call 0x12420dc0 */
  push32(0x12420b9au); f_12420dc0();
  /* 12420b9a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12420b9d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420ba1 jge 0x12420be9 */
  if ((C.sf==C.of)) goto L_12420be9;
  /* 12420ba3 push 0x1243e668 */
  push32((uint32_t)(0x1243e668u));
  /* 12420ba8 mov ecx, dword ptr [0x124414dc] */
  ECX = (r32((uint32_t)(0x124414dc)));
  /* 12420bae push ecx */
  push32((uint32_t)(ECX));
  /* 12420baf call 0x12419a00 */
  push32(0x12420bb4u); f_12419a00();
  /* 12420bb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12420bb7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12420bba add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12420bbd imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12420bc0 mov eax, dword ptr [edx + 0x124414dc] */
  EAX = (r32((uint32_t)(EDX + 0x124414dc)));
  /* 12420bc6 push eax */
  push32((uint32_t)(EAX));
  /* 12420bc7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12420bca imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12420bcd mov edx, dword ptr [ecx + 0x124414dc] */
  EDX = (r32((uint32_t)(ECX + 0x124414dc)));
  /* 12420bd3 push edx */
  push32((uint32_t)(EDX));
  /* 12420bd4 call 0x124226d0 */
  push32(0x12420bd9u); f_124226d0();
  /* 12420bd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12420bdc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12420bde je 0x12420be7 */
  if (C.zf) goto L_12420be7;
  /* 12420be0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12420be7:;
  /* 12420be7 jmp 0x12420c17 */
  goto L_12420c17;
L_12420be9:;
  /* 12420be9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420bed jne 0x12420bf6 */
  if (!C.zf) goto L_12420bf6;
  /* 12420bef mov eax, dword ptr [0x124414dc] */
  EAX = (r32((uint32_t)(0x124414dc)));
  /* 12420bf4 jmp 0x12420c1c */
  goto L_12420c1c;
L_12420bf6:;
  /* 12420bf6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12420bf8 mov eax, dword ptr [0x124414dc] */
  EAX = (r32((uint32_t)(0x124414dc)));
  /* 12420bfd push eax */
  push32((uint32_t)(EAX));
  /* 12420bfe call 0x124174d0 */
  push32(0x12420c03u); f_124174d0();
  /* 12420c03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12420c06 mov dword ptr [0x124414dc], 0 */
  w32((uint32_t)(0x124414dc), (0x0u));
  /* 12420c10 mov eax, dword ptr [0x124414f4] */
  EAX = (r32((uint32_t)(0x124414f4)));
  /* 12420c15 jmp 0x12420c1c */
  goto L_12420c1c;
L_12420c17:;
  /* 12420c17 jmp 0x12420b65 */
  goto L_12420b65;
L_12420c1c:;
  /* 12420c1c mov esp, ebp */
  ESP = (EBP);
  /* 12420c1e pop ebp */
  EBP = (pop32());
  /* 12420c1f ret  */
  ESPCHK(0x12420b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c20 @ 0x12420c20 (388 bytes, 115 insns) */
void f_12420c20(void) {
  FTRACE(0x12420c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12420c20 push ebp */
  push32((uint32_t)(EBP));
  /* 12420c21 mov ebp, esp */
  EBP = (ESP);
  /* 12420c23 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12420c29 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420c2d jne 0x12420c36 */
  if (!C.zf) goto L_12420c36;
  /* 12420c2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12420c31 jmp 0x12420da0 */
  goto L_12420da0;
L_12420c36:;
  /* 12420c36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12420c39 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12420c3c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420c3f jne 0x12420c90 */
  if (!C.zf) goto L_12420c90;
  /* 12420c41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12420c44 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12420c48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12420c4a jne 0x12420c90 */
  if (!C.zf) goto L_12420c90;
  /* 12420c4c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12420c4f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 12420c52 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12420c55 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 12420c59 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420c5d je 0x12420c79 */
  if (C.zf) goto L_12420c79;
  /* 12420c5f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12420c62 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 12420c67 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12420c6a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 12420c70 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12420c73 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_12420c79:;
  /* 12420c79 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420c7d je 0x12420c88 */
  if (C.zf) goto L_12420c88;
  /* 12420c7f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12420c82 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12420c88:;
  /* 12420c88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12420c8b jmp 0x12420da0 */
  goto L_12420da0;
L_12420c90:;
  /* 12420c90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12420c93 push ecx */
  push32((uint32_t)(ECX));
  /* 12420c94 push 0x12441450 */
  push32((uint32_t)(0x12441450u));
  /* 12420c99 call 0x124226d0 */
  push32(0x12420c9eu); f_124226d0();
  /* 12420c9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12420ca1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12420ca3 je 0x12420d58 */
  if (C.zf) goto L_12420d58;
  /* 12420ca9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12420cac push edx */
  push32((uint32_t)(EDX));
  /* 12420cad push 0x124413cc */
  push32((uint32_t)(0x124413ccu));
  /* 12420cb2 call 0x124226d0 */
  push32(0x12420cb7u); f_124226d0();
  /* 12420cb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12420cba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12420cbc je 0x12420d58 */
  if (C.zf) goto L_12420d58;
  /* 12420cc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12420cc5 push eax */
  push32((uint32_t)(EAX));
  /* 12420cc6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 12420ccc push ecx */
  push32((uint32_t)(ECX));
  /* 12420ccd call 0x12420e10 */
  push32(0x12420cd2u); f_12420e10();
  /* 12420cd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12420cd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12420cd7 je 0x12420ce0 */
  if (C.zf) goto L_12420ce0;
  /* 12420cd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12420cdb jmp 0x12420da0 */
  goto L_12420da0;
L_12420ce0:;
  /* 12420ce0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 12420ce6 push edx */
  push32((uint32_t)(EDX));
  /* 12420ce7 push 0x12442a48 */
  push32((uint32_t)(0x12442a48u));
  /* 12420cec lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 12420cf2 push eax */
  push32((uint32_t)(EAX));
  /* 12420cf3 call 0x12422820 */
  push32(0x12420cf8u); f_12422820();
  /* 12420cf8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12420cfb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12420cfd jne 0x12420d06 */
  if (!C.zf) goto L_12420d06;
  /* 12420cff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12420d01 jmp 0x12420da0 */
  goto L_12420da0;
L_12420d06:;
  /* 12420d06 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12420d08 mov cx, word ptr [0x12442a4c] */
  CX = (r16((uint32_t)(0x12442a4c)));
  /* 12420d0f mov dword ptr [0x12442a50], ecx */
  w32((uint32_t)(0x12442a50), (ECX));
  /* 12420d15 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 12420d1b push edx */
  push32((uint32_t)(EDX));
  /* 12420d1c push 0x12441450 */
  push32((uint32_t)(0x12441450u));
  /* 12420d21 call 0x12420f70 */
  push32(0x12420d26u); f_12420f70();
  /* 12420d26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12420d29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12420d2c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12420d2f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12420d31 je 0x12420d46 */
  if (C.zf) goto L_12420d46;
  /* 12420d33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12420d36 push edx */
  push32((uint32_t)(EDX));
  /* 12420d37 push 0x124413cc */
  push32((uint32_t)(0x124413ccu));
  /* 12420d3c call 0x124199f0 */
  push32(0x12420d41u); f_124199f0();
  /* 12420d41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12420d44 jmp 0x12420d58 */
  goto L_12420d58;
L_12420d46:;
  /* 12420d46 push 0x12441450 */
  push32((uint32_t)(0x12441450u));
  /* 12420d4b push 0x124413cc */
  push32((uint32_t)(0x124413ccu));
  /* 12420d50 call 0x124199f0 */
  push32(0x12420d55u); f_124199f0();
  /* 12420d55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12420d58:;
  /* 12420d58 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420d5c je 0x12420d71 */
  if (C.zf) goto L_12420d71;
  /* 12420d5e push 6 */
  push32((uint32_t)(0x6u));
  /* 12420d60 push 0x12442a48 */
  push32((uint32_t)(0x12442a48u));
  /* 12420d65 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12420d68 push eax */
  push32((uint32_t)(EAX));
  /* 12420d69 call 0x1241d320 */
  push32(0x12420d6eu); f_1241d320();
  /* 12420d6e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12420d71:;
  /* 12420d71 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420d75 je 0x12420d8a */
  if (C.zf) goto L_12420d8a;
  /* 12420d77 push 4 */
  push32((uint32_t)(0x4u));
  /* 12420d79 push 0x12442a50 */
  push32((uint32_t)(0x12442a50u));
  /* 12420d7e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12420d81 push ecx */
  push32((uint32_t)(ECX));
  /* 12420d82 call 0x1241d320 */
  push32(0x12420d87u); f_1241d320();
  /* 12420d87 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12420d8a:;
  /* 12420d8a push 0x12441450 */
  push32((uint32_t)(0x12441450u));
  /* 12420d8f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12420d92 push edx */
  push32((uint32_t)(EDX));
  /* 12420d93 call 0x124199f0 */
  push32(0x12420d98u); f_124199f0();
  /* 12420d98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12420d9b mov eax, 0x12441450 */
  EAX = (0x12441450u);
L_12420da0:;
  /* 12420da0 mov esp, ebp */
  ESP = (EBP);
  /* 12420da2 pop ebp */
  EBP = (pop32());
  /* 12420da3 ret  */
  ESPCHK(0x12420c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10010db0 @ 0x12420db0 (7 bytes, 5 insns) */
void f_12420db0(void) {
  FTRACE(0x12420db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12420db0 push ebp */
  push32((uint32_t)(EBP));
  /* 12420db1 mov ebp, esp */
  EBP = (ESP);
  /* 12420db3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12420db5 pop ebp */
  EBP = (pop32());
  /* 12420db6 ret  */
  ESPCHK(0x12420db0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x12420dc0 (79 bytes, 28 insns) */
void f_12420dc0(void) {
  FTRACE(0x12420dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12420dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12420dc1 mov ebp, esp */
  EBP = (ESP);
  /* 12420dc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12420dc6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12420dc9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12420dcc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12420dd3 jmp 0x12420dde */
  goto L_12420dde;
L_12420dd5:;
  /* 12420dd5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12420dd8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12420ddb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12420dde:;
  /* 12420dde mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12420de1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420de4 jge 0x12420e04 */
  if ((C.sf==C.of)) goto L_12420e04;
  /* 12420de6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12420de9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12420dec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12420def mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12420df2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12420df5 push edx */
  push32((uint32_t)(EDX));
  /* 12420df6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12420df9 push eax */
  push32((uint32_t)(EAX));
  /* 12420dfa call 0x12419a00 */
  push32(0x12420dffu); f_12419a00();
  /* 12420dff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12420e02 jmp 0x12420dd5 */
  goto L_12420dd5;
L_12420e04:;
  /* 12420e04 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12420e0b mov esp, ebp */
  ESP = (EBP);
  /* 12420e0d pop ebp */
  EBP = (pop32());
  /* 12420e0e ret  */
  ESPCHK(0x12420dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e10 @ 0x12420e10 (349 bytes, 122 insns) */
void f_12420e10(void) {
  FTRACE(0x12420e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12420e10 push ebp */
  push32((uint32_t)(EBP));
  /* 12420e11 mov ebp, esp */
  EBP = (ESP);
  /* 12420e13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12420e16 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 12420e1b push 0 */
  push32((uint32_t)(0x0u));
  /* 12420e1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12420e20 push eax */
  push32((uint32_t)(EAX));
  /* 12420e21 call 0x1241a7b0 */
  push32(0x12420e26u); f_1241a7b0();
  /* 12420e26 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12420e29 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12420e2c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12420e2f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12420e31 jne 0x12420e3a */
  if (!C.zf) goto L_12420e3a;
  /* 12420e33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12420e35 jmp 0x12420f69 */
  goto L_12420f69;
L_12420e3a:;
  /* 12420e3a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12420e3d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12420e40 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420e43 jne 0x12420e70 */
  if (!C.zf) goto L_12420e70;
  /* 12420e45 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12420e48 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12420e4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12420e4e je 0x12420e70 */
  if (C.zf) goto L_12420e70;
  /* 12420e50 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12420e53 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12420e56 push ecx */
  push32((uint32_t)(ECX));
  /* 12420e57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12420e5a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12420e60 push edx */
  push32((uint32_t)(EDX));
  /* 12420e61 call 0x124199f0 */
  push32(0x12420e66u); f_124199f0();
  /* 12420e66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12420e69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12420e6b jmp 0x12420f69 */
  goto L_12420f69;
L_12420e70:;
  /* 12420e70 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12420e77 jmp 0x12420e82 */
  goto L_12420e82;
L_12420e79:;
  /* 12420e79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12420e7c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12420e7f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12420e82:;
  /* 12420e82 push 0x1243e680 */
  push32((uint32_t)(0x1243e680u));
  /* 12420e87 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12420e8a push ecx */
  push32((uint32_t)(ECX));
  /* 12420e8b call 0x12422760 */
  push32(0x12420e90u); f_12422760();
  /* 12420e90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12420e93 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12420e96 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420e9a jne 0x12420ea4 */
  if (!C.zf) goto L_12420ea4;
  /* 12420e9c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12420e9f jmp 0x12420f69 */
  goto L_12420f69;
L_12420ea4:;
  /* 12420ea4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12420ea7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12420eaa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12420eac mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12420eaf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420eb3 jne 0x12420eda */
  if (!C.zf) goto L_12420eda;
  /* 12420eb5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420eb9 jge 0x12420eda */
  if ((C.sf==C.of)) goto L_12420eda;
  /* 12420ebb movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12420ebf cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420ec2 je 0x12420eda */
  if (C.zf) goto L_12420eda;
  /* 12420ec4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12420ec7 push edx */
  push32((uint32_t)(EDX));
  /* 12420ec8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12420ecb push eax */
  push32((uint32_t)(EAX));
  /* 12420ecc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12420ecf push ecx */
  push32((uint32_t)(ECX));
  /* 12420ed0 call 0x1241a260 */
  push32(0x12420ed5u); f_1241a260();
  /* 12420ed5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12420ed8 jmp 0x12420f40 */
  goto L_12420f40;
L_12420eda:;
  /* 12420eda cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420ede jne 0x12420f08 */
  if (!C.zf) goto L_12420f08;
  /* 12420ee0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420ee4 jge 0x12420f08 */
  if ((C.sf==C.of)) goto L_12420f08;
  /* 12420ee6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12420eea cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420eed je 0x12420f08 */
  if (C.zf) goto L_12420f08;
  /* 12420eef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12420ef2 push eax */
  push32((uint32_t)(EAX));
  /* 12420ef3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12420ef6 push ecx */
  push32((uint32_t)(ECX));
  /* 12420ef7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12420efa add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12420efd push edx */
  push32((uint32_t)(EDX));
  /* 12420efe call 0x1241a260 */
  push32(0x12420f03u); f_1241a260();
  /* 12420f03 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12420f06 jmp 0x12420f40 */
  goto L_12420f40;
L_12420f08:;
  /* 12420f08 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420f0c jne 0x12420f3b */
  if (!C.zf) goto L_12420f3b;
  /* 12420f0e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12420f12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12420f14 je 0x12420f1f */
  if (C.zf) goto L_12420f1f;
  /* 12420f16 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12420f1a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420f1d jne 0x12420f3b */
  if (!C.zf) goto L_12420f3b;
L_12420f1f:;
  /* 12420f1f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12420f22 push edx */
  push32((uint32_t)(EDX));
  /* 12420f23 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12420f26 push eax */
  push32((uint32_t)(EAX));
  /* 12420f27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12420f2a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12420f30 push ecx */
  push32((uint32_t)(ECX));
  /* 12420f31 call 0x1241a260 */
  push32(0x12420f36u); f_1241a260();
  /* 12420f36 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12420f39 jmp 0x12420f40 */
  goto L_12420f40;
L_12420f3b:;
  /* 12420f3b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12420f3e jmp 0x12420f69 */
  goto L_12420f69;
L_12420f40:;
  /* 12420f40 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12420f44 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420f47 jne 0x12420f4b */
  if (!C.zf) goto L_12420f4b;
  /* 12420f49 jmp 0x12420f67 */
  goto L_12420f67;
L_12420f4b:;
  /* 12420f4b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12420f4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12420f51 jne 0x12420f55 */
  if (!C.zf) goto L_12420f55;
  /* 12420f53 jmp 0x12420f67 */
  goto L_12420f67;
L_12420f55:;
  /* 12420f55 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12420f58 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12420f5b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 12420f5f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12420f62 jmp 0x12420e79 */
  goto L_12420e79;
L_12420f67:;
  /* 12420f67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12420f69:;
  /* 12420f69 mov esp, ebp */
  ESP = (EBP);
  /* 12420f6b pop ebp */
  EBP = (pop32());
  /* 12420f6c ret  */
  ESPCHK(0x12420e10u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x12420f70 (101 bytes, 36 insns) */
void f_12420f70(void) {
  FTRACE(0x12420f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12420f70 push ebp */
  push32((uint32_t)(EBP));
  /* 12420f71 mov ebp, esp */
  EBP = (ESP);
  /* 12420f73 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12420f76 push eax */
  push32((uint32_t)(EAX));
  /* 12420f77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12420f7a push ecx */
  push32((uint32_t)(ECX));
  /* 12420f7b call 0x124199f0 */
  push32(0x12420f80u); f_124199f0();
  /* 12420f80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12420f83 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12420f86 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 12420f8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12420f8c je 0x12420fa8 */
  if (C.zf) goto L_12420fa8;
  /* 12420f8e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12420f91 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12420f94 push ecx */
  push32((uint32_t)(ECX));
  /* 12420f95 push 0x1243e688 */
  push32((uint32_t)(0x1243e688u));
  /* 12420f9a push 2 */
  push32((uint32_t)(0x2u));
  /* 12420f9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12420f9f push edx */
  push32((uint32_t)(EDX));
  /* 12420fa0 call 0x12420dc0 */
  push32(0x12420fa5u); f_12420dc0();
  /* 12420fa5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12420fa8:;
  /* 12420fa8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12420fab movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 12420fb2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12420fb4 je 0x12420fd3 */
  if (C.zf) goto L_12420fd3;
  /* 12420fb6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12420fb9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12420fbf push edx */
  push32((uint32_t)(EDX));
  /* 12420fc0 push 0x1243e684 */
  push32((uint32_t)(0x1243e684u));
  /* 12420fc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12420fc7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12420fca push eax */
  push32((uint32_t)(EAX));
  /* 12420fcb call 0x12420dc0 */
  push32(0x12420fd0u); f_12420dc0();
  /* 12420fd0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12420fd3:;
  /* 12420fd3 pop ebp */
  EBP = (pop32());
  /* 12420fd4 ret  */
  ESPCHK(0x12420f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10010fe0 @ 0x12420fe0 (130 bytes, 50 insns) */
void f_12420fe0(void) {
  FTRACE(0x12420fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12420fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 12420fe1 mov ebp, esp */
  EBP = (ESP);
  /* 12420fe3 push ecx */
  push32((uint32_t)(ECX));
  /* 12420fe4 push ebx */
  push32((uint32_t)(EBX));
  /* 12420fe5 push esi */
  push32((uint32_t)(ESI));
  /* 12420fe6 push edi */
  push32((uint32_t)(EDI));
  /* 12420fe7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12420fee:;
  /* 12420fee cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12420ff2 jne 0x12421012 */
  if (!C.zf) goto L_12421012;
  /* 12420ff4 push 0x1243e698 */
  push32((uint32_t)(0x1243e698u));
  /* 12420ff9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12420ffb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 12420ffd push 0x1243e68c */
  push32((uint32_t)(0x1243e68cu));
  /* 12421002 push 2 */
  push32((uint32_t)(0x2u));
  /* 12421004 call 0x12415b00 */
  push32(0x12421009u); f_12415b00();
  /* 12421009 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242100c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242100f jne 0x12421012 */
  if (!C.zf) goto L_12421012;
  /* 12421011 int3  */
  x86_unimpl("int3 @ 0x12421011");
L_12421012:;
  /* 12421012 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12421014 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12421016 jne 0x12420fee */
  if (!C.zf) goto L_12420fee;
  /* 12421018 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242101b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1242101e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 12421021 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12421023 je 0x12421031 */
  if (C.zf) goto L_12421031;
  /* 12421025 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421028 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1242102f jmp 0x12421058 */
  goto L_12421058;
L_12421031:;
  /* 12421031 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421034 push ecx */
  push32((uint32_t)(ECX));
  /* 12421035 call 0x1241f850 */
  push32(0x1242103au); f_1241f850();
  /* 1242103a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242103d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421040 push edx */
  push32((uint32_t)(EDX));
  /* 12421041 call 0x12421070 */
  push32(0x12421046u); f_12421070();
  /* 12421046 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421049 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1242104c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242104f push eax */
  push32((uint32_t)(EAX));
  /* 12421050 call 0x1241f8c0 */
  push32(0x12421055u); f_1241f8c0();
  /* 12421055 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12421058:;
  /* 12421058 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1242105b pop edi */
  EDI = (pop32());
  /* 1242105c pop esi */
  ESI = (pop32());
  /* 1242105d pop ebx */
  EBX = (pop32());
  /* 1242105e mov esp, ebp */
  ESP = (EBP);
  /* 12421060 pop ebp */
  EBP = (pop32());
  /* 12421061 ret  */
  ESPCHK(0x12420fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011070 @ 0x12421070 (190 bytes, 67 insns) */
void f_12421070(void) {
  FTRACE(0x12421070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12421070 push ebp */
  push32((uint32_t)(EBP));
  /* 12421071 mov ebp, esp */
  EBP = (ESP);
  /* 12421073 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12421076 push ebx */
  push32((uint32_t)(EBX));
  /* 12421077 push esi */
  push32((uint32_t)(ESI));
  /* 12421078 push edi */
  push32((uint32_t)(EDI));
  /* 12421079 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12421080 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421083 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12421086:;
  /* 12421086 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242108a jne 0x124210aa */
  if (!C.zf) goto L_124210aa;
  /* 1242108c push 0x1243e538 */
  push32((uint32_t)(0x1243e538u));
  /* 12421091 push 0 */
  push32((uint32_t)(0x0u));
  /* 12421093 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 12421095 push 0x1243e68c */
  push32((uint32_t)(0x1243e68cu));
  /* 1242109a push 2 */
  push32((uint32_t)(0x2u));
  /* 1242109c call 0x12415b00 */
  push32(0x124210a1u); f_12415b00();
  /* 124210a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124210a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124210a7 jne 0x124210aa */
  if (!C.zf) goto L_124210aa;
  /* 124210a9 int3  */
  x86_unimpl("int3 @ 0x124210a9");
L_124210aa:;
  /* 124210aa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124210ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124210ae jne 0x12421086 */
  if (!C.zf) goto L_12421086;
  /* 124210b0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124210b3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 124210b6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 124210bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124210bd je 0x1242111a */
  if (C.zf) goto L_1242111a;
  /* 124210bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124210c2 push ecx */
  push32((uint32_t)(ECX));
  /* 124210c3 call 0x12420370 */
  push32(0x124210c8u); f_12420370();
  /* 124210c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124210cb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124210ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124210d1 push edx */
  push32((uint32_t)(EDX));
  /* 124210d2 call 0x124236f0 */
  push32(0x124210d7u); f_124236f0();
  /* 124210d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124210da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124210dd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 124210e0 push ecx */
  push32((uint32_t)(ECX));
  /* 124210e1 call 0x124235c0 */
  push32(0x124210e6u); f_124235c0();
  /* 124210e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124210e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124210eb jge 0x124210f6 */
  if ((C.sf==C.of)) goto L_124210f6;
  /* 124210ed mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 124210f4 jmp 0x1242111a */
  goto L_1242111a;
L_124210f6:;
  /* 124210f6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124210f9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124210fd je 0x1242111a */
  if (C.zf) goto L_1242111a;
  /* 124210ff push 2 */
  push32((uint32_t)(0x2u));
  /* 12421101 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12421104 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12421107 push ecx */
  push32((uint32_t)(ECX));
  /* 12421108 call 0x124174d0 */
  push32(0x1242110du); f_124174d0();
  /* 1242110d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421110 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12421113 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_1242111a:;
  /* 1242111a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1242111d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 12421124 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12421127 pop edi */
  EDI = (pop32());
  /* 12421128 pop esi */
  ESI = (pop32());
  /* 12421129 pop ebx */
  EBX = (pop32());
  /* 1242112a mov esp, ebp */
  ESP = (EBP);
  /* 1242112c pop ebp */
  EBP = (pop32());
  /* 1242112d ret  */
  ESPCHK(0x12421070u, _esp0);
  ESP += 4; return;
}

/* FUN_10011130 @ 0x12421130 (210 bytes, 63 insns) */
void f_12421130(void) {
  FTRACE(0x12421130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12421130 push ebp */
  push32((uint32_t)(EBP));
  /* 12421131 mov ebp, esp */
  EBP = (ESP);
  /* 12421133 push ecx */
  push32((uint32_t)(ECX));
  /* 12421134 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421137 cmp eax, dword ptr [0x1244433c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1244433c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242113d jae 0x12421161 */
  if (!C.cf) goto L_12421161;
  /* 1242113f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421142 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12421145 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421148 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1242114b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1242114e mov eax, dword ptr [ecx*4 + 0x12444200] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12444200)));
  /* 12421155 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1242115a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1242115d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1242115f jne 0x12421174 */
  if (!C.zf) goto L_12421174;
L_12421161:;
  /* 12421161 call 0x1241e910 */
  push32(0x12421166u); f_1241e910();
  /* 12421166 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1242116c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1242116f jmp 0x124211fe */
  goto L_124211fe;
L_12421174:;
  /* 12421174 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421177 push edx */
  push32((uint32_t)(EDX));
  /* 12421178 call 0x12420130 */
  push32(0x1242117du); f_12420130();
  /* 1242117d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421180 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421183 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12421186 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421189 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1242118c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1242118f mov edx, dword ptr [eax*4 + 0x12444200] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12444200)));
  /* 12421196 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1242119b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1242119e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124211a0 je 0x124211dd */
  if (C.zf) goto L_124211dd;
  /* 124211a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124211a5 push ecx */
  push32((uint32_t)(ECX));
  /* 124211a6 call 0x1241ffb0 */
  push32(0x124211abu); f_1241ffb0();
  /* 124211ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124211ae push eax */
  push32((uint32_t)(EAX));
  /* 124211af call dword ptr [0x124452e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452e4))), 0x124211b5u);
  /* 124211b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124211b7 jne 0x124211c4 */
  if (!C.zf) goto L_124211c4;
  /* 124211b9 call dword ptr [0x1244539c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244539c))), 0x124211bfu);
  /* 124211bf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124211c2 jmp 0x124211cb */
  goto L_124211cb;
L_124211c4:;
  /* 124211c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_124211cb:;
  /* 124211cb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124211cf jne 0x124211d3 */
  if (!C.zf) goto L_124211d3;
  /* 124211d1 jmp 0x124211ef */
  goto L_124211ef;
L_124211d3:;
  /* 124211d3 call 0x1241e920 */
  push32(0x124211d8u); f_1241e920();
  /* 124211d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124211db mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_124211dd:;
  /* 124211dd call 0x1241e910 */
  push32(0x124211e2u); f_1241e910();
  /* 124211e2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 124211e8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_124211ef:;
  /* 124211ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124211f2 push eax */
  push32((uint32_t)(EAX));
  /* 124211f3 call 0x124201c0 */
  push32(0x124211f8u); f_124201c0();
  /* 124211f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124211fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_124211fe:;
  /* 124211fe mov esp, ebp */
  ESP = (EBP);
  /* 12421200 pop ebp */
  EBP = (pop32());
  /* 12421201 ret  */
  ESPCHK(0x12421130u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x12421210 (219 bytes, 64 insns) */
void f_12421210(void) {
  FTRACE(0x12421210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12421210 push ebp */
  push32((uint32_t)(EBP));
  /* 12421211 mov ebp, esp */
  EBP = (ESP);
  /* 12421213 push ecx */
  push32((uint32_t)(ECX));
  /* 12421214 cmp dword ptr [0x12442a34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442a34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242121b je 0x124212b1 */
  if (C.zf) goto L_124212b1;
  /* 12421221 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12421223 push 0x1243e6a8 */
  push32((uint32_t)(0x1243e6a8u));
  /* 12421228 push 2 */
  push32((uint32_t)(0x2u));
  /* 1242122a push 0xac */
  push32((uint32_t)(0xacu));
  /* 1242122f push 1 */
  push32((uint32_t)(0x1u));
  /* 12421231 call 0x12416e50 */
  push32(0x12421236u); f_12416e50();
  /* 12421236 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421239 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1242123c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12421240 jne 0x1242124c */
  if (!C.zf) goto L_1242124c;
  /* 12421242 mov eax, 1 */
  EAX = (0x1u);
  /* 12421247 jmp 0x124212e7 */
  goto L_124212e7;
L_1242124c:;
  /* 1242124c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1242124f push eax */
  push32((uint32_t)(EAX));
  /* 12421250 call 0x124212f0 */
  push32(0x12421255u); f_124212f0();
  /* 12421255 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421258 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1242125a je 0x1242127d */
  if (C.zf) goto L_1242127d;
  /* 1242125c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1242125f push ecx */
  push32((uint32_t)(ECX));
  /* 12421260 call 0x12421880 */
  push32(0x12421265u); f_12421880();
  /* 12421265 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421268 push 2 */
  push32((uint32_t)(0x2u));
  /* 1242126a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1242126d push edx */
  push32((uint32_t)(EDX));
  /* 1242126e call 0x124174d0 */
  push32(0x12421273u); f_124174d0();
  /* 12421273 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421276 mov eax, 1 */
  EAX = (0x1u);
  /* 1242127b jmp 0x124212e7 */
  goto L_124212e7;
L_1242127d:;
  /* 1242127d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12421280 mov dword ptr [0x12441c98], eax */
  w32((uint32_t)(0x12441c98), (EAX));
  /* 12421285 mov ecx, dword ptr [0x12442a54] */
  ECX = (r32((uint32_t)(0x12442a54)));
  /* 1242128b push ecx */
  push32((uint32_t)(ECX));
  /* 1242128c call 0x12421880 */
  push32(0x12421291u); f_12421880();
  /* 12421291 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421294 push 2 */
  push32((uint32_t)(0x2u));
  /* 12421296 mov edx, dword ptr [0x12442a54] */
  EDX = (r32((uint32_t)(0x12442a54)));
  /* 1242129c push edx */
  push32((uint32_t)(EDX));
  /* 1242129d call 0x124174d0 */
  push32(0x124212a2u); f_124174d0();
  /* 124212a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124212a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124212a8 mov dword ptr [0x12442a54], eax */
  w32((uint32_t)(0x12442a54), (EAX));
  /* 124212ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124212af jmp 0x124212e7 */
  goto L_124212e7;
L_124212b1:;
  /* 124212b1 mov dword ptr [0x12441c98], 0x12441ca0 */
  w32((uint32_t)(0x12441c98), (0x12441ca0u));
  /* 124212bb mov ecx, dword ptr [0x12442a54] */
  ECX = (r32((uint32_t)(0x12442a54)));
  /* 124212c1 push ecx */
  push32((uint32_t)(ECX));
  /* 124212c2 call 0x12421880 */
  push32(0x124212c7u); f_12421880();
  /* 124212c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124212ca push 2 */
  push32((uint32_t)(0x2u));
  /* 124212cc mov edx, dword ptr [0x12442a54] */
  EDX = (r32((uint32_t)(0x12442a54)));
  /* 124212d2 push edx */
  push32((uint32_t)(EDX));
  /* 124212d3 call 0x124174d0 */
  push32(0x124212d8u); f_124174d0();
  /* 124212d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124212db mov dword ptr [0x12442a54], 0 */
  w32((uint32_t)(0x12442a54), (0x0u));
  /* 124212e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124212e7:;
  /* 124212e7 mov esp, ebp */
  ESP = (EBP);
  /* 124212e9 pop ebp */
  EBP = (pop32());
  /* 124212ea ret  */
  ESPCHK(0x12421210u, _esp0);
  ESP += 4; return;
}

/* FUN_100112f0 @ 0x124212f0 (1423 bytes, 533 insns) */
void f_124212f0(void) {
  FTRACE(0x124212f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124212f0 push ebp */
  push32((uint32_t)(EBP));
  /* 124212f1 mov ebp, esp */
  EBP = (ESP);
  /* 124212f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124212f6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 124212fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124212ff mov ax, word ptr [0x12442a8e] */
  AX = (r16((uint32_t)(0x12442a8e)));
  /* 12421305 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12421308 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1242130a mov cx, word ptr [0x12442a90] */
  CX = (r16((uint32_t)(0x12442a90)));
  /* 12421311 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12421314 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12421318 jne 0x12421322 */
  if (!C.zf) goto L_12421322;
  /* 1242131a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1242131d jmp 0x1242187b */
  goto L_1242187b;
L_12421322:;
  /* 12421322 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421325 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12421328 push edx */
  push32((uint32_t)(EDX));
  /* 12421329 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 1242132b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1242132e push eax */
  push32((uint32_t)(EAX));
  /* 1242132f push 1 */
  push32((uint32_t)(0x1u));
  /* 12421331 call 0x12424c00 */
  push32(0x12421336u); f_12424c00();
  /* 12421336 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421339 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1242133c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1242133e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12421341 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421344 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12421347 push edx */
  push32((uint32_t)(EDX));
  /* 12421348 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1242134a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1242134d push eax */
  push32((uint32_t)(EAX));
  /* 1242134e push 1 */
  push32((uint32_t)(0x1u));
  /* 12421350 call 0x12424c00 */
  push32(0x12421355u); f_12424c00();
  /* 12421355 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421358 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1242135b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1242135d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12421360 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421363 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12421366 push edx */
  push32((uint32_t)(EDX));
  /* 12421367 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 12421369 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1242136c push eax */
  push32((uint32_t)(EAX));
  /* 1242136d push 1 */
  push32((uint32_t)(0x1u));
  /* 1242136f call 0x12424c00 */
  push32(0x12421374u); f_12424c00();
  /* 12421374 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421377 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1242137a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1242137c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1242137f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421382 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12421385 push edx */
  push32((uint32_t)(EDX));
  /* 12421386 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 12421388 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1242138b push eax */
  push32((uint32_t)(EAX));
  /* 1242138c push 1 */
  push32((uint32_t)(0x1u));
  /* 1242138e call 0x12424c00 */
  push32(0x12421393u); f_12424c00();
  /* 12421393 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421396 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12421399 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1242139b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1242139e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124213a1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124213a4 push edx */
  push32((uint32_t)(EDX));
  /* 124213a5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 124213a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124213aa push eax */
  push32((uint32_t)(EAX));
  /* 124213ab push 1 */
  push32((uint32_t)(0x1u));
  /* 124213ad call 0x12424c00 */
  push32(0x124213b2u); f_12424c00();
  /* 124213b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124213b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124213b8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124213ba mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124213bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124213c0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124213c3 push edx */
  push32((uint32_t)(EDX));
  /* 124213c4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 124213c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124213c9 push eax */
  push32((uint32_t)(EAX));
  /* 124213ca push 1 */
  push32((uint32_t)(0x1u));
  /* 124213cc call 0x12424c00 */
  push32(0x124213d1u); f_12424c00();
  /* 124213d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124213d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124213d7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124213d9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124213dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124213df push edx */
  push32((uint32_t)(EDX));
  /* 124213e0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 124213e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124213e5 push eax */
  push32((uint32_t)(EAX));
  /* 124213e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 124213e8 call 0x12424c00 */
  push32(0x124213edu); f_12424c00();
  /* 124213ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124213f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124213f3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124213f5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124213f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124213fb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124213fe push edx */
  push32((uint32_t)(EDX));
  /* 124213ff push 0x2a */
  push32((uint32_t)(0x2au));
  /* 12421401 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12421404 push eax */
  push32((uint32_t)(EAX));
  /* 12421405 push 1 */
  push32((uint32_t)(0x1u));
  /* 12421407 call 0x12424c00 */
  push32(0x1242140cu); f_12424c00();
  /* 1242140c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242140f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12421412 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12421414 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12421417 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242141a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242141d push edx */
  push32((uint32_t)(EDX));
  /* 1242141e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 12421420 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12421423 push eax */
  push32((uint32_t)(EAX));
  /* 12421424 push 1 */
  push32((uint32_t)(0x1u));
  /* 12421426 call 0x12424c00 */
  push32(0x1242142bu); f_12424c00();
  /* 1242142b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242142e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12421431 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12421433 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12421436 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421439 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242143c push edx */
  push32((uint32_t)(EDX));
  /* 1242143d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1242143f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12421442 push eax */
  push32((uint32_t)(EAX));
  /* 12421443 push 1 */
  push32((uint32_t)(0x1u));
  /* 12421445 call 0x12424c00 */
  push32(0x1242144au); f_12424c00();
  /* 1242144a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242144d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12421450 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12421452 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12421455 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421458 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242145b push edx */
  push32((uint32_t)(EDX));
  /* 1242145c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1242145e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12421461 push eax */
  push32((uint32_t)(EAX));
  /* 12421462 push 1 */
  push32((uint32_t)(0x1u));
  /* 12421464 call 0x12424c00 */
  push32(0x12421469u); f_12424c00();
  /* 12421469 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242146c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1242146f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12421471 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12421474 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421477 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242147a push edx */
  push32((uint32_t)(EDX));
  /* 1242147b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1242147d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12421480 push eax */
  push32((uint32_t)(EAX));
  /* 12421481 push 1 */
  push32((uint32_t)(0x1u));
  /* 12421483 call 0x12424c00 */
  push32(0x12421488u); f_12424c00();
  /* 12421488 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242148b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1242148e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12421490 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12421493 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421496 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12421499 push edx */
  push32((uint32_t)(EDX));
  /* 1242149a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1242149c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1242149f push eax */
  push32((uint32_t)(EAX));
  /* 124214a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 124214a2 call 0x12424c00 */
  push32(0x124214a7u); f_12424c00();
  /* 124214a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124214aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124214ad or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124214af mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124214b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124214b5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124214b8 push edx */
  push32((uint32_t)(EDX));
  /* 124214b9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 124214bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124214be push eax */
  push32((uint32_t)(EAX));
  /* 124214bf push 1 */
  push32((uint32_t)(0x1u));
  /* 124214c1 call 0x12424c00 */
  push32(0x124214c6u); f_12424c00();
  /* 124214c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124214c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124214cc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124214ce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124214d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124214d4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124214d7 push edx */
  push32((uint32_t)(EDX));
  /* 124214d8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 124214da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124214dd push eax */
  push32((uint32_t)(EAX));
  /* 124214de push 1 */
  push32((uint32_t)(0x1u));
  /* 124214e0 call 0x12424c00 */
  push32(0x124214e5u); f_12424c00();
  /* 124214e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124214e8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124214eb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124214ed mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124214f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124214f3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124214f6 push edx */
  push32((uint32_t)(EDX));
  /* 124214f7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 124214f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124214fc push eax */
  push32((uint32_t)(EAX));
  /* 124214fd push 1 */
  push32((uint32_t)(0x1u));
  /* 124214ff call 0x12424c00 */
  push32(0x12421504u); f_12424c00();
  /* 12421504 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421507 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1242150a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1242150c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1242150f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421512 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12421515 push edx */
  push32((uint32_t)(EDX));
  /* 12421516 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 12421518 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1242151b push eax */
  push32((uint32_t)(EAX));
  /* 1242151c push 1 */
  push32((uint32_t)(0x1u));
  /* 1242151e call 0x12424c00 */
  push32(0x12421523u); f_12424c00();
  /* 12421523 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421526 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12421529 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1242152b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1242152e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421531 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12421534 push edx */
  push32((uint32_t)(EDX));
  /* 12421535 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 12421537 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1242153a push eax */
  push32((uint32_t)(EAX));
  /* 1242153b push 1 */
  push32((uint32_t)(0x1u));
  /* 1242153d call 0x12424c00 */
  push32(0x12421542u); f_12424c00();
  /* 12421542 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421545 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12421548 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1242154a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1242154d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421550 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12421553 push edx */
  push32((uint32_t)(EDX));
  /* 12421554 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12421556 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12421559 push eax */
  push32((uint32_t)(EAX));
  /* 1242155a push 1 */
  push32((uint32_t)(0x1u));
  /* 1242155c call 0x12424c00 */
  push32(0x12421561u); f_12424c00();
  /* 12421561 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421564 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12421567 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12421569 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1242156c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242156f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12421572 push edx */
  push32((uint32_t)(EDX));
  /* 12421573 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 12421575 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12421578 push eax */
  push32((uint32_t)(EAX));
  /* 12421579 push 1 */
  push32((uint32_t)(0x1u));
  /* 1242157b call 0x12424c00 */
  push32(0x12421580u); f_12424c00();
  /* 12421580 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421583 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12421586 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12421588 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1242158b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242158e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12421591 push edx */
  push32((uint32_t)(EDX));
  /* 12421592 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12421594 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12421597 push eax */
  push32((uint32_t)(EAX));
  /* 12421598 push 1 */
  push32((uint32_t)(0x1u));
  /* 1242159a call 0x12424c00 */
  push32(0x1242159fu); f_12424c00();
  /* 1242159f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124215a2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124215a5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124215a7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124215aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124215ad add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124215b0 push edx */
  push32((uint32_t)(EDX));
  /* 124215b1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 124215b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124215b6 push eax */
  push32((uint32_t)(EAX));
  /* 124215b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 124215b9 call 0x12424c00 */
  push32(0x124215beu); f_12424c00();
  /* 124215be add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124215c1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124215c4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124215c6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124215c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124215cc add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124215cf push edx */
  push32((uint32_t)(EDX));
  /* 124215d0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 124215d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124215d5 push eax */
  push32((uint32_t)(EAX));
  /* 124215d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 124215d8 call 0x12424c00 */
  push32(0x124215ddu); f_12424c00();
  /* 124215dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124215e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124215e3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124215e5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124215e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124215eb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124215ee push edx */
  push32((uint32_t)(EDX));
  /* 124215ef push 0x4d */
  push32((uint32_t)(0x4du));
  /* 124215f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124215f4 push eax */
  push32((uint32_t)(EAX));
  /* 124215f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 124215f7 call 0x12424c00 */
  push32(0x124215fcu); f_12424c00();
  /* 124215fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124215ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12421602 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12421604 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12421607 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242160a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242160d push edx */
  push32((uint32_t)(EDX));
  /* 1242160e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 12421610 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12421613 push eax */
  push32((uint32_t)(EAX));
  /* 12421614 push 1 */
  push32((uint32_t)(0x1u));
  /* 12421616 call 0x12424c00 */
  push32(0x1242161bu); f_12424c00();
  /* 1242161b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242161e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12421621 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12421623 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12421626 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421629 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242162c push edx */
  push32((uint32_t)(EDX));
  /* 1242162d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1242162f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12421632 push eax */
  push32((uint32_t)(EAX));
  /* 12421633 push 1 */
  push32((uint32_t)(0x1u));
  /* 12421635 call 0x12424c00 */
  push32(0x1242163au); f_12424c00();
  /* 1242163a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242163d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12421640 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12421642 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12421645 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421648 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242164b push edx */
  push32((uint32_t)(EDX));
  /* 1242164c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1242164e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12421651 push eax */
  push32((uint32_t)(EAX));
  /* 12421652 push 1 */
  push32((uint32_t)(0x1u));
  /* 12421654 call 0x12424c00 */
  push32(0x12421659u); f_12424c00();
  /* 12421659 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242165c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1242165f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12421661 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12421664 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421667 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242166a push edx */
  push32((uint32_t)(EDX));
  /* 1242166b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1242166d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12421670 push eax */
  push32((uint32_t)(EAX));
  /* 12421671 push 1 */
  push32((uint32_t)(0x1u));
  /* 12421673 call 0x12424c00 */
  push32(0x12421678u); f_12424c00();
  /* 12421678 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242167b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1242167e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12421680 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12421683 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421686 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12421689 push edx */
  push32((uint32_t)(EDX));
  /* 1242168a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1242168c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1242168f push eax */
  push32((uint32_t)(EAX));
  /* 12421690 push 1 */
  push32((uint32_t)(0x1u));
  /* 12421692 call 0x12424c00 */
  push32(0x12421697u); f_12424c00();
  /* 12421697 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242169a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1242169d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1242169f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124216a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124216a5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124216a8 push edx */
  push32((uint32_t)(EDX));
  /* 124216a9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 124216ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124216ae push eax */
  push32((uint32_t)(EAX));
  /* 124216af push 1 */
  push32((uint32_t)(0x1u));
  /* 124216b1 call 0x12424c00 */
  push32(0x124216b6u); f_12424c00();
  /* 124216b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124216b9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124216bc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124216be mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124216c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124216c4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124216c7 push edx */
  push32((uint32_t)(EDX));
  /* 124216c8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 124216ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124216cd push eax */
  push32((uint32_t)(EAX));
  /* 124216ce push 1 */
  push32((uint32_t)(0x1u));
  /* 124216d0 call 0x12424c00 */
  push32(0x124216d5u); f_12424c00();
  /* 124216d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124216d8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124216db or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124216dd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124216e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124216e3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124216e6 push edx */
  push32((uint32_t)(EDX));
  /* 124216e7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 124216e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124216ec push eax */
  push32((uint32_t)(EAX));
  /* 124216ed push 1 */
  push32((uint32_t)(0x1u));
  /* 124216ef call 0x12424c00 */
  push32(0x124216f4u); f_12424c00();
  /* 124216f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124216f7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124216fa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124216fc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124216ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421702 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12421708 push edx */
  push32((uint32_t)(EDX));
  /* 12421709 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 1242170b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1242170e push eax */
  push32((uint32_t)(EAX));
  /* 1242170f push 1 */
  push32((uint32_t)(0x1u));
  /* 12421711 call 0x12424c00 */
  push32(0x12421716u); f_12424c00();
  /* 12421716 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421719 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1242171c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1242171e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12421721 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421724 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242172a push edx */
  push32((uint32_t)(EDX));
  /* 1242172b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1242172d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12421730 push eax */
  push32((uint32_t)(EAX));
  /* 12421731 push 1 */
  push32((uint32_t)(0x1u));
  /* 12421733 call 0x12424c00 */
  push32(0x12421738u); f_12424c00();
  /* 12421738 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242173b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1242173e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12421740 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12421743 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421746 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242174c push edx */
  push32((uint32_t)(EDX));
  /* 1242174d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1242174f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12421752 push eax */
  push32((uint32_t)(EAX));
  /* 12421753 push 1 */
  push32((uint32_t)(0x1u));
  /* 12421755 call 0x12424c00 */
  push32(0x1242175au); f_12424c00();
  /* 1242175a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242175d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12421760 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12421762 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12421765 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421768 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242176e push edx */
  push32((uint32_t)(EDX));
  /* 1242176f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12421771 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12421774 push eax */
  push32((uint32_t)(EAX));
  /* 12421775 push 1 */
  push32((uint32_t)(0x1u));
  /* 12421777 call 0x12424c00 */
  push32(0x1242177cu); f_12424c00();
  /* 1242177c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242177f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12421782 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12421784 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12421787 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242178a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12421790 push edx */
  push32((uint32_t)(EDX));
  /* 12421791 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12421793 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12421796 push eax */
  push32((uint32_t)(EAX));
  /* 12421797 push 1 */
  push32((uint32_t)(0x1u));
  /* 12421799 call 0x12424c00 */
  push32(0x1242179eu); f_12424c00();
  /* 1242179e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124217a1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124217a4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124217a6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124217a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124217ac add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124217b2 push edx */
  push32((uint32_t)(EDX));
  /* 124217b3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 124217b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124217b8 push eax */
  push32((uint32_t)(EAX));
  /* 124217b9 push 1 */
  push32((uint32_t)(0x1u));
  /* 124217bb call 0x12424c00 */
  push32(0x124217c0u); f_12424c00();
  /* 124217c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124217c3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124217c6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124217c8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124217cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124217ce add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124217d4 push edx */
  push32((uint32_t)(EDX));
  /* 124217d5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 124217d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124217da push eax */
  push32((uint32_t)(EAX));
  /* 124217db push 1 */
  push32((uint32_t)(0x1u));
  /* 124217dd call 0x12424c00 */
  push32(0x124217e2u); f_12424c00();
  /* 124217e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124217e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124217e8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124217ea mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 124217ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124217f0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124217f6 push edx */
  push32((uint32_t)(EDX));
  /* 124217f7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 124217f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124217fc push eax */
  push32((uint32_t)(EAX));
  /* 124217fd push 1 */
  push32((uint32_t)(0x1u));
  /* 124217ff call 0x12424c00 */
  push32(0x12421804u); f_12424c00();
  /* 12421804 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421807 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1242180a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1242180c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1242180f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421812 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12421818 push edx */
  push32((uint32_t)(EDX));
  /* 12421819 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1242181b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1242181e push eax */
  push32((uint32_t)(EAX));
  /* 1242181f push 1 */
  push32((uint32_t)(0x1u));
  /* 12421821 call 0x12424c00 */
  push32(0x12421826u); f_12424c00();
  /* 12421826 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421829 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1242182c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1242182e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12421831 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421834 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242183a push edx */
  push32((uint32_t)(EDX));
  /* 1242183b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1242183d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12421840 push eax */
  push32((uint32_t)(EAX));
  /* 12421841 push 1 */
  push32((uint32_t)(0x1u));
  /* 12421843 call 0x12424c00 */
  push32(0x12421848u); f_12424c00();
  /* 12421848 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242184b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1242184e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12421850 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12421853 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421856 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242185c push edx */
  push32((uint32_t)(EDX));
  /* 1242185d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 12421862 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12421865 push eax */
  push32((uint32_t)(EAX));
  /* 12421866 push 1 */
  push32((uint32_t)(0x1u));
  /* 12421868 call 0x12424c00 */
  push32(0x1242186du); f_12424c00();
  /* 1242186d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421870 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12421873 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12421875 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12421878 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1242187b:;
  /* 1242187b mov esp, ebp */
  ESP = (EBP);
  /* 1242187d pop ebp */
  EBP = (pop32());
  /* 1242187e ret  */
  ESPCHK(0x124212f0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x12421880 (779 bytes, 265 insns) */
void f_12421880(void) {
  FTRACE(0x12421880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12421880 push ebp */
  push32((uint32_t)(EBP));
  /* 12421881 mov ebp, esp */
  EBP = (ESP);
  /* 12421883 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12421887 jne 0x1242188e */
  if (!C.zf) goto L_1242188e;
  /* 12421889 jmp 0x12421b89 */
  goto L_12421b89;
L_1242188e:;
  /* 1242188e push 2 */
  push32((uint32_t)(0x2u));
  /* 12421890 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421893 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12421896 push ecx */
  push32((uint32_t)(ECX));
  /* 12421897 call 0x124174d0 */
  push32(0x1242189cu); f_124174d0();
  /* 1242189c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242189f push 2 */
  push32((uint32_t)(0x2u));
  /* 124218a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124218a4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 124218a7 push eax */
  push32((uint32_t)(EAX));
  /* 124218a8 call 0x124174d0 */
  push32(0x124218adu); f_124174d0();
  /* 124218ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124218b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 124218b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124218b5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 124218b8 push edx */
  push32((uint32_t)(EDX));
  /* 124218b9 call 0x124174d0 */
  push32(0x124218beu); f_124174d0();
  /* 124218be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124218c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 124218c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124218c6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 124218c9 push ecx */
  push32((uint32_t)(ECX));
  /* 124218ca call 0x124174d0 */
  push32(0x124218cfu); f_124174d0();
  /* 124218cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124218d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 124218d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124218d7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 124218da push eax */
  push32((uint32_t)(EAX));
  /* 124218db call 0x124174d0 */
  push32(0x124218e0u); f_124174d0();
  /* 124218e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124218e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 124218e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124218e8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 124218eb push edx */
  push32((uint32_t)(EDX));
  /* 124218ec call 0x124174d0 */
  push32(0x124218f1u); f_124174d0();
  /* 124218f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124218f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 124218f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124218f9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124218fb push ecx */
  push32((uint32_t)(ECX));
  /* 124218fc call 0x124174d0 */
  push32(0x12421901u); f_124174d0();
  /* 12421901 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421904 push 2 */
  push32((uint32_t)(0x2u));
  /* 12421906 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421909 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1242190c push eax */
  push32((uint32_t)(EAX));
  /* 1242190d call 0x124174d0 */
  push32(0x12421912u); f_124174d0();
  /* 12421912 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421915 push 2 */
  push32((uint32_t)(0x2u));
  /* 12421917 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242191a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1242191d push edx */
  push32((uint32_t)(EDX));
  /* 1242191e call 0x124174d0 */
  push32(0x12421923u); f_124174d0();
  /* 12421923 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421926 push 2 */
  push32((uint32_t)(0x2u));
  /* 12421928 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242192b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1242192e push ecx */
  push32((uint32_t)(ECX));
  /* 1242192f call 0x124174d0 */
  push32(0x12421934u); f_124174d0();
  /* 12421934 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421937 push 2 */
  push32((uint32_t)(0x2u));
  /* 12421939 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242193c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 1242193f push eax */
  push32((uint32_t)(EAX));
  /* 12421940 call 0x124174d0 */
  push32(0x12421945u); f_124174d0();
  /* 12421945 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421948 push 2 */
  push32((uint32_t)(0x2u));
  /* 1242194a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242194d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12421950 push edx */
  push32((uint32_t)(EDX));
  /* 12421951 call 0x124174d0 */
  push32(0x12421956u); f_124174d0();
  /* 12421956 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421959 push 2 */
  push32((uint32_t)(0x2u));
  /* 1242195b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242195e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 12421961 push ecx */
  push32((uint32_t)(ECX));
  /* 12421962 call 0x124174d0 */
  push32(0x12421967u); f_124174d0();
  /* 12421967 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242196a push 2 */
  push32((uint32_t)(0x2u));
  /* 1242196c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242196f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12421972 push eax */
  push32((uint32_t)(EAX));
  /* 12421973 call 0x124174d0 */
  push32(0x12421978u); f_124174d0();
  /* 12421978 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242197b push 2 */
  push32((uint32_t)(0x2u));
  /* 1242197d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421980 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 12421983 push edx */
  push32((uint32_t)(EDX));
  /* 12421984 call 0x124174d0 */
  push32(0x12421989u); f_124174d0();
  /* 12421989 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242198c push 2 */
  push32((uint32_t)(0x2u));
  /* 1242198e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421991 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 12421994 push ecx */
  push32((uint32_t)(ECX));
  /* 12421995 call 0x124174d0 */
  push32(0x1242199au); f_124174d0();
  /* 1242199a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242199d push 2 */
  push32((uint32_t)(0x2u));
  /* 1242199f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124219a2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 124219a5 push eax */
  push32((uint32_t)(EAX));
  /* 124219a6 call 0x124174d0 */
  push32(0x124219abu); f_124174d0();
  /* 124219ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124219ae push 2 */
  push32((uint32_t)(0x2u));
  /* 124219b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124219b3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 124219b6 push edx */
  push32((uint32_t)(EDX));
  /* 124219b7 call 0x124174d0 */
  push32(0x124219bcu); f_124174d0();
  /* 124219bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124219bf push 2 */
  push32((uint32_t)(0x2u));
  /* 124219c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124219c4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 124219c7 push ecx */
  push32((uint32_t)(ECX));
  /* 124219c8 call 0x124174d0 */
  push32(0x124219cdu); f_124174d0();
  /* 124219cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124219d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 124219d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124219d5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 124219d8 push eax */
  push32((uint32_t)(EAX));
  /* 124219d9 call 0x124174d0 */
  push32(0x124219deu); f_124174d0();
  /* 124219de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124219e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 124219e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124219e6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 124219e9 push edx */
  push32((uint32_t)(EDX));
  /* 124219ea call 0x124174d0 */
  push32(0x124219efu); f_124174d0();
  /* 124219ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124219f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 124219f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124219f7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 124219fa push ecx */
  push32((uint32_t)(ECX));
  /* 124219fb call 0x124174d0 */
  push32(0x12421a00u); f_124174d0();
  /* 12421a00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421a03 push 2 */
  push32((uint32_t)(0x2u));
  /* 12421a05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421a08 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 12421a0b push eax */
  push32((uint32_t)(EAX));
  /* 12421a0c call 0x124174d0 */
  push32(0x12421a11u); f_124174d0();
  /* 12421a11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421a14 push 2 */
  push32((uint32_t)(0x2u));
  /* 12421a16 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421a19 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 12421a1c push edx */
  push32((uint32_t)(EDX));
  /* 12421a1d call 0x124174d0 */
  push32(0x12421a22u); f_124174d0();
  /* 12421a22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421a25 push 2 */
  push32((uint32_t)(0x2u));
  /* 12421a27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421a2a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 12421a2d push ecx */
  push32((uint32_t)(ECX));
  /* 12421a2e call 0x124174d0 */
  push32(0x12421a33u); f_124174d0();
  /* 12421a33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421a36 push 2 */
  push32((uint32_t)(0x2u));
  /* 12421a38 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421a3b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 12421a3e push eax */
  push32((uint32_t)(EAX));
  /* 12421a3f call 0x124174d0 */
  push32(0x12421a44u); f_124174d0();
  /* 12421a44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421a47 push 2 */
  push32((uint32_t)(0x2u));
  /* 12421a49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421a4c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 12421a4f push edx */
  push32((uint32_t)(EDX));
  /* 12421a50 call 0x124174d0 */
  push32(0x12421a55u); f_124174d0();
  /* 12421a55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421a58 push 2 */
  push32((uint32_t)(0x2u));
  /* 12421a5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421a5d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 12421a60 push ecx */
  push32((uint32_t)(ECX));
  /* 12421a61 call 0x124174d0 */
  push32(0x12421a66u); f_124174d0();
  /* 12421a66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421a69 push 2 */
  push32((uint32_t)(0x2u));
  /* 12421a6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421a6e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 12421a71 push eax */
  push32((uint32_t)(EAX));
  /* 12421a72 call 0x124174d0 */
  push32(0x12421a77u); f_124174d0();
  /* 12421a77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421a7a push 2 */
  push32((uint32_t)(0x2u));
  /* 12421a7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421a7f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 12421a82 push edx */
  push32((uint32_t)(EDX));
  /* 12421a83 call 0x124174d0 */
  push32(0x12421a88u); f_124174d0();
  /* 12421a88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421a8b push 2 */
  push32((uint32_t)(0x2u));
  /* 12421a8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421a90 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 12421a93 push ecx */
  push32((uint32_t)(ECX));
  /* 12421a94 call 0x124174d0 */
  push32(0x12421a99u); f_124174d0();
  /* 12421a99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421a9c push 2 */
  push32((uint32_t)(0x2u));
  /* 12421a9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421aa1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 12421aa4 push eax */
  push32((uint32_t)(EAX));
  /* 12421aa5 call 0x124174d0 */
  push32(0x12421aaau); f_124174d0();
  /* 12421aaa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421aad push 2 */
  push32((uint32_t)(0x2u));
  /* 12421aaf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421ab2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 12421ab8 push edx */
  push32((uint32_t)(EDX));
  /* 12421ab9 call 0x124174d0 */
  push32(0x12421abeu); f_124174d0();
  /* 12421abe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421ac1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12421ac3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421ac6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 12421acc push ecx */
  push32((uint32_t)(ECX));
  /* 12421acd call 0x124174d0 */
  push32(0x12421ad2u); f_124174d0();
  /* 12421ad2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421ad5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12421ad7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421ada mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 12421ae0 push eax */
  push32((uint32_t)(EAX));
  /* 12421ae1 call 0x124174d0 */
  push32(0x12421ae6u); f_124174d0();
  /* 12421ae6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421ae9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12421aeb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421aee mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 12421af4 push edx */
  push32((uint32_t)(EDX));
  /* 12421af5 call 0x124174d0 */
  push32(0x12421afau); f_124174d0();
  /* 12421afa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421afd push 2 */
  push32((uint32_t)(0x2u));
  /* 12421aff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421b02 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 12421b08 push ecx */
  push32((uint32_t)(ECX));
  /* 12421b09 call 0x124174d0 */
  push32(0x12421b0eu); f_124174d0();
  /* 12421b0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421b11 push 2 */
  push32((uint32_t)(0x2u));
  /* 12421b13 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421b16 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 12421b1c push eax */
  push32((uint32_t)(EAX));
  /* 12421b1d call 0x124174d0 */
  push32(0x12421b22u); f_124174d0();
  /* 12421b22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421b25 push 2 */
  push32((uint32_t)(0x2u));
  /* 12421b27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421b2a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 12421b30 push edx */
  push32((uint32_t)(EDX));
  /* 12421b31 call 0x124174d0 */
  push32(0x12421b36u); f_124174d0();
  /* 12421b36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421b39 push 2 */
  push32((uint32_t)(0x2u));
  /* 12421b3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421b3e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12421b44 push ecx */
  push32((uint32_t)(ECX));
  /* 12421b45 call 0x124174d0 */
  push32(0x12421b4au); f_124174d0();
  /* 12421b4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421b4d push 2 */
  push32((uint32_t)(0x2u));
  /* 12421b4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421b52 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12421b58 push eax */
  push32((uint32_t)(EAX));
  /* 12421b59 call 0x124174d0 */
  push32(0x12421b5eu); f_124174d0();
  /* 12421b5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421b61 push 2 */
  push32((uint32_t)(0x2u));
  /* 12421b63 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421b66 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12421b6c push edx */
  push32((uint32_t)(EDX));
  /* 12421b6d call 0x124174d0 */
  push32(0x12421b72u); f_124174d0();
  /* 12421b72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421b75 push 2 */
  push32((uint32_t)(0x2u));
  /* 12421b77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421b7a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 12421b80 push ecx */
  push32((uint32_t)(ECX));
  /* 12421b81 call 0x124174d0 */
  push32(0x12421b86u); f_124174d0();
  /* 12421b86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12421b89:;
  /* 12421b89 pop ebp */
  EBP = (pop32());
  /* 12421b8a ret  */
  ESPCHK(0x12421880u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b90 @ 0x12421b90 (678 bytes, 180 insns) */
void f_12421b90(void) {
  FTRACE(0x12421b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12421b90 push ebp */
  push32((uint32_t)(EBP));
  /* 12421b91 mov ebp, esp */
  EBP = (ESP);
  /* 12421b93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12421b96 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12421b9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12421b9f mov ax, word ptr [0x12442a8a] */
  AX = (r16((uint32_t)(0x12442a8a)));
  /* 12421ba5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12421ba8 cmp dword ptr [0x12442a30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442a30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12421baf je 0x12421d0a */
  if (C.zf) goto L_12421d0a;
  /* 12421bb5 push 0x12442a58 */
  push32((uint32_t)(0x12442a58u));
  /* 12421bba push 0xe */
  push32((uint32_t)(0xeu));
  /* 12421bbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12421bbf push ecx */
  push32((uint32_t)(ECX));
  /* 12421bc0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12421bc2 call 0x12424c00 */
  push32(0x12421bc7u); f_12424c00();
  /* 12421bc7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421bca mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12421bcd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12421bcf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12421bd2 push 0x12442a5c */
  push32((uint32_t)(0x12442a5cu));
  /* 12421bd7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12421bd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12421bdc push eax */
  push32((uint32_t)(EAX));
  /* 12421bdd push 1 */
  push32((uint32_t)(0x1u));
  /* 12421bdf call 0x12424c00 */
  push32(0x12421be4u); f_12424c00();
  /* 12421be4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421be7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12421bea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12421bec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12421bef push 0x12442a60 */
  push32((uint32_t)(0x12442a60u));
  /* 12421bf4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12421bf6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12421bf9 push edx */
  push32((uint32_t)(EDX));
  /* 12421bfa push 1 */
  push32((uint32_t)(0x1u));
  /* 12421bfc call 0x12424c00 */
  push32(0x12421c01u); f_12424c00();
  /* 12421c01 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421c04 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12421c07 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12421c09 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12421c0c mov edx, dword ptr [0x12442a60] */
  EDX = (r32((uint32_t)(0x12442a60)));
  /* 12421c12 push edx */
  push32((uint32_t)(EDX));
  /* 12421c13 call 0x12421e40 */
  push32(0x12421c18u); f_12421e40();
  /* 12421c18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421c1b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12421c1f je 0x12421c79 */
  if (C.zf) goto L_12421c79;
  /* 12421c21 push 2 */
  push32((uint32_t)(0x2u));
  /* 12421c23 mov eax, dword ptr [0x12442a58] */
  EAX = (r32((uint32_t)(0x12442a58)));
  /* 12421c28 push eax */
  push32((uint32_t)(EAX));
  /* 12421c29 call 0x124174d0 */
  push32(0x12421c2eu); f_124174d0();
  /* 12421c2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421c31 push 2 */
  push32((uint32_t)(0x2u));
  /* 12421c33 mov ecx, dword ptr [0x12442a5c] */
  ECX = (r32((uint32_t)(0x12442a5c)));
  /* 12421c39 push ecx */
  push32((uint32_t)(ECX));
  /* 12421c3a call 0x124174d0 */
  push32(0x12421c3fu); f_124174d0();
  /* 12421c3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421c42 push 2 */
  push32((uint32_t)(0x2u));
  /* 12421c44 mov edx, dword ptr [0x12442a60] */
  EDX = (r32((uint32_t)(0x12442a60)));
  /* 12421c4a push edx */
  push32((uint32_t)(EDX));
  /* 12421c4b call 0x124174d0 */
  push32(0x12421c50u); f_124174d0();
  /* 12421c50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421c53 mov dword ptr [0x12442a58], 0 */
  w32((uint32_t)(0x12442a58), (0x0u));
  /* 12421c5d mov dword ptr [0x12442a5c], 0 */
  w32((uint32_t)(0x12442a5c), (0x0u));
  /* 12421c67 mov dword ptr [0x12442a60], 0 */
  w32((uint32_t)(0x12442a60), (0x0u));
  /* 12421c71 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12421c74 jmp 0x12421e32 */
  goto L_12421e32;
L_12421c79:;
  /* 12421c79 mov eax, dword ptr [0x12441d88] */
  EAX = (r32((uint32_t)(0x12441d88)));
  /* 12421c7e cmp dword ptr [eax], 0x12441d50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x12441d50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12421c84 je 0x12421cc0 */
  if (C.zf) goto L_12421cc0;
  /* 12421c86 push 2 */
  push32((uint32_t)(0x2u));
  /* 12421c88 mov ecx, dword ptr [0x12441d88] */
  ECX = (r32((uint32_t)(0x12441d88)));
  /* 12421c8e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12421c90 push edx */
  push32((uint32_t)(EDX));
  /* 12421c91 call 0x124174d0 */
  push32(0x12421c96u); f_124174d0();
  /* 12421c96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421c99 push 2 */
  push32((uint32_t)(0x2u));
  /* 12421c9b mov eax, dword ptr [0x12441d88] */
  EAX = (r32((uint32_t)(0x12441d88)));
  /* 12421ca0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12421ca3 push ecx */
  push32((uint32_t)(ECX));
  /* 12421ca4 call 0x124174d0 */
  push32(0x12421ca9u); f_124174d0();
  /* 12421ca9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421cac push 2 */
  push32((uint32_t)(0x2u));
  /* 12421cae mov edx, dword ptr [0x12441d88] */
  EDX = (r32((uint32_t)(0x12441d88)));
  /* 12421cb4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12421cb7 push eax */
  push32((uint32_t)(EAX));
  /* 12421cb8 call 0x124174d0 */
  push32(0x12421cbdu); f_124174d0();
  /* 12421cbd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12421cc0:;
  /* 12421cc0 mov ecx, dword ptr [0x12441d88] */
  ECX = (r32((uint32_t)(0x12441d88)));
  /* 12421cc6 mov edx, dword ptr [0x12442a58] */
  EDX = (r32((uint32_t)(0x12442a58)));
  /* 12421ccc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12421cce mov eax, dword ptr [0x12441d88] */
  EAX = (r32((uint32_t)(0x12441d88)));
  /* 12421cd3 mov ecx, dword ptr [0x12442a5c] */
  ECX = (r32((uint32_t)(0x12442a5c)));
  /* 12421cd9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12421cdc mov edx, dword ptr [0x12441d88] */
  EDX = (r32((uint32_t)(0x12441d88)));
  /* 12421ce2 mov eax, dword ptr [0x12442a60] */
  EAX = (r32((uint32_t)(0x12442a60)));
  /* 12421ce7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12421cea mov ecx, dword ptr [0x12441d88] */
  ECX = (r32((uint32_t)(0x12441d88)));
  /* 12421cf0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12421cf2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12421cf4 mov byte ptr [0x12440ea8], al */
  w8((uint32_t)(0x12440ea8), (AL));
  /* 12421cf9 mov dword ptr [0x12440eac], 1 */
  w32((uint32_t)(0x12440eac), (0x1u));
  /* 12421d03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12421d05 jmp 0x12421e32 */
  goto L_12421e32;
L_12421d0a:;
  /* 12421d0a push 2 */
  push32((uint32_t)(0x2u));
  /* 12421d0c mov ecx, dword ptr [0x12442a58] */
  ECX = (r32((uint32_t)(0x12442a58)));
  /* 12421d12 push ecx */
  push32((uint32_t)(ECX));
  /* 12421d13 call 0x124174d0 */
  push32(0x12421d18u); f_124174d0();
  /* 12421d18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421d1b push 2 */
  push32((uint32_t)(0x2u));
  /* 12421d1d mov edx, dword ptr [0x12442a5c] */
  EDX = (r32((uint32_t)(0x12442a5c)));
  /* 12421d23 push edx */
  push32((uint32_t)(EDX));
  /* 12421d24 call 0x124174d0 */
  push32(0x12421d29u); f_124174d0();
  /* 12421d29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421d2c push 2 */
  push32((uint32_t)(0x2u));
  /* 12421d2e mov eax, dword ptr [0x12442a60] */
  EAX = (r32((uint32_t)(0x12442a60)));
  /* 12421d33 push eax */
  push32((uint32_t)(EAX));
  /* 12421d34 call 0x124174d0 */
  push32(0x12421d39u); f_124174d0();
  /* 12421d39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421d3c mov dword ptr [0x12442a58], 0 */
  w32((uint32_t)(0x12442a58), (0x0u));
  /* 12421d46 mov dword ptr [0x12442a5c], 0 */
  w32((uint32_t)(0x12442a5c), (0x0u));
  /* 12421d50 mov dword ptr [0x12442a60], 0 */
  w32((uint32_t)(0x12442a60), (0x0u));
  /* 12421d5a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 12421d5f push 0x1243e6b4 */
  push32((uint32_t)(0x1243e6b4u));
  /* 12421d64 push 2 */
  push32((uint32_t)(0x2u));
  /* 12421d66 push 2 */
  push32((uint32_t)(0x2u));
  /* 12421d68 call 0x12416a40 */
  push32(0x12421d6du); f_12416a40();
  /* 12421d6d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421d70 mov ecx, dword ptr [0x12441d88] */
  ECX = (r32((uint32_t)(0x12441d88)));
  /* 12421d76 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12421d78 mov edx, dword ptr [0x12441d88] */
  EDX = (r32((uint32_t)(0x12441d88)));
  /* 12421d7e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12421d81 jne 0x12421d8b */
  if (!C.zf) goto L_12421d8b;
  /* 12421d83 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12421d86 jmp 0x12421e32 */
  goto L_12421e32;
L_12421d8b:;
  /* 12421d8b push 0x1243e684 */
  push32((uint32_t)(0x1243e684u));
  /* 12421d90 mov eax, dword ptr [0x12441d88] */
  EAX = (r32((uint32_t)(0x12441d88)));
  /* 12421d95 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12421d97 push ecx */
  push32((uint32_t)(ECX));
  /* 12421d98 call 0x124199f0 */
  push32(0x12421d9du); f_124199f0();
  /* 12421d9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421da0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 12421da5 push 0x1243e6b4 */
  push32((uint32_t)(0x1243e6b4u));
  /* 12421daa push 2 */
  push32((uint32_t)(0x2u));
  /* 12421dac push 2 */
  push32((uint32_t)(0x2u));
  /* 12421dae call 0x12416a40 */
  push32(0x12421db3u); f_12416a40();
  /* 12421db3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421db6 mov edx, dword ptr [0x12441d88] */
  EDX = (r32((uint32_t)(0x12441d88)));
  /* 12421dbc mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12421dbf mov eax, dword ptr [0x12441d88] */
  EAX = (r32((uint32_t)(0x12441d88)));
  /* 12421dc4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12421dc8 jne 0x12421dcf */
  if (!C.zf) goto L_12421dcf;
  /* 12421dca or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12421dcd jmp 0x12421e32 */
  goto L_12421e32;
L_12421dcf:;
  /* 12421dcf mov ecx, dword ptr [0x12441d88] */
  ECX = (r32((uint32_t)(0x12441d88)));
  /* 12421dd5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12421dd8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12421ddb push 0x92 */
  push32((uint32_t)(0x92u));
  /* 12421de0 push 0x1243e6b4 */
  push32((uint32_t)(0x1243e6b4u));
  /* 12421de5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12421de7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12421de9 call 0x12416a40 */
  push32(0x12421deeu); f_12416a40();
  /* 12421dee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421df1 mov ecx, dword ptr [0x12441d88] */
  ECX = (r32((uint32_t)(0x12441d88)));
  /* 12421df7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12421dfa mov edx, dword ptr [0x12441d88] */
  EDX = (r32((uint32_t)(0x12441d88)));
  /* 12421e00 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12421e04 jne 0x12421e0b */
  if (!C.zf) goto L_12421e0b;
  /* 12421e06 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12421e09 jmp 0x12421e32 */
  goto L_12421e32;
L_12421e0b:;
  /* 12421e0b mov eax, dword ptr [0x12441d88] */
  EAX = (r32((uint32_t)(0x12441d88)));
  /* 12421e10 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12421e13 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12421e16 mov edx, dword ptr [0x12441d88] */
  EDX = (r32((uint32_t)(0x12441d88)));
  /* 12421e1c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12421e1e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12421e20 mov byte ptr [0x12440ea8], cl */
  w8((uint32_t)(0x12440ea8), (CL));
  /* 12421e26 mov dword ptr [0x12440eac], 1 */
  w32((uint32_t)(0x12440eac), (0x1u));
  /* 12421e30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12421e32:;
  /* 12421e32 mov esp, ebp */
  ESP = (EBP);
  /* 12421e34 pop ebp */
  EBP = (pop32());
  /* 12421e35 ret  */
  ESPCHK(0x12421b90u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12421e40 (125 bytes, 49 insns) */
void f_12421e40(void) {
  FTRACE(0x12421e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12421e40 push ebp */
  push32((uint32_t)(EBP));
  /* 12421e41 mov ebp, esp */
  EBP = (ESP);
  /* 12421e43 push ecx */
  push32((uint32_t)(ECX));
L_12421e44:;
  /* 12421e44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421e47 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12421e4a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12421e4c je 0x12421eb9 */
  if (C.zf) goto L_12421eb9;
  /* 12421e4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421e51 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12421e54 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12421e57 jl 0x12421e7d */
  if ((C.sf!=C.of)) goto L_12421e7d;
  /* 12421e59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421e5c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12421e5f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12421e62 jg 0x12421e7d */
  if ((!C.zf&&C.sf==C.of)) goto L_12421e7d;
  /* 12421e64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421e67 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12421e6a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12421e6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421e70 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12421e72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421e75 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12421e78 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12421e7b jmp 0x12421eb7 */
  goto L_12421eb7;
L_12421e7d:;
  /* 12421e7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421e80 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12421e83 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12421e86 jne 0x12421eae */
  if (!C.zf) goto L_12421eae;
  /* 12421e88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421e8b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12421e8e:;
  /* 12421e8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12421e91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12421e94 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12421e97 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12421e99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12421e9c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12421e9f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12421ea2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12421ea5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12421ea8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12421eaa jne 0x12421e8e */
  if (!C.zf) goto L_12421e8e;
  /* 12421eac jmp 0x12421eb7 */
  goto L_12421eb7;
L_12421eae:;
  /* 12421eae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12421eb1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12421eb4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12421eb7:;
  /* 12421eb7 jmp 0x12421e44 */
  goto L_12421e44;
L_12421eb9:;
  /* 12421eb9 mov esp, ebp */
  ESP = (EBP);
  /* 12421ebb pop ebp */
  EBP = (pop32());
  /* 12421ebc ret  */
  ESPCHK(0x12421e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ec0 @ 0x12421ec0 (304 bytes, 85 insns) */
void f_12421ec0(void) {
  FTRACE(0x12421ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12421ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 12421ec1 mov ebp, esp */
  EBP = (ESP);
  /* 12421ec3 push ecx */
  push32((uint32_t)(ECX));
  /* 12421ec4 cmp dword ptr [0x12442a2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442a2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12421ecb je 0x12421f8c */
  if (C.zf) goto L_12421f8c;
  /* 12421ed1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12421ed3 push 0x1243e6c0 */
  push32((uint32_t)(0x1243e6c0u));
  /* 12421ed8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12421eda push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12421edc push 1 */
  push32((uint32_t)(0x1u));
  /* 12421ede call 0x12416e50 */
  push32(0x12421ee3u); f_12416e50();
  /* 12421ee3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421ee6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12421ee9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12421eed jne 0x12421ef9 */
  if (!C.zf) goto L_12421ef9;
  /* 12421eef mov eax, 1 */
  EAX = (0x1u);
  /* 12421ef4 jmp 0x12421fec */
  goto L_12421fec;
L_12421ef9:;
  /* 12421ef9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12421efc push eax */
  push32((uint32_t)(EAX));
  /* 12421efd call 0x12421ff0 */
  push32(0x12421f02u); f_12421ff0();
  /* 12421f02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421f05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12421f07 je 0x12421f2d */
  if (C.zf) goto L_12421f2d;
  /* 12421f09 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12421f0c push ecx */
  push32((uint32_t)(ECX));
  /* 12421f0d call 0x12422280 */
  push32(0x12421f12u); f_12422280();
  /* 12421f12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421f15 push 2 */
  push32((uint32_t)(0x2u));
  /* 12421f17 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12421f1a push edx */
  push32((uint32_t)(EDX));
  /* 12421f1b call 0x124174d0 */
  push32(0x12421f20u); f_124174d0();
  /* 12421f20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421f23 mov eax, 1 */
  EAX = (0x1u);
  /* 12421f28 jmp 0x12421fec */
  goto L_12421fec;
L_12421f2d:;
  /* 12421f2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12421f30 mov ecx, dword ptr [0x12441d88] */
  ECX = (r32((uint32_t)(0x12441d88)));
  /* 12421f36 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12421f38 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12421f3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12421f3d mov ecx, dword ptr [0x12441d88] */
  ECX = (r32((uint32_t)(0x12441d88)));
  /* 12421f43 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12421f46 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12421f49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12421f4c mov ecx, dword ptr [0x12441d88] */
  ECX = (r32((uint32_t)(0x12441d88)));
  /* 12421f52 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12421f55 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12421f58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12421f5b mov dword ptr [0x12441d88], eax */
  w32((uint32_t)(0x12441d88), (EAX));
  /* 12421f60 mov ecx, dword ptr [0x12442a64] */
  ECX = (r32((uint32_t)(0x12442a64)));
  /* 12421f66 push ecx */
  push32((uint32_t)(ECX));
  /* 12421f67 call 0x12422280 */
  push32(0x12421f6cu); f_12422280();
  /* 12421f6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421f6f push 2 */
  push32((uint32_t)(0x2u));
  /* 12421f71 mov edx, dword ptr [0x12442a64] */
  EDX = (r32((uint32_t)(0x12442a64)));
  /* 12421f77 push edx */
  push32((uint32_t)(EDX));
  /* 12421f78 call 0x124174d0 */
  push32(0x12421f7du); f_124174d0();
  /* 12421f7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421f80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12421f83 mov dword ptr [0x12442a64], eax */
  w32((uint32_t)(0x12442a64), (EAX));
  /* 12421f88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12421f8a jmp 0x12421fec */
  goto L_12421fec;
L_12421f8c:;
  /* 12421f8c mov ecx, dword ptr [0x12441d88] */
  ECX = (r32((uint32_t)(0x12441d88)));
  /* 12421f92 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12421f94 mov dword ptr [0x12441d58], edx */
  w32((uint32_t)(0x12441d58), (EDX));
  /* 12421f9a mov eax, dword ptr [0x12441d88] */
  EAX = (r32((uint32_t)(0x12441d88)));
  /* 12421f9f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12421fa2 mov dword ptr [0x12441d5c], ecx */
  w32((uint32_t)(0x12441d5c), (ECX));
  /* 12421fa8 mov edx, dword ptr [0x12441d88] */
  EDX = (r32((uint32_t)(0x12441d88)));
  /* 12421fae mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12421fb1 mov dword ptr [0x12441d60], eax */
  w32((uint32_t)(0x12441d60), (EAX));
  /* 12421fb6 mov dword ptr [0x12441d88], 0x12441d58 */
  w32((uint32_t)(0x12441d88), (0x12441d58u));
  /* 12421fc0 mov ecx, dword ptr [0x12442a64] */
  ECX = (r32((uint32_t)(0x12442a64)));
  /* 12421fc6 push ecx */
  push32((uint32_t)(ECX));
  /* 12421fc7 call 0x12422280 */
  push32(0x12421fccu); f_12422280();
  /* 12421fcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421fcf push 2 */
  push32((uint32_t)(0x2u));
  /* 12421fd1 mov edx, dword ptr [0x12442a64] */
  EDX = (r32((uint32_t)(0x12442a64)));
  /* 12421fd7 push edx */
  push32((uint32_t)(EDX));
  /* 12421fd8 call 0x124174d0 */
  push32(0x12421fddu); f_124174d0();
  /* 12421fdd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12421fe0 mov dword ptr [0x12442a64], 0 */
  w32((uint32_t)(0x12442a64), (0x0u));
  /* 12421fea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12421fec:;
  /* 12421fec mov esp, ebp */
  ESP = (EBP);
  /* 12421fee pop ebp */
  EBP = (pop32());
  /* 12421fef ret  */
  ESPCHK(0x12421ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ff0 @ 0x12421ff0 (525 bytes, 200 insns) */
void f_12421ff0(void) {
  FTRACE(0x12421ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12421ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 12421ff1 mov ebp, esp */
  EBP = (ESP);
  /* 12421ff3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12421ff6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12421ffd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12421fff mov ax, word ptr [0x12442a84] */
  AX = (r16((uint32_t)(0x12442a84)));
  /* 12422005 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12422008 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242200c jne 0x12422016 */
  if (!C.zf) goto L_12422016;
  /* 1242200e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12422011 jmp 0x124221f9 */
  goto L_124221f9;
L_12422016:;
  /* 12422016 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12422019 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242201c push ecx */
  push32((uint32_t)(ECX));
  /* 1242201d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1242201f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12422022 push edx */
  push32((uint32_t)(EDX));
  /* 12422023 push 1 */
  push32((uint32_t)(0x1u));
  /* 12422025 call 0x12424c00 */
  push32(0x1242202au); f_12424c00();
  /* 1242202a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242202d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12422030 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12422032 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12422035 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12422038 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242203b push edx */
  push32((uint32_t)(EDX));
  /* 1242203c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1242203e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12422041 push eax */
  push32((uint32_t)(EAX));
  /* 12422042 push 1 */
  push32((uint32_t)(0x1u));
  /* 12422044 call 0x12424c00 */
  push32(0x12422049u); f_12424c00();
  /* 12422049 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242204c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1242204f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12422051 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12422054 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12422057 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242205a push edx */
  push32((uint32_t)(EDX));
  /* 1242205b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1242205d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12422060 push eax */
  push32((uint32_t)(EAX));
  /* 12422061 push 1 */
  push32((uint32_t)(0x1u));
  /* 12422063 call 0x12424c00 */
  push32(0x12422068u); f_12424c00();
  /* 12422068 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242206b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1242206e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12422070 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12422073 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12422076 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12422079 push edx */
  push32((uint32_t)(EDX));
  /* 1242207a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1242207c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1242207f push eax */
  push32((uint32_t)(EAX));
  /* 12422080 push 1 */
  push32((uint32_t)(0x1u));
  /* 12422082 call 0x12424c00 */
  push32(0x12422087u); f_12424c00();
  /* 12422087 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242208a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1242208d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1242208f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12422092 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12422095 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12422098 push edx */
  push32((uint32_t)(EDX));
  /* 12422099 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1242209b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1242209e push eax */
  push32((uint32_t)(EAX));
  /* 1242209f push 1 */
  push32((uint32_t)(0x1u));
  /* 124220a1 call 0x12424c00 */
  push32(0x124220a6u); f_12424c00();
  /* 124220a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124220a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124220ac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124220ae mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124220b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124220b4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 124220b7 push eax */
  push32((uint32_t)(EAX));
  /* 124220b8 call 0x12422200 */
  push32(0x124220bdu); f_12422200();
  /* 124220bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124220c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124220c3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124220c6 push ecx */
  push32((uint32_t)(ECX));
  /* 124220c7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 124220c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124220cc push edx */
  push32((uint32_t)(EDX));
  /* 124220cd push 1 */
  push32((uint32_t)(0x1u));
  /* 124220cf call 0x12424c00 */
  push32(0x124220d4u); f_12424c00();
  /* 124220d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124220d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124220da or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124220dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124220df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124220e2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124220e5 push edx */
  push32((uint32_t)(EDX));
  /* 124220e6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 124220e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124220eb push eax */
  push32((uint32_t)(EAX));
  /* 124220ec push 1 */
  push32((uint32_t)(0x1u));
  /* 124220ee call 0x12424c00 */
  push32(0x124220f3u); f_12424c00();
  /* 124220f3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124220f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124220f9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124220fb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124220fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12422101 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12422104 push edx */
  push32((uint32_t)(EDX));
  /* 12422105 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12422107 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1242210a push eax */
  push32((uint32_t)(EAX));
  /* 1242210b push 0 */
  push32((uint32_t)(0x0u));
  /* 1242210d call 0x12424c00 */
  push32(0x12422112u); f_12424c00();
  /* 12422112 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12422115 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12422118 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1242211a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1242211d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12422120 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12422123 push edx */
  push32((uint32_t)(EDX));
  /* 12422124 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12422126 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12422129 push eax */
  push32((uint32_t)(EAX));
  /* 1242212a push 0 */
  push32((uint32_t)(0x0u));
  /* 1242212c call 0x12424c00 */
  push32(0x12422131u); f_12424c00();
  /* 12422131 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12422134 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12422137 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12422139 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1242213c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242213f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12422142 push edx */
  push32((uint32_t)(EDX));
  /* 12422143 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 12422145 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12422148 push eax */
  push32((uint32_t)(EAX));
  /* 12422149 push 0 */
  push32((uint32_t)(0x0u));
  /* 1242214b call 0x12424c00 */
  push32(0x12422150u); f_12424c00();
  /* 12422150 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12422153 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12422156 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12422158 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1242215b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242215e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12422161 push edx */
  push32((uint32_t)(EDX));
  /* 12422162 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 12422164 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12422167 push eax */
  push32((uint32_t)(EAX));
  /* 12422168 push 0 */
  push32((uint32_t)(0x0u));
  /* 1242216a call 0x12424c00 */
  push32(0x1242216fu); f_12424c00();
  /* 1242216f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12422172 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12422175 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12422177 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1242217a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242217d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12422180 push edx */
  push32((uint32_t)(EDX));
  /* 12422181 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 12422183 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12422186 push eax */
  push32((uint32_t)(EAX));
  /* 12422187 push 0 */
  push32((uint32_t)(0x0u));
  /* 12422189 call 0x12424c00 */
  push32(0x1242218eu); f_12424c00();
  /* 1242218e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12422191 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12422194 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12422196 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12422199 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242219c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242219f push edx */
  push32((uint32_t)(EDX));
  /* 124221a0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 124221a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124221a5 push eax */
  push32((uint32_t)(EAX));
  /* 124221a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 124221a8 call 0x12424c00 */
  push32(0x124221adu); f_12424c00();
  /* 124221ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124221b0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124221b3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124221b5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124221b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124221bb add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124221be push edx */
  push32((uint32_t)(EDX));
  /* 124221bf push 0x52 */
  push32((uint32_t)(0x52u));
  /* 124221c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124221c4 push eax */
  push32((uint32_t)(EAX));
  /* 124221c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 124221c7 call 0x12424c00 */
  push32(0x124221ccu); f_12424c00();
  /* 124221cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124221cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124221d2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124221d4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124221d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124221da add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124221dd push edx */
  push32((uint32_t)(EDX));
  /* 124221de push 0x53 */
  push32((uint32_t)(0x53u));
  /* 124221e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124221e3 push eax */
  push32((uint32_t)(EAX));
  /* 124221e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 124221e6 call 0x12424c00 */
  push32(0x124221ebu); f_12424c00();
  /* 124221eb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124221ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124221f1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 124221f3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124221f6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_124221f9:;
  /* 124221f9 mov esp, ebp */
  ESP = (EBP);
  /* 124221fb pop ebp */
  EBP = (pop32());
  /* 124221fc ret  */
  ESPCHK(0x12421ff0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12422200 (125 bytes, 49 insns) */
void f_12422200(void) {
  FTRACE(0x12422200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12422200 push ebp */
  push32((uint32_t)(EBP));
  /* 12422201 mov ebp, esp */
  EBP = (ESP);
  /* 12422203 push ecx */
  push32((uint32_t)(ECX));
L_12422204:;
  /* 12422204 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12422207 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1242220a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1242220c je 0x12422279 */
  if (C.zf) goto L_12422279;
  /* 1242220e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12422211 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12422214 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12422217 jl 0x1242223d */
  if ((C.sf!=C.of)) goto L_1242223d;
  /* 12422219 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242221c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1242221f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12422222 jg 0x1242223d */
  if ((!C.zf&&C.sf==C.of)) goto L_1242223d;
  /* 12422224 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12422227 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1242222a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1242222d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12422230 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12422232 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12422235 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12422238 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1242223b jmp 0x12422277 */
  goto L_12422277;
L_1242223d:;
  /* 1242223d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12422240 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12422243 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12422246 jne 0x1242226e */
  if (!C.zf) goto L_1242226e;
  /* 12422248 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242224b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1242224e:;
  /* 1242224e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12422251 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12422254 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12422257 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12422259 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1242225c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242225f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12422262 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12422265 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12422268 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1242226a jne 0x1242224e */
  if (!C.zf) goto L_1242224e;
  /* 1242226c jmp 0x12422277 */
  goto L_12422277;
L_1242226e:;
  /* 1242226e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12422271 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12422274 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12422277:;
  /* 12422277 jmp 0x12422204 */
  goto L_12422204;
L_12422279:;
  /* 12422279 mov esp, ebp */
  ESP = (EBP);
  /* 1242227b pop ebp */
  EBP = (pop32());
  /* 1242227c ret  */
  ESPCHK(0x12422200u, _esp0);
  ESP += 4; return;
}

/* FUN_10012280 @ 0x12422280 (147 bytes, 52 insns) */
void f_12422280(void) {
  FTRACE(0x12422280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12422280 push ebp */
  push32((uint32_t)(EBP));
  /* 12422281 mov ebp, esp */
  EBP = (ESP);
  /* 12422283 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12422287 jne 0x1242228e */
  if (!C.zf) goto L_1242228e;
  /* 12422289 jmp 0x12422311 */
  goto L_12422311;
L_1242228e:;
  /* 1242228e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12422291 cmp dword ptr [eax + 0xc], 0x12442ac0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x12442ac0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12422298 je 0x12422311 */
  if (C.zf) goto L_12422311;
  /* 1242229a push 2 */
  push32((uint32_t)(0x2u));
  /* 1242229c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242229f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 124222a2 push edx */
  push32((uint32_t)(EDX));
  /* 124222a3 call 0x124174d0 */
  push32(0x124222a8u); f_124174d0();
  /* 124222a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124222ab push 2 */
  push32((uint32_t)(0x2u));
  /* 124222ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124222b0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 124222b3 push ecx */
  push32((uint32_t)(ECX));
  /* 124222b4 call 0x124174d0 */
  push32(0x124222b9u); f_124174d0();
  /* 124222b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124222bc push 2 */
  push32((uint32_t)(0x2u));
  /* 124222be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124222c1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 124222c4 push eax */
  push32((uint32_t)(EAX));
  /* 124222c5 call 0x124174d0 */
  push32(0x124222cau); f_124174d0();
  /* 124222ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124222cd push 2 */
  push32((uint32_t)(0x2u));
  /* 124222cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124222d2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 124222d5 push edx */
  push32((uint32_t)(EDX));
  /* 124222d6 call 0x124174d0 */
  push32(0x124222dbu); f_124174d0();
  /* 124222db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124222de push 2 */
  push32((uint32_t)(0x2u));
  /* 124222e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124222e3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 124222e6 push ecx */
  push32((uint32_t)(ECX));
  /* 124222e7 call 0x124174d0 */
  push32(0x124222ecu); f_124174d0();
  /* 124222ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124222ef push 2 */
  push32((uint32_t)(0x2u));
  /* 124222f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124222f4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 124222f7 push eax */
  push32((uint32_t)(EAX));
  /* 124222f8 call 0x124174d0 */
  push32(0x124222fdu); f_124174d0();
  /* 124222fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12422300 push 2 */
  push32((uint32_t)(0x2u));
  /* 12422302 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12422305 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 12422308 push edx */
  push32((uint32_t)(EDX));
  /* 12422309 call 0x124174d0 */
  push32(0x1242230eu); f_124174d0();
  /* 1242230e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12422311:;
  /* 12422311 pop ebp */
  EBP = (pop32());
  /* 12422312 ret  */
  ESPCHK(0x12422280u, _esp0);
  ESP += 4; return;
}

/* FUN_10012320 @ 0x12422320 (928 bytes, 284 insns) */
void f_12422320(void) {
  FTRACE(0x12422320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12422320 push ebp */
  push32((uint32_t)(EBP));
  /* 12422321 mov ebp, esp */
  EBP = (ESP);
  /* 12422323 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12422326 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 1242232d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12422334 cmp dword ptr [0x12442a28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442a28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242233b je 0x12422671 */
  if (C.zf) goto L_12422671;
  /* 12422341 cmp dword ptr [0x12442a38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442a38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12422348 jne 0x12422370 */
  if (!C.zf) goto L_12422370;
  /* 1242234a push 0x12442a38 */
  push32((uint32_t)(0x12442a38u));
  /* 1242234f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12422354 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12422356 mov ax, word ptr [0x12442a7c] */
  AX = (r16((uint32_t)(0x12442a7c)));
  /* 1242235c push eax */
  push32((uint32_t)(EAX));
  /* 1242235d push 0 */
  push32((uint32_t)(0x0u));
  /* 1242235f call 0x12424c00 */
  push32(0x12422364u); f_12424c00();
  /* 12422364 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12422367 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12422369 je 0x12422370 */
  if (C.zf) goto L_12422370;
  /* 1242236b jmp 0x12422632 */
  goto L_12422632;
L_12422370:;
  /* 12422370 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 12422372 push 0x1243e6cc */
  push32((uint32_t)(0x1243e6ccu));
  /* 12422377 push 2 */
  push32((uint32_t)(0x2u));
  /* 12422379 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1242237e call 0x12416a40 */
  push32(0x12422383u); f_12416a40();
  /* 12422383 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12422386 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12422389 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1242238b push 0x1243e6cc */
  push32((uint32_t)(0x1243e6ccu));
  /* 12422390 push 2 */
  push32((uint32_t)(0x2u));
  /* 12422392 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12422397 call 0x12416a40 */
  push32(0x1242239cu); f_12416a40();
  /* 1242239c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242239f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 124223a2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 124223a4 push 0x1243e6cc */
  push32((uint32_t)(0x1243e6ccu));
  /* 124223a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 124223ab push 0x101 */
  push32((uint32_t)(0x101u));
  /* 124223b0 call 0x12416a40 */
  push32(0x124223b5u); f_12416a40();
  /* 124223b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124223b8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 124223bb push 0x62 */
  push32((uint32_t)(0x62u));
  /* 124223bd push 0x1243e6cc */
  push32((uint32_t)(0x1243e6ccu));
  /* 124223c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 124223c4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 124223c9 call 0x12416a40 */
  push32(0x124223ceu); f_12416a40();
  /* 124223ce add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124223d1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 124223d4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124223d8 je 0x124223ec */
  if (C.zf) goto L_124223ec;
  /* 124223da cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124223de je 0x124223ec */
  if (C.zf) goto L_124223ec;
  /* 124223e0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124223e4 je 0x124223ec */
  if (C.zf) goto L_124223ec;
  /* 124223e6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124223ea jne 0x124223f1 */
  if (!C.zf) goto L_124223f1;
L_124223ec:;
  /* 124223ec jmp 0x12422632 */
  goto L_12422632;
L_124223f1:;
  /* 124223f1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124223f4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 124223f7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 124223fe jmp 0x12422409 */
  goto L_12422409;
L_12422400:;
  /* 12422400 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12422403 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12422406 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12422409:;
  /* 12422409 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12422410 jge 0x12422425 */
  if ((C.sf==C.of)) goto L_12422425;
  /* 12422412 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12422415 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 12422418 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1242241a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1242241d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12422420 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12422423 jmp 0x12422400 */
  goto L_12422400;
L_12422425:;
  /* 12422425 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 12422428 push eax */
  push32((uint32_t)(EAX));
  /* 12422429 mov ecx, dword ptr [0x12442a38] */
  ECX = (r32((uint32_t)(0x12442a38)));
  /* 1242242f push ecx */
  push32((uint32_t)(ECX));
  /* 12422430 call dword ptr [0x12445314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445314))), 0x12422436u);
  /* 12422436 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12422438 jne 0x1242243f */
  if (!C.zf) goto L_1242243f;
  /* 1242243a jmp 0x12422632 */
  goto L_12422632;
L_1242243f:;
  /* 1242243f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12422443 jbe 0x1242244a */
  if ((C.cf||C.zf)) goto L_1242244a;
  /* 12422445 jmp 0x12422632 */
  goto L_12422632;
L_1242244a:;
  /* 1242244a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1242244d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12422453 mov dword ptr [0x12440ea4], edx */
  w32((uint32_t)(0x12440ea4), (EDX));
  /* 12422459 cmp dword ptr [0x12440ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12440ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12422460 jle 0x124224b9 */
  if ((C.zf||C.sf!=C.of)) goto L_124224b9;
  /* 12422462 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 12422465 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12422468 jmp 0x12422473 */
  goto L_12422473;
L_1242246a:;
  /* 1242246a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1242246d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12422470 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12422473:;
  /* 12422473 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12422476 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12422478 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1242247a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1242247c je 0x124224b9 */
  if (C.zf) goto L_124224b9;
  /* 1242247e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12422481 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12422483 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12422486 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12422488 je 0x124224b9 */
  if (C.zf) goto L_124224b9;
  /* 1242248a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1242248d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1242248f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12422491 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12422494 jmp 0x1242249f */
  goto L_1242249f;
L_12422496:;
  /* 12422496 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12422499 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242249c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1242249f:;
  /* 1242249f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 124224a2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124224a4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 124224a7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124224aa jg 0x124224b7 */
  if ((!C.zf&&C.sf==C.of)) goto L_124224b7;
  /* 124224ac mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124224af add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124224b2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 124224b5 jmp 0x12422496 */
  goto L_12422496;
L_124224b7:;
  /* 124224b7 jmp 0x1242246a */
  goto L_1242246a;
L_124224b9:;
  /* 124224b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 124224bb push 0 */
  push32((uint32_t)(0x0u));
  /* 124224bd push 0 */
  push32((uint32_t)(0x0u));
  /* 124224bf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 124224c2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124224c5 push eax */
  push32((uint32_t)(EAX));
  /* 124224c6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 124224cb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 124224ce push ecx */
  push32((uint32_t)(ECX));
  /* 124224cf push 1 */
  push32((uint32_t)(0x1u));
  /* 124224d1 call 0x1241ec70 */
  push32(0x124224d6u); f_1241ec70();
  /* 124224d6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124224d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124224db jne 0x124224e2 */
  if (!C.zf) goto L_124224e2;
  /* 124224dd jmp 0x12422632 */
  goto L_12422632;
L_124224e2:;
  /* 124224e2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 124224e5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 124224ea mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 124224ed mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 124224f0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 124224f7 jmp 0x12422502 */
  goto L_12422502;
L_124224f9:;
  /* 124224f9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124224fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124224ff mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12422502:;
  /* 12422502 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12422509 jge 0x12422520 */
  if ((C.sf==C.of)) goto L_12422520;
  /* 1242250b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1242250e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 12422512 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 12422515 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12422518 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242251b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1242251e jmp 0x124224f9 */
  goto L_124224f9;
L_12422520:;
  /* 12422520 push 0 */
  push32((uint32_t)(0x0u));
  /* 12422522 push 0 */
  push32((uint32_t)(0x0u));
  /* 12422524 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12422527 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242252a push edx */
  push32((uint32_t)(EDX));
  /* 1242252b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12422530 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12422533 push eax */
  push32((uint32_t)(EAX));
  /* 12422534 push 1 */
  push32((uint32_t)(0x1u));
  /* 12422536 call 0x12424ea0 */
  push32(0x1242253bu); f_12424ea0();
  /* 1242253b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242253e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12422540 jne 0x12422547 */
  if (!C.zf) goto L_12422547;
  /* 12422542 jmp 0x12422632 */
  goto L_12422632;
L_12422547:;
  /* 12422547 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1242254a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 1242254f cmp dword ptr [0x12440ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12440ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12422556 jle 0x124225b3 */
  if ((C.zf||C.sf!=C.of)) goto L_124225b3;
  /* 12422558 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 1242255b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1242255e jmp 0x12422569 */
  goto L_12422569;
L_12422560:;
  /* 12422560 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12422563 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12422566 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12422569:;
  /* 12422569 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1242256c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1242256e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12422570 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12422572 je 0x124225b3 */
  if (C.zf) goto L_124225b3;
  /* 12422574 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12422577 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12422579 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1242257c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1242257e je 0x124225b3 */
  if (C.zf) goto L_124225b3;
  /* 12422580 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12422583 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12422585 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12422587 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1242258a jmp 0x12422595 */
  goto L_12422595;
L_1242258c:;
  /* 1242258c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1242258f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12422592 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12422595:;
  /* 12422595 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12422598 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1242259a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1242259d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124225a0 jg 0x124225b1 */
  if ((!C.zf&&C.sf==C.of)) goto L_124225b1;
  /* 124225a2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 124225a5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 124225a8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 124225af jmp 0x1242258c */
  goto L_1242258c;
L_124225b1:;
  /* 124225b1 jmp 0x12422560 */
  goto L_12422560;
L_124225b3:;
  /* 124225b3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 124225b6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124225b9 mov dword ptr [0x12440c98], eax */
  w32((uint32_t)(0x12440c98), (EAX));
  /* 124225be mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 124225c1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124225c4 mov dword ptr [0x12440c9c], ecx */
  w32((uint32_t)(0x12440c9c), (ECX));
  /* 124225ca cmp dword ptr [0x12442a68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442a68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124225d1 je 0x124225e4 */
  if (C.zf) goto L_124225e4;
  /* 124225d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 124225d5 mov edx, dword ptr [0x12442a68] */
  EDX = (r32((uint32_t)(0x12442a68)));
  /* 124225db push edx */
  push32((uint32_t)(EDX));
  /* 124225dc call 0x124174d0 */
  push32(0x124225e1u); f_124174d0();
  /* 124225e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124225e4:;
  /* 124225e4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 124225e7 mov dword ptr [0x12442a68], eax */
  w32((uint32_t)(0x12442a68), (EAX));
  /* 124225ec cmp dword ptr [0x12442a6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442a6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124225f3 je 0x12422606 */
  if (C.zf) goto L_12422606;
  /* 124225f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 124225f7 mov ecx, dword ptr [0x12442a6c] */
  ECX = (r32((uint32_t)(0x12442a6c)));
  /* 124225fd push ecx */
  push32((uint32_t)(ECX));
  /* 124225fe call 0x124174d0 */
  push32(0x12422603u); f_124174d0();
  /* 12422603 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12422606:;
  /* 12422606 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12422609 mov dword ptr [0x12442a6c], edx */
  w32((uint32_t)(0x12442a6c), (EDX));
  /* 1242260f push 2 */
  push32((uint32_t)(0x2u));
  /* 12422611 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12422614 push eax */
  push32((uint32_t)(EAX));
  /* 12422615 call 0x124174d0 */
  push32(0x1242261au); f_124174d0();
  /* 1242261a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242261d push 2 */
  push32((uint32_t)(0x2u));
  /* 1242261f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12422622 push ecx */
  push32((uint32_t)(ECX));
  /* 12422623 call 0x124174d0 */
  push32(0x12422628u); f_124174d0();
  /* 12422628 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242262b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1242262d jmp 0x124226bc */
  goto L_124226bc;
L_12422632:;
  /* 12422632 push 2 */
  push32((uint32_t)(0x2u));
  /* 12422634 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12422637 push edx */
  push32((uint32_t)(EDX));
  /* 12422638 call 0x124174d0 */
  push32(0x1242263du); f_124174d0();
  /* 1242263d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12422640 push 2 */
  push32((uint32_t)(0x2u));
  /* 12422642 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12422645 push eax */
  push32((uint32_t)(EAX));
  /* 12422646 call 0x124174d0 */
  push32(0x1242264bu); f_124174d0();
  /* 1242264b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242264e push 2 */
  push32((uint32_t)(0x2u));
  /* 12422650 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12422653 push ecx */
  push32((uint32_t)(ECX));
  /* 12422654 call 0x124174d0 */
  push32(0x12422659u); f_124174d0();
  /* 12422659 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242265c push 2 */
  push32((uint32_t)(0x2u));
  /* 1242265e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12422661 push edx */
  push32((uint32_t)(EDX));
  /* 12422662 call 0x124174d0 */
  push32(0x12422667u); f_124174d0();
  /* 12422667 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242266a mov eax, 1 */
  EAX = (0x1u);
  /* 1242266f jmp 0x124226bc */
  goto L_124226bc;
L_12422671:;
  /* 12422671 mov dword ptr [0x12440c98], 0x12440ca2 */
  w32((uint32_t)(0x12440c98), (0x12440ca2u));
  /* 1242267b mov dword ptr [0x12440c9c], 0x12440ca2 */
  w32((uint32_t)(0x12440c9c), (0x12440ca2u));
  /* 12422685 push 2 */
  push32((uint32_t)(0x2u));
  /* 12422687 mov eax, dword ptr [0x12442a68] */
  EAX = (r32((uint32_t)(0x12442a68)));
  /* 1242268c push eax */
  push32((uint32_t)(EAX));
  /* 1242268d call 0x124174d0 */
  push32(0x12422692u); f_124174d0();
  /* 12422692 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12422695 push 2 */
  push32((uint32_t)(0x2u));
  /* 12422697 mov ecx, dword ptr [0x12442a6c] */
  ECX = (r32((uint32_t)(0x12442a6c)));
  /* 1242269d push ecx */
  push32((uint32_t)(ECX));
  /* 1242269e call 0x124174d0 */
  push32(0x124226a3u); f_124174d0();
  /* 124226a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124226a6 mov dword ptr [0x12442a68], 0 */
  w32((uint32_t)(0x12442a68), (0x0u));
  /* 124226b0 mov dword ptr [0x12442a6c], 0 */
  w32((uint32_t)(0x12442a6c), (0x0u));
  /* 124226ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124226bc:;
  /* 124226bc mov esp, ebp */
  ESP = (EBP);
  /* 124226be pop ebp */
  EBP = (pop32());
  /* 124226bf ret  */
  ESPCHK(0x12422320u, _esp0);
  ESP += 4; return;
}

/* FUN_100126c0 @ 0x124226c0 (7 bytes, 5 insns) */
void f_124226c0(void) {
  FTRACE(0x124226c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124226c0 push ebp */
  push32((uint32_t)(EBP));
  /* 124226c1 mov ebp, esp */
  EBP = (ESP);
  /* 124226c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124226c5 pop ebp */
  EBP = (pop32());
  /* 124226c6 ret  */
  ESPCHK(0x124226c0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x124226d0 (129 bytes, 56 insns) */
void f_124226d0(void) {
  FTRACE(0x124226d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124226d0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 124226d4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 124226d8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 124226de jne 0x1242271c */
  if (!C.zf) goto L_1242271c;
L_124226e0:;
  /* 124226e0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124226e2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124226e4 jne 0x12422714 */
  if (!C.zf) goto L_12422714;
  /* 124226e6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 124226e8 je 0x12422710 */
  if (C.zf) goto L_12422710;
  /* 124226ea cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124226ed jne 0x12422714 */
  if (!C.zf) goto L_12422714;
  /* 124226ef or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 124226f1 je 0x12422710 */
  if (C.zf) goto L_12422710;
  /* 124226f3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 124226f6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124226f9 jne 0x12422714 */
  if (!C.zf) goto L_12422714;
  /* 124226fb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 124226fd je 0x12422710 */
  if (C.zf) goto L_12422710;
  /* 124226ff cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12422702 jne 0x12422714 */
  if (!C.zf) goto L_12422714;
  /* 12422704 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12422707 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242270a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1242270c jne 0x124226e0 */
  if (!C.zf) goto L_124226e0;
  /* 1242270e mov edi, edi */
  EDI = (EDI);
L_12422710:;
  /* 12422710 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12422712 ret  */
  ESPCHK(0x124226d0u, _esp0);
  ESP += 4; return;
  /* 12422713 nop  */
  /* nop */
L_12422714:;
  /* 12422714 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12422716 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12422718 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12422719 ret  */
  ESPCHK(0x124226d0u, _esp0);
  ESP += 4; return;
  /* 1242271a mov edi, edi */
  EDI = (EDI);
L_1242271c:;
  /* 1242271c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 12422722 je 0x12422738 */
  if (C.zf) goto L_12422738;
  /* 12422724 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12422726 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12422727 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12422729 jne 0x12422714 */
  if (!C.zf) goto L_12422714;
  /* 1242272b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1242272c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1242272e je 0x12422710 */
  if (C.zf) goto L_12422710;
  /* 12422730 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 12422736 je 0x124226e0 */
  if (C.zf) goto L_124226e0;
L_12422738:;
  /* 12422738 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1242273b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242273e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12422740 jne 0x12422714 */
  if (!C.zf) goto L_12422714;
  /* 12422742 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12422744 je 0x12422710 */
  if (C.zf) goto L_12422710;
  /* 12422746 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12422749 jne 0x12422714 */
  if (!C.zf) goto L_12422714;
  /* 1242274b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1242274d je 0x12422710 */
  if (C.zf) goto L_12422710;
  /* 1242274f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12422752 jmp 0x124226e0 */
  goto L_124226e0;
}

/* FUN_10012760 @ 0x12422760 (62 bytes, 35 insns) */
void f_12422760(void) {
  FTRACE(0x12422760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12422760 push ebp */
  push32((uint32_t)(EBP));
  /* 12422761 mov ebp, esp */
  EBP = (ESP);
  /* 12422763 push esi */
  push32((uint32_t)(ESI));
  /* 12422764 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12422766 push eax */
  push32((uint32_t)(EAX));
  /* 12422767 push eax */
  push32((uint32_t)(EAX));
  /* 12422768 push eax */
  push32((uint32_t)(EAX));
  /* 12422769 push eax */
  push32((uint32_t)(EAX));
  /* 1242276a push eax */
  push32((uint32_t)(EAX));
  /* 1242276b push eax */
  push32((uint32_t)(EAX));
  /* 1242276c push eax */
  push32((uint32_t)(EAX));
  /* 1242276d push eax */
  push32((uint32_t)(EAX));
  /* 1242276e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12422771 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12422774:;
  /* 12422774 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12422776 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12422778 je 0x12422781 */
  if (C.zf) goto L_12422781;
  /* 1242277a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1242277b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1242277b");
  /* 1242277f jmp 0x12422774 */
  goto L_12422774;
L_12422781:;
  /* 12422781 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12422784 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12422787 nop  */
  /* nop */
L_12422788:;
  /* 12422788 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12422789 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1242278b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1242278d je 0x12422796 */
  if (C.zf) goto L_12422796;
  /* 1242278f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12422790 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12422790");
  /* 12422794 jae 0x12422788 */
  if (!C.cf) goto L_12422788;
L_12422796:;
  /* 12422796 mov eax, ecx */
  EAX = (ECX);
  /* 12422798 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242279b pop esi */
  ESI = (pop32());
  /* 1242279c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1242279d ret  */
  ESPCHK(0x12422760u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x124227a0 (56 bytes, 31 insns) */
void f_124227a0(void) {
  FTRACE(0x124227a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124227a0 push ebp */
  push32((uint32_t)(EBP));
  /* 124227a1 mov ebp, esp */
  EBP = (ESP);
  /* 124227a3 push edi */
  push32((uint32_t)(EDI));
  /* 124227a4 push esi */
  push32((uint32_t)(ESI));
  /* 124227a5 push ebx */
  push32((uint32_t)(EBX));
  /* 124227a6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124227a9 jecxz 0x124227d1 */
  x86_unimpl("jecxz @ 0x124227a9");
  /* 124227ab mov ebx, ecx */
  EBX = (ECX);
  /* 124227ad mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 124227b0 mov esi, edi */
  ESI = (EDI);
  /* 124227b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124227b4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 124227b6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 124227b8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124227ba mov edi, esi */
  EDI = (ESI);
  /* 124227bc mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 124227bf repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 124227c1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 124227c4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124227c6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 124227c9 ja 0x124227cf */
  if ((!C.cf&&!C.zf)) goto L_124227cf;
  /* 124227cb je 0x124227d1 */
  if (C.zf) goto L_124227d1;
  /* 124227cd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 124227ce dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_124227cf:;
  /* 124227cf not ecx */
  ECX = (~(ECX));
L_124227d1:;
  /* 124227d1 mov eax, ecx */
  EAX = (ECX);
  /* 124227d3 pop ebx */
  EBX = (pop32());
  /* 124227d4 pop esi */
  ESI = (pop32());
  /* 124227d5 pop edi */
  EDI = (pop32());
  /* 124227d6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 124227d7 ret  */
  ESPCHK(0x124227a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100127e0 @ 0x124227e0 (58 bytes, 32 insns) */
void f_124227e0(void) {
  FTRACE(0x124227e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124227e0 push ebp */
  push32((uint32_t)(EBP));
  /* 124227e1 mov ebp, esp */
  EBP = (ESP);
  /* 124227e3 push esi */
  push32((uint32_t)(ESI));
  /* 124227e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124227e6 push eax */
  push32((uint32_t)(EAX));
  /* 124227e7 push eax */
  push32((uint32_t)(EAX));
  /* 124227e8 push eax */
  push32((uint32_t)(EAX));
  /* 124227e9 push eax */
  push32((uint32_t)(EAX));
  /* 124227ea push eax */
  push32((uint32_t)(EAX));
  /* 124227eb push eax */
  push32((uint32_t)(EAX));
  /* 124227ec push eax */
  push32((uint32_t)(EAX));
  /* 124227ed push eax */
  push32((uint32_t)(EAX));
  /* 124227ee mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124227f1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_124227f4:;
  /* 124227f4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124227f6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 124227f8 je 0x12422801 */
  if (C.zf) goto L_12422801;
  /* 124227fa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 124227fb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x124227fb");
  /* 124227ff jmp 0x124227f4 */
  goto L_124227f4;
L_12422801:;
  /* 12422801 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_12422804:;
  /* 12422804 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12422806 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12422808 je 0x12422814 */
  if (C.zf) goto L_12422814;
  /* 1242280a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1242280b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1242280b");
  /* 1242280f jae 0x12422804 */
  if (!C.cf) goto L_12422804;
  /* 12422811 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_12422814:;
  /* 12422814 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12422817 pop esi */
  ESI = (pop32());
  /* 12422818 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12422819 ret  */
  ESPCHK(0x124227e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012820 @ 0x12422820 (512 bytes, 147 insns) */
void f_12422820(void) {
  FTRACE(0x12422820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12422820 push ebp */
  push32((uint32_t)(EBP));
  /* 12422821 mov ebp, esp */
  EBP = (ESP);
  /* 12422823 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12422826 cmp dword ptr [0x12442ab4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442ab4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242282d jne 0x12422852 */
  if (!C.zf) goto L_12422852;
  /* 1242282f call 0x124232f0 */
  push32(0x12422834u); f_124232f0();
  /* 12422834 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12422836 je 0x12422842 */
  if (C.zf) goto L_12422842;
  /* 12422838 mov eax, dword ptr [0x124452d8] */
  EAX = (r32((uint32_t)(0x124452d8)));
  /* 1242283d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12422840 jmp 0x12422849 */
  goto L_12422849;
L_12422842:;
  /* 12422842 mov dword ptr [ebp - 8], 0x12423340 */
  w32((uint32_t)(EBP + -0x8), (0x12423340u));
L_12422849:;
  /* 12422849 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1242284c mov dword ptr [0x12442ab4], ecx */
  w32((uint32_t)(0x12442ab4), (ECX));
L_12422852:;
  /* 12422852 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12422856 jne 0x12422862 */
  if (!C.zf) goto L_12422862;
  /* 12422858 call 0x12423140 */
  push32(0x1242285du); f_12423140();
  /* 1242285d jmp 0x1242292e */
  goto L_1242292e;
L_12422862:;
  /* 12422862 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12422865 mov dword ptr [0x12442aa4], edx */
  w32((uint32_t)(0x12442aa4), (EDX));
  /* 1242286b cmp dword ptr [0x12442aa4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442aa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12422872 je 0x12422894 */
  if (C.zf) goto L_12422894;
  /* 12422874 mov eax, dword ptr [0x12442aa4] */
  EAX = (r32((uint32_t)(0x12442aa4)));
  /* 12422879 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1242287c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1242287e je 0x12422894 */
  if (C.zf) goto L_12422894;
  /* 12422880 push 0x12442aa4 */
  push32((uint32_t)(0x12442aa4u));
  /* 12422885 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12422887 push 0x12441a90 */
  push32((uint32_t)(0x12441a90u));
  /* 1242288c call 0x12422a20 */
  push32(0x12422891u); f_12422a20();
  /* 12422891 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12422894:;
  /* 12422894 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12422897 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242289a mov dword ptr [0x12442aa8], edx */
  w32((uint32_t)(0x12442aa8), (EDX));
  /* 124228a0 cmp dword ptr [0x12442aa8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442aa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124228a7 je 0x124228c9 */
  if (C.zf) goto L_124228c9;
  /* 124228a9 mov eax, dword ptr [0x12442aa8] */
  EAX = (r32((uint32_t)(0x12442aa8)));
  /* 124228ae movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124228b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124228b3 je 0x124228c9 */
  if (C.zf) goto L_124228c9;
  /* 124228b5 push 0x12442aa8 */
  push32((uint32_t)(0x12442aa8u));
  /* 124228ba push 0x16 */
  push32((uint32_t)(0x16u));
  /* 124228bc push 0x124419d8 */
  push32((uint32_t)(0x124419d8u));
  /* 124228c1 call 0x12422a20 */
  push32(0x124228c6u); f_12422a20();
  /* 124228c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124228c9:;
  /* 124228c9 mov dword ptr [0x12442aac], 0 */
  w32((uint32_t)(0x12442aac), (0x0u));
  /* 124228d3 cmp dword ptr [0x12442aa4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442aa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124228da je 0x1242290d */
  if (C.zf) goto L_1242290d;
  /* 124228dc mov edx, dword ptr [0x12442aa4] */
  EDX = (r32((uint32_t)(0x12442aa4)));
  /* 124228e2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 124228e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124228e7 je 0x1242290d */
  if (C.zf) goto L_1242290d;
  /* 124228e9 cmp dword ptr [0x12442aa8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442aa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124228f0 je 0x12422906 */
  if (C.zf) goto L_12422906;
  /* 124228f2 mov ecx, dword ptr [0x12442aa8] */
  ECX = (r32((uint32_t)(0x12442aa8)));
  /* 124228f8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124228fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124228fd je 0x12422906 */
  if (C.zf) goto L_12422906;
  /* 124228ff call 0x12422ab0 */
  push32(0x12422904u); f_12422ab0();
  /* 12422904 jmp 0x1242290b */
  goto L_1242290b;
L_12422906:;
  /* 12422906 call 0x12422ea0 */
  push32(0x1242290bu); f_12422ea0();
L_1242290b:;
  /* 1242290b jmp 0x1242292e */
  goto L_1242292e;
L_1242290d:;
  /* 1242290d cmp dword ptr [0x12442aa8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442aa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12422914 je 0x12422929 */
  if (C.zf) goto L_12422929;
  /* 12422916 mov eax, dword ptr [0x12442aa8] */
  EAX = (r32((uint32_t)(0x12442aa8)));
  /* 1242291b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1242291e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12422920 je 0x12422929 */
  if (C.zf) goto L_12422929;
  /* 12422922 call 0x12423040 */
  push32(0x12422927u); f_12423040();
  /* 12422927 jmp 0x1242292e */
  goto L_1242292e;
L_12422929:;
  /* 12422929 call 0x12423140 */
  push32(0x1242292eu); f_12423140();
L_1242292e:;
  /* 1242292e cmp dword ptr [0x12442aac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442aac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12422935 jne 0x1242293e */
  if (!C.zf) goto L_1242293e;
  /* 12422937 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12422939 jmp 0x12422a1c */
  goto L_12422a1c;
L_1242293e:;
  /* 1242293e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12422941 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12422947 push edx */
  push32((uint32_t)(EDX));
  /* 12422948 call 0x12423170 */
  push32(0x1242294du); f_12423170();
  /* 1242294d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12422950 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12422953 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12422957 je 0x1242296c */
  if (C.zf) goto L_1242296c;
  /* 12422959 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1242295c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12422961 push eax */
  push32((uint32_t)(EAX));
  /* 12422962 call dword ptr [0x124452dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452dc))), 0x12422968u);
  /* 12422968 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1242296a jne 0x12422973 */
  if (!C.zf) goto L_12422973;
L_1242296c:;
  /* 1242296c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1242296e jmp 0x12422a1c */
  goto L_12422a1c;
L_12422973:;
  /* 12422973 push 1 */
  push32((uint32_t)(0x1u));
  /* 12422975 mov ecx, dword ptr [0x12442a94] */
  ECX = (r32((uint32_t)(0x12442a94)));
  /* 1242297b push ecx */
  push32((uint32_t)(ECX));
  /* 1242297c call dword ptr [0x124452e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452e0))), 0x12422982u);
  /* 12422982 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12422984 jne 0x1242298d */
  if (!C.zf) goto L_1242298d;
  /* 12422986 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12422988 jmp 0x12422a1c */
  goto L_12422a1c;
L_1242298d:;
  /* 1242298d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12422991 je 0x124229b8 */
  if (C.zf) goto L_124229b8;
  /* 12422993 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12422996 mov ax, word ptr [0x12442a94] */
  AX = (r16((uint32_t)(0x12442a94)));
  /* 1242299c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1242299f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124229a2 mov dx, word ptr [0x12442ab0] */
  DX = (r16((uint32_t)(0x12442ab0)));
  /* 124229a9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 124229ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124229b0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 124229b4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_124229b8:;
  /* 124229b8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124229bc je 0x12422a17 */
  if (C.zf) goto L_12422a17;
  /* 124229be push 0x40 */
  push32((uint32_t)(0x40u));
  /* 124229c0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124229c3 push edx */
  push32((uint32_t)(EDX));
  /* 124229c4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 124229c9 mov eax, dword ptr [0x12442a94] */
  EAX = (r32((uint32_t)(0x12442a94)));
  /* 124229ce push eax */
  push32((uint32_t)(EAX));
  /* 124229cf call dword ptr [0x12442ab4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12442ab4))), 0x124229d5u);
  /* 124229d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124229d7 jne 0x124229dd */
  if (!C.zf) goto L_124229dd;
  /* 124229d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124229db jmp 0x12422a1c */
  goto L_12422a1c;
L_124229dd:;
  /* 124229dd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 124229df mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124229e2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124229e5 push ecx */
  push32((uint32_t)(ECX));
  /* 124229e6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 124229eb mov edx, dword ptr [0x12442ab0] */
  EDX = (r32((uint32_t)(0x12442ab0)));
  /* 124229f1 push edx */
  push32((uint32_t)(EDX));
  /* 124229f2 call dword ptr [0x12442ab4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12442ab4))), 0x124229f8u);
  /* 124229f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124229fa jne 0x12422a00 */
  if (!C.zf) goto L_12422a00;
  /* 124229fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124229fe jmp 0x12422a1c */
  goto L_12422a1c;
L_12422a00:;
  /* 12422a00 push 0xa */
  push32((uint32_t)(0xau));
  /* 12422a02 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12422a05 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12422a0a push eax */
  push32((uint32_t)(EAX));
  /* 12422a0b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12422a0e push ecx */
  push32((uint32_t)(ECX));
  /* 12422a0f call 0x12419580 */
  push32(0x12422a14u); f_12419580();
  /* 12422a14 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12422a17:;
  /* 12422a17 mov eax, 1 */
  EAX = (0x1u);
L_12422a1c:;
  /* 12422a1c mov esp, ebp */
  ESP = (EBP);
  /* 12422a1e pop ebp */
  EBP = (pop32());
  /* 12422a1f ret  */
  ESPCHK(0x12422820u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a20 @ 0x12422a20 (130 bytes, 47 insns) */
void f_12422a20(void) {
  FTRACE(0x12422a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12422a20 push ebp */
  push32((uint32_t)(EBP));
  /* 12422a21 mov ebp, esp */
  EBP = (ESP);
  /* 12422a23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12422a26 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12422a2d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12422a34:;
  /* 12422a34 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12422a37 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12422a3a jg 0x12422a9e */
  if ((!C.zf&&C.sf==C.of)) goto L_12422a9e;
  /* 12422a3c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12422a40 je 0x12422a9e */
  if (C.zf) goto L_12422a9e;
  /* 12422a42 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12422a45 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12422a48 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12422a49 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12422a4b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12422a4d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12422a50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12422a53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12422a56 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 12422a59 push eax */
  push32((uint32_t)(EAX));
  /* 12422a5a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12422a5d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12422a5f push edx */
  push32((uint32_t)(EDX));
  /* 12422a60 call 0x12425110 */
  push32(0x12422a65u); f_12425110();
  /* 12422a65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12422a68 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12422a6b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12422a6f jne 0x12422a82 */
  if (!C.zf) goto L_12422a82;
  /* 12422a71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12422a74 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12422a77 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 12422a7b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12422a7e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12422a80 jmp 0x12422a9c */
  goto L_12422a9c;
L_12422a82:;
  /* 12422a82 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12422a86 jge 0x12422a93 */
  if ((C.sf==C.of)) goto L_12422a93;
  /* 12422a88 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12422a8b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12422a8e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12422a91 jmp 0x12422a9c */
  goto L_12422a9c;
L_12422a93:;
  /* 12422a93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12422a96 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12422a99 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12422a9c:;
  /* 12422a9c jmp 0x12422a34 */
  goto L_12422a34;
L_12422a9e:;
  /* 12422a9e mov esp, ebp */
  ESP = (EBP);
  /* 12422aa0 pop ebp */
  EBP = (pop32());
  /* 12422aa1 ret  */
  ESPCHK(0x12422a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ab0 @ 0x12422ab0 (186 bytes, 50 insns) */
void f_12422ab0(void) {
  FTRACE(0x12422ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12422ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 12422ab1 mov ebp, esp */
  EBP = (ESP);
  /* 12422ab3 push ecx */
  push32((uint32_t)(ECX));
  /* 12422ab4 mov eax, dword ptr [0x12442aa4] */
  EAX = (r32((uint32_t)(0x12442aa4)));
  /* 12422ab9 push eax */
  push32((uint32_t)(EAX));
  /* 12422aba call 0x12419870 */
  push32(0x12422abfu); f_12419870();
  /* 12422abf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12422ac2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12422ac4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12422ac7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12422aca mov dword ptr [0x12442aa0], ecx */
  w32((uint32_t)(0x12442aa0), (ECX));
  /* 12422ad0 mov edx, dword ptr [0x12442aa8] */
  EDX = (r32((uint32_t)(0x12442aa8)));
  /* 12422ad6 push edx */
  push32((uint32_t)(EDX));
  /* 12422ad7 call 0x12419870 */
  push32(0x12422adcu); f_12419870();
  /* 12422adc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12422adf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12422ae1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12422ae4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12422ae7 mov dword ptr [0x12442a98], ecx */
  w32((uint32_t)(0x12442a98), (ECX));
  /* 12422aed mov dword ptr [0x12442a94], 0 */
  w32((uint32_t)(0x12442a94), (0x0u));
  /* 12422af7 cmp dword ptr [0x12442aa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442aa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12422afe je 0x12422b09 */
  if (C.zf) goto L_12422b09;
  /* 12422b00 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12422b07 jmp 0x12422b1b */
  goto L_12422b1b;
L_12422b09:;
  /* 12422b09 mov edx, dword ptr [0x12442aa4] */
  EDX = (r32((uint32_t)(0x12442aa4)));
  /* 12422b0f push edx */
  push32((uint32_t)(EDX));
  /* 12422b10 call 0x12423550 */
  push32(0x12422b15u); f_12423550();
  /* 12422b15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12422b18 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12422b1b:;
  /* 12422b1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12422b1e mov dword ptr [0x12442a9c], eax */
  w32((uint32_t)(0x12442a9c), (EAX));
  /* 12422b23 push 1 */
  push32((uint32_t)(0x1u));
  /* 12422b25 push 0x12422b70 */
  push32((uint32_t)(0x12422b70u));
  /* 12422b2a call dword ptr [0x124452d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452d4))), 0x12422b30u);
  /* 12422b30 mov ecx, dword ptr [0x12442aac] */
  ECX = (r32((uint32_t)(0x12442aac)));
  /* 12422b36 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 12422b3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12422b3e je 0x12422b5c */
  if (C.zf) goto L_12422b5c;
  /* 12422b40 mov edx, dword ptr [0x12442aac] */
  EDX = (r32((uint32_t)(0x12442aac)));
  /* 12422b46 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 12422b4c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12422b4e je 0x12422b5c */
  if (C.zf) goto L_12422b5c;
  /* 12422b50 mov eax, dword ptr [0x12442aac] */
  EAX = (r32((uint32_t)(0x12442aac)));
  /* 12422b55 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 12422b58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12422b5a jne 0x12422b66 */
  if (!C.zf) goto L_12422b66;
L_12422b5c:;
  /* 12422b5c mov dword ptr [0x12442aac], 0 */
  w32((uint32_t)(0x12442aac), (0x0u));
L_12422b66:;
  /* 12422b66 mov esp, ebp */
  ESP = (EBP);
  /* 12422b68 pop ebp */
  EBP = (pop32());
  /* 12422b69 ret  */
  ESPCHK(0x12422ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b70 @ 0x12422b70 (804 bytes, 220 insns) */
void f_12422b70(void) {
  FTRACE(0x12422b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12422b70 push ebp */
  push32((uint32_t)(EBP));
  /* 12422b71 mov ebp, esp */
  EBP = (ESP);
  /* 12422b73 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12422b76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12422b79 push eax */
  push32((uint32_t)(EAX));
  /* 12422b7a call 0x124234d0 */
  push32(0x12422b7fu); f_124234d0();
  /* 12422b7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12422b82 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12422b85 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12422b87 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12422b8a push ecx */
  push32((uint32_t)(ECX));
  /* 12422b8b mov edx, dword ptr [0x12442a98] */
  EDX = (r32((uint32_t)(0x12442a98)));
  /* 12422b91 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12422b93 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12422b95 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 12422b9b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12422ba1 push edx */
  push32((uint32_t)(EDX));
  /* 12422ba2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12422ba5 push eax */
  push32((uint32_t)(EAX));
  /* 12422ba6 call dword ptr [0x12442ab4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12442ab4))), 0x12422bacu);
  /* 12422bac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12422bae jne 0x12422bc4 */
  if (!C.zf) goto L_12422bc4;
  /* 12422bb0 mov dword ptr [0x12442aac], 0 */
  w32((uint32_t)(0x12442aac), (0x0u));
  /* 12422bba mov eax, 1 */
  EAX = (0x1u);
  /* 12422bbf jmp 0x12422e8e */
  goto L_12422e8e;
L_12422bc4:;
  /* 12422bc4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12422bc7 push ecx */
  push32((uint32_t)(ECX));
  /* 12422bc8 mov edx, dword ptr [0x12442aa8] */
  EDX = (r32((uint32_t)(0x12442aa8)));
  /* 12422bce push edx */
  push32((uint32_t)(EDX));
  /* 12422bcf call 0x12425110 */
  push32(0x12422bd4u); f_12425110();
  /* 12422bd4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12422bd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12422bd9 jne 0x12422cff */
  if (!C.zf) goto L_12422cff;
  /* 12422bdf push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12422be1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12422be4 push eax */
  push32((uint32_t)(EAX));
  /* 12422be5 mov ecx, dword ptr [0x12442aa0] */
  ECX = (r32((uint32_t)(0x12442aa0)));
  /* 12422beb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12422bed sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12422bef and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12422bf5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12422bfb push ecx */
  push32((uint32_t)(ECX));
  /* 12422bfc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12422bff push edx */
  push32((uint32_t)(EDX));
  /* 12422c00 call dword ptr [0x12442ab4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12442ab4))), 0x12422c06u);
  /* 12422c06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12422c08 jne 0x12422c1e */
  if (!C.zf) goto L_12422c1e;
  /* 12422c0a mov dword ptr [0x12442aac], 0 */
  w32((uint32_t)(0x12442aac), (0x0u));
  /* 12422c14 mov eax, 1 */
  EAX = (0x1u);
  /* 12422c19 jmp 0x12422e8e */
  goto L_12422e8e;
L_12422c1e:;
  /* 12422c1e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12422c21 push eax */
  push32((uint32_t)(EAX));
  /* 12422c22 mov ecx, dword ptr [0x12442aa4] */
  ECX = (r32((uint32_t)(0x12442aa4)));
  /* 12422c28 push ecx */
  push32((uint32_t)(ECX));
  /* 12422c29 call 0x12425110 */
  push32(0x12422c2eu); f_12425110();
  /* 12422c2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12422c31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12422c33 jne 0x12422c60 */
  if (!C.zf) goto L_12422c60;
  /* 12422c35 mov edx, dword ptr [0x12442aac] */
  EDX = (r32((uint32_t)(0x12442aac)));
  /* 12422c3b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 12422c41 mov dword ptr [0x12442aac], edx */
  w32((uint32_t)(0x12442aac), (EDX));
  /* 12422c47 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12422c4a mov dword ptr [0x12442ab0], eax */
  w32((uint32_t)(0x12442ab0), (EAX));
  /* 12422c4f mov ecx, dword ptr [0x12442ab0] */
  ECX = (r32((uint32_t)(0x12442ab0)));
  /* 12422c55 mov dword ptr [0x12442a94], ecx */
  w32((uint32_t)(0x12442a94), (ECX));
  /* 12422c5b jmp 0x12422cff */
  goto L_12422cff;
L_12422c60:;
  /* 12422c60 mov edx, dword ptr [0x12442aac] */
  EDX = (r32((uint32_t)(0x12442aac)));
  /* 12422c66 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12422c69 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12422c6b jne 0x12422cff */
  if (!C.zf) goto L_12422cff;
  /* 12422c71 cmp dword ptr [0x12442a9c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442a9c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12422c78 je 0x12422ccd */
  if (C.zf) goto L_12422ccd;
  /* 12422c7a mov eax, dword ptr [0x12442a9c] */
  EAX = (r32((uint32_t)(0x12442a9c)));
  /* 12422c7f push eax */
  push32((uint32_t)(EAX));
  /* 12422c80 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12422c83 push ecx */
  push32((uint32_t)(ECX));
  /* 12422c84 mov edx, dword ptr [0x12442aa4] */
  EDX = (r32((uint32_t)(0x12442aa4)));
  /* 12422c8a push edx */
  push32((uint32_t)(EDX));
  /* 12422c8b call 0x124251e0 */
  push32(0x12422c90u); f_124251e0();
  /* 12422c90 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12422c93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12422c95 jne 0x12422ccd */
  if (!C.zf) goto L_12422ccd;
  /* 12422c97 mov eax, dword ptr [0x12442aac] */
  EAX = (r32((uint32_t)(0x12442aac)));
  /* 12422c9c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 12422c9e mov dword ptr [0x12442aac], eax */
  w32((uint32_t)(0x12442aac), (EAX));
  /* 12422ca3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12422ca6 mov dword ptr [0x12442ab0], ecx */
  w32((uint32_t)(0x12442ab0), (ECX));
  /* 12422cac mov edx, dword ptr [0x12442aa4] */
  EDX = (r32((uint32_t)(0x12442aa4)));
  /* 12422cb2 push edx */
  push32((uint32_t)(EDX));
  /* 12422cb3 call 0x12419870 */
  push32(0x12422cb8u); f_12419870();
  /* 12422cb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12422cbb cmp eax, dword ptr [0x12442a9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12442a9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12422cc1 jne 0x12422ccb */
  if (!C.zf) goto L_12422ccb;
  /* 12422cc3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12422cc6 mov dword ptr [0x12442a94], eax */
  w32((uint32_t)(0x12442a94), (EAX));
L_12422ccb:;
  /* 12422ccb jmp 0x12422cff */
  goto L_12422cff;
L_12422ccd:;
  /* 12422ccd mov ecx, dword ptr [0x12442aac] */
  ECX = (r32((uint32_t)(0x12442aac)));
  /* 12422cd3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12422cd6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12422cd8 jne 0x12422cff */
  if (!C.zf) goto L_12422cff;
  /* 12422cda mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12422cdd push edx */
  push32((uint32_t)(EDX));
  /* 12422cde call 0x12423210 */
  push32(0x12422ce3u); f_12423210();
  /* 12422ce3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12422ce6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12422ce8 je 0x12422cff */
  if (C.zf) goto L_12422cff;
  /* 12422cea mov eax, dword ptr [0x12442aac] */
  EAX = (r32((uint32_t)(0x12442aac)));
  /* 12422cef or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12422cf1 mov dword ptr [0x12442aac], eax */
  w32((uint32_t)(0x12442aac), (EAX));
  /* 12422cf6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12422cf9 mov dword ptr [0x12442ab0], ecx */
  w32((uint32_t)(0x12442ab0), (ECX));
L_12422cff:;
  /* 12422cff mov edx, dword ptr [0x12442aac] */
  EDX = (r32((uint32_t)(0x12442aac)));
  /* 12422d05 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 12422d0b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12422d11 je 0x12422e81 */
  if (C.zf) goto L_12422e81;
  /* 12422d17 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12422d19 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12422d1c push eax */
  push32((uint32_t)(EAX));
  /* 12422d1d mov ecx, dword ptr [0x12442aa0] */
  ECX = (r32((uint32_t)(0x12442aa0)));
  /* 12422d23 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12422d25 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12422d27 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12422d2d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12422d33 push ecx */
  push32((uint32_t)(ECX));
  /* 12422d34 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12422d37 push edx */
  push32((uint32_t)(EDX));
  /* 12422d38 call dword ptr [0x12442ab4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12442ab4))), 0x12422d3eu);
  /* 12422d3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12422d40 jne 0x12422d56 */
  if (!C.zf) goto L_12422d56;
  /* 12422d42 mov dword ptr [0x12442aac], 0 */
  w32((uint32_t)(0x12442aac), (0x0u));
  /* 12422d4c mov eax, 1 */
  EAX = (0x1u);
  /* 12422d51 jmp 0x12422e8e */
  goto L_12422e8e;
L_12422d56:;
  /* 12422d56 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12422d59 push eax */
  push32((uint32_t)(EAX));
  /* 12422d5a mov ecx, dword ptr [0x12442aa4] */
  ECX = (r32((uint32_t)(0x12442aa4)));
  /* 12422d60 push ecx */
  push32((uint32_t)(ECX));
  /* 12422d61 call 0x12425110 */
  push32(0x12422d66u); f_12425110();
  /* 12422d66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12422d69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12422d6b jne 0x12422e20 */
  if (!C.zf) goto L_12422e20;
  /* 12422d71 mov edx, dword ptr [0x12442aac] */
  EDX = (r32((uint32_t)(0x12442aac)));
  /* 12422d77 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12422d7a mov dword ptr [0x12442aac], edx */
  w32((uint32_t)(0x12442aac), (EDX));
  /* 12422d80 cmp dword ptr [0x12442aa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442aa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12422d87 je 0x12422daa */
  if (C.zf) goto L_12422daa;
  /* 12422d89 mov eax, dword ptr [0x12442aac] */
  EAX = (r32((uint32_t)(0x12442aac)));
  /* 12422d8e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12422d91 mov dword ptr [0x12442aac], eax */
  w32((uint32_t)(0x12442aac), (EAX));
  /* 12422d96 cmp dword ptr [0x12442a94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442a94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12422d9d jne 0x12422da8 */
  if (!C.zf) goto L_12422da8;
  /* 12422d9f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12422da2 mov dword ptr [0x12442a94], ecx */
  w32((uint32_t)(0x12442a94), (ECX));
L_12422da8:;
  /* 12422da8 jmp 0x12422e1e */
  goto L_12422e1e;
L_12422daa:;
  /* 12422daa cmp dword ptr [0x12442a9c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442a9c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12422db1 je 0x12422dff */
  if (C.zf) goto L_12422dff;
  /* 12422db3 mov edx, dword ptr [0x12442aa4] */
  EDX = (r32((uint32_t)(0x12442aa4)));
  /* 12422db9 push edx */
  push32((uint32_t)(EDX));
  /* 12422dba call 0x12419870 */
  push32(0x12422dbfu); f_12419870();
  /* 12422dbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12422dc2 cmp eax, dword ptr [0x12442a9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12442a9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12422dc8 jne 0x12422dff */
  if (!C.zf) goto L_12422dff;
  /* 12422dca push 1 */
  push32((uint32_t)(0x1u));
  /* 12422dcc mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12422dcf push eax */
  push32((uint32_t)(EAX));
  /* 12422dd0 call 0x12423260 */
  push32(0x12422dd5u); f_12423260();
  /* 12422dd5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12422dd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12422dda je 0x12422dfd */
  if (C.zf) goto L_12422dfd;
  /* 12422ddc mov ecx, dword ptr [0x12442aac] */
  ECX = (r32((uint32_t)(0x12442aac)));
  /* 12422de2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12422de5 mov dword ptr [0x12442aac], ecx */
  w32((uint32_t)(0x12442aac), (ECX));
  /* 12422deb cmp dword ptr [0x12442a94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442a94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12422df2 jne 0x12422dfd */
  if (!C.zf) goto L_12422dfd;
  /* 12422df4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12422df7 mov dword ptr [0x12442a94], edx */
  w32((uint32_t)(0x12442a94), (EDX));
L_12422dfd:;
  /* 12422dfd jmp 0x12422e1e */
  goto L_12422e1e;
L_12422dff:;
  /* 12422dff mov eax, dword ptr [0x12442aac] */
  EAX = (r32((uint32_t)(0x12442aac)));
  /* 12422e04 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12422e07 mov dword ptr [0x12442aac], eax */
  w32((uint32_t)(0x12442aac), (EAX));
  /* 12422e0c cmp dword ptr [0x12442a94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442a94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12422e13 jne 0x12422e1e */
  if (!C.zf) goto L_12422e1e;
  /* 12422e15 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12422e18 mov dword ptr [0x12442a94], ecx */
  w32((uint32_t)(0x12442a94), (ECX));
L_12422e1e:;
  /* 12422e1e jmp 0x12422e81 */
  goto L_12422e81;
L_12422e20:;
  /* 12422e20 cmp dword ptr [0x12442aa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442aa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12422e27 jne 0x12422e81 */
  if (!C.zf) goto L_12422e81;
  /* 12422e29 cmp dword ptr [0x12442a9c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442a9c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12422e30 je 0x12422e81 */
  if (C.zf) goto L_12422e81;
  /* 12422e32 mov edx, dword ptr [0x12442a9c] */
  EDX = (r32((uint32_t)(0x12442a9c)));
  /* 12422e38 push edx */
  push32((uint32_t)(EDX));
  /* 12422e39 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12422e3c push eax */
  push32((uint32_t)(EAX));
  /* 12422e3d mov ecx, dword ptr [0x12442aa4] */
  ECX = (r32((uint32_t)(0x12442aa4)));
  /* 12422e43 push ecx */
  push32((uint32_t)(ECX));
  /* 12422e44 call 0x124251e0 */
  push32(0x12422e49u); f_124251e0();
  /* 12422e49 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12422e4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12422e4e jne 0x12422e81 */
  if (!C.zf) goto L_12422e81;
  /* 12422e50 push 0 */
  push32((uint32_t)(0x0u));
  /* 12422e52 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12422e55 push edx */
  push32((uint32_t)(EDX));
  /* 12422e56 call 0x12423260 */
  push32(0x12422e5bu); f_12423260();
  /* 12422e5b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12422e5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12422e60 je 0x12422e81 */
  if (C.zf) goto L_12422e81;
  /* 12422e62 mov eax, dword ptr [0x12442aac] */
  EAX = (r32((uint32_t)(0x12442aac)));
  /* 12422e67 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12422e6a mov dword ptr [0x12442aac], eax */
  w32((uint32_t)(0x12442aac), (EAX));
  /* 12422e6f cmp dword ptr [0x12442a94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442a94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12422e76 jne 0x12422e81 */
  if (!C.zf) goto L_12422e81;
  /* 12422e78 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12422e7b mov dword ptr [0x12442a94], ecx */
  w32((uint32_t)(0x12442a94), (ECX));
L_12422e81:;
  /* 12422e81 mov eax, dword ptr [0x12442aac] */
  EAX = (r32((uint32_t)(0x12442aac)));
  /* 12422e86 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12422e89 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12422e8b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12422e8d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12422e8e:;
  /* 12422e8e mov esp, ebp */
  ESP = (EBP);
  /* 12422e90 pop ebp */
  EBP = (pop32());
  /* 12422e91 ret 4 */
  ESPCHK(0x12422b70u, _esp0);
  ESP += 8; return;
}

/* FUN_10012ea0 @ 0x12422ea0 (116 bytes, 33 insns) */
void f_12422ea0(void) {
  FTRACE(0x12422ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12422ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 12422ea1 mov ebp, esp */
  EBP = (ESP);
  /* 12422ea3 push ecx */
  push32((uint32_t)(ECX));
  /* 12422ea4 mov eax, dword ptr [0x12442aa4] */
  EAX = (r32((uint32_t)(0x12442aa4)));
  /* 12422ea9 push eax */
  push32((uint32_t)(EAX));
  /* 12422eaa call 0x12419870 */
  push32(0x12422eafu); f_12419870();
  /* 12422eaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12422eb2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12422eb4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12422eb7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12422eba mov dword ptr [0x12442aa0], ecx */
  w32((uint32_t)(0x12442aa0), (ECX));
  /* 12422ec0 cmp dword ptr [0x12442aa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442aa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12422ec7 je 0x12422ed2 */
  if (C.zf) goto L_12422ed2;
  /* 12422ec9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12422ed0 jmp 0x12422ee4 */
  goto L_12422ee4;
L_12422ed2:;
  /* 12422ed2 mov edx, dword ptr [0x12442aa4] */
  EDX = (r32((uint32_t)(0x12442aa4)));
  /* 12422ed8 push edx */
  push32((uint32_t)(EDX));
  /* 12422ed9 call 0x12423550 */
  push32(0x12422edeu); f_12423550();
  /* 12422ede add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12422ee1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12422ee4:;
  /* 12422ee4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12422ee7 mov dword ptr [0x12442a9c], eax */
  w32((uint32_t)(0x12442a9c), (EAX));
  /* 12422eec push 1 */
  push32((uint32_t)(0x1u));
  /* 12422eee push 0x12422f20 */
  push32((uint32_t)(0x12422f20u));
  /* 12422ef3 call dword ptr [0x124452d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452d4))), 0x12422ef9u);
  /* 12422ef9 mov ecx, dword ptr [0x12442aac] */
  ECX = (r32((uint32_t)(0x12442aac)));
  /* 12422eff and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12422f02 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12422f04 jne 0x12422f10 */
  if (!C.zf) goto L_12422f10;
  /* 12422f06 mov dword ptr [0x12442aac], 0 */
  w32((uint32_t)(0x12442aac), (0x0u));
L_12422f10:;
  /* 12422f10 mov esp, ebp */
  ESP = (EBP);
  /* 12422f12 pop ebp */
  EBP = (pop32());
  /* 12422f13 ret  */
  ESPCHK(0x12422ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f20 @ 0x12422f20 (287 bytes, 86 insns) */
void f_12422f20(void) {
  FTRACE(0x12422f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12422f20 push ebp */
  push32((uint32_t)(EBP));
  /* 12422f21 mov ebp, esp */
  EBP = (ESP);
  /* 12422f23 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12422f26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12422f29 push eax */
  push32((uint32_t)(EAX));
  /* 12422f2a call 0x124234d0 */
  push32(0x12422f2fu); f_124234d0();
  /* 12422f2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12422f32 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12422f35 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12422f37 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12422f3a push ecx */
  push32((uint32_t)(ECX));
  /* 12422f3b mov edx, dword ptr [0x12442aa0] */
  EDX = (r32((uint32_t)(0x12442aa0)));
  /* 12422f41 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12422f43 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12422f45 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 12422f4b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12422f51 push edx */
  push32((uint32_t)(EDX));
  /* 12422f52 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12422f55 push eax */
  push32((uint32_t)(EAX));
  /* 12422f56 call dword ptr [0x12442ab4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12442ab4))), 0x12422f5cu);
  /* 12422f5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12422f5e jne 0x12422f74 */
  if (!C.zf) goto L_12422f74;
  /* 12422f60 mov dword ptr [0x12442aac], 0 */
  w32((uint32_t)(0x12442aac), (0x0u));
  /* 12422f6a mov eax, 1 */
  EAX = (0x1u);
  /* 12422f6f jmp 0x12423039 */
  goto L_12423039;
L_12422f74:;
  /* 12422f74 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12422f77 push ecx */
  push32((uint32_t)(ECX));
  /* 12422f78 mov edx, dword ptr [0x12442aa4] */
  EDX = (r32((uint32_t)(0x12442aa4)));
  /* 12422f7e push edx */
  push32((uint32_t)(EDX));
  /* 12422f7f call 0x12425110 */
  push32(0x12422f84u); f_12425110();
  /* 12422f84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12422f87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12422f89 jne 0x12422fc9 */
  if (!C.zf) goto L_12422fc9;
  /* 12422f8b cmp dword ptr [0x12442aa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442aa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12422f92 jne 0x12422fa6 */
  if (!C.zf) goto L_12422fa6;
  /* 12422f94 push 1 */
  push32((uint32_t)(0x1u));
  /* 12422f96 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12422f99 push eax */
  push32((uint32_t)(EAX));
  /* 12422f9a call 0x12423260 */
  push32(0x12422f9fu); f_12423260();
  /* 12422f9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12422fa2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12422fa4 je 0x12422fc7 */
  if (C.zf) goto L_12422fc7;
L_12422fa6:;
  /* 12422fa6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12422fa9 mov dword ptr [0x12442ab0], ecx */
  w32((uint32_t)(0x12442ab0), (ECX));
  /* 12422faf mov edx, dword ptr [0x12442ab0] */
  EDX = (r32((uint32_t)(0x12442ab0)));
  /* 12422fb5 mov dword ptr [0x12442a94], edx */
  w32((uint32_t)(0x12442a94), (EDX));
  /* 12422fbb mov eax, dword ptr [0x12442aac] */
  EAX = (r32((uint32_t)(0x12442aac)));
  /* 12422fc0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12422fc2 mov dword ptr [0x12442aac], eax */
  w32((uint32_t)(0x12442aac), (EAX));
L_12422fc7:;
  /* 12422fc7 jmp 0x1242302c */
  goto L_1242302c;
L_12422fc9:;
  /* 12422fc9 cmp dword ptr [0x12442aa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442aa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12422fd0 jne 0x1242302c */
  if (!C.zf) goto L_1242302c;
  /* 12422fd2 cmp dword ptr [0x12442a9c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442a9c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12422fd9 je 0x1242302c */
  if (C.zf) goto L_1242302c;
  /* 12422fdb mov ecx, dword ptr [0x12442a9c] */
  ECX = (r32((uint32_t)(0x12442a9c)));
  /* 12422fe1 push ecx */
  push32((uint32_t)(ECX));
  /* 12422fe2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 12422fe5 push edx */
  push32((uint32_t)(EDX));
  /* 12422fe6 mov eax, dword ptr [0x12442aa4] */
  EAX = (r32((uint32_t)(0x12442aa4)));
  /* 12422feb push eax */
  push32((uint32_t)(EAX));
  /* 12422fec call 0x124251e0 */
  push32(0x12422ff1u); f_124251e0();
  /* 12422ff1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12422ff4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12422ff6 jne 0x1242302c */
  if (!C.zf) goto L_1242302c;
  /* 12422ff8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12422ffa mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12422ffd push ecx */
  push32((uint32_t)(ECX));
  /* 12422ffe call 0x12423260 */
  push32(0x12423003u); f_12423260();
  /* 12423003 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423006 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12423008 je 0x1242302c */
  if (C.zf) goto L_1242302c;
  /* 1242300a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1242300d mov dword ptr [0x12442ab0], edx */
  w32((uint32_t)(0x12442ab0), (EDX));
  /* 12423013 mov eax, dword ptr [0x12442ab0] */
  EAX = (r32((uint32_t)(0x12442ab0)));
  /* 12423018 mov dword ptr [0x12442a94], eax */
  w32((uint32_t)(0x12442a94), (EAX));
  /* 1242301d mov ecx, dword ptr [0x12442aac] */
  ECX = (r32((uint32_t)(0x12442aac)));
  /* 12423023 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12423026 mov dword ptr [0x12442aac], ecx */
  w32((uint32_t)(0x12442aac), (ECX));
L_1242302c:;
  /* 1242302c mov eax, dword ptr [0x12442aac] */
  EAX = (r32((uint32_t)(0x12442aac)));
  /* 12423031 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12423034 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12423036 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12423038 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12423039:;
  /* 12423039 mov esp, ebp */
  ESP = (EBP);
  /* 1242303b pop ebp */
  EBP = (pop32());
  /* 1242303c ret 4 */
  ESPCHK(0x12422f20u, _esp0);
  ESP += 8; return;
}

/* FUN_10013040 @ 0x12423040 (69 bytes, 20 insns) */
void f_12423040(void) {
  FTRACE(0x12423040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12423040 push ebp */
  push32((uint32_t)(EBP));
  /* 12423041 mov ebp, esp */
  EBP = (ESP);
  /* 12423043 mov eax, dword ptr [0x12442aa8] */
  EAX = (r32((uint32_t)(0x12442aa8)));
  /* 12423048 push eax */
  push32((uint32_t)(EAX));
  /* 12423049 call 0x12419870 */
  push32(0x1242304eu); f_12419870();
  /* 1242304e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423051 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12423053 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12423056 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12423059 mov dword ptr [0x12442a98], ecx */
  w32((uint32_t)(0x12442a98), (ECX));
  /* 1242305f push 1 */
  push32((uint32_t)(0x1u));
  /* 12423061 push 0x12423090 */
  push32((uint32_t)(0x12423090u));
  /* 12423066 call dword ptr [0x124452d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452d4))), 0x1242306cu);
  /* 1242306c mov edx, dword ptr [0x12442aac] */
  EDX = (r32((uint32_t)(0x12442aac)));
  /* 12423072 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12423075 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12423077 jne 0x12423083 */
  if (!C.zf) goto L_12423083;
  /* 12423079 mov dword ptr [0x12442aac], 0 */
  w32((uint32_t)(0x12442aac), (0x0u));
L_12423083:;
  /* 12423083 pop ebp */
  EBP = (pop32());
  /* 12423084 ret  */
  ESPCHK(0x12423040u, _esp0);
  ESP += 4; return;
}

/* FUN_10013090 @ 0x12423090 (172 bytes, 54 insns) */
void f_12423090(void) {
  FTRACE(0x12423090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12423090 push ebp */
  push32((uint32_t)(EBP));
  /* 12423091 mov ebp, esp */
  EBP = (ESP);
  /* 12423093 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12423096 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12423099 push eax */
  push32((uint32_t)(EAX));
  /* 1242309a call 0x124234d0 */
  push32(0x1242309fu); f_124234d0();
  /* 1242309f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124230a2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 124230a5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 124230a7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 124230aa push ecx */
  push32((uint32_t)(ECX));
  /* 124230ab mov edx, dword ptr [0x12442a98] */
  EDX = (r32((uint32_t)(0x12442a98)));
  /* 124230b1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 124230b3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124230b5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 124230bb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124230c1 push edx */
  push32((uint32_t)(EDX));
  /* 124230c2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124230c5 push eax */
  push32((uint32_t)(EAX));
  /* 124230c6 call dword ptr [0x12442ab4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12442ab4))), 0x124230ccu);
  /* 124230cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124230ce jne 0x124230e1 */
  if (!C.zf) goto L_124230e1;
  /* 124230d0 mov dword ptr [0x12442aac], 0 */
  w32((uint32_t)(0x12442aac), (0x0u));
  /* 124230da mov eax, 1 */
  EAX = (0x1u);
  /* 124230df jmp 0x12423136 */
  goto L_12423136;
L_124230e1:;
  /* 124230e1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 124230e4 push ecx */
  push32((uint32_t)(ECX));
  /* 124230e5 mov edx, dword ptr [0x12442aa8] */
  EDX = (r32((uint32_t)(0x12442aa8)));
  /* 124230eb push edx */
  push32((uint32_t)(EDX));
  /* 124230ec call 0x12425110 */
  push32(0x124230f1u); f_12425110();
  /* 124230f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124230f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124230f6 jne 0x12423129 */
  if (!C.zf) goto L_12423129;
  /* 124230f8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 124230fb push eax */
  push32((uint32_t)(EAX));
  /* 124230fc call 0x12423210 */
  push32(0x12423101u); f_12423210();
  /* 12423101 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423104 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12423106 je 0x12423129 */
  if (C.zf) goto L_12423129;
  /* 12423108 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1242310b mov dword ptr [0x12442ab0], ecx */
  w32((uint32_t)(0x12442ab0), (ECX));
  /* 12423111 mov edx, dword ptr [0x12442ab0] */
  EDX = (r32((uint32_t)(0x12442ab0)));
  /* 12423117 mov dword ptr [0x12442a94], edx */
  w32((uint32_t)(0x12442a94), (EDX));
  /* 1242311d mov eax, dword ptr [0x12442aac] */
  EAX = (r32((uint32_t)(0x12442aac)));
  /* 12423122 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12423124 mov dword ptr [0x12442aac], eax */
  w32((uint32_t)(0x12442aac), (EAX));
L_12423129:;
  /* 12423129 mov eax, dword ptr [0x12442aac] */
  EAX = (r32((uint32_t)(0x12442aac)));
  /* 1242312e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12423131 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12423133 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12423135 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12423136:;
  /* 12423136 mov esp, ebp */
  ESP = (EBP);
  /* 12423138 pop ebp */
  EBP = (pop32());
  /* 12423139 ret 4 */
  ESPCHK(0x12423090u, _esp0);
  ESP += 8; return;
}

/* FUN_10013140 @ 0x12423140 (43 bytes, 11 insns) */
void f_12423140(void) {
  FTRACE(0x12423140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12423140 push ebp */
  push32((uint32_t)(EBP));
  /* 12423141 mov ebp, esp */
  EBP = (ESP);
  /* 12423143 mov eax, dword ptr [0x12442aac] */
  EAX = (r32((uint32_t)(0x12442aac)));
  /* 12423148 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 1242314d mov dword ptr [0x12442aac], eax */
  w32((uint32_t)(0x12442aac), (EAX));
  /* 12423152 call dword ptr [0x124452d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452d0))), 0x12423158u);
  /* 12423158 mov dword ptr [0x12442ab0], eax */
  w32((uint32_t)(0x12442ab0), (EAX));
  /* 1242315d mov ecx, dword ptr [0x12442ab0] */
  ECX = (r32((uint32_t)(0x12442ab0)));
  /* 12423163 mov dword ptr [0x12442a94], ecx */
  w32((uint32_t)(0x12442a94), (ECX));
  /* 12423169 pop ebp */
  EBP = (pop32());
  /* 1242316a ret  */
  ESPCHK(0x12423140u, _esp0);
  ESP += 4; return;
}

/* FUN_10013170 @ 0x12423170 (155 bytes, 57 insns) */
void f_12423170(void) {
  FTRACE(0x12423170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12423170 push ebp */
  push32((uint32_t)(EBP));
  /* 12423171 mov ebp, esp */
  EBP = (ESP);
  /* 12423173 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12423176 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242317a je 0x1242319b */
  if (C.zf) goto L_1242319b;
  /* 1242317c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242317f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12423182 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12423184 je 0x1242319b */
  if (C.zf) goto L_1242319b;
  /* 12423186 push 0x1243ed5c */
  push32((uint32_t)(0x1243ed5cu));
  /* 1242318b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242318e push edx */
  push32((uint32_t)(EDX));
  /* 1242318f call 0x124226d0 */
  push32(0x12423194u); f_124226d0();
  /* 12423194 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423197 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12423199 jne 0x124231c3 */
  if (!C.zf) goto L_124231c3;
L_1242319b:;
  /* 1242319b push 8 */
  push32((uint32_t)(0x8u));
  /* 1242319d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 124231a0 push eax */
  push32((uint32_t)(EAX));
  /* 124231a1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 124231a6 mov ecx, dword ptr [0x12442ab0] */
  ECX = (r32((uint32_t)(0x12442ab0)));
  /* 124231ac push ecx */
  push32((uint32_t)(ECX));
  /* 124231ad call dword ptr [0x12442ab4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12442ab4))), 0x124231b3u);
  /* 124231b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124231b5 jne 0x124231bb */
  if (!C.zf) goto L_124231bb;
  /* 124231b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124231b9 jmp 0x12423207 */
  goto L_12423207;
L_124231bb:;
  /* 124231bb lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 124231be mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 124231c1 jmp 0x124231fb */
  goto L_124231fb;
L_124231c3:;
  /* 124231c3 push 0x1243ed58 */
  push32((uint32_t)(0x1243ed58u));
  /* 124231c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124231cb push eax */
  push32((uint32_t)(EAX));
  /* 124231cc call 0x124226d0 */
  push32(0x124231d1u); f_124226d0();
  /* 124231d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124231d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124231d6 jne 0x124231fb */
  if (!C.zf) goto L_124231fb;
  /* 124231d8 push 8 */
  push32((uint32_t)(0x8u));
  /* 124231da lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 124231dd push ecx */
  push32((uint32_t)(ECX));
  /* 124231de push 0xb */
  push32((uint32_t)(0xbu));
  /* 124231e0 mov edx, dword ptr [0x12442ab0] */
  EDX = (r32((uint32_t)(0x12442ab0)));
  /* 124231e6 push edx */
  push32((uint32_t)(EDX));
  /* 124231e7 call dword ptr [0x12442ab4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12442ab4))), 0x124231edu);
  /* 124231ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124231ef jne 0x124231f5 */
  if (!C.zf) goto L_124231f5;
  /* 124231f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124231f3 jmp 0x12423207 */
  goto L_12423207;
L_124231f5:;
  /* 124231f5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 124231f8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_124231fb:;
  /* 124231fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124231fe push ecx */
  push32((uint32_t)(ECX));
  /* 124231ff call 0x124252f0 */
  push32(0x12423204u); f_124252f0();
  /* 12423204 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12423207:;
  /* 12423207 mov esp, ebp */
  ESP = (EBP);
  /* 12423209 pop ebp */
  EBP = (pop32());
  /* 1242320a ret  */
  ESPCHK(0x12423170u, _esp0);
  ESP += 4; return;
}

/* FUN_10013210 @ 0x12423210 (79 bytes, 26 insns) */
void f_12423210(void) {
  FTRACE(0x12423210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12423210 push ebp */
  push32((uint32_t)(EBP));
  /* 12423211 mov ebp, esp */
  EBP = (ESP);
  /* 12423213 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12423216 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 1242321a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 1242321e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12423225 jmp 0x12423230 */
  goto L_12423230;
L_12423227:;
  /* 12423227 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1242322a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242322d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12423230:;
  /* 12423230 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12423234 jae 0x12423256 */
  if (!C.cf) goto L_12423256;
  /* 12423236 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12423239 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1242323f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12423242 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12423244 mov cx, word ptr [eax*2 + 0x124419c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x124419c4)));
  /* 1242324c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242324e jne 0x12423254 */
  if (!C.zf) goto L_12423254;
  /* 12423250 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12423252 jmp 0x1242325b */
  goto L_1242325b;
L_12423254:;
  /* 12423254 jmp 0x12423227 */
  goto L_12423227;
L_12423256:;
  /* 12423256 mov eax, 1 */
  EAX = (0x1u);
L_1242325b:;
  /* 1242325b mov esp, ebp */
  ESP = (EBP);
  /* 1242325d pop ebp */
  EBP = (pop32());
  /* 1242325e ret  */
  ESPCHK(0x12423210u, _esp0);
  ESP += 4; return;
}

/* FUN_10013260 @ 0x12423260 (135 bytes, 48 insns) */
void f_12423260(void) {
  FTRACE(0x12423260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12423260 push ebp */
  push32((uint32_t)(EBP));
  /* 12423261 mov ebp, esp */
  EBP = (ESP);
  /* 12423263 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12423266 push esi */
  push32((uint32_t)(ESI));
  /* 12423267 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242326a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1242326f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 12423274 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12423279 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 1242327c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12423281 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12423284 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12423286 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 12423289 push ecx */
  push32((uint32_t)(ECX));
  /* 1242328a push 1 */
  push32((uint32_t)(0x1u));
  /* 1242328c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1242328f push edx */
  push32((uint32_t)(EDX));
  /* 12423290 call dword ptr [0x12442ab4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12442ab4))), 0x12423296u);
  /* 12423296 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12423298 jne 0x1242329e */
  if (!C.zf) goto L_1242329e;
  /* 1242329a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1242329c jmp 0x124232e2 */
  goto L_124232e2;
L_1242329e:;
  /* 1242329e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 124232a1 push eax */
  push32((uint32_t)(EAX));
  /* 124232a2 call 0x124234d0 */
  push32(0x124232a7u); f_124234d0();
  /* 124232a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124232aa cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124232ad je 0x124232dd */
  if (C.zf) goto L_124232dd;
  /* 124232af cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124232b3 je 0x124232dd */
  if (C.zf) goto L_124232dd;
  /* 124232b5 mov ecx, dword ptr [0x12442aa4] */
  ECX = (r32((uint32_t)(0x12442aa4)));
  /* 124232bb push ecx */
  push32((uint32_t)(ECX));
  /* 124232bc call 0x12423550 */
  push32(0x124232c1u); f_12423550();
  /* 124232c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124232c4 mov esi, eax */
  ESI = (EAX);
  /* 124232c6 mov edx, dword ptr [0x12442aa4] */
  EDX = (r32((uint32_t)(0x12442aa4)));
  /* 124232cc push edx */
  push32((uint32_t)(EDX));
  /* 124232cd call 0x12419870 */
  push32(0x124232d2u); f_12419870();
  /* 124232d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124232d5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124232d7 jne 0x124232dd */
  if (!C.zf) goto L_124232dd;
  /* 124232d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124232db jmp 0x124232e2 */
  goto L_124232e2;
L_124232dd:;
  /* 124232dd mov eax, 1 */
  EAX = (0x1u);
L_124232e2:;
  /* 124232e2 pop esi */
  ESI = (pop32());
  /* 124232e3 mov esp, ebp */
  ESP = (EBP);
  /* 124232e5 pop ebp */
  EBP = (pop32());
  /* 124232e6 ret  */
  ESPCHK(0x12423260u, _esp0);
  ESP += 4; return;
}

/* FUN_100132f0 @ 0x124232f0 (77 bytes, 18 insns) */
void f_124232f0(void) {
  FTRACE(0x124232f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124232f0 push ebp */
  push32((uint32_t)(EBP));
  /* 124232f1 mov ebp, esp */
  EBP = (ESP);
  /* 124232f3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124232f9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 12423303 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 12423309 push eax */
  push32((uint32_t)(EAX));
  /* 1242330a call dword ptr [0x124452cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452cc))), 0x12423310u);
  /* 12423310 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12423312 je 0x12423329 */
  if (C.zf) goto L_12423329;
  /* 12423314 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242331b jne 0x12423329 */
  if (!C.zf) goto L_12423329;
  /* 1242331d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 12423327 jmp 0x12423333 */
  goto L_12423333;
L_12423329:;
  /* 12423329 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_12423333:;
  /* 12423333 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12423339 mov esp, ebp */
  ESP = (EBP);
  /* 1242333b pop ebp */
  EBP = (pop32());
  /* 1242333c ret  */
  ESPCHK(0x124232f0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x12423340 (388 bytes, 118 insns) */
void f_12423340(void) {
  FTRACE(0x12423340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12423340 push ebp */
  push32((uint32_t)(EBP));
  /* 12423341 mov ebp, esp */
  EBP = (ESP);
  /* 12423343 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12423346 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1242334d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 12423354 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1242335b:;
  /* 1242335b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1242335e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12423361 jg 0x124234a8 */
  if ((!C.zf&&C.sf==C.of)) goto L_124234a8;
  /* 12423367 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1242336a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242336d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1242336e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12423370 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12423372 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12423375 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12423378 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1242337b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242337e cmp edx, dword ptr [ecx + 0x12441520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x12441520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12423384 jne 0x1242347e */
  if (!C.zf) goto L_1242347e;
  /* 1242338a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1242338d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12423390 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12423394 ja 0x124233b7 */
  if ((!C.cf&&!C.zf)) goto L_124233b7;
  /* 12423396 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242339a je 0x12423429 */
  if (C.zf) goto L_12423429;
  /* 124233a0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124233a4 je 0x124233d4 */
  if (C.zf) goto L_124233d4;
  /* 124233a6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124233aa je 0x124233f6 */
  if (C.zf) goto L_124233f6;
  /* 124233ac cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124233b0 je 0x12423418 */
  if (C.zf) goto L_12423418;
  /* 124233b2 jmp 0x12423448 */
  goto L_12423448;
L_124233b7:;
  /* 124233b7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124233be je 0x124233e5 */
  if (C.zf) goto L_124233e5;
  /* 124233c0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124233c7 je 0x12423407 */
  if (C.zf) goto L_12423407;
  /* 124233c9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124233d0 je 0x1242343a */
  if (C.zf) goto L_1242343a;
  /* 124233d2 jmp 0x12423448 */
  goto L_12423448;
L_124233d4:;
  /* 124233d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124233d7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124233da add ecx, 0x12441524 */
  { uint32_t _a=(ECX),_b=(0x12441524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124233e0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124233e3 jmp 0x12423448 */
  goto L_12423448;
L_124233e5:;
  /* 124233e5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124233e8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124233eb mov eax, dword ptr [edx + 0x1244152c] */
  EAX = (r32((uint32_t)(EDX + 0x1244152c)));
  /* 124233f1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124233f4 jmp 0x12423448 */
  goto L_12423448;
L_124233f6:;
  /* 124233f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124233f9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124233fc add ecx, 0x12441530 */
  { uint32_t _a=(ECX),_b=(0x12441530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12423402 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12423405 jmp 0x12423448 */
  goto L_12423448;
L_12423407:;
  /* 12423407 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1242340a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1242340d mov eax, dword ptr [edx + 0x12441534] */
  EAX = (r32((uint32_t)(EDX + 0x12441534)));
  /* 12423413 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12423416 jmp 0x12423448 */
  goto L_12423448;
L_12423418:;
  /* 12423418 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1242341b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1242341e add ecx, 0x12441538 */
  { uint32_t _a=(ECX),_b=(0x12441538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12423424 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12423427 jmp 0x12423448 */
  goto L_12423448;
L_12423429:;
  /* 12423429 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1242342c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1242342f add edx, 0x1244153c */
  { uint32_t _a=(EDX),_b=(0x1244153cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12423435 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12423438 jmp 0x12423448 */
  goto L_12423448;
L_1242343a:;
  /* 1242343a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1242343d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12423440 add eax, 0x12441544 */
  { uint32_t _a=(EAX),_b=(0x12441544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12423445 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12423448:;
  /* 12423448 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242344c je 0x12423454 */
  if (C.zf) goto L_12423454;
  /* 1242344e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12423452 jge 0x12423456 */
  if ((C.sf==C.of)) goto L_12423456;
L_12423454:;
  /* 12423454 jmp 0x124234a8 */
  goto L_124234a8;
L_12423456:;
  /* 12423456 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12423459 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1242345c push ecx */
  push32((uint32_t)(ECX));
  /* 1242345d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12423460 push edx */
  push32((uint32_t)(EDX));
  /* 12423461 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12423464 push eax */
  push32((uint32_t)(EAX));
  /* 12423465 call 0x1241a260 */
  push32(0x1242346au); f_1241a260();
  /* 1242346a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242346d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12423470 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12423473 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 12423477 mov eax, 1 */
  EAX = (0x1u);
  /* 1242347c jmp 0x124234be */
  goto L_124234be;
L_1242347e:;
  /* 1242347e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12423481 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12423484 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12423487 cmp eax, dword ptr [edx + 0x12441520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x12441520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242348d jae 0x1242349a */
  if (!C.cf) goto L_1242349a;
  /* 1242348f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12423492 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12423495 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12423498 jmp 0x124234a3 */
  goto L_124234a3;
L_1242349a:;
  /* 1242349a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1242349d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124234a0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_124234a3:;
  /* 124234a3 jmp 0x1242335b */
  goto L_1242335b;
L_124234a8:;
  /* 124234a8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124234ab push eax */
  push32((uint32_t)(EAX));
  /* 124234ac mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124234af push ecx */
  push32((uint32_t)(ECX));
  /* 124234b0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124234b3 push edx */
  push32((uint32_t)(EDX));
  /* 124234b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124234b7 push eax */
  push32((uint32_t)(EAX));
  /* 124234b8 call dword ptr [0x124452d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452d8))), 0x124234beu);
L_124234be:;
  /* 124234be mov esp, ebp */
  ESP = (EBP);
  /* 124234c0 pop ebp */
  EBP = (pop32());
  /* 124234c1 ret 0x10 */
  ESPCHK(0x12423340u, _esp0);
  ESP += 20; return;
}

/* FUN_100134d0 @ 0x124234d0 (118 bytes, 42 insns) */
void f_124234d0(void) {
  FTRACE(0x124234d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124234d0 push ebp */
  push32((uint32_t)(EBP));
  /* 124234d1 mov ebp, esp */
  EBP = (ESP);
  /* 124234d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124234d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_124234dd:;
  /* 124234dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124234e0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 124234e2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 124234e5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 124234e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124234ec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124234ef mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 124234f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124234f4 je 0x1242353f */
  if (C.zf) goto L_1242353f;
  /* 124234f6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 124234fa cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124234fd jl 0x12423512 */
  if ((C.sf!=C.of)) goto L_12423512;
  /* 124234ff movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12423503 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12423506 jg 0x12423512 */
  if ((!C.zf&&C.sf==C.of)) goto L_12423512;
  /* 12423508 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1242350b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1242350d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12423510 jmp 0x1242352c */
  goto L_1242352c;
L_12423512:;
  /* 12423512 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12423516 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12423519 jl 0x1242352c */
  if ((C.sf!=C.of)) goto L_1242352c;
  /* 1242351b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1242351f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12423522 jg 0x1242352c */
  if ((!C.zf&&C.sf==C.of)) goto L_1242352c;
  /* 12423524 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12423527 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12423529 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_1242352c:;
  /* 1242352c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1242352f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12423532 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12423536 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1242353a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1242353d jmp 0x124234dd */
  goto L_124234dd;
L_1242353f:;
  /* 1242353f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12423542 mov esp, ebp */
  ESP = (EBP);
  /* 12423544 pop ebp */
  EBP = (pop32());
  /* 12423545 ret  */
  ESPCHK(0x124234d0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x12423550 (101 bytes, 36 insns) */
void f_12423550(void) {
  FTRACE(0x12423550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12423550 push ebp */
  push32((uint32_t)(EBP));
  /* 12423551 mov ebp, esp */
  EBP = (ESP);
  /* 12423553 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12423556 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1242355d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12423560 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12423562 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 12423565 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12423568 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242356b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_1242356e:;
  /* 1242356e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12423572 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12423575 jl 0x12423580 */
  if ((C.sf!=C.of)) goto L_12423580;
  /* 12423577 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1242357b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242357e jle 0x12423592 */
  if ((C.zf||C.sf!=C.of)) goto L_12423592;
L_12423580:;
  /* 12423580 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12423584 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12423587 jl 0x124235ae */
  if ((C.sf!=C.of)) goto L_124235ae;
  /* 12423589 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1242358d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12423590 jg 0x124235ae */
  if ((!C.zf&&C.sf==C.of)) goto L_124235ae;
L_12423592:;
  /* 12423592 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12423595 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12423598 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1242359b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242359e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 124235a0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 124235a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124235a6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124235a9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 124235ac jmp 0x1242356e */
  goto L_1242356e;
L_124235ae:;
  /* 124235ae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124235b1 mov esp, ebp */
  ESP = (EBP);
  /* 124235b3 pop ebp */
  EBP = (pop32());
  /* 124235b4 ret  */
  ESPCHK(0x12423550u, _esp0);
  ESP += 4; return;
}

/* FUN_100135c0 @ 0x124235c0 (122 bytes, 39 insns) */
void f_124235c0(void) {
  FTRACE(0x124235c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124235c0 push ebp */
  push32((uint32_t)(EBP));
  /* 124235c1 mov ebp, esp */
  EBP = (ESP);
  /* 124235c3 push ecx */
  push32((uint32_t)(ECX));
  /* 124235c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124235c7 cmp eax, dword ptr [0x1244433c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1244433c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124235cd jae 0x124235f1 */
  if (!C.cf) goto L_124235f1;
  /* 124235cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124235d2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 124235d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124235d8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 124235db imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124235de mov eax, dword ptr [ecx*4 + 0x12444200] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12444200)));
  /* 124235e5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 124235ea and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 124235ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124235ef jne 0x1242360c */
  if (!C.zf) goto L_1242360c;
L_124235f1:;
  /* 124235f1 call 0x1241e910 */
  push32(0x124235f6u); f_1241e910();
  /* 124235f6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 124235fc call 0x1241e920 */
  push32(0x12423601u); f_1241e920();
  /* 12423601 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12423607 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1242360a jmp 0x12423636 */
  goto L_12423636;
L_1242360c:;
  /* 1242360c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242360f push edx */
  push32((uint32_t)(EDX));
  /* 12423610 call 0x12420130 */
  push32(0x12423615u); f_12420130();
  /* 12423615 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423618 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242361b push eax */
  push32((uint32_t)(EAX));
  /* 1242361c call 0x12423640 */
  push32(0x12423621u); f_12423640();
  /* 12423621 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423624 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12423627 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242362a push ecx */
  push32((uint32_t)(ECX));
  /* 1242362b call 0x124201c0 */
  push32(0x12423630u); f_124201c0();
  /* 12423630 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423633 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12423636:;
  /* 12423636 mov esp, ebp */
  ESP = (EBP);
  /* 12423638 pop ebp */
  EBP = (pop32());
  /* 12423639 ret  */
  ESPCHK(0x124235c0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x12423640 (170 bytes, 59 insns) */
void f_12423640(void) {
  FTRACE(0x12423640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12423640 push ebp */
  push32((uint32_t)(EBP));
  /* 12423641 mov ebp, esp */
  EBP = (ESP);
  /* 12423643 push ecx */
  push32((uint32_t)(ECX));
  /* 12423644 push esi */
  push32((uint32_t)(ESI));
  /* 12423645 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12423648 push eax */
  push32((uint32_t)(EAX));
  /* 12423649 call 0x1241ffb0 */
  push32(0x1242364eu); f_1241ffb0();
  /* 1242364e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423651 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12423654 je 0x12423693 */
  if (C.zf) goto L_12423693;
  /* 12423656 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242365a je 0x12423662 */
  if (C.zf) goto L_12423662;
  /* 1242365c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12423660 jne 0x1242367c */
  if (!C.zf) goto L_1242367c;
L_12423662:;
  /* 12423662 push 1 */
  push32((uint32_t)(0x1u));
  /* 12423664 call 0x1241ffb0 */
  push32(0x12423669u); f_1241ffb0();
  /* 12423669 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242366c mov esi, eax */
  ESI = (EAX);
  /* 1242366e push 2 */
  push32((uint32_t)(0x2u));
  /* 12423670 call 0x1241ffb0 */
  push32(0x12423675u); f_1241ffb0();
  /* 12423675 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423678 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242367a je 0x12423693 */
  if (C.zf) goto L_12423693;
L_1242367c:;
  /* 1242367c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242367f push ecx */
  push32((uint32_t)(ECX));
  /* 12423680 call 0x1241ffb0 */
  push32(0x12423685u); f_1241ffb0();
  /* 12423685 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423688 push eax */
  push32((uint32_t)(EAX));
  /* 12423689 call dword ptr [0x124452c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452c8))), 0x1242368fu);
  /* 1242368f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12423691 je 0x1242369c */
  if (C.zf) goto L_1242369c;
L_12423693:;
  /* 12423693 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1242369a jmp 0x124236a5 */
  goto L_124236a5;
L_1242369c:;
  /* 1242369c call dword ptr [0x1244539c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244539c))), 0x124236a2u);
  /* 124236a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_124236a5:;
  /* 124236a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124236a8 push edx */
  push32((uint32_t)(EDX));
  /* 124236a9 call 0x1241fed0 */
  push32(0x124236aeu); f_1241fed0();
  /* 124236ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124236b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124236b4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 124236b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124236ba and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 124236bd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124236c0 mov edx, dword ptr [eax*4 + 0x12444200] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12444200)));
  /* 124236c7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 124236cc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124236d0 je 0x124236e3 */
  if (C.zf) goto L_124236e3;
  /* 124236d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124236d5 push eax */
  push32((uint32_t)(EAX));
  /* 124236d6 call 0x1241e870 */
  push32(0x124236dbu); f_1241e870();
  /* 124236db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124236de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124236e1 jmp 0x124236e5 */
  goto L_124236e5;
L_124236e3:;
  /* 124236e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124236e5:;
  /* 124236e5 pop esi */
  ESI = (pop32());
  /* 124236e6 mov esp, ebp */
  ESP = (EBP);
  /* 124236e8 pop ebp */
  EBP = (pop32());
  /* 124236e9 ret  */
  ESPCHK(0x12423640u, _esp0);
  ESP += 4; return;
}

/* FUN_100136f0 @ 0x124236f0 (146 bytes, 52 insns) */
void f_124236f0(void) {
  FTRACE(0x124236f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124236f0 push ebp */
  push32((uint32_t)(EBP));
  /* 124236f1 mov ebp, esp */
  EBP = (ESP);
  /* 124236f3 push ebx */
  push32((uint32_t)(EBX));
  /* 124236f4 push esi */
  push32((uint32_t)(ESI));
  /* 124236f5 push edi */
  push32((uint32_t)(EDI));
L_124236f6:;
  /* 124236f6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124236fa jne 0x1242371a */
  if (!C.zf) goto L_1242371a;
  /* 124236fc push 0x1243e698 */
  push32((uint32_t)(0x1243e698u));
  /* 12423701 push 0 */
  push32((uint32_t)(0x0u));
  /* 12423703 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12423705 push 0x1243ed60 */
  push32((uint32_t)(0x1243ed60u));
  /* 1242370a push 2 */
  push32((uint32_t)(0x2u));
  /* 1242370c call 0x12415b00 */
  push32(0x12423711u); f_12415b00();
  /* 12423711 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423714 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12423717 jne 0x1242371a */
  if (!C.zf) goto L_1242371a;
  /* 12423719 int3  */
  x86_unimpl("int3 @ 0x12423719");
L_1242371a:;
  /* 1242371a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1242371c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1242371e jne 0x124236f6 */
  if (!C.zf) goto L_124236f6;
  /* 12423720 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12423723 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12423726 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 1242372c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1242372e je 0x1242377d */
  if (C.zf) goto L_1242377d;
  /* 12423730 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12423733 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12423736 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12423739 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1242373b je 0x1242377d */
  if (C.zf) goto L_1242377d;
  /* 1242373d push 2 */
  push32((uint32_t)(0x2u));
  /* 1242373f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12423742 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12423745 push eax */
  push32((uint32_t)(EAX));
  /* 12423746 call 0x124174d0 */
  push32(0x1242374bu); f_124174d0();
  /* 1242374b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242374e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12423751 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12423754 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 1242375a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242375d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12423760 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12423763 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12423769 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1242376c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12423773 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12423776 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_1242377d:;
  /* 1242377d pop edi */
  EDI = (pop32());
  /* 1242377e pop esi */
  ESI = (pop32());
  /* 1242377f pop ebx */
  EBX = (pop32());
  /* 12423780 pop ebp */
  EBP = (pop32());
  /* 12423781 ret  */
  ESPCHK(0x124236f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013790 @ 0x12423790 (289 bytes, 97 insns) */
void f_12423790(void) {
  FTRACE(0x12423790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12423790 push ebp */
  push32((uint32_t)(EBP));
  /* 12423791 mov ebp, esp */
  EBP = (ESP);
  /* 12423793 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12423796 push esi */
  push32((uint32_t)(ESI));
  /* 12423797 mov eax, dword ptr [0x12441c98] */
  EAX = (r32((uint32_t)(0x12441c98)));
  /* 1242379c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1242379f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 124237a6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 124237ad jmp 0x124237b8 */
  goto L_124237b8;
L_124237af:;
  /* 124237af mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124237b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124237b5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_124237b8:;
  /* 124237b8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124237bc jae 0x124237f1 */
  if (!C.cf) goto L_124237f1;
  /* 124237be mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124237c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124237c4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 124237c7 push ecx */
  push32((uint32_t)(ECX));
  /* 124237c8 call 0x12419870 */
  push32(0x124237cdu); f_12419870();
  /* 124237cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124237d0 mov esi, eax */
  ESI = (EAX);
  /* 124237d2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124237d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124237d8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 124237dc push ecx */
  push32((uint32_t)(ECX));
  /* 124237dd call 0x12419870 */
  push32(0x124237e2u); f_12419870();
  /* 124237e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124237e5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124237e8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 124237ec mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 124237ef jmp 0x124237af */
  goto L_124237af;
L_124237f1:;
  /* 124237f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124237f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124237f7 push eax */
  push32((uint32_t)(EAX));
  /* 124237f8 call 0x12416a20 */
  push32(0x124237fdu); f_12416a20();
  /* 124237fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423800 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12423803 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12423807 je 0x124238a9 */
  if (C.zf) goto L_124238a9;
  /* 1242380d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12423810 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12423813 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1242381a jmp 0x12423825 */
  goto L_12423825;
L_1242381c:;
  /* 1242381c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1242381f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12423822 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12423825:;
  /* 12423825 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12423829 jae 0x1242389a */
  if (!C.cf) goto L_1242389a;
  /* 1242382b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1242382e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12423831 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12423834 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12423837 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1242383a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1242383d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12423840 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12423843 push ecx */
  push32((uint32_t)(ECX));
  /* 12423844 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12423847 push edx */
  push32((uint32_t)(EDX));
  /* 12423848 call 0x124199f0 */
  push32(0x1242384du); f_124199f0();
  /* 1242384d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423850 push eax */
  push32((uint32_t)(EAX));
  /* 12423851 call 0x12419870 */
  push32(0x12423856u); f_12419870();
  /* 12423856 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423859 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1242385c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242385e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12423861 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12423864 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12423867 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1242386a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242386d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12423870 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12423873 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12423876 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1242387a push eax */
  push32((uint32_t)(EAX));
  /* 1242387b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1242387e push ecx */
  push32((uint32_t)(ECX));
  /* 1242387f call 0x124199f0 */
  push32(0x12423884u); f_124199f0();
  /* 12423884 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423887 push eax */
  push32((uint32_t)(EAX));
  /* 12423888 call 0x12419870 */
  push32(0x1242388du); f_12419870();
  /* 1242388d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423890 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12423893 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12423895 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12423898 jmp 0x1242381c */
  goto L_1242381c;
L_1242389a:;
  /* 1242389a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1242389d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 124238a0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124238a3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124238a6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_124238a9:;
  /* 124238a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124238ac pop esi */
  ESI = (pop32());
  /* 124238ad mov esp, ebp */
  ESP = (EBP);
  /* 124238af pop ebp */
  EBP = (pop32());
  /* 124238b0 ret  */
  ESPCHK(0x12423790u, _esp0);
  ESP += 4; return;
}

/* FUN_100138c0 @ 0x124238c0 (291 bytes, 97 insns) */
void f_124238c0(void) {
  FTRACE(0x124238c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124238c0 push ebp */
  push32((uint32_t)(EBP));
  /* 124238c1 mov ebp, esp */
  EBP = (ESP);
  /* 124238c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124238c6 push esi */
  push32((uint32_t)(ESI));
  /* 124238c7 mov eax, dword ptr [0x12441c98] */
  EAX = (r32((uint32_t)(0x12441c98)));
  /* 124238cc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124238cf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 124238d6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 124238dd jmp 0x124238e8 */
  goto L_124238e8;
L_124238df:;
  /* 124238df mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124238e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124238e5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_124238e8:;
  /* 124238e8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124238ec jae 0x12423922 */
  if (!C.cf) goto L_12423922;
  /* 124238ee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124238f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124238f4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 124238f8 push ecx */
  push32((uint32_t)(ECX));
  /* 124238f9 call 0x12419870 */
  push32(0x124238feu); f_12419870();
  /* 124238fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423901 mov esi, eax */
  ESI = (EAX);
  /* 12423903 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12423906 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12423909 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 1242390d push ecx */
  push32((uint32_t)(ECX));
  /* 1242390e call 0x12419870 */
  push32(0x12423913u); f_12419870();
  /* 12423913 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423916 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12423919 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1242391d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12423920 jmp 0x124238df */
  goto L_124238df;
L_12423922:;
  /* 12423922 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12423925 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12423928 push eax */
  push32((uint32_t)(EAX));
  /* 12423929 call 0x12416a20 */
  push32(0x1242392eu); f_12416a20();
  /* 1242392e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423931 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12423934 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12423938 je 0x124239db */
  if (C.zf) goto L_124239db;
  /* 1242393e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12423941 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12423944 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1242394b jmp 0x12423956 */
  goto L_12423956;
L_1242394d:;
  /* 1242394d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12423950 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12423953 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12423956:;
  /* 12423956 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1242395a jae 0x124239cc */
  if (!C.cf) goto L_124239cc;
  /* 1242395c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1242395f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12423962 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12423965 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12423968 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1242396b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1242396e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12423971 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12423975 push ecx */
  push32((uint32_t)(ECX));
  /* 12423976 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12423979 push edx */
  push32((uint32_t)(EDX));
  /* 1242397a call 0x124199f0 */
  push32(0x1242397fu); f_124199f0();
  /* 1242397f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423982 push eax */
  push32((uint32_t)(EAX));
  /* 12423983 call 0x12419870 */
  push32(0x12423988u); f_12419870();
  /* 12423988 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1242398b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1242398e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12423990 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12423993 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12423996 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12423999 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1242399c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1242399f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 124239a2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124239a5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124239a8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 124239ac push eax */
  push32((uint32_t)(EAX));
  /* 124239ad mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124239b0 push ecx */
  push32((uint32_t)(ECX));
  /* 124239b1 call 0x124199f0 */
  push32(0x124239b6u); f_124199f0();
  /* 124239b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124239b9 push eax */
  push32((uint32_t)(EAX));
  /* 124239ba call 0x12419870 */
  push32(0x124239bfu); f_12419870();
  /* 124239bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124239c2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124239c5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124239c7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 124239ca jmp 0x1242394d */
  goto L_1242394d;
L_124239cc:;
  /* 124239cc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 124239cf mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 124239d2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 124239d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124239d8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_124239db:;
  /* 124239db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124239de pop esi */
  ESI = (pop32());
  /* 124239df mov esp, ebp */
  ESP = (EBP);
  /* 124239e1 pop ebp */
  EBP = (pop32());
  /* 124239e2 ret  */
  ESPCHK(0x124238c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100139f0 @ 0x124239f0 (878 bytes, 273 insns) */
void f_124239f0(void) {
  FTRACE(0x124239f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124239f0 push ebp */
  push32((uint32_t)(EBP));
  /* 124239f1 mov ebp, esp */
  EBP = (ESP);
  /* 124239f3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124239f6 push esi */
  push32((uint32_t)(ESI));
  /* 124239f7 mov eax, dword ptr [0x12441c98] */
  EAX = (r32((uint32_t)(0x12441c98)));
  /* 124239fc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124239ff mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12423a06 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12423a0d jmp 0x12423a18 */
  goto L_12423a18;
L_12423a0f:;
  /* 12423a0f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12423a12 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12423a15 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12423a18:;
  /* 12423a18 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12423a1c jae 0x12423a51 */
  if (!C.cf) goto L_12423a51;
  /* 12423a1e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12423a21 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12423a24 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12423a27 push ecx */
  push32((uint32_t)(ECX));
  /* 12423a28 call 0x12419870 */
  push32(0x12423a2du); f_12419870();
  /* 12423a2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423a30 mov esi, eax */
  ESI = (EAX);
  /* 12423a32 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12423a35 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12423a38 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 12423a3c push ecx */
  push32((uint32_t)(ECX));
  /* 12423a3d call 0x12419870 */
  push32(0x12423a42u); f_12419870();
  /* 12423a42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423a45 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12423a48 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12423a4c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12423a4f jmp 0x12423a0f */
  goto L_12423a0f;
L_12423a51:;
  /* 12423a51 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12423a58 jmp 0x12423a63 */
  goto L_12423a63;
L_12423a5a:;
  /* 12423a5a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12423a5d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12423a60 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12423a63:;
  /* 12423a63 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12423a67 jae 0x12423a9d */
  if (!C.cf) goto L_12423a9d;
  /* 12423a69 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12423a6c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12423a6f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12423a73 push eax */
  push32((uint32_t)(EAX));
  /* 12423a74 call 0x12419870 */
  push32(0x12423a79u); f_12419870();
  /* 12423a79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423a7c mov esi, eax */
  ESI = (EAX);
  /* 12423a7e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12423a81 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12423a84 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12423a88 push eax */
  push32((uint32_t)(EAX));
  /* 12423a89 call 0x12419870 */
  push32(0x12423a8eu); f_12419870();
  /* 12423a8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423a91 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12423a94 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12423a98 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12423a9b jmp 0x12423a5a */
  goto L_12423a5a;
L_12423a9d:;
  /* 12423a9d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12423aa0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12423aa6 push eax */
  push32((uint32_t)(EAX));
  /* 12423aa7 call 0x12419870 */
  push32(0x12423aacu); f_12419870();
  /* 12423aac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423aaf mov esi, eax */
  ESI = (EAX);
  /* 12423ab1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12423ab4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 12423aba push edx */
  push32((uint32_t)(EDX));
  /* 12423abb call 0x12419870 */
  push32(0x12423ac0u); f_12419870();
  /* 12423ac0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423ac3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12423ac6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12423aca mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12423acd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12423ad0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12423ad6 push edx */
  push32((uint32_t)(EDX));
  /* 12423ad7 call 0x12419870 */
  push32(0x12423adcu); f_12419870();
  /* 12423adc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423adf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12423ae2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12423ae6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12423ae9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12423aec mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 12423af2 push ecx */
  push32((uint32_t)(ECX));
  /* 12423af3 call 0x12419870 */
  push32(0x12423af8u); f_12419870();
  /* 12423af8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423afb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12423afe lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12423b02 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12423b05 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12423b08 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 12423b0e push edx */
  push32((uint32_t)(EDX));
  /* 12423b0f call 0x12419870 */
  push32(0x12423b14u); f_12419870();
  /* 12423b14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423b17 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12423b1a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12423b1e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12423b21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12423b24 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12423b29 push eax */
  push32((uint32_t)(EAX));
  /* 12423b2a call 0x12416a20 */
  push32(0x12423b2fu); f_12416a20();
  /* 12423b2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423b32 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12423b35 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12423b39 je 0x12423d56 */
  if (C.zf) goto L_12423d56;
  /* 12423b3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12423b42 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12423b45 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12423b48 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12423b4e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12423b51 push 0xac */
  push32((uint32_t)(0xacu));
  /* 12423b56 mov eax, dword ptr [0x12441c98] */
  EAX = (r32((uint32_t)(0x12441c98)));
  /* 12423b5b push eax */
  push32((uint32_t)(EAX));
  /* 12423b5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12423b5f push ecx */
  push32((uint32_t)(ECX));
  /* 12423b60 call 0x1241d320 */
  push32(0x12423b65u); f_1241d320();
  /* 12423b65 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423b68 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12423b6f jmp 0x12423b7a */
  goto L_12423b7a;
L_12423b71:;
  /* 12423b71 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12423b74 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12423b77 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12423b7a:;
  /* 12423b7a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12423b7e jae 0x12423bee */
  if (!C.cf) goto L_12423bee;
  /* 12423b80 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12423b83 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12423b86 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12423b89 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 12423b8c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12423b8f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12423b92 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12423b95 push edx */
  push32((uint32_t)(EDX));
  /* 12423b96 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12423b99 push eax */
  push32((uint32_t)(EAX));
  /* 12423b9a call 0x124199f0 */
  push32(0x12423b9fu); f_124199f0();
  /* 12423b9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423ba2 push eax */
  push32((uint32_t)(EAX));
  /* 12423ba3 call 0x12419870 */
  push32(0x12423ba8u); f_12419870();
  /* 12423ba8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423bab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12423bae lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12423bb2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12423bb5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12423bb8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12423bbb mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12423bbe mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 12423bc2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12423bc5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12423bc8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 12423bcc push edx */
  push32((uint32_t)(EDX));
  /* 12423bcd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12423bd0 push eax */
  push32((uint32_t)(EAX));
  /* 12423bd1 call 0x124199f0 */
  push32(0x12423bd6u); f_124199f0();
  /* 12423bd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423bd9 push eax */
  push32((uint32_t)(EAX));
  /* 12423bda call 0x12419870 */
  push32(0x12423bdfu); f_12419870();
  /* 12423bdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423be2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12423be5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12423be9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12423bec jmp 0x12423b71 */
  goto L_12423b71;
L_12423bee:;
  /* 12423bee mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12423bf5 jmp 0x12423c00 */
  goto L_12423c00;
L_12423bf7:;
  /* 12423bf7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12423bfa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12423bfd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12423c00:;
  /* 12423c00 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12423c04 jae 0x12423c76 */
  if (!C.cf) goto L_12423c76;
  /* 12423c06 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12423c09 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12423c0c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12423c0f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 12423c13 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12423c16 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12423c19 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12423c1d push eax */
  push32((uint32_t)(EAX));
  /* 12423c1e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12423c21 push ecx */
  push32((uint32_t)(ECX));
  /* 12423c22 call 0x124199f0 */
  push32(0x12423c27u); f_124199f0();
  /* 12423c27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423c2a push eax */
  push32((uint32_t)(EAX));
  /* 12423c2b call 0x12419870 */
  push32(0x12423c30u); f_12419870();
  /* 12423c30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423c33 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12423c36 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12423c3a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12423c3d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12423c40 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12423c43 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12423c46 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 12423c4a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12423c4d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12423c50 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12423c54 push eax */
  push32((uint32_t)(EAX));
  /* 12423c55 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12423c58 push ecx */
  push32((uint32_t)(ECX));
  /* 12423c59 call 0x124199f0 */
  push32(0x12423c5eu); f_124199f0();
  /* 12423c5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423c61 push eax */
  push32((uint32_t)(EAX));
  /* 12423c62 call 0x12419870 */
  push32(0x12423c67u); f_12419870();
  /* 12423c67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423c6a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12423c6d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12423c71 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12423c74 jmp 0x12423bf7 */
  goto L_12423bf7;
L_12423c76:;
  /* 12423c76 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12423c79 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12423c7c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 12423c82 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12423c85 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 12423c8b push ecx */
  push32((uint32_t)(ECX));
  /* 12423c8c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12423c8f push edx */
  push32((uint32_t)(EDX));
  /* 12423c90 call 0x124199f0 */
  push32(0x12423c95u); f_124199f0();
  /* 12423c95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423c98 push eax */
  push32((uint32_t)(EAX));
  /* 12423c99 call 0x12419870 */
  push32(0x12423c9eu); f_12419870();
  /* 12423c9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423ca1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12423ca4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12423ca8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12423cab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12423cae mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12423cb1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 12423cb7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12423cba mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12423cc0 push eax */
  push32((uint32_t)(EAX));
  /* 12423cc1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12423cc4 push ecx */
  push32((uint32_t)(ECX));
  /* 12423cc5 call 0x124199f0 */
  push32(0x12423ccau); f_124199f0();
  /* 12423cca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423ccd push eax */
  push32((uint32_t)(EAX));
  /* 12423cce call 0x12419870 */
  push32(0x12423cd3u); f_12419870();
  /* 12423cd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423cd6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12423cd9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12423cdd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12423ce0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12423ce3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12423ce6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 12423cec mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12423cef mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 12423cf5 push ecx */
  push32((uint32_t)(ECX));
  /* 12423cf6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12423cf9 push edx */
  push32((uint32_t)(EDX));
  /* 12423cfa call 0x124199f0 */
  push32(0x12423cffu); f_124199f0();
  /* 12423cff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423d02 push eax */
  push32((uint32_t)(EAX));
  /* 12423d03 call 0x12419870 */
  push32(0x12423d08u); f_12419870();
  /* 12423d08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423d0b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12423d0e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12423d12 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12423d15 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12423d18 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12423d1b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 12423d21 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12423d24 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 12423d2a push eax */
  push32((uint32_t)(EAX));
  /* 12423d2b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12423d2e push ecx */
  push32((uint32_t)(ECX));
  /* 12423d2f call 0x124199f0 */
  push32(0x12423d34u); f_124199f0();
  /* 12423d34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423d37 push eax */
  push32((uint32_t)(EAX));
  /* 12423d38 call 0x12419870 */
  push32(0x12423d3du); f_12419870();
  /* 12423d3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423d40 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12423d43 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12423d47 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12423d4a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12423d4d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12423d50 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_12423d56:;
  /* 12423d56 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12423d59 pop esi */
  ESI = (pop32());
  /* 12423d5a mov esp, ebp */
  ESP = (EBP);
  /* 12423d5c pop ebp */
  EBP = (pop32());
  /* 12423d5d ret  */
  ESPCHK(0x124239f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013d60 @ 0x12423d60 (31 bytes, 15 insns) */
void f_12423d60(void) {
  FTRACE(0x12423d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12423d60 push ebp */
  push32((uint32_t)(EBP));
  /* 12423d61 mov ebp, esp */
  EBP = (ESP);
  /* 12423d63 push 0 */
  push32((uint32_t)(0x0u));
  /* 12423d65 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12423d68 push eax */
  push32((uint32_t)(EAX));
  /* 12423d69 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12423d6c push ecx */
  push32((uint32_t)(ECX));
  /* 12423d6d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12423d70 push edx */
  push32((uint32_t)(EDX));
  /* 12423d71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12423d74 push eax */
  push32((uint32_t)(EAX));
  /* 12423d75 call 0x12423d80 */
  push32(0x12423d7au); f_12423d80();
  /* 12423d7a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12423d7d pop ebp */
  EBP = (pop32());
  /* 12423d7e ret  */
  ESPCHK(0x12423d60u, _esp0);
  ESP += 4; return;
}

