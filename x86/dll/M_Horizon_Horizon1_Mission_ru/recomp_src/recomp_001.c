#include "recomp.h"

/* FUN_10008420 @ 0x12cf8420 (10 bytes, 5 insns) */
void f_12cf8420(void) {
  FTRACE(0x12cf8420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf8420 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf8421 mov ebp, esp */
  EBP = (ESP);
  /* 12cf8423 mov eax, dword ptr [0x12d1ec94] */
  EAX = (r32((uint32_t)(0x12d1ec94)));
  /* 12cf8428 pop ebp */
  EBP = (pop32());
  /* 12cf8429 ret  */
  ESPCHK(0x12cf8420u, _esp0);
  ESP += 4; return;
}

/* FUN_10008430 @ 0x12cf8430 (31 bytes, 11 insns) */
void f_12cf8430(void) {
  FTRACE(0x12cf8430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf8430 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf8431 mov ebp, esp */
  EBP = (ESP);
  /* 12cf8433 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf843a jbe 0x12cf8440 */
  if ((C.cf||C.zf)) goto L_12cf8440;
  /* 12cf843c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf843e jmp 0x12cf844d */
  goto L_12cf844d;
L_12cf8440:;
  /* 12cf8440 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf8443 mov dword ptr [0x12d1ec94], eax */
  w32((uint32_t)(0x12d1ec94), (EAX));
  /* 12cf8448 mov eax, 1 */
  EAX = (0x1u);
L_12cf844d:;
  /* 12cf844d pop ebp */
  EBP = (pop32());
  /* 12cf844e ret  */
  ESPCHK(0x12cf8430u, _esp0);
  ESP += 4; return;
}

/* FUN_10008450 @ 0x12cf8450 (89 bytes, 20 insns) */
void f_12cf8450(void) {
  FTRACE(0x12cf8450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf8450 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf8451 mov ebp, esp */
  EBP = (ESP);
  /* 12cf8453 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 12cf8458 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf845a mov eax, dword ptr [0x12d21ecc] */
  EAX = (r32((uint32_t)(0x12d21ecc)));
  /* 12cf845f push eax */
  push32((uint32_t)(EAX));
  /* 12cf8460 call dword ptr [0x12d232ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232ec))), 0x12cf8466u);
  /* 12cf8466 mov dword ptr [0x12d21ec8], eax */
  w32((uint32_t)(0x12d21ec8), (EAX));
  /* 12cf846b cmp dword ptr [0x12d21ec8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d21ec8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf8472 jne 0x12cf8478 */
  if (!C.zf) goto L_12cf8478;
  /* 12cf8474 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf8476 jmp 0x12cf84a7 */
  goto L_12cf84a7;
L_12cf8478:;
  /* 12cf8478 mov ecx, dword ptr [0x12d21ec8] */
  ECX = (r32((uint32_t)(0x12d21ec8)));
  /* 12cf847e mov dword ptr [0x12d21ebc], ecx */
  w32((uint32_t)(0x12d21ebc), (ECX));
  /* 12cf8484 mov dword ptr [0x12d21ec0], 0 */
  w32((uint32_t)(0x12d21ec0), (0x0u));
  /* 12cf848e mov dword ptr [0x12d21ec4], 0 */
  w32((uint32_t)(0x12d21ec4), (0x0u));
  /* 12cf8498 mov dword ptr [0x12d21ea8], 0x10 */
  w32((uint32_t)(0x12d21ea8), (0x10u));
  /* 12cf84a2 mov eax, 1 */
  EAX = (0x1u);
L_12cf84a7:;
  /* 12cf84a7 pop ebp */
  EBP = (pop32());
  /* 12cf84a8 ret  */
  ESPCHK(0x12cf8450u, _esp0);
  ESP += 4; return;
}

/* FUN_100084b0 @ 0x12cf84b0 (85 bytes, 29 insns) */
void f_12cf84b0(void) {
  FTRACE(0x12cf84b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf84b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf84b1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf84b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf84b6 mov eax, dword ptr [0x12d21ec4] */
  EAX = (r32((uint32_t)(0x12d21ec4)));
  /* 12cf84bb imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cf84be mov ecx, dword ptr [0x12d21ec8] */
  ECX = (r32((uint32_t)(0x12d21ec8)));
  /* 12cf84c4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf84c6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cf84c9 mov edx, dword ptr [0x12d21ec8] */
  EDX = (r32((uint32_t)(0x12d21ec8)));
  /* 12cf84cf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12cf84d2:;
  /* 12cf84d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf84d5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf84d8 jae 0x12cf84ff */
  if (!C.cf) goto L_12cf84ff;
  /* 12cf84da mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf84dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf84e0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf84e3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cf84e6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf84ed jae 0x12cf84f4 */
  if (!C.cf) goto L_12cf84f4;
  /* 12cf84ef mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf84f2 jmp 0x12cf8501 */
  goto L_12cf8501;
L_12cf84f4:;
  /* 12cf84f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf84f7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf84fa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cf84fd jmp 0x12cf84d2 */
  goto L_12cf84d2;
L_12cf84ff:;
  /* 12cf84ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cf8501:;
  /* 12cf8501 mov esp, ebp */
  ESP = (EBP);
  /* 12cf8503 pop ebp */
  EBP = (pop32());
  /* 12cf8504 ret  */
  ESPCHK(0x12cf84b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008510 @ 0x12cf8510 (95 bytes, 33 insns) */
void f_12cf8510(void) {
  FTRACE(0x12cf8510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf8510 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf8511 mov ebp, esp */
  EBP = (ESP);
  /* 12cf8513 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf8516 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf8519 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf851c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf851f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cf8522 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf8525 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12cf8528 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cf852b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12cf8530 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf8533 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12cf8535 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf8538 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12cf853b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf853d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf853f jne 0x12cf8561 */
  if (!C.zf) goto L_12cf8561;
  /* 12cf8541 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf8544 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf8547 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf8549 jne 0x12cf8561 */
  if (!C.zf) goto L_12cf8561;
  /* 12cf854b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf854e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cf8554 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf8556 je 0x12cf8561 */
  if (C.zf) goto L_12cf8561;
  /* 12cf8558 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 12cf855f jmp 0x12cf8568 */
  goto L_12cf8568;
L_12cf8561:;
  /* 12cf8561 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12cf8568:;
  /* 12cf8568 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf856b mov esp, ebp */
  ESP = (EBP);
  /* 12cf856d pop ebp */
  EBP = (pop32());
  /* 12cf856e ret  */
  ESPCHK(0x12cf8510u, _esp0);
  ESP += 4; return;
}

/* FUN_10008570 @ 0x12cf8570 (1485 bytes, 453 insns) */
void f_12cf8570(void) {
  FTRACE(0x12cf8570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf8570 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf8571 mov ebp, esp */
  EBP = (ESP);
  /* 12cf8573 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf8576 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf8579 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12cf857c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 12cf857f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf8582 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf8585 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf8588 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12cf858b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf858e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 12cf8591 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cf8594 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf8597 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cf859d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cf85a0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 12cf85a7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cf85aa mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf85ad sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf85b0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12cf85b3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cf85b6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cf85b8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf85bb mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12cf85be mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cf85c1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf85c4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 12cf85c7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cf85ca mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cf85cc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12cf85cf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cf85d2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12cf85d5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cf85d8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf85db and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12cf85de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf85e0 jne 0x12cf8708 */
  if (!C.zf) goto L_12cf8708;
  /* 12cf85e6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf85e9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12cf85ec sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf85ef mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12cf85f2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf85f6 jbe 0x12cf85ff */
  if ((C.cf||C.zf)) goto L_12cf85ff;
  /* 12cf85f8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12cf85ff:;
  /* 12cf85ff mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cf8602 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cf8605 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cf8608 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf860b jne 0x12cf86e1 */
  if (!C.zf) goto L_12cf86e1;
  /* 12cf8611 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf8615 jae 0x12cf8676 */
  if (!C.cf) goto L_12cf8676;
  /* 12cf8617 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12cf861c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cf861f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12cf8621 not eax */
  EAX = (~(EAX));
  /* 12cf8623 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf8626 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cf8629 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12cf862d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf862f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf8632 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cf8635 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12cf8639 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cf863c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf863f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12cf8642 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12cf8645 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cf8648 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf864b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12cf864e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cf8651 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8654 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12cf8658 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf865a jne 0x12cf8674 */
  if (!C.zf) goto L_12cf8674;
  /* 12cf865c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12cf8661 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cf8664 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12cf8666 not eax */
  EAX = (~(EAX));
  /* 12cf8668 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf866b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cf866d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf866f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf8672 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12cf8674:;
  /* 12cf8674 jmp 0x12cf86e1 */
  goto L_12cf86e1;
L_12cf8676:;
  /* 12cf8676 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cf8679 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf867c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cf8681 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cf8683 not edx */
  EDX = (~(EDX));
  /* 12cf8685 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf8688 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cf868b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12cf8692 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf8694 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf8697 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cf869a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 12cf86a1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cf86a4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf86a7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12cf86aa sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12cf86ad mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cf86b0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf86b3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12cf86b6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cf86b9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf86bc movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12cf86c0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf86c2 jne 0x12cf86e1 */
  if (!C.zf) goto L_12cf86e1;
  /* 12cf86c4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cf86c7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf86ca mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cf86cf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cf86d1 not edx */
  EDX = (~(EDX));
  /* 12cf86d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf86d6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cf86d9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf86db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf86de mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12cf86e1:;
  /* 12cf86e1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cf86e4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12cf86e7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cf86ea mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12cf86ed mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12cf86f0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cf86f3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cf86f6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cf86f9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12cf86fc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12cf86ff mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf8702 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8705 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_12cf8708:;
  /* 12cf8708 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf870b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12cf870e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf8711 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12cf8714 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf8718 jbe 0x12cf8721 */
  if ((C.cf||C.zf)) goto L_12cf8721;
  /* 12cf871a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12cf8721:;
  /* 12cf8721 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf8724 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12cf8727 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf8729 jne 0x12cf8885 */
  if (!C.zf) goto L_12cf8885;
  /* 12cf872f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cf8732 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf8735 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 12cf8738 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf873b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12cf873e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf8741 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12cf8744 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf8748 jbe 0x12cf8751 */
  if ((C.cf||C.zf)) goto L_12cf8751;
  /* 12cf874a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_12cf8751:;
  /* 12cf8751 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf8754 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8757 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12cf875a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf875d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12cf8760 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf8763 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12cf8766 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf876a jbe 0x12cf8773 */
  if ((C.cf||C.zf)) goto L_12cf8773;
  /* 12cf876c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12cf8773:;
  /* 12cf8773 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cf8776 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf8779 je 0x12cf887f */
  if (C.zf) goto L_12cf887f;
  /* 12cf877f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12cf8782 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12cf8785 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cf8788 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf878b jne 0x12cf8861 */
  if (!C.zf) goto L_12cf8861;
  /* 12cf8791 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf8795 jae 0x12cf87f6 */
  if (!C.cf) goto L_12cf87f6;
  /* 12cf8797 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cf879c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cf879f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cf87a1 not edx */
  EDX = (~(EDX));
  /* 12cf87a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf87a6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cf87a9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12cf87ad and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf87af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf87b2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cf87b5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12cf87b9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cf87bc add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf87bf mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12cf87c2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12cf87c5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cf87c8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf87cb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12cf87ce mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cf87d1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf87d4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12cf87d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf87da jne 0x12cf87f4 */
  if (!C.zf) goto L_12cf87f4;
  /* 12cf87dc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cf87e1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cf87e4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cf87e6 not edx */
  EDX = (~(EDX));
  /* 12cf87e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf87eb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cf87ed and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf87ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf87f2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12cf87f4:;
  /* 12cf87f4 jmp 0x12cf8861 */
  goto L_12cf8861;
L_12cf87f6:;
  /* 12cf87f6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cf87f9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf87fc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12cf8801 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12cf8803 not eax */
  EAX = (~(EAX));
  /* 12cf8805 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf8808 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cf880b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12cf8812 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf8814 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf8817 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cf881a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12cf8821 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cf8824 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8827 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12cf882a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12cf882d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cf8830 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8833 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12cf8836 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cf8839 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf883c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12cf8840 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf8842 jne 0x12cf8861 */
  if (!C.zf) goto L_12cf8861;
  /* 12cf8844 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cf8847 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf884a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12cf884f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12cf8851 not eax */
  EAX = (~(EAX));
  /* 12cf8853 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf8856 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cf8859 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf885b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf885e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12cf8861:;
  /* 12cf8861 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12cf8864 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12cf8867 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12cf886a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cf886d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12cf8870 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12cf8873 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12cf8876 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12cf8879 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12cf887c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_12cf887f:;
  /* 12cf887f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12cf8882 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_12cf8885:;
  /* 12cf8885 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf8888 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12cf888b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf888d jne 0x12cf889b */
  if (!C.zf) goto L_12cf889b;
  /* 12cf888f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cf8892 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf8895 je 0x12cf89ab */
  if (C.zf) goto L_12cf89ab;
L_12cf889b:;
  /* 12cf889b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cf889e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf88a1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12cf88a4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12cf88a7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cf88aa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cf88ad mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cf88b0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12cf88b3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cf88b6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cf88b9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12cf88bc mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cf88bf mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cf88c2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12cf88c5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cf88c8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cf88cb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cf88ce mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12cf88d1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cf88d4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cf88d7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cf88da cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf88dd jne 0x12cf89ab */
  if (!C.zf) goto L_12cf89ab;
  /* 12cf88e3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf88e7 jae 0x12cf8944 */
  if (!C.cf) goto L_12cf8944;
  /* 12cf88e9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cf88ec add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf88ef movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12cf88f3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cf88f6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf88f9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12cf88fc add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12cf88ff mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cf8902 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8905 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12cf8908 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf890a jne 0x12cf8922 */
  if (!C.zf) goto L_12cf8922;
  /* 12cf890c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cf8911 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cf8914 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cf8916 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf8919 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cf891b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf891d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf8920 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12cf8922:;
  /* 12cf8922 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12cf8927 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cf892a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12cf892c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf892f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cf8932 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12cf8936 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf8938 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf893b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cf893e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12cf8942 jmp 0x12cf89ab */
  goto L_12cf89ab;
L_12cf8944:;
  /* 12cf8944 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cf8947 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf894a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12cf894e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cf8951 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8954 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12cf8957 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12cf895a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cf895d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8960 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12cf8963 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf8965 jne 0x12cf8982 */
  if (!C.zf) goto L_12cf8982;
  /* 12cf8967 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cf896a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf896d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cf8972 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cf8974 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf8977 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cf897a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf897c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf897f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12cf8982:;
  /* 12cf8982 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cf8985 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf8988 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12cf898d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12cf898f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf8992 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cf8995 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12cf899c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf899e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf89a1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cf89a4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12cf89ab:;
  /* 12cf89ab mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cf89ae mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf89b1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12cf89b3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cf89b6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf89b9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf89bc mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 12cf89bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf89c2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cf89c4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf89c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf89ca mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12cf89cc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf89cf cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf89d2 jne 0x12cf8b39 */
  if (!C.zf) goto L_12cf8b39;
  /* 12cf89d8 cmp dword ptr [0x12d21ec0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d21ec0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf89df je 0x12cf8b28 */
  if (C.zf) goto L_12cf8b28;
  /* 12cf89e5 mov eax, dword ptr [0x12d21eb8] */
  EAX = (r32((uint32_t)(0x12d21eb8)));
  /* 12cf89ea shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 12cf89ed mov ecx, dword ptr [0x12d21ec0] */
  ECX = (r32((uint32_t)(0x12d21ec0)));
  /* 12cf89f3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12cf89f6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf89f8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12cf89fb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12cf8a00 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12cf8a05 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf8a08 push eax */
  push32((uint32_t)(EAX));
  /* 12cf8a09 call dword ptr [0x12d23388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23388))), 0x12cf8a0fu);
  /* 12cf8a0f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cf8a14 mov ecx, dword ptr [0x12d21eb8] */
  ECX = (r32((uint32_t)(0x12d21eb8)));
  /* 12cf8a1a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cf8a1c mov eax, dword ptr [0x12d21ec0] */
  EAX = (r32((uint32_t)(0x12d21ec0)));
  /* 12cf8a21 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12cf8a24 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf8a26 mov edx, dword ptr [0x12d21ec0] */
  EDX = (r32((uint32_t)(0x12d21ec0)));
  /* 12cf8a2c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12cf8a2f mov eax, dword ptr [0x12d21ec0] */
  EAX = (r32((uint32_t)(0x12d21ec0)));
  /* 12cf8a34 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12cf8a37 mov edx, dword ptr [0x12d21eb8] */
  EDX = (r32((uint32_t)(0x12d21eb8)));
  /* 12cf8a3d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12cf8a48 mov eax, dword ptr [0x12d21ec0] */
  EAX = (r32((uint32_t)(0x12d21ec0)));
  /* 12cf8a4d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12cf8a50 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 12cf8a53 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12cf8a56 mov eax, dword ptr [0x12d21ec0] */
  EAX = (r32((uint32_t)(0x12d21ec0)));
  /* 12cf8a5b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12cf8a5e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 12cf8a61 mov edx, dword ptr [0x12d21ec0] */
  EDX = (r32((uint32_t)(0x12d21ec0)));
  /* 12cf8a67 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12cf8a6a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 12cf8a6e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf8a70 jne 0x12cf8a86 */
  if (!C.zf) goto L_12cf8a86;
  /* 12cf8a72 mov edx, dword ptr [0x12d21ec0] */
  EDX = (r32((uint32_t)(0x12d21ec0)));
  /* 12cf8a78 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12cf8a7b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 12cf8a7d mov ecx, dword ptr [0x12d21ec0] */
  ECX = (r32((uint32_t)(0x12d21ec0)));
  /* 12cf8a83 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12cf8a86:;
  /* 12cf8a86 mov edx, dword ptr [0x12d21ec0] */
  EDX = (r32((uint32_t)(0x12d21ec0)));
  /* 12cf8a8c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf8a90 jne 0x12cf8b28 */
  if (!C.zf) goto L_12cf8b28;
  /* 12cf8a96 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12cf8a9b push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf8a9d mov eax, dword ptr [0x12d21ec0] */
  EAX = (r32((uint32_t)(0x12d21ec0)));
  /* 12cf8aa2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12cf8aa5 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf8aa6 call dword ptr [0x12d23388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23388))), 0x12cf8aacu);
  /* 12cf8aac mov edx, dword ptr [0x12d21ec0] */
  EDX = (r32((uint32_t)(0x12d21ec0)));
  /* 12cf8ab2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12cf8ab5 push eax */
  push32((uint32_t)(EAX));
  /* 12cf8ab6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf8ab8 mov ecx, dword ptr [0x12d21ecc] */
  ECX = (r32((uint32_t)(0x12d21ecc)));
  /* 12cf8abe push ecx */
  push32((uint32_t)(ECX));
  /* 12cf8abf call dword ptr [0x12d23384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23384))), 0x12cf8ac5u);
  /* 12cf8ac5 mov edx, dword ptr [0x12d21ec4] */
  EDX = (r32((uint32_t)(0x12d21ec4)));
  /* 12cf8acb imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cf8ace mov eax, dword ptr [0x12d21ec8] */
  EAX = (r32((uint32_t)(0x12d21ec8)));
  /* 12cf8ad3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8ad5 mov ecx, dword ptr [0x12d21ec0] */
  ECX = (r32((uint32_t)(0x12d21ec0)));
  /* 12cf8adb add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8ade sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf8ae0 push eax */
  push32((uint32_t)(EAX));
  /* 12cf8ae1 mov edx, dword ptr [0x12d21ec0] */
  EDX = (r32((uint32_t)(0x12d21ec0)));
  /* 12cf8ae7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8aea push edx */
  push32((uint32_t)(EDX));
  /* 12cf8aeb mov eax, dword ptr [0x12d21ec0] */
  EAX = (r32((uint32_t)(0x12d21ec0)));
  /* 12cf8af0 push eax */
  push32((uint32_t)(EAX));
  /* 12cf8af1 call 0x12cfc0a0 */
  push32(0x12cf8af6u); f_12cfc0a0();
  /* 12cf8af6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8af9 mov ecx, dword ptr [0x12d21ec4] */
  ECX = (r32((uint32_t)(0x12d21ec4)));
  /* 12cf8aff sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf8b02 mov dword ptr [0x12d21ec4], ecx */
  w32((uint32_t)(0x12d21ec4), (ECX));
  /* 12cf8b08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf8b0b cmp edx, dword ptr [0x12d21ec0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12d21ec0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf8b11 jbe 0x12cf8b1c */
  if ((C.cf||C.zf)) goto L_12cf8b1c;
  /* 12cf8b13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf8b16 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf8b19 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12cf8b1c:;
  /* 12cf8b1c mov ecx, dword ptr [0x12d21ec8] */
  ECX = (r32((uint32_t)(0x12d21ec8)));
  /* 12cf8b22 mov dword ptr [0x12d21ebc], ecx */
  w32((uint32_t)(0x12d21ebc), (ECX));
L_12cf8b28:;
  /* 12cf8b28 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf8b2b mov dword ptr [0x12d21ec0], edx */
  w32((uint32_t)(0x12d21ec0), (EDX));
  /* 12cf8b31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf8b34 mov dword ptr [0x12d21eb8], eax */
  w32((uint32_t)(0x12d21eb8), (EAX));
L_12cf8b39:;
  /* 12cf8b39 mov esp, ebp */
  ESP = (EBP);
  /* 12cf8b3b pop ebp */
  EBP = (pop32());
  /* 12cf8b3c ret  */
  ESPCHK(0x12cf8570u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b40 @ 0x12cf8b40 (1334 bytes, 427 insns) */
void f_12cf8b40(void) {
  FTRACE(0x12cf8b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf8b40 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf8b41 mov ebp, esp */
  EBP = (ESP);
  /* 12cf8b43 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf8b46 push esi */
  push32((uint32_t)(ESI));
  /* 12cf8b47 mov eax, dword ptr [0x12d21ec4] */
  EAX = (r32((uint32_t)(0x12d21ec4)));
  /* 12cf8b4c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cf8b4f mov ecx, dword ptr [0x12d21ec8] */
  ECX = (r32((uint32_t)(0x12d21ec8)));
  /* 12cf8b55 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8b57 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12cf8b5a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf8b5d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8b60 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12cf8b63 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12cf8b66 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cf8b69 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12cf8b6c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf8b6f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12cf8b72 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf8b76 jge 0x12cf8b8c */
  if ((C.sf==C.of)) goto L_12cf8b8c;
  /* 12cf8b78 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cf8b7b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cf8b7e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cf8b80 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12cf8b83 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 12cf8b8a jmp 0x12cf8ba1 */
  goto L_12cf8ba1;
L_12cf8b8c:;
  /* 12cf8b8c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12cf8b93 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cf8b96 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf8b99 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf8b9c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12cf8b9e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_12cf8ba1:;
  /* 12cf8ba1 mov ecx, dword ptr [0x12d21ebc] */
  ECX = (r32((uint32_t)(0x12d21ebc)));
  /* 12cf8ba7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12cf8baa:;
  /* 12cf8baa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf8bad cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf8bb0 jae 0x12cf8bd6 */
  if (!C.cf) goto L_12cf8bd6;
  /* 12cf8bb2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf8bb5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cf8bb8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 12cf8bba mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf8bbd mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12cf8bc0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 12cf8bc3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf8bc5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf8bc7 je 0x12cf8bcb */
  if (C.zf) goto L_12cf8bcb;
  /* 12cf8bc9 jmp 0x12cf8bd6 */
  goto L_12cf8bd6;
L_12cf8bcb:;
  /* 12cf8bcb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf8bce add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8bd1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12cf8bd4 jmp 0x12cf8baa */
  goto L_12cf8baa;
L_12cf8bd6:;
  /* 12cf8bd6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf8bd9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf8bdc jne 0x12cf8cbd */
  if (!C.zf) goto L_12cf8cbd;
  /* 12cf8be2 mov eax, dword ptr [0x12d21ec8] */
  EAX = (r32((uint32_t)(0x12d21ec8)));
  /* 12cf8be7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12cf8bea:;
  /* 12cf8bea mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf8bed cmp ecx, dword ptr [0x12d21ebc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d21ebc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf8bf3 jae 0x12cf8c19 */
  if (!C.cf) goto L_12cf8c19;
  /* 12cf8bf5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf8bf8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cf8bfb and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 12cf8bfd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf8c00 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12cf8c03 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12cf8c06 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf8c08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf8c0a je 0x12cf8c0e */
  if (C.zf) goto L_12cf8c0e;
  /* 12cf8c0c jmp 0x12cf8c19 */
  goto L_12cf8c19;
L_12cf8c0e:;
  /* 12cf8c0e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf8c11 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8c14 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12cf8c17 jmp 0x12cf8bea */
  goto L_12cf8bea;
L_12cf8c19:;
  /* 12cf8c19 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf8c1c cmp ecx, dword ptr [0x12d21ebc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d21ebc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf8c22 jne 0x12cf8cbd */
  if (!C.zf) goto L_12cf8cbd;
L_12cf8c28:;
  /* 12cf8c28 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf8c2b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf8c2e jae 0x12cf8c46 */
  if (!C.cf) goto L_12cf8c46;
  /* 12cf8c30 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf8c33 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf8c37 je 0x12cf8c3b */
  if (C.zf) goto L_12cf8c3b;
  /* 12cf8c39 jmp 0x12cf8c46 */
  goto L_12cf8c46;
L_12cf8c3b:;
  /* 12cf8c3b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf8c3e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8c41 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12cf8c44 jmp 0x12cf8c28 */
  goto L_12cf8c28;
L_12cf8c46:;
  /* 12cf8c46 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf8c49 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf8c4c jne 0x12cf8c97 */
  if (!C.zf) goto L_12cf8c97;
  /* 12cf8c4e mov eax, dword ptr [0x12d21ec8] */
  EAX = (r32((uint32_t)(0x12d21ec8)));
  /* 12cf8c53 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12cf8c56:;
  /* 12cf8c56 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf8c59 cmp ecx, dword ptr [0x12d21ebc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d21ebc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf8c5f jae 0x12cf8c77 */
  if (!C.cf) goto L_12cf8c77;
  /* 12cf8c61 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf8c64 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf8c68 je 0x12cf8c6c */
  if (C.zf) goto L_12cf8c6c;
  /* 12cf8c6a jmp 0x12cf8c77 */
  goto L_12cf8c77;
L_12cf8c6c:;
  /* 12cf8c6c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf8c6f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8c72 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12cf8c75 jmp 0x12cf8c56 */
  goto L_12cf8c56;
L_12cf8c77:;
  /* 12cf8c77 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf8c7a cmp ecx, dword ptr [0x12d21ebc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d21ebc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf8c80 jne 0x12cf8c97 */
  if (!C.zf) goto L_12cf8c97;
  /* 12cf8c82 call 0x12cf9080 */
  push32(0x12cf8c87u); f_12cf9080();
  /* 12cf8c87 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12cf8c8a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf8c8e jne 0x12cf8c97 */
  if (!C.zf) goto L_12cf8c97;
  /* 12cf8c90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf8c92 jmp 0x12cf9071 */
  goto L_12cf9071;
L_12cf8c97:;
  /* 12cf8c97 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf8c9a push edx */
  push32((uint32_t)(EDX));
  /* 12cf8c9b call 0x12cf9190 */
  push32(0x12cf8ca0u); f_12cf9190();
  /* 12cf8ca0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8ca3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf8ca6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12cf8ca9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12cf8cab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf8cae mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12cf8cb1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf8cb4 jne 0x12cf8cbd */
  if (!C.zf) goto L_12cf8cbd;
  /* 12cf8cb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf8cb8 jmp 0x12cf9071 */
  goto L_12cf9071;
L_12cf8cbd:;
  /* 12cf8cbd mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf8cc0 mov dword ptr [0x12d21ebc], edx */
  w32((uint32_t)(0x12d21ebc), (EDX));
  /* 12cf8cc6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf8cc9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12cf8ccc mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 12cf8ccf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cf8cd2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cf8cd4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12cf8cd7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf8cdb je 0x12cf8d00 */
  if (C.zf) goto L_12cf8d00;
  /* 12cf8cdd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf8ce0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cf8ce3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cf8ce6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 12cf8cea mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf8ced mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cf8cf0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 12cf8cf3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 12cf8cfa or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12cf8cfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf8cfe jne 0x12cf8d35 */
  if (!C.zf) goto L_12cf8d35;
L_12cf8d00:;
  /* 12cf8d00 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_12cf8d07:;
  /* 12cf8d07 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf8d0a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cf8d0d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cf8d10 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 12cf8d14 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf8d17 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cf8d1a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 12cf8d1d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 12cf8d24 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 12cf8d26 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf8d28 jne 0x12cf8d35 */
  if (!C.zf) goto L_12cf8d35;
  /* 12cf8d2a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf8d2d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8d30 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12cf8d33 jmp 0x12cf8d07 */
  goto L_12cf8d07;
L_12cf8d35:;
  /* 12cf8d35 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf8d38 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cf8d3e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cf8d41 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12cf8d48 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cf8d4b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12cf8d52 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf8d55 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cf8d58 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cf8d5b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 12cf8d5f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12cf8d62 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf8d66 jne 0x12cf8d82 */
  if (!C.zf) goto L_12cf8d82;
  /* 12cf8d68 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 12cf8d6f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf8d72 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cf8d75 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12cf8d78 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 12cf8d7f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_12cf8d82:;
  /* 12cf8d82 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf8d86 jl 0x12cf8d9b */
  if ((C.sf!=C.of)) goto L_12cf8d9b;
  /* 12cf8d88 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cf8d8b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12cf8d8d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12cf8d90 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cf8d93 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8d96 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12cf8d99 jmp 0x12cf8d82 */
  goto L_12cf8d82;
L_12cf8d9b:;
  /* 12cf8d9b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cf8d9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf8da1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 12cf8da5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12cf8da8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf8dab mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cf8dad sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf8db0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cf8db3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf8db6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12cf8db9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf8dbc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12cf8dbf cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf8dc3 jle 0x12cf8dcc */
  if ((C.zf||C.sf!=C.of)) goto L_12cf8dcc;
  /* 12cf8dc5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_12cf8dcc:;
  /* 12cf8dcc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf8dcf cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf8dd2 je 0x12cf8ff0 */
  if (C.zf) goto L_12cf8ff0;
  /* 12cf8dd8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf8ddb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf8dde mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cf8de1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf8de4 jne 0x12cf8eba */
  if (!C.zf) goto L_12cf8eba;
  /* 12cf8dea cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf8dee jge 0x12cf8e4f */
  if ((C.sf==C.of)) goto L_12cf8e4f;
  /* 12cf8df0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12cf8df5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cf8df8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12cf8dfa not eax */
  EAX = (~(EAX));
  /* 12cf8dfc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf8dff mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cf8e02 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12cf8e06 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf8e08 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf8e0b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cf8e0e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12cf8e12 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cf8e15 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8e18 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12cf8e1b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12cf8e1e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cf8e21 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8e24 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12cf8e27 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cf8e2a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8e2d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12cf8e31 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf8e33 jne 0x12cf8e4d */
  if (!C.zf) goto L_12cf8e4d;
  /* 12cf8e35 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12cf8e3a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cf8e3d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12cf8e3f not eax */
  EAX = (~(EAX));
  /* 12cf8e41 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf8e44 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cf8e46 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf8e48 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf8e4b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12cf8e4d:;
  /* 12cf8e4d jmp 0x12cf8eba */
  goto L_12cf8eba;
L_12cf8e4f:;
  /* 12cf8e4f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cf8e52 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf8e55 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cf8e5a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cf8e5c not edx */
  EDX = (~(EDX));
  /* 12cf8e5e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf8e61 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cf8e64 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12cf8e6b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf8e6d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf8e70 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cf8e73 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 12cf8e7a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cf8e7d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8e80 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12cf8e83 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12cf8e86 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cf8e89 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8e8c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12cf8e8f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cf8e92 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8e95 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12cf8e99 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf8e9b jne 0x12cf8eba */
  if (!C.zf) goto L_12cf8eba;
  /* 12cf8e9d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cf8ea0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf8ea3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cf8ea8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cf8eaa not edx */
  EDX = (~(EDX));
  /* 12cf8eac mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf8eaf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cf8eb2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf8eb4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf8eb7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12cf8eba:;
  /* 12cf8eba mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf8ebd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12cf8ec0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf8ec3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12cf8ec6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12cf8ec9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf8ecc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cf8ecf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf8ed2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12cf8ed5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12cf8ed8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf8edc je 0x12cf8ff0 */
  if (C.zf) goto L_12cf8ff0;
  /* 12cf8ee2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf8ee5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf8ee8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 12cf8eeb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cf8eee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf8ef1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf8ef4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cf8ef7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12cf8efa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf8efd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf8f00 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12cf8f03 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf8f06 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf8f09 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12cf8f0c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf8f0f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cf8f12 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf8f15 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12cf8f18 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf8f1b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf8f1e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cf8f21 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf8f24 jne 0x12cf8ff0 */
  if (!C.zf) goto L_12cf8ff0;
  /* 12cf8f2a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf8f2e jge 0x12cf8f8a */
  if ((C.sf==C.of)) goto L_12cf8f8a;
  /* 12cf8f30 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cf8f33 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8f36 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12cf8f3a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cf8f3d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8f40 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12cf8f43 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12cf8f45 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cf8f48 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8f4b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12cf8f4e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf8f50 jne 0x12cf8f68 */
  if (!C.zf) goto L_12cf8f68;
  /* 12cf8f52 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12cf8f57 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf8f5a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12cf8f5c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf8f5f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cf8f61 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf8f63 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf8f66 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12cf8f68:;
  /* 12cf8f68 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cf8f6d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf8f70 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cf8f72 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf8f75 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cf8f78 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12cf8f7c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf8f7e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf8f81 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cf8f84 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12cf8f88 jmp 0x12cf8ff0 */
  goto L_12cf8ff0;
L_12cf8f8a:;
  /* 12cf8f8a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cf8f8d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8f90 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12cf8f94 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cf8f97 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8f9a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12cf8f9d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12cf8f9f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cf8fa2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf8fa5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12cf8fa8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf8faa jne 0x12cf8fc7 */
  if (!C.zf) goto L_12cf8fc7;
  /* 12cf8fac mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf8faf sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf8fb2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12cf8fb7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12cf8fb9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf8fbc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cf8fbf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf8fc1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf8fc4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12cf8fc7:;
  /* 12cf8fc7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf8fca sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf8fcd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cf8fd2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cf8fd4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf8fd7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cf8fda mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12cf8fe1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf8fe3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf8fe6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cf8fe9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_12cf8ff0:;
  /* 12cf8ff0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf8ff4 je 0x12cf900a */
  if (C.zf) goto L_12cf900a;
  /* 12cf8ff6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf8ff9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf8ffc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12cf8ffe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf9001 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9004 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf9007 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_12cf900a:;
  /* 12cf900a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf900d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9010 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12cf9013 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cf9016 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9019 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf901c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12cf901e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cf9021 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9024 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf9027 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf902a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 12cf902d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf9030 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cf9032 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf9035 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cf9037 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf903a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf903d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12cf903f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf9041 jne 0x12cf9063 */
  if (!C.zf) goto L_12cf9063;
  /* 12cf9043 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf9046 cmp eax, dword ptr [0x12d21ec0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d21ec0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf904c jne 0x12cf9063 */
  if (!C.zf) goto L_12cf9063;
  /* 12cf904e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf9051 cmp ecx, dword ptr [0x12d21eb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d21eb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf9057 jne 0x12cf9063 */
  if (!C.zf) goto L_12cf9063;
  /* 12cf9059 mov dword ptr [0x12d21ec0], 0 */
  w32((uint32_t)(0x12d21ec0), (0x0u));
L_12cf9063:;
  /* 12cf9063 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cf9066 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf9069 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12cf906b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf906e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12cf9071:;
  /* 12cf9071 pop esi */
  ESI = (pop32());
  /* 12cf9072 mov esp, ebp */
  ESP = (EBP);
  /* 12cf9074 pop ebp */
  EBP = (pop32());
  /* 12cf9075 ret  */
  ESPCHK(0x12cf8b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10009080 @ 0x12cf9080 (271 bytes, 78 insns) */
void f_12cf9080(void) {
  FTRACE(0x12cf9080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf9080 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf9081 mov ebp, esp */
  EBP = (ESP);
  /* 12cf9083 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf9084 mov eax, dword ptr [0x12d21ec4] */
  EAX = (r32((uint32_t)(0x12d21ec4)));
  /* 12cf9089 cmp eax, dword ptr [0x12d21ea8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d21ea8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf908f jne 0x12cf90db */
  if (!C.zf) goto L_12cf90db;
  /* 12cf9091 mov ecx, dword ptr [0x12d21ea8] */
  ECX = (r32((uint32_t)(0x12d21ea8)));
  /* 12cf9097 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf909a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cf909d push ecx */
  push32((uint32_t)(ECX));
  /* 12cf909e mov edx, dword ptr [0x12d21ec8] */
  EDX = (r32((uint32_t)(0x12d21ec8)));
  /* 12cf90a4 push edx */
  push32((uint32_t)(EDX));
  /* 12cf90a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf90a7 mov eax, dword ptr [0x12d21ecc] */
  EAX = (r32((uint32_t)(0x12d21ecc)));
  /* 12cf90ac push eax */
  push32((uint32_t)(EAX));
  /* 12cf90ad call dword ptr [0x12d232e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232e8))), 0x12cf90b3u);
  /* 12cf90b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cf90b6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf90ba jne 0x12cf90c3 */
  if (!C.zf) goto L_12cf90c3;
  /* 12cf90bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf90be jmp 0x12cf918b */
  goto L_12cf918b;
L_12cf90c3:;
  /* 12cf90c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf90c6 mov dword ptr [0x12d21ec8], ecx */
  w32((uint32_t)(0x12d21ec8), (ECX));
  /* 12cf90cc mov edx, dword ptr [0x12d21ea8] */
  EDX = (r32((uint32_t)(0x12d21ea8)));
  /* 12cf90d2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf90d5 mov dword ptr [0x12d21ea8], edx */
  w32((uint32_t)(0x12d21ea8), (EDX));
L_12cf90db:;
  /* 12cf90db mov eax, dword ptr [0x12d21ec4] */
  EAX = (r32((uint32_t)(0x12d21ec4)));
  /* 12cf90e0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cf90e3 mov ecx, dword ptr [0x12d21ec8] */
  ECX = (r32((uint32_t)(0x12d21ec8)));
  /* 12cf90e9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf90eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cf90ee push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 12cf90f3 push 8 */
  push32((uint32_t)(0x8u));
  /* 12cf90f5 mov edx, dword ptr [0x12d21ecc] */
  EDX = (r32((uint32_t)(0x12d21ecc)));
  /* 12cf90fb push edx */
  push32((uint32_t)(EDX));
  /* 12cf90fc call dword ptr [0x12d232ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232ec))), 0x12cf9102u);
  /* 12cf9102 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf9105 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 12cf9108 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf910b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf910f jne 0x12cf9115 */
  if (!C.zf) goto L_12cf9115;
  /* 12cf9111 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf9113 jmp 0x12cf918b */
  goto L_12cf918b;
L_12cf9115:;
  /* 12cf9115 push 4 */
  push32((uint32_t)(0x4u));
  /* 12cf9117 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 12cf911c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12cf9121 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf9123 call dword ptr [0x12d232e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232e4))), 0x12cf9129u);
  /* 12cf9129 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf912c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 12cf912f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf9132 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf9136 jne 0x12cf9152 */
  if (!C.zf) goto L_12cf9152;
  /* 12cf9138 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf913b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12cf913e push ecx */
  push32((uint32_t)(ECX));
  /* 12cf913f push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf9141 mov edx, dword ptr [0x12d21ecc] */
  EDX = (r32((uint32_t)(0x12d21ecc)));
  /* 12cf9147 push edx */
  push32((uint32_t)(EDX));
  /* 12cf9148 call dword ptr [0x12d23384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23384))), 0x12cf914eu);
  /* 12cf914e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf9150 jmp 0x12cf918b */
  goto L_12cf918b;
L_12cf9152:;
  /* 12cf9152 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf9155 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12cf915b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf915e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12cf9165 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf9168 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 12cf916f mov eax, dword ptr [0x12d21ec4] */
  EAX = (r32((uint32_t)(0x12d21ec4)));
  /* 12cf9174 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9177 mov dword ptr [0x12d21ec4], eax */
  w32((uint32_t)(0x12d21ec4), (EAX));
  /* 12cf917c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf917f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12cf9182 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 12cf9188 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12cf918b:;
  /* 12cf918b mov esp, ebp */
  ESP = (EBP);
  /* 12cf918d pop ebp */
  EBP = (pop32());
  /* 12cf918e ret  */
  ESPCHK(0x12cf9080u, _esp0);
  ESP += 4; return;
}

/* FUN_10009190 @ 0x12cf9190 (494 bytes, 149 insns) */
void f_12cf9190(void) {
  FTRACE(0x12cf9190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf9190 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf9191 mov ebp, esp */
  EBP = (ESP);
  /* 12cf9193 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf9196 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf9199 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12cf919c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12cf919f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf91a2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12cf91a5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cf91a8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_12cf91af:;
  /* 12cf91af cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf91b3 jl 0x12cf91c8 */
  if ((C.sf!=C.of)) goto L_12cf91c8;
  /* 12cf91b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf91b8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12cf91ba mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cf91bd mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cf91c0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf91c3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12cf91c6 jmp 0x12cf91af */
  goto L_12cf91af;
L_12cf91c8:;
  /* 12cf91c8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cf91cb imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cf91d1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cf91d4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12cf91db mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12cf91de mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12cf91e5 jmp 0x12cf91f0 */
  goto L_12cf91f0;
L_12cf91e7:;
  /* 12cf91e7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cf91ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf91ed mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_12cf91f0:;
  /* 12cf91f0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf91f4 jge 0x12cf9216 */
  if ((C.sf==C.of)) goto L_12cf9216;
  /* 12cf91f6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cf91f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf91fc lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 12cf91ff mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12cf9202 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf9205 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf9208 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12cf920b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf920e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf9211 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12cf9214 jmp 0x12cf91e7 */
  goto L_12cf91e7;
L_12cf9216:;
  /* 12cf9216 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cf9219 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12cf921c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf921f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12cf9222 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9224 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12cf9227 push 4 */
  push32((uint32_t)(0x4u));
  /* 12cf9229 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12cf922e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12cf9233 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf9236 push edx */
  push32((uint32_t)(EDX));
  /* 12cf9237 call dword ptr [0x12d232e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232e4))), 0x12cf923du);
  /* 12cf923d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf923f jne 0x12cf9249 */
  if (!C.zf) goto L_12cf9249;
  /* 12cf9241 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf9244 jmp 0x12cf937a */
  goto L_12cf937a;
L_12cf9249:;
  /* 12cf9249 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf924c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9251 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12cf9254 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf9257 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cf925a jmp 0x12cf9268 */
  goto L_12cf9268;
L_12cf925c:;
  /* 12cf925c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf925f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9265 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12cf9268:;
  /* 12cf9268 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf926b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf926e ja 0x12cf92cd */
  if ((!C.cf&&!C.zf)) goto L_12cf92cd;
  /* 12cf9270 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf9273 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 12cf927a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf927d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 12cf9287 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf928a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf928d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12cf9290 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf9293 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 12cf9299 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf929c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf92a2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf92a5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12cf92a8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf92ab sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf92b1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf92b4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12cf92b7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf92ba add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf92bf mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12cf92c2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cf92c5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 12cf92cb jmp 0x12cf925c */
  goto L_12cf925c;
L_12cf92cd:;
  /* 12cf92cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf92d0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf92d6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12cf92d9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf92dc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf92df mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf92e2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12cf92e5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf92e8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12cf92eb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12cf92ee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf92f1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf92f4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12cf92f7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cf92fa add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf92fd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf9300 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12cf9303 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf9306 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12cf9309 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12cf930c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf930f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf9312 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12cf9315 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cf9318 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cf931b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 12cf9323 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cf9326 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cf9329 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 12cf9334 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cf9337 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 12cf933b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cf933e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 12cf9341 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12cf9344 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cf9347 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 12cf934a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf934c jne 0x12cf935d */
  if (!C.zf) goto L_12cf935d;
  /* 12cf934e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf9351 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cf9354 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12cf9357 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf935a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12cf935d:;
  /* 12cf935d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cf9362 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cf9365 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cf9367 not edx */
  EDX = (~(EDX));
  /* 12cf9369 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf936c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12cf936f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf9371 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf9374 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12cf9377 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_12cf937a:;
  /* 12cf937a mov esp, ebp */
  ESP = (EBP);
  /* 12cf937c pop ebp */
  EBP = (pop32());
  /* 12cf937d ret  */
  ESPCHK(0x12cf9190u, _esp0);
  ESP += 4; return;
}

/* FUN_10009380 @ 0x12cf9380 (1515 bytes, 489 insns) */
void f_12cf9380(void) {
  FTRACE(0x12cf9380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf9380 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf9381 mov ebp, esp */
  EBP = (ESP);
  /* 12cf9383 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf9386 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cf9389 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf938c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12cf938e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12cf9391 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf9394 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12cf9397 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12cf939a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf939d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf93a0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf93a3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cf93a6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf93a9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12cf93ac mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cf93af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf93b2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cf93b8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf93bb lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12cf93c2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12cf93c5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cf93c8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf93cb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12cf93ce mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf93d1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cf93d3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf93d6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12cf93d9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf93dc add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf93df mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12cf93e2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cf93e5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cf93e7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12cf93ea mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cf93ed cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf93f0 jle 0x12cf96a6 */
  if ((C.zf||C.sf!=C.of)) goto L_12cf96a6;
  /* 12cf93f6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf93f9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12cf93fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf93fe jne 0x12cf940b */
  if (!C.zf) goto L_12cf940b;
  /* 12cf9400 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cf9403 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9406 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf9409 jle 0x12cf9412 */
  if ((C.zf||C.sf!=C.of)) goto L_12cf9412;
L_12cf940b:;
  /* 12cf940b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf940d jmp 0x12cf9967 */
  goto L_12cf9967;
L_12cf9412:;
  /* 12cf9412 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf9415 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12cf9418 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf941b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12cf941e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf9422 jbe 0x12cf942b */
  if ((C.cf||C.zf)) goto L_12cf942b;
  /* 12cf9424 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12cf942b:;
  /* 12cf942b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cf942e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cf9431 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cf9434 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf9437 jne 0x12cf950d */
  if (!C.zf) goto L_12cf950d;
  /* 12cf943d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf9441 jae 0x12cf94a2 */
  if (!C.cf) goto L_12cf94a2;
  /* 12cf9443 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cf9448 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cf944b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cf944d not edx */
  EDX = (~(EDX));
  /* 12cf944f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf9452 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf9455 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12cf9459 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf945b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf945e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf9461 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12cf9465 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf9468 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf946b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12cf946e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12cf9471 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf9474 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9477 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12cf947a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf947d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9480 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12cf9484 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf9486 jne 0x12cf94a0 */
  if (!C.zf) goto L_12cf94a0;
  /* 12cf9488 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cf948d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cf9490 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cf9492 not edx */
  EDX = (~(EDX));
  /* 12cf9494 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf9497 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cf9499 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf949b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf949e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12cf94a0:;
  /* 12cf94a0 jmp 0x12cf950d */
  goto L_12cf950d;
L_12cf94a2:;
  /* 12cf94a2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cf94a5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf94a8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12cf94ad shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12cf94af not eax */
  EAX = (~(EAX));
  /* 12cf94b1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf94b4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf94b7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12cf94be and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf94c0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf94c3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf94c6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12cf94cd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf94d0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf94d3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12cf94d6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12cf94d9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf94dc add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf94df mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12cf94e2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf94e5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf94e8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12cf94ec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf94ee jne 0x12cf950d */
  if (!C.zf) goto L_12cf950d;
  /* 12cf94f0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cf94f3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf94f6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12cf94fb shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12cf94fd not eax */
  EAX = (~(EAX));
  /* 12cf94ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf9502 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cf9505 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf9507 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf950a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12cf950d:;
  /* 12cf950d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cf9510 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12cf9513 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cf9516 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cf9519 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12cf951c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cf951f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12cf9522 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cf9525 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12cf9528 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12cf952b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cf952e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9531 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf9534 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12cf9537 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf953b jle 0x12cf9687 */
  if ((C.zf||C.sf!=C.of)) goto L_12cf9687;
  /* 12cf9541 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf9544 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9547 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12cf954a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf954d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12cf9550 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf9553 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12cf9556 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf955a jbe 0x12cf9563 */
  if ((C.cf||C.zf)) goto L_12cf9563;
  /* 12cf955c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12cf9563:;
  /* 12cf9563 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cf9566 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf9569 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12cf956c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12cf956f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cf9572 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf9575 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cf9578 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12cf957b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cf957e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf9581 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12cf9584 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf9587 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cf958a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12cf958d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cf9590 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cf9593 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cf9596 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12cf9599 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cf959c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cf959f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cf95a2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf95a5 jne 0x12cf9673 */
  if (!C.zf) goto L_12cf9673;
  /* 12cf95ab cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf95af jae 0x12cf960c */
  if (!C.cf) goto L_12cf960c;
  /* 12cf95b1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf95b4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf95b7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12cf95bb mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf95be add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf95c1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12cf95c4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12cf95c7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf95ca add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf95cd mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12cf95d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf95d2 jne 0x12cf95ea */
  if (!C.zf) goto L_12cf95ea;
  /* 12cf95d4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cf95d9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cf95dc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cf95de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf95e1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cf95e3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf95e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf95e8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12cf95ea:;
  /* 12cf95ea mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12cf95ef mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cf95f2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12cf95f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf95f7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf95fa mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12cf95fe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf9600 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf9603 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf9606 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12cf960a jmp 0x12cf9673 */
  goto L_12cf9673;
L_12cf960c:;
  /* 12cf960c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf960f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9612 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12cf9616 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf9619 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf961c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12cf961f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12cf9622 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf9625 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9628 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12cf962b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf962d jne 0x12cf964a */
  if (!C.zf) goto L_12cf964a;
  /* 12cf962f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cf9632 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf9635 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cf963a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cf963c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf963f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cf9642 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf9644 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf9647 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12cf964a:;
  /* 12cf964a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cf964d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf9650 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12cf9655 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12cf9657 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf965a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf965d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12cf9664 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf9666 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf9669 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf966c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12cf9673:;
  /* 12cf9673 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cf9676 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf9679 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12cf967b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cf967e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9681 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf9684 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_12cf9687:;
  /* 12cf9687 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cf968a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf968d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf9690 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12cf9692 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cf9695 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9698 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf969b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf969e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 12cf96a1 jmp 0x12cf9962 */
  goto L_12cf9962;
L_12cf96a6:;
  /* 12cf96a6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cf96a9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf96ac jge 0x12cf9962 */
  if ((C.sf==C.of)) goto L_12cf9962;
  /* 12cf96b2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cf96b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf96b8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf96bb mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12cf96bd mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cf96c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf96c3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf96c6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf96c9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 12cf96cc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf96cf add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf96d2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12cf96d5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cf96d8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf96db mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12cf96de mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cf96e1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12cf96e4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf96e7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12cf96ea cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf96ee jbe 0x12cf96f7 */
  if ((C.cf||C.zf)) goto L_12cf96f7;
  /* 12cf96f0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12cf96f7:;
  /* 12cf96f7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf96fa and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12cf96fd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf96ff jne 0x12cf9840 */
  if (!C.zf) goto L_12cf9840;
  /* 12cf9705 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf9708 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12cf970b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf970e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12cf9711 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf9715 jbe 0x12cf971e */
  if ((C.cf||C.zf)) goto L_12cf971e;
  /* 12cf9717 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12cf971e:;
  /* 12cf971e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cf9721 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cf9724 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cf9727 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf972a jne 0x12cf9800 */
  if (!C.zf) goto L_12cf9800;
  /* 12cf9730 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf9734 jae 0x12cf9795 */
  if (!C.cf) goto L_12cf9795;
  /* 12cf9736 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cf973b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cf973e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cf9740 not edx */
  EDX = (~(EDX));
  /* 12cf9742 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf9745 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf9748 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12cf974c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf974e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf9751 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf9754 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12cf9758 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf975b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf975e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12cf9761 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12cf9764 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf9767 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf976a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12cf976d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf9770 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9773 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12cf9777 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf9779 jne 0x12cf9793 */
  if (!C.zf) goto L_12cf9793;
  /* 12cf977b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cf9780 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cf9783 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cf9785 not edx */
  EDX = (~(EDX));
  /* 12cf9787 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf978a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cf978c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf978e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf9791 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12cf9793:;
  /* 12cf9793 jmp 0x12cf9800 */
  goto L_12cf9800;
L_12cf9795:;
  /* 12cf9795 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cf9798 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf979b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12cf97a0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12cf97a2 not eax */
  EAX = (~(EAX));
  /* 12cf97a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf97a7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf97aa mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12cf97b1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf97b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf97b6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf97b9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12cf97c0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf97c3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf97c6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12cf97c9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12cf97cc mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf97cf add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf97d2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12cf97d5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf97d8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf97db movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12cf97df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf97e1 jne 0x12cf9800 */
  if (!C.zf) goto L_12cf9800;
  /* 12cf97e3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cf97e6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf97e9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12cf97ee shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12cf97f0 not eax */
  EAX = (~(EAX));
  /* 12cf97f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf97f5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cf97f8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf97fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf97fd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12cf9800:;
  /* 12cf9800 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cf9803 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12cf9806 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cf9809 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cf980c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12cf980f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cf9812 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12cf9815 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cf9818 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12cf981b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12cf981e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cf9821 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9824 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12cf9827 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cf982a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12cf982d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf9830 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12cf9833 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf9837 jbe 0x12cf9840 */
  if ((C.cf||C.zf)) goto L_12cf9840;
  /* 12cf9839 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12cf9840:;
  /* 12cf9840 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cf9843 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf9846 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 12cf9849 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12cf984c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf984f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf9852 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cf9855 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12cf9858 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf985b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf985e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12cf9861 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf9864 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf9867 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12cf986a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf986d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cf9870 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf9873 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12cf9876 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf9879 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf987c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cf987f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf9882 jne 0x12cf994e */
  if (!C.zf) goto L_12cf994e;
  /* 12cf9888 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf988c jae 0x12cf98e8 */
  if (!C.cf) goto L_12cf98e8;
  /* 12cf988e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf9891 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9894 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12cf9898 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf989b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf989e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12cf98a1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12cf98a3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf98a6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf98a9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12cf98ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf98ae jne 0x12cf98c6 */
  if (!C.zf) goto L_12cf98c6;
  /* 12cf98b0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12cf98b5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cf98b8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12cf98ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf98bd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cf98bf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf98c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf98c4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12cf98c6:;
  /* 12cf98c6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cf98cb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cf98ce shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cf98d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf98d3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf98d6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12cf98da or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf98dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf98df mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf98e2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12cf98e6 jmp 0x12cf994e */
  goto L_12cf994e;
L_12cf98e8:;
  /* 12cf98e8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf98eb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf98ee movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12cf98f2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf98f5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf98f8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12cf98fb add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12cf98fd mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf9900 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9903 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12cf9906 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf9908 jne 0x12cf9925 */
  if (!C.zf) goto L_12cf9925;
  /* 12cf990a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cf990d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf9910 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12cf9915 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12cf9917 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf991a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cf991d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12cf991f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cf9922 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12cf9925:;
  /* 12cf9925 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cf9928 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf992b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cf9930 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cf9932 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf9935 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf9938 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12cf993f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf9941 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf9944 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cf9947 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_12cf994e:;
  /* 12cf994e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf9951 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cf9954 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12cf9956 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf9959 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf995c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cf995f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_12cf9962:;
  /* 12cf9962 mov eax, 1 */
  EAX = (0x1u);
L_12cf9967:;
  /* 12cf9967 mov esp, ebp */
  ESP = (EBP);
  /* 12cf9969 pop ebp */
  EBP = (pop32());
  /* 12cf996a ret  */
  ESPCHK(0x12cf9380u, _esp0);
  ESP += 4; return;
}

/* FUN_10009970 @ 0x12cf9970 (304 bytes, 79 insns) */
void f_12cf9970(void) {
  FTRACE(0x12cf9970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf9970 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf9971 mov ebp, esp */
  EBP = (ESP);
  /* 12cf9973 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf9974 cmp dword ptr [0x12d21ec0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d21ec0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf997b je 0x12cf9a9c */
  if (C.zf) goto L_12cf9a9c;
  /* 12cf9981 mov eax, dword ptr [0x12d21eb8] */
  EAX = (r32((uint32_t)(0x12d21eb8)));
  /* 12cf9986 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 12cf9989 mov ecx, dword ptr [0x12d21ec0] */
  ECX = (r32((uint32_t)(0x12d21ec0)));
  /* 12cf998f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12cf9992 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9994 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cf9997 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12cf999c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12cf99a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cf99a4 push eax */
  push32((uint32_t)(EAX));
  /* 12cf99a5 call dword ptr [0x12d23388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23388))), 0x12cf99abu);
  /* 12cf99ab mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cf99b0 mov ecx, dword ptr [0x12d21eb8] */
  ECX = (r32((uint32_t)(0x12d21eb8)));
  /* 12cf99b6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cf99b8 mov eax, dword ptr [0x12d21ec0] */
  EAX = (r32((uint32_t)(0x12d21ec0)));
  /* 12cf99bd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12cf99c0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12cf99c2 mov edx, dword ptr [0x12d21ec0] */
  EDX = (r32((uint32_t)(0x12d21ec0)));
  /* 12cf99c8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12cf99cb mov eax, dword ptr [0x12d21ec0] */
  EAX = (r32((uint32_t)(0x12d21ec0)));
  /* 12cf99d0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12cf99d3 mov edx, dword ptr [0x12d21eb8] */
  EDX = (r32((uint32_t)(0x12d21eb8)));
  /* 12cf99d9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12cf99e4 mov eax, dword ptr [0x12d21ec0] */
  EAX = (r32((uint32_t)(0x12d21ec0)));
  /* 12cf99e9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12cf99ec mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 12cf99ef sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12cf99f2 mov eax, dword ptr [0x12d21ec0] */
  EAX = (r32((uint32_t)(0x12d21ec0)));
  /* 12cf99f7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12cf99fa mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 12cf99fd mov edx, dword ptr [0x12d21ec0] */
  EDX = (r32((uint32_t)(0x12d21ec0)));
  /* 12cf9a03 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12cf9a06 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 12cf9a0a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cf9a0c jne 0x12cf9a22 */
  if (!C.zf) goto L_12cf9a22;
  /* 12cf9a0e mov edx, dword ptr [0x12d21ec0] */
  EDX = (r32((uint32_t)(0x12d21ec0)));
  /* 12cf9a14 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12cf9a17 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 12cf9a19 mov ecx, dword ptr [0x12d21ec0] */
  ECX = (r32((uint32_t)(0x12d21ec0)));
  /* 12cf9a1f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12cf9a22:;
  /* 12cf9a22 mov edx, dword ptr [0x12d21ec0] */
  EDX = (r32((uint32_t)(0x12d21ec0)));
  /* 12cf9a28 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf9a2c jne 0x12cf9a92 */
  if (!C.zf) goto L_12cf9a92;
  /* 12cf9a2e cmp dword ptr [0x12d21ec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d21ec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf9a35 jle 0x12cf9a92 */
  if ((C.zf||C.sf!=C.of)) goto L_12cf9a92;
  /* 12cf9a37 mov eax, dword ptr [0x12d21ec0] */
  EAX = (r32((uint32_t)(0x12d21ec0)));
  /* 12cf9a3c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12cf9a3f push ecx */
  push32((uint32_t)(ECX));
  /* 12cf9a40 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cf9a42 mov edx, dword ptr [0x12d21ecc] */
  EDX = (r32((uint32_t)(0x12d21ecc)));
  /* 12cf9a48 push edx */
  push32((uint32_t)(EDX));
  /* 12cf9a49 call dword ptr [0x12d23384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23384))), 0x12cf9a4fu);
  /* 12cf9a4f mov eax, dword ptr [0x12d21ec4] */
  EAX = (r32((uint32_t)(0x12d21ec4)));
  /* 12cf9a54 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cf9a57 mov ecx, dword ptr [0x12d21ec8] */
  ECX = (r32((uint32_t)(0x12d21ec8)));
  /* 12cf9a5d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9a5f mov edx, dword ptr [0x12d21ec0] */
  EDX = (r32((uint32_t)(0x12d21ec0)));
  /* 12cf9a65 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9a68 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf9a6a push ecx */
  push32((uint32_t)(ECX));
  /* 12cf9a6b mov eax, dword ptr [0x12d21ec0] */
  EAX = (r32((uint32_t)(0x12d21ec0)));
  /* 12cf9a70 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9a73 push eax */
  push32((uint32_t)(EAX));
  /* 12cf9a74 mov ecx, dword ptr [0x12d21ec0] */
  ECX = (r32((uint32_t)(0x12d21ec0)));
  /* 12cf9a7a push ecx */
  push32((uint32_t)(ECX));
  /* 12cf9a7b call 0x12cfc0a0 */
  push32(0x12cf9a80u); f_12cfc0a0();
  /* 12cf9a80 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9a83 mov edx, dword ptr [0x12d21ec4] */
  EDX = (r32((uint32_t)(0x12d21ec4)));
  /* 12cf9a89 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf9a8c mov dword ptr [0x12d21ec4], edx */
  w32((uint32_t)(0x12d21ec4), (EDX));
L_12cf9a92:;
  /* 12cf9a92 mov dword ptr [0x12d21ec0], 0 */
  w32((uint32_t)(0x12d21ec0), (0x0u));
L_12cf9a9c:;
  /* 12cf9a9c mov esp, ebp */
  ESP = (EBP);
  /* 12cf9a9e pop ebp */
  EBP = (pop32());
  /* 12cf9a9f ret  */
  ESPCHK(0x12cf9970u, _esp0);
  ESP += 4; return;
}

/* FUN_10009aa0 @ 0x12cf9aa0 (1565 bytes, 343 insns) */
void f_12cf9aa0(void) {
  FTRACE(0x12cf9aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cf9aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cf9aa1 mov ebp, esp */
  EBP = (ESP);
  /* 12cf9aa3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf9aa9 mov eax, dword ptr [0x12d21ec4] */
  EAX = (r32((uint32_t)(0x12d21ec4)));
  /* 12cf9aae imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cf9ab1 push eax */
  push32((uint32_t)(EAX));
  /* 12cf9ab2 mov ecx, dword ptr [0x12d21ec8] */
  ECX = (r32((uint32_t)(0x12d21ec8)));
  /* 12cf9ab8 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf9ab9 call dword ptr [0x12d2335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2335c))), 0x12cf9abfu);
  /* 12cf9abf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf9ac1 je 0x12cf9acb */
  if (C.zf) goto L_12cf9acb;
  /* 12cf9ac3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf9ac6 jmp 0x12cfa0b9 */
  goto L_12cfa0b9;
L_12cf9acb:;
  /* 12cf9acb mov edx, dword ptr [0x12d21ec8] */
  EDX = (r32((uint32_t)(0x12d21ec8)));
  /* 12cf9ad1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 12cf9ad7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 12cf9ae1 jmp 0x12cf9af2 */
  goto L_12cf9af2;
L_12cf9ae3:;
  /* 12cf9ae3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 12cf9ae9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9aec mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_12cf9af2:;
  /* 12cf9af2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 12cf9af8 cmp ecx, dword ptr [0x12d21ec4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d21ec4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf9afe jge 0x12cfa0b7 */
  if ((C.sf==C.of)) goto L_12cfa0b7;
  /* 12cf9b04 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12cf9b0a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12cf9b0d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 12cf9b13 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 12cf9b18 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 12cf9b1e push ecx */
  push32((uint32_t)(ECX));
  /* 12cf9b1f call dword ptr [0x12d2335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2335c))), 0x12cf9b25u);
  /* 12cf9b25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf9b27 je 0x12cf9b33 */
  if (C.zf) goto L_12cf9b33;
  /* 12cf9b29 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12cf9b2e jmp 0x12cfa0b9 */
  goto L_12cfa0b9;
L_12cf9b33:;
  /* 12cf9b33 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12cf9b39 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12cf9b3c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 12cf9b42 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 12cf9b48 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9b4e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12cf9b51 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12cf9b57 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12cf9b5a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cf9b5d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 12cf9b67 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 12cf9b71 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12cf9b78 jmp 0x12cf9b83 */
  goto L_12cf9b83;
L_12cf9b7a:;
  /* 12cf9b7a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cf9b7d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9b80 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12cf9b83:;
  /* 12cf9b83 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf9b87 jge 0x12cfa07b */
  if ((C.sf==C.of)) goto L_12cfa07b;
  /* 12cf9b8d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 12cf9b97 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 12cf9ba1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 12cf9bab mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 12cf9bb5 jmp 0x12cf9bc6 */
  goto L_12cf9bc6;
L_12cf9bb7:;
  /* 12cf9bb7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12cf9bbd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9bc0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_12cf9bc6:;
  /* 12cf9bc6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf9bcd jge 0x12cf9be2 */
  if ((C.sf==C.of)) goto L_12cf9be2;
  /* 12cf9bcf mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12cf9bd5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 12cf9be0 jmp 0x12cf9bb7 */
  goto L_12cf9bb7;
L_12cf9be2:;
  /* 12cf9be2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf9be6 jl 0x12cfa01d */
  if ((C.sf!=C.of)) goto L_12cfa01d;
  /* 12cf9bec push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12cf9bf1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 12cf9bf7 push ecx */
  push32((uint32_t)(ECX));
  /* 12cf9bf8 call dword ptr [0x12d2335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2335c))), 0x12cf9bfeu);
  /* 12cf9bfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf9c00 je 0x12cf9c0c */
  if (C.zf) goto L_12cf9c0c;
  /* 12cf9c02 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 12cf9c07 jmp 0x12cfa0b9 */
  goto L_12cfa0b9;
L_12cf9c0c:;
  /* 12cf9c0c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 12cf9c12 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12cf9c15 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 12cf9c1f jmp 0x12cf9c30 */
  goto L_12cf9c30;
L_12cf9c21:;
  /* 12cf9c21 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 12cf9c27 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9c2a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_12cf9c30:;
  /* 12cf9c30 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf9c37 jge 0x12cf9db4 */
  if ((C.sf==C.of)) goto L_12cf9db4;
  /* 12cf9c3d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf9c40 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9c43 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 12cf9c49 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12cf9c4f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9c55 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 12cf9c5b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12cf9c61 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf9c65 jne 0x12cf9c72 */
  if (!C.zf) goto L_12cf9c72;
  /* 12cf9c67 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 12cf9c6d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf9c70 je 0x12cf9c7c */
  if (C.zf) goto L_12cf9c7c;
L_12cf9c72:;
  /* 12cf9c72 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 12cf9c77 jmp 0x12cfa0b9 */
  goto L_12cfa0b9;
L_12cf9c7c:;
  /* 12cf9c7c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12cf9c82 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cf9c84 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 12cf9c8a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 12cf9c90 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 12cf9c96 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 12cf9c9c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12cf9c9f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cf9ca1 je 0x12cf9cd9 */
  if (C.zf) goto L_12cf9cd9;
  /* 12cf9ca3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 12cf9ca9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf9cac mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 12cf9cb2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf9cbc jle 0x12cf9cc8 */
  if ((C.zf||C.sf!=C.of)) goto L_12cf9cc8;
  /* 12cf9cbe mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 12cf9cc3 jmp 0x12cfa0b9 */
  goto L_12cfa0b9;
L_12cf9cc8:;
  /* 12cf9cc8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 12cf9cce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9cd1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 12cf9cd7 jmp 0x12cf9d1b */
  goto L_12cf9d1b;
L_12cf9cd9:;
  /* 12cf9cd9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 12cf9cdf sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12cf9ce2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf9ce5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 12cf9ceb cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf9cf2 jle 0x12cf9cfe */
  if ((C.zf||C.sf!=C.of)) goto L_12cf9cfe;
  /* 12cf9cf4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_12cf9cfe:;
  /* 12cf9cfe mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12cf9d04 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 12cf9d0b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9d0e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12cf9d14 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_12cf9d1b:;
  /* 12cf9d1b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf9d22 jl 0x12cf9d3d */
  if ((C.sf!=C.of)) goto L_12cf9d3d;
  /* 12cf9d24 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 12cf9d2a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12cf9d2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cf9d2f jne 0x12cf9d3d */
  if (!C.zf) goto L_12cf9d3d;
  /* 12cf9d31 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf9d3b jle 0x12cf9d47 */
  if ((C.zf||C.sf!=C.of)) goto L_12cf9d47;
L_12cf9d3d:;
  /* 12cf9d3d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 12cf9d42 jmp 0x12cfa0b9 */
  goto L_12cfa0b9;
L_12cf9d47:;
  /* 12cf9d47 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12cf9d4d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9d53 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12cf9d56 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf9d5c je 0x12cf9d68 */
  if (C.zf) goto L_12cf9d68;
  /* 12cf9d5e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 12cf9d63 jmp 0x12cfa0b9 */
  goto L_12cfa0b9;
L_12cf9d68:;
  /* 12cf9d68 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12cf9d6e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9d74 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 12cf9d7a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12cf9d80 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf9d86 jb 0x12cf9c7c */
  if (C.cf) goto L_12cf9c7c;
  /* 12cf9d8c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12cf9d92 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf9d98 je 0x12cf9da4 */
  if (C.zf) goto L_12cf9da4;
  /* 12cf9d9a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 12cf9d9f jmp 0x12cfa0b9 */
  goto L_12cfa0b9;
L_12cf9da4:;
  /* 12cf9da4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cf9da7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9dac mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cf9daf jmp 0x12cf9c21 */
  goto L_12cf9c21;
L_12cf9db4:;
  /* 12cf9db4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf9db7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cf9db9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf9dbf je 0x12cf9dcb */
  if (C.zf) goto L_12cf9dcb;
  /* 12cf9dc1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 12cf9dc6 jmp 0x12cfa0b9 */
  goto L_12cfa0b9;
L_12cf9dcb:;
  /* 12cf9dcb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cf9dce mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 12cf9dd4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12cf9ddb jmp 0x12cf9de6 */
  goto L_12cf9de6;
L_12cf9ddd:;
  /* 12cf9ddd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf9de0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9de3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12cf9de6:;
  /* 12cf9de6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf9dea jge 0x12cfa01d */
  if ((C.sf==C.of)) goto L_12cfa01d;
  /* 12cf9df0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 12cf9dfa mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 12cf9e00 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_12cf9e06:;
  /* 12cf9e06 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12cf9e0c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cf9e0f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 12cf9e15 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12cf9e1b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf9e21 je 0x12cf9f4a */
  if (C.zf) goto L_12cf9f4a;
  /* 12cf9e27 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf9e2a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12cf9e30 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf9e37 je 0x12cf9f4a */
  if (C.zf) goto L_12cf9f4a;
  /* 12cf9e3d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12cf9e43 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf9e49 jb 0x12cf9e5e */
  if (C.cf) goto L_12cf9e5e;
  /* 12cf9e4b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 12cf9e51 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9e56 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf9e5c jb 0x12cf9e68 */
  if (C.cf) goto L_12cf9e68;
L_12cf9e5e:;
  /* 12cf9e5e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 12cf9e63 jmp 0x12cfa0b9 */
  goto L_12cfa0b9;
L_12cf9e68:;
  /* 12cf9e68 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12cf9e6e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 12cf9e74 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 12cf9e7a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 12cf9e80 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9e83 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12cf9e86 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf9e89 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9e8e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_12cf9e94:;
  /* 12cf9e94 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf9e97 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf9e9d je 0x12cf9ebe */
  if (C.zf) goto L_12cf9ebe;
  /* 12cf9e9f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf9ea2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf9ea8 jne 0x12cf9eac */
  if (!C.zf) goto L_12cf9eac;
  /* 12cf9eaa jmp 0x12cf9ebe */
  goto L_12cf9ebe;
L_12cf9eac:;
  /* 12cf9eac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf9eaf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cf9eb1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 12cf9eb4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf9eb7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9eb9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12cf9ebc jmp 0x12cf9e94 */
  goto L_12cf9e94;
L_12cf9ebe:;
  /* 12cf9ebe mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cf9ec1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf9ec7 jne 0x12cf9ed3 */
  if (!C.zf) goto L_12cf9ed3;
  /* 12cf9ec9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 12cf9ece jmp 0x12cfa0b9 */
  goto L_12cfa0b9;
L_12cf9ed3:;
  /* 12cf9ed3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12cf9ed9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cf9edb sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12cf9ede sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf9ee1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 12cf9ee7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf9eee jle 0x12cf9efa */
  if ((C.zf||C.sf!=C.of)) goto L_12cf9efa;
  /* 12cf9ef0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_12cf9efa:;
  /* 12cf9efa mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12cf9f00 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf9f03 je 0x12cf9f0f */
  if (C.zf) goto L_12cf9f0f;
  /* 12cf9f05 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 12cf9f0a jmp 0x12cfa0b9 */
  goto L_12cfa0b9;
L_12cf9f0f:;
  /* 12cf9f0f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12cf9f15 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12cf9f18 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf9f1e je 0x12cf9f2a */
  if (C.zf) goto L_12cf9f2a;
  /* 12cf9f20 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 12cf9f25 jmp 0x12cfa0b9 */
  goto L_12cfa0b9;
L_12cf9f2a:;
  /* 12cf9f2a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12cf9f30 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 12cf9f36 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12cf9f3c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cf9f3f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 12cf9f45 jmp 0x12cf9e06 */
  goto L_12cf9e06;
L_12cf9f4a:;
  /* 12cf9f4a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf9f51 je 0x12cf9fc1 */
  if (C.zf) goto L_12cf9fc1;
  /* 12cf9f53 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf9f57 jge 0x12cf9f8b */
  if ((C.sf==C.of)) goto L_12cf9f8b;
  /* 12cf9f59 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cf9f5e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf9f61 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cf9f63 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 12cf9f69 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf9f6b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 12cf9f71 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cf9f76 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf9f79 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cf9f7b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 12cf9f81 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf9f83 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 12cf9f89 jmp 0x12cf9fc1 */
  goto L_12cf9fc1;
L_12cf9f8b:;
  /* 12cf9f8b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf9f8e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf9f91 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cf9f96 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cf9f98 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 12cf9f9e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf9fa0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 12cf9fa6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf9fa9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cf9fac mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cf9fb1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cf9fb3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 12cf9fb9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12cf9fbb mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_12cf9fc1:;
  /* 12cf9fc1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12cf9fc7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cf9fca cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf9fd0 jne 0x12cf9fe4 */
  if (!C.zf) goto L_12cf9fe4;
  /* 12cf9fd2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cf9fd5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12cf9fdb cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf9fe2 je 0x12cf9fee */
  if (C.zf) goto L_12cf9fee;
L_12cf9fe4:;
  /* 12cf9fe4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 12cf9fe9 jmp 0x12cfa0b9 */
  goto L_12cfa0b9;
L_12cf9fee:;
  /* 12cf9fee mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 12cf9ff4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12cf9ff7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cf9ffd je 0x12cfa009 */
  if (C.zf) goto L_12cfa009;
  /* 12cf9fff mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 12cfa004 jmp 0x12cfa0b9 */
  goto L_12cfa0b9;
L_12cfa009:;
  /* 12cfa009 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 12cfa00f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfa012 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 12cfa018 jmp 0x12cf9ddd */
  goto L_12cf9ddd;
L_12cfa01d:;
  /* 12cfa01d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfa020 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 12cfa026 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 12cfa02c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfa030 jne 0x12cfa04a */
  if (!C.zf) goto L_12cfa04a;
  /* 12cfa032 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfa035 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 12cfa03b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 12cfa041 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfa048 je 0x12cfa051 */
  if (C.zf) goto L_12cfa051;
L_12cfa04a:;
  /* 12cfa04a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 12cfa04f jmp 0x12cfa0b9 */
  goto L_12cfa0b9;
L_12cfa051:;
  /* 12cfa051 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 12cfa057 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfa05d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 12cfa063 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cfa066 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfa06b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12cfa06e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfa071 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12cfa073 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cfa076 jmp 0x12cf9b7a */
  goto L_12cf9b7a;
L_12cfa07b:;
  /* 12cfa07b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12cfa081 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 12cfa087 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfa089 jne 0x12cfa09c */
  if (!C.zf) goto L_12cfa09c;
  /* 12cfa08b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12cfa091 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 12cfa097 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfa09a je 0x12cfa0a3 */
  if (C.zf) goto L_12cfa0a3;
L_12cfa09c:;
  /* 12cfa09c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 12cfa0a1 jmp 0x12cfa0b9 */
  goto L_12cfa0b9;
L_12cfa0a3:;
  /* 12cfa0a3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12cfa0a9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfa0ac mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 12cfa0b2 jmp 0x12cf9ae3 */
  goto L_12cf9ae3;
L_12cfa0b7:;
  /* 12cfa0b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cfa0b9:;
  /* 12cfa0b9 mov esp, ebp */
  ESP = (EBP);
  /* 12cfa0bb pop ebp */
  EBP = (pop32());
  /* 12cfa0bc ret  */
  ESPCHK(0x12cf9aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a0c0 @ 0x12cfa0c0 (250 bytes, 92 insns) */
void f_12cfa0c0(void) {
  FTRACE(0x12cfa0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfa0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfa0c1 mov ebp, esp */
  EBP = (ESP);
  /* 12cfa0c3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfa0c6 push ebx */
  push32((uint32_t)(EBX));
  /* 12cfa0c7 push esi */
  push32((uint32_t)(ESI));
  /* 12cfa0c8 push edi */
  push32((uint32_t)(EDI));
  /* 12cfa0c9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12cfa0cc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12cfa0cf lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12cfa0d2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12cfa0d5:;
  /* 12cfa0d5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfa0d9 jne 0x12cfa0f9 */
  if (!C.zf) goto L_12cfa0f9;
  /* 12cfa0db push 0x12d1c248 */
  push32((uint32_t)(0x12d1c248u));
  /* 12cfa0e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfa0e2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12cfa0e4 push 0x12d1c23c */
  push32((uint32_t)(0x12d1c23cu));
  /* 12cfa0e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cfa0eb call 0x12cf3270 */
  push32(0x12cfa0f0u); f_12cf3270();
  /* 12cfa0f0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfa0f3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfa0f6 jne 0x12cfa0f9 */
  if (!C.zf) goto L_12cfa0f9;
  /* 12cfa0f8 int3  */
  x86_unimpl("int3 @ 0x12cfa0f8");
L_12cfa0f9:;
  /* 12cfa0f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cfa0fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cfa0fd jne 0x12cfa0d5 */
  if (!C.zf) goto L_12cfa0d5;
L_12cfa0ff:;
  /* 12cfa0ff cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfa103 jne 0x12cfa123 */
  if (!C.zf) goto L_12cfa123;
  /* 12cfa105 push 0x12d1c22c */
  push32((uint32_t)(0x12d1c22cu));
  /* 12cfa10a push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfa10c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12cfa10e push 0x12d1c23c */
  push32((uint32_t)(0x12d1c23cu));
  /* 12cfa113 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cfa115 call 0x12cf3270 */
  push32(0x12cfa11au); f_12cf3270();
  /* 12cfa11a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfa11d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfa120 jne 0x12cfa123 */
  if (!C.zf) goto L_12cfa123;
  /* 12cfa122 int3  */
  x86_unimpl("int3 @ 0x12cfa122");
L_12cfa123:;
  /* 12cfa123 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfa125 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfa127 jne 0x12cfa0ff */
  if (!C.zf) goto L_12cfa0ff;
  /* 12cfa129 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cfa12c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12cfa133 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cfa136 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfa139 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12cfa13c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cfa13f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfa142 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12cfa144 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cfa147 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 12cfa14e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cfa151 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfa152 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfa155 push edx */
  push32((uint32_t)(EDX));
  /* 12cfa156 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cfa159 push eax */
  push32((uint32_t)(EAX));
  /* 12cfa15a call 0x12cfb140 */
  push32(0x12cfa15fu); f_12cfb140();
  /* 12cfa15f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfa162 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12cfa165 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cfa168 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cfa16b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfa16e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cfa171 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12cfa174 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cfa177 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfa17b jl 0x12cfa19f */
  if ((C.sf!=C.of)) goto L_12cfa19f;
  /* 12cfa17d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cfa180 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cfa182 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12cfa185 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfa187 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cfa18d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12cfa190 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cfa193 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cfa195 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfa198 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cfa19b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12cfa19d jmp 0x12cfa1b0 */
  goto L_12cfa1b0;
L_12cfa19f:;
  /* 12cfa19f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cfa1a2 push edx */
  push32((uint32_t)(EDX));
  /* 12cfa1a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfa1a5 call 0x12cfaec0 */
  push32(0x12cfa1aau); f_12cfaec0();
  /* 12cfa1aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfa1ad mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_12cfa1b0:;
  /* 12cfa1b0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cfa1b3 pop edi */
  EDI = (pop32());
  /* 12cfa1b4 pop esi */
  ESI = (pop32());
  /* 12cfa1b5 pop ebx */
  EBX = (pop32());
  /* 12cfa1b6 mov esp, ebp */
  ESP = (EBP);
  /* 12cfa1b8 pop ebp */
  EBP = (pop32());
  /* 12cfa1b9 ret  */
  ESPCHK(0x12cfa0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1c0 @ 0x12cfa1c0 (183 bytes, 58 insns) */
void f_12cfa1c0(void) {
  FTRACE(0x12cfa1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfa1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfa1c1 mov ebp, esp */
  EBP = (ESP);
  /* 12cfa1c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfa1c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfa1c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfa1cc cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfa1d1 ja 0x12cfa1ea */
  if ((!C.cf&&!C.zf)) goto L_12cfa1ea;
  /* 12cfa1d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfa1d6 mov edx, dword ptr [0x12d1ec98] */
  EDX = (r32((uint32_t)(0x12d1ec98)));
  /* 12cfa1dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfa1de mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12cfa1e2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 12cfa1e5 jmp 0x12cfa273 */
  goto L_12cfa273;
L_12cfa1ea:;
  /* 12cfa1ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfa1ed sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12cfa1f0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cfa1f6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cfa1fc mov edx, dword ptr [0x12d1ec98] */
  EDX = (r32((uint32_t)(0x12d1ec98)));
  /* 12cfa202 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfa204 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12cfa208 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12cfa20d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfa20f je 0x12cfa233 */
  if (C.zf) goto L_12cfa233;
  /* 12cfa211 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfa214 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12cfa217 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cfa21d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 12cfa220 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 12cfa223 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 12cfa226 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 12cfa22a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 12cfa231 jmp 0x12cfa244 */
  goto L_12cfa244;
L_12cfa233:;
  /* 12cfa233 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12cfa236 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 12cfa239 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 12cfa23d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12cfa244:;
  /* 12cfa244 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfa246 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfa248 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfa24a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12cfa24d push ecx */
  push32((uint32_t)(ECX));
  /* 12cfa24e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfa251 push edx */
  push32((uint32_t)(EDX));
  /* 12cfa252 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12cfa255 push eax */
  push32((uint32_t)(EAX));
  /* 12cfa256 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfa258 call 0x12cfc3e0 */
  push32(0x12cfa25du); f_12cfc3e0();
  /* 12cfa25d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfa260 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfa262 jne 0x12cfa268 */
  if (!C.zf) goto L_12cfa268;
  /* 12cfa264 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfa266 jmp 0x12cfa273 */
  goto L_12cfa273;
L_12cfa268:;
  /* 12cfa268 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfa26b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cfa270 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_12cfa273:;
  /* 12cfa273 mov esp, ebp */
  ESP = (EBP);
  /* 12cfa275 pop ebp */
  EBP = (pop32());
  /* 12cfa276 ret  */
  ESPCHK(0x12cfa1c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a280 @ 0x12cfa280 (836 bytes, 238 insns) */
void f_12cfa280(void) {
  FTRACE(0x12cfa280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfa280 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfa281 mov ebp, esp */
  EBP = (ESP);
  /* 12cfa283 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfa286 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12cfa288 call 0x12cf7bb0 */
  push32(0x12cfa28du); f_12cf7bb0();
  /* 12cfa28d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfa290 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfa293 push eax */
  push32((uint32_t)(EAX));
  /* 12cfa294 call 0x12cfa5d0 */
  push32(0x12cfa299u); f_12cfa5d0();
  /* 12cfa299 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfa29c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12cfa29f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfa2a2 cmp ecx, dword ptr [0x12d21c04] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d21c04))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfa2a8 jne 0x12cfa2bb */
  if (!C.zf) goto L_12cfa2bb;
  /* 12cfa2aa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12cfa2ac call 0x12cf7c50 */
  push32(0x12cfa2b1u); f_12cf7c50();
  /* 12cfa2b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfa2b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfa2b6 jmp 0x12cfa5c0 */
  goto L_12cfa5c0;
L_12cfa2bb:;
  /* 12cfa2bb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfa2bf jne 0x12cfa2dc */
  if (!C.zf) goto L_12cfa2dc;
  /* 12cfa2c1 call 0x12cfa6b0 */
  push32(0x12cfa2c6u); f_12cfa6b0();
  /* 12cfa2c6 call 0x12cfa730 */
  push32(0x12cfa2cbu); f_12cfa730();
  /* 12cfa2cb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12cfa2cd call 0x12cf7c50 */
  push32(0x12cfa2d2u); f_12cf7c50();
  /* 12cfa2d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfa2d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfa2d7 jmp 0x12cfa5c0 */
  goto L_12cfa5c0;
L_12cfa2dc:;
  /* 12cfa2dc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cfa2e3 jmp 0x12cfa2ee */
  goto L_12cfa2ee;
L_12cfa2e5:;
  /* 12cfa2e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfa2e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfa2eb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12cfa2ee:;
  /* 12cfa2ee cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfa2f2 jae 0x12cfa43f */
  if (!C.cf) goto L_12cfa43f;
  /* 12cfa2f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfa2fb imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfa2fe mov ecx, dword ptr [eax + 0x12d1eeb8] */
  ECX = (r32((uint32_t)(EAX + 0x12d1eeb8)));
  /* 12cfa304 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfa307 jne 0x12cfa43a */
  if (!C.zf) goto L_12cfa43a;
  /* 12cfa30d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12cfa314 jmp 0x12cfa31f */
  goto L_12cfa31f;
L_12cfa316:;
  /* 12cfa316 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cfa319 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfa31c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_12cfa31f:;
  /* 12cfa31f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfa326 jae 0x12cfa334 */
  if (!C.cf) goto L_12cfa334;
  /* 12cfa328 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cfa32b mov byte ptr [eax + 0x12d21da0], 0 */
  w8((uint32_t)(EAX + 0x12d21da0), (0x0u));
  /* 12cfa332 jmp 0x12cfa316 */
  goto L_12cfa316;
L_12cfa334:;
  /* 12cfa334 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12cfa33b jmp 0x12cfa346 */
  goto L_12cfa346;
L_12cfa33d:;
  /* 12cfa33d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfa340 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfa343 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12cfa346:;
  /* 12cfa346 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfa34a jae 0x12cfa3c7 */
  if (!C.cf) goto L_12cfa3c7;
  /* 12cfa34c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfa34f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfa352 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfa355 lea ecx, [edx + eax*8 + 0x12d1eec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x12d1eec8));
  /* 12cfa35c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cfa35f jmp 0x12cfa36a */
  goto L_12cfa36a;
L_12cfa361:;
  /* 12cfa361 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfa364 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfa367 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12cfa36a:;
  /* 12cfa36a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfa36d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfa36f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12cfa371 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cfa373 je 0x12cfa3c2 */
  if (C.zf) goto L_12cfa3c2;
  /* 12cfa375 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfa378 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfa37a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12cfa37d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfa37f je 0x12cfa3c2 */
  if (C.zf) goto L_12cfa3c2;
  /* 12cfa381 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfa384 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cfa386 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12cfa388 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12cfa38b jmp 0x12cfa396 */
  goto L_12cfa396;
L_12cfa38d:;
  /* 12cfa38d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cfa390 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfa393 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12cfa396:;
  /* 12cfa396 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfa399 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cfa39b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12cfa39e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfa3a1 ja 0x12cfa3c0 */
  if ((!C.cf&&!C.zf)) goto L_12cfa3c0;
  /* 12cfa3a3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cfa3a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfa3a9 mov dl, byte ptr [eax + 0x12d21da1] */
  DL = (r8((uint32_t)(EAX + 0x12d21da1)));
  /* 12cfa3af or dl, byte ptr [ecx + 0x12d1eeb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x12d1eeb0))); DL = (_r); fl_logic(_r,8); }
  /* 12cfa3b5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cfa3b8 mov byte ptr [eax + 0x12d21da1], dl */
  w8((uint32_t)(EAX + 0x12d21da1), (DL));
  /* 12cfa3be jmp 0x12cfa38d */
  goto L_12cfa38d;
L_12cfa3c0:;
  /* 12cfa3c0 jmp 0x12cfa361 */
  goto L_12cfa361;
L_12cfa3c2:;
  /* 12cfa3c2 jmp 0x12cfa33d */
  goto L_12cfa33d;
L_12cfa3c7:;
  /* 12cfa3c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfa3ca mov dword ptr [0x12d21c04], ecx */
  w32((uint32_t)(0x12d21c04), (ECX));
  /* 12cfa3d0 mov dword ptr [0x12d21c8c], 1 */
  w32((uint32_t)(0x12d21c8c), (0x1u));
  /* 12cfa3da mov edx, dword ptr [0x12d21c04] */
  EDX = (r32((uint32_t)(0x12d21c04)));
  /* 12cfa3e0 push edx */
  push32((uint32_t)(EDX));
  /* 12cfa3e1 call 0x12cfa630 */
  push32(0x12cfa3e6u); f_12cfa630();
  /* 12cfa3e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfa3e9 mov dword ptr [0x12d21ea4], eax */
  w32((uint32_t)(0x12d21ea4), (EAX));
  /* 12cfa3ee mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12cfa3f5 jmp 0x12cfa400 */
  goto L_12cfa400;
L_12cfa3f7:;
  /* 12cfa3f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfa3fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfa3fd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12cfa400:;
  /* 12cfa400 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfa404 jae 0x12cfa424 */
  if (!C.cf) goto L_12cfa424;
  /* 12cfa406 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfa409 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfa40c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfa40f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfa412 mov cx, word ptr [ecx + eax*2 + 0x12d1eebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x12d1eebc)));
  /* 12cfa41a mov word ptr [edx*2 + 0x12d21c80], cx */
  w16((uint32_t)(EDX*2 + 0x12d21c80), (CX));
  /* 12cfa422 jmp 0x12cfa3f7 */
  goto L_12cfa3f7;
L_12cfa424:;
  /* 12cfa424 call 0x12cfa730 */
  push32(0x12cfa429u); f_12cfa730();
  /* 12cfa429 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12cfa42b call 0x12cf7c50 */
  push32(0x12cfa430u); f_12cf7c50();
  /* 12cfa430 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfa433 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfa435 jmp 0x12cfa5c0 */
  goto L_12cfa5c0;
L_12cfa43a:;
  /* 12cfa43a jmp 0x12cfa2e5 */
  goto L_12cfa2e5;
L_12cfa43f:;
  /* 12cfa43f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 12cfa442 push edx */
  push32((uint32_t)(EDX));
  /* 12cfa443 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfa446 push eax */
  push32((uint32_t)(EAX));
  /* 12cfa447 call dword ptr [0x12d232e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232e0))), 0x12cfa44du);
  /* 12cfa44d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfa450 jne 0x12cfa592 */
  if (!C.zf) goto L_12cfa592;
  /* 12cfa456 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12cfa45d jmp 0x12cfa468 */
  goto L_12cfa468;
L_12cfa45f:;
  /* 12cfa45f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cfa462 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfa465 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_12cfa468:;
  /* 12cfa468 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfa46f jae 0x12cfa47d */
  if (!C.cf) goto L_12cfa47d;
  /* 12cfa471 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cfa474 mov byte ptr [edx + 0x12d21da0], 0 */
  w8((uint32_t)(EDX + 0x12d21da0), (0x0u));
  /* 12cfa47b jmp 0x12cfa45f */
  goto L_12cfa45f;
L_12cfa47d:;
  /* 12cfa47d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfa480 mov dword ptr [0x12d21c04], eax */
  w32((uint32_t)(0x12d21c04), (EAX));
  /* 12cfa485 mov dword ptr [0x12d21ea4], 0 */
  w32((uint32_t)(0x12d21ea4), (0x0u));
  /* 12cfa48f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfa493 jbe 0x12cfa54e */
  if ((C.cf||C.zf)) goto L_12cfa54e;
  /* 12cfa499 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 12cfa49c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12cfa49f jmp 0x12cfa4aa */
  goto L_12cfa4aa;
L_12cfa4a1:;
  /* 12cfa4a1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cfa4a4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfa4a7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_12cfa4aa:;
  /* 12cfa4aa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cfa4ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfa4af mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12cfa4b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cfa4b3 je 0x12cfa4fc */
  if (C.zf) goto L_12cfa4fc;
  /* 12cfa4b5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cfa4b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfa4ba mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12cfa4bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfa4bf je 0x12cfa4fc */
  if (C.zf) goto L_12cfa4fc;
  /* 12cfa4c1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cfa4c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cfa4c6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12cfa4c8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12cfa4cb jmp 0x12cfa4d6 */
  goto L_12cfa4d6;
L_12cfa4cd:;
  /* 12cfa4cd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cfa4d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfa4d3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12cfa4d6:;
  /* 12cfa4d6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cfa4d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cfa4db mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12cfa4de cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfa4e1 ja 0x12cfa4fa */
  if ((!C.cf&&!C.zf)) goto L_12cfa4fa;
  /* 12cfa4e3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cfa4e6 mov cl, byte ptr [eax + 0x12d21da1] */
  CL = (r8((uint32_t)(EAX + 0x12d21da1)));
  /* 12cfa4ec or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 12cfa4ef mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cfa4f2 mov byte ptr [edx + 0x12d21da1], cl */
  w8((uint32_t)(EDX + 0x12d21da1), (CL));
  /* 12cfa4f8 jmp 0x12cfa4cd */
  goto L_12cfa4cd;
L_12cfa4fa:;
  /* 12cfa4fa jmp 0x12cfa4a1 */
  goto L_12cfa4a1;
L_12cfa4fc:;
  /* 12cfa4fc mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 12cfa503 jmp 0x12cfa50e */
  goto L_12cfa50e;
L_12cfa505:;
  /* 12cfa505 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cfa508 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfa50b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12cfa50e:;
  /* 12cfa50e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfa515 jae 0x12cfa52e */
  if (!C.cf) goto L_12cfa52e;
  /* 12cfa517 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cfa51a mov dl, byte ptr [ecx + 0x12d21da1] */
  DL = (r8((uint32_t)(ECX + 0x12d21da1)));
  /* 12cfa520 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 12cfa523 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cfa526 mov byte ptr [eax + 0x12d21da1], dl */
  w8((uint32_t)(EAX + 0x12d21da1), (DL));
  /* 12cfa52c jmp 0x12cfa505 */
  goto L_12cfa505;
L_12cfa52e:;
  /* 12cfa52e mov ecx, dword ptr [0x12d21c04] */
  ECX = (r32((uint32_t)(0x12d21c04)));
  /* 12cfa534 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfa535 call 0x12cfa630 */
  push32(0x12cfa53au); f_12cfa630();
  /* 12cfa53a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfa53d mov dword ptr [0x12d21ea4], eax */
  w32((uint32_t)(0x12d21ea4), (EAX));
  /* 12cfa542 mov dword ptr [0x12d21c8c], 1 */
  w32((uint32_t)(0x12d21c8c), (0x1u));
  /* 12cfa54c jmp 0x12cfa558 */
  goto L_12cfa558;
L_12cfa54e:;
  /* 12cfa54e mov dword ptr [0x12d21c8c], 0 */
  w32((uint32_t)(0x12d21c8c), (0x0u));
L_12cfa558:;
  /* 12cfa558 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12cfa55f jmp 0x12cfa56a */
  goto L_12cfa56a;
L_12cfa561:;
  /* 12cfa561 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfa564 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfa567 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12cfa56a:;
  /* 12cfa56a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfa56e jae 0x12cfa57f */
  if (!C.cf) goto L_12cfa57f;
  /* 12cfa570 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfa573 mov word ptr [eax*2 + 0x12d21c80], 0 */
  w16((uint32_t)(EAX*2 + 0x12d21c80), (0x0u));
  /* 12cfa57d jmp 0x12cfa561 */
  goto L_12cfa561;
L_12cfa57f:;
  /* 12cfa57f call 0x12cfa730 */
  push32(0x12cfa584u); f_12cfa730();
  /* 12cfa584 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12cfa586 call 0x12cf7c50 */
  push32(0x12cfa58bu); f_12cf7c50();
  /* 12cfa58b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfa58e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfa590 jmp 0x12cfa5c0 */
  goto L_12cfa5c0;
L_12cfa592:;
  /* 12cfa592 cmp dword ptr [0x12d20708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfa599 je 0x12cfa5b3 */
  if (C.zf) goto L_12cfa5b3;
  /* 12cfa59b call 0x12cfa6b0 */
  push32(0x12cfa5a0u); f_12cfa6b0();
  /* 12cfa5a0 call 0x12cfa730 */
  push32(0x12cfa5a5u); f_12cfa730();
  /* 12cfa5a5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12cfa5a7 call 0x12cf7c50 */
  push32(0x12cfa5acu); f_12cf7c50();
  /* 12cfa5ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfa5af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfa5b1 jmp 0x12cfa5c0 */
  goto L_12cfa5c0;
L_12cfa5b3:;
  /* 12cfa5b3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12cfa5b5 call 0x12cf7c50 */
  push32(0x12cfa5bau); f_12cf7c50();
  /* 12cfa5ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfa5bd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12cfa5c0:;
  /* 12cfa5c0 mov esp, ebp */
  ESP = (EBP);
  /* 12cfa5c2 pop ebp */
  EBP = (pop32());
  /* 12cfa5c3 ret  */
  ESPCHK(0x12cfa280u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x12cfa5d0 (89 bytes, 21 insns) */
void f_12cfa5d0(void) {
  FTRACE(0x12cfa5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfa5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfa5d1 mov ebp, esp */
  EBP = (ESP);
  /* 12cfa5d3 mov dword ptr [0x12d20708], 0 */
  w32((uint32_t)(0x12d20708), (0x0u));
  /* 12cfa5dd cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfa5e1 jne 0x12cfa5f5 */
  if (!C.zf) goto L_12cfa5f5;
  /* 12cfa5e3 mov dword ptr [0x12d20708], 1 */
  w32((uint32_t)(0x12d20708), (0x1u));
  /* 12cfa5ed call dword ptr [0x12d232d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232d8))), 0x12cfa5f3u);
  /* 12cfa5f3 jmp 0x12cfa627 */
  goto L_12cfa627;
L_12cfa5f5:;
  /* 12cfa5f5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfa5f9 jne 0x12cfa60d */
  if (!C.zf) goto L_12cfa60d;
  /* 12cfa5fb mov dword ptr [0x12d20708], 1 */
  w32((uint32_t)(0x12d20708), (0x1u));
  /* 12cfa605 call dword ptr [0x12d232dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232dc))), 0x12cfa60bu);
  /* 12cfa60b jmp 0x12cfa627 */
  goto L_12cfa627;
L_12cfa60d:;
  /* 12cfa60d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfa611 jne 0x12cfa624 */
  if (!C.zf) goto L_12cfa624;
  /* 12cfa613 mov dword ptr [0x12d20708], 1 */
  w32((uint32_t)(0x12d20708), (0x1u));
  /* 12cfa61d mov eax, dword ptr [0x12d20728] */
  EAX = (r32((uint32_t)(0x12d20728)));
  /* 12cfa622 jmp 0x12cfa627 */
  goto L_12cfa627;
L_12cfa624:;
  /* 12cfa624 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12cfa627:;
  /* 12cfa627 pop ebp */
  EBP = (pop32());
  /* 12cfa628 ret  */
  ESPCHK(0x12cfa5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a630 @ 0x12cfa630 (80 bytes, 26 insns) [1 switch table(s)] */
void f_12cfa630(void) {
  FTRACE(0x12cfa630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfa630 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfa631 mov ebp, esp */
  EBP = (ESP);
  /* 12cfa633 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfa634 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfa637 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cfa63a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfa63d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfa643 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cfa646 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfa64a ja 0x12cfa67a */
  if ((!C.cf&&!C.zf)) goto L_12cfa67a;
  /* 12cfa64c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfa64f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cfa651 mov dl, byte ptr [eax + 0x12cfa694] */
  DL = (r8((uint32_t)(EAX + 0x12cfa694)));
  /* 12cfa657 jmp dword ptr [edx*4 + 0x12cfa680] */
  switch (EDX) {
    case 0: goto L_12cfa65e;
    case 1: goto L_12cfa665;
    case 2: goto L_12cfa66c;
    case 3: goto L_12cfa673;
    case 4: goto L_12cfa67a;
    default: x86_unimpl("switch@0x12cfa657 out of table"); return;
  }
L_12cfa65e:;
  /* 12cfa65e mov eax, 0x411 */
  EAX = (0x411u);
  /* 12cfa663 jmp 0x12cfa67c */
  goto L_12cfa67c;
L_12cfa665:;
  /* 12cfa665 mov eax, 0x804 */
  EAX = (0x804u);
  /* 12cfa66a jmp 0x12cfa67c */
  goto L_12cfa67c;
L_12cfa66c:;
  /* 12cfa66c mov eax, 0x412 */
  EAX = (0x412u);
  /* 12cfa671 jmp 0x12cfa67c */
  goto L_12cfa67c;
L_12cfa673:;
  /* 12cfa673 mov eax, 0x404 */
  EAX = (0x404u);
  /* 12cfa678 jmp 0x12cfa67c */
  goto L_12cfa67c;
L_12cfa67a:;
  /* 12cfa67a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cfa67c:;
  /* 12cfa67c mov esp, ebp */
  ESP = (EBP);
  /* 12cfa67e pop ebp */
  EBP = (pop32());
  /* 12cfa67f ret  */
  ESPCHK(0x12cfa630u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x12cfa6b0 (116 bytes, 29 insns) */
void f_12cfa6b0(void) {
  FTRACE(0x12cfa6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfa6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfa6b1 mov ebp, esp */
  EBP = (ESP);
  /* 12cfa6b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfa6b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cfa6bb jmp 0x12cfa6c6 */
  goto L_12cfa6c6;
L_12cfa6bd:;
  /* 12cfa6bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfa6c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfa6c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cfa6c6:;
  /* 12cfa6c6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfa6cd jge 0x12cfa6db */
  if ((C.sf==C.of)) goto L_12cfa6db;
  /* 12cfa6cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfa6d2 mov byte ptr [ecx + 0x12d21da0], 0 */
  w8((uint32_t)(ECX + 0x12d21da0), (0x0u));
  /* 12cfa6d9 jmp 0x12cfa6bd */
  goto L_12cfa6bd;
L_12cfa6db:;
  /* 12cfa6db mov dword ptr [0x12d21c04], 0 */
  w32((uint32_t)(0x12d21c04), (0x0u));
  /* 12cfa6e5 mov dword ptr [0x12d21c8c], 0 */
  w32((uint32_t)(0x12d21c8c), (0x0u));
  /* 12cfa6ef mov dword ptr [0x12d21ea4], 0 */
  w32((uint32_t)(0x12d21ea4), (0x0u));
  /* 12cfa6f9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cfa700 jmp 0x12cfa70b */
  goto L_12cfa70b;
L_12cfa702:;
  /* 12cfa702 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfa705 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfa708 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12cfa70b:;
  /* 12cfa70b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfa70f jge 0x12cfa720 */
  if ((C.sf==C.of)) goto L_12cfa720;
  /* 12cfa711 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfa714 mov word ptr [eax*2 + 0x12d21c80], 0 */
  w16((uint32_t)(EAX*2 + 0x12d21c80), (0x0u));
  /* 12cfa71e jmp 0x12cfa702 */
  goto L_12cfa702;
L_12cfa720:;
  /* 12cfa720 mov esp, ebp */
  ESP = (EBP);
  /* 12cfa722 pop ebp */
  EBP = (pop32());
  /* 12cfa723 ret  */
  ESPCHK(0x12cfa6b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a730 @ 0x12cfa730 (770 bytes, 175 insns) */
void f_12cfa730(void) {
  FTRACE(0x12cfa730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfa730 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfa731 mov ebp, esp */
  EBP = (ESP);
  /* 12cfa733 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfa739 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 12cfa73f push eax */
  push32((uint32_t)(EAX));
  /* 12cfa740 mov ecx, dword ptr [0x12d21c04] */
  ECX = (r32((uint32_t)(0x12d21c04)));
  /* 12cfa746 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfa747 call dword ptr [0x12d232e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232e0))), 0x12cfa74du);
  /* 12cfa74d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfa750 jne 0x12cfa969 */
  if (!C.zf) goto L_12cfa969;
  /* 12cfa756 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12cfa760 jmp 0x12cfa771 */
  goto L_12cfa771;
L_12cfa762:;
  /* 12cfa762 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cfa768 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfa76b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_12cfa771:;
  /* 12cfa771 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfa77b jae 0x12cfa792 */
  if (!C.cf) goto L_12cfa792;
  /* 12cfa77d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cfa783 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 12cfa789 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 12cfa790 jmp 0x12cfa762 */
  goto L_12cfa762;
L_12cfa792:;
  /* 12cfa792 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 12cfa799 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 12cfa79f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cfa7a2 jmp 0x12cfa7ad */
  goto L_12cfa7ad;
L_12cfa7a4:;
  /* 12cfa7a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfa7a7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfa7aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cfa7ad:;
  /* 12cfa7ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfa7b0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cfa7b2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12cfa7b4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cfa7b6 je 0x12cfa7f8 */
  if (C.zf) goto L_12cfa7f8;
  /* 12cfa7b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfa7bb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfa7bd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12cfa7bf mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 12cfa7c5 jmp 0x12cfa7d6 */
  goto L_12cfa7d6;
L_12cfa7c7:;
  /* 12cfa7c7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cfa7cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfa7d0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_12cfa7d6:;
  /* 12cfa7d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfa7d9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfa7db mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12cfa7de cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfa7e4 ja 0x12cfa7f6 */
  if ((!C.cf&&!C.zf)) goto L_12cfa7f6;
  /* 12cfa7e6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cfa7ec mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 12cfa7f4 jmp 0x12cfa7c7 */
  goto L_12cfa7c7;
L_12cfa7f6:;
  /* 12cfa7f6 jmp 0x12cfa7a4 */
  goto L_12cfa7a4;
L_12cfa7f8:;
  /* 12cfa7f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfa7fa mov eax, dword ptr [0x12d21ea4] */
  EAX = (r32((uint32_t)(0x12d21ea4)));
  /* 12cfa7ff push eax */
  push32((uint32_t)(EAX));
  /* 12cfa800 mov ecx, dword ptr [0x12d21c04] */
  ECX = (r32((uint32_t)(0x12d21c04)));
  /* 12cfa806 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfa807 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 12cfa80d push edx */
  push32((uint32_t)(EDX));
  /* 12cfa80e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12cfa813 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 12cfa819 push eax */
  push32((uint32_t)(EAX));
  /* 12cfa81a push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfa81c call 0x12cfc3e0 */
  push32(0x12cfa821u); f_12cfc3e0();
  /* 12cfa821 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfa824 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfa826 mov ecx, dword ptr [0x12d21c04] */
  ECX = (r32((uint32_t)(0x12d21c04)));
  /* 12cfa82c push ecx */
  push32((uint32_t)(ECX));
  /* 12cfa82d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12cfa832 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 12cfa838 push edx */
  push32((uint32_t)(EDX));
  /* 12cfa839 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12cfa83e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 12cfa844 push eax */
  push32((uint32_t)(EAX));
  /* 12cfa845 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12cfa84a mov ecx, dword ptr [0x12d21ea4] */
  ECX = (r32((uint32_t)(0x12d21ea4)));
  /* 12cfa850 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfa851 call 0x12cfc5a0 */
  push32(0x12cfa856u); f_12cfc5a0();
  /* 12cfa856 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfa859 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfa85b mov edx, dword ptr [0x12d21c04] */
  EDX = (r32((uint32_t)(0x12d21c04)));
  /* 12cfa861 push edx */
  push32((uint32_t)(EDX));
  /* 12cfa862 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12cfa867 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 12cfa86d push eax */
  push32((uint32_t)(EAX));
  /* 12cfa86e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12cfa873 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 12cfa879 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfa87a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 12cfa87f mov edx, dword ptr [0x12d21ea4] */
  EDX = (r32((uint32_t)(0x12d21ea4)));
  /* 12cfa885 push edx */
  push32((uint32_t)(EDX));
  /* 12cfa886 call 0x12cfc5a0 */
  push32(0x12cfa88bu); f_12cfc5a0();
  /* 12cfa88b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfa88e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12cfa898 jmp 0x12cfa8a9 */
  goto L_12cfa8a9;
L_12cfa89a:;
  /* 12cfa89a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cfa8a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfa8a3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12cfa8a9:;
  /* 12cfa8a9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfa8b3 jae 0x12cfa964 */
  if (!C.cf) goto L_12cfa964;
  /* 12cfa8b9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cfa8bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cfa8c1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 12cfa8c9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12cfa8cc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cfa8ce je 0x12cfa906 */
  if (C.zf) goto L_12cfa906;
  /* 12cfa8d0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cfa8d6 mov cl, byte ptr [eax + 0x12d21da1] */
  CL = (r8((uint32_t)(EAX + 0x12d21da1)));
  /* 12cfa8dc or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 12cfa8df mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cfa8e5 mov byte ptr [edx + 0x12d21da1], cl */
  w8((uint32_t)(EDX + 0x12d21da1), (CL));
  /* 12cfa8eb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cfa8f1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cfa8f7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 12cfa8fe mov byte ptr [eax + 0x12d21ca0], dl */
  w8((uint32_t)(EAX + 0x12d21ca0), (DL));
  /* 12cfa904 jmp 0x12cfa95f */
  goto L_12cfa95f;
L_12cfa906:;
  /* 12cfa906 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cfa90c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfa90e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 12cfa916 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12cfa919 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cfa91b je 0x12cfa952 */
  if (C.zf) goto L_12cfa952;
  /* 12cfa91d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cfa923 mov al, byte ptr [edx + 0x12d21da1] */
  AL = (r8((uint32_t)(EDX + 0x12d21da1)));
  /* 12cfa929 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12cfa92b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cfa931 mov byte ptr [ecx + 0x12d21da1], al */
  w8((uint32_t)(ECX + 0x12d21da1), (AL));
  /* 12cfa937 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cfa93d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cfa943 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 12cfa94a mov byte ptr [edx + 0x12d21ca0], cl */
  w8((uint32_t)(EDX + 0x12d21ca0), (CL));
  /* 12cfa950 jmp 0x12cfa95f */
  goto L_12cfa95f;
L_12cfa952:;
  /* 12cfa952 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cfa958 mov byte ptr [edx + 0x12d21ca0], 0 */
  w8((uint32_t)(EDX + 0x12d21ca0), (0x0u));
L_12cfa95f:;
  /* 12cfa95f jmp 0x12cfa89a */
  goto L_12cfa89a;
L_12cfa964:;
  /* 12cfa964 jmp 0x12cfaa2e */
  goto L_12cfaa2e;
L_12cfa969:;
  /* 12cfa969 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12cfa973 jmp 0x12cfa984 */
  goto L_12cfa984;
L_12cfa975:;
  /* 12cfa975 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cfa97b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfa97e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12cfa984:;
  /* 12cfa984 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfa98e jae 0x12cfaa2e */
  if (!C.cf) goto L_12cfaa2e;
  /* 12cfa994 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfa99b jb 0x12cfa9d8 */
  if (C.cf) goto L_12cfa9d8;
  /* 12cfa99d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfa9a4 ja 0x12cfa9d8 */
  if ((!C.cf&&!C.zf)) goto L_12cfa9d8;
  /* 12cfa9a6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cfa9ac mov dl, byte ptr [ecx + 0x12d21da1] */
  DL = (r8((uint32_t)(ECX + 0x12d21da1)));
  /* 12cfa9b2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 12cfa9b5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cfa9bb mov byte ptr [eax + 0x12d21da1], dl */
  w8((uint32_t)(EAX + 0x12d21da1), (DL));
  /* 12cfa9c1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cfa9c7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfa9ca mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cfa9d0 mov byte ptr [edx + 0x12d21ca0], cl */
  w8((uint32_t)(EDX + 0x12d21ca0), (CL));
  /* 12cfa9d6 jmp 0x12cfaa29 */
  goto L_12cfaa29;
L_12cfa9d8:;
  /* 12cfa9d8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfa9df jb 0x12cfaa1c */
  if (C.cf) goto L_12cfaa1c;
  /* 12cfa9e1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfa9e8 ja 0x12cfaa1c */
  if ((!C.cf&&!C.zf)) goto L_12cfaa1c;
  /* 12cfa9ea mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cfa9f0 mov cl, byte ptr [eax + 0x12d21da1] */
  CL = (r8((uint32_t)(EAX + 0x12d21da1)));
  /* 12cfa9f6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12cfa9f9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cfa9ff mov byte ptr [edx + 0x12d21da1], cl */
  w8((uint32_t)(EDX + 0x12d21da1), (CL));
  /* 12cfaa05 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cfaa0b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfaa0e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cfaa14 mov byte ptr [ecx + 0x12d21ca0], al */
  w8((uint32_t)(ECX + 0x12d21ca0), (AL));
  /* 12cfaa1a jmp 0x12cfaa29 */
  goto L_12cfaa29;
L_12cfaa1c:;
  /* 12cfaa1c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cfaa22 mov byte ptr [edx + 0x12d21ca0], 0 */
  w8((uint32_t)(EDX + 0x12d21ca0), (0x0u));
L_12cfaa29:;
  /* 12cfaa29 jmp 0x12cfa975 */
  goto L_12cfa975;
L_12cfaa2e:;
  /* 12cfaa2e mov esp, ebp */
  ESP = (EBP);
  /* 12cfaa30 pop ebp */
  EBP = (pop32());
  /* 12cfaa31 ret  */
  ESPCHK(0x12cfa730u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa40 @ 0x12cfaa40 (23 bytes, 9 insns) */
void f_12cfaa40(void) {
  FTRACE(0x12cfaa40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfaa40 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfaa41 mov ebp, esp */
  EBP = (ESP);
  /* 12cfaa43 cmp dword ptr [0x12d21c8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d21c8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfaa4a je 0x12cfaa53 */
  if (C.zf) goto L_12cfaa53;
  /* 12cfaa4c mov eax, dword ptr [0x12d21c04] */
  EAX = (r32((uint32_t)(0x12d21c04)));
  /* 12cfaa51 jmp 0x12cfaa55 */
  goto L_12cfaa55;
L_12cfaa53:;
  /* 12cfaa53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cfaa55:;
  /* 12cfaa55 pop ebp */
  EBP = (pop32());
  /* 12cfaa56 ret  */
  ESPCHK(0x12cfaa40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa60 @ 0x12cfaa60 (34 bytes, 10 insns) */
void f_12cfaa60(void) {
  FTRACE(0x12cfaa60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfaa60 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfaa61 mov ebp, esp */
  EBP = (ESP);
  /* 12cfaa63 cmp dword ptr [0x12d22050], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d22050))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfaa6a jne 0x12cfaa80 */
  if (!C.zf) goto L_12cfaa80;
  /* 12cfaa6c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 12cfaa6e call 0x12cfa280 */
  push32(0x12cfaa73u); f_12cfa280();
  /* 12cfaa73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfaa76 mov dword ptr [0x12d22050], 1 */
  w32((uint32_t)(0x12d22050), (0x1u));
L_12cfaa80:;
  /* 12cfaa80 pop ebp */
  EBP = (pop32());
  /* 12cfaa81 ret  */
  ESPCHK(0x12cfaa60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa90 @ 0x12cfaa90 (664 bytes, 259 insns) [15 switch table(s)] */
void f_12cfaa90(void) {
  FTRACE(0x12cfaa90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfaa90 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfaa91 mov ebp, esp */
  EBP = (ESP);
  /* 12cfaa93 push edi */
  push32((uint32_t)(EDI));
  /* 12cfaa94 push esi */
  push32((uint32_t)(ESI));
  /* 12cfaa95 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfaa98 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cfaa9b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfaa9e mov eax, ecx */
  EAX = (ECX);
  /* 12cfaaa0 mov edx, ecx */
  EDX = (ECX);
  /* 12cfaaa2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfaaa4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfaaa6 jbe 0x12cfaab0 */
  if ((C.cf||C.zf)) goto L_12cfaab0;
  /* 12cfaaa8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfaaaa jb 0x12cfac28 */
  if (C.cf) goto L_12cfac28;
L_12cfaab0:;
  /* 12cfaab0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12cfaab6 jne 0x12cfaacc */
  if (!C.zf) goto L_12cfaacc;
  /* 12cfaab8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12cfaabb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12cfaabe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfaac1 jb 0x12cfaaec */
  if (C.cf) goto L_12cfaaec;
  /* 12cfaac3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12cfaac5 jmp dword ptr [edx*4 + 0x12cfabd8] */
  switch (EDX) {
    case 0: goto L_12cfabe8;
    case 1: goto L_12cfabf0;
    case 2: goto L_12cfabfc;
    case 3: goto L_12cfac10;
    default: x86_unimpl("switch@0x12cfaac5 out of table"); return;
  }
L_12cfaacc:;
  /* 12cfaacc mov eax, edi */
  EAX = (EDI);
  /* 12cfaace mov edx, 3 */
  EDX = (0x3u);
  /* 12cfaad3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfaad6 jb 0x12cfaae4 */
  if (C.cf) goto L_12cfaae4;
  /* 12cfaad8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12cfaadb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfaadd jmp dword ptr [eax*4 + 0x12cfaaf0] */
  switch (EAX) {
    case 1: goto L_12cfab00;
    case 2: goto L_12cfab2c;
    case 3: goto L_12cfab50;
    default: x86_unimpl("switch@0x12cfaadd out of table"); return;
  }
L_12cfaae4:;
  /* 12cfaae4 jmp dword ptr [ecx*4 + 0x12cfabe8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x12cfabe8)))); return;
  /* 12cfaaeb nop  */
  /* nop */
L_12cfaaec:;
  /* 12cfaaec jmp dword ptr [ecx*4 + 0x12cfab6c] */
  switch (ECX) {
    case 0: goto L_12cfabcf;
    case 1: goto L_12cfabbc;
    case 2: goto L_12cfabb4;
    case 3: goto L_12cfabac;
    case 4: goto L_12cfaba4;
    case 5: goto L_12cfab9c;
    case 6: goto L_12cfab94;
    case 7: goto L_12cfab8c;
    default: x86_unimpl("switch@0x12cfaaec out of table"); return;
  }
  /* 12cfaaf3 nop  */
  /* nop */
L_12cfab00:;
  /* 12cfab00 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12cfab02 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12cfab04 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12cfab06 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12cfab09 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12cfab0c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12cfab0f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12cfab12 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12cfab15 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfab18 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfab1b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfab1e jb 0x12cfaaec */
  if (C.cf) goto L_12cfaaec;
  /* 12cfab20 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12cfab22 jmp dword ptr [edx*4 + 0x12cfabd8] */
  switch (EDX) {
    case 0: goto L_12cfabe8;
    case 1: goto L_12cfabf0;
    case 2: goto L_12cfabfc;
    case 3: goto L_12cfac10;
    default: x86_unimpl("switch@0x12cfab22 out of table"); return;
  }
  /* 12cfab29 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12cfab2c:;
  /* 12cfab2c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12cfab2e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12cfab30 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12cfab32 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12cfab35 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12cfab38 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12cfab3b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfab3e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfab41 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfab44 jb 0x12cfaaec */
  if (C.cf) goto L_12cfaaec;
  /* 12cfab46 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12cfab48 jmp dword ptr [edx*4 + 0x12cfabd8] */
  switch (EDX) {
    case 0: goto L_12cfabe8;
    case 1: goto L_12cfabf0;
    case 2: goto L_12cfabfc;
    case 3: goto L_12cfac10;
    default: x86_unimpl("switch@0x12cfab48 out of table"); return;
  }
  /* 12cfab4f nop  */
  /* nop */
L_12cfab50:;
  /* 12cfab50 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12cfab52 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12cfab54 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12cfab56 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12cfab57 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12cfab5a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12cfab5b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfab5e jb 0x12cfaaec */
  if (C.cf) goto L_12cfaaec;
  /* 12cfab60 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12cfab62 jmp dword ptr [edx*4 + 0x12cfabd8] */
  switch (EDX) {
    case 0: goto L_12cfabe8;
    case 1: goto L_12cfabf0;
    case 2: goto L_12cfabfc;
    case 3: goto L_12cfac10;
    default: x86_unimpl("switch@0x12cfab62 out of table"); return;
  }
  /* 12cfab69 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12cfab8c:;
  /* 12cfab8c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 12cfab90 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_12cfab94:;
  /* 12cfab94 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 12cfab98 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_12cfab9c:;
  /* 12cfab9c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 12cfaba0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_12cfaba4:;
  /* 12cfaba4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 12cfaba8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_12cfabac:;
  /* 12cfabac mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 12cfabb0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_12cfabb4:;
  /* 12cfabb4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 12cfabb8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_12cfabbc:;
  /* 12cfabbc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 12cfabc0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 12cfabc4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12cfabcb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfabcd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12cfabcf:;
  /* 12cfabcf jmp dword ptr [edx*4 + 0x12cfabd8] */
  switch (EDX) {
    case 0: goto L_12cfabe8;
    case 1: goto L_12cfabf0;
    case 2: goto L_12cfabfc;
    case 3: goto L_12cfac10;
    default: x86_unimpl("switch@0x12cfabcf out of table"); return;
  }
  /* 12cfabd6 mov edi, edi */
  EDI = (EDI);
L_12cfabe8:;
  /* 12cfabe8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfabeb pop esi */
  ESI = (pop32());
  /* 12cfabec pop edi */
  EDI = (pop32());
  /* 12cfabed leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12cfabee ret  */
  ESPCHK(0x12cfaa90u, _esp0);
  ESP += 4; return;
  /* 12cfabef nop  */
  /* nop */
L_12cfabf0:;
  /* 12cfabf0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12cfabf2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12cfabf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfabf7 pop esi */
  ESI = (pop32());
  /* 12cfabf8 pop edi */
  EDI = (pop32());
  /* 12cfabf9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12cfabfa ret  */
  ESPCHK(0x12cfaa90u, _esp0);
  ESP += 4; return;
  /* 12cfabfb nop  */
  /* nop */
L_12cfabfc:;
  /* 12cfabfc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12cfabfe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12cfac00 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12cfac03 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12cfac06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfac09 pop esi */
  ESI = (pop32());
  /* 12cfac0a pop edi */
  EDI = (pop32());
  /* 12cfac0b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12cfac0c ret  */
  ESPCHK(0x12cfaa90u, _esp0);
  ESP += 4; return;
  /* 12cfac0d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12cfac10:;
  /* 12cfac10 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12cfac12 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12cfac14 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12cfac17 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12cfac1a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12cfac1d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12cfac20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfac23 pop esi */
  ESI = (pop32());
  /* 12cfac24 pop edi */
  EDI = (pop32());
  /* 12cfac25 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12cfac26 ret  */
  ESPCHK(0x12cfaa90u, _esp0);
  ESP += 4; return;
  /* 12cfac27 nop  */
  /* nop */
L_12cfac28:;
  /* 12cfac28 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 12cfac2c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 12cfac30 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12cfac36 jne 0x12cfac5c */
  if (!C.zf) goto L_12cfac5c;
  /* 12cfac38 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12cfac3b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12cfac3e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfac41 jb 0x12cfac50 */
  if (C.cf) goto L_12cfac50;
  /* 12cfac43 std  */
  C.df=1;
  /* 12cfac44 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12cfac46 cld  */
  C.df=0;
  /* 12cfac47 jmp dword ptr [edx*4 + 0x12cfad70] */
  switch (EDX) {
    case 0: goto L_12cfad80;
    case 1: goto L_12cfad88;
    case 2: goto L_12cfad98;
    case 3: goto L_12cfadac;
    default: x86_unimpl("switch@0x12cfac47 out of table"); return;
  }
  /* 12cfac4e mov edi, edi */
  EDI = (EDI);
L_12cfac50:;
  /* 12cfac50 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cfac52 jmp dword ptr [ecx*4 + 0x12cfad20] */
  switch (ECX) {
    case 0: goto L_12cfad67;
    default: x86_unimpl("switch@0x12cfac52 out of table"); return;
  }
  /* 12cfac59 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12cfac5c:;
  /* 12cfac5c mov eax, edi */
  EAX = (EDI);
  /* 12cfac5e mov edx, 3 */
  EDX = (0x3u);
  /* 12cfac63 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfac66 jb 0x12cfac74 */
  if (C.cf) goto L_12cfac74;
  /* 12cfac68 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12cfac6b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfac6d jmp dword ptr [eax*4 + 0x12cfac78] */
  switch (EAX) {
    case 1: goto L_12cfac88;
    case 2: goto L_12cfaca8;
    case 3: goto L_12cfacd0;
    default: x86_unimpl("switch@0x12cfac6d out of table"); return;
  }
L_12cfac74:;
  /* 12cfac74 jmp dword ptr [ecx*4 + 0x12cfad70] */
  switch (ECX) {
    case 0: goto L_12cfad80;
    case 1: goto L_12cfad88;
    case 2: goto L_12cfad98;
    case 3: goto L_12cfadac;
    default: x86_unimpl("switch@0x12cfac74 out of table"); return;
  }
  /* 12cfac7b nop  */
  /* nop */
L_12cfac88:;
  /* 12cfac88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12cfac8b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12cfac8d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12cfac90 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12cfac91 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12cfac94 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12cfac95 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfac98 jb 0x12cfac50 */
  if (C.cf) goto L_12cfac50;
  /* 12cfac9a std  */
  C.df=1;
  /* 12cfac9b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12cfac9d cld  */
  C.df=0;
  /* 12cfac9e jmp dword ptr [edx*4 + 0x12cfad70] */
  switch (EDX) {
    case 0: goto L_12cfad80;
    case 1: goto L_12cfad88;
    case 2: goto L_12cfad98;
    case 3: goto L_12cfadac;
    default: x86_unimpl("switch@0x12cfac9e out of table"); return;
  }
  /* 12cfaca5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12cfaca8:;
  /* 12cfaca8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12cfacab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12cfacad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12cfacb0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12cfacb3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12cfacb6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12cfacb9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfacbc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfacbf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfacc2 jb 0x12cfac50 */
  if (C.cf) goto L_12cfac50;
  /* 12cfacc4 std  */
  C.df=1;
  /* 12cfacc5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12cfacc7 cld  */
  C.df=0;
  /* 12cfacc8 jmp dword ptr [edx*4 + 0x12cfad70] */
  switch (EDX) {
    case 0: goto L_12cfad80;
    case 1: goto L_12cfad88;
    case 2: goto L_12cfad98;
    case 3: goto L_12cfadac;
    default: x86_unimpl("switch@0x12cfacc8 out of table"); return;
  }
  /* 12cfaccf nop  */
  /* nop */
L_12cfacd0:;
  /* 12cfacd0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12cfacd3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12cfacd5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12cfacd8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12cfacdb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12cfacde mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12cface1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12cface4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12cface7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfacea sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfaced cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfacf0 jb 0x12cfac50 */
  if (C.cf) goto L_12cfac50;
  /* 12cfacf6 std  */
  C.df=1;
  /* 12cfacf7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12cfacf9 cld  */
  C.df=0;
  /* 12cfacfa jmp dword ptr [edx*4 + 0x12cfad70] */
  switch (EDX) {
    case 0: goto L_12cfad80;
    case 1: goto L_12cfad88;
    case 2: goto L_12cfad98;
    case 3: goto L_12cfadac;
    default: x86_unimpl("switch@0x12cfacfa out of table"); return;
  }
  /* 12cfad01 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 12cfad04 and al, 0xad */
  { uint32_t _r=(AL)&(0xadu); AL = (_r); fl_logic(_r,8); }
  /* 12cfad06 iretd  */
  x86_unimpl("iretd @ 0x12cfad06");
  /* 12cfad07 adc ch, byte ptr [ebp*4 - 0x52cbed31] */
  { uint32_t _a=(C.c.b.h),_b=(r8((uint32_t)(EBP*4 + -0x52cbed31))),_r=_a+_b+C.cf; C.c.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 12cfad0e iretd  */
  x86_unimpl("iretd @ 0x12cfad0e");
  /* 12cfad0f adc bh, byte ptr [ebp*4 - 0x52bbed31] */
  { uint32_t _a=(C.b.b.h),_b=(r8((uint32_t)(EBP*4 + -0x52bbed31))),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 12cfad16 iretd  */
  x86_unimpl("iretd @ 0x12cfad16");
  /* 12cfad17 adc cl, byte ptr [ebp + ebp*4 - 0x31] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EBP + EBP*4 + -0x31))),_r=_a+_b+C.cf; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12cfad1b adc dl, byte ptr [ebp + ebp*4 - 0x31] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EBP + EBP*4 + -0x31))),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 12cfad24 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 12cfad28 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 12cfad2c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 12cfad30 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 12cfad34 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 12cfad38 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 12cfad3c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 12cfad40 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 12cfad44 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 12cfad48 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 12cfad4c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 12cfad50 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 12cfad54 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 12cfad58 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 12cfad5c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12cfad63 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfad65 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12cfad67:;
  /* 12cfad67 jmp dword ptr [edx*4 + 0x12cfad70] */
  switch (EDX) {
    case 0: goto L_12cfad80;
    case 1: goto L_12cfad88;
    case 2: goto L_12cfad98;
    case 3: goto L_12cfadac;
    default: x86_unimpl("switch@0x12cfad67 out of table"); return;
  }
  /* 12cfad6e mov edi, edi */
  EDI = (EDI);
L_12cfad80:;
  /* 12cfad80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfad83 pop esi */
  ESI = (pop32());
  /* 12cfad84 pop edi */
  EDI = (pop32());
  /* 12cfad85 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12cfad86 ret  */
  ESPCHK(0x12cfaa90u, _esp0);
  ESP += 4; return;
  /* 12cfad87 nop  */
  /* nop */
L_12cfad88:;
  /* 12cfad88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12cfad8b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12cfad8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfad91 pop esi */
  ESI = (pop32());
  /* 12cfad92 pop edi */
  EDI = (pop32());
  /* 12cfad93 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12cfad94 ret  */
  ESPCHK(0x12cfaa90u, _esp0);
  ESP += 4; return;
  /* 12cfad95 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12cfad98:;
  /* 12cfad98 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12cfad9b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12cfad9e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12cfada1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12cfada4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfada7 pop esi */
  ESI = (pop32());
  /* 12cfada8 pop edi */
  EDI = (pop32());
  /* 12cfada9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12cfadaa ret  */
  ESPCHK(0x12cfaa90u, _esp0);
  ESP += 4; return;
  /* 12cfadab nop  */
  /* nop */
L_12cfadac:;
  /* 12cfadac mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12cfadaf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12cfadb2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12cfadb5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12cfadb8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12cfadbb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12cfadbe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfadc1 pop esi */
  ESI = (pop32());
  /* 12cfadc2 pop edi */
  EDI = (pop32());
  /* 12cfadc3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12cfadc4 ret  */
  ESPCHK(0x12cfaa90u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x12cfadd0 (104 bytes, 43 insns) */
void f_12cfadd0(void) {
  FTRACE(0x12cfadd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfadd0 push ebx */
  push32((uint32_t)(EBX));
  /* 12cfadd1 push esi */
  push32((uint32_t)(ESI));
  /* 12cfadd2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 12cfadd6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfadd8 jne 0x12cfadf2 */
  if (!C.zf) goto L_12cfadf2;
  /* 12cfadda mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 12cfadde mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12cfade2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cfade4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12cfade6 mov ebx, eax */
  EBX = (EAX);
  /* 12cfade8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 12cfadec div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12cfadee mov edx, ebx */
  EDX = (EBX);
  /* 12cfadf0 jmp 0x12cfae33 */
  goto L_12cfae33;
L_12cfadf2:;
  /* 12cfadf2 mov ecx, eax */
  ECX = (EAX);
  /* 12cfadf4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 12cfadf8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 12cfadfc mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_12cfae00:;
  /* 12cfae00 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12cfae02 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 12cfae04 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12cfae06 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 12cfae08 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfae0a jne 0x12cfae00 */
  if (!C.zf) goto L_12cfae00;
  /* 12cfae0c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12cfae0e mov esi, eax */
  ESI = (EAX);
  /* 12cfae10 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12cfae14 mov ecx, eax */
  ECX = (EAX);
  /* 12cfae16 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 12cfae1a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12cfae1c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfae1e jb 0x12cfae2e */
  if (C.cf) goto L_12cfae2e;
  /* 12cfae20 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfae24 ja 0x12cfae2e */
  if ((!C.cf&&!C.zf)) goto L_12cfae2e;
  /* 12cfae26 jb 0x12cfae2f */
  if (C.cf) goto L_12cfae2f;
  /* 12cfae28 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfae2c jbe 0x12cfae2f */
  if ((C.cf||C.zf)) goto L_12cfae2f;
L_12cfae2e:;
  /* 12cfae2e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_12cfae2f:;
  /* 12cfae2f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cfae31 mov eax, esi */
  EAX = (ESI);
L_12cfae33:;
  /* 12cfae33 pop esi */
  ESI = (pop32());
  /* 12cfae34 pop ebx */
  EBX = (pop32());
  /* 12cfae35 ret 0x10 */
  ESPCHK(0x12cfadd0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x12cfae40 (117 bytes, 44 insns) */
void f_12cfae40(void) {
  FTRACE(0x12cfae40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfae40 push ebx */
  push32((uint32_t)(EBX));
  /* 12cfae41 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 12cfae45 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfae47 jne 0x12cfae61 */
  if (!C.zf) goto L_12cfae61;
  /* 12cfae49 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12cfae4d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 12cfae51 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cfae53 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12cfae55 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12cfae59 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12cfae5b mov eax, edx */
  EAX = (EDX);
  /* 12cfae5d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cfae5f jmp 0x12cfaeb1 */
  goto L_12cfaeb1;
L_12cfae61:;
  /* 12cfae61 mov ecx, eax */
  ECX = (EAX);
  /* 12cfae63 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 12cfae67 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 12cfae6b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_12cfae6f:;
  /* 12cfae6f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12cfae71 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 12cfae73 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12cfae75 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 12cfae77 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfae79 jne 0x12cfae6f */
  if (!C.zf) goto L_12cfae6f;
  /* 12cfae7b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12cfae7d mov ecx, eax */
  ECX = (EAX);
  /* 12cfae7f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12cfae83 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 12cfae84 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12cfae88 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfae8a jb 0x12cfae9a */
  if (C.cf) goto L_12cfae9a;
  /* 12cfae8c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfae90 ja 0x12cfae9a */
  if ((!C.cf&&!C.zf)) goto L_12cfae9a;
  /* 12cfae92 jb 0x12cfaea2 */
  if (C.cf) goto L_12cfaea2;
  /* 12cfae94 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfae98 jbe 0x12cfaea2 */
  if ((C.cf||C.zf)) goto L_12cfaea2;
L_12cfae9a:;
  /* 12cfae9a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfae9e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12cfaea2:;
  /* 12cfaea2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfaea6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfaeaa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cfaeac neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cfaeae sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12cfaeb1:;
  /* 12cfaeb1 pop ebx */
  EBX = (pop32());
  /* 12cfaeb2 ret 0x10 */
  ESPCHK(0x12cfae40u, _esp0);
  ESP += 20; return;
}

/* FUN_1000aec0 @ 0x12cfaec0 (628 bytes, 214 insns) */
void f_12cfaec0(void) {
  FTRACE(0x12cfaec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfaec0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfaec1 mov ebp, esp */
  EBP = (ESP);
  /* 12cfaec3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfaec6 push ebx */
  push32((uint32_t)(EBX));
  /* 12cfaec7 push esi */
  push32((uint32_t)(ESI));
  /* 12cfaec8 push edi */
  push32((uint32_t)(EDI));
L_12cfaec9:;
  /* 12cfaec9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfaecd jne 0x12cfaeed */
  if (!C.zf) goto L_12cfaeed;
  /* 12cfaecf push 0x12d1c2f4 */
  push32((uint32_t)(0x12d1c2f4u));
  /* 12cfaed4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfaed6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 12cfaed8 push 0x12d1c2e8 */
  push32((uint32_t)(0x12d1c2e8u));
  /* 12cfaedd push 2 */
  push32((uint32_t)(0x2u));
  /* 12cfaedf call 0x12cf3270 */
  push32(0x12cfaee4u); f_12cf3270();
  /* 12cfaee4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfaee7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfaeea jne 0x12cfaeed */
  if (!C.zf) goto L_12cfaeed;
  /* 12cfaeec int3  */
  x86_unimpl("int3 @ 0x12cfaeec");
L_12cfaeed:;
  /* 12cfaeed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfaeef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfaef1 jne 0x12cfaec9 */
  if (!C.zf) goto L_12cfaec9;
  /* 12cfaef3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfaef6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cfaef9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfaefc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12cfaeff mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12cfaf02 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfaf05 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12cfaf08 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 12cfaf0e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cfaf10 je 0x12cfaf1f */
  if (C.zf) goto L_12cfaf1f;
  /* 12cfaf12 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfaf15 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12cfaf18 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 12cfaf1b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cfaf1d je 0x12cfaf35 */
  if (C.zf) goto L_12cfaf35;
L_12cfaf1f:;
  /* 12cfaf1f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfaf22 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12cfaf25 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12cfaf27 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfaf2a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 12cfaf2d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cfaf30 jmp 0x12cfb12d */
  goto L_12cfb12d;
L_12cfaf35:;
  /* 12cfaf35 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfaf38 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12cfaf3b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12cfaf3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfaf40 je 0x12cfaf8c */
  if (C.zf) goto L_12cfaf8c;
  /* 12cfaf42 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfaf45 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12cfaf4c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfaf4f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12cfaf52 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 12cfaf55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfaf57 je 0x12cfaf75 */
  if (C.zf) goto L_12cfaf75;
  /* 12cfaf59 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfaf5c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfaf5f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12cfaf62 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12cfaf64 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfaf67 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12cfaf6a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 12cfaf6d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfaf70 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12cfaf73 jmp 0x12cfaf8c */
  goto L_12cfaf8c;
L_12cfaf75:;
  /* 12cfaf75 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfaf78 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12cfaf7b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 12cfaf7e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfaf81 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12cfaf84 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cfaf87 jmp 0x12cfb12d */
  goto L_12cfb12d;
L_12cfaf8c:;
  /* 12cfaf8c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfaf8f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12cfaf92 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12cfaf95 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfaf98 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12cfaf9b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfaf9e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12cfafa1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 12cfafa4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfafa7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12cfafaa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfafad mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12cfafb4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cfafbb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfafbe mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12cfafc1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfafc4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12cfafc7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 12cfafcd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cfafcf jne 0x12cfafff */
  if (!C.zf) goto L_12cfafff;
  /* 12cfafd1 cmp dword ptr [ebp - 8], 0x12d1f140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12d1f140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfafd8 je 0x12cfafe3 */
  if (C.zf) goto L_12cfafe3;
  /* 12cfafda cmp dword ptr [ebp - 8], 0x12d1f160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12d1f160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfafe1 jne 0x12cfaff3 */
  if (!C.zf) goto L_12cfaff3;
L_12cfafe3:;
  /* 12cfafe3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cfafe6 push edx */
  push32((uint32_t)(EDX));
  /* 12cfafe7 call 0x12cfce30 */
  push32(0x12cfafecu); f_12cfce30();
  /* 12cfafec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfafef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfaff1 jne 0x12cfafff */
  if (!C.zf) goto L_12cfafff;
L_12cfaff3:;
  /* 12cfaff3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfaff6 push eax */
  push32((uint32_t)(EAX));
  /* 12cfaff7 call 0x12cfcd60 */
  push32(0x12cfaffcu); f_12cfcd60();
  /* 12cfaffc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cfafff:;
  /* 12cfafff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfb002 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12cfb005 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 12cfb00b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cfb00d je 0x12cfb0eb */
  if (C.zf) goto L_12cfb0eb;
L_12cfb013:;
  /* 12cfb013 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfb016 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfb019 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 12cfb01b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfb01e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cfb020 jge 0x12cfb043 */
  if ((C.sf==C.of)) goto L_12cfb043;
  /* 12cfb022 push 0x12d1c2a8 */
  push32((uint32_t)(0x12d1c2a8u));
  /* 12cfb027 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfb029 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 12cfb02e push 0x12d1c2e8 */
  push32((uint32_t)(0x12d1c2e8u));
  /* 12cfb033 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cfb035 call 0x12cf3270 */
  push32(0x12cfb03au); f_12cf3270();
  /* 12cfb03a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfb03d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfb040 jne 0x12cfb043 */
  if (!C.zf) goto L_12cfb043;
  /* 12cfb042 int3  */
  x86_unimpl("int3 @ 0x12cfb042");
L_12cfb043:;
  /* 12cfb043 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfb045 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfb047 jne 0x12cfb013 */
  if (!C.zf) goto L_12cfb013;
  /* 12cfb049 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfb04c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfb04f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12cfb051 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfb054 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cfb057 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfb05a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12cfb05d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfb060 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfb063 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12cfb065 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfb068 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12cfb06b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfb06e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfb071 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12cfb074 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfb078 jle 0x12cfb096 */
  if ((C.zf||C.sf!=C.of)) goto L_12cfb096;
  /* 12cfb07a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfb07d push ecx */
  push32((uint32_t)(ECX));
  /* 12cfb07e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfb081 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12cfb084 push eax */
  push32((uint32_t)(EAX));
  /* 12cfb085 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cfb088 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfb089 call 0x12cfca50 */
  push32(0x12cfb08eu); f_12cfca50();
  /* 12cfb08e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfb091 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cfb094 jmp 0x12cfb0de */
  goto L_12cfb0de;
L_12cfb096:;
  /* 12cfb096 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfb09a je 0x12cfb0b9 */
  if (C.zf) goto L_12cfb0b9;
  /* 12cfb09c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cfb09f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12cfb0a2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cfb0a5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12cfb0a8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfb0ab mov ecx, dword ptr [edx*4 + 0x12d21f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12d21f00)));
  /* 12cfb0b2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfb0b4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12cfb0b7 jmp 0x12cfb0c0 */
  goto L_12cfb0c0;
L_12cfb0b9:;
  /* 12cfb0b9 mov dword ptr [ebp - 0x14], 0x12d1ea60 */
  w32((uint32_t)(EBP + -0x14), (0x12d1ea60u));
L_12cfb0c0:;
  /* 12cfb0c0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cfb0c3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 12cfb0c7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12cfb0ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfb0cc je 0x12cfb0de */
  if (C.zf) goto L_12cfb0de;
  /* 12cfb0ce push 2 */
  push32((uint32_t)(0x2u));
  /* 12cfb0d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfb0d2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cfb0d5 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfb0d6 call 0x12cfc900 */
  push32(0x12cfb0dbu); f_12cfc900();
  /* 12cfb0db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cfb0de:;
  /* 12cfb0de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfb0e1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12cfb0e4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12cfb0e7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12cfb0e9 jmp 0x12cfb109 */
  goto L_12cfb109;
L_12cfb0eb:;
  /* 12cfb0eb mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12cfb0f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfb0f5 push edx */
  push32((uint32_t)(EDX));
  /* 12cfb0f6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12cfb0f9 push eax */
  push32((uint32_t)(EAX));
  /* 12cfb0fa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cfb0fd push ecx */
  push32((uint32_t)(ECX));
  /* 12cfb0fe call 0x12cfca50 */
  push32(0x12cfb103u); f_12cfca50();
  /* 12cfb103 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfb106 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12cfb109:;
  /* 12cfb109 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfb10c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfb10f je 0x12cfb125 */
  if (C.zf) goto L_12cfb125;
  /* 12cfb111 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfb114 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12cfb117 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12cfb11a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfb11d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12cfb120 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cfb123 jmp 0x12cfb12d */
  goto L_12cfb12d;
L_12cfb125:;
  /* 12cfb125 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfb128 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_12cfb12d:;
  /* 12cfb12d pop edi */
  EDI = (pop32());
  /* 12cfb12e pop esi */
  ESI = (pop32());
  /* 12cfb12f pop ebx */
  EBX = (pop32());
  /* 12cfb130 mov esp, ebp */
  ESP = (EBP);
  /* 12cfb132 pop ebp */
  EBP = (pop32());
  /* 12cfb133 ret  */
  ESPCHK(0x12cfaec0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b140 @ 0x12cfb140 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_12cfb140(void) {
  FTRACE(0x12cfb140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfb140 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfb141 mov ebp, esp */
  EBP = (ESP);
  /* 12cfb143 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfb149 push ebx */
  push32((uint32_t)(EBX));
  /* 12cfb14a push esi */
  push32((uint32_t)(ESI));
  /* 12cfb14b push edi */
  push32((uint32_t)(EDI));
  /* 12cfb14c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12cfb153 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 12cfb15d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12cfb164:;
  /* 12cfb164 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfb167 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12cfb169 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 12cfb16c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12cfb170 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfb173 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfb176 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12cfb179 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cfb17b je 0x12cfbd57 */
  if (C.zf) goto L_12cfbd57;
  /* 12cfb181 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfb188 jl 0x12cfbd57 */
  if ((C.sf!=C.of)) goto L_12cfbd57;
  /* 12cfb18e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12cfb192 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfb195 jl 0x12cfb1b6 */
  if ((C.sf!=C.of)) goto L_12cfb1b6;
  /* 12cfb197 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12cfb19b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfb19e jg 0x12cfb1b6 */
  if ((!C.zf&&C.sf==C.of)) goto L_12cfb1b6;
  /* 12cfb1a0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12cfb1a4 movsx ecx, byte ptr [eax + 0x12d1c2e0] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x12d1c2e0))));
  /* 12cfb1ab and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 12cfb1ae mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 12cfb1b4 jmp 0x12cfb1c0 */
  goto L_12cfb1c0;
L_12cfb1b6:;
  /* 12cfb1b6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_12cfb1c0:;
  /* 12cfb1c0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 12cfb1c6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12cfb1c9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfb1cc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cfb1cf movsx edx, byte ptr [ecx + eax*8 + 0x12d1c300] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x12d1c300))));
  /* 12cfb1d7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12cfb1da mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12cfb1dd mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cfb1e0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 12cfb1e6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfb1ed ja 0x12cfbd52 */
  if ((!C.cf&&!C.zf)) goto L_12cfbd52;
  /* 12cfb1f3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 12cfb1f9 jmp dword ptr [ecx*4 + 0x12cfbd64] */
  switch (ECX) {
    case 0: goto L_12cfb200;
    case 1: goto L_12cfb29a;
    case 2: goto L_12cfb2dc;
    case 3: goto L_12cfb34b;
    case 4: goto L_12cfb3a3;
    case 5: goto L_12cfb3b2;
    case 6: goto L_12cfb3fe;
    case 7: goto L_12cfb491;
    case 8: goto L_12cfb328;
    case 9: goto L_12cfb333;
    case 10: goto L_12cfb31e;
    case 11: goto L_12cfb313;
    case 12: goto L_12cfb33e;
    case 13: goto L_12cfb346;
    default: x86_unimpl("switch@0x12cfb1f9 out of table"); return;
  }
L_12cfb200:;
  /* 12cfb200 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12cfb207 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cfb20a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cfb210 mov eax, dword ptr [0x12d1ec98] */
  EAX = (r32((uint32_t)(0x12d1ec98)));
  /* 12cfb215 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfb217 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12cfb21b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12cfb221 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cfb223 je 0x12cfb27d */
  if (C.zf) goto L_12cfb27d;
  /* 12cfb225 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 12cfb22b push edx */
  push32((uint32_t)(EDX));
  /* 12cfb22c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfb22f push eax */
  push32((uint32_t)(EAX));
  /* 12cfb230 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12cfb234 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfb235 call 0x12cfbe70 */
  push32(0x12cfb23au); f_12cfbe70();
  /* 12cfb23a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfb23d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfb240 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cfb242 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 12cfb245 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfb248 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfb24b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12cfb24e:;
  /* 12cfb24e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12cfb252 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cfb254 jne 0x12cfb277 */
  if (!C.zf) goto L_12cfb277;
  /* 12cfb256 push 0x12d1c380 */
  push32((uint32_t)(0x12d1c380u));
  /* 12cfb25b push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfb25d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 12cfb262 push 0x12d1c374 */
  push32((uint32_t)(0x12d1c374u));
  /* 12cfb267 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cfb269 call 0x12cf3270 */
  push32(0x12cfb26eu); f_12cf3270();
  /* 12cfb26e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfb271 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfb274 jne 0x12cfb277 */
  if (!C.zf) goto L_12cfb277;
  /* 12cfb276 int3  */
  x86_unimpl("int3 @ 0x12cfb276");
L_12cfb277:;
  /* 12cfb277 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfb279 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfb27b jne 0x12cfb24e */
  if (!C.zf) goto L_12cfb24e;
L_12cfb27d:;
  /* 12cfb27d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 12cfb283 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfb284 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfb287 push edx */
  push32((uint32_t)(EDX));
  /* 12cfb288 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12cfb28c push eax */
  push32((uint32_t)(EAX));
  /* 12cfb28d call 0x12cfbe70 */
  push32(0x12cfb292u); f_12cfbe70();
  /* 12cfb292 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfb295 jmp 0x12cfbd52 */
  goto L_12cfbd52;
L_12cfb29a:;
  /* 12cfb29a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12cfb2a1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfb2a4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 12cfb2aa mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 12cfb2b0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 12cfb2b6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 12cfb2bc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12cfb2bf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cfb2c6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 12cfb2d0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12cfb2d7 jmp 0x12cfbd52 */
  goto L_12cfbd52;
L_12cfb2dc:;
  /* 12cfb2dc movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12cfb2e0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 12cfb2e6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 12cfb2ec sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfb2ef mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 12cfb2f5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfb2fc ja 0x12cfb346 */
  if ((!C.cf&&!C.zf)) goto L_12cfb346;
  /* 12cfb2fe mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 12cfb304 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfb306 mov al, byte ptr [ecx + 0x12cfbd9c] */
  AL = (r8((uint32_t)(ECX + 0x12cfbd9c)));
  /* 12cfb30c jmp dword ptr [eax*4 + 0x12cfbd84] */
  switch (EAX) {
    case 0: goto L_12cfb328;
    case 1: goto L_12cfb333;
    case 2: goto L_12cfb31e;
    case 3: goto L_12cfb313;
    case 4: goto L_12cfb33e;
    case 5: goto L_12cfb346;
    default: x86_unimpl("switch@0x12cfb30c out of table"); return;
  }
L_12cfb313:;
  /* 12cfb313 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfb316 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12cfb319 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cfb31c jmp 0x12cfb346 */
  goto L_12cfb346;
L_12cfb31e:;
  /* 12cfb31e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfb321 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12cfb323 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cfb326 jmp 0x12cfb346 */
  goto L_12cfb346;
L_12cfb328:;
  /* 12cfb328 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfb32b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12cfb32e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cfb331 jmp 0x12cfb346 */
  goto L_12cfb346;
L_12cfb333:;
  /* 12cfb333 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfb336 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 12cfb339 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cfb33c jmp 0x12cfb346 */
  goto L_12cfb346;
L_12cfb33e:;
  /* 12cfb33e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfb341 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 12cfb343 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cfb346:;
  /* 12cfb346 jmp 0x12cfbd52 */
  goto L_12cfbd52;
L_12cfb34b:;
  /* 12cfb34b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12cfb34f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfb352 jne 0x12cfb387 */
  if (!C.zf) goto L_12cfb387;
  /* 12cfb354 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12cfb357 push edx */
  push32((uint32_t)(EDX));
  /* 12cfb358 call 0x12cfbf80 */
  push32(0x12cfb35du); f_12cfbf80();
  /* 12cfb35d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfb360 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 12cfb366 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfb36d jge 0x12cfb385 */
  if ((C.sf==C.of)) goto L_12cfb385;
  /* 12cfb36f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfb372 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12cfb374 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cfb377 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 12cfb37d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cfb37f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_12cfb385:;
  /* 12cfb385 jmp 0x12cfb39e */
  goto L_12cfb39e;
L_12cfb387:;
  /* 12cfb387 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 12cfb38d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfb390 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12cfb394 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 12cfb398 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_12cfb39e:;
  /* 12cfb39e jmp 0x12cfbd52 */
  goto L_12cfbd52;
L_12cfb3a3:;
  /* 12cfb3a3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 12cfb3ad jmp 0x12cfbd52 */
  goto L_12cfbd52;
L_12cfb3b2:;
  /* 12cfb3b2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12cfb3b6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfb3b9 jne 0x12cfb3e2 */
  if (!C.zf) goto L_12cfb3e2;
  /* 12cfb3bb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12cfb3be push eax */
  push32((uint32_t)(EAX));
  /* 12cfb3bf call 0x12cfbf80 */
  push32(0x12cfb3c4u); f_12cfbf80();
  /* 12cfb3c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfb3c7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 12cfb3cd cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfb3d4 jge 0x12cfb3e0 */
  if ((C.sf==C.of)) goto L_12cfb3e0;
  /* 12cfb3d6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_12cfb3e0:;
  /* 12cfb3e0 jmp 0x12cfb3f9 */
  goto L_12cfb3f9;
L_12cfb3e2:;
  /* 12cfb3e2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 12cfb3e8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfb3eb movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12cfb3ef lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12cfb3f3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_12cfb3f9:;
  /* 12cfb3f9 jmp 0x12cfbd52 */
  goto L_12cfbd52;
L_12cfb3fe:;
  /* 12cfb3fe movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12cfb402 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 12cfb408 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 12cfb40e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfb411 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 12cfb417 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfb41e ja 0x12cfb48c */
  if ((!C.cf&&!C.zf)) goto L_12cfb48c;
  /* 12cfb420 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 12cfb426 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfb428 mov al, byte ptr [ecx + 0x12cfbdc1] */
  AL = (r8((uint32_t)(ECX + 0x12cfbdc1)));
  /* 12cfb42e jmp dword ptr [eax*4 + 0x12cfbdad] */
  switch (EAX) {
    case 0: goto L_12cfb440;
    case 1: goto L_12cfb479;
    case 2: goto L_12cfb435;
    case 3: goto L_12cfb483;
    case 4: goto L_12cfb48c;
    default: x86_unimpl("switch@0x12cfb42e out of table"); return;
  }
L_12cfb435:;
  /* 12cfb435 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfb438 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 12cfb43b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cfb43e jmp 0x12cfb48c */
  goto L_12cfb48c;
L_12cfb440:;
  /* 12cfb440 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfb443 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cfb446 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfb449 jne 0x12cfb46b */
  if (!C.zf) goto L_12cfb46b;
  /* 12cfb44b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfb44e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12cfb452 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfb455 jne 0x12cfb46b */
  if (!C.zf) goto L_12cfb46b;
  /* 12cfb457 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfb45a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfb45d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12cfb460 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfb463 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12cfb466 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cfb469 jmp 0x12cfb477 */
  goto L_12cfb477;
L_12cfb46b:;
  /* 12cfb46b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12cfb472 jmp 0x12cfb200 */
  goto L_12cfb200;
L_12cfb477:;
  /* 12cfb477 jmp 0x12cfb48c */
  goto L_12cfb48c;
L_12cfb479:;
  /* 12cfb479 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfb47c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12cfb47e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cfb481 jmp 0x12cfb48c */
  goto L_12cfb48c;
L_12cfb483:;
  /* 12cfb483 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfb486 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12cfb489 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12cfb48c:;
  /* 12cfb48c jmp 0x12cfbd52 */
  goto L_12cfbd52;
L_12cfb491:;
  /* 12cfb491 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12cfb495 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 12cfb49b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 12cfb4a1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfb4a4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 12cfb4aa cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfb4b1 ja 0x12cfbb77 */
  if ((!C.cf&&!C.zf)) goto L_12cfbb77;
  /* 12cfb4b7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 12cfb4bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfb4bf mov cl, byte ptr [edx + 0x12cfbe2c] */
  CL = (r8((uint32_t)(EDX + 0x12cfbe2c)));
  /* 12cfb4c5 jmp dword ptr [ecx*4 + 0x12cfbdf0] */
  switch (ECX) {
    case 0: goto L_12cfb4cc;
    case 1: goto L_12cfb760;
    case 2: goto L_12cfb5f0;
    case 3: goto L_12cfb899;
    case 4: goto L_12cfb55b;
    case 5: goto L_12cfb4e1;
    case 6: goto L_12cfb86b;
    case 7: goto L_12cfb770;
    case 8: goto L_12cfb715;
    case 9: goto L_12cfb8e5;
    case 10: goto L_12cfb88f;
    case 11: goto L_12cfb606;
    case 12: goto L_12cfb883;
    case 13: goto L_12cfb8a5;
    case 14: goto L_12cfbb77;
    default: x86_unimpl("switch@0x12cfb4c5 out of table"); return;
  }
L_12cfb4cc:;
  /* 12cfb4cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfb4cf and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 12cfb4d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfb4d6 jne 0x12cfb4e1 */
  if (!C.zf) goto L_12cfb4e1;
  /* 12cfb4d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfb4db or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12cfb4de mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12cfb4e1:;
  /* 12cfb4e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfb4e4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 12cfb4ea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cfb4ec je 0x12cfb527 */
  if (C.zf) goto L_12cfb527;
  /* 12cfb4ee lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12cfb4f1 push eax */
  push32((uint32_t)(EAX));
  /* 12cfb4f2 call 0x12cfbfc0 */
  push32(0x12cfb4f7u); f_12cfbfc0();
  /* 12cfb4f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfb4fa mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 12cfb4fe mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 12cfb502 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfb503 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 12cfb509 push edx */
  push32((uint32_t)(EDX));
  /* 12cfb50a call 0x12cfd0a0 */
  push32(0x12cfb50fu); f_12cfd0a0();
  /* 12cfb50f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfb512 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12cfb515 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfb519 jge 0x12cfb525 */
  if ((C.sf==C.of)) goto L_12cfb525;
  /* 12cfb51b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_12cfb525:;
  /* 12cfb525 jmp 0x12cfb54d */
  goto L_12cfb54d;
L_12cfb527:;
  /* 12cfb527 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12cfb52a push eax */
  push32((uint32_t)(EAX));
  /* 12cfb52b call 0x12cfbf80 */
  push32(0x12cfb530u); f_12cfbf80();
  /* 12cfb530 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfb533 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 12cfb53a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 12cfb540 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 12cfb546 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_12cfb54d:;
  /* 12cfb54d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 12cfb553 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12cfb556 jmp 0x12cfbb77 */
  goto L_12cfbb77;
L_12cfb55b:;
  /* 12cfb55b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12cfb55e push eax */
  push32((uint32_t)(EAX));
  /* 12cfb55f call 0x12cfbf80 */
  push32(0x12cfb564u); f_12cfbf80();
  /* 12cfb564 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfb567 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 12cfb56d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfb574 je 0x12cfb582 */
  if (C.zf) goto L_12cfb582;
  /* 12cfb576 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12cfb57c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfb580 jne 0x12cfb59c */
  if (!C.zf) goto L_12cfb59c;
L_12cfb582:;
  /* 12cfb582 mov edx, dword ptr [0x12d1efb0] */
  EDX = (r32((uint32_t)(0x12d1efb0)));
  /* 12cfb588 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12cfb58b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cfb58e push eax */
  push32((uint32_t)(EAX));
  /* 12cfb58f call 0x12cf6fe0 */
  push32(0x12cfb594u); f_12cf6fe0();
  /* 12cfb594 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfb597 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12cfb59a jmp 0x12cfb5eb */
  goto L_12cfb5eb;
L_12cfb59c:;
  /* 12cfb59c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfb59f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 12cfb5a5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cfb5a7 je 0x12cfb5cc */
  if (C.zf) goto L_12cfb5cc;
  /* 12cfb5a9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12cfb5af mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12cfb5b2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12cfb5b5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12cfb5bb movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 12cfb5be shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12cfb5c0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12cfb5c3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 12cfb5ca jmp 0x12cfb5eb */
  goto L_12cfb5eb;
L_12cfb5cc:;
  /* 12cfb5cc mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12cfb5d3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12cfb5d9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cfb5dc mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12cfb5df mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12cfb5e5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 12cfb5e8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12cfb5eb:;
  /* 12cfb5eb jmp 0x12cfbb77 */
  goto L_12cfbb77;
L_12cfb5f0:;
  /* 12cfb5f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfb5f3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 12cfb5f9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cfb5fb jne 0x12cfb606 */
  if (!C.zf) goto L_12cfb606;
  /* 12cfb5fd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfb600 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12cfb603 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12cfb606:;
  /* 12cfb606 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfb60d jne 0x12cfb61b */
  if (!C.zf) goto L_12cfb61b;
  /* 12cfb60f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 12cfb619 jmp 0x12cfb627 */
  goto L_12cfb627;
L_12cfb61b:;
  /* 12cfb61b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 12cfb621 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_12cfb627:;
  /* 12cfb627 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 12cfb62d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 12cfb633 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12cfb636 push edx */
  push32((uint32_t)(EDX));
  /* 12cfb637 call 0x12cfbf80 */
  push32(0x12cfb63cu); f_12cfbf80();
  /* 12cfb63c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfb63f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12cfb642 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfb645 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 12cfb64a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfb64c je 0x12cfb6b6 */
  if (C.zf) goto L_12cfb6b6;
  /* 12cfb64e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfb652 jne 0x12cfb65d */
  if (!C.zf) goto L_12cfb65d;
  /* 12cfb654 mov ecx, dword ptr [0x12d1efb4] */
  ECX = (r32((uint32_t)(0x12d1efb4)));
  /* 12cfb65a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12cfb65d:;
  /* 12cfb65d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 12cfb664 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cfb667 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_12cfb66d:;
  /* 12cfb66d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 12cfb673 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 12cfb679 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfb67c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 12cfb682 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfb684 je 0x12cfb6a6 */
  if (C.zf) goto L_12cfb6a6;
  /* 12cfb686 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 12cfb68c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfb68e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 12cfb691 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfb693 je 0x12cfb6a6 */
  if (C.zf) goto L_12cfb6a6;
  /* 12cfb695 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 12cfb69b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfb69e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 12cfb6a4 jmp 0x12cfb66d */
  goto L_12cfb66d;
L_12cfb6a6:;
  /* 12cfb6a6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 12cfb6ac sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfb6af sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12cfb6b1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12cfb6b4 jmp 0x12cfb710 */
  goto L_12cfb710;
L_12cfb6b6:;
  /* 12cfb6b6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfb6ba jne 0x12cfb6c4 */
  if (!C.zf) goto L_12cfb6c4;
  /* 12cfb6bc mov eax, dword ptr [0x12d1efb0] */
  EAX = (r32((uint32_t)(0x12d1efb0)));
  /* 12cfb6c1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_12cfb6c4:;
  /* 12cfb6c4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cfb6c7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_12cfb6cd:;
  /* 12cfb6cd mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 12cfb6d3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 12cfb6d9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfb6dc mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 12cfb6e2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cfb6e4 je 0x12cfb704 */
  if (C.zf) goto L_12cfb704;
  /* 12cfb6e6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 12cfb6ec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cfb6ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cfb6f1 je 0x12cfb704 */
  if (C.zf) goto L_12cfb704;
  /* 12cfb6f3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 12cfb6f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfb6fc mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 12cfb702 jmp 0x12cfb6cd */
  goto L_12cfb6cd;
L_12cfb704:;
  /* 12cfb704 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 12cfb70a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfb70d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_12cfb710:;
  /* 12cfb710 jmp 0x12cfbb77 */
  goto L_12cfbb77;
L_12cfb715:;
  /* 12cfb715 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12cfb718 push edx */
  push32((uint32_t)(EDX));
  /* 12cfb719 call 0x12cfbf80 */
  push32(0x12cfb71eu); f_12cfbf80();
  /* 12cfb71e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfb721 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 12cfb727 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfb72a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12cfb72d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfb72f je 0x12cfb743 */
  if (C.zf) goto L_12cfb743;
  /* 12cfb731 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 12cfb737 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 12cfb73e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 12cfb741 jmp 0x12cfb751 */
  goto L_12cfb751;
L_12cfb743:;
  /* 12cfb743 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 12cfb749 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 12cfb74f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_12cfb751:;
  /* 12cfb751 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 12cfb75b jmp 0x12cfbb77 */
  goto L_12cfbb77;
L_12cfb760:;
  /* 12cfb760 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12cfb767 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 12cfb76a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 12cfb76d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_12cfb770:;
  /* 12cfb770 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfb773 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12cfb775 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cfb778 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 12cfb77e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12cfb781 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfb788 jge 0x12cfb796 */
  if ((C.sf==C.of)) goto L_12cfb796;
  /* 12cfb78a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 12cfb794 jmp 0x12cfb7b2 */
  goto L_12cfb7b2;
L_12cfb796:;
  /* 12cfb796 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfb79d jne 0x12cfb7b2 */
  if (!C.zf) goto L_12cfb7b2;
  /* 12cfb79f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12cfb7a3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfb7a6 jne 0x12cfb7b2 */
  if (!C.zf) goto L_12cfb7b2;
  /* 12cfb7a8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_12cfb7b2:;
  /* 12cfb7b2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cfb7b5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfb7b8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12cfb7bb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cfb7be sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfb7c1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cfb7c3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cfb7c6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 12cfb7cc mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 12cfb7d2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfb7d5 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfb7d6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 12cfb7dc push edx */
  push32((uint32_t)(EDX));
  /* 12cfb7dd movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12cfb7e1 push eax */
  push32((uint32_t)(EAX));
  /* 12cfb7e2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cfb7e5 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfb7e6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 12cfb7ec push edx */
  push32((uint32_t)(EDX));
  /* 12cfb7ed call dword ptr [0x12d1f3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d1f3a0))), 0x12cfb7f3u);
  /* 12cfb7f3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfb7f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfb7f9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12cfb7fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfb800 je 0x12cfb818 */
  if (C.zf) goto L_12cfb818;
  /* 12cfb802 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfb809 jne 0x12cfb818 */
  if (!C.zf) goto L_12cfb818;
  /* 12cfb80b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cfb80e push ecx */
  push32((uint32_t)(ECX));
  /* 12cfb80f call dword ptr [0x12d1f3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d1f3ac))), 0x12cfb815u);
  /* 12cfb815 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cfb818:;
  /* 12cfb818 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12cfb81c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfb81f jne 0x12cfb83a */
  if (!C.zf) goto L_12cfb83a;
  /* 12cfb821 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfb824 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12cfb829 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfb82b jne 0x12cfb83a */
  if (!C.zf) goto L_12cfb83a;
  /* 12cfb82d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cfb830 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfb831 call dword ptr [0x12d1f3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d1f3a4))), 0x12cfb837u);
  /* 12cfb837 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cfb83a:;
  /* 12cfb83a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cfb83d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12cfb840 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfb843 jne 0x12cfb857 */
  if (!C.zf) goto L_12cfb857;
  /* 12cfb845 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfb848 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12cfb84b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cfb84e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cfb851 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfb854 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12cfb857:;
  /* 12cfb857 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cfb85a push eax */
  push32((uint32_t)(EAX));
  /* 12cfb85b call 0x12cf6fe0 */
  push32(0x12cfb860u); f_12cf6fe0();
  /* 12cfb860 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfb863 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12cfb866 jmp 0x12cfbb77 */
  goto L_12cfbb77;
L_12cfb86b:;
  /* 12cfb86b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfb86e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 12cfb871 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cfb874 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 12cfb87e jmp 0x12cfb905 */
  goto L_12cfb905;
L_12cfb883:;
  /* 12cfb883 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 12cfb88d jmp 0x12cfb905 */
  goto L_12cfb905;
L_12cfb88f:;
  /* 12cfb88f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_12cfb899:;
  /* 12cfb899 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 12cfb8a3 jmp 0x12cfb8af */
  goto L_12cfb8af;
L_12cfb8a5:;
  /* 12cfb8a5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_12cfb8af:;
  /* 12cfb8af mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 12cfb8b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfb8bc and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 12cfb8c2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cfb8c4 je 0x12cfb8e3 */
  if (C.zf) goto L_12cfb8e3;
  /* 12cfb8c6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 12cfb8cd mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 12cfb8d3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfb8d6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 12cfb8dc mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_12cfb8e3:;
  /* 12cfb8e3 jmp 0x12cfb905 */
  goto L_12cfb905;
L_12cfb8e5:;
  /* 12cfb8e5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 12cfb8ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfb8f2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 12cfb8f8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cfb8fa je 0x12cfb905 */
  if (C.zf) goto L_12cfb905;
  /* 12cfb8fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfb8ff or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12cfb902 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12cfb905:;
  /* 12cfb905 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfb908 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12cfb90d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfb90f je 0x12cfb92e */
  if (C.zf) goto L_12cfb92e;
  /* 12cfb911 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12cfb914 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfb915 call 0x12cfbfa0 */
  push32(0x12cfb91au); f_12cfbfa0();
  /* 12cfb91a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfb91d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12cfb923 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12cfb929 jmp 0x12cfb9bf */
  goto L_12cfb9bf;
L_12cfb92e:;
  /* 12cfb92e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfb931 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 12cfb934 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cfb936 je 0x12cfb980 */
  if (C.zf) goto L_12cfb980;
  /* 12cfb938 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfb93b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12cfb93e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfb940 je 0x12cfb960 */
  if (C.zf) goto L_12cfb960;
  /* 12cfb942 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12cfb945 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfb946 call 0x12cfbf80 */
  push32(0x12cfb94bu); f_12cfbf80();
  /* 12cfb94b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfb94e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 12cfb951 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12cfb952 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12cfb958 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12cfb95e jmp 0x12cfb97e */
  goto L_12cfb97e;
L_12cfb960:;
  /* 12cfb960 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12cfb963 push edx */
  push32((uint32_t)(EDX));
  /* 12cfb964 call 0x12cfbf80 */
  push32(0x12cfb969u); f_12cfbf80();
  /* 12cfb969 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfb96c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cfb971 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12cfb972 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12cfb978 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_12cfb97e:;
  /* 12cfb97e jmp 0x12cfb9bf */
  goto L_12cfb9bf;
L_12cfb980:;
  /* 12cfb980 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfb983 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12cfb986 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfb988 je 0x12cfb9a5 */
  if (C.zf) goto L_12cfb9a5;
  /* 12cfb98a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12cfb98d push ecx */
  push32((uint32_t)(ECX));
  /* 12cfb98e call 0x12cfbf80 */
  push32(0x12cfb993u); f_12cfbf80();
  /* 12cfb993 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfb996 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12cfb997 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12cfb99d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12cfb9a3 jmp 0x12cfb9bf */
  goto L_12cfb9bf;
L_12cfb9a5:;
  /* 12cfb9a5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12cfb9a8 push edx */
  push32((uint32_t)(EDX));
  /* 12cfb9a9 call 0x12cfbf80 */
  push32(0x12cfb9aeu); f_12cfbf80();
  /* 12cfb9ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfb9b1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfb9b3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12cfb9b9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_12cfb9bf:;
  /* 12cfb9bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfb9c2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 12cfb9c5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cfb9c7 je 0x12cfba07 */
  if (C.zf) goto L_12cfba07;
  /* 12cfb9c9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfb9d0 jg 0x12cfba07 */
  if ((!C.zf&&C.sf==C.of)) goto L_12cfba07;
  /* 12cfb9d2 jl 0x12cfb9dd */
  if ((C.sf!=C.of)) goto L_12cfb9dd;
  /* 12cfb9d4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfb9db jae 0x12cfba07 */
  if (!C.cf) goto L_12cfba07;
L_12cfb9dd:;
  /* 12cfb9dd mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 12cfb9e3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cfb9e5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 12cfb9eb adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfb9ee neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cfb9f0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12cfb9f6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 12cfb9fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfb9ff or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12cfba02 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cfba05 jmp 0x12cfba1f */
  goto L_12cfba1f;
L_12cfba07:;
  /* 12cfba07 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 12cfba0d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12cfba13 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 12cfba19 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_12cfba1f:;
  /* 12cfba1f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfba22 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12cfba28 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cfba2a jne 0x12cfba47 */
  if (!C.zf) goto L_12cfba47;
  /* 12cfba2c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12cfba32 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 12cfba38 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 12cfba3b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12cfba41 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_12cfba47:;
  /* 12cfba47 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfba4e jge 0x12cfba5c */
  if ((C.sf==C.of)) goto L_12cfba5c;
  /* 12cfba50 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 12cfba5a jmp 0x12cfba65 */
  goto L_12cfba65;
L_12cfba5c:;
  /* 12cfba5c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfba5f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 12cfba62 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12cfba65:;
  /* 12cfba65 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12cfba6b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 12cfba71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfba73 jne 0x12cfba7c */
  if (!C.zf) goto L_12cfba7c;
  /* 12cfba75 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12cfba7c:;
  /* 12cfba7c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 12cfba7f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12cfba82:;
  /* 12cfba82 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 12cfba88 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 12cfba8e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfba91 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 12cfba97 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cfba99 jg 0x12cfbaaf */
  if ((!C.zf&&C.sf==C.of)) goto L_12cfbaaf;
  /* 12cfba9b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12cfbaa1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 12cfbaa7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cfbaa9 je 0x12cfbb30 */
  if (C.zf) goto L_12cfbb30;
L_12cfbaaf:;
  /* 12cfbaaf mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 12cfbab5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12cfbab6 push edx */
  push32((uint32_t)(EDX));
  /* 12cfbab7 push eax */
  push32((uint32_t)(EAX));
  /* 12cfbab8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 12cfbabe push edx */
  push32((uint32_t)(EDX));
  /* 12cfbabf mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12cfbac5 push eax */
  push32((uint32_t)(EAX));
  /* 12cfbac6 call 0x12cfae40 */
  push32(0x12cfbacbu); f_12cfae40();
  /* 12cfbacb add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfbace mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 12cfbad4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 12cfbada cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12cfbadb push edx */
  push32((uint32_t)(EDX));
  /* 12cfbadc push eax */
  push32((uint32_t)(EAX));
  /* 12cfbadd mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 12cfbae3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfbae4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12cfbaea push edx */
  push32((uint32_t)(EDX));
  /* 12cfbaeb call 0x12cfadd0 */
  push32(0x12cfbaf0u); f_12cfadd0();
  /* 12cfbaf0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12cfbaf6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 12cfbafc cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfbb03 jle 0x12cfbb17 */
  if ((C.zf||C.sf!=C.of)) goto L_12cfbb17;
  /* 12cfbb05 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 12cfbb0b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfbb11 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_12cfbb17:;
  /* 12cfbb17 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cfbb1a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 12cfbb20 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 12cfbb22 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cfbb25 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfbb28 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12cfbb2b jmp 0x12cfba82 */
  goto L_12cfba82;
L_12cfbb30:;
  /* 12cfbb30 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 12cfbb33 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfbb36 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12cfbb39 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cfbb3c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfbb3f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12cfbb42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfbb45 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 12cfbb4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfbb4c je 0x12cfbb77 */
  if (C.zf) goto L_12cfbb77;
  /* 12cfbb4e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cfbb51 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cfbb54 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfbb57 jne 0x12cfbb5f */
  if (!C.zf) goto L_12cfbb5f;
  /* 12cfbb59 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfbb5d jne 0x12cfbb77 */
  if (!C.zf) goto L_12cfbb77;
L_12cfbb5f:;
  /* 12cfbb5f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cfbb62 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfbb65 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12cfbb68 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cfbb6b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 12cfbb6e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cfbb71 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfbb74 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_12cfbb77:;
  /* 12cfbb77 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfbb7e jne 0x12cfbd52 */
  if (!C.zf) goto L_12cfbd52;
  /* 12cfbb84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfbb87 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12cfbb8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfbb8c je 0x12cfbbdd */
  if (C.zf) goto L_12cfbbdd;
  /* 12cfbb8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfbb91 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 12cfbb97 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cfbb99 je 0x12cfbbab */
  if (C.zf) goto L_12cfbbab;
  /* 12cfbb9b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 12cfbba2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12cfbba9 jmp 0x12cfbbdd */
  goto L_12cfbbdd;
L_12cfbbab:;
  /* 12cfbbab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfbbae and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12cfbbb1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cfbbb3 je 0x12cfbbc5 */
  if (C.zf) goto L_12cfbbc5;
  /* 12cfbbb5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 12cfbbbc mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12cfbbc3 jmp 0x12cfbbdd */
  goto L_12cfbbdd;
L_12cfbbc5:;
  /* 12cfbbc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfbbc8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 12cfbbcb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfbbcd je 0x12cfbbdd */
  if (C.zf) goto L_12cfbbdd;
  /* 12cfbbcf mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 12cfbbd6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_12cfbbdd:;
  /* 12cfbbdd mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 12cfbbe3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfbbe6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfbbe9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 12cfbbef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfbbf2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 12cfbbf5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cfbbf7 jne 0x12cfbc15 */
  if (!C.zf) goto L_12cfbc15;
  /* 12cfbbf9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12cfbbff push eax */
  push32((uint32_t)(EAX));
  /* 12cfbc00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfbc03 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfbc04 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12cfbc0a push edx */
  push32((uint32_t)(EDX));
  /* 12cfbc0b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12cfbc0d call 0x12cfbef0 */
  push32(0x12cfbc12u); f_12cfbef0();
  /* 12cfbc12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cfbc15:;
  /* 12cfbc15 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12cfbc1b push eax */
  push32((uint32_t)(EAX));
  /* 12cfbc1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfbc1f push ecx */
  push32((uint32_t)(ECX));
  /* 12cfbc20 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cfbc23 push edx */
  push32((uint32_t)(EDX));
  /* 12cfbc24 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 12cfbc2a push eax */
  push32((uint32_t)(EAX));
  /* 12cfbc2b call 0x12cfbf30 */
  push32(0x12cfbc30u); f_12cfbf30();
  /* 12cfbc30 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfbc33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfbc36 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12cfbc39 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cfbc3b je 0x12cfbc63 */
  if (C.zf) goto L_12cfbc63;
  /* 12cfbc3d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfbc40 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12cfbc43 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cfbc45 jne 0x12cfbc63 */
  if (!C.zf) goto L_12cfbc63;
  /* 12cfbc47 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12cfbc4d push eax */
  push32((uint32_t)(EAX));
  /* 12cfbc4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfbc51 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfbc52 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12cfbc58 push edx */
  push32((uint32_t)(EDX));
  /* 12cfbc59 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12cfbc5b call 0x12cfbef0 */
  push32(0x12cfbc60u); f_12cfbef0();
  /* 12cfbc60 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cfbc63:;
  /* 12cfbc63 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfbc67 je 0x12cfbd11 */
  if (C.zf) goto L_12cfbd11;
  /* 12cfbc6d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfbc71 jle 0x12cfbd11 */
  if ((C.zf||C.sf!=C.of)) goto L_12cfbd11;
  /* 12cfbc77 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cfbc7a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 12cfbc80 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cfbc83 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_12cfbc89:;
  /* 12cfbc89 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 12cfbc8f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 12cfbc95 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfbc98 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 12cfbc9e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cfbca0 je 0x12cfbd0f */
  if (C.zf) goto L_12cfbd0f;
  /* 12cfbca2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 12cfbca8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12cfbcab mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 12cfbcb2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 12cfbcb9 push eax */
  push32((uint32_t)(EAX));
  /* 12cfbcba lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 12cfbcc0 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfbcc1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 12cfbcc7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfbcca mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 12cfbcd0 call 0x12cfd0a0 */
  push32(0x12cfbcd5u); f_12cfd0a0();
  /* 12cfbcd5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfbcd8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 12cfbcde cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfbce5 jg 0x12cfbce9 */
  if ((!C.zf&&C.sf==C.of)) goto L_12cfbce9;
  /* 12cfbce7 jmp 0x12cfbd0f */
  goto L_12cfbd0f;
L_12cfbce9:;
  /* 12cfbce9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12cfbcef push eax */
  push32((uint32_t)(EAX));
  /* 12cfbcf0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfbcf3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfbcf4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 12cfbcfa push edx */
  push32((uint32_t)(EDX));
  /* 12cfbcfb lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 12cfbd01 push eax */
  push32((uint32_t)(EAX));
  /* 12cfbd02 call 0x12cfbf30 */
  push32(0x12cfbd07u); f_12cfbf30();
  /* 12cfbd07 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfbd0a jmp 0x12cfbc89 */
  goto L_12cfbc89;
L_12cfbd0f:;
  /* 12cfbd0f jmp 0x12cfbd2c */
  goto L_12cfbd2c;
L_12cfbd11:;
  /* 12cfbd11 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 12cfbd17 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfbd18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfbd1b push edx */
  push32((uint32_t)(EDX));
  /* 12cfbd1c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cfbd1f push eax */
  push32((uint32_t)(EAX));
  /* 12cfbd20 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cfbd23 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfbd24 call 0x12cfbf30 */
  push32(0x12cfbd29u); f_12cfbf30();
  /* 12cfbd29 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cfbd2c:;
  /* 12cfbd2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfbd2f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12cfbd32 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cfbd34 je 0x12cfbd52 */
  if (C.zf) goto L_12cfbd52;
  /* 12cfbd36 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12cfbd3c push eax */
  push32((uint32_t)(EAX));
  /* 12cfbd3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfbd40 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfbd41 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12cfbd47 push edx */
  push32((uint32_t)(EDX));
  /* 12cfbd48 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12cfbd4a call 0x12cfbef0 */
  push32(0x12cfbd4fu); f_12cfbef0();
  /* 12cfbd4f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cfbd52:;
  /* 12cfbd52 jmp 0x12cfb164 */
  goto L_12cfb164;
L_12cfbd57:;
  /* 12cfbd57 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 12cfbd5d pop edi */
  EDI = (pop32());
  /* 12cfbd5e pop esi */
  ESI = (pop32());
  /* 12cfbd5f pop ebx */
  EBX = (pop32());
  /* 12cfbd60 mov esp, ebp */
  ESP = (EBP);
  /* 12cfbd62 pop ebp */
  EBP = (pop32());
  /* 12cfbd63 ret  */
  ESPCHK(0x12cfb140u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be70 @ 0x12cfbe70 (119 bytes, 44 insns) */
void f_12cfbe70(void) {
  FTRACE(0x12cfbe70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfbe70 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfbe71 mov ebp, esp */
  EBP = (ESP);
  /* 12cfbe73 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfbe74 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfbe77 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cfbe7a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfbe7d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfbe80 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12cfbe83 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfbe86 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfbe8a jl 0x12cfbeb2 */
  if ((C.sf!=C.of)) goto L_12cfbeb2;
  /* 12cfbe8c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfbe8f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cfbe91 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12cfbe94 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12cfbe96 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 12cfbe9a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cfbea0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cfbea3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfbea6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cfbea8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfbeab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfbeae mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12cfbeb0 jmp 0x12cfbec5 */
  goto L_12cfbec5;
L_12cfbeb2:;
  /* 12cfbeb2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfbeb5 push edx */
  push32((uint32_t)(EDX));
  /* 12cfbeb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfbeb9 push eax */
  push32((uint32_t)(EAX));
  /* 12cfbeba call 0x12cfaec0 */
  push32(0x12cfbebfu); f_12cfaec0();
  /* 12cfbebf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfbec2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cfbec5:;
  /* 12cfbec5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfbec9 jne 0x12cfbed6 */
  if (!C.zf) goto L_12cfbed6;
  /* 12cfbecb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cfbece mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12cfbed4 jmp 0x12cfbee3 */
  goto L_12cfbee3;
L_12cfbed6:;
  /* 12cfbed6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cfbed9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cfbedb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfbede mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cfbee1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12cfbee3:;
  /* 12cfbee3 mov esp, ebp */
  ESP = (EBP);
  /* 12cfbee5 pop ebp */
  EBP = (pop32());
  /* 12cfbee6 ret  */
  ESPCHK(0x12cfbe70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bef0 @ 0x12cfbef0 (53 bytes, 23 insns) */
void f_12cfbef0(void) {
  FTRACE(0x12cfbef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfbef0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfbef1 mov ebp, esp */
  EBP = (ESP);
L_12cfbef3:;
  /* 12cfbef3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfbef6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfbef9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfbefc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12cfbeff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfbf01 jle 0x12cfbf23 */
  if ((C.zf||C.sf!=C.of)) goto L_12cfbf23;
  /* 12cfbf03 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cfbf06 push edx */
  push32((uint32_t)(EDX));
  /* 12cfbf07 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cfbf0a push eax */
  push32((uint32_t)(EAX));
  /* 12cfbf0b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfbf0e push ecx */
  push32((uint32_t)(ECX));
  /* 12cfbf0f call 0x12cfbe70 */
  push32(0x12cfbf14u); f_12cfbe70();
  /* 12cfbf14 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfbf17 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cfbf1a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfbf1d jne 0x12cfbf21 */
  if (!C.zf) goto L_12cfbf21;
  /* 12cfbf1f jmp 0x12cfbf23 */
  goto L_12cfbf23;
L_12cfbf21:;
  /* 12cfbf21 jmp 0x12cfbef3 */
  goto L_12cfbef3;
L_12cfbf23:;
  /* 12cfbf23 pop ebp */
  EBP = (pop32());
  /* 12cfbf24 ret  */
  ESPCHK(0x12cfbef0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf30 @ 0x12cfbf30 (74 bytes, 31 insns) */
void f_12cfbf30(void) {
  FTRACE(0x12cfbf30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfbf30 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfbf31 mov ebp, esp */
  EBP = (ESP);
  /* 12cfbf33 push ecx */
  push32((uint32_t)(ECX));
L_12cfbf34:;
  /* 12cfbf34 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfbf37 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfbf3a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfbf3d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12cfbf40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfbf42 jle 0x12cfbf76 */
  if ((C.zf||C.sf!=C.of)) goto L_12cfbf76;
  /* 12cfbf44 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cfbf47 push edx */
  push32((uint32_t)(EDX));
  /* 12cfbf48 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cfbf4b push eax */
  push32((uint32_t)(EAX));
  /* 12cfbf4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfbf4f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cfbf52 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cfbf55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfbf58 push eax */
  push32((uint32_t)(EAX));
  /* 12cfbf59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfbf5c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfbf5f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12cfbf62 call 0x12cfbe70 */
  push32(0x12cfbf67u); f_12cfbe70();
  /* 12cfbf67 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfbf6a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cfbf6d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfbf70 jne 0x12cfbf74 */
  if (!C.zf) goto L_12cfbf74;
  /* 12cfbf72 jmp 0x12cfbf76 */
  goto L_12cfbf76;
L_12cfbf74:;
  /* 12cfbf74 jmp 0x12cfbf34 */
  goto L_12cfbf34;
L_12cfbf76:;
  /* 12cfbf76 mov esp, ebp */
  ESP = (EBP);
  /* 12cfbf78 pop ebp */
  EBP = (pop32());
  /* 12cfbf79 ret  */
  ESPCHK(0x12cfbf30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf80 @ 0x12cfbf80 (26 bytes, 12 insns) */
void f_12cfbf80(void) {
  FTRACE(0x12cfbf80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfbf80 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfbf81 mov ebp, esp */
  EBP = (ESP);
  /* 12cfbf83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfbf86 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cfbf88 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfbf8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfbf8e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12cfbf90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfbf93 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cfbf95 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12cfbf98 pop ebp */
  EBP = (pop32());
  /* 12cfbf99 ret  */
  ESPCHK(0x12cfbf80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bfa0 @ 0x12cfbfa0 (31 bytes, 14 insns) */
void f_12cfbfa0(void) {
  FTRACE(0x12cfbfa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfbfa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfbfa1 mov ebp, esp */
  EBP = (ESP);
  /* 12cfbfa3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfbfa6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cfbfa8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfbfab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfbfae mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12cfbfb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfbfb3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cfbfb5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfbfb8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12cfbfba mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cfbfbd pop ebp */
  EBP = (pop32());
  /* 12cfbfbe ret  */
  ESPCHK(0x12cfbfa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bfc0 @ 0x12cfbfc0 (27 bytes, 12 insns) */
void f_12cfbfc0(void) {
  FTRACE(0x12cfbfc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfbfc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfbfc1 mov ebp, esp */
  EBP = (ESP);
  /* 12cfbfc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfbfc6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cfbfc8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfbfcb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfbfce mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12cfbfd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfbfd3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cfbfd5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 12cfbfd9 pop ebp */
  EBP = (pop32());
  /* 12cfbfda ret  */
  ESPCHK(0x12cfbfc0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x12cfbfe0 (145 bytes, 42 insns) */
void f_12cfbfe0(void) {
  FTRACE(0x12cfbfe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfbfe0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfbfe1 mov ebp, esp */
  EBP = (ESP);
  /* 12cfbfe3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfbfe4 call 0x12cfc090 */
  push32(0x12cfbfe9u); f_12cfc090();
  /* 12cfbfe9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfbfec mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12cfbfee mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cfbff5 jmp 0x12cfc000 */
  goto L_12cfc000;
L_12cfbff7:;
  /* 12cfbff7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfbffa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfbffd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12cfc000:;
  /* 12cfc000 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfc004 jae 0x12cfc02a */
  if (!C.cf) goto L_12cfc02a;
  /* 12cfc006 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfc009 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfc00c cmp ecx, dword ptr [eax*8 + 0x12d1efb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12d1efb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfc013 jne 0x12cfc028 */
  if (!C.zf) goto L_12cfc028;
  /* 12cfc015 call 0x12cfc080 */
  push32(0x12cfc01au); f_12cfc080();
  /* 12cfc01a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfc01d mov ecx, dword ptr [edx*8 + 0x12d1efbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x12d1efbc)));
  /* 12cfc024 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12cfc026 jmp 0x12cfc06d */
  goto L_12cfc06d;
L_12cfc028:;
  /* 12cfc028 jmp 0x12cfbff7 */
  goto L_12cfbff7;
L_12cfc02a:;
  /* 12cfc02a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfc02e jb 0x12cfc043 */
  if (C.cf) goto L_12cfc043;
  /* 12cfc030 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfc034 ja 0x12cfc043 */
  if ((!C.cf&&!C.zf)) goto L_12cfc043;
  /* 12cfc036 call 0x12cfc080 */
  push32(0x12cfc03bu); f_12cfc080();
  /* 12cfc03b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 12cfc041 jmp 0x12cfc06d */
  goto L_12cfc06d;
L_12cfc043:;
  /* 12cfc043 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfc04a jb 0x12cfc062 */
  if (C.cf) goto L_12cfc062;
  /* 12cfc04c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfc053 ja 0x12cfc062 */
  if ((!C.cf&&!C.zf)) goto L_12cfc062;
  /* 12cfc055 call 0x12cfc080 */
  push32(0x12cfc05au); f_12cfc080();
  /* 12cfc05a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 12cfc060 jmp 0x12cfc06d */
  goto L_12cfc06d;
L_12cfc062:;
  /* 12cfc062 call 0x12cfc080 */
  push32(0x12cfc067u); f_12cfc080();
  /* 12cfc067 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_12cfc06d:;
  /* 12cfc06d mov esp, ebp */
  ESP = (EBP);
  /* 12cfc06f pop ebp */
  EBP = (pop32());
  /* 12cfc070 ret  */
  ESPCHK(0x12cfbfe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c080 @ 0x12cfc080 (13 bytes, 6 insns) */
void f_12cfc080(void) {
  FTRACE(0x12cfc080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfc080 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfc081 mov ebp, esp */
  EBP = (ESP);
  /* 12cfc083 call 0x12cf3bf0 */
  push32(0x12cfc088u); f_12cf3bf0();
  /* 12cfc088 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfc08b pop ebp */
  EBP = (pop32());
  /* 12cfc08c ret  */
  ESPCHK(0x12cfc080u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c090 @ 0x12cfc090 (13 bytes, 6 insns) */
void f_12cfc090(void) {
  FTRACE(0x12cfc090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfc090 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfc091 mov ebp, esp */
  EBP = (ESP);
  /* 12cfc093 call 0x12cf3bf0 */
  push32(0x12cfc098u); f_12cf3bf0();
  /* 12cfc098 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfc09b pop ebp */
  EBP = (pop32());
  /* 12cfc09c ret  */
  ESPCHK(0x12cfc090u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0a0 @ 0x12cfc0a0 (664 bytes, 260 insns) [15 switch table(s)] */
void f_12cfc0a0(void) {
  FTRACE(0x12cfc0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfc0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfc0a1 mov ebp, esp */
  EBP = (ESP);
  /* 12cfc0a3 push edi */
  push32((uint32_t)(EDI));
  /* 12cfc0a4 push esi */
  push32((uint32_t)(ESI));
  /* 12cfc0a5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfc0a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cfc0ab mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfc0ae mov eax, ecx */
  EAX = (ECX);
  /* 12cfc0b0 mov edx, ecx */
  EDX = (ECX);
  /* 12cfc0b2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfc0b4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfc0b6 jbe 0x12cfc0c0 */
  if ((C.cf||C.zf)) goto L_12cfc0c0;
  /* 12cfc0b8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfc0ba jb 0x12cfc238 */
  if (C.cf) goto L_12cfc238;
L_12cfc0c0:;
  /* 12cfc0c0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12cfc0c6 jne 0x12cfc0dc */
  if (!C.zf) goto L_12cfc0dc;
  /* 12cfc0c8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12cfc0cb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12cfc0ce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfc0d1 jb 0x12cfc0fc */
  if (C.cf) goto L_12cfc0fc;
  /* 12cfc0d3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12cfc0d5 jmp dword ptr [edx*4 + 0x12cfc1e8] */
  switch (EDX) {
    case 0: goto L_12cfc1f8;
    case 1: goto L_12cfc200;
    case 2: goto L_12cfc20c;
    case 3: goto L_12cfc220;
    default: x86_unimpl("switch@0x12cfc0d5 out of table"); return;
  }
L_12cfc0dc:;
  /* 12cfc0dc mov eax, edi */
  EAX = (EDI);
  /* 12cfc0de mov edx, 3 */
  EDX = (0x3u);
  /* 12cfc0e3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfc0e6 jb 0x12cfc0f4 */
  if (C.cf) goto L_12cfc0f4;
  /* 12cfc0e8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12cfc0eb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfc0ed jmp dword ptr [eax*4 + 0x12cfc100] */
  switch (EAX) {
    case 1: goto L_12cfc110;
    case 2: goto L_12cfc13c;
    case 3: goto L_12cfc160;
    default: x86_unimpl("switch@0x12cfc0ed out of table"); return;
  }
L_12cfc0f4:;
  /* 12cfc0f4 jmp dword ptr [ecx*4 + 0x12cfc1f8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x12cfc1f8)))); return;
  /* 12cfc0fb nop  */
  /* nop */
L_12cfc0fc:;
  /* 12cfc0fc jmp dword ptr [ecx*4 + 0x12cfc17c] */
  switch (ECX) {
    case 0: goto L_12cfc1df;
    case 1: goto L_12cfc1cc;
    case 2: goto L_12cfc1c4;
    case 3: goto L_12cfc1bc;
    case 4: goto L_12cfc1b4;
    case 5: goto L_12cfc1ac;
    case 6: goto L_12cfc1a4;
    case 7: goto L_12cfc19c;
    default: x86_unimpl("switch@0x12cfc0fc out of table"); return;
  }
  /* 12cfc103 nop  */
  /* nop */
L_12cfc110:;
  /* 12cfc110 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12cfc112 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12cfc114 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12cfc116 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12cfc119 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12cfc11c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12cfc11f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12cfc122 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12cfc125 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfc128 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfc12b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfc12e jb 0x12cfc0fc */
  if (C.cf) goto L_12cfc0fc;
  /* 12cfc130 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12cfc132 jmp dword ptr [edx*4 + 0x12cfc1e8] */
  switch (EDX) {
    case 0: goto L_12cfc1f8;
    case 1: goto L_12cfc200;
    case 2: goto L_12cfc20c;
    case 3: goto L_12cfc220;
    default: x86_unimpl("switch@0x12cfc132 out of table"); return;
  }
  /* 12cfc139 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12cfc13c:;
  /* 12cfc13c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12cfc13e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12cfc140 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12cfc142 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12cfc145 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12cfc148 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12cfc14b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfc14e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfc151 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfc154 jb 0x12cfc0fc */
  if (C.cf) goto L_12cfc0fc;
  /* 12cfc156 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12cfc158 jmp dword ptr [edx*4 + 0x12cfc1e8] */
  switch (EDX) {
    case 0: goto L_12cfc1f8;
    case 1: goto L_12cfc200;
    case 2: goto L_12cfc20c;
    case 3: goto L_12cfc220;
    default: x86_unimpl("switch@0x12cfc158 out of table"); return;
  }
  /* 12cfc15f nop  */
  /* nop */
L_12cfc160:;
  /* 12cfc160 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12cfc162 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12cfc164 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12cfc166 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12cfc167 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12cfc16a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12cfc16b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfc16e jb 0x12cfc0fc */
  if (C.cf) goto L_12cfc0fc;
  /* 12cfc170 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12cfc172 jmp dword ptr [edx*4 + 0x12cfc1e8] */
  switch (EDX) {
    case 0: goto L_12cfc1f8;
    case 1: goto L_12cfc200;
    case 2: goto L_12cfc20c;
    case 3: goto L_12cfc220;
    default: x86_unimpl("switch@0x12cfc172 out of table"); return;
  }
  /* 12cfc179 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12cfc19c:;
  /* 12cfc19c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 12cfc1a0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_12cfc1a4:;
  /* 12cfc1a4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 12cfc1a8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_12cfc1ac:;
  /* 12cfc1ac mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 12cfc1b0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_12cfc1b4:;
  /* 12cfc1b4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 12cfc1b8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_12cfc1bc:;
  /* 12cfc1bc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 12cfc1c0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_12cfc1c4:;
  /* 12cfc1c4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 12cfc1c8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_12cfc1cc:;
  /* 12cfc1cc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 12cfc1d0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 12cfc1d4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12cfc1db add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfc1dd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12cfc1df:;
  /* 12cfc1df jmp dword ptr [edx*4 + 0x12cfc1e8] */
  switch (EDX) {
    case 0: goto L_12cfc1f8;
    case 1: goto L_12cfc200;
    case 2: goto L_12cfc20c;
    case 3: goto L_12cfc220;
    default: x86_unimpl("switch@0x12cfc1df out of table"); return;
  }
  /* 12cfc1e6 mov edi, edi */
  EDI = (EDI);
L_12cfc1f8:;
  /* 12cfc1f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfc1fb pop esi */
  ESI = (pop32());
  /* 12cfc1fc pop edi */
  EDI = (pop32());
  /* 12cfc1fd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12cfc1fe ret  */
  ESPCHK(0x12cfc0a0u, _esp0);
  ESP += 4; return;
  /* 12cfc1ff nop  */
  /* nop */
L_12cfc200:;
  /* 12cfc200 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12cfc202 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12cfc204 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfc207 pop esi */
  ESI = (pop32());
  /* 12cfc208 pop edi */
  EDI = (pop32());
  /* 12cfc209 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12cfc20a ret  */
  ESPCHK(0x12cfc0a0u, _esp0);
  ESP += 4; return;
  /* 12cfc20b nop  */
  /* nop */
L_12cfc20c:;
  /* 12cfc20c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12cfc20e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12cfc210 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12cfc213 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12cfc216 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfc219 pop esi */
  ESI = (pop32());
  /* 12cfc21a pop edi */
  EDI = (pop32());
  /* 12cfc21b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12cfc21c ret  */
  ESPCHK(0x12cfc0a0u, _esp0);
  ESP += 4; return;
  /* 12cfc21d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12cfc220:;
  /* 12cfc220 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12cfc222 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12cfc224 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12cfc227 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12cfc22a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12cfc22d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12cfc230 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfc233 pop esi */
  ESI = (pop32());
  /* 12cfc234 pop edi */
  EDI = (pop32());
  /* 12cfc235 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12cfc236 ret  */
  ESPCHK(0x12cfc0a0u, _esp0);
  ESP += 4; return;
  /* 12cfc237 nop  */
  /* nop */
L_12cfc238:;
  /* 12cfc238 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 12cfc23c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 12cfc240 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12cfc246 jne 0x12cfc26c */
  if (!C.zf) goto L_12cfc26c;
  /* 12cfc248 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12cfc24b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12cfc24e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfc251 jb 0x12cfc260 */
  if (C.cf) goto L_12cfc260;
  /* 12cfc253 std  */
  C.df=1;
  /* 12cfc254 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12cfc256 cld  */
  C.df=0;
  /* 12cfc257 jmp dword ptr [edx*4 + 0x12cfc380] */
  switch (EDX) {
    case 0: goto L_12cfc390;
    case 1: goto L_12cfc398;
    case 2: goto L_12cfc3a8;
    case 3: goto L_12cfc3bc;
    default: x86_unimpl("switch@0x12cfc257 out of table"); return;
  }
  /* 12cfc25e mov edi, edi */
  EDI = (EDI);
L_12cfc260:;
  /* 12cfc260 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cfc262 jmp dword ptr [ecx*4 + 0x12cfc330] */
  switch (ECX) {
    case 0: goto L_12cfc377;
    default: x86_unimpl("switch@0x12cfc262 out of table"); return;
  }
  /* 12cfc269 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12cfc26c:;
  /* 12cfc26c mov eax, edi */
  EAX = (EDI);
  /* 12cfc26e mov edx, 3 */
  EDX = (0x3u);
  /* 12cfc273 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfc276 jb 0x12cfc284 */
  if (C.cf) goto L_12cfc284;
  /* 12cfc278 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12cfc27b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfc27d jmp dword ptr [eax*4 + 0x12cfc288] */
  switch (EAX) {
    case 1: goto L_12cfc298;
    case 2: goto L_12cfc2b8;
    case 3: goto L_12cfc2e0;
    default: x86_unimpl("switch@0x12cfc27d out of table"); return;
  }
L_12cfc284:;
  /* 12cfc284 jmp dword ptr [ecx*4 + 0x12cfc380] */
  switch (ECX) {
    case 0: goto L_12cfc390;
    case 1: goto L_12cfc398;
    case 2: goto L_12cfc3a8;
    case 3: goto L_12cfc3bc;
    default: x86_unimpl("switch@0x12cfc284 out of table"); return;
  }
  /* 12cfc28b nop  */
  /* nop */
L_12cfc298:;
  /* 12cfc298 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12cfc29b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12cfc29d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12cfc2a0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12cfc2a1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12cfc2a4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12cfc2a5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfc2a8 jb 0x12cfc260 */
  if (C.cf) goto L_12cfc260;
  /* 12cfc2aa std  */
  C.df=1;
  /* 12cfc2ab rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12cfc2ad cld  */
  C.df=0;
  /* 12cfc2ae jmp dword ptr [edx*4 + 0x12cfc380] */
  switch (EDX) {
    case 0: goto L_12cfc390;
    case 1: goto L_12cfc398;
    case 2: goto L_12cfc3a8;
    case 3: goto L_12cfc3bc;
    default: x86_unimpl("switch@0x12cfc2ae out of table"); return;
  }
  /* 12cfc2b5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12cfc2b8:;
  /* 12cfc2b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12cfc2bb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12cfc2bd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12cfc2c0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12cfc2c3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12cfc2c6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12cfc2c9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfc2cc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfc2cf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfc2d2 jb 0x12cfc260 */
  if (C.cf) goto L_12cfc260;
  /* 12cfc2d4 std  */
  C.df=1;
  /* 12cfc2d5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12cfc2d7 cld  */
  C.df=0;
  /* 12cfc2d8 jmp dword ptr [edx*4 + 0x12cfc380] */
  switch (EDX) {
    case 0: goto L_12cfc390;
    case 1: goto L_12cfc398;
    case 2: goto L_12cfc3a8;
    case 3: goto L_12cfc3bc;
    default: x86_unimpl("switch@0x12cfc2d8 out of table"); return;
  }
  /* 12cfc2df nop  */
  /* nop */
L_12cfc2e0:;
  /* 12cfc2e0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12cfc2e3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12cfc2e5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12cfc2e8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12cfc2eb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12cfc2ee mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12cfc2f1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12cfc2f4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12cfc2f7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfc2fa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfc2fd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfc300 jb 0x12cfc260 */
  if (C.cf) goto L_12cfc260;
  /* 12cfc306 std  */
  C.df=1;
  /* 12cfc307 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12cfc309 cld  */
  C.df=0;
  /* 12cfc30a jmp dword ptr [edx*4 + 0x12cfc380] */
  switch (EDX) {
    case 0: goto L_12cfc390;
    case 1: goto L_12cfc398;
    case 2: goto L_12cfc3a8;
    case 3: goto L_12cfc3bc;
    default: x86_unimpl("switch@0x12cfc30a out of table"); return;
  }
  /* 12cfc311 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 12cfc314 xor al, 0xc3 */
  { uint32_t _r=(AL)^(0xc3u); AL = (_r); fl_logic(_r,8); }
  /* 12cfc316 iretd  */
  x86_unimpl("iretd @ 0x12cfc316");
  /* 12cfc317 adc bh, byte ptr [ebx + eax*8] */
  { uint32_t _a=(C.b.b.h),_b=(r8((uint32_t)(EBX + EAX*8))),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 12cfc31a iretd  */
  x86_unimpl("iretd @ 0x12cfc31a");
  /* 12cfc31b adc al, byte ptr [ebx + eax*8 - 0x31] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EBX + EAX*8 + -0x31))),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12cfc31f adc cl, byte ptr [ebx + eax*8 - 0x31] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EBX + EAX*8 + -0x31))),_r=_a+_b+C.cf; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12cfc323 adc dl, byte ptr [ebx + eax*8 - 0x31] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EBX + EAX*8 + -0x31))),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 12cfc327 adc bl, byte ptr [ebx + eax*8 - 0x31] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(EBX + EAX*8 + -0x31))),_r=_a+_b+C.cf; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 12cfc32b adc ah, byte ptr [ebx + eax*8 - 0x31] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(EBX + EAX*8 + -0x31))),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 12cfc334 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 12cfc338 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 12cfc33c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 12cfc340 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 12cfc344 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 12cfc348 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 12cfc34c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 12cfc350 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 12cfc354 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 12cfc358 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 12cfc35c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 12cfc360 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 12cfc364 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 12cfc368 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 12cfc36c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12cfc373 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfc375 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12cfc377:;
  /* 12cfc377 jmp dword ptr [edx*4 + 0x12cfc380] */
  switch (EDX) {
    case 0: goto L_12cfc390;
    case 1: goto L_12cfc398;
    case 2: goto L_12cfc3a8;
    case 3: goto L_12cfc3bc;
    default: x86_unimpl("switch@0x12cfc377 out of table"); return;
  }
  /* 12cfc37e mov edi, edi */
  EDI = (EDI);
L_12cfc390:;
  /* 12cfc390 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfc393 pop esi */
  ESI = (pop32());
  /* 12cfc394 pop edi */
  EDI = (pop32());
  /* 12cfc395 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12cfc396 ret  */
  ESPCHK(0x12cfc0a0u, _esp0);
  ESP += 4; return;
  /* 12cfc397 nop  */
  /* nop */
L_12cfc398:;
  /* 12cfc398 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12cfc39b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12cfc39e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfc3a1 pop esi */
  ESI = (pop32());
  /* 12cfc3a2 pop edi */
  EDI = (pop32());
  /* 12cfc3a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12cfc3a4 ret  */
  ESPCHK(0x12cfc0a0u, _esp0);
  ESP += 4; return;
  /* 12cfc3a5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12cfc3a8:;
  /* 12cfc3a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12cfc3ab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12cfc3ae mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12cfc3b1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12cfc3b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfc3b7 pop esi */
  ESI = (pop32());
  /* 12cfc3b8 pop edi */
  EDI = (pop32());
  /* 12cfc3b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12cfc3ba ret  */
  ESPCHK(0x12cfc0a0u, _esp0);
  ESP += 4; return;
  /* 12cfc3bb nop  */
  /* nop */
L_12cfc3bc:;
  /* 12cfc3bc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12cfc3bf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12cfc3c2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12cfc3c5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12cfc3c8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12cfc3cb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12cfc3ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfc3d1 pop esi */
  ESI = (pop32());
  /* 12cfc3d2 pop edi */
  EDI = (pop32());
  /* 12cfc3d3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12cfc3d4 ret  */
  ESPCHK(0x12cfc0a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3e0 @ 0x12cfc3e0 (421 bytes, 148 insns) */
void f_12cfc3e0(void) {
  FTRACE(0x12cfc3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfc3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfc3e1 mov ebp, esp */
  EBP = (ESP);
  /* 12cfc3e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12cfc3e5 push 0x12d1c398 */
  push32((uint32_t)(0x12d1c398u));
  /* 12cfc3ea push 0x12cfd2b8 */
  push32((uint32_t)(0x12cfd2b8u));
  /* 12cfc3ef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12cfc3f5 push eax */
  push32((uint32_t)(EAX));
  /* 12cfc3f6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12cfc3fd add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfc400 push ebx */
  push32((uint32_t)(EBX));
  /* 12cfc401 push esi */
  push32((uint32_t)(ESI));
  /* 12cfc402 push edi */
  push32((uint32_t)(EDI));
  /* 12cfc403 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12cfc406 cmp dword ptr [0x12d2070c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d2070c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfc40d jne 0x12cfc45e */
  if (!C.zf) goto L_12cfc45e;
  /* 12cfc40f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12cfc412 push eax */
  push32((uint32_t)(EAX));
  /* 12cfc413 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfc415 push 0x12d1c394 */
  push32((uint32_t)(0x12d1c394u));
  /* 12cfc41a push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfc41c call dword ptr [0x12d232cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232cc))), 0x12cfc422u);
  /* 12cfc422 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfc424 je 0x12cfc432 */
  if (C.zf) goto L_12cfc432;
  /* 12cfc426 mov dword ptr [0x12d2070c], 1 */
  w32((uint32_t)(0x12d2070c), (0x1u));
  /* 12cfc430 jmp 0x12cfc45e */
  goto L_12cfc45e;
L_12cfc432:;
  /* 12cfc432 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12cfc435 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfc436 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfc438 push 0x12d1c390 */
  push32((uint32_t)(0x12d1c390u));
  /* 12cfc43d push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfc43f push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfc441 call dword ptr [0x12d232d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232d0))), 0x12cfc447u);
  /* 12cfc447 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfc449 je 0x12cfc457 */
  if (C.zf) goto L_12cfc457;
  /* 12cfc44b mov dword ptr [0x12d2070c], 2 */
  w32((uint32_t)(0x12d2070c), (0x2u));
  /* 12cfc455 jmp 0x12cfc45e */
  goto L_12cfc45e;
L_12cfc457:;
  /* 12cfc457 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfc459 jmp 0x12cfc588 */
  goto L_12cfc588;
L_12cfc45e:;
  /* 12cfc45e cmp dword ptr [0x12d2070c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12d2070c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfc465 jne 0x12cfc495 */
  if (!C.zf) goto L_12cfc495;
  /* 12cfc467 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfc46b jne 0x12cfc476 */
  if (!C.zf) goto L_12cfc476;
  /* 12cfc46d mov edx, dword ptr [0x12d20718] */
  EDX = (r32((uint32_t)(0x12d20718)));
  /* 12cfc473 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12cfc476:;
  /* 12cfc476 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cfc479 push eax */
  push32((uint32_t)(EAX));
  /* 12cfc47a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cfc47d push ecx */
  push32((uint32_t)(ECX));
  /* 12cfc47e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfc481 push edx */
  push32((uint32_t)(EDX));
  /* 12cfc482 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfc485 push eax */
  push32((uint32_t)(EAX));
  /* 12cfc486 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12cfc489 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfc48a call dword ptr [0x12d232d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232d0))), 0x12cfc490u);
  /* 12cfc490 jmp 0x12cfc588 */
  goto L_12cfc588;
L_12cfc495:;
  /* 12cfc495 cmp dword ptr [0x12d2070c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d2070c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfc49c jne 0x12cfc586 */
  if (!C.zf) goto L_12cfc586;
  /* 12cfc4a2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfc4a6 jne 0x12cfc4b1 */
  if (!C.zf) goto L_12cfc4b1;
  /* 12cfc4a8 mov edx, dword ptr [0x12d20728] */
  EDX = (r32((uint32_t)(0x12d20728)));
  /* 12cfc4ae mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_12cfc4b1:;
  /* 12cfc4b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfc4b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfc4b5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cfc4b8 push eax */
  push32((uint32_t)(EAX));
  /* 12cfc4b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfc4bc push ecx */
  push32((uint32_t)(ECX));
  /* 12cfc4bd mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 12cfc4c0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cfc4c2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfc4c4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12cfc4c7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfc4ca push edx */
  push32((uint32_t)(EDX));
  /* 12cfc4cb mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cfc4ce push eax */
  push32((uint32_t)(EAX));
  /* 12cfc4cf call dword ptr [0x12d232d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232d4))), 0x12cfc4d5u);
  /* 12cfc4d5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12cfc4d8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfc4dc jne 0x12cfc4e5 */
  if (!C.zf) goto L_12cfc4e5;
  /* 12cfc4de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfc4e0 jmp 0x12cfc588 */
  goto L_12cfc588;
L_12cfc4e5:;
  /* 12cfc4e5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cfc4ec mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cfc4ef shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12cfc4f1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfc4f4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12cfc4f6 call 0x12cf7350 */
  push32(0x12cfc4fbu); f_12cf7350();
  /* 12cfc4fb mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 12cfc4fe mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12cfc501 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cfc504 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12cfc507 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cfc50a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12cfc50c push edx */
  push32((uint32_t)(EDX));
  /* 12cfc50d push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfc50f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cfc512 push eax */
  push32((uint32_t)(EAX));
  /* 12cfc513 call 0x12cf7f20 */
  push32(0x12cfc518u); f_12cf7f20();
  /* 12cfc518 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfc51b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12cfc522 jmp 0x12cfc53b */
  goto L_12cfc53b;
  /* 12cfc524 mov eax, 1 */
  EAX = (0x1u);
  /* 12cfc529 ret  */
  ESPCHK(0x12cfc3e0u, _esp0);
  ESP += 4; return;
  /* 12cfc52a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12cfc52d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12cfc534 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12cfc53b:;
  /* 12cfc53b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfc53f jne 0x12cfc545 */
  if (!C.zf) goto L_12cfc545;
  /* 12cfc541 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfc543 jmp 0x12cfc588 */
  goto L_12cfc588;
L_12cfc545:;
  /* 12cfc545 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cfc548 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfc549 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cfc54c push edx */
  push32((uint32_t)(EDX));
  /* 12cfc54d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cfc550 push eax */
  push32((uint32_t)(EAX));
  /* 12cfc551 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfc554 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfc555 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfc557 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cfc55a push edx */
  push32((uint32_t)(EDX));
  /* 12cfc55b call dword ptr [0x12d232d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232d4))), 0x12cfc561u);
  /* 12cfc561 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12cfc564 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfc568 jne 0x12cfc56e */
  if (!C.zf) goto L_12cfc56e;
  /* 12cfc56a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfc56c jmp 0x12cfc588 */
  goto L_12cfc588;
L_12cfc56e:;
  /* 12cfc56e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cfc571 push eax */
  push32((uint32_t)(EAX));
  /* 12cfc572 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cfc575 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfc576 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cfc579 push edx */
  push32((uint32_t)(EDX));
  /* 12cfc57a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfc57d push eax */
  push32((uint32_t)(EAX));
  /* 12cfc57e call dword ptr [0x12d232cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232cc))), 0x12cfc584u);
  /* 12cfc584 jmp 0x12cfc588 */
  goto L_12cfc588;
L_12cfc586:;
  /* 12cfc586 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cfc588:;
  /* 12cfc588 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 12cfc58b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cfc58e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12cfc595 pop edi */
  EDI = (pop32());
  /* 12cfc596 pop esi */
  ESI = (pop32());
  /* 12cfc597 pop ebx */
  EBX = (pop32());
  /* 12cfc598 mov esp, ebp */
  ESP = (EBP);
  /* 12cfc59a pop ebp */
  EBP = (pop32());
  /* 12cfc59b ret  */
  ESPCHK(0x12cfc3e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c5a0 @ 0x12cfc5a0 (727 bytes, 263 insns) */
void f_12cfc5a0(void) {
  FTRACE(0x12cfc5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfc5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfc5a1 mov ebp, esp */
  EBP = (ESP);
  /* 12cfc5a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12cfc5a5 push 0x12d1c3a8 */
  push32((uint32_t)(0x12d1c3a8u));
  /* 12cfc5aa push 0x12cfd2b8 */
  push32((uint32_t)(0x12cfd2b8u));
  /* 12cfc5af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12cfc5b5 push eax */
  push32((uint32_t)(EAX));
  /* 12cfc5b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12cfc5bd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfc5c0 push ebx */
  push32((uint32_t)(EBX));
  /* 12cfc5c1 push esi */
  push32((uint32_t)(ESI));
  /* 12cfc5c2 push edi */
  push32((uint32_t)(EDI));
  /* 12cfc5c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12cfc5c6 cmp dword ptr [0x12d20730], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20730))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfc5cd jne 0x12cfc626 */
  if (!C.zf) goto L_12cfc626;
  /* 12cfc5cf push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfc5d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfc5d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfc5d5 push 0x12d1c394 */
  push32((uint32_t)(0x12d1c394u));
  /* 12cfc5da push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12cfc5df push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfc5e1 call dword ptr [0x12d232c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232c4))), 0x12cfc5e7u);
  /* 12cfc5e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfc5e9 je 0x12cfc5f7 */
  if (C.zf) goto L_12cfc5f7;
  /* 12cfc5eb mov dword ptr [0x12d20730], 1 */
  w32((uint32_t)(0x12d20730), (0x1u));
  /* 12cfc5f5 jmp 0x12cfc626 */
  goto L_12cfc626;
L_12cfc5f7:;
  /* 12cfc5f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfc5f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfc5fb push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfc5fd push 0x12d1c390 */
  push32((uint32_t)(0x12d1c390u));
  /* 12cfc602 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12cfc607 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfc609 call dword ptr [0x12d232c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232c8))), 0x12cfc60fu);
  /* 12cfc60f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfc611 je 0x12cfc61f */
  if (C.zf) goto L_12cfc61f;
  /* 12cfc613 mov dword ptr [0x12d20730], 2 */
  w32((uint32_t)(0x12d20730), (0x2u));
  /* 12cfc61d jmp 0x12cfc626 */
  goto L_12cfc626;
L_12cfc61f:;
  /* 12cfc61f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfc621 jmp 0x12cfc891 */
  goto L_12cfc891;
L_12cfc626:;
  /* 12cfc626 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfc62a jle 0x12cfc63f */
  if ((C.zf||C.sf!=C.of)) goto L_12cfc63f;
  /* 12cfc62c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cfc62f push eax */
  push32((uint32_t)(EAX));
  /* 12cfc630 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cfc633 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfc634 call 0x12cfc8b0 */
  push32(0x12cfc639u); f_12cfc8b0();
  /* 12cfc639 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfc63c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_12cfc63f:;
  /* 12cfc63f cmp dword ptr [0x12d20730], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12d20730))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfc646 jne 0x12cfc66b */
  if (!C.zf) goto L_12cfc66b;
  /* 12cfc648 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12cfc64b push edx */
  push32((uint32_t)(EDX));
  /* 12cfc64c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cfc64f push eax */
  push32((uint32_t)(EAX));
  /* 12cfc650 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cfc653 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfc654 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cfc657 push edx */
  push32((uint32_t)(EDX));
  /* 12cfc658 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfc65b push eax */
  push32((uint32_t)(EAX));
  /* 12cfc65c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfc65f push ecx */
  push32((uint32_t)(ECX));
  /* 12cfc660 call dword ptr [0x12d232c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232c8))), 0x12cfc666u);
  /* 12cfc666 jmp 0x12cfc891 */
  goto L_12cfc891;
L_12cfc66b:;
  /* 12cfc66b cmp dword ptr [0x12d20730], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d20730))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfc672 jne 0x12cfc88f */
  if (!C.zf) goto L_12cfc88f;
  /* 12cfc678 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfc67c jne 0x12cfc687 */
  if (!C.zf) goto L_12cfc687;
  /* 12cfc67e mov edx, dword ptr [0x12d20728] */
  EDX = (r32((uint32_t)(0x12d20728)));
  /* 12cfc684 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_12cfc687:;
  /* 12cfc687 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfc689 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfc68b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cfc68e push eax */
  push32((uint32_t)(EAX));
  /* 12cfc68f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cfc692 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfc693 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 12cfc696 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cfc698 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfc69a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12cfc69d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfc6a0 push edx */
  push32((uint32_t)(EDX));
  /* 12cfc6a1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12cfc6a4 push eax */
  push32((uint32_t)(EAX));
  /* 12cfc6a5 call dword ptr [0x12d232d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232d4))), 0x12cfc6abu);
  /* 12cfc6ab mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12cfc6ae cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfc6b2 jne 0x12cfc6bb */
  if (!C.zf) goto L_12cfc6bb;
  /* 12cfc6b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfc6b6 jmp 0x12cfc891 */
  goto L_12cfc891;
L_12cfc6bb:;
  /* 12cfc6bb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cfc6c2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cfc6c5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12cfc6c7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfc6ca and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12cfc6cc call 0x12cf7350 */
  push32(0x12cfc6d1u); f_12cf7350();
  /* 12cfc6d1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12cfc6d4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12cfc6d7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cfc6da mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12cfc6dd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12cfc6e4 jmp 0x12cfc6fd */
  goto L_12cfc6fd;
  /* 12cfc6e6 mov eax, 1 */
  EAX = (0x1u);
  /* 12cfc6eb ret  */
  ESPCHK(0x12cfc5a0u, _esp0);
  ESP += 4; return;
  /* 12cfc6ec mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12cfc6ef mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12cfc6f6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12cfc6fd:;
  /* 12cfc6fd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfc701 jne 0x12cfc70a */
  if (!C.zf) goto L_12cfc70a;
  /* 12cfc703 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfc705 jmp 0x12cfc891 */
  goto L_12cfc891;
L_12cfc70a:;
  /* 12cfc70a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cfc70d push edx */
  push32((uint32_t)(EDX));
  /* 12cfc70e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cfc711 push eax */
  push32((uint32_t)(EAX));
  /* 12cfc712 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cfc715 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfc716 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cfc719 push edx */
  push32((uint32_t)(EDX));
  /* 12cfc71a push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfc71c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12cfc71f push eax */
  push32((uint32_t)(EAX));
  /* 12cfc720 call dword ptr [0x12d232d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232d4))), 0x12cfc726u);
  /* 12cfc726 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfc728 jne 0x12cfc731 */
  if (!C.zf) goto L_12cfc731;
  /* 12cfc72a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfc72c jmp 0x12cfc891 */
  goto L_12cfc891;
L_12cfc731:;
  /* 12cfc731 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfc733 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfc735 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cfc738 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfc739 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cfc73c push edx */
  push32((uint32_t)(EDX));
  /* 12cfc73d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfc740 push eax */
  push32((uint32_t)(EAX));
  /* 12cfc741 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfc744 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfc745 call dword ptr [0x12d232c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232c4))), 0x12cfc74bu);
  /* 12cfc74b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12cfc74e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfc752 jne 0x12cfc75b */
  if (!C.zf) goto L_12cfc75b;
  /* 12cfc754 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfc756 jmp 0x12cfc891 */
  goto L_12cfc891;
L_12cfc75b:;
  /* 12cfc75b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfc75e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 12cfc764 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cfc766 je 0x12cfc7ab */
  if (C.zf) goto L_12cfc7ab;
  /* 12cfc768 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfc76c je 0x12cfc7a6 */
  if (C.zf) goto L_12cfc7a6;
  /* 12cfc76e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cfc771 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfc774 jle 0x12cfc77d */
  if ((C.zf||C.sf!=C.of)) goto L_12cfc77d;
  /* 12cfc776 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfc778 jmp 0x12cfc891 */
  goto L_12cfc891;
L_12cfc77d:;
  /* 12cfc77d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12cfc780 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfc781 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cfc784 push edx */
  push32((uint32_t)(EDX));
  /* 12cfc785 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cfc788 push eax */
  push32((uint32_t)(EAX));
  /* 12cfc789 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cfc78c push ecx */
  push32((uint32_t)(ECX));
  /* 12cfc78d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfc790 push edx */
  push32((uint32_t)(EDX));
  /* 12cfc791 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfc794 push eax */
  push32((uint32_t)(EAX));
  /* 12cfc795 call dword ptr [0x12d232c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232c4))), 0x12cfc79bu);
  /* 12cfc79b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfc79d jne 0x12cfc7a6 */
  if (!C.zf) goto L_12cfc7a6;
  /* 12cfc79f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfc7a1 jmp 0x12cfc891 */
  goto L_12cfc891;
L_12cfc7a6:;
  /* 12cfc7a6 jmp 0x12cfc88a */
  goto L_12cfc88a;
L_12cfc7ab:;
  /* 12cfc7ab mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cfc7ae mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12cfc7b1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12cfc7b8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cfc7bb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12cfc7bd add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfc7c0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12cfc7c2 call 0x12cf7350 */
  push32(0x12cfc7c7u); f_12cf7350();
  /* 12cfc7c7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12cfc7ca mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12cfc7cd mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12cfc7d0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12cfc7d3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12cfc7da jmp 0x12cfc7f3 */
  goto L_12cfc7f3;
  /* 12cfc7dc mov eax, 1 */
  EAX = (0x1u);
  /* 12cfc7e1 ret  */
  ESPCHK(0x12cfc5a0u, _esp0);
  ESP += 4; return;
  /* 12cfc7e2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12cfc7e5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12cfc7ec mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12cfc7f3:;
  /* 12cfc7f3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfc7f7 jne 0x12cfc800 */
  if (!C.zf) goto L_12cfc800;
  /* 12cfc7f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfc7fb jmp 0x12cfc891 */
  goto L_12cfc891;
L_12cfc800:;
  /* 12cfc800 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cfc803 push eax */
  push32((uint32_t)(EAX));
  /* 12cfc804 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cfc807 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfc808 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cfc80b push edx */
  push32((uint32_t)(EDX));
  /* 12cfc80c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cfc80f push eax */
  push32((uint32_t)(EAX));
  /* 12cfc810 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfc813 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfc814 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfc817 push edx */
  push32((uint32_t)(EDX));
  /* 12cfc818 call dword ptr [0x12d232c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232c4))), 0x12cfc81eu);
  /* 12cfc81e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfc820 jne 0x12cfc826 */
  if (!C.zf) goto L_12cfc826;
  /* 12cfc822 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfc824 jmp 0x12cfc891 */
  goto L_12cfc891;
L_12cfc826:;
  /* 12cfc826 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfc82a jne 0x12cfc85a */
  if (!C.zf) goto L_12cfc85a;
  /* 12cfc82c push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfc82e push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfc830 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfc832 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfc834 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cfc837 push eax */
  push32((uint32_t)(EAX));
  /* 12cfc838 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cfc83b push ecx */
  push32((uint32_t)(ECX));
  /* 12cfc83c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12cfc841 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 12cfc844 push edx */
  push32((uint32_t)(EDX));
  /* 12cfc845 call dword ptr [0x12d23370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23370))), 0x12cfc84bu);
  /* 12cfc84b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12cfc84e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfc852 jne 0x12cfc858 */
  if (!C.zf) goto L_12cfc858;
  /* 12cfc854 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfc856 jmp 0x12cfc891 */
  goto L_12cfc891;
L_12cfc858:;
  /* 12cfc858 jmp 0x12cfc88a */
  goto L_12cfc88a;
L_12cfc85a:;
  /* 12cfc85a push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfc85c push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfc85e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12cfc861 push eax */
  push32((uint32_t)(EAX));
  /* 12cfc862 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cfc865 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfc866 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cfc869 push edx */
  push32((uint32_t)(EDX));
  /* 12cfc86a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cfc86d push eax */
  push32((uint32_t)(EAX));
  /* 12cfc86e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12cfc873 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12cfc876 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfc877 call dword ptr [0x12d23370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23370))), 0x12cfc87du);
  /* 12cfc87d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12cfc880 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfc884 jne 0x12cfc88a */
  if (!C.zf) goto L_12cfc88a;
  /* 12cfc886 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfc888 jmp 0x12cfc891 */
  goto L_12cfc891;
L_12cfc88a:;
  /* 12cfc88a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cfc88d jmp 0x12cfc891 */
  goto L_12cfc891;
L_12cfc88f:;
  /* 12cfc88f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cfc891:;
  /* 12cfc891 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12cfc894 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cfc897 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12cfc89e pop edi */
  EDI = (pop32());
  /* 12cfc89f pop esi */
  ESI = (pop32());
  /* 12cfc8a0 pop ebx */
  EBX = (pop32());
  /* 12cfc8a1 mov esp, ebp */
  ESP = (EBP);
  /* 12cfc8a3 pop ebp */
  EBP = (pop32());
  /* 12cfc8a4 ret  */
  ESPCHK(0x12cfc5a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c8b0 @ 0x12cfc8b0 (80 bytes, 32 insns) */
void f_12cfc8b0(void) {
  FTRACE(0x12cfc8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfc8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfc8b1 mov ebp, esp */
  EBP = (ESP);
  /* 12cfc8b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfc8b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfc8b9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cfc8bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfc8bf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12cfc8c2:;
  /* 12cfc8c2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfc8c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfc8c8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfc8cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cfc8ce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cfc8d0 je 0x12cfc8e7 */
  if (C.zf) goto L_12cfc8e7;
  /* 12cfc8d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfc8d5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cfc8d8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cfc8da je 0x12cfc8e7 */
  if (C.zf) goto L_12cfc8e7;
  /* 12cfc8dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfc8df add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfc8e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cfc8e5 jmp 0x12cfc8c2 */
  goto L_12cfc8c2;
L_12cfc8e7:;
  /* 12cfc8e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfc8ea movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cfc8ed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cfc8ef jne 0x12cfc8f9 */
  if (!C.zf) goto L_12cfc8f9;
  /* 12cfc8f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfc8f4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfc8f7 jmp 0x12cfc8fc */
  goto L_12cfc8fc;
L_12cfc8f9:;
  /* 12cfc8f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_12cfc8fc:;
  /* 12cfc8fc mov esp, ebp */
  ESP = (EBP);
  /* 12cfc8fe pop ebp */
  EBP = (pop32());
  /* 12cfc8ff ret  */
  ESPCHK(0x12cfc8b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c900 @ 0x12cfc900 (130 bytes, 43 insns) */
void f_12cfc900(void) {
  FTRACE(0x12cfc900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfc900 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfc901 mov ebp, esp */
  EBP = (ESP);
  /* 12cfc903 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfc904 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfc907 cmp eax, dword ptr [0x12d2203c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d2203c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfc90d jae 0x12cfc931 */
  if (!C.cf) goto L_12cfc931;
  /* 12cfc90f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfc912 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12cfc915 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfc918 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12cfc91b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfc91e mov eax, dword ptr [ecx*4 + 0x12d21f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12d21f00)));
  /* 12cfc925 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12cfc92a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12cfc92d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cfc92f jne 0x12cfc94c */
  if (!C.zf) goto L_12cfc94c;
L_12cfc931:;
  /* 12cfc931 call 0x12cfc080 */
  push32(0x12cfc936u); f_12cfc080();
  /* 12cfc936 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12cfc93c call 0x12cfc090 */
  push32(0x12cfc941u); f_12cfc090();
  /* 12cfc941 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12cfc947 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cfc94a jmp 0x12cfc97e */
  goto L_12cfc97e;
L_12cfc94c:;
  /* 12cfc94c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfc94f push edx */
  push32((uint32_t)(EDX));
  /* 12cfc950 call 0x12cfd8a0 */
  push32(0x12cfc955u); f_12cfd8a0();
  /* 12cfc955 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfc958 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cfc95b push eax */
  push32((uint32_t)(EAX));
  /* 12cfc95c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfc95f push ecx */
  push32((uint32_t)(ECX));
  /* 12cfc960 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfc963 push edx */
  push32((uint32_t)(EDX));
  /* 12cfc964 call 0x12cfc990 */
  push32(0x12cfc969u); f_12cfc990();
  /* 12cfc969 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfc96c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cfc96f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfc972 push eax */
  push32((uint32_t)(EAX));
  /* 12cfc973 call 0x12cfd930 */
  push32(0x12cfc978u); f_12cfd930();
  /* 12cfc978 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfc97b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12cfc97e:;
  /* 12cfc97e mov esp, ebp */
  ESP = (EBP);
  /* 12cfc980 pop ebp */
  EBP = (pop32());
  /* 12cfc981 ret  */
  ESPCHK(0x12cfc900u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c990 @ 0x12cfc990 (178 bytes, 56 insns) */
void f_12cfc990(void) {
  FTRACE(0x12cfc990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfc990 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfc991 mov ebp, esp */
  EBP = (ESP);
  /* 12cfc993 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfc996 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfc999 push eax */
  push32((uint32_t)(EAX));
  /* 12cfc99a call 0x12cfd720 */
  push32(0x12cfc99fu); f_12cfd720();
  /* 12cfc99f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfc9a2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cfc9a5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfc9a9 jne 0x12cfc9be */
  if (!C.zf) goto L_12cfc9be;
  /* 12cfc9ab call 0x12cfc080 */
  push32(0x12cfc9b0u); f_12cfc080();
  /* 12cfc9b0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12cfc9b6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cfc9b9 jmp 0x12cfca3e */
  goto L_12cfca3e;
L_12cfc9be:;
  /* 12cfc9be mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cfc9c1 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfc9c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfc9c4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfc9c7 push edx */
  push32((uint32_t)(EDX));
  /* 12cfc9c8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfc9cb push eax */
  push32((uint32_t)(EAX));
  /* 12cfc9cc call dword ptr [0x12d232c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232c0))), 0x12cfc9d2u);
  /* 12cfc9d2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cfc9d5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfc9d9 jne 0x12cfc9e6 */
  if (!C.zf) goto L_12cfc9e6;
  /* 12cfc9db call dword ptr [0x12d23348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23348))), 0x12cfc9e1u);
  /* 12cfc9e1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cfc9e4 jmp 0x12cfc9ed */
  goto L_12cfc9ed;
L_12cfc9e6:;
  /* 12cfc9e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12cfc9ed:;
  /* 12cfc9ed cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfc9f1 je 0x12cfca04 */
  if (C.zf) goto L_12cfca04;
  /* 12cfc9f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfc9f6 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfc9f7 call 0x12cfbfe0 */
  push32(0x12cfc9fcu); f_12cfbfe0();
  /* 12cfc9fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfc9ff or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cfca02 jmp 0x12cfca3e */
  goto L_12cfca3e;
L_12cfca04:;
  /* 12cfca04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfca07 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12cfca0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfca0d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12cfca10 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfca13 mov ecx, dword ptr [edx*4 + 0x12d21f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12d21f00)));
  /* 12cfca1a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 12cfca1e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 12cfca21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfca24 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12cfca27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfca2a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12cfca2d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfca30 mov eax, dword ptr [eax*4 + 0x12d21f00] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12d21f00)));
  /* 12cfca37 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 12cfca3b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12cfca3e:;
  /* 12cfca3e mov esp, ebp */
  ESP = (EBP);
  /* 12cfca40 pop ebp */
  EBP = (pop32());
  /* 12cfca41 ret  */
  ESPCHK(0x12cfc990u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca50 @ 0x12cfca50 (130 bytes, 43 insns) */
void f_12cfca50(void) {
  FTRACE(0x12cfca50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfca50 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfca51 mov ebp, esp */
  EBP = (ESP);
  /* 12cfca53 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfca54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfca57 cmp eax, dword ptr [0x12d2203c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d2203c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfca5d jae 0x12cfca81 */
  if (!C.cf) goto L_12cfca81;
  /* 12cfca5f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfca62 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12cfca65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfca68 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12cfca6b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfca6e mov eax, dword ptr [ecx*4 + 0x12d21f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12d21f00)));
  /* 12cfca75 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12cfca7a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12cfca7d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cfca7f jne 0x12cfca9c */
  if (!C.zf) goto L_12cfca9c;
L_12cfca81:;
  /* 12cfca81 call 0x12cfc080 */
  push32(0x12cfca86u); f_12cfc080();
  /* 12cfca86 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12cfca8c call 0x12cfc090 */
  push32(0x12cfca91u); f_12cfc090();
  /* 12cfca91 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12cfca97 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cfca9a jmp 0x12cfcace */
  goto L_12cfcace;
L_12cfca9c:;
  /* 12cfca9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfca9f push edx */
  push32((uint32_t)(EDX));
  /* 12cfcaa0 call 0x12cfd8a0 */
  push32(0x12cfcaa5u); f_12cfd8a0();
  /* 12cfcaa5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfcaa8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cfcaab push eax */
  push32((uint32_t)(EAX));
  /* 12cfcaac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfcaaf push ecx */
  push32((uint32_t)(ECX));
  /* 12cfcab0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfcab3 push edx */
  push32((uint32_t)(EDX));
  /* 12cfcab4 call 0x12cfcae0 */
  push32(0x12cfcab9u); f_12cfcae0();
  /* 12cfcab9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfcabc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cfcabf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfcac2 push eax */
  push32((uint32_t)(EAX));
  /* 12cfcac3 call 0x12cfd930 */
  push32(0x12cfcac8u); f_12cfd930();
  /* 12cfcac8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfcacb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12cfcace:;
  /* 12cfcace mov esp, ebp */
  ESP = (EBP);
  /* 12cfcad0 pop ebp */
  EBP = (pop32());
  /* 12cfcad1 ret  */
  ESPCHK(0x12cfca50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cae0 @ 0x12cfcae0 (627 bytes, 182 insns) */
void f_12cfcae0(void) {
  FTRACE(0x12cfcae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfcae0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfcae1 mov ebp, esp */
  EBP = (ESP);
  /* 12cfcae3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfcae9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12cfcaf0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cfcaf3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 12cfcaf9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfcafd jne 0x12cfcb06 */
  if (!C.zf) goto L_12cfcb06;
  /* 12cfcaff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfcb01 jmp 0x12cfcd4f */
  goto L_12cfcd4f;
L_12cfcb06:;
  /* 12cfcb06 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfcb09 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12cfcb0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfcb0f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12cfcb12 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfcb15 mov eax, dword ptr [ecx*4 + 0x12d21f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12d21f00)));
  /* 12cfcb1c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12cfcb21 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12cfcb24 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cfcb26 je 0x12cfcb38 */
  if (C.zf) goto L_12cfcb38;
  /* 12cfcb28 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cfcb2a push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfcb2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfcb2f push edx */
  push32((uint32_t)(EDX));
  /* 12cfcb30 call 0x12cfc990 */
  push32(0x12cfcb35u); f_12cfc990();
  /* 12cfcb35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cfcb38:;
  /* 12cfcb38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfcb3b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12cfcb3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfcb41 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12cfcb44 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfcb47 mov edx, dword ptr [eax*4 + 0x12d21f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12d21f00)));
  /* 12cfcb4e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12cfcb53 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12cfcb58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfcb5a je 0x12cfcc6c */
  if (C.zf) goto L_12cfcc6c;
  /* 12cfcb60 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfcb63 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cfcb66 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12cfcb6d:;
  /* 12cfcb6d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfcb70 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfcb73 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfcb76 jae 0x12cfcc6a */
  if (!C.cf) goto L_12cfcc6a;
  /* 12cfcb7c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 12cfcb82 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12cfcb85:;
  /* 12cfcb85 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfcb88 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 12cfcb8e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfcb90 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfcb96 jge 0x12cfcbf7 */
  if ((C.sf==C.of)) goto L_12cfcbf7;
  /* 12cfcb98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfcb9b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfcb9e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfcba1 jae 0x12cfcbf7 */
  if (!C.cf) goto L_12cfcbf7;
  /* 12cfcba3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfcba6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12cfcba8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 12cfcbae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfcbb1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfcbb4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cfcbb7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 12cfcbbe cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfcbc1 jne 0x12cfcbe1 */
  if (!C.zf) goto L_12cfcbe1;
  /* 12cfcbc3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 12cfcbc9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfcbcc mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 12cfcbd2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfcbd5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 12cfcbd8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfcbdb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfcbde mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12cfcbe1:;
  /* 12cfcbe1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfcbe4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 12cfcbea mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12cfcbec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfcbef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfcbf2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cfcbf5 jmp 0x12cfcb85 */
  goto L_12cfcb85;
L_12cfcbf7:;
  /* 12cfcbf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfcbf9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 12cfcbff push edx */
  push32((uint32_t)(EDX));
  /* 12cfcc00 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfcc03 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 12cfcc09 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfcc0b push eax */
  push32((uint32_t)(EAX));
  /* 12cfcc0c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 12cfcc12 push edx */
  push32((uint32_t)(EDX));
  /* 12cfcc13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfcc16 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12cfcc19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfcc1c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12cfcc1f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfcc22 mov edx, dword ptr [eax*4 + 0x12d21f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12d21f00)));
  /* 12cfcc29 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 12cfcc2c push eax */
  push32((uint32_t)(EAX));
  /* 12cfcc2d call dword ptr [0x12d23308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23308))), 0x12cfcc33u);
  /* 12cfcc33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfcc35 je 0x12cfcc5a */
  if (C.zf) goto L_12cfcc5a;
  /* 12cfcc37 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cfcc3a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfcc40 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12cfcc43 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfcc46 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 12cfcc4c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfcc4e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfcc54 jge 0x12cfcc58 */
  if ((C.sf==C.of)) goto L_12cfcc58;
  /* 12cfcc56 jmp 0x12cfcc6a */
  goto L_12cfcc6a;
L_12cfcc58:;
  /* 12cfcc58 jmp 0x12cfcc65 */
  goto L_12cfcc65;
L_12cfcc5a:;
  /* 12cfcc5a call dword ptr [0x12d23348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23348))), 0x12cfcc60u);
  /* 12cfcc60 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cfcc63 jmp 0x12cfcc6a */
  goto L_12cfcc6a;
L_12cfcc65:;
  /* 12cfcc65 jmp 0x12cfcb6d */
  goto L_12cfcb6d;
L_12cfcc6a:;
  /* 12cfcc6a jmp 0x12cfccbc */
  goto L_12cfccbc;
L_12cfcc6c:;
  /* 12cfcc6c push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfcc6e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 12cfcc74 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfcc75 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cfcc78 push edx */
  push32((uint32_t)(EDX));
  /* 12cfcc79 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfcc7c push eax */
  push32((uint32_t)(EAX));
  /* 12cfcc7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfcc80 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12cfcc83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfcc86 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12cfcc89 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfcc8c mov eax, dword ptr [ecx*4 + 0x12d21f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12d21f00)));
  /* 12cfcc93 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 12cfcc96 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfcc97 call dword ptr [0x12d23308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23308))), 0x12cfcc9du);
  /* 12cfcc9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfcc9f je 0x12cfccb3 */
  if (C.zf) goto L_12cfccb3;
  /* 12cfcca1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12cfcca8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 12cfccae mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12cfccb1 jmp 0x12cfccbc */
  goto L_12cfccbc;
L_12cfccb3:;
  /* 12cfccb3 call dword ptr [0x12d23348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23348))), 0x12cfccb9u);
  /* 12cfccb9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12cfccbc:;
  /* 12cfccbc cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfccc0 jne 0x12cfcd46 */
  if (!C.zf) goto L_12cfcd46;
  /* 12cfccc6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfccca je 0x12cfccfa */
  if (C.zf) goto L_12cfccfa;
  /* 12cfcccc cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfccd0 jne 0x12cfcce9 */
  if (!C.zf) goto L_12cfcce9;
  /* 12cfccd2 call 0x12cfc080 */
  push32(0x12cfccd7u); f_12cfc080();
  /* 12cfccd7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12cfccdd call 0x12cfc090 */
  push32(0x12cfcce2u); f_12cfc090();
  /* 12cfcce2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfcce5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12cfcce7 jmp 0x12cfccf5 */
  goto L_12cfccf5;
L_12cfcce9:;
  /* 12cfcce9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfccec push edx */
  push32((uint32_t)(EDX));
  /* 12cfcced call 0x12cfbfe0 */
  push32(0x12cfccf2u); f_12cfbfe0();
  /* 12cfccf2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cfccf5:;
  /* 12cfccf5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cfccf8 jmp 0x12cfcd4f */
  goto L_12cfcd4f;
L_12cfccfa:;
  /* 12cfccfa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfccfd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12cfcd00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfcd03 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12cfcd06 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfcd09 mov edx, dword ptr [eax*4 + 0x12d21f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12d21f00)));
  /* 12cfcd10 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12cfcd15 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12cfcd18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfcd1a je 0x12cfcd2b */
  if (C.zf) goto L_12cfcd2b;
  /* 12cfcd1c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfcd1f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cfcd22 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfcd25 jne 0x12cfcd2b */
  if (!C.zf) goto L_12cfcd2b;
  /* 12cfcd27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfcd29 jmp 0x12cfcd4f */
  goto L_12cfcd4f;
L_12cfcd2b:;
  /* 12cfcd2b call 0x12cfc080 */
  push32(0x12cfcd30u); f_12cfc080();
  /* 12cfcd30 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 12cfcd36 call 0x12cfc090 */
  push32(0x12cfcd3bu); f_12cfc090();
  /* 12cfcd3b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12cfcd41 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cfcd44 jmp 0x12cfcd4f */
  goto L_12cfcd4f;
L_12cfcd46:;
  /* 12cfcd46 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cfcd49 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12cfcd4f:;
  /* 12cfcd4f mov esp, ebp */
  ESP = (EBP);
  /* 12cfcd51 pop ebp */
  EBP = (pop32());
  /* 12cfcd52 ret  */
  ESPCHK(0x12cfcae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd60 @ 0x12cfcd60 (199 bytes, 68 insns) */
void f_12cfcd60(void) {
  FTRACE(0x12cfcd60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfcd60 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfcd61 mov ebp, esp */
  EBP = (ESP);
  /* 12cfcd63 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfcd64 push ebx */
  push32((uint32_t)(EBX));
  /* 12cfcd65 push esi */
  push32((uint32_t)(ESI));
  /* 12cfcd66 push edi */
  push32((uint32_t)(EDI));
L_12cfcd67:;
  /* 12cfcd67 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfcd6b jne 0x12cfcd8b */
  if (!C.zf) goto L_12cfcd8b;
  /* 12cfcd6d push 0x12d1c2f4 */
  push32((uint32_t)(0x12d1c2f4u));
  /* 12cfcd72 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfcd74 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 12cfcd76 push 0x12d1c3c0 */
  push32((uint32_t)(0x12d1c3c0u));
  /* 12cfcd7b push 2 */
  push32((uint32_t)(0x2u));
  /* 12cfcd7d call 0x12cf3270 */
  push32(0x12cfcd82u); f_12cf3270();
  /* 12cfcd82 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfcd85 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfcd88 jne 0x12cfcd8b */
  if (!C.zf) goto L_12cfcd8b;
  /* 12cfcd8a int3  */
  x86_unimpl("int3 @ 0x12cfcd8a");
L_12cfcd8b:;
  /* 12cfcd8b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfcd8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfcd8f jne 0x12cfcd67 */
  if (!C.zf) goto L_12cfcd67;
  /* 12cfcd91 mov ecx, dword ptr [0x12d20734] */
  ECX = (r32((uint32_t)(0x12d20734)));
  /* 12cfcd97 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfcd9a mov dword ptr [0x12d20734], ecx */
  w32((uint32_t)(0x12d20734), (ECX));
  /* 12cfcda0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfcda3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cfcda6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 12cfcda8 push 0x12d1c3c0 */
  push32((uint32_t)(0x12d1c3c0u));
  /* 12cfcdad push 2 */
  push32((uint32_t)(0x2u));
  /* 12cfcdaf push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12cfcdb4 call 0x12cf41b0 */
  push32(0x12cfcdb9u); f_12cf41b0();
  /* 12cfcdb9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfcdbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfcdbf mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12cfcdc2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfcdc5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfcdc9 je 0x12cfcde6 */
  if (C.zf) goto L_12cfcde6;
  /* 12cfcdcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfcdce mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12cfcdd1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12cfcdd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfcdd7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12cfcdda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfcddd mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 12cfcde4 jmp 0x12cfce0b */
  goto L_12cfce0b;
L_12cfcde6:;
  /* 12cfcde6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfcde9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12cfcdec or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12cfcdef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfcdf2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12cfcdf5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfcdf8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfcdfb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfcdfe mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12cfce01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfce04 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_12cfce0b:;
  /* 12cfce0b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfce0e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfce11 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12cfce14 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12cfce16 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfce19 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12cfce20 pop edi */
  EDI = (pop32());
  /* 12cfce21 pop esi */
  ESI = (pop32());
  /* 12cfce22 pop ebx */
  EBX = (pop32());
  /* 12cfce23 mov esp, ebp */
  ESP = (EBP);
  /* 12cfce25 pop ebp */
  EBP = (pop32());
  /* 12cfce26 ret  */
  ESPCHK(0x12cfcd60u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x12cfce30 (50 bytes, 17 insns) */
void f_12cfce30(void) {
  FTRACE(0x12cfce30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfce30 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfce31 mov ebp, esp */
  EBP = (ESP);
  /* 12cfce33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfce36 cmp eax, dword ptr [0x12d2203c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d2203c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfce3c jb 0x12cfce42 */
  if (C.cf) goto L_12cfce42;
  /* 12cfce3e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfce40 jmp 0x12cfce60 */
  goto L_12cfce60;
L_12cfce42:;
  /* 12cfce42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfce45 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12cfce48 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfce4b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12cfce4e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfce51 mov eax, dword ptr [ecx*4 + 0x12d21f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12d21f00)));
  /* 12cfce58 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12cfce5d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_12cfce60:;
  /* 12cfce60 pop ebp */
  EBP = (pop32());
  /* 12cfce61 ret  */
  ESPCHK(0x12cfce30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce70 @ 0x12cfce70 (300 bytes, 80 insns) */
void f_12cfce70(void) {
  FTRACE(0x12cfce70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfce70 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfce71 mov ebp, esp */
  EBP = (ESP);
  /* 12cfce73 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfce74 cmp dword ptr [0x12d21c00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d21c00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfce7b jne 0x12cfce89 */
  if (!C.zf) goto L_12cfce89;
  /* 12cfce7d mov dword ptr [0x12d21c00], 0x200 */
  w32((uint32_t)(0x12d21c00), (0x200u));
  /* 12cfce87 jmp 0x12cfce9c */
  goto L_12cfce9c;
L_12cfce89:;
  /* 12cfce89 cmp dword ptr [0x12d21c00], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x12d21c00))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfce90 jge 0x12cfce9c */
  if ((C.sf==C.of)) goto L_12cfce9c;
  /* 12cfce92 mov dword ptr [0x12d21c00], 0x14 */
  w32((uint32_t)(0x12d21c00), (0x14u));
L_12cfce9c:;
  /* 12cfce9c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 12cfcea1 push 0x12d1c3cc */
  push32((uint32_t)(0x12d1c3ccu));
  /* 12cfcea6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cfcea8 push 4 */
  push32((uint32_t)(0x4u));
  /* 12cfceaa mov eax, dword ptr [0x12d21c00] */
  EAX = (r32((uint32_t)(0x12d21c00)));
  /* 12cfceaf push eax */
  push32((uint32_t)(EAX));
  /* 12cfceb0 call 0x12cf45c0 */
  push32(0x12cfceb5u); f_12cf45c0();
  /* 12cfceb5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfceb8 mov dword ptr [0x12d208a8], eax */
  w32((uint32_t)(0x12d208a8), (EAX));
  /* 12cfcebd cmp dword ptr [0x12d208a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d208a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfcec4 jne 0x12cfcf05 */
  if (!C.zf) goto L_12cfcf05;
  /* 12cfcec6 mov dword ptr [0x12d21c00], 0x14 */
  w32((uint32_t)(0x12d21c00), (0x14u));
  /* 12cfced0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 12cfced5 push 0x12d1c3cc */
  push32((uint32_t)(0x12d1c3ccu));
  /* 12cfceda push 2 */
  push32((uint32_t)(0x2u));
  /* 12cfcedc push 4 */
  push32((uint32_t)(0x4u));
  /* 12cfcede mov ecx, dword ptr [0x12d21c00] */
  ECX = (r32((uint32_t)(0x12d21c00)));
  /* 12cfcee4 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfcee5 call 0x12cf45c0 */
  push32(0x12cfceeau); f_12cf45c0();
  /* 12cfceea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfceed mov dword ptr [0x12d208a8], eax */
  w32((uint32_t)(0x12d208a8), (EAX));
  /* 12cfcef2 cmp dword ptr [0x12d208a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d208a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfcef9 jne 0x12cfcf05 */
  if (!C.zf) goto L_12cfcf05;
  /* 12cfcefb push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12cfcefd call 0x12cf3120 */
  push32(0x12cfcf02u); f_12cf3120();
  /* 12cfcf02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cfcf05:;
  /* 12cfcf05 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cfcf0c jmp 0x12cfcf17 */
  goto L_12cfcf17;
L_12cfcf0e:;
  /* 12cfcf0e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfcf11 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfcf14 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12cfcf17:;
  /* 12cfcf17 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfcf1b jge 0x12cfcf36 */
  if ((C.sf==C.of)) goto L_12cfcf36;
  /* 12cfcf1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfcf20 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12cfcf23 add eax, 0x12d1f120 */
  { uint32_t _a=(EAX),_b=(0x12d1f120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfcf28 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfcf2b mov edx, dword ptr [0x12d208a8] */
  EDX = (r32((uint32_t)(0x12d208a8)));
  /* 12cfcf31 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12cfcf34 jmp 0x12cfcf0e */
  goto L_12cfcf0e;
L_12cfcf36:;
  /* 12cfcf36 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cfcf3d jmp 0x12cfcf48 */
  goto L_12cfcf48;
L_12cfcf3f:;
  /* 12cfcf3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfcf42 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfcf45 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cfcf48:;
  /* 12cfcf48 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfcf4c jge 0x12cfcf98 */
  if ((C.sf==C.of)) goto L_12cfcf98;
  /* 12cfcf4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfcf51 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12cfcf54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfcf57 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12cfcf5a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfcf5d mov eax, dword ptr [ecx*4 + 0x12d21f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12d21f00)));
  /* 12cfcf64 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfcf68 je 0x12cfcf86 */
  if (C.zf) goto L_12cfcf86;
  /* 12cfcf6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfcf6d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12cfcf70 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfcf73 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12cfcf76 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfcf79 mov eax, dword ptr [ecx*4 + 0x12d21f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12d21f00)));
  /* 12cfcf80 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfcf84 jne 0x12cfcf96 */
  if (!C.zf) goto L_12cfcf96;
L_12cfcf86:;
  /* 12cfcf86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfcf89 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12cfcf8c mov dword ptr [ecx + 0x12d1f130], 0xffffffff */
  w32((uint32_t)(ECX + 0x12d1f130), (0xffffffffu));
L_12cfcf96:;
  /* 12cfcf96 jmp 0x12cfcf3f */
  goto L_12cfcf3f;
L_12cfcf98:;
  /* 12cfcf98 mov esp, ebp */
  ESP = (EBP);
  /* 12cfcf9a pop ebp */
  EBP = (pop32());
  /* 12cfcf9b ret  */
  ESPCHK(0x12cfce70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cfa0 @ 0x12cfcfa0 (26 bytes, 9 insns) */
void f_12cfcfa0(void) {
  FTRACE(0x12cfcfa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfcfa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfcfa1 mov ebp, esp */
  EBP = (ESP);
  /* 12cfcfa3 call 0x12cfdba0 */
  push32(0x12cfcfa8u); f_12cfdba0();
  /* 12cfcfa8 movsx eax, byte ptr [0x12d2054c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x12d2054c))));
  /* 12cfcfaf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfcfb1 je 0x12cfcfb8 */
  if (C.zf) goto L_12cfcfb8;
  /* 12cfcfb3 call 0x12cfd960 */
  push32(0x12cfcfb8u); f_12cfd960();
L_12cfcfb8:;
  /* 12cfcfb8 pop ebp */
  EBP = (pop32());
  /* 12cfcfb9 ret  */
  ESPCHK(0x12cfcfa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cfc0 @ 0x12cfcfc0 (61 bytes, 20 insns) */
void f_12cfcfc0(void) {
  FTRACE(0x12cfcfc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfcfc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfcfc1 mov ebp, esp */
  EBP = (ESP);
  /* 12cfcfc3 cmp dword ptr [ebp + 8], 0x12d1f120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12d1f120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfcfca jb 0x12cfcfee */
  if (C.cf) goto L_12cfcfee;
  /* 12cfcfcc cmp dword ptr [ebp + 8], 0x12d1f380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12d1f380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfcfd3 ja 0x12cfcfee */
  if ((!C.cf&&!C.zf)) goto L_12cfcfee;
  /* 12cfcfd5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfcfd8 sub eax, 0x12d1f120 */
  { uint32_t _a=(EAX),_b=(0x12d1f120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfcfdd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12cfcfe0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfcfe3 push eax */
  push32((uint32_t)(EAX));
  /* 12cfcfe4 call 0x12cf7bb0 */
  push32(0x12cfcfe9u); f_12cf7bb0();
  /* 12cfcfe9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfcfec jmp 0x12cfcffb */
  goto L_12cfcffb;
L_12cfcfee:;
  /* 12cfcfee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfcff1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfcff4 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfcff5 call dword ptr [0x12d23394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23394))), 0x12cfcffbu);
L_12cfcffb:;
  /* 12cfcffb pop ebp */
  EBP = (pop32());
  /* 12cfcffc ret  */
  ESPCHK(0x12cfcfc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d000 @ 0x12cfd000 (41 bytes, 16 insns) */
void f_12cfd000(void) {
  FTRACE(0x12cfd000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfd000 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfd001 mov ebp, esp */
  EBP = (ESP);
  /* 12cfd003 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd007 jge 0x12cfd01a */
  if ((C.sf==C.of)) goto L_12cfd01a;
  /* 12cfd009 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfd00c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfd00f push eax */
  push32((uint32_t)(EAX));
  /* 12cfd010 call 0x12cf7bb0 */
  push32(0x12cfd015u); f_12cf7bb0();
  /* 12cfd015 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfd018 jmp 0x12cfd027 */
  goto L_12cfd027;
L_12cfd01a:;
  /* 12cfd01a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfd01d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfd020 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfd021 call dword ptr [0x12d23394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23394))), 0x12cfd027u);
L_12cfd027:;
  /* 12cfd027 pop ebp */
  EBP = (pop32());
  /* 12cfd028 ret  */
  ESPCHK(0x12cfd000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d030 @ 0x12cfd030 (61 bytes, 20 insns) */
void f_12cfd030(void) {
  FTRACE(0x12cfd030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfd030 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfd031 mov ebp, esp */
  EBP = (ESP);
  /* 12cfd033 cmp dword ptr [ebp + 8], 0x12d1f120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12d1f120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd03a jb 0x12cfd05e */
  if (C.cf) goto L_12cfd05e;
  /* 12cfd03c cmp dword ptr [ebp + 8], 0x12d1f380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12d1f380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd043 ja 0x12cfd05e */
  if ((!C.cf&&!C.zf)) goto L_12cfd05e;
  /* 12cfd045 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfd048 sub eax, 0x12d1f120 */
  { uint32_t _a=(EAX),_b=(0x12d1f120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfd04d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12cfd050 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfd053 push eax */
  push32((uint32_t)(EAX));
  /* 12cfd054 call 0x12cf7c50 */
  push32(0x12cfd059u); f_12cf7c50();
  /* 12cfd059 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfd05c jmp 0x12cfd06b */
  goto L_12cfd06b;
L_12cfd05e:;
  /* 12cfd05e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfd061 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfd064 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfd065 call dword ptr [0x12d23398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23398))), 0x12cfd06bu);
L_12cfd06b:;
  /* 12cfd06b pop ebp */
  EBP = (pop32());
  /* 12cfd06c ret  */
  ESPCHK(0x12cfd030u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d070 @ 0x12cfd070 (41 bytes, 16 insns) */
void f_12cfd070(void) {
  FTRACE(0x12cfd070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfd070 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfd071 mov ebp, esp */
  EBP = (ESP);
  /* 12cfd073 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd077 jge 0x12cfd08a */
  if ((C.sf==C.of)) goto L_12cfd08a;
  /* 12cfd079 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfd07c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfd07f push eax */
  push32((uint32_t)(EAX));
  /* 12cfd080 call 0x12cf7c50 */
  push32(0x12cfd085u); f_12cf7c50();
  /* 12cfd085 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfd088 jmp 0x12cfd097 */
  goto L_12cfd097;
L_12cfd08a:;
  /* 12cfd08a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfd08d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfd090 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfd091 call dword ptr [0x12d23398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23398))), 0x12cfd097u);
L_12cfd097:;
  /* 12cfd097 pop ebp */
  EBP = (pop32());
  /* 12cfd098 ret  */
  ESPCHK(0x12cfd070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d0a0 @ 0x12cfd0a0 (119 bytes, 34 insns) */
void f_12cfd0a0(void) {
  FTRACE(0x12cfd0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfd0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfd0a1 mov ebp, esp */
  EBP = (ESP);
  /* 12cfd0a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfd0a6 push 0x12d208a4 */
  push32((uint32_t)(0x12d208a4u));
  /* 12cfd0ab call dword ptr [0x12d2331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2331c))), 0x12cfd0b1u);
  /* 12cfd0b1 cmp dword ptr [0x12d20894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd0b8 je 0x12cfd0d8 */
  if (C.zf) goto L_12cfd0d8;
  /* 12cfd0ba push 0x12d208a4 */
  push32((uint32_t)(0x12d208a4u));
  /* 12cfd0bf call dword ptr [0x12d2330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2330c))), 0x12cfd0c5u);
  /* 12cfd0c5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12cfd0c7 call 0x12cf7bb0 */
  push32(0x12cfd0ccu); f_12cf7bb0();
  /* 12cfd0cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfd0cf mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12cfd0d6 jmp 0x12cfd0df */
  goto L_12cfd0df;
L_12cfd0d8:;
  /* 12cfd0d8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12cfd0df:;
  /* 12cfd0df mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 12cfd0e3 push eax */
  push32((uint32_t)(EAX));
  /* 12cfd0e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfd0e7 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfd0e8 call 0x12cfd120 */
  push32(0x12cfd0edu); f_12cfd120();
  /* 12cfd0ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfd0f0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cfd0f3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd0f7 je 0x12cfd105 */
  if (C.zf) goto L_12cfd105;
  /* 12cfd0f9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12cfd0fb call 0x12cf7c50 */
  push32(0x12cfd100u); f_12cf7c50();
  /* 12cfd100 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfd103 jmp 0x12cfd110 */
  goto L_12cfd110;
L_12cfd105:;
  /* 12cfd105 push 0x12d208a4 */
  push32((uint32_t)(0x12d208a4u));
  /* 12cfd10a call dword ptr [0x12d2330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2330c))), 0x12cfd110u);
L_12cfd110:;
  /* 12cfd110 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfd113 mov esp, ebp */
  ESP = (EBP);
  /* 12cfd115 pop ebp */
  EBP = (pop32());
  /* 12cfd116 ret  */
  ESPCHK(0x12cfd0a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d120 @ 0x12cfd120 (160 bytes, 50 insns) */
void f_12cfd120(void) {
  FTRACE(0x12cfd120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfd120 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfd121 mov ebp, esp */
  EBP = (ESP);
  /* 12cfd123 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfd126 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd12a jne 0x12cfd133 */
  if (!C.zf) goto L_12cfd133;
  /* 12cfd12c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfd12e jmp 0x12cfd1bc */
  goto L_12cfd1bc;
L_12cfd133:;
  /* 12cfd133 cmp dword ptr [0x12d20718], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20718))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd13a jne 0x12cfd16a */
  if (!C.zf) goto L_12cfd16a;
  /* 12cfd13c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfd13f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cfd144 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd149 jle 0x12cfd15b */
  if ((C.zf||C.sf!=C.of)) goto L_12cfd15b;
  /* 12cfd14b call 0x12cfc080 */
  push32(0x12cfd150u); f_12cfc080();
  /* 12cfd150 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 12cfd156 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cfd159 jmp 0x12cfd1bc */
  goto L_12cfd1bc;
L_12cfd15b:;
  /* 12cfd15b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfd15e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 12cfd161 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 12cfd163 mov eax, 1 */
  EAX = (0x1u);
  /* 12cfd168 jmp 0x12cfd1bc */
  goto L_12cfd1bc;
L_12cfd16a:;
  /* 12cfd16a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12cfd171 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12cfd174 push eax */
  push32((uint32_t)(EAX));
  /* 12cfd175 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfd177 mov ecx, dword ptr [0x12d1eea4] */
  ECX = (r32((uint32_t)(0x12d1eea4)));
  /* 12cfd17d push ecx */
  push32((uint32_t)(ECX));
  /* 12cfd17e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfd181 push edx */
  push32((uint32_t)(EDX));
  /* 12cfd182 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfd184 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 12cfd187 push eax */
  push32((uint32_t)(EAX));
  /* 12cfd188 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12cfd18d mov ecx, dword ptr [0x12d20728] */
  ECX = (r32((uint32_t)(0x12d20728)));
  /* 12cfd193 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfd194 call dword ptr [0x12d23370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23370))), 0x12cfd19au);
  /* 12cfd19a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cfd19d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd1a1 je 0x12cfd1a9 */
  if (C.zf) goto L_12cfd1a9;
  /* 12cfd1a3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd1a7 je 0x12cfd1b9 */
  if (C.zf) goto L_12cfd1b9;
L_12cfd1a9:;
  /* 12cfd1a9 call 0x12cfc080 */
  push32(0x12cfd1aeu); f_12cfc080();
  /* 12cfd1ae mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 12cfd1b4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cfd1b7 jmp 0x12cfd1bc */
  goto L_12cfd1bc;
L_12cfd1b9:;
  /* 12cfd1b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12cfd1bc:;
  /* 12cfd1bc mov esp, ebp */
  ESP = (EBP);
  /* 12cfd1be pop ebp */
  EBP = (pop32());
  /* 12cfd1bf ret  */
  ESPCHK(0x12cfd120u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x12cfd1c0 (32 bytes, 18 insns) */
void f_12cfd1c0(void) {
  FTRACE(0x12cfd1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfd1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfd1c1 mov ebp, esp */
  EBP = (ESP);
  /* 12cfd1c3 push ebx */
  push32((uint32_t)(EBX));
  /* 12cfd1c4 push esi */
  push32((uint32_t)(ESI));
  /* 12cfd1c5 push edi */
  push32((uint32_t)(EDI));
  /* 12cfd1c6 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfd1c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfd1c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfd1cb push 0x12cfd1d8 */
  push32((uint32_t)(0x12cfd1d8u));
  /* 12cfd1d0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12cfd1d3 call 0x12d0490c */
  push32(0x12cfd1d8u); f_12d0490c();
  /* 12cfd1d8 pop ebp */
  EBP = (pop32());
  /* 12cfd1d9 pop edi */
  EDI = (pop32());
  /* 12cfd1da pop esi */
  ESI = (pop32());
  /* 12cfd1db pop ebx */
  EBX = (pop32());
  /* 12cfd1dc mov esp, ebp */
  ESP = (EBP);
  /* 12cfd1de pop ebp */
  EBP = (pop32());
  /* 12cfd1df ret  */
  ESPCHK(0x12cfd1c0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x12cfd202 (104 bytes, 33 insns) */
void f_12cfd202(void) {
  FTRACE(0x12cfd202u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfd202 push ebx */
  push32((uint32_t)(EBX));
  /* 12cfd203 push esi */
  push32((uint32_t)(ESI));
  /* 12cfd204 push edi */
  push32((uint32_t)(EDI));
  /* 12cfd205 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12cfd209 push eax */
  push32((uint32_t)(EAX));
  /* 12cfd20a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 12cfd20c push 0x12cfd1e0 */
  push32((uint32_t)(0x12cfd1e0u));
  /* 12cfd211 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 12cfd218 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_12cfd21f:;
  /* 12cfd21f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 12cfd223 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 12cfd226 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 12cfd229 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd22c je 0x12cfd25c */
  if (C.zf) goto L_12cfd25c;
  /* 12cfd22e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd232 je 0x12cfd25c */
  if (C.zf) goto L_12cfd25c;
  /* 12cfd234 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 12cfd237 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 12cfd23a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 12cfd23e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 12cfd241 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd246 jne 0x12cfd25a */
  if (!C.zf) goto L_12cfd25a;
  /* 12cfd248 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 12cfd24d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 12cfd251 call 0x12cfd296 */
  push32(0x12cfd256u); f_12cfd296();
  /* 12cfd256 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x12cfd25au);
L_12cfd25a:;
  /* 12cfd25a jmp 0x12cfd21f */
  goto L_12cfd21f;
L_12cfd25c:;
  /* 12cfd25c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 12cfd263 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfd266 pop edi */
  EDI = (pop32());
  /* 12cfd267 pop esi */
  ESI = (pop32());
  /* 12cfd268 pop ebx */
  EBX = (pop32());
  /* 12cfd269 ret  */
  ESPCHK(0x12cfd202u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d296 @ 0x12cfd296 (24 bytes, 10 insns) */
void f_12cfd296(void) {
  FTRACE(0x12cfd296u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfd296 push ebx */
  push32((uint32_t)(EBX));
  /* 12cfd297 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfd298 mov ebx, 0x12d1f3b8 */
  EBX = (0x12d1f3b8u);
  /* 12cfd29d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfd2a0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 12cfd2a3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 12cfd2a6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 12cfd2a9 pop ecx */
  ECX = (pop32());
  /* 12cfd2aa pop ebx */
  EBX = (pop32());
  /* 12cfd2ab ret 4 */
  ESPCHK(0x12cfd296u, _esp0);
  ESP += 8; return;
}

/* FUN_1000d375 @ 0x12cfd375 (27 bytes, 11 insns) */
void f_12cfd375(void) {
  FTRACE(0x12cfd375u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfd375 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfd376 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12cfd37a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 12cfd37c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12cfd37f push eax */
  push32((uint32_t)(EAX));
  /* 12cfd380 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 12cfd383 push eax */
  push32((uint32_t)(EAX));
  /* 12cfd384 call 0x12cfd202 */
  push32(0x12cfd389u); f_12cfd202();
  /* 12cfd389 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfd38c pop ebp */
  EBP = (pop32());
  /* 12cfd38d ret 4 */
  ESPCHK(0x12cfd375u, _esp0);
  ESP += 8; return;
}

/* FUN_1000d390 @ 0x12cfd390 (482 bytes, 138 insns) */
void f_12cfd390(void) {
  FTRACE(0x12cfd390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfd390 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfd391 mov ebp, esp */
  EBP = (ESP);
  /* 12cfd393 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfd396 push esi */
  push32((uint32_t)(ESI));
  /* 12cfd397 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 12cfd39e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12cfd3a0 call 0x12cf7bb0 */
  push32(0x12cfd3a5u); f_12cf7bb0();
  /* 12cfd3a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfd3a8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12cfd3af jmp 0x12cfd3ba */
  goto L_12cfd3ba;
L_12cfd3b1:;
  /* 12cfd3b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfd3b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfd3b7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12cfd3ba:;
  /* 12cfd3ba cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd3be jge 0x12cfd560 */
  if ((C.sf==C.of)) goto L_12cfd560;
  /* 12cfd3c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfd3c7 cmp dword ptr [ecx*4 + 0x12d21f00], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12d21f00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd3cf je 0x12cfd4c6 */
  if (C.zf) goto L_12cfd4c6;
  /* 12cfd3d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfd3d8 mov eax, dword ptr [edx*4 + 0x12d21f00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12d21f00)));
  /* 12cfd3df mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cfd3e2 jmp 0x12cfd3ed */
  goto L_12cfd3ed;
L_12cfd3e4:;
  /* 12cfd3e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfd3e7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfd3ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12cfd3ed:;
  /* 12cfd3ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfd3f0 mov eax, dword ptr [edx*4 + 0x12d21f00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12d21f00)));
  /* 12cfd3f7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfd3fc cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd3ff jae 0x12cfd4b6 */
  if (!C.cf) goto L_12cfd4b6;
  /* 12cfd405 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfd408 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12cfd40c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12cfd40f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cfd411 jne 0x12cfd4b1 */
  if (!C.zf) goto L_12cfd4b1;
  /* 12cfd417 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfd41a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd41e jne 0x12cfd459 */
  if (!C.zf) goto L_12cfd459;
  /* 12cfd420 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12cfd422 call 0x12cf7bb0 */
  push32(0x12cfd427u); f_12cf7bb0();
  /* 12cfd427 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfd42a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfd42d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd431 jne 0x12cfd44f */
  if (!C.zf) goto L_12cfd44f;
  /* 12cfd433 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfd436 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfd439 push edx */
  push32((uint32_t)(EDX));
  /* 12cfd43a call dword ptr [0x12d23390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23390))), 0x12cfd440u);
  /* 12cfd440 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfd443 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12cfd446 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfd449 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfd44c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_12cfd44f:;
  /* 12cfd44f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12cfd451 call 0x12cf7c50 */
  push32(0x12cfd456u); f_12cf7c50();
  /* 12cfd456 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cfd459:;
  /* 12cfd459 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfd45c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfd45f push eax */
  push32((uint32_t)(EAX));
  /* 12cfd460 call dword ptr [0x12d23394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23394))), 0x12cfd466u);
  /* 12cfd466 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfd469 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12cfd46d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12cfd470 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cfd472 je 0x12cfd486 */
  if (C.zf) goto L_12cfd486;
  /* 12cfd474 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfd477 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfd47a push eax */
  push32((uint32_t)(EAX));
  /* 12cfd47b call dword ptr [0x12d23398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23398))), 0x12cfd481u);
  /* 12cfd481 jmp 0x12cfd3e4 */
  goto L_12cfd3e4;
L_12cfd486:;
  /* 12cfd486 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfd489 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12cfd48f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfd492 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12cfd495 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfd498 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfd49b sub eax, dword ptr [edx*4 + 0x12d21f00] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x12d21f00))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfd4a2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12cfd4a3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 12cfd4a8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12cfd4aa add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfd4ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cfd4af jmp 0x12cfd4b6 */
  goto L_12cfd4b6;
L_12cfd4b1:;
  /* 12cfd4b1 jmp 0x12cfd3e4 */
  goto L_12cfd3e4;
L_12cfd4b6:;
  /* 12cfd4b6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd4ba je 0x12cfd4c1 */
  if (C.zf) goto L_12cfd4c1;
  /* 12cfd4bc jmp 0x12cfd560 */
  goto L_12cfd560;
L_12cfd4c1:;
  /* 12cfd4c1 jmp 0x12cfd55b */
  goto L_12cfd55b;
L_12cfd4c6:;
  /* 12cfd4c6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12cfd4c8 push 0x12d1c3d4 */
  push32((uint32_t)(0x12d1c3d4u));
  /* 12cfd4cd push 2 */
  push32((uint32_t)(0x2u));
  /* 12cfd4cf push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12cfd4d4 call 0x12cf41b0 */
  push32(0x12cfd4d9u); f_12cf41b0();
  /* 12cfd4d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfd4dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cfd4df cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd4e3 je 0x12cfd559 */
  if (C.zf) goto L_12cfd559;
  /* 12cfd4e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfd4e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfd4eb mov dword ptr [eax*4 + 0x12d21f00], ecx */
  w32((uint32_t)(EAX*4 + 0x12d21f00), (ECX));
  /* 12cfd4f2 mov edx, dword ptr [0x12d2203c] */
  EDX = (r32((uint32_t)(0x12d2203c)));
  /* 12cfd4f8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfd4fb mov dword ptr [0x12d2203c], edx */
  w32((uint32_t)(0x12d2203c), (EDX));
  /* 12cfd501 jmp 0x12cfd50c */
  goto L_12cfd50c;
L_12cfd503:;
  /* 12cfd503 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfd506 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfd509 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cfd50c:;
  /* 12cfd50c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfd50f mov edx, dword ptr [ecx*4 + 0x12d21f00] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12d21f00)));
  /* 12cfd516 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfd51c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd51f jae 0x12cfd544 */
  if (!C.cf) goto L_12cfd544;
  /* 12cfd521 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfd524 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12cfd528 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfd52b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12cfd531 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfd534 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12cfd538 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfd53b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12cfd542 jmp 0x12cfd503 */
  goto L_12cfd503;
L_12cfd544:;
  /* 12cfd544 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfd547 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12cfd54a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cfd54d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfd550 push edx */
  push32((uint32_t)(EDX));
  /* 12cfd551 call 0x12cfd8a0 */
  push32(0x12cfd556u); f_12cfd8a0();
  /* 12cfd556 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cfd559:;
  /* 12cfd559 jmp 0x12cfd560 */
  goto L_12cfd560;
L_12cfd55b:;
  /* 12cfd55b jmp 0x12cfd3b1 */
  goto L_12cfd3b1;
L_12cfd560:;
  /* 12cfd560 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12cfd562 call 0x12cf7c50 */
  push32(0x12cfd567u); f_12cf7c50();
  /* 12cfd567 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfd56a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfd56d pop esi */
  ESI = (pop32());
  /* 12cfd56e mov esp, ebp */
  ESP = (EBP);
  /* 12cfd570 pop ebp */
  EBP = (pop32());
  /* 12cfd571 ret  */
  ESPCHK(0x12cfd390u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x12cfd580 (183 bytes, 57 insns) */
void f_12cfd580(void) {
  FTRACE(0x12cfd580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfd580 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfd581 mov ebp, esp */
  EBP = (ESP);
  /* 12cfd583 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfd584 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfd587 cmp eax, dword ptr [0x12d2203c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d2203c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd58d jae 0x12cfd61a */
  if (!C.cf) goto L_12cfd61a;
  /* 12cfd593 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfd596 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12cfd599 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfd59c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12cfd59f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfd5a2 mov eax, dword ptr [ecx*4 + 0x12d21f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12d21f00)));
  /* 12cfd5a9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd5ad jne 0x12cfd61a */
  if (!C.zf) goto L_12cfd61a;
  /* 12cfd5af cmp dword ptr [0x12d2050c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d2050c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd5b6 jne 0x12cfd5fa */
  if (!C.zf) goto L_12cfd5fa;
  /* 12cfd5b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfd5bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cfd5be cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd5c2 je 0x12cfd5d2 */
  if (C.zf) goto L_12cfd5d2;
  /* 12cfd5c4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd5c8 je 0x12cfd5e0 */
  if (C.zf) goto L_12cfd5e0;
  /* 12cfd5ca cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd5ce je 0x12cfd5ee */
  if (C.zf) goto L_12cfd5ee;
  /* 12cfd5d0 jmp 0x12cfd5fa */
  goto L_12cfd5fa;
L_12cfd5d2:;
  /* 12cfd5d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfd5d5 push edx */
  push32((uint32_t)(EDX));
  /* 12cfd5d6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 12cfd5d8 call dword ptr [0x12d232b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232b8))), 0x12cfd5deu);
  /* 12cfd5de jmp 0x12cfd5fa */
  goto L_12cfd5fa;
L_12cfd5e0:;
  /* 12cfd5e0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfd5e3 push eax */
  push32((uint32_t)(EAX));
  /* 12cfd5e4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12cfd5e6 call dword ptr [0x12d232b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232b8))), 0x12cfd5ecu);
  /* 12cfd5ec jmp 0x12cfd5fa */
  goto L_12cfd5fa;
L_12cfd5ee:;
  /* 12cfd5ee mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfd5f1 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfd5f2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12cfd5f4 call dword ptr [0x12d232b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232b8))), 0x12cfd5fau);
L_12cfd5fa:;
  /* 12cfd5fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfd5fd sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12cfd600 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfd603 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12cfd606 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfd609 mov ecx, dword ptr [edx*4 + 0x12d21f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12d21f00)));
  /* 12cfd610 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfd613 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 12cfd616 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfd618 jmp 0x12cfd633 */
  goto L_12cfd633;
L_12cfd61a:;
  /* 12cfd61a call 0x12cfc080 */
  push32(0x12cfd61fu); f_12cfc080();
  /* 12cfd61f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12cfd625 call 0x12cfc090 */
  push32(0x12cfd62au); f_12cfc090();
  /* 12cfd62a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12cfd630 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12cfd633:;
  /* 12cfd633 mov esp, ebp */
  ESP = (EBP);
  /* 12cfd635 pop ebp */
  EBP = (pop32());
  /* 12cfd636 ret  */
  ESPCHK(0x12cfd580u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d640 @ 0x12cfd640 (216 bytes, 63 insns) */
void f_12cfd640(void) {
  FTRACE(0x12cfd640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfd640 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfd641 mov ebp, esp */
  EBP = (ESP);
  /* 12cfd643 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfd644 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfd647 cmp eax, dword ptr [0x12d2203c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d2203c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd64d jae 0x12cfd6fb */
  if (!C.cf) goto L_12cfd6fb;
  /* 12cfd653 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfd656 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12cfd659 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfd65c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12cfd65f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfd662 mov eax, dword ptr [ecx*4 + 0x12d21f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12d21f00)));
  /* 12cfd669 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12cfd66e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12cfd671 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cfd673 je 0x12cfd6fb */
  if (C.zf) goto L_12cfd6fb;
  /* 12cfd679 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfd67c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12cfd67f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfd682 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12cfd685 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfd688 mov ecx, dword ptr [edx*4 + 0x12d21f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12d21f00)));
  /* 12cfd68f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd693 je 0x12cfd6fb */
  if (C.zf) goto L_12cfd6fb;
  /* 12cfd695 cmp dword ptr [0x12d2050c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d2050c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd69c jne 0x12cfd6da */
  if (!C.zf) goto L_12cfd6da;
  /* 12cfd69e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfd6a1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cfd6a4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd6a8 je 0x12cfd6b8 */
  if (C.zf) goto L_12cfd6b8;
  /* 12cfd6aa cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd6ae je 0x12cfd6c4 */
  if (C.zf) goto L_12cfd6c4;
  /* 12cfd6b0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd6b4 je 0x12cfd6d0 */
  if (C.zf) goto L_12cfd6d0;
  /* 12cfd6b6 jmp 0x12cfd6da */
  goto L_12cfd6da;
L_12cfd6b8:;
  /* 12cfd6b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfd6ba push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 12cfd6bc call dword ptr [0x12d232b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232b8))), 0x12cfd6c2u);
  /* 12cfd6c2 jmp 0x12cfd6da */
  goto L_12cfd6da;
L_12cfd6c4:;
  /* 12cfd6c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfd6c6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12cfd6c8 call dword ptr [0x12d232b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232b8))), 0x12cfd6ceu);
  /* 12cfd6ce jmp 0x12cfd6da */
  goto L_12cfd6da;
L_12cfd6d0:;
  /* 12cfd6d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfd6d2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12cfd6d4 call dword ptr [0x12d232b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232b8))), 0x12cfd6dau);
L_12cfd6da:;
  /* 12cfd6da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfd6dd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12cfd6e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfd6e3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12cfd6e6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfd6e9 mov edx, dword ptr [eax*4 + 0x12d21f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12d21f00)));
  /* 12cfd6f0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 12cfd6f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfd6f9 jmp 0x12cfd714 */
  goto L_12cfd714;
L_12cfd6fb:;
  /* 12cfd6fb call 0x12cfc080 */
  push32(0x12cfd700u); f_12cfc080();
  /* 12cfd700 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12cfd706 call 0x12cfc090 */
  push32(0x12cfd70bu); f_12cfc090();
  /* 12cfd70b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12cfd711 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12cfd714:;
  /* 12cfd714 mov esp, ebp */
  ESP = (EBP);
  /* 12cfd716 pop ebp */
  EBP = (pop32());
  /* 12cfd717 ret  */
  ESPCHK(0x12cfd640u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d720 @ 0x12cfd720 (102 bytes, 30 insns) */
void f_12cfd720(void) {
  FTRACE(0x12cfd720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfd720 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfd721 mov ebp, esp */
  EBP = (ESP);
  /* 12cfd723 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfd726 cmp eax, dword ptr [0x12d2203c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d2203c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd72c jae 0x12cfd76b */
  if (!C.cf) goto L_12cfd76b;
  /* 12cfd72e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfd731 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12cfd734 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfd737 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12cfd73a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfd73d mov eax, dword ptr [ecx*4 + 0x12d21f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12d21f00)));
  /* 12cfd744 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12cfd749 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12cfd74c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cfd74e je 0x12cfd76b */
  if (C.zf) goto L_12cfd76b;
  /* 12cfd750 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfd753 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12cfd756 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfd759 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12cfd75c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfd75f mov ecx, dword ptr [edx*4 + 0x12d21f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12d21f00)));
  /* 12cfd766 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 12cfd769 jmp 0x12cfd784 */
  goto L_12cfd784;
L_12cfd76b:;
  /* 12cfd76b call 0x12cfc080 */
  push32(0x12cfd770u); f_12cfc080();
  /* 12cfd770 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12cfd776 call 0x12cfc090 */
  push32(0x12cfd77bu); f_12cfc090();
  /* 12cfd77b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12cfd781 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12cfd784:;
  /* 12cfd784 pop ebp */
  EBP = (pop32());
  /* 12cfd785 ret  */
  ESPCHK(0x12cfd720u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d790 @ 0x12cfd790 (260 bytes, 83 insns) */
void f_12cfd790(void) {
  FTRACE(0x12cfd790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfd790 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfd791 mov ebp, esp */
  EBP = (ESP);
  /* 12cfd793 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfd796 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 12cfd79a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfd79d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12cfd7a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfd7a2 je 0x12cfd7ad */
  if (C.zf) goto L_12cfd7ad;
  /* 12cfd7a4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 12cfd7a7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12cfd7aa mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_12cfd7ad:;
  /* 12cfd7ad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfd7b0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 12cfd7b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cfd7b8 je 0x12cfd7c2 */
  if (C.zf) goto L_12cfd7c2;
  /* 12cfd7ba mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12cfd7bd or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 12cfd7bf mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_12cfd7c2:;
  /* 12cfd7c2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfd7c5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 12cfd7cb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cfd7cd je 0x12cfd7d8 */
  if (C.zf) goto L_12cfd7d8;
  /* 12cfd7cf mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12cfd7d2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 12cfd7d5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_12cfd7d8:;
  /* 12cfd7d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfd7db push eax */
  push32((uint32_t)(EAX));
  /* 12cfd7dc call dword ptr [0x12d23350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23350))), 0x12cfd7e2u);
  /* 12cfd7e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cfd7e5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd7e9 jne 0x12cfd802 */
  if (!C.zf) goto L_12cfd802;
  /* 12cfd7eb call dword ptr [0x12d23348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23348))), 0x12cfd7f1u);
  /* 12cfd7f1 push eax */
  push32((uint32_t)(EAX));
  /* 12cfd7f2 call 0x12cfbfe0 */
  push32(0x12cfd7f7u); f_12cfbfe0();
  /* 12cfd7f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfd7fa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cfd7fd jmp 0x12cfd890 */
  goto L_12cfd890;
L_12cfd802:;
  /* 12cfd802 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd806 jne 0x12cfd813 */
  if (!C.zf) goto L_12cfd813;
  /* 12cfd808 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 12cfd80b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12cfd80e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 12cfd811 jmp 0x12cfd822 */
  goto L_12cfd822;
L_12cfd813:;
  /* 12cfd813 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd817 jne 0x12cfd822 */
  if (!C.zf) goto L_12cfd822;
  /* 12cfd819 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12cfd81c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 12cfd81f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_12cfd822:;
  /* 12cfd822 call 0x12cfd390 */
  push32(0x12cfd827u); f_12cfd390();
  /* 12cfd827 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cfd82a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd82e jne 0x12cfd84b */
  if (!C.zf) goto L_12cfd84b;
  /* 12cfd830 call 0x12cfc080 */
  push32(0x12cfd835u); f_12cfc080();
  /* 12cfd835 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 12cfd83b call 0x12cfc090 */
  push32(0x12cfd840u); f_12cfc090();
  /* 12cfd840 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12cfd846 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cfd849 jmp 0x12cfd890 */
  goto L_12cfd890;
L_12cfd84b:;
  /* 12cfd84b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfd84e push eax */
  push32((uint32_t)(EAX));
  /* 12cfd84f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfd852 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfd853 call 0x12cfd580 */
  push32(0x12cfd858u); f_12cfd580();
  /* 12cfd858 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfd85b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12cfd85e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 12cfd861 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12cfd864 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfd867 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12cfd86a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfd86d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12cfd870 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfd873 mov edx, dword ptr [eax*4 + 0x12d21f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12d21f00)));
  /* 12cfd87a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12cfd87d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 12cfd881 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfd884 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfd885 call 0x12cfd930 */
  push32(0x12cfd88au); f_12cfd930();
  /* 12cfd88a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfd88d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12cfd890:;
  /* 12cfd890 mov esp, ebp */
  ESP = (EBP);
  /* 12cfd892 pop ebp */
  EBP = (pop32());
  /* 12cfd893 ret  */
  ESPCHK(0x12cfd790u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8a0 @ 0x12cfd8a0 (134 bytes, 44 insns) */
void f_12cfd8a0(void) {
  FTRACE(0x12cfd8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfd8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfd8a1 mov ebp, esp */
  EBP = (ESP);
  /* 12cfd8a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfd8a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfd8a7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12cfd8aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfd8ad and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12cfd8b0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfd8b3 mov edx, dword ptr [eax*4 + 0x12d21f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12d21f00)));
  /* 12cfd8ba add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfd8bc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cfd8bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfd8c2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd8c6 jne 0x12cfd901 */
  if (!C.zf) goto L_12cfd901;
  /* 12cfd8c8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12cfd8ca call 0x12cf7bb0 */
  push32(0x12cfd8cfu); f_12cf7bb0();
  /* 12cfd8cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfd8d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfd8d5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd8d9 jne 0x12cfd8f7 */
  if (!C.zf) goto L_12cfd8f7;
  /* 12cfd8db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfd8de add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfd8e1 push edx */
  push32((uint32_t)(EDX));
  /* 12cfd8e2 call dword ptr [0x12d23390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23390))), 0x12cfd8e8u);
  /* 12cfd8e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfd8eb mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12cfd8ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfd8f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfd8f4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_12cfd8f7:;
  /* 12cfd8f7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12cfd8f9 call 0x12cf7c50 */
  push32(0x12cfd8feu); f_12cf7c50();
  /* 12cfd8fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cfd901:;
  /* 12cfd901 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfd904 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12cfd907 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfd90a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12cfd90d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfd910 mov edx, dword ptr [eax*4 + 0x12d21f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12d21f00)));
  /* 12cfd917 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 12cfd91b push eax */
  push32((uint32_t)(EAX));
  /* 12cfd91c call dword ptr [0x12d23394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23394))), 0x12cfd922u);
  /* 12cfd922 mov esp, ebp */
  ESP = (EBP);
  /* 12cfd924 pop ebp */
  EBP = (pop32());
  /* 12cfd925 ret  */
  ESPCHK(0x12cfd8a0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x12cfd930 (38 bytes, 13 insns) */
void f_12cfd930(void) {
  FTRACE(0x12cfd930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfd930 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfd931 mov ebp, esp */
  EBP = (ESP);
  /* 12cfd933 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfd936 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12cfd939 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfd93c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12cfd93f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfd942 mov edx, dword ptr [eax*4 + 0x12d21f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12d21f00)));
  /* 12cfd949 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 12cfd94d push eax */
  push32((uint32_t)(EAX));
  /* 12cfd94e call dword ptr [0x12d23398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23398))), 0x12cfd954u);
  /* 12cfd954 pop ebp */
  EBP = (pop32());
  /* 12cfd955 ret  */
  ESPCHK(0x12cfd930u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d960 @ 0x12cfd960 (218 bytes, 63 insns) */
void f_12cfd960(void) {
  FTRACE(0x12cfd960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfd960 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfd961 mov ebp, esp */
  EBP = (ESP);
  /* 12cfd963 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfd966 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cfd96d push 2 */
  push32((uint32_t)(0x2u));
  /* 12cfd96f call 0x12cf7bb0 */
  push32(0x12cfd974u); f_12cf7bb0();
  /* 12cfd974 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfd977 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 12cfd97e jmp 0x12cfd989 */
  goto L_12cfd989;
L_12cfd980:;
  /* 12cfd980 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfd983 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfd986 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12cfd989:;
  /* 12cfd989 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfd98c cmp ecx, dword ptr [0x12d21c00] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d21c00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd992 jge 0x12cfda29 */
  if ((C.sf==C.of)) goto L_12cfda29;
  /* 12cfd998 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfd99b mov eax, dword ptr [0x12d208a8] */
  EAX = (r32((uint32_t)(0x12d208a8)));
  /* 12cfd9a0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd9a4 je 0x12cfda24 */
  if (C.zf) goto L_12cfda24;
  /* 12cfd9a6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfd9a9 mov edx, dword ptr [0x12d208a8] */
  EDX = (r32((uint32_t)(0x12d208a8)));
  /* 12cfd9af mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12cfd9b2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12cfd9b5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 12cfd9bb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cfd9bd je 0x12cfd9e1 */
  if (C.zf) goto L_12cfd9e1;
  /* 12cfd9bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfd9c2 mov eax, dword ptr [0x12d208a8] */
  EAX = (r32((uint32_t)(0x12d208a8)));
  /* 12cfd9c7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12cfd9ca push ecx */
  push32((uint32_t)(ECX));
  /* 12cfd9cb call 0x12cfe750 */
  push32(0x12cfd9d0u); f_12cfe750();
  /* 12cfd9d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfd9d3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd9d6 je 0x12cfd9e1 */
  if (C.zf) goto L_12cfd9e1;
  /* 12cfd9d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfd9db add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfd9de mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12cfd9e1:;
  /* 12cfd9e1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfd9e5 jl 0x12cfda24 */
  if ((C.sf!=C.of)) goto L_12cfda24;
  /* 12cfd9e7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfd9ea mov ecx, dword ptr [0x12d208a8] */
  ECX = (r32((uint32_t)(0x12d208a8)));
  /* 12cfd9f0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12cfd9f3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfd9f6 push edx */
  push32((uint32_t)(EDX));
  /* 12cfd9f7 call dword ptr [0x12d23358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23358))), 0x12cfd9fdu);
  /* 12cfd9fd push 2 */
  push32((uint32_t)(0x2u));
  /* 12cfd9ff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfda02 mov ecx, dword ptr [0x12d208a8] */
  ECX = (r32((uint32_t)(0x12d208a8)));
  /* 12cfda08 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12cfda0b push edx */
  push32((uint32_t)(EDX));
  /* 12cfda0c call 0x12cf4c40 */
  push32(0x12cfda11u); f_12cf4c40();
  /* 12cfda11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfda14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfda17 mov ecx, dword ptr [0x12d208a8] */
  ECX = (r32((uint32_t)(0x12d208a8)));
  /* 12cfda1d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_12cfda24:;
  /* 12cfda24 jmp 0x12cfd980 */
  goto L_12cfd980;
L_12cfda29:;
  /* 12cfda29 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cfda2b call 0x12cf7c50 */
  push32(0x12cfda30u); f_12cf7c50();
  /* 12cfda30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfda33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfda36 mov esp, ebp */
  ESP = (EBP);
  /* 12cfda38 pop ebp */
  EBP = (pop32());
  /* 12cfda39 ret  */
  ESPCHK(0x12cfd960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da40 @ 0x12cfda40 (68 bytes, 26 insns) */
void f_12cfda40(void) {
  FTRACE(0x12cfda40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfda40 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfda41 mov ebp, esp */
  EBP = (ESP);
  /* 12cfda43 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfda44 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfda48 jne 0x12cfda56 */
  if (!C.zf) goto L_12cfda56;
  /* 12cfda4a push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfda4c call 0x12cfdbb0 */
  push32(0x12cfda51u); f_12cfdbb0();
  /* 12cfda51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfda54 jmp 0x12cfda80 */
  goto L_12cfda80;
L_12cfda56:;
  /* 12cfda56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfda59 push eax */
  push32((uint32_t)(EAX));
  /* 12cfda5a call 0x12cfcfc0 */
  push32(0x12cfda5fu); f_12cfcfc0();
  /* 12cfda5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfda62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfda65 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfda66 call 0x12cfda90 */
  push32(0x12cfda6bu); f_12cfda90();
  /* 12cfda6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfda6e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cfda71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfda74 push edx */
  push32((uint32_t)(EDX));
  /* 12cfda75 call 0x12cfd030 */
  push32(0x12cfda7au); f_12cfd030();
  /* 12cfda7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfda7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12cfda80:;
  /* 12cfda80 mov esp, ebp */
  ESP = (EBP);
  /* 12cfda82 pop ebp */
  EBP = (pop32());
  /* 12cfda83 ret  */
  ESPCHK(0x12cfda40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da90 @ 0x12cfda90 (65 bytes, 26 insns) */
void f_12cfda90(void) {
  FTRACE(0x12cfda90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfda90 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfda91 mov ebp, esp */
  EBP = (ESP);
  /* 12cfda93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfda96 push eax */
  push32((uint32_t)(EAX));
  /* 12cfda97 call 0x12cfdae0 */
  push32(0x12cfda9cu); f_12cfdae0();
  /* 12cfda9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfda9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfdaa1 je 0x12cfdaa8 */
  if (C.zf) goto L_12cfdaa8;
  /* 12cfdaa3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cfdaa6 jmp 0x12cfdacf */
  goto L_12cfdacf;
L_12cfdaa8:;
  /* 12cfdaa8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfdaab mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12cfdaae and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 12cfdab4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cfdab6 je 0x12cfdacd */
  if (C.zf) goto L_12cfdacd;
  /* 12cfdab8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfdabb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12cfdabe push ecx */
  push32((uint32_t)(ECX));
  /* 12cfdabf call 0x12cfe8a0 */
  push32(0x12cfdac4u); f_12cfe8a0();
  /* 12cfdac4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfdac7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cfdac9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfdacb jmp 0x12cfdacf */
  goto L_12cfdacf;
L_12cfdacd:;
  /* 12cfdacd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cfdacf:;
  /* 12cfdacf pop ebp */
  EBP = (pop32());
  /* 12cfdad0 ret  */
  ESPCHK(0x12cfda90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dae0 @ 0x12cfdae0 (183 bytes, 62 insns) */
void f_12cfdae0(void) {
  FTRACE(0x12cfdae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfdae0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfdae1 mov ebp, esp */
  EBP = (ESP);
  /* 12cfdae3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfdae6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cfdaed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfdaf0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cfdaf3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfdaf6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12cfdaf9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12cfdafc cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfdaff jne 0x12cfdb7b */
  if (!C.zf) goto L_12cfdb7b;
  /* 12cfdb01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfdb04 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12cfdb07 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 12cfdb0d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cfdb0f je 0x12cfdb7b */
  if (C.zf) goto L_12cfdb7b;
  /* 12cfdb11 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfdb14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfdb17 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12cfdb19 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfdb1c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfdb1f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfdb23 jle 0x12cfdb7b */
  if ((C.zf||C.sf!=C.of)) goto L_12cfdb7b;
  /* 12cfdb25 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfdb28 push edx */
  push32((uint32_t)(EDX));
  /* 12cfdb29 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfdb2c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12cfdb2f push ecx */
  push32((uint32_t)(ECX));
  /* 12cfdb30 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfdb33 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12cfdb36 push eax */
  push32((uint32_t)(EAX));
  /* 12cfdb37 call 0x12cfca50 */
  push32(0x12cfdb3cu); f_12cfca50();
  /* 12cfdb3c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfdb3f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfdb42 jne 0x12cfdb65 */
  if (!C.zf) goto L_12cfdb65;
  /* 12cfdb44 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfdb47 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12cfdb4a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 12cfdb50 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cfdb52 je 0x12cfdb63 */
  if (C.zf) goto L_12cfdb63;
  /* 12cfdb54 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfdb57 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12cfdb5a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 12cfdb5d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfdb60 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_12cfdb63:;
  /* 12cfdb63 jmp 0x12cfdb7b */
  goto L_12cfdb7b;
L_12cfdb65:;
  /* 12cfdb65 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfdb68 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12cfdb6b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12cfdb6e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfdb71 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12cfdb74 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12cfdb7b:;
  /* 12cfdb7b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfdb7e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfdb81 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12cfdb84 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12cfdb86 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfdb89 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 12cfdb90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfdb93 mov esp, ebp */
  ESP = (EBP);
  /* 12cfdb95 pop ebp */
  EBP = (pop32());
  /* 12cfdb96 ret  */
  ESPCHK(0x12cfdae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dba0 @ 0x12cfdba0 (15 bytes, 7 insns) */
void f_12cfdba0(void) {
  FTRACE(0x12cfdba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfdba0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfdba1 mov ebp, esp */
  EBP = (ESP);
  /* 12cfdba3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfdba5 call 0x12cfdbb0 */
  push32(0x12cfdbaau); f_12cfdbb0();
  /* 12cfdbaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfdbad pop ebp */
  EBP = (pop32());
  /* 12cfdbae ret  */
  ESPCHK(0x12cfdba0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dbb0 @ 0x12cfdbb0 (319 bytes, 94 insns) */
void f_12cfdbb0(void) {
  FTRACE(0x12cfdbb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfdbb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfdbb1 mov ebp, esp */
  EBP = (ESP);
  /* 12cfdbb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfdbb6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cfdbbd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12cfdbc4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cfdbc6 call 0x12cf7bb0 */
  push32(0x12cfdbcbu); f_12cf7bb0();
  /* 12cfdbcb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfdbce mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12cfdbd5 jmp 0x12cfdbe0 */
  goto L_12cfdbe0;
L_12cfdbd7:;
  /* 12cfdbd7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfdbda add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfdbdd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12cfdbe0:;
  /* 12cfdbe0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfdbe3 cmp ecx, dword ptr [0x12d21c00] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12d21c00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfdbe9 jge 0x12cfdcd3 */
  if ((C.sf==C.of)) goto L_12cfdcd3;
  /* 12cfdbef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfdbf2 mov eax, dword ptr [0x12d208a8] */
  EAX = (r32((uint32_t)(0x12d208a8)));
  /* 12cfdbf7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfdbfb je 0x12cfdcce */
  if (C.zf) goto L_12cfdcce;
  /* 12cfdc01 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfdc04 mov edx, dword ptr [0x12d208a8] */
  EDX = (r32((uint32_t)(0x12d208a8)));
  /* 12cfdc0a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12cfdc0d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12cfdc10 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 12cfdc16 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cfdc18 je 0x12cfdcce */
  if (C.zf) goto L_12cfdcce;
  /* 12cfdc1e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfdc21 mov eax, dword ptr [0x12d208a8] */
  EAX = (r32((uint32_t)(0x12d208a8)));
  /* 12cfdc26 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12cfdc29 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfdc2a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfdc2d push edx */
  push32((uint32_t)(EDX));
  /* 12cfdc2e call 0x12cfd000 */
  push32(0x12cfdc33u); f_12cfd000();
  /* 12cfdc33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfdc36 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfdc39 mov ecx, dword ptr [0x12d208a8] */
  ECX = (r32((uint32_t)(0x12d208a8)));
  /* 12cfdc3f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12cfdc42 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12cfdc45 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 12cfdc4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfdc4c je 0x12cfdcb5 */
  if (C.zf) goto L_12cfdcb5;
  /* 12cfdc4e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfdc52 jne 0x12cfdc79 */
  if (!C.zf) goto L_12cfdc79;
  /* 12cfdc54 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfdc57 mov edx, dword ptr [0x12d208a8] */
  EDX = (r32((uint32_t)(0x12d208a8)));
  /* 12cfdc5d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12cfdc60 push eax */
  push32((uint32_t)(EAX));
  /* 12cfdc61 call 0x12cfda90 */
  push32(0x12cfdc66u); f_12cfda90();
  /* 12cfdc66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfdc69 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfdc6c je 0x12cfdc77 */
  if (C.zf) goto L_12cfdc77;
  /* 12cfdc6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfdc71 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfdc74 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12cfdc77:;
  /* 12cfdc77 jmp 0x12cfdcb5 */
  goto L_12cfdcb5;
L_12cfdc79:;
  /* 12cfdc79 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfdc7d jne 0x12cfdcb5 */
  if (!C.zf) goto L_12cfdcb5;
  /* 12cfdc7f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfdc82 mov eax, dword ptr [0x12d208a8] */
  EAX = (r32((uint32_t)(0x12d208a8)));
  /* 12cfdc87 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12cfdc8a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12cfdc8d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12cfdc90 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cfdc92 je 0x12cfdcb5 */
  if (C.zf) goto L_12cfdcb5;
  /* 12cfdc94 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfdc97 mov ecx, dword ptr [0x12d208a8] */
  ECX = (r32((uint32_t)(0x12d208a8)));
  /* 12cfdc9d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12cfdca0 push edx */
  push32((uint32_t)(EDX));
  /* 12cfdca1 call 0x12cfda90 */
  push32(0x12cfdca6u); f_12cfda90();
  /* 12cfdca6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfdca9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfdcac jne 0x12cfdcb5 */
  if (!C.zf) goto L_12cfdcb5;
  /* 12cfdcae mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_12cfdcb5:;
  /* 12cfdcb5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfdcb8 mov ecx, dword ptr [0x12d208a8] */
  ECX = (r32((uint32_t)(0x12d208a8)));
  /* 12cfdcbe mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12cfdcc1 push edx */
  push32((uint32_t)(EDX));
  /* 12cfdcc2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfdcc5 push eax */
  push32((uint32_t)(EAX));
  /* 12cfdcc6 call 0x12cfd070 */
  push32(0x12cfdccbu); f_12cfd070();
  /* 12cfdccb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cfdcce:;
  /* 12cfdcce jmp 0x12cfdbd7 */
  goto L_12cfdbd7;
L_12cfdcd3:;
  /* 12cfdcd3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cfdcd5 call 0x12cf7c50 */
  push32(0x12cfdcdau); f_12cf7c50();
  /* 12cfdcda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfdcdd cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfdce1 jne 0x12cfdce8 */
  if (!C.zf) goto L_12cfdce8;
  /* 12cfdce3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfdce6 jmp 0x12cfdceb */
  goto L_12cfdceb;
L_12cfdce8:;
  /* 12cfdce8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12cfdceb:;
  /* 12cfdceb mov esp, ebp */
  ESP = (EBP);
  /* 12cfdced pop ebp */
  EBP = (pop32());
  /* 12cfdcee ret  */
  ESPCHK(0x12cfdbb0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x12cfdcf0 (15 bytes, 7 insns) */
void f_12cfdcf0(void) {
  FTRACE(0x12cfdcf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfdcf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfdcf1 mov ebp, esp */
  EBP = (ESP);
  /* 12cfdcf3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cfdcf5 call 0x12cf3120 */
  push32(0x12cfdcfau); f_12cf3120();
  /* 12cfdcfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfdcfd pop ebp */
  EBP = (pop32());
  /* 12cfdcfe ret  */
  ESPCHK(0x12cfdcf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd00 @ 0x12cfdd00 (1007 bytes, 269 insns) */
void f_12cfdd00(void) {
  FTRACE(0x12cfdd00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfdd00 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfdd01 mov ebp, esp */
  EBP = (ESP);
  /* 12cfdd03 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfdd09 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfdd0d jl 0x12cfdd15 */
  if ((C.sf!=C.of)) goto L_12cfdd15;
  /* 12cfdd0f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfdd13 jle 0x12cfdd1c */
  if ((C.zf||C.sf!=C.of)) goto L_12cfdd1c;
L_12cfdd15:;
  /* 12cfdd15 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfdd17 jmp 0x12cfe0eb */
  goto L_12cfe0eb;
L_12cfdd1c:;
  /* 12cfdd1c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12cfdd1e call 0x12cf7bb0 */
  push32(0x12cfdd23u); f_12cf7bb0();
  /* 12cfdd23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfdd26 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12cfdd2d mov eax, dword ptr [0x12d20894] */
  EAX = (r32((uint32_t)(0x12d20894)));
  /* 12cfdd32 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfdd35 mov dword ptr [0x12d20894], eax */
  w32((uint32_t)(0x12d20894), (EAX));
L_12cfdd3a:;
  /* 12cfdd3a cmp dword ptr [0x12d208a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d208a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfdd41 je 0x12cfdd4d */
  if (C.zf) goto L_12cfdd4d;
  /* 12cfdd43 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfdd45 call dword ptr [0x12d232b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232b4))), 0x12cfdd4bu);
  /* 12cfdd4b jmp 0x12cfdd3a */
  goto L_12cfdd3a;
L_12cfdd4d:;
  /* 12cfdd4d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfdd51 je 0x12cfdd91 */
  if (C.zf) goto L_12cfdd91;
  /* 12cfdd53 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfdd57 je 0x12cfdd71 */
  if (C.zf) goto L_12cfdd71;
  /* 12cfdd59 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfdd5c push ecx */
  push32((uint32_t)(ECX));
  /* 12cfdd5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfdd60 push edx */
  push32((uint32_t)(EDX));
  /* 12cfdd61 call 0x12cfe0f0 */
  push32(0x12cfdd66u); f_12cfe0f0();
  /* 12cfdd66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfdd69 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12cfdd6f jmp 0x12cfdd83 */
  goto L_12cfdd83;
L_12cfdd71:;
  /* 12cfdd71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfdd74 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfdd77 mov ecx, dword ptr [eax + 0x12d1f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x12d1f4dc)));
  /* 12cfdd7d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_12cfdd83:;
  /* 12cfdd83 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 12cfdd89 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12cfdd8c jmp 0x12cfe0cb */
  goto L_12cfe0cb;
L_12cfdd91:;
  /* 12cfdd91 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 12cfdd98 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12cfdd9f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfdda3 je 0x12cfe0c3 */
  if (C.zf) goto L_12cfe0c3;
  /* 12cfdda9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfddac movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cfddaf cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfddb2 jne 0x12cfdfd4 */
  if (!C.zf) goto L_12cfdfd4;
  /* 12cfddb8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfddbb movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12cfddbf cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfddc2 jne 0x12cfdfd4 */
  if (!C.zf) goto L_12cfdfd4;
  /* 12cfddc8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfddcb movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 12cfddcf cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfddd2 jne 0x12cfdfd4 */
  if (!C.zf) goto L_12cfdfd4;
  /* 12cfddd8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfdddb mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_12cfdde1:;
  /* 12cfdde1 push 0x12d1c424 */
  push32((uint32_t)(0x12d1c424u));
  /* 12cfdde6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12cfddec push ecx */
  push32((uint32_t)(ECX));
  /* 12cfdded call 0x12cfff50 */
  push32(0x12cfddf2u); f_12cfff50();
  /* 12cfddf2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfddf5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 12cfddfb cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfde02 je 0x12cfde2d */
  if (C.zf) goto L_12cfde2d;
  /* 12cfde04 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12cfde0a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfde10 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 12cfde16 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfde1d je 0x12cfde2d */
  if (C.zf) goto L_12cfde2d;
  /* 12cfde1f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12cfde25 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cfde28 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfde2b jne 0x12cfde53 */
  if (!C.zf) goto L_12cfde53;
L_12cfde2d:;
  /* 12cfde2d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfde31 je 0x12cfde4c */
  if (C.zf) goto L_12cfde4c;
  /* 12cfde33 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12cfde35 call 0x12cf7c50 */
  push32(0x12cfde3au); f_12cf7c50();
  /* 12cfde3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfde3d mov edx, dword ptr [0x12d20894] */
  EDX = (r32((uint32_t)(0x12d20894)));
  /* 12cfde43 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfde46 mov dword ptr [0x12d20894], edx */
  w32((uint32_t)(0x12d20894), (EDX));
L_12cfde4c:;
  /* 12cfde4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfde4e jmp 0x12cfe0eb */
  goto L_12cfe0eb;
L_12cfde53:;
  /* 12cfde53 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12cfde5a jmp 0x12cfde65 */
  goto L_12cfde65;
L_12cfde5c:;
  /* 12cfde5c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cfde5f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfde62 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12cfde65:;
  /* 12cfde65 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfde69 jg 0x12cfdeb3 */
  if ((!C.zf&&C.sf==C.of)) goto L_12cfdeb3;
  /* 12cfde6b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12cfde71 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfde72 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12cfde78 push edx */
  push32((uint32_t)(EDX));
  /* 12cfde79 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cfde7c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfde7f mov ecx, dword ptr [eax + 0x12d1f4d8] */
  ECX = (r32((uint32_t)(EAX + 0x12d1f4d8)));
  /* 12cfde85 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfde86 call 0x12cfff10 */
  push32(0x12cfde8bu); f_12cfff10();
  /* 12cfde8b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfde8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfde90 jne 0x12cfdeb1 */
  if (!C.zf) goto L_12cfdeb1;
  /* 12cfde92 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cfde95 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfde98 mov eax, dword ptr [edx + 0x12d1f4d8] */
  EAX = (r32((uint32_t)(EDX + 0x12d1f4d8)));
  /* 12cfde9e push eax */
  push32((uint32_t)(EAX));
  /* 12cfde9f call 0x12cf6fe0 */
  push32(0x12cfdea4u); f_12cf6fe0();
  /* 12cfdea4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfdea7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfdead jne 0x12cfdeb1 */
  if (!C.zf) goto L_12cfdeb1;
  /* 12cfdeaf jmp 0x12cfdeb3 */
  goto L_12cfdeb3;
L_12cfdeb1:;
  /* 12cfdeb1 jmp 0x12cfde5c */
  goto L_12cfde5c;
L_12cfdeb3:;
  /* 12cfdeb3 push 0x12d1c420 */
  push32((uint32_t)(0x12d1c420u));
  /* 12cfdeb8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12cfdebe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfdec1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 12cfdec7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12cfdecd push edx */
  push32((uint32_t)(EDX));
  /* 12cfdece call 0x12cffed0 */
  push32(0x12cfded3u); f_12cffed0();
  /* 12cfded3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfded6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 12cfdedc cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfdee3 jne 0x12cfdf19 */
  if (!C.zf) goto L_12cfdf19;
  /* 12cfdee5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12cfdeeb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cfdeee cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfdef1 je 0x12cfdf19 */
  if (C.zf) goto L_12cfdf19;
  /* 12cfdef3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfdef7 je 0x12cfdf12 */
  if (C.zf) goto L_12cfdf12;
  /* 12cfdef9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12cfdefb call 0x12cf7c50 */
  push32(0x12cfdf00u); f_12cf7c50();
  /* 12cfdf00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfdf03 mov edx, dword ptr [0x12d20894] */
  EDX = (r32((uint32_t)(0x12d20894)));
  /* 12cfdf09 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfdf0c mov dword ptr [0x12d20894], edx */
  w32((uint32_t)(0x12d20894), (EDX));
L_12cfdf12:;
  /* 12cfdf12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfdf14 jmp 0x12cfe0eb */
  goto L_12cfe0eb;
L_12cfdf19:;
  /* 12cfdf19 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfdf1d jg 0x12cfdf6a */
  if ((!C.zf&&C.sf==C.of)) goto L_12cfdf6a;
  /* 12cfdf1f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12cfdf25 push eax */
  push32((uint32_t)(EAX));
  /* 12cfdf26 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12cfdf2c push ecx */
  push32((uint32_t)(ECX));
  /* 12cfdf2d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 12cfdf33 push edx */
  push32((uint32_t)(EDX));
  /* 12cfdf34 call 0x12cf79d0 */
  push32(0x12cfdf39u); f_12cf79d0();
  /* 12cfdf39 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfdf3c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12cfdf42 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 12cfdf4a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 12cfdf50 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfdf51 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cfdf54 push edx */
  push32((uint32_t)(EDX));
  /* 12cfdf55 call 0x12cfe0f0 */
  push32(0x12cfdf5au); f_12cfe0f0();
  /* 12cfdf5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfdf5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfdf5f je 0x12cfdf6a */
  if (C.zf) goto L_12cfdf6a;
  /* 12cfdf61 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfdf64 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfdf67 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12cfdf6a:;
  /* 12cfdf6a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12cfdf70 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfdf76 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12cfdf7c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12cfdf82 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12cfdf85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfdf87 je 0x12cfdf98 */
  if (C.zf) goto L_12cfdf98;
  /* 12cfdf89 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12cfdf8f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfdf92 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_12cfdf98:;
  /* 12cfdf98 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12cfdf9e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12cfdfa1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfdfa3 jne 0x12cfdde1 */
  if (!C.zf) goto L_12cfdde1;
  /* 12cfdfa9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfdfad je 0x12cfdfbc */
  if (C.zf) goto L_12cfdfbc;
  /* 12cfdfaf call 0x12cfe290 */
  push32(0x12cfdfb4u); f_12cfe290();
  /* 12cfdfb4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 12cfdfba jmp 0x12cfdfc6 */
  goto L_12cfdfc6;
L_12cfdfbc:;
  /* 12cfdfbc mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_12cfdfc6:;
  /* 12cfdfc6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 12cfdfcc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cfdfcf jmp 0x12cfe0c1 */
  goto L_12cfe0c1;
L_12cfdfd4:;
  /* 12cfdfd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfdfd7 push edx */
  push32((uint32_t)(EDX));
  /* 12cfdfd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfdfda push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfdfdc lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 12cfdfe2 push eax */
  push32((uint32_t)(EAX));
  /* 12cfdfe3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfdfe6 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfdfe7 call 0x12cfe390 */
  push32(0x12cfdfecu); f_12cfe390();
  /* 12cfdfec add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfdfef mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cfdff2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfdff6 je 0x12cfe0c1 */
  if (C.zf) goto L_12cfe0c1;
  /* 12cfdffc mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12cfe003 jmp 0x12cfe00e */
  goto L_12cfe00e;
L_12cfe005:;
  /* 12cfe005 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cfe008 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe00b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12cfe00e:;
  /* 12cfe00e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfe012 jg 0x12cfe070 */
  if ((!C.zf&&C.sf==C.of)) goto L_12cfe070;
  /* 12cfe014 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfe018 je 0x12cfe06e */
  if (C.zf) goto L_12cfe06e;
  /* 12cfe01a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cfe01d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfe020 mov ecx, dword ptr [eax + 0x12d1f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x12d1f4dc)));
  /* 12cfe026 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfe027 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 12cfe02d push edx */
  push32((uint32_t)(EDX));
  /* 12cfe02e call 0x12cffe40 */
  push32(0x12cfe033u); f_12cffe40();
  /* 12cfe033 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe036 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfe038 je 0x12cfe065 */
  if (C.zf) goto L_12cfe065;
  /* 12cfe03a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 12cfe040 push eax */
  push32((uint32_t)(EAX));
  /* 12cfe041 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cfe044 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfe045 call 0x12cfe0f0 */
  push32(0x12cfe04au); f_12cfe0f0();
  /* 12cfe04a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe04d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfe04f je 0x12cfe05c */
  if (C.zf) goto L_12cfe05c;
  /* 12cfe051 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfe054 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe057 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12cfe05a jmp 0x12cfe063 */
  goto L_12cfe063;
L_12cfe05c:;
  /* 12cfe05c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12cfe063:;
  /* 12cfe063 jmp 0x12cfe06e */
  goto L_12cfe06e;
L_12cfe065:;
  /* 12cfe065 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfe068 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe06b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12cfe06e:;
  /* 12cfe06e jmp 0x12cfe005 */
  goto L_12cfe005;
L_12cfe070:;
  /* 12cfe070 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfe074 je 0x12cfe09b */
  if (C.zf) goto L_12cfe09b;
  /* 12cfe076 call 0x12cfe290 */
  push32(0x12cfe07bu); f_12cfe290();
  /* 12cfe07b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cfe07e push 2 */
  push32((uint32_t)(0x2u));
  /* 12cfe080 mov ecx, dword ptr [0x12d1f4dc] */
  ECX = (r32((uint32_t)(0x12d1f4dc)));
  /* 12cfe086 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfe087 call 0x12cf4c40 */
  push32(0x12cfe08cu); f_12cf4c40();
  /* 12cfe08c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe08f mov dword ptr [0x12d1f4dc], 0 */
  w32((uint32_t)(0x12d1f4dc), (0x0u));
  /* 12cfe099 jmp 0x12cfe0c1 */
  goto L_12cfe0c1;
L_12cfe09b:;
  /* 12cfe09b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfe09f je 0x12cfe0ae */
  if (C.zf) goto L_12cfe0ae;
  /* 12cfe0a1 call 0x12cfe290 */
  push32(0x12cfe0a6u); f_12cfe290();
  /* 12cfe0a6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 12cfe0ac jmp 0x12cfe0b8 */
  goto L_12cfe0b8;
L_12cfe0ae:;
  /* 12cfe0ae mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_12cfe0b8:;
  /* 12cfe0b8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 12cfe0be mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12cfe0c1:;
  /* 12cfe0c1 jmp 0x12cfe0cb */
  goto L_12cfe0cb;
L_12cfe0c3:;
  /* 12cfe0c3 call 0x12cfe290 */
  push32(0x12cfe0c8u); f_12cfe290();
  /* 12cfe0c8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12cfe0cb:;
  /* 12cfe0cb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfe0cf je 0x12cfe0e8 */
  if (C.zf) goto L_12cfe0e8;
  /* 12cfe0d1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12cfe0d3 call 0x12cf7c50 */
  push32(0x12cfe0d8u); f_12cf7c50();
  /* 12cfe0d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe0db mov eax, dword ptr [0x12d20894] */
  EAX = (r32((uint32_t)(0x12d20894)));
  /* 12cfe0e0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfe0e3 mov dword ptr [0x12d20894], eax */
  w32((uint32_t)(0x12d20894), (EAX));
L_12cfe0e8:;
  /* 12cfe0e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12cfe0eb:;
  /* 12cfe0eb mov esp, ebp */
  ESP = (EBP);
  /* 12cfe0ed pop ebp */
  EBP = (pop32());
  /* 12cfe0ee ret  */
  ESPCHK(0x12cfdd00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0f0 @ 0x12cfe0f0 (403 bytes, 117 insns) */
void f_12cfe0f0(void) {
  FTRACE(0x12cfe0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfe0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfe0f1 mov ebp, esp */
  EBP = (ESP);
  /* 12cfe0f3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfe0f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfe0fc push eax */
  push32((uint32_t)(EAX));
  /* 12cfe0fd lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 12cfe103 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfe104 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 12cfe10a push edx */
  push32((uint32_t)(EDX));
  /* 12cfe10b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 12cfe111 push eax */
  push32((uint32_t)(EAX));
  /* 12cfe112 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfe115 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfe116 call 0x12cfe390 */
  push32(0x12cfe11bu); f_12cfe390();
  /* 12cfe11b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe11e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfe120 jne 0x12cfe129 */
  if (!C.zf) goto L_12cfe129;
  /* 12cfe122 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfe124 jmp 0x12cfe27f */
  goto L_12cfe27f;
L_12cfe129:;
  /* 12cfe129 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 12cfe12e push 0x12d1c428 */
  push32((uint32_t)(0x12d1c428u));
  /* 12cfe133 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cfe135 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 12cfe13b push edx */
  push32((uint32_t)(EDX));
  /* 12cfe13c call 0x12cf6fe0 */
  push32(0x12cfe141u); f_12cf6fe0();
  /* 12cfe141 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe144 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe147 push eax */
  push32((uint32_t)(EAX));
  /* 12cfe148 call 0x12cf41b0 */
  push32(0x12cfe14du); f_12cf41b0();
  /* 12cfe14d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe150 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cfe153 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfe157 jne 0x12cfe160 */
  if (!C.zf) goto L_12cfe160;
  /* 12cfe159 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfe15b jmp 0x12cfe27f */
  goto L_12cfe27f;
L_12cfe160:;
  /* 12cfe160 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfe163 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfe166 mov ecx, dword ptr [eax + 0x12d1f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x12d1f4dc)));
  /* 12cfe16c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfe16f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfe172 mov eax, dword ptr [edx*4 + 0x12d20710] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12d20710)));
  /* 12cfe179 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cfe17c push 6 */
  push32((uint32_t)(0x6u));
  /* 12cfe17e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfe181 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfe184 add ecx, 0x12d20760 */
  { uint32_t _a=(ECX),_b=(0x12d20760u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe18a push ecx */
  push32((uint32_t)(ECX));
  /* 12cfe18b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 12cfe18e push edx */
  push32((uint32_t)(EDX));
  /* 12cfe18f call 0x12cfaa90 */
  push32(0x12cfe194u); f_12cfaa90();
  /* 12cfe194 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe197 mov eax, dword ptr [0x12d20728] */
  EAX = (r32((uint32_t)(0x12d20728)));
  /* 12cfe19c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12cfe19f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 12cfe1a5 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfe1a6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfe1a9 push edx */
  push32((uint32_t)(EDX));
  /* 12cfe1aa call 0x12cf7160 */
  push32(0x12cfe1afu); f_12cf7160();
  /* 12cfe1af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe1b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfe1b5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfe1b8 mov dword ptr [ecx + 0x12d1f4dc], eax */
  w32((uint32_t)(ECX + 0x12d1f4dc), (EAX));
  /* 12cfe1be mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 12cfe1c4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cfe1ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfe1cd mov dword ptr [eax*4 + 0x12d20710], edx */
  w32((uint32_t)(EAX*4 + 0x12d20710), (EDX));
  /* 12cfe1d4 push 6 */
  push32((uint32_t)(0x6u));
  /* 12cfe1d6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 12cfe1dc push ecx */
  push32((uint32_t)(ECX));
  /* 12cfe1dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfe1e0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfe1e3 add edx, 0x12d20760 */
  { uint32_t _a=(EDX),_b=(0x12d20760u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe1e9 push edx */
  push32((uint32_t)(EDX));
  /* 12cfe1ea call 0x12cfaa90 */
  push32(0x12cfe1efu); f_12cfaa90();
  /* 12cfe1ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe1f2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfe1f6 jne 0x12cfe203 */
  if (!C.zf) goto L_12cfe203;
  /* 12cfe1f8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12cfe1fe mov dword ptr [0x12d20728], eax */
  w32((uint32_t)(0x12d20728), (EAX));
L_12cfe203:;
  /* 12cfe203 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfe207 jne 0x12cfe215 */
  if (!C.zf) goto L_12cfe215;
  /* 12cfe209 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12cfe20f mov dword ptr [0x12d2072c], ecx */
  w32((uint32_t)(0x12d2072c), (ECX));
L_12cfe215:;
  /* 12cfe215 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfe218 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfe21b call dword ptr [edx + 0x12d1f4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x12d1f4e0))), 0x12cfe221u);
  /* 12cfe221 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfe223 je 0x12cfe25c */
  if (C.zf) goto L_12cfe25c;
  /* 12cfe225 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfe228 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfe22b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfe22e mov dword ptr [eax + 0x12d1f4dc], ecx */
  w32((uint32_t)(EAX + 0x12d1f4dc), (ECX));
  /* 12cfe234 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cfe236 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfe239 push edx */
  push32((uint32_t)(EDX));
  /* 12cfe23a call 0x12cf4c40 */
  push32(0x12cfe23fu); f_12cf4c40();
  /* 12cfe23f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe242 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfe245 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfe248 mov dword ptr [eax*4 + 0x12d20710], ecx */
  w32((uint32_t)(EAX*4 + 0x12d20710), (ECX));
  /* 12cfe24f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cfe252 mov dword ptr [0x12d20728], edx */
  w32((uint32_t)(0x12d20728), (EDX));
  /* 12cfe258 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfe25a jmp 0x12cfe27f */
  goto L_12cfe27f;
L_12cfe25c:;
  /* 12cfe25c cmp dword ptr [ebp - 0xc], 0x12d1f3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x12d1f3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfe263 je 0x12cfe273 */
  if (C.zf) goto L_12cfe273;
  /* 12cfe265 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cfe267 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfe26a push eax */
  push32((uint32_t)(EAX));
  /* 12cfe26b call 0x12cf4c40 */
  push32(0x12cfe270u); f_12cf4c40();
  /* 12cfe270 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cfe273:;
  /* 12cfe273 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfe276 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfe279 mov eax, dword ptr [ecx + 0x12d1f4dc] */
  EAX = (r32((uint32_t)(ECX + 0x12d1f4dc)));
L_12cfe27f:;
  /* 12cfe27f mov esp, ebp */
  ESP = (EBP);
  /* 12cfe281 pop ebp */
  EBP = (pop32());
  /* 12cfe282 ret  */
  ESPCHK(0x12cfe0f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e290 @ 0x12cfe290 (256 bytes, 72 insns) */
void f_12cfe290(void) {
  FTRACE(0x12cfe290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfe290 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfe291 mov ebp, esp */
  EBP = (ESP);
  /* 12cfe293 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfe296 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12cfe29d cmp dword ptr [0x12d1f4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d1f4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfe2a4 jne 0x12cfe2c4 */
  if (!C.zf) goto L_12cfe2c4;
  /* 12cfe2a6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 12cfe2ab push 0x12d1c428 */
  push32((uint32_t)(0x12d1c428u));
  /* 12cfe2b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cfe2b2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 12cfe2b7 call 0x12cf41b0 */
  push32(0x12cfe2bcu); f_12cf41b0();
  /* 12cfe2bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe2bf mov dword ptr [0x12d1f4dc], eax */
  w32((uint32_t)(0x12d1f4dc), (EAX));
L_12cfe2c4:;
  /* 12cfe2c4 mov eax, dword ptr [0x12d1f4dc] */
  EAX = (r32((uint32_t)(0x12d1f4dc)));
  /* 12cfe2c9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12cfe2cc mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12cfe2d3 jmp 0x12cfe2de */
  goto L_12cfe2de;
L_12cfe2d5:;
  /* 12cfe2d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfe2d8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe2db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12cfe2de:;
  /* 12cfe2de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfe2e1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfe2e4 mov eax, dword ptr [edx + 0x12d1f4dc] */
  EAX = (r32((uint32_t)(EDX + 0x12d1f4dc)));
  /* 12cfe2ea push eax */
  push32((uint32_t)(EAX));
  /* 12cfe2eb push 0x12d1c434 */
  push32((uint32_t)(0x12d1c434u));
  /* 12cfe2f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfe2f3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfe2f6 mov edx, dword ptr [ecx + 0x12d1f4d8] */
  EDX = (r32((uint32_t)(ECX + 0x12d1f4d8)));
  /* 12cfe2fc push edx */
  push32((uint32_t)(EDX));
  /* 12cfe2fd push 3 */
  push32((uint32_t)(0x3u));
  /* 12cfe2ff mov eax, dword ptr [0x12d1f4dc] */
  EAX = (r32((uint32_t)(0x12d1f4dc)));
  /* 12cfe304 push eax */
  push32((uint32_t)(EAX));
  /* 12cfe305 call 0x12cfe530 */
  push32(0x12cfe30au); f_12cfe530();
  /* 12cfe30a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe30d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfe311 jge 0x12cfe359 */
  if ((C.sf==C.of)) goto L_12cfe359;
  /* 12cfe313 push 0x12d1c420 */
  push32((uint32_t)(0x12d1c420u));
  /* 12cfe318 mov ecx, dword ptr [0x12d1f4dc] */
  ECX = (r32((uint32_t)(0x12d1f4dc)));
  /* 12cfe31e push ecx */
  push32((uint32_t)(ECX));
  /* 12cfe31f call 0x12cf7170 */
  push32(0x12cfe324u); f_12cf7170();
  /* 12cfe324 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe327 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfe32a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe32d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfe330 mov eax, dword ptr [edx + 0x12d1f4dc] */
  EAX = (r32((uint32_t)(EDX + 0x12d1f4dc)));
  /* 12cfe336 push eax */
  push32((uint32_t)(EAX));
  /* 12cfe337 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfe33a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfe33d mov edx, dword ptr [ecx + 0x12d1f4dc] */
  EDX = (r32((uint32_t)(ECX + 0x12d1f4dc)));
  /* 12cfe343 push edx */
  push32((uint32_t)(EDX));
  /* 12cfe344 call 0x12cffe40 */
  push32(0x12cfe349u); f_12cffe40();
  /* 12cfe349 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe34c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfe34e je 0x12cfe357 */
  if (C.zf) goto L_12cfe357;
  /* 12cfe350 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12cfe357:;
  /* 12cfe357 jmp 0x12cfe387 */
  goto L_12cfe387;
L_12cfe359:;
  /* 12cfe359 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfe35d jne 0x12cfe366 */
  if (!C.zf) goto L_12cfe366;
  /* 12cfe35f mov eax, dword ptr [0x12d1f4dc] */
  EAX = (r32((uint32_t)(0x12d1f4dc)));
  /* 12cfe364 jmp 0x12cfe38c */
  goto L_12cfe38c;
L_12cfe366:;
  /* 12cfe366 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cfe368 mov eax, dword ptr [0x12d1f4dc] */
  EAX = (r32((uint32_t)(0x12d1f4dc)));
  /* 12cfe36d push eax */
  push32((uint32_t)(EAX));
  /* 12cfe36e call 0x12cf4c40 */
  push32(0x12cfe373u); f_12cf4c40();
  /* 12cfe373 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe376 mov dword ptr [0x12d1f4dc], 0 */
  w32((uint32_t)(0x12d1f4dc), (0x0u));
  /* 12cfe380 mov eax, dword ptr [0x12d1f4f4] */
  EAX = (r32((uint32_t)(0x12d1f4f4)));
  /* 12cfe385 jmp 0x12cfe38c */
  goto L_12cfe38c;
L_12cfe387:;
  /* 12cfe387 jmp 0x12cfe2d5 */
  goto L_12cfe2d5;
L_12cfe38c:;
  /* 12cfe38c mov esp, ebp */
  ESP = (EBP);
  /* 12cfe38e pop ebp */
  EBP = (pop32());
  /* 12cfe38f ret  */
  ESPCHK(0x12cfe290u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e390 @ 0x12cfe390 (388 bytes, 115 insns) */
void f_12cfe390(void) {
  FTRACE(0x12cfe390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfe390 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfe391 mov ebp, esp */
  EBP = (ESP);
  /* 12cfe393 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfe399 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfe39d jne 0x12cfe3a6 */
  if (!C.zf) goto L_12cfe3a6;
  /* 12cfe39f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfe3a1 jmp 0x12cfe510 */
  goto L_12cfe510;
L_12cfe3a6:;
  /* 12cfe3a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfe3a9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cfe3ac cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfe3af jne 0x12cfe400 */
  if (!C.zf) goto L_12cfe400;
  /* 12cfe3b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfe3b4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12cfe3b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfe3ba jne 0x12cfe400 */
  if (!C.zf) goto L_12cfe400;
  /* 12cfe3bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfe3bf mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 12cfe3c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfe3c5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 12cfe3c9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfe3cd je 0x12cfe3e9 */
  if (C.zf) goto L_12cfe3e9;
  /* 12cfe3cf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cfe3d2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 12cfe3d7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cfe3da mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 12cfe3e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cfe3e3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_12cfe3e9:;
  /* 12cfe3e9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfe3ed je 0x12cfe3f8 */
  if (C.zf) goto L_12cfe3f8;
  /* 12cfe3ef mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cfe3f2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12cfe3f8:;
  /* 12cfe3f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfe3fb jmp 0x12cfe510 */
  goto L_12cfe510;
L_12cfe400:;
  /* 12cfe400 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfe403 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfe404 push 0x12d1f450 */
  push32((uint32_t)(0x12d1f450u));
  /* 12cfe409 call 0x12cffe40 */
  push32(0x12cfe40eu); f_12cffe40();
  /* 12cfe40e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe411 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfe413 je 0x12cfe4c8 */
  if (C.zf) goto L_12cfe4c8;
  /* 12cfe419 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfe41c push edx */
  push32((uint32_t)(EDX));
  /* 12cfe41d push 0x12d1f3cc */
  push32((uint32_t)(0x12d1f3ccu));
  /* 12cfe422 call 0x12cffe40 */
  push32(0x12cfe427u); f_12cffe40();
  /* 12cfe427 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe42a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfe42c je 0x12cfe4c8 */
  if (C.zf) goto L_12cfe4c8;
  /* 12cfe432 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfe435 push eax */
  push32((uint32_t)(EAX));
  /* 12cfe436 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 12cfe43c push ecx */
  push32((uint32_t)(ECX));
  /* 12cfe43d call 0x12cfe580 */
  push32(0x12cfe442u); f_12cfe580();
  /* 12cfe442 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe445 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfe447 je 0x12cfe450 */
  if (C.zf) goto L_12cfe450;
  /* 12cfe449 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfe44b jmp 0x12cfe510 */
  goto L_12cfe510;
L_12cfe450:;
  /* 12cfe450 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 12cfe456 push edx */
  push32((uint32_t)(EDX));
  /* 12cfe457 push 0x12d20738 */
  push32((uint32_t)(0x12d20738u));
  /* 12cfe45c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 12cfe462 push eax */
  push32((uint32_t)(EAX));
  /* 12cfe463 call 0x12cfff90 */
  push32(0x12cfe468u); f_12cfff90();
  /* 12cfe468 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe46b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfe46d jne 0x12cfe476 */
  if (!C.zf) goto L_12cfe476;
  /* 12cfe46f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfe471 jmp 0x12cfe510 */
  goto L_12cfe510;
L_12cfe476:;
  /* 12cfe476 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfe478 mov cx, word ptr [0x12d2073c] */
  CX = (r16((uint32_t)(0x12d2073c)));
  /* 12cfe47f mov dword ptr [0x12d20740], ecx */
  w32((uint32_t)(0x12d20740), (ECX));
  /* 12cfe485 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 12cfe48b push edx */
  push32((uint32_t)(EDX));
  /* 12cfe48c push 0x12d1f450 */
  push32((uint32_t)(0x12d1f450u));
  /* 12cfe491 call 0x12cfe6e0 */
  push32(0x12cfe496u); f_12cfe6e0();
  /* 12cfe496 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe499 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfe49c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cfe49f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cfe4a1 je 0x12cfe4b6 */
  if (C.zf) goto L_12cfe4b6;
  /* 12cfe4a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfe4a6 push edx */
  push32((uint32_t)(EDX));
  /* 12cfe4a7 push 0x12d1f3cc */
  push32((uint32_t)(0x12d1f3ccu));
  /* 12cfe4ac call 0x12cf7160 */
  push32(0x12cfe4b1u); f_12cf7160();
  /* 12cfe4b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe4b4 jmp 0x12cfe4c8 */
  goto L_12cfe4c8;
L_12cfe4b6:;
  /* 12cfe4b6 push 0x12d1f450 */
  push32((uint32_t)(0x12d1f450u));
  /* 12cfe4bb push 0x12d1f3cc */
  push32((uint32_t)(0x12d1f3ccu));
  /* 12cfe4c0 call 0x12cf7160 */
  push32(0x12cfe4c5u); f_12cf7160();
  /* 12cfe4c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cfe4c8:;
  /* 12cfe4c8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfe4cc je 0x12cfe4e1 */
  if (C.zf) goto L_12cfe4e1;
  /* 12cfe4ce push 6 */
  push32((uint32_t)(0x6u));
  /* 12cfe4d0 push 0x12d20738 */
  push32((uint32_t)(0x12d20738u));
  /* 12cfe4d5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cfe4d8 push eax */
  push32((uint32_t)(EAX));
  /* 12cfe4d9 call 0x12cfaa90 */
  push32(0x12cfe4deu); f_12cfaa90();
  /* 12cfe4de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cfe4e1:;
  /* 12cfe4e1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfe4e5 je 0x12cfe4fa */
  if (C.zf) goto L_12cfe4fa;
  /* 12cfe4e7 push 4 */
  push32((uint32_t)(0x4u));
  /* 12cfe4e9 push 0x12d20740 */
  push32((uint32_t)(0x12d20740u));
  /* 12cfe4ee mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cfe4f1 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfe4f2 call 0x12cfaa90 */
  push32(0x12cfe4f7u); f_12cfaa90();
  /* 12cfe4f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cfe4fa:;
  /* 12cfe4fa push 0x12d1f450 */
  push32((uint32_t)(0x12d1f450u));
  /* 12cfe4ff mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfe502 push edx */
  push32((uint32_t)(EDX));
  /* 12cfe503 call 0x12cf7160 */
  push32(0x12cfe508u); f_12cf7160();
  /* 12cfe508 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe50b mov eax, 0x12d1f450 */
  EAX = (0x12d1f450u);
L_12cfe510:;
  /* 12cfe510 mov esp, ebp */
  ESP = (EBP);
  /* 12cfe512 pop ebp */
  EBP = (pop32());
  /* 12cfe513 ret  */
  ESPCHK(0x12cfe390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e520 @ 0x12cfe520 (7 bytes, 5 insns) */
void f_12cfe520(void) {
  FTRACE(0x12cfe520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfe520 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfe521 mov ebp, esp */
  EBP = (ESP);
  /* 12cfe523 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfe525 pop ebp */
  EBP = (pop32());
  /* 12cfe526 ret  */
  ESPCHK(0x12cfe520u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x12cfe530 (79 bytes, 28 insns) */
void f_12cfe530(void) {
  FTRACE(0x12cfe530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfe530 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfe531 mov ebp, esp */
  EBP = (ESP);
  /* 12cfe533 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfe536 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12cfe539 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cfe53c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12cfe543 jmp 0x12cfe54e */
  goto L_12cfe54e;
L_12cfe545:;
  /* 12cfe545 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfe548 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe54b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12cfe54e:;
  /* 12cfe54e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfe551 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfe554 jge 0x12cfe574 */
  if ((C.sf==C.of)) goto L_12cfe574;
  /* 12cfe556 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfe559 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe55c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cfe55f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfe562 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12cfe565 push edx */
  push32((uint32_t)(EDX));
  /* 12cfe566 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfe569 push eax */
  push32((uint32_t)(EAX));
  /* 12cfe56a call 0x12cf7170 */
  push32(0x12cfe56fu); f_12cf7170();
  /* 12cfe56f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe572 jmp 0x12cfe545 */
  goto L_12cfe545;
L_12cfe574:;
  /* 12cfe574 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cfe57b mov esp, ebp */
  ESP = (EBP);
  /* 12cfe57d pop ebp */
  EBP = (pop32());
  /* 12cfe57e ret  */
  ESPCHK(0x12cfe530u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e580 @ 0x12cfe580 (349 bytes, 122 insns) */
void f_12cfe580(void) {
  FTRACE(0x12cfe580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfe580 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfe581 mov ebp, esp */
  EBP = (ESP);
  /* 12cfe583 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfe586 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 12cfe58b push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfe58d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfe590 push eax */
  push32((uint32_t)(EAX));
  /* 12cfe591 call 0x12cf7f20 */
  push32(0x12cfe596u); f_12cf7f20();
  /* 12cfe596 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe599 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfe59c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cfe59f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cfe5a1 jne 0x12cfe5aa */
  if (!C.zf) goto L_12cfe5aa;
  /* 12cfe5a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfe5a5 jmp 0x12cfe6d9 */
  goto L_12cfe6d9;
L_12cfe5aa:;
  /* 12cfe5aa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfe5ad movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cfe5b0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfe5b3 jne 0x12cfe5e0 */
  if (!C.zf) goto L_12cfe5e0;
  /* 12cfe5b5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfe5b8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12cfe5bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfe5be je 0x12cfe5e0 */
  if (C.zf) goto L_12cfe5e0;
  /* 12cfe5c0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfe5c3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe5c6 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfe5c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfe5ca add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe5d0 push edx */
  push32((uint32_t)(EDX));
  /* 12cfe5d1 call 0x12cf7160 */
  push32(0x12cfe5d6u); f_12cf7160();
  /* 12cfe5d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe5d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfe5db jmp 0x12cfe6d9 */
  goto L_12cfe6d9;
L_12cfe5e0:;
  /* 12cfe5e0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cfe5e7 jmp 0x12cfe5f2 */
  goto L_12cfe5f2;
L_12cfe5e9:;
  /* 12cfe5e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfe5ec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe5ef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cfe5f2:;
  /* 12cfe5f2 push 0x12d1c438 */
  push32((uint32_t)(0x12d1c438u));
  /* 12cfe5f7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfe5fa push ecx */
  push32((uint32_t)(ECX));
  /* 12cfe5fb call 0x12cffed0 */
  push32(0x12cfe600u); f_12cffed0();
  /* 12cfe600 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe603 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cfe606 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfe60a jne 0x12cfe614 */
  if (!C.zf) goto L_12cfe614;
  /* 12cfe60c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cfe60f jmp 0x12cfe6d9 */
  goto L_12cfe6d9;
L_12cfe614:;
  /* 12cfe614 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfe617 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe61a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cfe61c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12cfe61f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfe623 jne 0x12cfe64a */
  if (!C.zf) goto L_12cfe64a;
  /* 12cfe625 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfe629 jge 0x12cfe64a */
  if ((C.sf==C.of)) goto L_12cfe64a;
  /* 12cfe62b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12cfe62f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfe632 je 0x12cfe64a */
  if (C.zf) goto L_12cfe64a;
  /* 12cfe634 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfe637 push edx */
  push32((uint32_t)(EDX));
  /* 12cfe638 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfe63b push eax */
  push32((uint32_t)(EAX));
  /* 12cfe63c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfe63f push ecx */
  push32((uint32_t)(ECX));
  /* 12cfe640 call 0x12cf79d0 */
  push32(0x12cfe645u); f_12cf79d0();
  /* 12cfe645 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe648 jmp 0x12cfe6b0 */
  goto L_12cfe6b0;
L_12cfe64a:;
  /* 12cfe64a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfe64e jne 0x12cfe678 */
  if (!C.zf) goto L_12cfe678;
  /* 12cfe650 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfe654 jge 0x12cfe678 */
  if ((C.sf==C.of)) goto L_12cfe678;
  /* 12cfe656 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12cfe65a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfe65d je 0x12cfe678 */
  if (C.zf) goto L_12cfe678;
  /* 12cfe65f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfe662 push eax */
  push32((uint32_t)(EAX));
  /* 12cfe663 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfe666 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfe667 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfe66a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe66d push edx */
  push32((uint32_t)(EDX));
  /* 12cfe66e call 0x12cf79d0 */
  push32(0x12cfe673u); f_12cf79d0();
  /* 12cfe673 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe676 jmp 0x12cfe6b0 */
  goto L_12cfe6b0;
L_12cfe678:;
  /* 12cfe678 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfe67c jne 0x12cfe6ab */
  if (!C.zf) goto L_12cfe6ab;
  /* 12cfe67e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12cfe682 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfe684 je 0x12cfe68f */
  if (C.zf) goto L_12cfe68f;
  /* 12cfe686 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12cfe68a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfe68d jne 0x12cfe6ab */
  if (!C.zf) goto L_12cfe6ab;
L_12cfe68f:;
  /* 12cfe68f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfe692 push edx */
  push32((uint32_t)(EDX));
  /* 12cfe693 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfe696 push eax */
  push32((uint32_t)(EAX));
  /* 12cfe697 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfe69a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe6a0 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfe6a1 call 0x12cf79d0 */
  push32(0x12cfe6a6u); f_12cf79d0();
  /* 12cfe6a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe6a9 jmp 0x12cfe6b0 */
  goto L_12cfe6b0;
L_12cfe6ab:;
  /* 12cfe6ab or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cfe6ae jmp 0x12cfe6d9 */
  goto L_12cfe6d9;
L_12cfe6b0:;
  /* 12cfe6b0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12cfe6b4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfe6b7 jne 0x12cfe6bb */
  if (!C.zf) goto L_12cfe6bb;
  /* 12cfe6b9 jmp 0x12cfe6d7 */
  goto L_12cfe6d7;
L_12cfe6bb:;
  /* 12cfe6bb movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12cfe6bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfe6c1 jne 0x12cfe6c5 */
  if (!C.zf) goto L_12cfe6c5;
  /* 12cfe6c3 jmp 0x12cfe6d7 */
  goto L_12cfe6d7;
L_12cfe6c5:;
  /* 12cfe6c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfe6c8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfe6cb lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 12cfe6cf mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12cfe6d2 jmp 0x12cfe5e9 */
  goto L_12cfe5e9;
L_12cfe6d7:;
  /* 12cfe6d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cfe6d9:;
  /* 12cfe6d9 mov esp, ebp */
  ESP = (EBP);
  /* 12cfe6db pop ebp */
  EBP = (pop32());
  /* 12cfe6dc ret  */
  ESPCHK(0x12cfe580u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x12cfe6e0 (101 bytes, 36 insns) */
void f_12cfe6e0(void) {
  FTRACE(0x12cfe6e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfe6e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfe6e1 mov ebp, esp */
  EBP = (ESP);
  /* 12cfe6e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfe6e6 push eax */
  push32((uint32_t)(EAX));
  /* 12cfe6e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfe6ea push ecx */
  push32((uint32_t)(ECX));
  /* 12cfe6eb call 0x12cf7160 */
  push32(0x12cfe6f0u); f_12cf7160();
  /* 12cfe6f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe6f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfe6f6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 12cfe6fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfe6fc je 0x12cfe718 */
  if (C.zf) goto L_12cfe718;
  /* 12cfe6fe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfe701 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe704 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfe705 push 0x12d1c440 */
  push32((uint32_t)(0x12d1c440u));
  /* 12cfe70a push 2 */
  push32((uint32_t)(0x2u));
  /* 12cfe70c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfe70f push edx */
  push32((uint32_t)(EDX));
  /* 12cfe710 call 0x12cfe530 */
  push32(0x12cfe715u); f_12cfe530();
  /* 12cfe715 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cfe718:;
  /* 12cfe718 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfe71b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 12cfe722 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cfe724 je 0x12cfe743 */
  if (C.zf) goto L_12cfe743;
  /* 12cfe726 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfe729 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe72f push edx */
  push32((uint32_t)(EDX));
  /* 12cfe730 push 0x12d1c43c */
  push32((uint32_t)(0x12d1c43cu));
  /* 12cfe735 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cfe737 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfe73a push eax */
  push32((uint32_t)(EAX));
  /* 12cfe73b call 0x12cfe530 */
  push32(0x12cfe740u); f_12cfe530();
  /* 12cfe740 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cfe743:;
  /* 12cfe743 pop ebp */
  EBP = (pop32());
  /* 12cfe744 ret  */
  ESPCHK(0x12cfe6e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e750 @ 0x12cfe750 (130 bytes, 50 insns) */
void f_12cfe750(void) {
  FTRACE(0x12cfe750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfe750 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfe751 mov ebp, esp */
  EBP = (ESP);
  /* 12cfe753 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfe754 push ebx */
  push32((uint32_t)(EBX));
  /* 12cfe755 push esi */
  push32((uint32_t)(ESI));
  /* 12cfe756 push edi */
  push32((uint32_t)(EDI));
  /* 12cfe757 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12cfe75e:;
  /* 12cfe75e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfe762 jne 0x12cfe782 */
  if (!C.zf) goto L_12cfe782;
  /* 12cfe764 push 0x12d1c450 */
  push32((uint32_t)(0x12d1c450u));
  /* 12cfe769 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfe76b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 12cfe76d push 0x12d1c444 */
  push32((uint32_t)(0x12d1c444u));
  /* 12cfe772 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cfe774 call 0x12cf3270 */
  push32(0x12cfe779u); f_12cf3270();
  /* 12cfe779 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe77c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfe77f jne 0x12cfe782 */
  if (!C.zf) goto L_12cfe782;
  /* 12cfe781 int3  */
  x86_unimpl("int3 @ 0x12cfe781");
L_12cfe782:;
  /* 12cfe782 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfe784 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfe786 jne 0x12cfe75e */
  if (!C.zf) goto L_12cfe75e;
  /* 12cfe788 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfe78b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12cfe78e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 12cfe791 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cfe793 je 0x12cfe7a1 */
  if (C.zf) goto L_12cfe7a1;
  /* 12cfe795 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfe798 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 12cfe79f jmp 0x12cfe7c8 */
  goto L_12cfe7c8;
L_12cfe7a1:;
  /* 12cfe7a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfe7a4 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfe7a5 call 0x12cfcfc0 */
  push32(0x12cfe7aau); f_12cfcfc0();
  /* 12cfe7aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe7ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfe7b0 push edx */
  push32((uint32_t)(EDX));
  /* 12cfe7b1 call 0x12cfe7e0 */
  push32(0x12cfe7b6u); f_12cfe7e0();
  /* 12cfe7b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe7b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cfe7bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfe7bf push eax */
  push32((uint32_t)(EAX));
  /* 12cfe7c0 call 0x12cfd030 */
  push32(0x12cfe7c5u); f_12cfd030();
  /* 12cfe7c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cfe7c8:;
  /* 12cfe7c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfe7cb pop edi */
  EDI = (pop32());
  /* 12cfe7cc pop esi */
  ESI = (pop32());
  /* 12cfe7cd pop ebx */
  EBX = (pop32());
  /* 12cfe7ce mov esp, ebp */
  ESP = (EBP);
  /* 12cfe7d0 pop ebp */
  EBP = (pop32());
  /* 12cfe7d1 ret  */
  ESPCHK(0x12cfe750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e7e0 @ 0x12cfe7e0 (190 bytes, 67 insns) */
void f_12cfe7e0(void) {
  FTRACE(0x12cfe7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfe7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfe7e1 mov ebp, esp */
  EBP = (ESP);
  /* 12cfe7e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfe7e6 push ebx */
  push32((uint32_t)(EBX));
  /* 12cfe7e7 push esi */
  push32((uint32_t)(ESI));
  /* 12cfe7e8 push edi */
  push32((uint32_t)(EDI));
  /* 12cfe7e9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12cfe7f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfe7f3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12cfe7f6:;
  /* 12cfe7f6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfe7fa jne 0x12cfe81a */
  if (!C.zf) goto L_12cfe81a;
  /* 12cfe7fc push 0x12d1c2f4 */
  push32((uint32_t)(0x12d1c2f4u));
  /* 12cfe801 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cfe803 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 12cfe805 push 0x12d1c444 */
  push32((uint32_t)(0x12d1c444u));
  /* 12cfe80a push 2 */
  push32((uint32_t)(0x2u));
  /* 12cfe80c call 0x12cf3270 */
  push32(0x12cfe811u); f_12cf3270();
  /* 12cfe811 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe814 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfe817 jne 0x12cfe81a */
  if (!C.zf) goto L_12cfe81a;
  /* 12cfe819 int3  */
  x86_unimpl("int3 @ 0x12cfe819");
L_12cfe81a:;
  /* 12cfe81a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfe81c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cfe81e jne 0x12cfe7f6 */
  if (!C.zf) goto L_12cfe7f6;
  /* 12cfe820 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfe823 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12cfe826 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 12cfe82b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfe82d je 0x12cfe88a */
  if (C.zf) goto L_12cfe88a;
  /* 12cfe82f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfe832 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfe833 call 0x12cfdae0 */
  push32(0x12cfe838u); f_12cfdae0();
  /* 12cfe838 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe83b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cfe83e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfe841 push edx */
  push32((uint32_t)(EDX));
  /* 12cfe842 call 0x12d00e60 */
  push32(0x12cfe847u); f_12d00e60();
  /* 12cfe847 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe84a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfe84d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12cfe850 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfe851 call 0x12d00d30 */
  push32(0x12cfe856u); f_12d00d30();
  /* 12cfe856 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe859 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfe85b jge 0x12cfe866 */
  if ((C.sf==C.of)) goto L_12cfe866;
  /* 12cfe85d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12cfe864 jmp 0x12cfe88a */
  goto L_12cfe88a;
L_12cfe866:;
  /* 12cfe866 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfe869 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfe86d je 0x12cfe88a */
  if (C.zf) goto L_12cfe88a;
  /* 12cfe86f push 2 */
  push32((uint32_t)(0x2u));
  /* 12cfe871 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfe874 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12cfe877 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfe878 call 0x12cf4c40 */
  push32(0x12cfe87du); f_12cf4c40();
  /* 12cfe87d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe880 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfe883 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_12cfe88a:;
  /* 12cfe88a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfe88d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 12cfe894 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfe897 pop edi */
  EDI = (pop32());
  /* 12cfe898 pop esi */
  ESI = (pop32());
  /* 12cfe899 pop ebx */
  EBX = (pop32());
  /* 12cfe89a mov esp, ebp */
  ESP = (EBP);
  /* 12cfe89c pop ebp */
  EBP = (pop32());
  /* 12cfe89d ret  */
  ESPCHK(0x12cfe7e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e8a0 @ 0x12cfe8a0 (210 bytes, 63 insns) */
void f_12cfe8a0(void) {
  FTRACE(0x12cfe8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfe8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfe8a1 mov ebp, esp */
  EBP = (ESP);
  /* 12cfe8a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfe8a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfe8a7 cmp eax, dword ptr [0x12d2203c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d2203c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfe8ad jae 0x12cfe8d1 */
  if (!C.cf) goto L_12cfe8d1;
  /* 12cfe8af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfe8b2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12cfe8b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfe8b8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12cfe8bb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfe8be mov eax, dword ptr [ecx*4 + 0x12d21f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12d21f00)));
  /* 12cfe8c5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12cfe8ca and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12cfe8cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cfe8cf jne 0x12cfe8e4 */
  if (!C.zf) goto L_12cfe8e4;
L_12cfe8d1:;
  /* 12cfe8d1 call 0x12cfc080 */
  push32(0x12cfe8d6u); f_12cfc080();
  /* 12cfe8d6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12cfe8dc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cfe8df jmp 0x12cfe96e */
  goto L_12cfe96e;
L_12cfe8e4:;
  /* 12cfe8e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfe8e7 push edx */
  push32((uint32_t)(EDX));
  /* 12cfe8e8 call 0x12cfd8a0 */
  push32(0x12cfe8edu); f_12cfd8a0();
  /* 12cfe8ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe8f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfe8f3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12cfe8f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfe8f9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12cfe8fc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cfe8ff mov edx, dword ptr [eax*4 + 0x12d21f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12d21f00)));
  /* 12cfe906 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12cfe90b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12cfe90e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfe910 je 0x12cfe94d */
  if (C.zf) goto L_12cfe94d;
  /* 12cfe912 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfe915 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfe916 call 0x12cfd720 */
  push32(0x12cfe91bu); f_12cfd720();
  /* 12cfe91b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe91e push eax */
  push32((uint32_t)(EAX));
  /* 12cfe91f call dword ptr [0x12d232b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232b0))), 0x12cfe925u);
  /* 12cfe925 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfe927 jne 0x12cfe934 */
  if (!C.zf) goto L_12cfe934;
  /* 12cfe929 call dword ptr [0x12d23348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23348))), 0x12cfe92fu);
  /* 12cfe92f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cfe932 jmp 0x12cfe93b */
  goto L_12cfe93b;
L_12cfe934:;
  /* 12cfe934 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12cfe93b:;
  /* 12cfe93b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfe93f jne 0x12cfe943 */
  if (!C.zf) goto L_12cfe943;
  /* 12cfe941 jmp 0x12cfe95f */
  goto L_12cfe95f;
L_12cfe943:;
  /* 12cfe943 call 0x12cfc090 */
  push32(0x12cfe948u); f_12cfc090();
  /* 12cfe948 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfe94b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12cfe94d:;
  /* 12cfe94d call 0x12cfc080 */
  push32(0x12cfe952u); f_12cfc080();
  /* 12cfe952 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12cfe958 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12cfe95f:;
  /* 12cfe95f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfe962 push eax */
  push32((uint32_t)(EAX));
  /* 12cfe963 call 0x12cfd930 */
  push32(0x12cfe968u); f_12cfd930();
  /* 12cfe968 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe96b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12cfe96e:;
  /* 12cfe96e mov esp, ebp */
  ESP = (EBP);
  /* 12cfe970 pop ebp */
  EBP = (pop32());
  /* 12cfe971 ret  */
  ESPCHK(0x12cfe8a0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x12cfe980 (219 bytes, 64 insns) */
void f_12cfe980(void) {
  FTRACE(0x12cfe980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfe980 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfe981 mov ebp, esp */
  EBP = (ESP);
  /* 12cfe983 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfe984 cmp dword ptr [0x12d20724], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20724))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfe98b je 0x12cfea21 */
  if (C.zf) goto L_12cfea21;
  /* 12cfe991 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12cfe993 push 0x12d1c460 */
  push32((uint32_t)(0x12d1c460u));
  /* 12cfe998 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cfe99a push 0xac */
  push32((uint32_t)(0xacu));
  /* 12cfe99f push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfe9a1 call 0x12cf45c0 */
  push32(0x12cfe9a6u); f_12cf45c0();
  /* 12cfe9a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe9a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cfe9ac cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfe9b0 jne 0x12cfe9bc */
  if (!C.zf) goto L_12cfe9bc;
  /* 12cfe9b2 mov eax, 1 */
  EAX = (0x1u);
  /* 12cfe9b7 jmp 0x12cfea57 */
  goto L_12cfea57;
L_12cfe9bc:;
  /* 12cfe9bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfe9bf push eax */
  push32((uint32_t)(EAX));
  /* 12cfe9c0 call 0x12cfea60 */
  push32(0x12cfe9c5u); f_12cfea60();
  /* 12cfe9c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe9c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfe9ca je 0x12cfe9ed */
  if (C.zf) goto L_12cfe9ed;
  /* 12cfe9cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfe9cf push ecx */
  push32((uint32_t)(ECX));
  /* 12cfe9d0 call 0x12cfeff0 */
  push32(0x12cfe9d5u); f_12cfeff0();
  /* 12cfe9d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe9d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cfe9da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfe9dd push edx */
  push32((uint32_t)(EDX));
  /* 12cfe9de call 0x12cf4c40 */
  push32(0x12cfe9e3u); f_12cf4c40();
  /* 12cfe9e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfe9e6 mov eax, 1 */
  EAX = (0x1u);
  /* 12cfe9eb jmp 0x12cfea57 */
  goto L_12cfea57;
L_12cfe9ed:;
  /* 12cfe9ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfe9f0 mov dword ptr [0x12d1fc98], eax */
  w32((uint32_t)(0x12d1fc98), (EAX));
  /* 12cfe9f5 mov ecx, dword ptr [0x12d20744] */
  ECX = (r32((uint32_t)(0x12d20744)));
  /* 12cfe9fb push ecx */
  push32((uint32_t)(ECX));
  /* 12cfe9fc call 0x12cfeff0 */
  push32(0x12cfea01u); f_12cfeff0();
  /* 12cfea01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfea04 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cfea06 mov edx, dword ptr [0x12d20744] */
  EDX = (r32((uint32_t)(0x12d20744)));
  /* 12cfea0c push edx */
  push32((uint32_t)(EDX));
  /* 12cfea0d call 0x12cf4c40 */
  push32(0x12cfea12u); f_12cf4c40();
  /* 12cfea12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfea15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfea18 mov dword ptr [0x12d20744], eax */
  w32((uint32_t)(0x12d20744), (EAX));
  /* 12cfea1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfea1f jmp 0x12cfea57 */
  goto L_12cfea57;
L_12cfea21:;
  /* 12cfea21 mov dword ptr [0x12d1fc98], 0x12d1fca0 */
  w32((uint32_t)(0x12d1fc98), (0x12d1fca0u));
  /* 12cfea2b mov ecx, dword ptr [0x12d20744] */
  ECX = (r32((uint32_t)(0x12d20744)));
  /* 12cfea31 push ecx */
  push32((uint32_t)(ECX));
  /* 12cfea32 call 0x12cfeff0 */
  push32(0x12cfea37u); f_12cfeff0();
  /* 12cfea37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfea3a push 2 */
  push32((uint32_t)(0x2u));
  /* 12cfea3c mov edx, dword ptr [0x12d20744] */
  EDX = (r32((uint32_t)(0x12d20744)));
  /* 12cfea42 push edx */
  push32((uint32_t)(EDX));
  /* 12cfea43 call 0x12cf4c40 */
  push32(0x12cfea48u); f_12cf4c40();
  /* 12cfea48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfea4b mov dword ptr [0x12d20744], 0 */
  w32((uint32_t)(0x12d20744), (0x0u));
  /* 12cfea55 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cfea57:;
  /* 12cfea57 mov esp, ebp */
  ESP = (EBP);
  /* 12cfea59 pop ebp */
  EBP = (pop32());
  /* 12cfea5a ret  */
  ESPCHK(0x12cfe980u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea60 @ 0x12cfea60 (1423 bytes, 533 insns) */
void f_12cfea60(void) {
  FTRACE(0x12cfea60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfea60 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfea61 mov ebp, esp */
  EBP = (ESP);
  /* 12cfea63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfea66 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12cfea6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfea6f mov ax, word ptr [0x12d2077e] */
  AX = (r16((uint32_t)(0x12d2077e)));
  /* 12cfea75 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cfea78 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfea7a mov cx, word ptr [0x12d20780] */
  CX = (r16((uint32_t)(0x12d20780)));
  /* 12cfea81 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cfea84 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfea88 jne 0x12cfea92 */
  if (!C.zf) goto L_12cfea92;
  /* 12cfea8a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cfea8d jmp 0x12cfefeb */
  goto L_12cfefeb;
L_12cfea92:;
  /* 12cfea92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfea95 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfea98 push edx */
  push32((uint32_t)(EDX));
  /* 12cfea99 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 12cfea9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfea9e push eax */
  push32((uint32_t)(EAX));
  /* 12cfea9f push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfeaa1 call 0x12d02370 */
  push32(0x12cfeaa6u); f_12d02370();
  /* 12cfeaa6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfeaa9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfeaac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfeaae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfeab1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfeab4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfeab7 push edx */
  push32((uint32_t)(EDX));
  /* 12cfeab8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 12cfeaba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfeabd push eax */
  push32((uint32_t)(EAX));
  /* 12cfeabe push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfeac0 call 0x12d02370 */
  push32(0x12cfeac5u); f_12d02370();
  /* 12cfeac5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfeac8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfeacb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfeacd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfead0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfead3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfead6 push edx */
  push32((uint32_t)(EDX));
  /* 12cfead7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 12cfead9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfeadc push eax */
  push32((uint32_t)(EAX));
  /* 12cfeadd push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfeadf call 0x12d02370 */
  push32(0x12cfeae4u); f_12d02370();
  /* 12cfeae4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfeae7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfeaea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfeaec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfeaef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfeaf2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfeaf5 push edx */
  push32((uint32_t)(EDX));
  /* 12cfeaf6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 12cfeaf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfeafb push eax */
  push32((uint32_t)(EAX));
  /* 12cfeafc push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfeafe call 0x12d02370 */
  push32(0x12cfeb03u); f_12d02370();
  /* 12cfeb03 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfeb06 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfeb09 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfeb0b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfeb0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfeb11 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfeb14 push edx */
  push32((uint32_t)(EDX));
  /* 12cfeb15 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 12cfeb17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfeb1a push eax */
  push32((uint32_t)(EAX));
  /* 12cfeb1b push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfeb1d call 0x12d02370 */
  push32(0x12cfeb22u); f_12d02370();
  /* 12cfeb22 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfeb25 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfeb28 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfeb2a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfeb2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfeb30 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfeb33 push edx */
  push32((uint32_t)(EDX));
  /* 12cfeb34 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 12cfeb36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfeb39 push eax */
  push32((uint32_t)(EAX));
  /* 12cfeb3a push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfeb3c call 0x12d02370 */
  push32(0x12cfeb41u); f_12d02370();
  /* 12cfeb41 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfeb44 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfeb47 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfeb49 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfeb4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfeb4f push edx */
  push32((uint32_t)(EDX));
  /* 12cfeb50 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 12cfeb52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfeb55 push eax */
  push32((uint32_t)(EAX));
  /* 12cfeb56 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfeb58 call 0x12d02370 */
  push32(0x12cfeb5du); f_12d02370();
  /* 12cfeb5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfeb60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfeb63 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfeb65 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfeb68 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfeb6b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfeb6e push edx */
  push32((uint32_t)(EDX));
  /* 12cfeb6f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 12cfeb71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfeb74 push eax */
  push32((uint32_t)(EAX));
  /* 12cfeb75 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfeb77 call 0x12d02370 */
  push32(0x12cfeb7cu); f_12d02370();
  /* 12cfeb7c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfeb7f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfeb82 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfeb84 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfeb87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfeb8a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfeb8d push edx */
  push32((uint32_t)(EDX));
  /* 12cfeb8e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 12cfeb90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfeb93 push eax */
  push32((uint32_t)(EAX));
  /* 12cfeb94 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfeb96 call 0x12d02370 */
  push32(0x12cfeb9bu); f_12d02370();
  /* 12cfeb9b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfeb9e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfeba1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfeba3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfeba6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfeba9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfebac push edx */
  push32((uint32_t)(EDX));
  /* 12cfebad push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 12cfebaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfebb2 push eax */
  push32((uint32_t)(EAX));
  /* 12cfebb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfebb5 call 0x12d02370 */
  push32(0x12cfebbau); f_12d02370();
  /* 12cfebba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfebbd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfebc0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfebc2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfebc5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfebc8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfebcb push edx */
  push32((uint32_t)(EDX));
  /* 12cfebcc push 0x2d */
  push32((uint32_t)(0x2du));
  /* 12cfebce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfebd1 push eax */
  push32((uint32_t)(EAX));
  /* 12cfebd2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfebd4 call 0x12d02370 */
  push32(0x12cfebd9u); f_12d02370();
  /* 12cfebd9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfebdc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfebdf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfebe1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfebe4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfebe7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfebea push edx */
  push32((uint32_t)(EDX));
  /* 12cfebeb push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 12cfebed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfebf0 push eax */
  push32((uint32_t)(EAX));
  /* 12cfebf1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfebf3 call 0x12d02370 */
  push32(0x12cfebf8u); f_12d02370();
  /* 12cfebf8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfebfb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfebfe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfec00 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfec03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfec06 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfec09 push edx */
  push32((uint32_t)(EDX));
  /* 12cfec0a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 12cfec0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfec0f push eax */
  push32((uint32_t)(EAX));
  /* 12cfec10 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfec12 call 0x12d02370 */
  push32(0x12cfec17u); f_12d02370();
  /* 12cfec17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfec1a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfec1d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfec1f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfec22 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfec25 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfec28 push edx */
  push32((uint32_t)(EDX));
  /* 12cfec29 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12cfec2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfec2e push eax */
  push32((uint32_t)(EAX));
  /* 12cfec2f push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfec31 call 0x12d02370 */
  push32(0x12cfec36u); f_12d02370();
  /* 12cfec36 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfec39 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfec3c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfec3e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfec41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfec44 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfec47 push edx */
  push32((uint32_t)(EDX));
  /* 12cfec48 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 12cfec4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfec4d push eax */
  push32((uint32_t)(EAX));
  /* 12cfec4e push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfec50 call 0x12d02370 */
  push32(0x12cfec55u); f_12d02370();
  /* 12cfec55 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfec58 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfec5b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfec5d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfec60 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfec63 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfec66 push edx */
  push32((uint32_t)(EDX));
  /* 12cfec67 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 12cfec69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfec6c push eax */
  push32((uint32_t)(EAX));
  /* 12cfec6d push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfec6f call 0x12d02370 */
  push32(0x12cfec74u); f_12d02370();
  /* 12cfec74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfec77 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfec7a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfec7c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfec7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfec82 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfec85 push edx */
  push32((uint32_t)(EDX));
  /* 12cfec86 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 12cfec88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfec8b push eax */
  push32((uint32_t)(EAX));
  /* 12cfec8c push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfec8e call 0x12d02370 */
  push32(0x12cfec93u); f_12d02370();
  /* 12cfec93 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfec96 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfec99 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfec9b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfec9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfeca1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfeca4 push edx */
  push32((uint32_t)(EDX));
  /* 12cfeca5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 12cfeca7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfecaa push eax */
  push32((uint32_t)(EAX));
  /* 12cfecab push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfecad call 0x12d02370 */
  push32(0x12cfecb2u); f_12d02370();
  /* 12cfecb2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfecb5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfecb8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfecba mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfecbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfecc0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfecc3 push edx */
  push32((uint32_t)(EDX));
  /* 12cfecc4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12cfecc6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfecc9 push eax */
  push32((uint32_t)(EAX));
  /* 12cfecca push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfeccc call 0x12d02370 */
  push32(0x12cfecd1u); f_12d02370();
  /* 12cfecd1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfecd4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfecd7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfecd9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfecdc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfecdf add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfece2 push edx */
  push32((uint32_t)(EDX));
  /* 12cfece3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 12cfece5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfece8 push eax */
  push32((uint32_t)(EAX));
  /* 12cfece9 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfeceb call 0x12d02370 */
  push32(0x12cfecf0u); f_12d02370();
  /* 12cfecf0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfecf3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfecf6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfecf8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfecfb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfecfe add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfed01 push edx */
  push32((uint32_t)(EDX));
  /* 12cfed02 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12cfed04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfed07 push eax */
  push32((uint32_t)(EAX));
  /* 12cfed08 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfed0a call 0x12d02370 */
  push32(0x12cfed0fu); f_12d02370();
  /* 12cfed0f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfed12 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfed15 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfed17 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfed1a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfed1d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfed20 push edx */
  push32((uint32_t)(EDX));
  /* 12cfed21 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 12cfed23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfed26 push eax */
  push32((uint32_t)(EAX));
  /* 12cfed27 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfed29 call 0x12d02370 */
  push32(0x12cfed2eu); f_12d02370();
  /* 12cfed2e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfed31 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfed34 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfed36 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfed39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfed3c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfed3f push edx */
  push32((uint32_t)(EDX));
  /* 12cfed40 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 12cfed42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfed45 push eax */
  push32((uint32_t)(EAX));
  /* 12cfed46 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfed48 call 0x12d02370 */
  push32(0x12cfed4du); f_12d02370();
  /* 12cfed4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfed50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfed53 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfed55 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfed58 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfed5b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfed5e push edx */
  push32((uint32_t)(EDX));
  /* 12cfed5f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 12cfed61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfed64 push eax */
  push32((uint32_t)(EAX));
  /* 12cfed65 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfed67 call 0x12d02370 */
  push32(0x12cfed6cu); f_12d02370();
  /* 12cfed6c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfed6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfed72 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfed74 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfed77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfed7a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfed7d push edx */
  push32((uint32_t)(EDX));
  /* 12cfed7e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 12cfed80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfed83 push eax */
  push32((uint32_t)(EAX));
  /* 12cfed84 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfed86 call 0x12d02370 */
  push32(0x12cfed8bu); f_12d02370();
  /* 12cfed8b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfed8e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfed91 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfed93 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfed96 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfed99 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfed9c push edx */
  push32((uint32_t)(EDX));
  /* 12cfed9d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 12cfed9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfeda2 push eax */
  push32((uint32_t)(EAX));
  /* 12cfeda3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfeda5 call 0x12d02370 */
  push32(0x12cfedaau); f_12d02370();
  /* 12cfedaa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfedad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfedb0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfedb2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfedb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfedb8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfedbb push edx */
  push32((uint32_t)(EDX));
  /* 12cfedbc push 0x38 */
  push32((uint32_t)(0x38u));
  /* 12cfedbe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfedc1 push eax */
  push32((uint32_t)(EAX));
  /* 12cfedc2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfedc4 call 0x12d02370 */
  push32(0x12cfedc9u); f_12d02370();
  /* 12cfedc9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfedcc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfedcf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfedd1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfedd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfedd7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfedda push edx */
  push32((uint32_t)(EDX));
  /* 12cfeddb push 0x39 */
  push32((uint32_t)(0x39u));
  /* 12cfeddd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfede0 push eax */
  push32((uint32_t)(EAX));
  /* 12cfede1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfede3 call 0x12d02370 */
  push32(0x12cfede8u); f_12d02370();
  /* 12cfede8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfedeb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfedee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfedf0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfedf3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfedf6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfedf9 push edx */
  push32((uint32_t)(EDX));
  /* 12cfedfa push 0x3a */
  push32((uint32_t)(0x3au));
  /* 12cfedfc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfedff push eax */
  push32((uint32_t)(EAX));
  /* 12cfee00 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfee02 call 0x12d02370 */
  push32(0x12cfee07u); f_12d02370();
  /* 12cfee07 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfee0a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfee0d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfee0f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfee12 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfee15 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfee18 push edx */
  push32((uint32_t)(EDX));
  /* 12cfee19 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 12cfee1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfee1e push eax */
  push32((uint32_t)(EAX));
  /* 12cfee1f push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfee21 call 0x12d02370 */
  push32(0x12cfee26u); f_12d02370();
  /* 12cfee26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfee29 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfee2c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfee2e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfee31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfee34 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfee37 push edx */
  push32((uint32_t)(EDX));
  /* 12cfee38 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 12cfee3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfee3d push eax */
  push32((uint32_t)(EAX));
  /* 12cfee3e push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfee40 call 0x12d02370 */
  push32(0x12cfee45u); f_12d02370();
  /* 12cfee45 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfee48 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfee4b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfee4d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfee50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfee53 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfee56 push edx */
  push32((uint32_t)(EDX));
  /* 12cfee57 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12cfee59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfee5c push eax */
  push32((uint32_t)(EAX));
  /* 12cfee5d push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfee5f call 0x12d02370 */
  push32(0x12cfee64u); f_12d02370();
  /* 12cfee64 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfee67 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfee6a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfee6c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfee6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfee72 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfee78 push edx */
  push32((uint32_t)(EDX));
  /* 12cfee79 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 12cfee7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfee7e push eax */
  push32((uint32_t)(EAX));
  /* 12cfee7f push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfee81 call 0x12d02370 */
  push32(0x12cfee86u); f_12d02370();
  /* 12cfee86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfee89 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfee8c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfee8e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfee91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfee94 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfee9a push edx */
  push32((uint32_t)(EDX));
  /* 12cfee9b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12cfee9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfeea0 push eax */
  push32((uint32_t)(EAX));
  /* 12cfeea1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfeea3 call 0x12d02370 */
  push32(0x12cfeea8u); f_12d02370();
  /* 12cfeea8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfeeab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfeeae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfeeb0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfeeb3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfeeb6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfeebc push edx */
  push32((uint32_t)(EDX));
  /* 12cfeebd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12cfeebf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfeec2 push eax */
  push32((uint32_t)(EAX));
  /* 12cfeec3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfeec5 call 0x12d02370 */
  push32(0x12cfeecau); f_12d02370();
  /* 12cfeeca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfeecd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfeed0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfeed2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfeed5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfeed8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfeede push edx */
  push32((uint32_t)(EDX));
  /* 12cfeedf push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12cfeee1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfeee4 push eax */
  push32((uint32_t)(EAX));
  /* 12cfeee5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfeee7 call 0x12d02370 */
  push32(0x12cfeeecu); f_12d02370();
  /* 12cfeeec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfeeef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfeef2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfeef4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfeef7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfeefa add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfef00 push edx */
  push32((uint32_t)(EDX));
  /* 12cfef01 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12cfef03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfef06 push eax */
  push32((uint32_t)(EAX));
  /* 12cfef07 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfef09 call 0x12d02370 */
  push32(0x12cfef0eu); f_12d02370();
  /* 12cfef0e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfef11 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfef14 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfef16 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfef19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfef1c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfef22 push edx */
  push32((uint32_t)(EDX));
  /* 12cfef23 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 12cfef25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfef28 push eax */
  push32((uint32_t)(EAX));
  /* 12cfef29 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfef2b call 0x12d02370 */
  push32(0x12cfef30u); f_12d02370();
  /* 12cfef30 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfef33 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfef36 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfef38 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfef3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfef3e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfef44 push edx */
  push32((uint32_t)(EDX));
  /* 12cfef45 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 12cfef47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfef4a push eax */
  push32((uint32_t)(EAX));
  /* 12cfef4b push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfef4d call 0x12d02370 */
  push32(0x12cfef52u); f_12d02370();
  /* 12cfef52 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfef55 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfef58 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfef5a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfef5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfef60 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfef66 push edx */
  push32((uint32_t)(EDX));
  /* 12cfef67 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 12cfef69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cfef6c push eax */
  push32((uint32_t)(EAX));
  /* 12cfef6d push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfef6f call 0x12d02370 */
  push32(0x12cfef74u); f_12d02370();
  /* 12cfef74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfef77 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfef7a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfef7c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfef7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfef82 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfef88 push edx */
  push32((uint32_t)(EDX));
  /* 12cfef89 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 12cfef8b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfef8e push eax */
  push32((uint32_t)(EAX));
  /* 12cfef8f push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfef91 call 0x12d02370 */
  push32(0x12cfef96u); f_12d02370();
  /* 12cfef96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfef99 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfef9c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfef9e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfefa1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfefa4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfefaa push edx */
  push32((uint32_t)(EDX));
  /* 12cfefab push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12cfefad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfefb0 push eax */
  push32((uint32_t)(EAX));
  /* 12cfefb1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfefb3 call 0x12d02370 */
  push32(0x12cfefb8u); f_12d02370();
  /* 12cfefb8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfefbb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfefbe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfefc0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfefc3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfefc6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfefcc push edx */
  push32((uint32_t)(EDX));
  /* 12cfefcd push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 12cfefd2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfefd5 push eax */
  push32((uint32_t)(EAX));
  /* 12cfefd6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cfefd8 call 0x12d02370 */
  push32(0x12cfefddu); f_12d02370();
  /* 12cfefdd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfefe0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cfefe3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfefe5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cfefe8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_12cfefeb:;
  /* 12cfefeb mov esp, ebp */
  ESP = (EBP);
  /* 12cfefed pop ebp */
  EBP = (pop32());
  /* 12cfefee ret  */
  ESPCHK(0x12cfea60u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x12cfeff0 (779 bytes, 265 insns) */
void f_12cfeff0(void) {
  FTRACE(0x12cfeff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfeff0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfeff1 mov ebp, esp */
  EBP = (ESP);
  /* 12cfeff3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfeff7 jne 0x12cfeffe */
  if (!C.zf) goto L_12cfeffe;
  /* 12cfeff9 jmp 0x12cff2f9 */
  goto L_12cff2f9;
L_12cfeffe:;
  /* 12cfeffe push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff000 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff003 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cff006 push ecx */
  push32((uint32_t)(ECX));
  /* 12cff007 call 0x12cf4c40 */
  push32(0x12cff00cu); f_12cf4c40();
  /* 12cff00c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff00f push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff011 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff014 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12cff017 push eax */
  push32((uint32_t)(EAX));
  /* 12cff018 call 0x12cf4c40 */
  push32(0x12cff01du); f_12cf4c40();
  /* 12cff01d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff020 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff022 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff025 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12cff028 push edx */
  push32((uint32_t)(EDX));
  /* 12cff029 call 0x12cf4c40 */
  push32(0x12cff02eu); f_12cf4c40();
  /* 12cff02e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff031 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff033 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff036 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12cff039 push ecx */
  push32((uint32_t)(ECX));
  /* 12cff03a call 0x12cf4c40 */
  push32(0x12cff03fu); f_12cf4c40();
  /* 12cff03f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff042 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff044 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff047 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12cff04a push eax */
  push32((uint32_t)(EAX));
  /* 12cff04b call 0x12cf4c40 */
  push32(0x12cff050u); f_12cf4c40();
  /* 12cff050 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff053 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff055 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff058 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12cff05b push edx */
  push32((uint32_t)(EDX));
  /* 12cff05c call 0x12cf4c40 */
  push32(0x12cff061u); f_12cf4c40();
  /* 12cff061 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff064 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff066 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff069 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cff06b push ecx */
  push32((uint32_t)(ECX));
  /* 12cff06c call 0x12cf4c40 */
  push32(0x12cff071u); f_12cf4c40();
  /* 12cff071 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff074 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff076 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff079 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 12cff07c push eax */
  push32((uint32_t)(EAX));
  /* 12cff07d call 0x12cf4c40 */
  push32(0x12cff082u); f_12cf4c40();
  /* 12cff082 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff085 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff087 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff08a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 12cff08d push edx */
  push32((uint32_t)(EDX));
  /* 12cff08e call 0x12cf4c40 */
  push32(0x12cff093u); f_12cf4c40();
  /* 12cff093 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff096 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff098 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff09b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 12cff09e push ecx */
  push32((uint32_t)(ECX));
  /* 12cff09f call 0x12cf4c40 */
  push32(0x12cff0a4u); f_12cf4c40();
  /* 12cff0a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff0a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff0a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff0ac mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 12cff0af push eax */
  push32((uint32_t)(EAX));
  /* 12cff0b0 call 0x12cf4c40 */
  push32(0x12cff0b5u); f_12cf4c40();
  /* 12cff0b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff0b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff0ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff0bd mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12cff0c0 push edx */
  push32((uint32_t)(EDX));
  /* 12cff0c1 call 0x12cf4c40 */
  push32(0x12cff0c6u); f_12cf4c40();
  /* 12cff0c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff0c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff0cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff0ce mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 12cff0d1 push ecx */
  push32((uint32_t)(ECX));
  /* 12cff0d2 call 0x12cf4c40 */
  push32(0x12cff0d7u); f_12cf4c40();
  /* 12cff0d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff0da push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff0dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff0df mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12cff0e2 push eax */
  push32((uint32_t)(EAX));
  /* 12cff0e3 call 0x12cf4c40 */
  push32(0x12cff0e8u); f_12cf4c40();
  /* 12cff0e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff0eb push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff0ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff0f0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 12cff0f3 push edx */
  push32((uint32_t)(EDX));
  /* 12cff0f4 call 0x12cf4c40 */
  push32(0x12cff0f9u); f_12cf4c40();
  /* 12cff0f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff0fc push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff0fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff101 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 12cff104 push ecx */
  push32((uint32_t)(ECX));
  /* 12cff105 call 0x12cf4c40 */
  push32(0x12cff10au); f_12cf4c40();
  /* 12cff10a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff10d push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff10f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff112 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12cff115 push eax */
  push32((uint32_t)(EAX));
  /* 12cff116 call 0x12cf4c40 */
  push32(0x12cff11bu); f_12cf4c40();
  /* 12cff11b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff11e push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff120 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff123 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 12cff126 push edx */
  push32((uint32_t)(EDX));
  /* 12cff127 call 0x12cf4c40 */
  push32(0x12cff12cu); f_12cf4c40();
  /* 12cff12c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff12f push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff131 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff134 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 12cff137 push ecx */
  push32((uint32_t)(ECX));
  /* 12cff138 call 0x12cf4c40 */
  push32(0x12cff13du); f_12cf4c40();
  /* 12cff13d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff140 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff142 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff145 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 12cff148 push eax */
  push32((uint32_t)(EAX));
  /* 12cff149 call 0x12cf4c40 */
  push32(0x12cff14eu); f_12cf4c40();
  /* 12cff14e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff151 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff153 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff156 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12cff159 push edx */
  push32((uint32_t)(EDX));
  /* 12cff15a call 0x12cf4c40 */
  push32(0x12cff15fu); f_12cf4c40();
  /* 12cff15f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff162 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff164 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff167 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12cff16a push ecx */
  push32((uint32_t)(ECX));
  /* 12cff16b call 0x12cf4c40 */
  push32(0x12cff170u); f_12cf4c40();
  /* 12cff170 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff173 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff175 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff178 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 12cff17b push eax */
  push32((uint32_t)(EAX));
  /* 12cff17c call 0x12cf4c40 */
  push32(0x12cff181u); f_12cf4c40();
  /* 12cff181 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff184 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff186 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff189 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 12cff18c push edx */
  push32((uint32_t)(EDX));
  /* 12cff18d call 0x12cf4c40 */
  push32(0x12cff192u); f_12cf4c40();
  /* 12cff192 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff195 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff197 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff19a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 12cff19d push ecx */
  push32((uint32_t)(ECX));
  /* 12cff19e call 0x12cf4c40 */
  push32(0x12cff1a3u); f_12cf4c40();
  /* 12cff1a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff1a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff1a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff1ab mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 12cff1ae push eax */
  push32((uint32_t)(EAX));
  /* 12cff1af call 0x12cf4c40 */
  push32(0x12cff1b4u); f_12cf4c40();
  /* 12cff1b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff1b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff1b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff1bc mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 12cff1bf push edx */
  push32((uint32_t)(EDX));
  /* 12cff1c0 call 0x12cf4c40 */
  push32(0x12cff1c5u); f_12cf4c40();
  /* 12cff1c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff1c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff1ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff1cd mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 12cff1d0 push ecx */
  push32((uint32_t)(ECX));
  /* 12cff1d1 call 0x12cf4c40 */
  push32(0x12cff1d6u); f_12cf4c40();
  /* 12cff1d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff1d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff1db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff1de mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 12cff1e1 push eax */
  push32((uint32_t)(EAX));
  /* 12cff1e2 call 0x12cf4c40 */
  push32(0x12cff1e7u); f_12cf4c40();
  /* 12cff1e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff1ea push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff1ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff1ef mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 12cff1f2 push edx */
  push32((uint32_t)(EDX));
  /* 12cff1f3 call 0x12cf4c40 */
  push32(0x12cff1f8u); f_12cf4c40();
  /* 12cff1f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff1fb push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff1fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff200 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 12cff203 push ecx */
  push32((uint32_t)(ECX));
  /* 12cff204 call 0x12cf4c40 */
  push32(0x12cff209u); f_12cf4c40();
  /* 12cff209 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff20c push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff20e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff211 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 12cff214 push eax */
  push32((uint32_t)(EAX));
  /* 12cff215 call 0x12cf4c40 */
  push32(0x12cff21au); f_12cf4c40();
  /* 12cff21a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff21d push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff21f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff222 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 12cff228 push edx */
  push32((uint32_t)(EDX));
  /* 12cff229 call 0x12cf4c40 */
  push32(0x12cff22eu); f_12cf4c40();
  /* 12cff22e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff231 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff233 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff236 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 12cff23c push ecx */
  push32((uint32_t)(ECX));
  /* 12cff23d call 0x12cf4c40 */
  push32(0x12cff242u); f_12cf4c40();
  /* 12cff242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff245 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff247 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff24a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 12cff250 push eax */
  push32((uint32_t)(EAX));
  /* 12cff251 call 0x12cf4c40 */
  push32(0x12cff256u); f_12cf4c40();
  /* 12cff256 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff259 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff25b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff25e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 12cff264 push edx */
  push32((uint32_t)(EDX));
  /* 12cff265 call 0x12cf4c40 */
  push32(0x12cff26au); f_12cf4c40();
  /* 12cff26a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff26d push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff26f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff272 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 12cff278 push ecx */
  push32((uint32_t)(ECX));
  /* 12cff279 call 0x12cf4c40 */
  push32(0x12cff27eu); f_12cf4c40();
  /* 12cff27e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff281 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff283 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff286 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 12cff28c push eax */
  push32((uint32_t)(EAX));
  /* 12cff28d call 0x12cf4c40 */
  push32(0x12cff292u); f_12cf4c40();
  /* 12cff292 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff295 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff297 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff29a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 12cff2a0 push edx */
  push32((uint32_t)(EDX));
  /* 12cff2a1 call 0x12cf4c40 */
  push32(0x12cff2a6u); f_12cf4c40();
  /* 12cff2a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff2a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff2ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff2ae mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12cff2b4 push ecx */
  push32((uint32_t)(ECX));
  /* 12cff2b5 call 0x12cf4c40 */
  push32(0x12cff2bau); f_12cf4c40();
  /* 12cff2ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff2bd push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff2bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff2c2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12cff2c8 push eax */
  push32((uint32_t)(EAX));
  /* 12cff2c9 call 0x12cf4c40 */
  push32(0x12cff2ceu); f_12cf4c40();
  /* 12cff2ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff2d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff2d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff2d6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12cff2dc push edx */
  push32((uint32_t)(EDX));
  /* 12cff2dd call 0x12cf4c40 */
  push32(0x12cff2e2u); f_12cf4c40();
  /* 12cff2e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff2e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff2e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff2ea mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 12cff2f0 push ecx */
  push32((uint32_t)(ECX));
  /* 12cff2f1 call 0x12cf4c40 */
  push32(0x12cff2f6u); f_12cf4c40();
  /* 12cff2f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cff2f9:;
  /* 12cff2f9 pop ebp */
  EBP = (pop32());
  /* 12cff2fa ret  */
  ESPCHK(0x12cfeff0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f300 @ 0x12cff300 (678 bytes, 180 insns) */
void f_12cff300(void) {
  FTRACE(0x12cff300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cff300 push ebp */
  push32((uint32_t)(EBP));
  /* 12cff301 mov ebp, esp */
  EBP = (ESP);
  /* 12cff303 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cff306 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12cff30d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cff30f mov ax, word ptr [0x12d2077a] */
  AX = (r16((uint32_t)(0x12d2077a)));
  /* 12cff315 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cff318 cmp dword ptr [0x12d20720], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20720))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cff31f je 0x12cff47a */
  if (C.zf) goto L_12cff47a;
  /* 12cff325 push 0x12d20748 */
  push32((uint32_t)(0x12d20748u));
  /* 12cff32a push 0xe */
  push32((uint32_t)(0xeu));
  /* 12cff32c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cff32f push ecx */
  push32((uint32_t)(ECX));
  /* 12cff330 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cff332 call 0x12d02370 */
  push32(0x12cff337u); f_12d02370();
  /* 12cff337 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff33a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cff33d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12cff33f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12cff342 push 0x12d2074c */
  push32((uint32_t)(0x12d2074cu));
  /* 12cff347 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12cff349 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cff34c push eax */
  push32((uint32_t)(EAX));
  /* 12cff34d push 1 */
  push32((uint32_t)(0x1u));
  /* 12cff34f call 0x12d02370 */
  push32(0x12cff354u); f_12d02370();
  /* 12cff354 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff357 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cff35a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cff35c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cff35f push 0x12d20750 */
  push32((uint32_t)(0x12d20750u));
  /* 12cff364 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12cff366 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cff369 push edx */
  push32((uint32_t)(EDX));
  /* 12cff36a push 1 */
  push32((uint32_t)(0x1u));
  /* 12cff36c call 0x12d02370 */
  push32(0x12cff371u); f_12d02370();
  /* 12cff371 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff374 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cff377 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cff379 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cff37c mov edx, dword ptr [0x12d20750] */
  EDX = (r32((uint32_t)(0x12d20750)));
  /* 12cff382 push edx */
  push32((uint32_t)(EDX));
  /* 12cff383 call 0x12cff5b0 */
  push32(0x12cff388u); f_12cff5b0();
  /* 12cff388 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff38b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cff38f je 0x12cff3e9 */
  if (C.zf) goto L_12cff3e9;
  /* 12cff391 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff393 mov eax, dword ptr [0x12d20748] */
  EAX = (r32((uint32_t)(0x12d20748)));
  /* 12cff398 push eax */
  push32((uint32_t)(EAX));
  /* 12cff399 call 0x12cf4c40 */
  push32(0x12cff39eu); f_12cf4c40();
  /* 12cff39e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff3a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff3a3 mov ecx, dword ptr [0x12d2074c] */
  ECX = (r32((uint32_t)(0x12d2074c)));
  /* 12cff3a9 push ecx */
  push32((uint32_t)(ECX));
  /* 12cff3aa call 0x12cf4c40 */
  push32(0x12cff3afu); f_12cf4c40();
  /* 12cff3af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff3b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff3b4 mov edx, dword ptr [0x12d20750] */
  EDX = (r32((uint32_t)(0x12d20750)));
  /* 12cff3ba push edx */
  push32((uint32_t)(EDX));
  /* 12cff3bb call 0x12cf4c40 */
  push32(0x12cff3c0u); f_12cf4c40();
  /* 12cff3c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff3c3 mov dword ptr [0x12d20748], 0 */
  w32((uint32_t)(0x12d20748), (0x0u));
  /* 12cff3cd mov dword ptr [0x12d2074c], 0 */
  w32((uint32_t)(0x12d2074c), (0x0u));
  /* 12cff3d7 mov dword ptr [0x12d20750], 0 */
  w32((uint32_t)(0x12d20750), (0x0u));
  /* 12cff3e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cff3e4 jmp 0x12cff5a2 */
  goto L_12cff5a2;
L_12cff3e9:;
  /* 12cff3e9 mov eax, dword ptr [0x12d1fd88] */
  EAX = (r32((uint32_t)(0x12d1fd88)));
  /* 12cff3ee cmp dword ptr [eax], 0x12d1fd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x12d1fd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cff3f4 je 0x12cff430 */
  if (C.zf) goto L_12cff430;
  /* 12cff3f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff3f8 mov ecx, dword ptr [0x12d1fd88] */
  ECX = (r32((uint32_t)(0x12d1fd88)));
  /* 12cff3fe mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cff400 push edx */
  push32((uint32_t)(EDX));
  /* 12cff401 call 0x12cf4c40 */
  push32(0x12cff406u); f_12cf4c40();
  /* 12cff406 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff409 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff40b mov eax, dword ptr [0x12d1fd88] */
  EAX = (r32((uint32_t)(0x12d1fd88)));
  /* 12cff410 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cff413 push ecx */
  push32((uint32_t)(ECX));
  /* 12cff414 call 0x12cf4c40 */
  push32(0x12cff419u); f_12cf4c40();
  /* 12cff419 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff41c push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff41e mov edx, dword ptr [0x12d1fd88] */
  EDX = (r32((uint32_t)(0x12d1fd88)));
  /* 12cff424 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12cff427 push eax */
  push32((uint32_t)(EAX));
  /* 12cff428 call 0x12cf4c40 */
  push32(0x12cff42du); f_12cf4c40();
  /* 12cff42d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cff430:;
  /* 12cff430 mov ecx, dword ptr [0x12d1fd88] */
  ECX = (r32((uint32_t)(0x12d1fd88)));
  /* 12cff436 mov edx, dword ptr [0x12d20748] */
  EDX = (r32((uint32_t)(0x12d20748)));
  /* 12cff43c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12cff43e mov eax, dword ptr [0x12d1fd88] */
  EAX = (r32((uint32_t)(0x12d1fd88)));
  /* 12cff443 mov ecx, dword ptr [0x12d2074c] */
  ECX = (r32((uint32_t)(0x12d2074c)));
  /* 12cff449 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12cff44c mov edx, dword ptr [0x12d1fd88] */
  EDX = (r32((uint32_t)(0x12d1fd88)));
  /* 12cff452 mov eax, dword ptr [0x12d20750] */
  EAX = (r32((uint32_t)(0x12d20750)));
  /* 12cff457 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12cff45a mov ecx, dword ptr [0x12d1fd88] */
  ECX = (r32((uint32_t)(0x12d1fd88)));
  /* 12cff460 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cff462 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cff464 mov byte ptr [0x12d1eea8], al */
  w8((uint32_t)(0x12d1eea8), (AL));
  /* 12cff469 mov dword ptr [0x12d1eeac], 1 */
  w32((uint32_t)(0x12d1eeac), (0x1u));
  /* 12cff473 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cff475 jmp 0x12cff5a2 */
  goto L_12cff5a2;
L_12cff47a:;
  /* 12cff47a push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff47c mov ecx, dword ptr [0x12d20748] */
  ECX = (r32((uint32_t)(0x12d20748)));
  /* 12cff482 push ecx */
  push32((uint32_t)(ECX));
  /* 12cff483 call 0x12cf4c40 */
  push32(0x12cff488u); f_12cf4c40();
  /* 12cff488 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff48b push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff48d mov edx, dword ptr [0x12d2074c] */
  EDX = (r32((uint32_t)(0x12d2074c)));
  /* 12cff493 push edx */
  push32((uint32_t)(EDX));
  /* 12cff494 call 0x12cf4c40 */
  push32(0x12cff499u); f_12cf4c40();
  /* 12cff499 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff49c push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff49e mov eax, dword ptr [0x12d20750] */
  EAX = (r32((uint32_t)(0x12d20750)));
  /* 12cff4a3 push eax */
  push32((uint32_t)(EAX));
  /* 12cff4a4 call 0x12cf4c40 */
  push32(0x12cff4a9u); f_12cf4c40();
  /* 12cff4a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff4ac mov dword ptr [0x12d20748], 0 */
  w32((uint32_t)(0x12d20748), (0x0u));
  /* 12cff4b6 mov dword ptr [0x12d2074c], 0 */
  w32((uint32_t)(0x12d2074c), (0x0u));
  /* 12cff4c0 mov dword ptr [0x12d20750], 0 */
  w32((uint32_t)(0x12d20750), (0x0u));
  /* 12cff4ca push 0x88 */
  push32((uint32_t)(0x88u));
  /* 12cff4cf push 0x12d1c46c */
  push32((uint32_t)(0x12d1c46cu));
  /* 12cff4d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff4d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff4d8 call 0x12cf41b0 */
  push32(0x12cff4ddu); f_12cf41b0();
  /* 12cff4dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff4e0 mov ecx, dword ptr [0x12d1fd88] */
  ECX = (r32((uint32_t)(0x12d1fd88)));
  /* 12cff4e6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12cff4e8 mov edx, dword ptr [0x12d1fd88] */
  EDX = (r32((uint32_t)(0x12d1fd88)));
  /* 12cff4ee cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cff4f1 jne 0x12cff4fb */
  if (!C.zf) goto L_12cff4fb;
  /* 12cff4f3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cff4f6 jmp 0x12cff5a2 */
  goto L_12cff5a2;
L_12cff4fb:;
  /* 12cff4fb push 0x12d1c43c */
  push32((uint32_t)(0x12d1c43cu));
  /* 12cff500 mov eax, dword ptr [0x12d1fd88] */
  EAX = (r32((uint32_t)(0x12d1fd88)));
  /* 12cff505 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cff507 push ecx */
  push32((uint32_t)(ECX));
  /* 12cff508 call 0x12cf7160 */
  push32(0x12cff50du); f_12cf7160();
  /* 12cff50d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff510 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 12cff515 push 0x12d1c46c */
  push32((uint32_t)(0x12d1c46cu));
  /* 12cff51a push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff51c push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff51e call 0x12cf41b0 */
  push32(0x12cff523u); f_12cf41b0();
  /* 12cff523 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff526 mov edx, dword ptr [0x12d1fd88] */
  EDX = (r32((uint32_t)(0x12d1fd88)));
  /* 12cff52c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12cff52f mov eax, dword ptr [0x12d1fd88] */
  EAX = (r32((uint32_t)(0x12d1fd88)));
  /* 12cff534 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cff538 jne 0x12cff53f */
  if (!C.zf) goto L_12cff53f;
  /* 12cff53a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cff53d jmp 0x12cff5a2 */
  goto L_12cff5a2;
L_12cff53f:;
  /* 12cff53f mov ecx, dword ptr [0x12d1fd88] */
  ECX = (r32((uint32_t)(0x12d1fd88)));
  /* 12cff545 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cff548 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12cff54b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 12cff550 push 0x12d1c46c */
  push32((uint32_t)(0x12d1c46cu));
  /* 12cff555 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff557 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff559 call 0x12cf41b0 */
  push32(0x12cff55eu); f_12cf41b0();
  /* 12cff55e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff561 mov ecx, dword ptr [0x12d1fd88] */
  ECX = (r32((uint32_t)(0x12d1fd88)));
  /* 12cff567 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12cff56a mov edx, dword ptr [0x12d1fd88] */
  EDX = (r32((uint32_t)(0x12d1fd88)));
  /* 12cff570 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cff574 jne 0x12cff57b */
  if (!C.zf) goto L_12cff57b;
  /* 12cff576 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cff579 jmp 0x12cff5a2 */
  goto L_12cff5a2;
L_12cff57b:;
  /* 12cff57b mov eax, dword ptr [0x12d1fd88] */
  EAX = (r32((uint32_t)(0x12d1fd88)));
  /* 12cff580 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12cff583 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12cff586 mov edx, dword ptr [0x12d1fd88] */
  EDX = (r32((uint32_t)(0x12d1fd88)));
  /* 12cff58c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cff58e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12cff590 mov byte ptr [0x12d1eea8], cl */
  w8((uint32_t)(0x12d1eea8), (CL));
  /* 12cff596 mov dword ptr [0x12d1eeac], 1 */
  w32((uint32_t)(0x12d1eeac), (0x1u));
  /* 12cff5a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cff5a2:;
  /* 12cff5a2 mov esp, ebp */
  ESP = (EBP);
  /* 12cff5a4 pop ebp */
  EBP = (pop32());
  /* 12cff5a5 ret  */
  ESPCHK(0x12cff300u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12cff5b0 (125 bytes, 49 insns) */
void f_12cff5b0(void) {
  FTRACE(0x12cff5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cff5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cff5b1 mov ebp, esp */
  EBP = (ESP);
  /* 12cff5b3 push ecx */
  push32((uint32_t)(ECX));
L_12cff5b4:;
  /* 12cff5b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff5b7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cff5ba test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cff5bc je 0x12cff629 */
  if (C.zf) goto L_12cff629;
  /* 12cff5be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff5c1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12cff5c4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cff5c7 jl 0x12cff5ed */
  if ((C.sf!=C.of)) goto L_12cff5ed;
  /* 12cff5c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff5cc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cff5cf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cff5d2 jg 0x12cff5ed */
  if ((!C.zf&&C.sf==C.of)) goto L_12cff5ed;
  /* 12cff5d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff5d7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cff5da sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cff5dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff5e0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12cff5e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff5e5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff5e8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12cff5eb jmp 0x12cff627 */
  goto L_12cff627;
L_12cff5ed:;
  /* 12cff5ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff5f0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cff5f3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cff5f6 jne 0x12cff61e */
  if (!C.zf) goto L_12cff61e;
  /* 12cff5f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff5fb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cff5fe:;
  /* 12cff5fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cff601 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cff604 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12cff607 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12cff609 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cff60c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff60f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cff612 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cff615 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12cff618 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cff61a jne 0x12cff5fe */
  if (!C.zf) goto L_12cff5fe;
  /* 12cff61c jmp 0x12cff627 */
  goto L_12cff627;
L_12cff61e:;
  /* 12cff61e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff621 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff624 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12cff627:;
  /* 12cff627 jmp 0x12cff5b4 */
  goto L_12cff5b4;
L_12cff629:;
  /* 12cff629 mov esp, ebp */
  ESP = (EBP);
  /* 12cff62b pop ebp */
  EBP = (pop32());
  /* 12cff62c ret  */
  ESPCHK(0x12cff5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f630 @ 0x12cff630 (304 bytes, 85 insns) */
void f_12cff630(void) {
  FTRACE(0x12cff630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cff630 push ebp */
  push32((uint32_t)(EBP));
  /* 12cff631 mov ebp, esp */
  EBP = (ESP);
  /* 12cff633 push ecx */
  push32((uint32_t)(ECX));
  /* 12cff634 cmp dword ptr [0x12d2071c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d2071c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cff63b je 0x12cff6fc */
  if (C.zf) goto L_12cff6fc;
  /* 12cff641 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12cff643 push 0x12d1c478 */
  push32((uint32_t)(0x12d1c478u));
  /* 12cff648 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff64a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12cff64c push 1 */
  push32((uint32_t)(0x1u));
  /* 12cff64e call 0x12cf45c0 */
  push32(0x12cff653u); f_12cf45c0();
  /* 12cff653 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff656 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cff659 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cff65d jne 0x12cff669 */
  if (!C.zf) goto L_12cff669;
  /* 12cff65f mov eax, 1 */
  EAX = (0x1u);
  /* 12cff664 jmp 0x12cff75c */
  goto L_12cff75c;
L_12cff669:;
  /* 12cff669 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cff66c push eax */
  push32((uint32_t)(EAX));
  /* 12cff66d call 0x12cff760 */
  push32(0x12cff672u); f_12cff760();
  /* 12cff672 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff675 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cff677 je 0x12cff69d */
  if (C.zf) goto L_12cff69d;
  /* 12cff679 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cff67c push ecx */
  push32((uint32_t)(ECX));
  /* 12cff67d call 0x12cff9f0 */
  push32(0x12cff682u); f_12cff9f0();
  /* 12cff682 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff685 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff687 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cff68a push edx */
  push32((uint32_t)(EDX));
  /* 12cff68b call 0x12cf4c40 */
  push32(0x12cff690u); f_12cf4c40();
  /* 12cff690 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff693 mov eax, 1 */
  EAX = (0x1u);
  /* 12cff698 jmp 0x12cff75c */
  goto L_12cff75c;
L_12cff69d:;
  /* 12cff69d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cff6a0 mov ecx, dword ptr [0x12d1fd88] */
  ECX = (r32((uint32_t)(0x12d1fd88)));
  /* 12cff6a6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cff6a8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12cff6aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cff6ad mov ecx, dword ptr [0x12d1fd88] */
  ECX = (r32((uint32_t)(0x12d1fd88)));
  /* 12cff6b3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cff6b6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12cff6b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cff6bc mov ecx, dword ptr [0x12d1fd88] */
  ECX = (r32((uint32_t)(0x12d1fd88)));
  /* 12cff6c2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12cff6c5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12cff6c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cff6cb mov dword ptr [0x12d1fd88], eax */
  w32((uint32_t)(0x12d1fd88), (EAX));
  /* 12cff6d0 mov ecx, dword ptr [0x12d20754] */
  ECX = (r32((uint32_t)(0x12d20754)));
  /* 12cff6d6 push ecx */
  push32((uint32_t)(ECX));
  /* 12cff6d7 call 0x12cff9f0 */
  push32(0x12cff6dcu); f_12cff9f0();
  /* 12cff6dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff6df push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff6e1 mov edx, dword ptr [0x12d20754] */
  EDX = (r32((uint32_t)(0x12d20754)));
  /* 12cff6e7 push edx */
  push32((uint32_t)(EDX));
  /* 12cff6e8 call 0x12cf4c40 */
  push32(0x12cff6edu); f_12cf4c40();
  /* 12cff6ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff6f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cff6f3 mov dword ptr [0x12d20754], eax */
  w32((uint32_t)(0x12d20754), (EAX));
  /* 12cff6f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cff6fa jmp 0x12cff75c */
  goto L_12cff75c;
L_12cff6fc:;
  /* 12cff6fc mov ecx, dword ptr [0x12d1fd88] */
  ECX = (r32((uint32_t)(0x12d1fd88)));
  /* 12cff702 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cff704 mov dword ptr [0x12d1fd58], edx */
  w32((uint32_t)(0x12d1fd58), (EDX));
  /* 12cff70a mov eax, dword ptr [0x12d1fd88] */
  EAX = (r32((uint32_t)(0x12d1fd88)));
  /* 12cff70f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cff712 mov dword ptr [0x12d1fd5c], ecx */
  w32((uint32_t)(0x12d1fd5c), (ECX));
  /* 12cff718 mov edx, dword ptr [0x12d1fd88] */
  EDX = (r32((uint32_t)(0x12d1fd88)));
  /* 12cff71e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12cff721 mov dword ptr [0x12d1fd60], eax */
  w32((uint32_t)(0x12d1fd60), (EAX));
  /* 12cff726 mov dword ptr [0x12d1fd88], 0x12d1fd58 */
  w32((uint32_t)(0x12d1fd88), (0x12d1fd58u));
  /* 12cff730 mov ecx, dword ptr [0x12d20754] */
  ECX = (r32((uint32_t)(0x12d20754)));
  /* 12cff736 push ecx */
  push32((uint32_t)(ECX));
  /* 12cff737 call 0x12cff9f0 */
  push32(0x12cff73cu); f_12cff9f0();
  /* 12cff73c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff73f push 2 */
  push32((uint32_t)(0x2u));
  /* 12cff741 mov edx, dword ptr [0x12d20754] */
  EDX = (r32((uint32_t)(0x12d20754)));
  /* 12cff747 push edx */
  push32((uint32_t)(EDX));
  /* 12cff748 call 0x12cf4c40 */
  push32(0x12cff74du); f_12cf4c40();
  /* 12cff74d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff750 mov dword ptr [0x12d20754], 0 */
  w32((uint32_t)(0x12d20754), (0x0u));
  /* 12cff75a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cff75c:;
  /* 12cff75c mov esp, ebp */
  ESP = (EBP);
  /* 12cff75e pop ebp */
  EBP = (pop32());
  /* 12cff75f ret  */
  ESPCHK(0x12cff630u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f760 @ 0x12cff760 (525 bytes, 200 insns) */
void f_12cff760(void) {
  FTRACE(0x12cff760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cff760 push ebp */
  push32((uint32_t)(EBP));
  /* 12cff761 mov ebp, esp */
  EBP = (ESP);
  /* 12cff763 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cff766 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12cff76d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cff76f mov ax, word ptr [0x12d20774] */
  AX = (r16((uint32_t)(0x12d20774)));
  /* 12cff775 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cff778 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cff77c jne 0x12cff786 */
  if (!C.zf) goto L_12cff786;
  /* 12cff77e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cff781 jmp 0x12cff969 */
  goto L_12cff969;
L_12cff786:;
  /* 12cff786 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff789 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff78c push ecx */
  push32((uint32_t)(ECX));
  /* 12cff78d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 12cff78f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cff792 push edx */
  push32((uint32_t)(EDX));
  /* 12cff793 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cff795 call 0x12d02370 */
  push32(0x12cff79au); f_12d02370();
  /* 12cff79a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff79d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cff7a0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cff7a2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cff7a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff7a8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff7ab push edx */
  push32((uint32_t)(EDX));
  /* 12cff7ac push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12cff7ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cff7b1 push eax */
  push32((uint32_t)(EAX));
  /* 12cff7b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cff7b4 call 0x12d02370 */
  push32(0x12cff7b9u); f_12d02370();
  /* 12cff7b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff7bc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cff7bf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cff7c1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cff7c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff7c7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff7ca push edx */
  push32((uint32_t)(EDX));
  /* 12cff7cb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12cff7cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cff7d0 push eax */
  push32((uint32_t)(EAX));
  /* 12cff7d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cff7d3 call 0x12d02370 */
  push32(0x12cff7d8u); f_12d02370();
  /* 12cff7d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff7db mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cff7de or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cff7e0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cff7e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff7e6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff7e9 push edx */
  push32((uint32_t)(EDX));
  /* 12cff7ea push 0x17 */
  push32((uint32_t)(0x17u));
  /* 12cff7ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cff7ef push eax */
  push32((uint32_t)(EAX));
  /* 12cff7f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cff7f2 call 0x12d02370 */
  push32(0x12cff7f7u); f_12d02370();
  /* 12cff7f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff7fa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cff7fd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cff7ff mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cff802 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff805 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff808 push edx */
  push32((uint32_t)(EDX));
  /* 12cff809 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12cff80b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cff80e push eax */
  push32((uint32_t)(EAX));
  /* 12cff80f push 1 */
  push32((uint32_t)(0x1u));
  /* 12cff811 call 0x12d02370 */
  push32(0x12cff816u); f_12d02370();
  /* 12cff816 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff819 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cff81c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cff81e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cff821 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff824 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12cff827 push eax */
  push32((uint32_t)(EAX));
  /* 12cff828 call 0x12cff970 */
  push32(0x12cff82du); f_12cff970();
  /* 12cff82d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff830 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff833 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff836 push ecx */
  push32((uint32_t)(ECX));
  /* 12cff837 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 12cff839 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cff83c push edx */
  push32((uint32_t)(EDX));
  /* 12cff83d push 1 */
  push32((uint32_t)(0x1u));
  /* 12cff83f call 0x12d02370 */
  push32(0x12cff844u); f_12d02370();
  /* 12cff844 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff847 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cff84a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cff84c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cff84f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff852 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff855 push edx */
  push32((uint32_t)(EDX));
  /* 12cff856 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 12cff858 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cff85b push eax */
  push32((uint32_t)(EAX));
  /* 12cff85c push 1 */
  push32((uint32_t)(0x1u));
  /* 12cff85e call 0x12d02370 */
  push32(0x12cff863u); f_12d02370();
  /* 12cff863 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff866 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cff869 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cff86b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cff86e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff871 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff874 push edx */
  push32((uint32_t)(EDX));
  /* 12cff875 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12cff877 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cff87a push eax */
  push32((uint32_t)(EAX));
  /* 12cff87b push 0 */
  push32((uint32_t)(0x0u));
  /* 12cff87d call 0x12d02370 */
  push32(0x12cff882u); f_12d02370();
  /* 12cff882 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff885 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cff888 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cff88a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cff88d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff890 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff893 push edx */
  push32((uint32_t)(EDX));
  /* 12cff894 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12cff896 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cff899 push eax */
  push32((uint32_t)(EAX));
  /* 12cff89a push 0 */
  push32((uint32_t)(0x0u));
  /* 12cff89c call 0x12d02370 */
  push32(0x12cff8a1u); f_12d02370();
  /* 12cff8a1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff8a4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cff8a7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cff8a9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cff8ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff8af add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff8b2 push edx */
  push32((uint32_t)(EDX));
  /* 12cff8b3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 12cff8b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cff8b8 push eax */
  push32((uint32_t)(EAX));
  /* 12cff8b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cff8bb call 0x12d02370 */
  push32(0x12cff8c0u); f_12d02370();
  /* 12cff8c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff8c3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cff8c6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cff8c8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cff8cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff8ce add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff8d1 push edx */
  push32((uint32_t)(EDX));
  /* 12cff8d2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 12cff8d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cff8d7 push eax */
  push32((uint32_t)(EAX));
  /* 12cff8d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cff8da call 0x12d02370 */
  push32(0x12cff8dfu); f_12d02370();
  /* 12cff8df add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff8e2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cff8e5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cff8e7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cff8ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff8ed add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff8f0 push edx */
  push32((uint32_t)(EDX));
  /* 12cff8f1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 12cff8f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cff8f6 push eax */
  push32((uint32_t)(EAX));
  /* 12cff8f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cff8f9 call 0x12d02370 */
  push32(0x12cff8feu); f_12d02370();
  /* 12cff8fe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff901 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cff904 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cff906 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cff909 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff90c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff90f push edx */
  push32((uint32_t)(EDX));
  /* 12cff910 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 12cff912 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cff915 push eax */
  push32((uint32_t)(EAX));
  /* 12cff916 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cff918 call 0x12d02370 */
  push32(0x12cff91du); f_12d02370();
  /* 12cff91d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff920 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cff923 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cff925 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cff928 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff92b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff92e push edx */
  push32((uint32_t)(EDX));
  /* 12cff92f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 12cff931 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cff934 push eax */
  push32((uint32_t)(EAX));
  /* 12cff935 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cff937 call 0x12d02370 */
  push32(0x12cff93cu); f_12d02370();
  /* 12cff93c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff93f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cff942 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cff944 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cff947 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff94a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff94d push edx */
  push32((uint32_t)(EDX));
  /* 12cff94e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 12cff950 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cff953 push eax */
  push32((uint32_t)(EAX));
  /* 12cff954 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cff956 call 0x12d02370 */
  push32(0x12cff95bu); f_12d02370();
  /* 12cff95b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff95e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cff961 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cff963 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cff966 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12cff969:;
  /* 12cff969 mov esp, ebp */
  ESP = (EBP);
  /* 12cff96b pop ebp */
  EBP = (pop32());
  /* 12cff96c ret  */
  ESPCHK(0x12cff760u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12cff970 (125 bytes, 49 insns) */
void f_12cff970(void) {
  FTRACE(0x12cff970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cff970 push ebp */
  push32((uint32_t)(EBP));
  /* 12cff971 mov ebp, esp */
  EBP = (ESP);
  /* 12cff973 push ecx */
  push32((uint32_t)(ECX));
L_12cff974:;
  /* 12cff974 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff977 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cff97a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cff97c je 0x12cff9e9 */
  if (C.zf) goto L_12cff9e9;
  /* 12cff97e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff981 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12cff984 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cff987 jl 0x12cff9ad */
  if ((C.sf!=C.of)) goto L_12cff9ad;
  /* 12cff989 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff98c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cff98f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cff992 jg 0x12cff9ad */
  if ((!C.zf&&C.sf==C.of)) goto L_12cff9ad;
  /* 12cff994 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff997 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cff99a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cff99d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff9a0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12cff9a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff9a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff9a8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12cff9ab jmp 0x12cff9e7 */
  goto L_12cff9e7;
L_12cff9ad:;
  /* 12cff9ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff9b0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cff9b3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cff9b6 jne 0x12cff9de */
  if (!C.zf) goto L_12cff9de;
  /* 12cff9b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff9bb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cff9be:;
  /* 12cff9be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cff9c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cff9c4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12cff9c7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12cff9c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cff9cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff9cf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cff9d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cff9d5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12cff9d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cff9da jne 0x12cff9be */
  if (!C.zf) goto L_12cff9be;
  /* 12cff9dc jmp 0x12cff9e7 */
  goto L_12cff9e7;
L_12cff9de:;
  /* 12cff9de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cff9e1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cff9e4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12cff9e7:;
  /* 12cff9e7 jmp 0x12cff974 */
  goto L_12cff974;
L_12cff9e9:;
  /* 12cff9e9 mov esp, ebp */
  ESP = (EBP);
  /* 12cff9eb pop ebp */
  EBP = (pop32());
  /* 12cff9ec ret  */
  ESPCHK(0x12cff970u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f9f0 @ 0x12cff9f0 (147 bytes, 52 insns) */
void f_12cff9f0(void) {
  FTRACE(0x12cff9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cff9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cff9f1 mov ebp, esp */
  EBP = (ESP);
  /* 12cff9f3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cff9f7 jne 0x12cff9fe */
  if (!C.zf) goto L_12cff9fe;
  /* 12cff9f9 jmp 0x12cffa81 */
  goto L_12cffa81;
L_12cff9fe:;
  /* 12cff9fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cffa01 cmp dword ptr [eax + 0xc], 0x12d207b0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x12d207b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cffa08 je 0x12cffa81 */
  if (C.zf) goto L_12cffa81;
  /* 12cffa0a push 2 */
  push32((uint32_t)(0x2u));
  /* 12cffa0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cffa0f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12cffa12 push edx */
  push32((uint32_t)(EDX));
  /* 12cffa13 call 0x12cf4c40 */
  push32(0x12cffa18u); f_12cf4c40();
  /* 12cffa18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cffa1b push 2 */
  push32((uint32_t)(0x2u));
  /* 12cffa1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cffa20 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12cffa23 push ecx */
  push32((uint32_t)(ECX));
  /* 12cffa24 call 0x12cf4c40 */
  push32(0x12cffa29u); f_12cf4c40();
  /* 12cffa29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cffa2c push 2 */
  push32((uint32_t)(0x2u));
  /* 12cffa2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cffa31 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12cffa34 push eax */
  push32((uint32_t)(EAX));
  /* 12cffa35 call 0x12cf4c40 */
  push32(0x12cffa3au); f_12cf4c40();
  /* 12cffa3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cffa3d push 2 */
  push32((uint32_t)(0x2u));
  /* 12cffa3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cffa42 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12cffa45 push edx */
  push32((uint32_t)(EDX));
  /* 12cffa46 call 0x12cf4c40 */
  push32(0x12cffa4bu); f_12cf4c40();
  /* 12cffa4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cffa4e push 2 */
  push32((uint32_t)(0x2u));
  /* 12cffa50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cffa53 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12cffa56 push ecx */
  push32((uint32_t)(ECX));
  /* 12cffa57 call 0x12cf4c40 */
  push32(0x12cffa5cu); f_12cf4c40();
  /* 12cffa5c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cffa5f push 2 */
  push32((uint32_t)(0x2u));
  /* 12cffa61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cffa64 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 12cffa67 push eax */
  push32((uint32_t)(EAX));
  /* 12cffa68 call 0x12cf4c40 */
  push32(0x12cffa6du); f_12cf4c40();
  /* 12cffa6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cffa70 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cffa72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cffa75 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 12cffa78 push edx */
  push32((uint32_t)(EDX));
  /* 12cffa79 call 0x12cf4c40 */
  push32(0x12cffa7eu); f_12cf4c40();
  /* 12cffa7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cffa81:;
  /* 12cffa81 pop ebp */
  EBP = (pop32());
  /* 12cffa82 ret  */
  ESPCHK(0x12cff9f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fa90 @ 0x12cffa90 (928 bytes, 284 insns) */
void f_12cffa90(void) {
  FTRACE(0x12cffa90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cffa90 push ebp */
  push32((uint32_t)(EBP));
  /* 12cffa91 mov ebp, esp */
  EBP = (ESP);
  /* 12cffa93 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cffa96 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12cffa9d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12cffaa4 cmp dword ptr [0x12d20718], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20718))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cffaab je 0x12cffde1 */
  if (C.zf) goto L_12cffde1;
  /* 12cffab1 cmp dword ptr [0x12d20728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cffab8 jne 0x12cffae0 */
  if (!C.zf) goto L_12cffae0;
  /* 12cffaba push 0x12d20728 */
  push32((uint32_t)(0x12d20728u));
  /* 12cffabf push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12cffac4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cffac6 mov ax, word ptr [0x12d2076c] */
  AX = (r16((uint32_t)(0x12d2076c)));
  /* 12cffacc push eax */
  push32((uint32_t)(EAX));
  /* 12cffacd push 0 */
  push32((uint32_t)(0x0u));
  /* 12cffacf call 0x12d02370 */
  push32(0x12cffad4u); f_12d02370();
  /* 12cffad4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cffad7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cffad9 je 0x12cffae0 */
  if (C.zf) goto L_12cffae0;
  /* 12cffadb jmp 0x12cffda2 */
  goto L_12cffda2;
L_12cffae0:;
  /* 12cffae0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 12cffae2 push 0x12d1c484 */
  push32((uint32_t)(0x12d1c484u));
  /* 12cffae7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cffae9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12cffaee call 0x12cf41b0 */
  push32(0x12cffaf3u); f_12cf41b0();
  /* 12cffaf3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cffaf6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12cffaf9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12cffafb push 0x12d1c484 */
  push32((uint32_t)(0x12d1c484u));
  /* 12cffb00 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cffb02 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12cffb07 call 0x12cf41b0 */
  push32(0x12cffb0cu); f_12cf41b0();
  /* 12cffb0c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cffb0f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12cffb12 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 12cffb14 push 0x12d1c484 */
  push32((uint32_t)(0x12d1c484u));
  /* 12cffb19 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cffb1b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 12cffb20 call 0x12cf41b0 */
  push32(0x12cffb25u); f_12cf41b0();
  /* 12cffb25 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cffb28 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12cffb2b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 12cffb2d push 0x12d1c484 */
  push32((uint32_t)(0x12d1c484u));
  /* 12cffb32 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cffb34 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12cffb39 call 0x12cf41b0 */
  push32(0x12cffb3eu); f_12cf41b0();
  /* 12cffb3e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cffb41 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12cffb44 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cffb48 je 0x12cffb5c */
  if (C.zf) goto L_12cffb5c;
  /* 12cffb4a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cffb4e je 0x12cffb5c */
  if (C.zf) goto L_12cffb5c;
  /* 12cffb50 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cffb54 je 0x12cffb5c */
  if (C.zf) goto L_12cffb5c;
  /* 12cffb56 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cffb5a jne 0x12cffb61 */
  if (!C.zf) goto L_12cffb61;
L_12cffb5c:;
  /* 12cffb5c jmp 0x12cffda2 */
  goto L_12cffda2;
L_12cffb61:;
  /* 12cffb61 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cffb64 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12cffb67 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12cffb6e jmp 0x12cffb79 */
  goto L_12cffb79;
L_12cffb70:;
  /* 12cffb70 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cffb73 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cffb76 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12cffb79:;
  /* 12cffb79 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cffb80 jge 0x12cffb95 */
  if ((C.sf==C.of)) goto L_12cffb95;
  /* 12cffb82 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cffb85 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 12cffb88 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12cffb8a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cffb8d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cffb90 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12cffb93 jmp 0x12cffb70 */
  goto L_12cffb70;
L_12cffb95:;
  /* 12cffb95 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 12cffb98 push eax */
  push32((uint32_t)(EAX));
  /* 12cffb99 mov ecx, dword ptr [0x12d20728] */
  ECX = (r32((uint32_t)(0x12d20728)));
  /* 12cffb9f push ecx */
  push32((uint32_t)(ECX));
  /* 12cffba0 call dword ptr [0x12d232e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232e0))), 0x12cffba6u);
  /* 12cffba6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cffba8 jne 0x12cffbaf */
  if (!C.zf) goto L_12cffbaf;
  /* 12cffbaa jmp 0x12cffda2 */
  goto L_12cffda2;
L_12cffbaf:;
  /* 12cffbaf cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cffbb3 jbe 0x12cffbba */
  if ((C.cf||C.zf)) goto L_12cffbba;
  /* 12cffbb5 jmp 0x12cffda2 */
  goto L_12cffda2;
L_12cffbba:;
  /* 12cffbba mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cffbbd and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cffbc3 mov dword ptr [0x12d1eea4], edx */
  w32((uint32_t)(0x12d1eea4), (EDX));
  /* 12cffbc9 cmp dword ptr [0x12d1eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d1eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cffbd0 jle 0x12cffc29 */
  if ((C.zf||C.sf!=C.of)) goto L_12cffc29;
  /* 12cffbd2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 12cffbd5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12cffbd8 jmp 0x12cffbe3 */
  goto L_12cffbe3;
L_12cffbda:;
  /* 12cffbda mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cffbdd add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cffbe0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12cffbe3:;
  /* 12cffbe3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cffbe6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cffbe8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cffbea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cffbec je 0x12cffc29 */
  if (C.zf) goto L_12cffc29;
  /* 12cffbee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cffbf1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cffbf3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12cffbf6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cffbf8 je 0x12cffc29 */
  if (C.zf) goto L_12cffc29;
  /* 12cffbfa mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cffbfd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cffbff mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12cffc01 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12cffc04 jmp 0x12cffc0f */
  goto L_12cffc0f;
L_12cffc06:;
  /* 12cffc06 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cffc09 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cffc0c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12cffc0f:;
  /* 12cffc0f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cffc12 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cffc14 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12cffc17 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cffc1a jg 0x12cffc27 */
  if ((!C.zf&&C.sf==C.of)) goto L_12cffc27;
  /* 12cffc1c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cffc1f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cffc22 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12cffc25 jmp 0x12cffc06 */
  goto L_12cffc06;
L_12cffc27:;
  /* 12cffc27 jmp 0x12cffbda */
  goto L_12cffbda;
L_12cffc29:;
  /* 12cffc29 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cffc2b push 0 */
  push32((uint32_t)(0x0u));
  /* 12cffc2d push 0 */
  push32((uint32_t)(0x0u));
  /* 12cffc2f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cffc32 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cffc35 push eax */
  push32((uint32_t)(EAX));
  /* 12cffc36 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12cffc3b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cffc3e push ecx */
  push32((uint32_t)(ECX));
  /* 12cffc3f push 1 */
  push32((uint32_t)(0x1u));
  /* 12cffc41 call 0x12cfc3e0 */
  push32(0x12cffc46u); f_12cfc3e0();
  /* 12cffc46 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cffc49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cffc4b jne 0x12cffc52 */
  if (!C.zf) goto L_12cffc52;
  /* 12cffc4d jmp 0x12cffda2 */
  goto L_12cffda2;
L_12cffc52:;
  /* 12cffc52 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cffc55 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 12cffc5a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cffc5d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12cffc60 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12cffc67 jmp 0x12cffc72 */
  goto L_12cffc72;
L_12cffc69:;
  /* 12cffc69 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cffc6c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cffc6f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12cffc72:;
  /* 12cffc72 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cffc79 jge 0x12cffc90 */
  if ((C.sf==C.of)) goto L_12cffc90;
  /* 12cffc7b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cffc7e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 12cffc82 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 12cffc85 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cffc88 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cffc8b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12cffc8e jmp 0x12cffc69 */
  goto L_12cffc69;
L_12cffc90:;
  /* 12cffc90 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cffc92 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cffc94 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cffc97 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cffc9a push edx */
  push32((uint32_t)(EDX));
  /* 12cffc9b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12cffca0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cffca3 push eax */
  push32((uint32_t)(EAX));
  /* 12cffca4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cffca6 call 0x12d02610 */
  push32(0x12cffcabu); f_12d02610();
  /* 12cffcab add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cffcae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cffcb0 jne 0x12cffcb7 */
  if (!C.zf) goto L_12cffcb7;
  /* 12cffcb2 jmp 0x12cffda2 */
  goto L_12cffda2;
L_12cffcb7:;
  /* 12cffcb7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cffcba mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 12cffcbf cmp dword ptr [0x12d1eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12d1eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cffcc6 jle 0x12cffd23 */
  if ((C.zf||C.sf!=C.of)) goto L_12cffd23;
  /* 12cffcc8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 12cffccb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12cffcce jmp 0x12cffcd9 */
  goto L_12cffcd9;
L_12cffcd0:;
  /* 12cffcd0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cffcd3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cffcd6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12cffcd9:;
  /* 12cffcd9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cffcdc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cffcde mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12cffce0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cffce2 je 0x12cffd23 */
  if (C.zf) goto L_12cffd23;
  /* 12cffce4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cffce7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cffce9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12cffcec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cffcee je 0x12cffd23 */
  if (C.zf) goto L_12cffd23;
  /* 12cffcf0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cffcf3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cffcf5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cffcf7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12cffcfa jmp 0x12cffd05 */
  goto L_12cffd05;
L_12cffcfc:;
  /* 12cffcfc mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cffcff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cffd02 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12cffd05:;
  /* 12cffd05 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cffd08 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cffd0a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12cffd0d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cffd10 jg 0x12cffd21 */
  if ((!C.zf&&C.sf==C.of)) goto L_12cffd21;
  /* 12cffd12 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cffd15 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cffd18 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 12cffd1f jmp 0x12cffcfc */
  goto L_12cffcfc;
L_12cffd21:;
  /* 12cffd21 jmp 0x12cffcd0 */
  goto L_12cffcd0;
L_12cffd23:;
  /* 12cffd23 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cffd26 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cffd29 mov dword ptr [0x12d1ec98], eax */
  w32((uint32_t)(0x12d1ec98), (EAX));
  /* 12cffd2e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cffd31 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cffd34 mov dword ptr [0x12d1ec9c], ecx */
  w32((uint32_t)(0x12d1ec9c), (ECX));
  /* 12cffd3a cmp dword ptr [0x12d20758], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20758))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cffd41 je 0x12cffd54 */
  if (C.zf) goto L_12cffd54;
  /* 12cffd43 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cffd45 mov edx, dword ptr [0x12d20758] */
  EDX = (r32((uint32_t)(0x12d20758)));
  /* 12cffd4b push edx */
  push32((uint32_t)(EDX));
  /* 12cffd4c call 0x12cf4c40 */
  push32(0x12cffd51u); f_12cf4c40();
  /* 12cffd51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cffd54:;
  /* 12cffd54 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cffd57 mov dword ptr [0x12d20758], eax */
  w32((uint32_t)(0x12d20758), (EAX));
  /* 12cffd5c cmp dword ptr [0x12d2075c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d2075c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cffd63 je 0x12cffd76 */
  if (C.zf) goto L_12cffd76;
  /* 12cffd65 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cffd67 mov ecx, dword ptr [0x12d2075c] */
  ECX = (r32((uint32_t)(0x12d2075c)));
  /* 12cffd6d push ecx */
  push32((uint32_t)(ECX));
  /* 12cffd6e call 0x12cf4c40 */
  push32(0x12cffd73u); f_12cf4c40();
  /* 12cffd73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cffd76:;
  /* 12cffd76 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cffd79 mov dword ptr [0x12d2075c], edx */
  w32((uint32_t)(0x12d2075c), (EDX));
  /* 12cffd7f push 2 */
  push32((uint32_t)(0x2u));
  /* 12cffd81 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cffd84 push eax */
  push32((uint32_t)(EAX));
  /* 12cffd85 call 0x12cf4c40 */
  push32(0x12cffd8au); f_12cf4c40();
  /* 12cffd8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cffd8d push 2 */
  push32((uint32_t)(0x2u));
  /* 12cffd8f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cffd92 push ecx */
  push32((uint32_t)(ECX));
  /* 12cffd93 call 0x12cf4c40 */
  push32(0x12cffd98u); f_12cf4c40();
  /* 12cffd98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cffd9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cffd9d jmp 0x12cffe2c */
  goto L_12cffe2c;
L_12cffda2:;
  /* 12cffda2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cffda4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cffda7 push edx */
  push32((uint32_t)(EDX));
  /* 12cffda8 call 0x12cf4c40 */
  push32(0x12cffdadu); f_12cf4c40();
  /* 12cffdad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cffdb0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cffdb2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cffdb5 push eax */
  push32((uint32_t)(EAX));
  /* 12cffdb6 call 0x12cf4c40 */
  push32(0x12cffdbbu); f_12cf4c40();
  /* 12cffdbb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cffdbe push 2 */
  push32((uint32_t)(0x2u));
  /* 12cffdc0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cffdc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cffdc4 call 0x12cf4c40 */
  push32(0x12cffdc9u); f_12cf4c40();
  /* 12cffdc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cffdcc push 2 */
  push32((uint32_t)(0x2u));
  /* 12cffdce mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cffdd1 push edx */
  push32((uint32_t)(EDX));
  /* 12cffdd2 call 0x12cf4c40 */
  push32(0x12cffdd7u); f_12cf4c40();
  /* 12cffdd7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cffdda mov eax, 1 */
  EAX = (0x1u);
  /* 12cffddf jmp 0x12cffe2c */
  goto L_12cffe2c;
L_12cffde1:;
  /* 12cffde1 mov dword ptr [0x12d1ec98], 0x12d1eca2 */
  w32((uint32_t)(0x12d1ec98), (0x12d1eca2u));
  /* 12cffdeb mov dword ptr [0x12d1ec9c], 0x12d1eca2 */
  w32((uint32_t)(0x12d1ec9c), (0x12d1eca2u));
  /* 12cffdf5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cffdf7 mov eax, dword ptr [0x12d20758] */
  EAX = (r32((uint32_t)(0x12d20758)));
  /* 12cffdfc push eax */
  push32((uint32_t)(EAX));
  /* 12cffdfd call 0x12cf4c40 */
  push32(0x12cffe02u); f_12cf4c40();
  /* 12cffe02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cffe05 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cffe07 mov ecx, dword ptr [0x12d2075c] */
  ECX = (r32((uint32_t)(0x12d2075c)));
  /* 12cffe0d push ecx */
  push32((uint32_t)(ECX));
  /* 12cffe0e call 0x12cf4c40 */
  push32(0x12cffe13u); f_12cf4c40();
  /* 12cffe13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cffe16 mov dword ptr [0x12d20758], 0 */
  w32((uint32_t)(0x12d20758), (0x0u));
  /* 12cffe20 mov dword ptr [0x12d2075c], 0 */
  w32((uint32_t)(0x12d2075c), (0x0u));
  /* 12cffe2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cffe2c:;
  /* 12cffe2c mov esp, ebp */
  ESP = (EBP);
  /* 12cffe2e pop ebp */
  EBP = (pop32());
  /* 12cffe2f ret  */
  ESPCHK(0x12cffa90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe30 @ 0x12cffe30 (7 bytes, 5 insns) */
void f_12cffe30(void) {
  FTRACE(0x12cffe30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cffe30 push ebp */
  push32((uint32_t)(EBP));
  /* 12cffe31 mov ebp, esp */
  EBP = (ESP);
  /* 12cffe33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cffe35 pop ebp */
  EBP = (pop32());
  /* 12cffe36 ret  */
  ESPCHK(0x12cffe30u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x12cffe40 (129 bytes, 56 insns) */
void f_12cffe40(void) {
  FTRACE(0x12cffe40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cffe40 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 12cffe44 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12cffe48 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12cffe4e jne 0x12cffe8c */
  if (!C.zf) goto L_12cffe8c;
L_12cffe50:;
  /* 12cffe50 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cffe52 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12cffe54 jne 0x12cffe84 */
  if (!C.zf) goto L_12cffe84;
  /* 12cffe56 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12cffe58 je 0x12cffe80 */
  if (C.zf) goto L_12cffe80;
  /* 12cffe5a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12cffe5d jne 0x12cffe84 */
  if (!C.zf) goto L_12cffe84;
  /* 12cffe5f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12cffe61 je 0x12cffe80 */
  if (C.zf) goto L_12cffe80;
  /* 12cffe63 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12cffe66 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12cffe69 jne 0x12cffe84 */
  if (!C.zf) goto L_12cffe84;
  /* 12cffe6b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12cffe6d je 0x12cffe80 */
  if (C.zf) goto L_12cffe80;
  /* 12cffe6f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12cffe72 jne 0x12cffe84 */
  if (!C.zf) goto L_12cffe84;
  /* 12cffe74 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cffe77 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cffe7a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12cffe7c jne 0x12cffe50 */
  if (!C.zf) goto L_12cffe50;
  /* 12cffe7e mov edi, edi */
  EDI = (EDI);
L_12cffe80:;
  /* 12cffe80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cffe82 ret  */
  ESPCHK(0x12cffe40u, _esp0);
  ESP += 4; return;
  /* 12cffe83 nop  */
  /* nop */
L_12cffe84:;
  /* 12cffe84 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cffe86 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12cffe88 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12cffe89 ret  */
  ESPCHK(0x12cffe40u, _esp0);
  ESP += 4; return;
  /* 12cffe8a mov edi, edi */
  EDI = (EDI);
L_12cffe8c:;
  /* 12cffe8c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 12cffe92 je 0x12cffea8 */
  if (C.zf) goto L_12cffea8;
  /* 12cffe94 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cffe96 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12cffe97 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12cffe99 jne 0x12cffe84 */
  if (!C.zf) goto L_12cffe84;
  /* 12cffe9b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12cffe9c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12cffe9e je 0x12cffe80 */
  if (C.zf) goto L_12cffe80;
  /* 12cffea0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 12cffea6 je 0x12cffe50 */
  if (C.zf) goto L_12cffe50;
L_12cffea8:;
  /* 12cffea8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 12cffeab add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cffeae cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12cffeb0 jne 0x12cffe84 */
  if (!C.zf) goto L_12cffe84;
  /* 12cffeb2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12cffeb4 je 0x12cffe80 */
  if (C.zf) goto L_12cffe80;
  /* 12cffeb6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12cffeb9 jne 0x12cffe84 */
  if (!C.zf) goto L_12cffe84;
  /* 12cffebb or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12cffebd je 0x12cffe80 */
  if (C.zf) goto L_12cffe80;
  /* 12cffebf add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cffec2 jmp 0x12cffe50 */
  goto L_12cffe50;
}

/* FUN_1000fed0 @ 0x12cffed0 (62 bytes, 35 insns) */
void f_12cffed0(void) {
  FTRACE(0x12cffed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cffed0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cffed1 mov ebp, esp */
  EBP = (ESP);
  /* 12cffed3 push esi */
  push32((uint32_t)(ESI));
  /* 12cffed4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cffed6 push eax */
  push32((uint32_t)(EAX));
  /* 12cffed7 push eax */
  push32((uint32_t)(EAX));
  /* 12cffed8 push eax */
  push32((uint32_t)(EAX));
  /* 12cffed9 push eax */
  push32((uint32_t)(EAX));
  /* 12cffeda push eax */
  push32((uint32_t)(EAX));
  /* 12cffedb push eax */
  push32((uint32_t)(EAX));
  /* 12cffedc push eax */
  push32((uint32_t)(EAX));
  /* 12cffedd push eax */
  push32((uint32_t)(EAX));
  /* 12cffede mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cffee1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12cffee4:;
  /* 12cffee4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cffee6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12cffee8 je 0x12cffef1 */
  if (C.zf) goto L_12cffef1;
  /* 12cffeea inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12cffeeb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x12cffeeb");
  /* 12cffeef jmp 0x12cffee4 */
  goto L_12cffee4;
L_12cffef1:;
  /* 12cffef1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12cffef4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cffef7 nop  */
  /* nop */
L_12cffef8:;
  /* 12cffef8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12cffef9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12cffefb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12cffefd je 0x12cfff06 */
  if (C.zf) goto L_12cfff06;
  /* 12cffeff inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12cfff00 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12cfff00");
  /* 12cfff04 jae 0x12cffef8 */
  if (!C.cf) goto L_12cffef8;
L_12cfff06:;
  /* 12cfff06 mov eax, ecx */
  EAX = (ECX);
  /* 12cfff08 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfff0b pop esi */
  ESI = (pop32());
  /* 12cfff0c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12cfff0d ret  */
  ESPCHK(0x12cffed0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x12cfff10 (56 bytes, 31 insns) */
void f_12cfff10(void) {
  FTRACE(0x12cfff10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfff10 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfff11 mov ebp, esp */
  EBP = (ESP);
  /* 12cfff13 push edi */
  push32((uint32_t)(EDI));
  /* 12cfff14 push esi */
  push32((uint32_t)(ESI));
  /* 12cfff15 push ebx */
  push32((uint32_t)(EBX));
  /* 12cfff16 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cfff19 jecxz 0x12cfff41 */
  x86_unimpl("jecxz @ 0x12cfff19");
  /* 12cfff1b mov ebx, ecx */
  EBX = (ECX);
  /* 12cfff1d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfff20 mov esi, edi */
  ESI = (EDI);
  /* 12cfff22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfff24 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 12cfff26 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cfff28 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfff2a mov edi, esi */
  EDI = (ESI);
  /* 12cfff2c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfff2f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 12cfff31 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 12cfff34 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cfff36 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12cfff39 ja 0x12cfff3f */
  if ((!C.cf&&!C.zf)) goto L_12cfff3f;
  /* 12cfff3b je 0x12cfff41 */
  if (C.zf) goto L_12cfff41;
  /* 12cfff3d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12cfff3e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_12cfff3f:;
  /* 12cfff3f not ecx */
  ECX = (~(ECX));
L_12cfff41:;
  /* 12cfff41 mov eax, ecx */
  EAX = (ECX);
  /* 12cfff43 pop ebx */
  EBX = (pop32());
  /* 12cfff44 pop esi */
  ESI = (pop32());
  /* 12cfff45 pop edi */
  EDI = (pop32());
  /* 12cfff46 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12cfff47 ret  */
  ESPCHK(0x12cfff10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff50 @ 0x12cfff50 (58 bytes, 32 insns) */
void f_12cfff50(void) {
  FTRACE(0x12cfff50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfff50 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfff51 mov ebp, esp */
  EBP = (ESP);
  /* 12cfff53 push esi */
  push32((uint32_t)(ESI));
  /* 12cfff54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cfff56 push eax */
  push32((uint32_t)(EAX));
  /* 12cfff57 push eax */
  push32((uint32_t)(EAX));
  /* 12cfff58 push eax */
  push32((uint32_t)(EAX));
  /* 12cfff59 push eax */
  push32((uint32_t)(EAX));
  /* 12cfff5a push eax */
  push32((uint32_t)(EAX));
  /* 12cfff5b push eax */
  push32((uint32_t)(EAX));
  /* 12cfff5c push eax */
  push32((uint32_t)(EAX));
  /* 12cfff5d push eax */
  push32((uint32_t)(EAX));
  /* 12cfff5e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cfff61 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12cfff64:;
  /* 12cfff64 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cfff66 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12cfff68 je 0x12cfff71 */
  if (C.zf) goto L_12cfff71;
  /* 12cfff6a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12cfff6b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x12cfff6b");
  /* 12cfff6f jmp 0x12cfff64 */
  goto L_12cfff64;
L_12cfff71:;
  /* 12cfff71 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_12cfff74:;
  /* 12cfff74 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12cfff76 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12cfff78 je 0x12cfff84 */
  if (C.zf) goto L_12cfff84;
  /* 12cfff7a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12cfff7b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12cfff7b");
  /* 12cfff7f jae 0x12cfff74 */
  if (!C.cf) goto L_12cfff74;
  /* 12cfff81 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_12cfff84:;
  /* 12cfff84 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cfff87 pop esi */
  ESI = (pop32());
  /* 12cfff88 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12cfff89 ret  */
  ESPCHK(0x12cfff50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff90 @ 0x12cfff90 (512 bytes, 147 insns) */
void f_12cfff90(void) {
  FTRACE(0x12cfff90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cfff90 push ebp */
  push32((uint32_t)(EBP));
  /* 12cfff91 mov ebp, esp */
  EBP = (ESP);
  /* 12cfff93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cfff96 cmp dword ptr [0x12d207a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d207a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfff9d jne 0x12cfffc2 */
  if (!C.zf) goto L_12cfffc2;
  /* 12cfff9f call 0x12d00a60 */
  push32(0x12cfffa4u); f_12d00a60();
  /* 12cfffa4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cfffa6 je 0x12cfffb2 */
  if (C.zf) goto L_12cfffb2;
  /* 12cfffa8 mov eax, dword ptr [0x12d232a4] */
  EAX = (r32((uint32_t)(0x12d232a4)));
  /* 12cfffad mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cfffb0 jmp 0x12cfffb9 */
  goto L_12cfffb9;
L_12cfffb2:;
  /* 12cfffb2 mov dword ptr [ebp - 8], 0x12d00ab0 */
  w32((uint32_t)(EBP + -0x8), (0x12d00ab0u));
L_12cfffb9:;
  /* 12cfffb9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cfffbc mov dword ptr [0x12d207a4], ecx */
  w32((uint32_t)(0x12d207a4), (ECX));
L_12cfffc2:;
  /* 12cfffc2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfffc6 jne 0x12cfffd2 */
  if (!C.zf) goto L_12cfffd2;
  /* 12cfffc8 call 0x12d008b0 */
  push32(0x12cfffcdu); f_12d008b0();
  /* 12cfffcd jmp 0x12d0009e */
  goto L_12d0009e;
L_12cfffd2:;
  /* 12cfffd2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cfffd5 mov dword ptr [0x12d20794], edx */
  w32((uint32_t)(0x12d20794), (EDX));
  /* 12cfffdb cmp dword ptr [0x12d20794], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20794))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cfffe2 je 0x12d00004 */
  if (C.zf) goto L_12d00004;
  /* 12cfffe4 mov eax, dword ptr [0x12d20794] */
  EAX = (r32((uint32_t)(0x12d20794)));
  /* 12cfffe9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cfffec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cfffee je 0x12d00004 */
  if (C.zf) goto L_12d00004;
  /* 12cffff0 push 0x12d20794 */
  push32((uint32_t)(0x12d20794u));
  /* 12cffff5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12cffff7 push 0x12d1fa90 */
  push32((uint32_t)(0x12d1fa90u));
  /* 12cffffc call 0x12d00190 */
  push32(0x12d00001u); f_12d00190();
  /* 12d00001 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d00004:;
  /* 12d00004 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d00007 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0000a mov dword ptr [0x12d20798], edx */
  w32((uint32_t)(0x12d20798), (EDX));
  /* 12d00010 cmp dword ptr [0x12d20798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00017 je 0x12d00039 */
  if (C.zf) goto L_12d00039;
  /* 12d00019 mov eax, dword ptr [0x12d20798] */
  EAX = (r32((uint32_t)(0x12d20798)));
  /* 12d0001e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d00021 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d00023 je 0x12d00039 */
  if (C.zf) goto L_12d00039;
  /* 12d00025 push 0x12d20798 */
  push32((uint32_t)(0x12d20798u));
  /* 12d0002a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12d0002c push 0x12d1f9d8 */
  push32((uint32_t)(0x12d1f9d8u));
  /* 12d00031 call 0x12d00190 */
  push32(0x12d00036u); f_12d00190();
  /* 12d00036 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d00039:;
  /* 12d00039 mov dword ptr [0x12d2079c], 0 */
  w32((uint32_t)(0x12d2079c), (0x0u));
  /* 12d00043 cmp dword ptr [0x12d20794], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20794))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d0004a je 0x12d0007d */
  if (C.zf) goto L_12d0007d;
  /* 12d0004c mov edx, dword ptr [0x12d20794] */
  EDX = (r32((uint32_t)(0x12d20794)));
  /* 12d00052 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12d00055 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d00057 je 0x12d0007d */
  if (C.zf) goto L_12d0007d;
  /* 12d00059 cmp dword ptr [0x12d20798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00060 je 0x12d00076 */
  if (C.zf) goto L_12d00076;
  /* 12d00062 mov ecx, dword ptr [0x12d20798] */
  ECX = (r32((uint32_t)(0x12d20798)));
  /* 12d00068 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12d0006b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d0006d je 0x12d00076 */
  if (C.zf) goto L_12d00076;
  /* 12d0006f call 0x12d00220 */
  push32(0x12d00074u); f_12d00220();
  /* 12d00074 jmp 0x12d0007b */
  goto L_12d0007b;
L_12d00076:;
  /* 12d00076 call 0x12d00610 */
  push32(0x12d0007bu); f_12d00610();
L_12d0007b:;
  /* 12d0007b jmp 0x12d0009e */
  goto L_12d0009e;
L_12d0007d:;
  /* 12d0007d cmp dword ptr [0x12d20798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00084 je 0x12d00099 */
  if (C.zf) goto L_12d00099;
  /* 12d00086 mov eax, dword ptr [0x12d20798] */
  EAX = (r32((uint32_t)(0x12d20798)));
  /* 12d0008b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d0008e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d00090 je 0x12d00099 */
  if (C.zf) goto L_12d00099;
  /* 12d00092 call 0x12d007b0 */
  push32(0x12d00097u); f_12d007b0();
  /* 12d00097 jmp 0x12d0009e */
  goto L_12d0009e;
L_12d00099:;
  /* 12d00099 call 0x12d008b0 */
  push32(0x12d0009eu); f_12d008b0();
L_12d0009e:;
  /* 12d0009e cmp dword ptr [0x12d2079c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d2079c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d000a5 jne 0x12d000ae */
  if (!C.zf) goto L_12d000ae;
  /* 12d000a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d000a9 jmp 0x12d0018c */
  goto L_12d0018c;
L_12d000ae:;
  /* 12d000ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d000b1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d000b7 push edx */
  push32((uint32_t)(EDX));
  /* 12d000b8 call 0x12d008e0 */
  push32(0x12d000bdu); f_12d008e0();
  /* 12d000bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d000c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d000c3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d000c7 je 0x12d000dc */
  if (C.zf) goto L_12d000dc;
  /* 12d000c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d000cc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d000d1 push eax */
  push32((uint32_t)(EAX));
  /* 12d000d2 call dword ptr [0x12d232a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232a8))), 0x12d000d8u);
  /* 12d000d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d000da jne 0x12d000e3 */
  if (!C.zf) goto L_12d000e3;
L_12d000dc:;
  /* 12d000dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d000de jmp 0x12d0018c */
  goto L_12d0018c;
L_12d000e3:;
  /* 12d000e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d000e5 mov ecx, dword ptr [0x12d20784] */
  ECX = (r32((uint32_t)(0x12d20784)));
  /* 12d000eb push ecx */
  push32((uint32_t)(ECX));
  /* 12d000ec call dword ptr [0x12d232ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232ac))), 0x12d000f2u);
  /* 12d000f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d000f4 jne 0x12d000fd */
  if (!C.zf) goto L_12d000fd;
  /* 12d000f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d000f8 jmp 0x12d0018c */
  goto L_12d0018c;
L_12d000fd:;
  /* 12d000fd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00101 je 0x12d00128 */
  if (C.zf) goto L_12d00128;
  /* 12d00103 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d00106 mov ax, word ptr [0x12d20784] */
  AX = (r16((uint32_t)(0x12d20784)));
  /* 12d0010c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 12d0010f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d00112 mov dx, word ptr [0x12d207a0] */
  DX = (r16((uint32_t)(0x12d207a0)));
  /* 12d00119 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 12d0011d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d00120 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 12d00124 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_12d00128:;
  /* 12d00128 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d0012c je 0x12d00187 */
  if (C.zf) goto L_12d00187;
  /* 12d0012e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12d00130 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d00133 push edx */
  push32((uint32_t)(EDX));
  /* 12d00134 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 12d00139 mov eax, dword ptr [0x12d20784] */
  EAX = (r32((uint32_t)(0x12d20784)));
  /* 12d0013e push eax */
  push32((uint32_t)(EAX));
  /* 12d0013f call dword ptr [0x12d207a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d207a4))), 0x12d00145u);
  /* 12d00145 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d00147 jne 0x12d0014d */
  if (!C.zf) goto L_12d0014d;
  /* 12d00149 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d0014b jmp 0x12d0018c */
  goto L_12d0018c;
L_12d0014d:;
  /* 12d0014d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12d0014f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d00152 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00155 push ecx */
  push32((uint32_t)(ECX));
  /* 12d00156 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 12d0015b mov edx, dword ptr [0x12d207a0] */
  EDX = (r32((uint32_t)(0x12d207a0)));
  /* 12d00161 push edx */
  push32((uint32_t)(EDX));
  /* 12d00162 call dword ptr [0x12d207a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d207a4))), 0x12d00168u);
  /* 12d00168 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d0016a jne 0x12d00170 */
  if (!C.zf) goto L_12d00170;
  /* 12d0016c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d0016e jmp 0x12d0018c */
  goto L_12d0018c;
L_12d00170:;
  /* 12d00170 push 0xa */
  push32((uint32_t)(0xau));
  /* 12d00172 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d00175 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0017a push eax */
  push32((uint32_t)(EAX));
  /* 12d0017b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d0017e push ecx */
  push32((uint32_t)(ECX));
  /* 12d0017f call 0x12cf6cf0 */
  push32(0x12d00184u); f_12cf6cf0();
  /* 12d00184 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d00187:;
  /* 12d00187 mov eax, 1 */
  EAX = (0x1u);
L_12d0018c:;
  /* 12d0018c mov esp, ebp */
  ESP = (EBP);
  /* 12d0018e pop ebp */
  EBP = (pop32());
  /* 12d0018f ret  */
  ESPCHK(0x12cfff90u, _esp0);
  ESP += 4; return;
}

/* FUN_10010190 @ 0x12d00190 (130 bytes, 47 insns) */
void f_12d00190(void) {
  FTRACE(0x12d00190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d00190 push ebp */
  push32((uint32_t)(EBP));
  /* 12d00191 mov ebp, esp */
  EBP = (ESP);
  /* 12d00193 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d00196 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12d0019d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12d001a4:;
  /* 12d001a4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d001a7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d001aa jg 0x12d0020e */
  if ((!C.zf&&C.sf==C.of)) goto L_12d0020e;
  /* 12d001ac cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d001b0 je 0x12d0020e */
  if (C.zf) goto L_12d0020e;
  /* 12d001b2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d001b5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d001b8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d001b9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d001bb sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12d001bd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d001c0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d001c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d001c6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 12d001c9 push eax */
  push32((uint32_t)(EAX));
  /* 12d001ca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d001cd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12d001cf push edx */
  push32((uint32_t)(EDX));
  /* 12d001d0 call 0x12d02880 */
  push32(0x12d001d5u); f_12d02880();
  /* 12d001d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d001d8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d001db cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d001df jne 0x12d001f2 */
  if (!C.zf) goto L_12d001f2;
  /* 12d001e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d001e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d001e7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 12d001eb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d001ee mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12d001f0 jmp 0x12d0020c */
  goto L_12d0020c;
L_12d001f2:;
  /* 12d001f2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d001f6 jge 0x12d00203 */
  if ((C.sf==C.of)) goto L_12d00203;
  /* 12d001f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d001fb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d001fe mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12d00201 jmp 0x12d0020c */
  goto L_12d0020c;
L_12d00203:;
  /* 12d00203 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d00206 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00209 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12d0020c:;
  /* 12d0020c jmp 0x12d001a4 */
  goto L_12d001a4;
L_12d0020e:;
  /* 12d0020e mov esp, ebp */
  ESP = (EBP);
  /* 12d00210 pop ebp */
  EBP = (pop32());
  /* 12d00211 ret  */
  ESPCHK(0x12d00190u, _esp0);
  ESP += 4; return;
}

/* FUN_10010220 @ 0x12d00220 (186 bytes, 50 insns) */
void f_12d00220(void) {
  FTRACE(0x12d00220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d00220 push ebp */
  push32((uint32_t)(EBP));
  /* 12d00221 mov ebp, esp */
  EBP = (ESP);
  /* 12d00223 push ecx */
  push32((uint32_t)(ECX));
  /* 12d00224 mov eax, dword ptr [0x12d20794] */
  EAX = (r32((uint32_t)(0x12d20794)));
  /* 12d00229 push eax */
  push32((uint32_t)(EAX));
  /* 12d0022a call 0x12cf6fe0 */
  push32(0x12d0022fu); f_12cf6fe0();
  /* 12d0022f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00232 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d00234 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00237 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12d0023a mov dword ptr [0x12d20790], ecx */
  w32((uint32_t)(0x12d20790), (ECX));
  /* 12d00240 mov edx, dword ptr [0x12d20798] */
  EDX = (r32((uint32_t)(0x12d20798)));
  /* 12d00246 push edx */
  push32((uint32_t)(EDX));
  /* 12d00247 call 0x12cf6fe0 */
  push32(0x12d0024cu); f_12cf6fe0();
  /* 12d0024c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0024f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d00251 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00254 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12d00257 mov dword ptr [0x12d20788], ecx */
  w32((uint32_t)(0x12d20788), (ECX));
  /* 12d0025d mov dword ptr [0x12d20784], 0 */
  w32((uint32_t)(0x12d20784), (0x0u));
  /* 12d00267 cmp dword ptr [0x12d20790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d0026e je 0x12d00279 */
  if (C.zf) goto L_12d00279;
  /* 12d00270 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12d00277 jmp 0x12d0028b */
  goto L_12d0028b;
L_12d00279:;
  /* 12d00279 mov edx, dword ptr [0x12d20794] */
  EDX = (r32((uint32_t)(0x12d20794)));
  /* 12d0027f push edx */
  push32((uint32_t)(EDX));
  /* 12d00280 call 0x12d00cc0 */
  push32(0x12d00285u); f_12d00cc0();
  /* 12d00285 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00288 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d0028b:;
  /* 12d0028b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d0028e mov dword ptr [0x12d2078c], eax */
  w32((uint32_t)(0x12d2078c), (EAX));
  /* 12d00293 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d00295 push 0x12d002e0 */
  push32((uint32_t)(0x12d002e0u));
  /* 12d0029a call dword ptr [0x12d232a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232a0))), 0x12d002a0u);
  /* 12d002a0 mov ecx, dword ptr [0x12d2079c] */
  ECX = (r32((uint32_t)(0x12d2079c)));
  /* 12d002a6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 12d002ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d002ae je 0x12d002cc */
  if (C.zf) goto L_12d002cc;
  /* 12d002b0 mov edx, dword ptr [0x12d2079c] */
  EDX = (r32((uint32_t)(0x12d2079c)));
  /* 12d002b6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 12d002bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d002be je 0x12d002cc */
  if (C.zf) goto L_12d002cc;
  /* 12d002c0 mov eax, dword ptr [0x12d2079c] */
  EAX = (r32((uint32_t)(0x12d2079c)));
  /* 12d002c5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 12d002c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d002ca jne 0x12d002d6 */
  if (!C.zf) goto L_12d002d6;
L_12d002cc:;
  /* 12d002cc mov dword ptr [0x12d2079c], 0 */
  w32((uint32_t)(0x12d2079c), (0x0u));
L_12d002d6:;
  /* 12d002d6 mov esp, ebp */
  ESP = (EBP);
  /* 12d002d8 pop ebp */
  EBP = (pop32());
  /* 12d002d9 ret  */
  ESPCHK(0x12d00220u, _esp0);
  ESP += 4; return;
}

/* FUN_100102e0 @ 0x12d002e0 (804 bytes, 220 insns) */
void f_12d002e0(void) {
  FTRACE(0x12d002e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d002e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d002e1 mov ebp, esp */
  EBP = (ESP);
  /* 12d002e3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d002e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d002e9 push eax */
  push32((uint32_t)(EAX));
  /* 12d002ea call 0x12d00c40 */
  push32(0x12d002efu); f_12d00c40();
  /* 12d002ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d002f2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12d002f5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12d002f7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12d002fa push ecx */
  push32((uint32_t)(ECX));
  /* 12d002fb mov edx, dword ptr [0x12d20788] */
  EDX = (r32((uint32_t)(0x12d20788)));
  /* 12d00301 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d00303 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d00305 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 12d0030b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00311 push edx */
  push32((uint32_t)(EDX));
  /* 12d00312 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d00315 push eax */
  push32((uint32_t)(EAX));
  /* 12d00316 call dword ptr [0x12d207a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d207a4))), 0x12d0031cu);
  /* 12d0031c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d0031e jne 0x12d00334 */
  if (!C.zf) goto L_12d00334;
  /* 12d00320 mov dword ptr [0x12d2079c], 0 */
  w32((uint32_t)(0x12d2079c), (0x0u));
  /* 12d0032a mov eax, 1 */
  EAX = (0x1u);
  /* 12d0032f jmp 0x12d005fe */
  goto L_12d005fe;
L_12d00334:;
  /* 12d00334 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12d00337 push ecx */
  push32((uint32_t)(ECX));
  /* 12d00338 mov edx, dword ptr [0x12d20798] */
  EDX = (r32((uint32_t)(0x12d20798)));
  /* 12d0033e push edx */
  push32((uint32_t)(EDX));
  /* 12d0033f call 0x12d02880 */
  push32(0x12d00344u); f_12d02880();
  /* 12d00344 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00347 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d00349 jne 0x12d0046f */
  if (!C.zf) goto L_12d0046f;
  /* 12d0034f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12d00351 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12d00354 push eax */
  push32((uint32_t)(EAX));
  /* 12d00355 mov ecx, dword ptr [0x12d20790] */
  ECX = (r32((uint32_t)(0x12d20790)));
  /* 12d0035b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d0035d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d0035f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12d00365 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0036b push ecx */
  push32((uint32_t)(ECX));
  /* 12d0036c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d0036f push edx */
  push32((uint32_t)(EDX));
  /* 12d00370 call dword ptr [0x12d207a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d207a4))), 0x12d00376u);
  /* 12d00376 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d00378 jne 0x12d0038e */
  if (!C.zf) goto L_12d0038e;
  /* 12d0037a mov dword ptr [0x12d2079c], 0 */
  w32((uint32_t)(0x12d2079c), (0x0u));
  /* 12d00384 mov eax, 1 */
  EAX = (0x1u);
  /* 12d00389 jmp 0x12d005fe */
  goto L_12d005fe;
L_12d0038e:;
  /* 12d0038e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12d00391 push eax */
  push32((uint32_t)(EAX));
  /* 12d00392 mov ecx, dword ptr [0x12d20794] */
  ECX = (r32((uint32_t)(0x12d20794)));
  /* 12d00398 push ecx */
  push32((uint32_t)(ECX));
  /* 12d00399 call 0x12d02880 */
  push32(0x12d0039eu); f_12d02880();
  /* 12d0039e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d003a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d003a3 jne 0x12d003d0 */
  if (!C.zf) goto L_12d003d0;
  /* 12d003a5 mov edx, dword ptr [0x12d2079c] */
  EDX = (r32((uint32_t)(0x12d2079c)));
  /* 12d003ab or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 12d003b1 mov dword ptr [0x12d2079c], edx */
  w32((uint32_t)(0x12d2079c), (EDX));
  /* 12d003b7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d003ba mov dword ptr [0x12d207a0], eax */
  w32((uint32_t)(0x12d207a0), (EAX));
  /* 12d003bf mov ecx, dword ptr [0x12d207a0] */
  ECX = (r32((uint32_t)(0x12d207a0)));
  /* 12d003c5 mov dword ptr [0x12d20784], ecx */
  w32((uint32_t)(0x12d20784), (ECX));
  /* 12d003cb jmp 0x12d0046f */
  goto L_12d0046f;
L_12d003d0:;
  /* 12d003d0 mov edx, dword ptr [0x12d2079c] */
  EDX = (r32((uint32_t)(0x12d2079c)));
  /* 12d003d6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12d003d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d003db jne 0x12d0046f */
  if (!C.zf) goto L_12d0046f;
  /* 12d003e1 cmp dword ptr [0x12d2078c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d2078c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d003e8 je 0x12d0043d */
  if (C.zf) goto L_12d0043d;
  /* 12d003ea mov eax, dword ptr [0x12d2078c] */
  EAX = (r32((uint32_t)(0x12d2078c)));
  /* 12d003ef push eax */
  push32((uint32_t)(EAX));
  /* 12d003f0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12d003f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d003f4 mov edx, dword ptr [0x12d20794] */
  EDX = (r32((uint32_t)(0x12d20794)));
  /* 12d003fa push edx */
  push32((uint32_t)(EDX));
  /* 12d003fb call 0x12d02950 */
  push32(0x12d00400u); f_12d02950();
  /* 12d00400 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00403 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d00405 jne 0x12d0043d */
  if (!C.zf) goto L_12d0043d;
  /* 12d00407 mov eax, dword ptr [0x12d2079c] */
  EAX = (r32((uint32_t)(0x12d2079c)));
  /* 12d0040c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 12d0040e mov dword ptr [0x12d2079c], eax */
  w32((uint32_t)(0x12d2079c), (EAX));
  /* 12d00413 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d00416 mov dword ptr [0x12d207a0], ecx */
  w32((uint32_t)(0x12d207a0), (ECX));
  /* 12d0041c mov edx, dword ptr [0x12d20794] */
  EDX = (r32((uint32_t)(0x12d20794)));
  /* 12d00422 push edx */
  push32((uint32_t)(EDX));
  /* 12d00423 call 0x12cf6fe0 */
  push32(0x12d00428u); f_12cf6fe0();
  /* 12d00428 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0042b cmp eax, dword ptr [0x12d2078c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d2078c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00431 jne 0x12d0043b */
  if (!C.zf) goto L_12d0043b;
  /* 12d00433 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d00436 mov dword ptr [0x12d20784], eax */
  w32((uint32_t)(0x12d20784), (EAX));
L_12d0043b:;
  /* 12d0043b jmp 0x12d0046f */
  goto L_12d0046f;
L_12d0043d:;
  /* 12d0043d mov ecx, dword ptr [0x12d2079c] */
  ECX = (r32((uint32_t)(0x12d2079c)));
  /* 12d00443 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d00446 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d00448 jne 0x12d0046f */
  if (!C.zf) goto L_12d0046f;
  /* 12d0044a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d0044d push edx */
  push32((uint32_t)(EDX));
  /* 12d0044e call 0x12d00980 */
  push32(0x12d00453u); f_12d00980();
  /* 12d00453 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00456 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d00458 je 0x12d0046f */
  if (C.zf) goto L_12d0046f;
  /* 12d0045a mov eax, dword ptr [0x12d2079c] */
  EAX = (r32((uint32_t)(0x12d2079c)));
  /* 12d0045f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12d00461 mov dword ptr [0x12d2079c], eax */
  w32((uint32_t)(0x12d2079c), (EAX));
  /* 12d00466 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d00469 mov dword ptr [0x12d207a0], ecx */
  w32((uint32_t)(0x12d207a0), (ECX));
L_12d0046f:;
  /* 12d0046f mov edx, dword ptr [0x12d2079c] */
  EDX = (r32((uint32_t)(0x12d2079c)));
  /* 12d00475 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 12d0047b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00481 je 0x12d005f1 */
  if (C.zf) goto L_12d005f1;
  /* 12d00487 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12d00489 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12d0048c push eax */
  push32((uint32_t)(EAX));
  /* 12d0048d mov ecx, dword ptr [0x12d20790] */
  ECX = (r32((uint32_t)(0x12d20790)));
  /* 12d00493 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d00495 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d00497 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12d0049d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d004a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d004a4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d004a7 push edx */
  push32((uint32_t)(EDX));
  /* 12d004a8 call dword ptr [0x12d207a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d207a4))), 0x12d004aeu);
  /* 12d004ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d004b0 jne 0x12d004c6 */
  if (!C.zf) goto L_12d004c6;
  /* 12d004b2 mov dword ptr [0x12d2079c], 0 */
  w32((uint32_t)(0x12d2079c), (0x0u));
  /* 12d004bc mov eax, 1 */
  EAX = (0x1u);
  /* 12d004c1 jmp 0x12d005fe */
  goto L_12d005fe;
L_12d004c6:;
  /* 12d004c6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12d004c9 push eax */
  push32((uint32_t)(EAX));
  /* 12d004ca mov ecx, dword ptr [0x12d20794] */
  ECX = (r32((uint32_t)(0x12d20794)));
  /* 12d004d0 push ecx */
  push32((uint32_t)(ECX));
  /* 12d004d1 call 0x12d02880 */
  push32(0x12d004d6u); f_12d02880();
  /* 12d004d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d004d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d004db jne 0x12d00590 */
  if (!C.zf) goto L_12d00590;
  /* 12d004e1 mov edx, dword ptr [0x12d2079c] */
  EDX = (r32((uint32_t)(0x12d2079c)));
  /* 12d004e7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12d004ea mov dword ptr [0x12d2079c], edx */
  w32((uint32_t)(0x12d2079c), (EDX));
  /* 12d004f0 cmp dword ptr [0x12d20790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d004f7 je 0x12d0051a */
  if (C.zf) goto L_12d0051a;
  /* 12d004f9 mov eax, dword ptr [0x12d2079c] */
  EAX = (r32((uint32_t)(0x12d2079c)));
  /* 12d004fe or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12d00501 mov dword ptr [0x12d2079c], eax */
  w32((uint32_t)(0x12d2079c), (EAX));
  /* 12d00506 cmp dword ptr [0x12d20784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d0050d jne 0x12d00518 */
  if (!C.zf) goto L_12d00518;
  /* 12d0050f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d00512 mov dword ptr [0x12d20784], ecx */
  w32((uint32_t)(0x12d20784), (ECX));
L_12d00518:;
  /* 12d00518 jmp 0x12d0058e */
  goto L_12d0058e;
L_12d0051a:;
  /* 12d0051a cmp dword ptr [0x12d2078c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d2078c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00521 je 0x12d0056f */
  if (C.zf) goto L_12d0056f;
  /* 12d00523 mov edx, dword ptr [0x12d20794] */
  EDX = (r32((uint32_t)(0x12d20794)));
  /* 12d00529 push edx */
  push32((uint32_t)(EDX));
  /* 12d0052a call 0x12cf6fe0 */
  push32(0x12d0052fu); f_12cf6fe0();
  /* 12d0052f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00532 cmp eax, dword ptr [0x12d2078c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d2078c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00538 jne 0x12d0056f */
  if (!C.zf) goto L_12d0056f;
  /* 12d0053a push 1 */
  push32((uint32_t)(0x1u));
  /* 12d0053c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d0053f push eax */
  push32((uint32_t)(EAX));
  /* 12d00540 call 0x12d009d0 */
  push32(0x12d00545u); f_12d009d0();
  /* 12d00545 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00548 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d0054a je 0x12d0056d */
  if (C.zf) goto L_12d0056d;
  /* 12d0054c mov ecx, dword ptr [0x12d2079c] */
  ECX = (r32((uint32_t)(0x12d2079c)));
  /* 12d00552 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12d00555 mov dword ptr [0x12d2079c], ecx */
  w32((uint32_t)(0x12d2079c), (ECX));
  /* 12d0055b cmp dword ptr [0x12d20784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00562 jne 0x12d0056d */
  if (!C.zf) goto L_12d0056d;
  /* 12d00564 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d00567 mov dword ptr [0x12d20784], edx */
  w32((uint32_t)(0x12d20784), (EDX));
L_12d0056d:;
  /* 12d0056d jmp 0x12d0058e */
  goto L_12d0058e;
L_12d0056f:;
  /* 12d0056f mov eax, dword ptr [0x12d2079c] */
  EAX = (r32((uint32_t)(0x12d2079c)));
  /* 12d00574 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12d00577 mov dword ptr [0x12d2079c], eax */
  w32((uint32_t)(0x12d2079c), (EAX));
  /* 12d0057c cmp dword ptr [0x12d20784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00583 jne 0x12d0058e */
  if (!C.zf) goto L_12d0058e;
  /* 12d00585 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d00588 mov dword ptr [0x12d20784], ecx */
  w32((uint32_t)(0x12d20784), (ECX));
L_12d0058e:;
  /* 12d0058e jmp 0x12d005f1 */
  goto L_12d005f1;
L_12d00590:;
  /* 12d00590 cmp dword ptr [0x12d20790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00597 jne 0x12d005f1 */
  if (!C.zf) goto L_12d005f1;
  /* 12d00599 cmp dword ptr [0x12d2078c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d2078c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d005a0 je 0x12d005f1 */
  if (C.zf) goto L_12d005f1;
  /* 12d005a2 mov edx, dword ptr [0x12d2078c] */
  EDX = (r32((uint32_t)(0x12d2078c)));
  /* 12d005a8 push edx */
  push32((uint32_t)(EDX));
  /* 12d005a9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12d005ac push eax */
  push32((uint32_t)(EAX));
  /* 12d005ad mov ecx, dword ptr [0x12d20794] */
  ECX = (r32((uint32_t)(0x12d20794)));
  /* 12d005b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d005b4 call 0x12d02950 */
  push32(0x12d005b9u); f_12d02950();
  /* 12d005b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d005bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d005be jne 0x12d005f1 */
  if (!C.zf) goto L_12d005f1;
  /* 12d005c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d005c2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d005c5 push edx */
  push32((uint32_t)(EDX));
  /* 12d005c6 call 0x12d009d0 */
  push32(0x12d005cbu); f_12d009d0();
  /* 12d005cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d005ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d005d0 je 0x12d005f1 */
  if (C.zf) goto L_12d005f1;
  /* 12d005d2 mov eax, dword ptr [0x12d2079c] */
  EAX = (r32((uint32_t)(0x12d2079c)));
  /* 12d005d7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12d005da mov dword ptr [0x12d2079c], eax */
  w32((uint32_t)(0x12d2079c), (EAX));
  /* 12d005df cmp dword ptr [0x12d20784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d005e6 jne 0x12d005f1 */
  if (!C.zf) goto L_12d005f1;
  /* 12d005e8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d005eb mov dword ptr [0x12d20784], ecx */
  w32((uint32_t)(0x12d20784), (ECX));
L_12d005f1:;
  /* 12d005f1 mov eax, dword ptr [0x12d2079c] */
  EAX = (r32((uint32_t)(0x12d2079c)));
  /* 12d005f6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12d005f9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d005fb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d005fd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12d005fe:;
  /* 12d005fe mov esp, ebp */
  ESP = (EBP);
  /* 12d00600 pop ebp */
  EBP = (pop32());
  /* 12d00601 ret 4 */
  ESPCHK(0x12d002e0u, _esp0);
  ESP += 8; return;
}

/* FUN_10010610 @ 0x12d00610 (116 bytes, 33 insns) */
void f_12d00610(void) {
  FTRACE(0x12d00610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d00610 push ebp */
  push32((uint32_t)(EBP));
  /* 12d00611 mov ebp, esp */
  EBP = (ESP);
  /* 12d00613 push ecx */
  push32((uint32_t)(ECX));
  /* 12d00614 mov eax, dword ptr [0x12d20794] */
  EAX = (r32((uint32_t)(0x12d20794)));
  /* 12d00619 push eax */
  push32((uint32_t)(EAX));
  /* 12d0061a call 0x12cf6fe0 */
  push32(0x12d0061fu); f_12cf6fe0();
  /* 12d0061f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00622 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d00624 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00627 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12d0062a mov dword ptr [0x12d20790], ecx */
  w32((uint32_t)(0x12d20790), (ECX));
  /* 12d00630 cmp dword ptr [0x12d20790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00637 je 0x12d00642 */
  if (C.zf) goto L_12d00642;
  /* 12d00639 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12d00640 jmp 0x12d00654 */
  goto L_12d00654;
L_12d00642:;
  /* 12d00642 mov edx, dword ptr [0x12d20794] */
  EDX = (r32((uint32_t)(0x12d20794)));
  /* 12d00648 push edx */
  push32((uint32_t)(EDX));
  /* 12d00649 call 0x12d00cc0 */
  push32(0x12d0064eu); f_12d00cc0();
  /* 12d0064e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00651 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d00654:;
  /* 12d00654 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d00657 mov dword ptr [0x12d2078c], eax */
  w32((uint32_t)(0x12d2078c), (EAX));
  /* 12d0065c push 1 */
  push32((uint32_t)(0x1u));
  /* 12d0065e push 0x12d00690 */
  push32((uint32_t)(0x12d00690u));
  /* 12d00663 call dword ptr [0x12d232a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232a0))), 0x12d00669u);
  /* 12d00669 mov ecx, dword ptr [0x12d2079c] */
  ECX = (r32((uint32_t)(0x12d2079c)));
  /* 12d0066f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12d00672 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d00674 jne 0x12d00680 */
  if (!C.zf) goto L_12d00680;
  /* 12d00676 mov dword ptr [0x12d2079c], 0 */
  w32((uint32_t)(0x12d2079c), (0x0u));
L_12d00680:;
  /* 12d00680 mov esp, ebp */
  ESP = (EBP);
  /* 12d00682 pop ebp */
  EBP = (pop32());
  /* 12d00683 ret  */
  ESPCHK(0x12d00610u, _esp0);
  ESP += 4; return;
}

/* FUN_10010690 @ 0x12d00690 (287 bytes, 86 insns) */
void f_12d00690(void) {
  FTRACE(0x12d00690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d00690 push ebp */
  push32((uint32_t)(EBP));
  /* 12d00691 mov ebp, esp */
  EBP = (ESP);
  /* 12d00693 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d00696 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d00699 push eax */
  push32((uint32_t)(EAX));
  /* 12d0069a call 0x12d00c40 */
  push32(0x12d0069fu); f_12d00c40();
  /* 12d0069f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d006a2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12d006a5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12d006a7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12d006aa push ecx */
  push32((uint32_t)(ECX));
  /* 12d006ab mov edx, dword ptr [0x12d20790] */
  EDX = (r32((uint32_t)(0x12d20790)));
  /* 12d006b1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d006b3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d006b5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 12d006bb add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d006c1 push edx */
  push32((uint32_t)(EDX));
  /* 12d006c2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d006c5 push eax */
  push32((uint32_t)(EAX));
  /* 12d006c6 call dword ptr [0x12d207a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d207a4))), 0x12d006ccu);
  /* 12d006cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d006ce jne 0x12d006e4 */
  if (!C.zf) goto L_12d006e4;
  /* 12d006d0 mov dword ptr [0x12d2079c], 0 */
  w32((uint32_t)(0x12d2079c), (0x0u));
  /* 12d006da mov eax, 1 */
  EAX = (0x1u);
  /* 12d006df jmp 0x12d007a9 */
  goto L_12d007a9;
L_12d006e4:;
  /* 12d006e4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12d006e7 push ecx */
  push32((uint32_t)(ECX));
  /* 12d006e8 mov edx, dword ptr [0x12d20794] */
  EDX = (r32((uint32_t)(0x12d20794)));
  /* 12d006ee push edx */
  push32((uint32_t)(EDX));
  /* 12d006ef call 0x12d02880 */
  push32(0x12d006f4u); f_12d02880();
  /* 12d006f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d006f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d006f9 jne 0x12d00739 */
  if (!C.zf) goto L_12d00739;
  /* 12d006fb cmp dword ptr [0x12d20790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00702 jne 0x12d00716 */
  if (!C.zf) goto L_12d00716;
  /* 12d00704 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d00706 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d00709 push eax */
  push32((uint32_t)(EAX));
  /* 12d0070a call 0x12d009d0 */
  push32(0x12d0070fu); f_12d009d0();
  /* 12d0070f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00712 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d00714 je 0x12d00737 */
  if (C.zf) goto L_12d00737;
L_12d00716:;
  /* 12d00716 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d00719 mov dword ptr [0x12d207a0], ecx */
  w32((uint32_t)(0x12d207a0), (ECX));
  /* 12d0071f mov edx, dword ptr [0x12d207a0] */
  EDX = (r32((uint32_t)(0x12d207a0)));
  /* 12d00725 mov dword ptr [0x12d20784], edx */
  w32((uint32_t)(0x12d20784), (EDX));
  /* 12d0072b mov eax, dword ptr [0x12d2079c] */
  EAX = (r32((uint32_t)(0x12d2079c)));
  /* 12d00730 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12d00732 mov dword ptr [0x12d2079c], eax */
  w32((uint32_t)(0x12d2079c), (EAX));
L_12d00737:;
  /* 12d00737 jmp 0x12d0079c */
  goto L_12d0079c;
L_12d00739:;
  /* 12d00739 cmp dword ptr [0x12d20790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d20790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00740 jne 0x12d0079c */
  if (!C.zf) goto L_12d0079c;
  /* 12d00742 cmp dword ptr [0x12d2078c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12d2078c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00749 je 0x12d0079c */
  if (C.zf) goto L_12d0079c;
  /* 12d0074b mov ecx, dword ptr [0x12d2078c] */
  ECX = (r32((uint32_t)(0x12d2078c)));
  /* 12d00751 push ecx */
  push32((uint32_t)(ECX));
  /* 12d00752 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 12d00755 push edx */
  push32((uint32_t)(EDX));
  /* 12d00756 mov eax, dword ptr [0x12d20794] */
  EAX = (r32((uint32_t)(0x12d20794)));
  /* 12d0075b push eax */
  push32((uint32_t)(EAX));
  /* 12d0075c call 0x12d02950 */
  push32(0x12d00761u); f_12d02950();
  /* 12d00761 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00764 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d00766 jne 0x12d0079c */
  if (!C.zf) goto L_12d0079c;
  /* 12d00768 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d0076a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d0076d push ecx */
  push32((uint32_t)(ECX));
  /* 12d0076e call 0x12d009d0 */
  push32(0x12d00773u); f_12d009d0();
  /* 12d00773 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00776 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d00778 je 0x12d0079c */
  if (C.zf) goto L_12d0079c;
  /* 12d0077a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d0077d mov dword ptr [0x12d207a0], edx */
  w32((uint32_t)(0x12d207a0), (EDX));
  /* 12d00783 mov eax, dword ptr [0x12d207a0] */
  EAX = (r32((uint32_t)(0x12d207a0)));
  /* 12d00788 mov dword ptr [0x12d20784], eax */
  w32((uint32_t)(0x12d20784), (EAX));
  /* 12d0078d mov ecx, dword ptr [0x12d2079c] */
  ECX = (r32((uint32_t)(0x12d2079c)));
  /* 12d00793 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12d00796 mov dword ptr [0x12d2079c], ecx */
  w32((uint32_t)(0x12d2079c), (ECX));
L_12d0079c:;
  /* 12d0079c mov eax, dword ptr [0x12d2079c] */
  EAX = (r32((uint32_t)(0x12d2079c)));
  /* 12d007a1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12d007a4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d007a6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d007a8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12d007a9:;
  /* 12d007a9 mov esp, ebp */
  ESP = (EBP);
  /* 12d007ab pop ebp */
  EBP = (pop32());
  /* 12d007ac ret 4 */
  ESPCHK(0x12d00690u, _esp0);
  ESP += 8; return;
}

/* FUN_100107b0 @ 0x12d007b0 (69 bytes, 20 insns) */
void f_12d007b0(void) {
  FTRACE(0x12d007b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d007b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d007b1 mov ebp, esp */
  EBP = (ESP);
  /* 12d007b3 mov eax, dword ptr [0x12d20798] */
  EAX = (r32((uint32_t)(0x12d20798)));
  /* 12d007b8 push eax */
  push32((uint32_t)(EAX));
  /* 12d007b9 call 0x12cf6fe0 */
  push32(0x12d007beu); f_12cf6fe0();
  /* 12d007be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d007c1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d007c3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d007c6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12d007c9 mov dword ptr [0x12d20788], ecx */
  w32((uint32_t)(0x12d20788), (ECX));
  /* 12d007cf push 1 */
  push32((uint32_t)(0x1u));
  /* 12d007d1 push 0x12d00800 */
  push32((uint32_t)(0x12d00800u));
  /* 12d007d6 call dword ptr [0x12d232a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232a0))), 0x12d007dcu);
  /* 12d007dc mov edx, dword ptr [0x12d2079c] */
  EDX = (r32((uint32_t)(0x12d2079c)));
  /* 12d007e2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12d007e5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d007e7 jne 0x12d007f3 */
  if (!C.zf) goto L_12d007f3;
  /* 12d007e9 mov dword ptr [0x12d2079c], 0 */
  w32((uint32_t)(0x12d2079c), (0x0u));
L_12d007f3:;
  /* 12d007f3 pop ebp */
  EBP = (pop32());
  /* 12d007f4 ret  */
  ESPCHK(0x12d007b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010800 @ 0x12d00800 (172 bytes, 54 insns) */
void f_12d00800(void) {
  FTRACE(0x12d00800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d00800 push ebp */
  push32((uint32_t)(EBP));
  /* 12d00801 mov ebp, esp */
  EBP = (ESP);
  /* 12d00803 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d00806 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d00809 push eax */
  push32((uint32_t)(EAX));
  /* 12d0080a call 0x12d00c40 */
  push32(0x12d0080fu); f_12d00c40();
  /* 12d0080f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00812 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12d00815 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12d00817 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12d0081a push ecx */
  push32((uint32_t)(ECX));
  /* 12d0081b mov edx, dword ptr [0x12d20788] */
  EDX = (r32((uint32_t)(0x12d20788)));
  /* 12d00821 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d00823 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d00825 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 12d0082b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00831 push edx */
  push32((uint32_t)(EDX));
  /* 12d00832 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d00835 push eax */
  push32((uint32_t)(EAX));
  /* 12d00836 call dword ptr [0x12d207a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d207a4))), 0x12d0083cu);
  /* 12d0083c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d0083e jne 0x12d00851 */
  if (!C.zf) goto L_12d00851;
  /* 12d00840 mov dword ptr [0x12d2079c], 0 */
  w32((uint32_t)(0x12d2079c), (0x0u));
  /* 12d0084a mov eax, 1 */
  EAX = (0x1u);
  /* 12d0084f jmp 0x12d008a6 */
  goto L_12d008a6;
L_12d00851:;
  /* 12d00851 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12d00854 push ecx */
  push32((uint32_t)(ECX));
  /* 12d00855 mov edx, dword ptr [0x12d20798] */
  EDX = (r32((uint32_t)(0x12d20798)));
  /* 12d0085b push edx */
  push32((uint32_t)(EDX));
  /* 12d0085c call 0x12d02880 */
  push32(0x12d00861u); f_12d02880();
  /* 12d00861 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00864 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d00866 jne 0x12d00899 */
  if (!C.zf) goto L_12d00899;
  /* 12d00868 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d0086b push eax */
  push32((uint32_t)(EAX));
  /* 12d0086c call 0x12d00980 */
  push32(0x12d00871u); f_12d00980();
  /* 12d00871 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00874 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d00876 je 0x12d00899 */
  if (C.zf) goto L_12d00899;
  /* 12d00878 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12d0087b mov dword ptr [0x12d207a0], ecx */
  w32((uint32_t)(0x12d207a0), (ECX));
  /* 12d00881 mov edx, dword ptr [0x12d207a0] */
  EDX = (r32((uint32_t)(0x12d207a0)));
  /* 12d00887 mov dword ptr [0x12d20784], edx */
  w32((uint32_t)(0x12d20784), (EDX));
  /* 12d0088d mov eax, dword ptr [0x12d2079c] */
  EAX = (r32((uint32_t)(0x12d2079c)));
  /* 12d00892 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12d00894 mov dword ptr [0x12d2079c], eax */
  w32((uint32_t)(0x12d2079c), (EAX));
L_12d00899:;
  /* 12d00899 mov eax, dword ptr [0x12d2079c] */
  EAX = (r32((uint32_t)(0x12d2079c)));
  /* 12d0089e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12d008a1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12d008a3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d008a5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12d008a6:;
  /* 12d008a6 mov esp, ebp */
  ESP = (EBP);
  /* 12d008a8 pop ebp */
  EBP = (pop32());
  /* 12d008a9 ret 4 */
  ESPCHK(0x12d00800u, _esp0);
  ESP += 8; return;
}

/* FUN_100108b0 @ 0x12d008b0 (43 bytes, 11 insns) */
void f_12d008b0(void) {
  FTRACE(0x12d008b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d008b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d008b1 mov ebp, esp */
  EBP = (ESP);
  /* 12d008b3 mov eax, dword ptr [0x12d2079c] */
  EAX = (r32((uint32_t)(0x12d2079c)));
  /* 12d008b8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 12d008bd mov dword ptr [0x12d2079c], eax */
  w32((uint32_t)(0x12d2079c), (EAX));
  /* 12d008c2 call dword ptr [0x12d2329c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d2329c))), 0x12d008c8u);
  /* 12d008c8 mov dword ptr [0x12d207a0], eax */
  w32((uint32_t)(0x12d207a0), (EAX));
  /* 12d008cd mov ecx, dword ptr [0x12d207a0] */
  ECX = (r32((uint32_t)(0x12d207a0)));
  /* 12d008d3 mov dword ptr [0x12d20784], ecx */
  w32((uint32_t)(0x12d20784), (ECX));
  /* 12d008d9 pop ebp */
  EBP = (pop32());
  /* 12d008da ret  */
  ESPCHK(0x12d008b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100108e0 @ 0x12d008e0 (155 bytes, 57 insns) */
void f_12d008e0(void) {
  FTRACE(0x12d008e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d008e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d008e1 mov ebp, esp */
  EBP = (ESP);
  /* 12d008e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d008e6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d008ea je 0x12d0090b */
  if (C.zf) goto L_12d0090b;
  /* 12d008ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d008ef movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12d008f2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d008f4 je 0x12d0090b */
  if (C.zf) goto L_12d0090b;
  /* 12d008f6 push 0x12d1cb14 */
  push32((uint32_t)(0x12d1cb14u));
  /* 12d008fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d008fe push edx */
  push32((uint32_t)(EDX));
  /* 12d008ff call 0x12cffe40 */
  push32(0x12d00904u); f_12cffe40();
  /* 12d00904 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00907 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d00909 jne 0x12d00933 */
  if (!C.zf) goto L_12d00933;
L_12d0090b:;
  /* 12d0090b push 8 */
  push32((uint32_t)(0x8u));
  /* 12d0090d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12d00910 push eax */
  push32((uint32_t)(EAX));
  /* 12d00911 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12d00916 mov ecx, dword ptr [0x12d207a0] */
  ECX = (r32((uint32_t)(0x12d207a0)));
  /* 12d0091c push ecx */
  push32((uint32_t)(ECX));
  /* 12d0091d call dword ptr [0x12d207a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d207a4))), 0x12d00923u);
  /* 12d00923 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d00925 jne 0x12d0092b */
  if (!C.zf) goto L_12d0092b;
  /* 12d00927 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d00929 jmp 0x12d00977 */
  goto L_12d00977;
L_12d0092b:;
  /* 12d0092b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 12d0092e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12d00931 jmp 0x12d0096b */
  goto L_12d0096b;
L_12d00933:;
  /* 12d00933 push 0x12d1cb10 */
  push32((uint32_t)(0x12d1cb10u));
  /* 12d00938 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d0093b push eax */
  push32((uint32_t)(EAX));
  /* 12d0093c call 0x12cffe40 */
  push32(0x12d00941u); f_12cffe40();
  /* 12d00941 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00944 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d00946 jne 0x12d0096b */
  if (!C.zf) goto L_12d0096b;
  /* 12d00948 push 8 */
  push32((uint32_t)(0x8u));
  /* 12d0094a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12d0094d push ecx */
  push32((uint32_t)(ECX));
  /* 12d0094e push 0xb */
  push32((uint32_t)(0xbu));
  /* 12d00950 mov edx, dword ptr [0x12d207a0] */
  EDX = (r32((uint32_t)(0x12d207a0)));
  /* 12d00956 push edx */
  push32((uint32_t)(EDX));
  /* 12d00957 call dword ptr [0x12d207a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d207a4))), 0x12d0095du);
  /* 12d0095d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d0095f jne 0x12d00965 */
  if (!C.zf) goto L_12d00965;
  /* 12d00961 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d00963 jmp 0x12d00977 */
  goto L_12d00977;
L_12d00965:;
  /* 12d00965 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12d00968 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12d0096b:;
  /* 12d0096b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d0096e push ecx */
  push32((uint32_t)(ECX));
  /* 12d0096f call 0x12d02a60 */
  push32(0x12d00974u); f_12d02a60();
  /* 12d00974 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12d00977:;
  /* 12d00977 mov esp, ebp */
  ESP = (EBP);
  /* 12d00979 pop ebp */
  EBP = (pop32());
  /* 12d0097a ret  */
  ESPCHK(0x12d008e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010980 @ 0x12d00980 (79 bytes, 26 insns) */
void f_12d00980(void) {
  FTRACE(0x12d00980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d00980 push ebp */
  push32((uint32_t)(EBP));
  /* 12d00981 mov ebp, esp */
  EBP = (ESP);
  /* 12d00983 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d00986 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 12d0098a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 12d0098e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d00995 jmp 0x12d009a0 */
  goto L_12d009a0;
L_12d00997:;
  /* 12d00997 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d0099a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0099d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12d009a0:;
  /* 12d009a0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d009a4 jae 0x12d009c6 */
  if (!C.cf) goto L_12d009c6;
  /* 12d009a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d009a9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12d009af mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d009b2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12d009b4 mov cx, word ptr [eax*2 + 0x12d1f9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x12d1f9c4)));
  /* 12d009bc cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d009be jne 0x12d009c4 */
  if (!C.zf) goto L_12d009c4;
  /* 12d009c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d009c2 jmp 0x12d009cb */
  goto L_12d009cb;
L_12d009c4:;
  /* 12d009c4 jmp 0x12d00997 */
  goto L_12d00997;
L_12d009c6:;
  /* 12d009c6 mov eax, 1 */
  EAX = (0x1u);
L_12d009cb:;
  /* 12d009cb mov esp, ebp */
  ESP = (EBP);
  /* 12d009cd pop ebp */
  EBP = (pop32());
  /* 12d009ce ret  */
  ESPCHK(0x12d00980u, _esp0);
  ESP += 4; return;
}

/* FUN_100109d0 @ 0x12d009d0 (135 bytes, 48 insns) */
void f_12d009d0(void) {
  FTRACE(0x12d009d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d009d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d009d1 mov ebp, esp */
  EBP = (ESP);
  /* 12d009d3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d009d6 push esi */
  push32((uint32_t)(ESI));
  /* 12d009d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d009da and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d009df and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d009e4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d009e9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 12d009ec and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d009f1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d009f4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12d009f6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 12d009f9 push ecx */
  push32((uint32_t)(ECX));
  /* 12d009fa push 1 */
  push32((uint32_t)(0x1u));
  /* 12d009fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d009ff push edx */
  push32((uint32_t)(EDX));
  /* 12d00a00 call dword ptr [0x12d207a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d207a4))), 0x12d00a06u);
  /* 12d00a06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d00a08 jne 0x12d00a0e */
  if (!C.zf) goto L_12d00a0e;
  /* 12d00a0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d00a0c jmp 0x12d00a52 */
  goto L_12d00a52;
L_12d00a0e:;
  /* 12d00a0e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 12d00a11 push eax */
  push32((uint32_t)(EAX));
  /* 12d00a12 call 0x12d00c40 */
  push32(0x12d00a17u); f_12d00c40();
  /* 12d00a17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00a1a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00a1d je 0x12d00a4d */
  if (C.zf) goto L_12d00a4d;
  /* 12d00a1f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00a23 je 0x12d00a4d */
  if (C.zf) goto L_12d00a4d;
  /* 12d00a25 mov ecx, dword ptr [0x12d20794] */
  ECX = (r32((uint32_t)(0x12d20794)));
  /* 12d00a2b push ecx */
  push32((uint32_t)(ECX));
  /* 12d00a2c call 0x12d00cc0 */
  push32(0x12d00a31u); f_12d00cc0();
  /* 12d00a31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00a34 mov esi, eax */
  ESI = (EAX);
  /* 12d00a36 mov edx, dword ptr [0x12d20794] */
  EDX = (r32((uint32_t)(0x12d20794)));
  /* 12d00a3c push edx */
  push32((uint32_t)(EDX));
  /* 12d00a3d call 0x12cf6fe0 */
  push32(0x12d00a42u); f_12cf6fe0();
  /* 12d00a42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00a45 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00a47 jne 0x12d00a4d */
  if (!C.zf) goto L_12d00a4d;
  /* 12d00a49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d00a4b jmp 0x12d00a52 */
  goto L_12d00a52;
L_12d00a4d:;
  /* 12d00a4d mov eax, 1 */
  EAX = (0x1u);
L_12d00a52:;
  /* 12d00a52 pop esi */
  ESI = (pop32());
  /* 12d00a53 mov esp, ebp */
  ESP = (EBP);
  /* 12d00a55 pop ebp */
  EBP = (pop32());
  /* 12d00a56 ret  */
  ESPCHK(0x12d009d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a60 @ 0x12d00a60 (77 bytes, 18 insns) */
void f_12d00a60(void) {
  FTRACE(0x12d00a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d00a60 push ebp */
  push32((uint32_t)(EBP));
  /* 12d00a61 mov ebp, esp */
  EBP = (ESP);
  /* 12d00a63 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d00a69 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 12d00a73 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 12d00a79 push eax */
  push32((uint32_t)(EAX));
  /* 12d00a7a call dword ptr [0x12d23298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23298))), 0x12d00a80u);
  /* 12d00a80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d00a82 je 0x12d00a99 */
  if (C.zf) goto L_12d00a99;
  /* 12d00a84 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00a8b jne 0x12d00a99 */
  if (!C.zf) goto L_12d00a99;
  /* 12d00a8d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 12d00a97 jmp 0x12d00aa3 */
  goto L_12d00aa3;
L_12d00a99:;
  /* 12d00a99 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_12d00aa3:;
  /* 12d00aa3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12d00aa9 mov esp, ebp */
  ESP = (EBP);
  /* 12d00aab pop ebp */
  EBP = (pop32());
  /* 12d00aac ret  */
  ESPCHK(0x12d00a60u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x12d00ab0 (388 bytes, 118 insns) */
void f_12d00ab0(void) {
  FTRACE(0x12d00ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d00ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d00ab1 mov ebp, esp */
  EBP = (ESP);
  /* 12d00ab3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d00ab6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d00abd mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 12d00ac4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12d00acb:;
  /* 12d00acb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d00ace cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00ad1 jg 0x12d00c18 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d00c18;
  /* 12d00ad7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d00ada add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00add cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12d00ade sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d00ae0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12d00ae2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d00ae5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d00ae8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d00aeb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d00aee cmp edx, dword ptr [ecx + 0x12d1f520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x12d1f520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00af4 jne 0x12d00bee */
  if (!C.zf) goto L_12d00bee;
  /* 12d00afa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d00afd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d00b00 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00b04 ja 0x12d00b27 */
  if ((!C.cf&&!C.zf)) goto L_12d00b27;
  /* 12d00b06 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00b0a je 0x12d00b99 */
  if (C.zf) goto L_12d00b99;
  /* 12d00b10 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00b14 je 0x12d00b44 */
  if (C.zf) goto L_12d00b44;
  /* 12d00b16 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00b1a je 0x12d00b66 */
  if (C.zf) goto L_12d00b66;
  /* 12d00b1c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00b20 je 0x12d00b88 */
  if (C.zf) goto L_12d00b88;
  /* 12d00b22 jmp 0x12d00bb8 */
  goto L_12d00bb8;
L_12d00b27:;
  /* 12d00b27 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00b2e je 0x12d00b55 */
  if (C.zf) goto L_12d00b55;
  /* 12d00b30 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00b37 je 0x12d00b77 */
  if (C.zf) goto L_12d00b77;
  /* 12d00b39 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00b40 je 0x12d00baa */
  if (C.zf) goto L_12d00baa;
  /* 12d00b42 jmp 0x12d00bb8 */
  goto L_12d00bb8;
L_12d00b44:;
  /* 12d00b44 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d00b47 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d00b4a add ecx, 0x12d1f524 */
  { uint32_t _a=(ECX),_b=(0x12d1f524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00b50 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d00b53 jmp 0x12d00bb8 */
  goto L_12d00bb8;
L_12d00b55:;
  /* 12d00b55 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d00b58 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d00b5b mov eax, dword ptr [edx + 0x12d1f52c] */
  EAX = (r32((uint32_t)(EDX + 0x12d1f52c)));
  /* 12d00b61 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d00b64 jmp 0x12d00bb8 */
  goto L_12d00bb8;
L_12d00b66:;
  /* 12d00b66 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d00b69 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d00b6c add ecx, 0x12d1f530 */
  { uint32_t _a=(ECX),_b=(0x12d1f530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00b72 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d00b75 jmp 0x12d00bb8 */
  goto L_12d00bb8;
L_12d00b77:;
  /* 12d00b77 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d00b7a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d00b7d mov eax, dword ptr [edx + 0x12d1f534] */
  EAX = (r32((uint32_t)(EDX + 0x12d1f534)));
  /* 12d00b83 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d00b86 jmp 0x12d00bb8 */
  goto L_12d00bb8;
L_12d00b88:;
  /* 12d00b88 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d00b8b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d00b8e add ecx, 0x12d1f538 */
  { uint32_t _a=(ECX),_b=(0x12d1f538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00b94 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d00b97 jmp 0x12d00bb8 */
  goto L_12d00bb8;
L_12d00b99:;
  /* 12d00b99 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d00b9c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d00b9f add edx, 0x12d1f53c */
  { uint32_t _a=(EDX),_b=(0x12d1f53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00ba5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d00ba8 jmp 0x12d00bb8 */
  goto L_12d00bb8;
L_12d00baa:;
  /* 12d00baa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d00bad imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d00bb0 add eax, 0x12d1f544 */
  { uint32_t _a=(EAX),_b=(0x12d1f544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00bb5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12d00bb8:;
  /* 12d00bb8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00bbc je 0x12d00bc4 */
  if (C.zf) goto L_12d00bc4;
  /* 12d00bbe cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00bc2 jge 0x12d00bc6 */
  if ((C.sf==C.of)) goto L_12d00bc6;
L_12d00bc4:;
  /* 12d00bc4 jmp 0x12d00c18 */
  goto L_12d00c18;
L_12d00bc6:;
  /* 12d00bc6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d00bc9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d00bcc push ecx */
  push32((uint32_t)(ECX));
  /* 12d00bcd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d00bd0 push edx */
  push32((uint32_t)(EDX));
  /* 12d00bd1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d00bd4 push eax */
  push32((uint32_t)(EAX));
  /* 12d00bd5 call 0x12cf79d0 */
  push32(0x12d00bdau); f_12cf79d0();
  /* 12d00bda add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00bdd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d00be0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00be3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 12d00be7 mov eax, 1 */
  EAX = (0x1u);
  /* 12d00bec jmp 0x12d00c2e */
  goto L_12d00c2e;
L_12d00bee:;
  /* 12d00bee mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d00bf1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d00bf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d00bf7 cmp eax, dword ptr [edx + 0x12d1f520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x12d1f520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00bfd jae 0x12d00c0a */
  if (!C.cf) goto L_12d00c0a;
  /* 12d00bff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d00c02 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d00c05 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12d00c08 jmp 0x12d00c13 */
  goto L_12d00c13;
L_12d00c0a:;
  /* 12d00c0a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d00c0d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00c10 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12d00c13:;
  /* 12d00c13 jmp 0x12d00acb */
  goto L_12d00acb;
L_12d00c18:;
  /* 12d00c18 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d00c1b push eax */
  push32((uint32_t)(EAX));
  /* 12d00c1c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d00c1f push ecx */
  push32((uint32_t)(ECX));
  /* 12d00c20 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d00c23 push edx */
  push32((uint32_t)(EDX));
  /* 12d00c24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d00c27 push eax */
  push32((uint32_t)(EAX));
  /* 12d00c28 call dword ptr [0x12d232a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d232a4))), 0x12d00c2eu);
L_12d00c2e:;
  /* 12d00c2e mov esp, ebp */
  ESP = (EBP);
  /* 12d00c30 pop ebp */
  EBP = (pop32());
  /* 12d00c31 ret 0x10 */
  ESPCHK(0x12d00ab0u, _esp0);
  ESP += 20; return;
}

/* FUN_10010c40 @ 0x12d00c40 (118 bytes, 42 insns) */
void f_12d00c40(void) {
  FTRACE(0x12d00c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d00c40 push ebp */
  push32((uint32_t)(EBP));
  /* 12d00c41 mov ebp, esp */
  EBP = (ESP);
  /* 12d00c43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d00c46 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12d00c4d:;
  /* 12d00c4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d00c50 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d00c52 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12d00c55 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d00c59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d00c5c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00c5f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12d00c62 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d00c64 je 0x12d00caf */
  if (C.zf) goto L_12d00caf;
  /* 12d00c66 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d00c6a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00c6d jl 0x12d00c82 */
  if ((C.sf!=C.of)) goto L_12d00c82;
  /* 12d00c6f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d00c73 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00c76 jg 0x12d00c82 */
  if ((!C.zf&&C.sf==C.of)) goto L_12d00c82;
  /* 12d00c78 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12d00c7b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d00c7d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12d00c80 jmp 0x12d00c9c */
  goto L_12d00c9c;
L_12d00c82:;
  /* 12d00c82 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d00c86 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00c89 jl 0x12d00c9c */
  if ((C.sf!=C.of)) goto L_12d00c9c;
  /* 12d00c8b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d00c8f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00c92 jg 0x12d00c9c */
  if ((!C.zf&&C.sf==C.of)) goto L_12d00c9c;
  /* 12d00c94 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12d00c97 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12d00c99 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_12d00c9c:;
  /* 12d00c9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d00c9f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12d00ca2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12d00ca6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12d00caa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d00cad jmp 0x12d00c4d */
  goto L_12d00c4d;
L_12d00caf:;
  /* 12d00caf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d00cb2 mov esp, ebp */
  ESP = (EBP);
  /* 12d00cb4 pop ebp */
  EBP = (pop32());
  /* 12d00cb5 ret  */
  ESPCHK(0x12d00c40u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x12d00cc0 (101 bytes, 36 insns) */
void f_12d00cc0(void) {
  FTRACE(0x12d00cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d00cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d00cc1 mov ebp, esp */
  EBP = (ESP);
  /* 12d00cc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d00cc6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d00ccd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d00cd0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12d00cd2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 12d00cd5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d00cd8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00cdb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12d00cde:;
  /* 12d00cde movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12d00ce2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00ce5 jl 0x12d00cf0 */
  if ((C.sf!=C.of)) goto L_12d00cf0;
  /* 12d00ce7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12d00ceb cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00cee jle 0x12d00d02 */
  if ((C.zf||C.sf!=C.of)) goto L_12d00d02;
L_12d00cf0:;
  /* 12d00cf0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12d00cf4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00cf7 jl 0x12d00d1e */
  if ((C.sf!=C.of)) goto L_12d00d1e;
  /* 12d00cf9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12d00cfd cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00d00 jg 0x12d00d1e */
  if ((!C.zf&&C.sf==C.of)) goto L_12d00d1e;
L_12d00d02:;
  /* 12d00d02 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d00d05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00d08 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d00d0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d00d0e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12d00d10 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 12d00d13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d00d16 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00d19 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12d00d1c jmp 0x12d00cde */
  goto L_12d00cde;
L_12d00d1e:;
  /* 12d00d1e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d00d21 mov esp, ebp */
  ESP = (EBP);
  /* 12d00d23 pop ebp */
  EBP = (pop32());
  /* 12d00d24 ret  */
  ESPCHK(0x12d00cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010d30 @ 0x12d00d30 (122 bytes, 39 insns) */
void f_12d00d30(void) {
  FTRACE(0x12d00d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d00d30 push ebp */
  push32((uint32_t)(EBP));
  /* 12d00d31 mov ebp, esp */
  EBP = (ESP);
  /* 12d00d33 push ecx */
  push32((uint32_t)(ECX));
  /* 12d00d34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d00d37 cmp eax, dword ptr [0x12d2203c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12d2203c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00d3d jae 0x12d00d61 */
  if (!C.cf) goto L_12d00d61;
  /* 12d00d3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d00d42 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12d00d45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d00d48 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12d00d4b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d00d4e mov eax, dword ptr [ecx*4 + 0x12d21f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12d21f00)));
  /* 12d00d55 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12d00d5a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12d00d5d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d00d5f jne 0x12d00d7c */
  if (!C.zf) goto L_12d00d7c;
L_12d00d61:;
  /* 12d00d61 call 0x12cfc080 */
  push32(0x12d00d66u); f_12cfc080();
  /* 12d00d66 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12d00d6c call 0x12cfc090 */
  push32(0x12d00d71u); f_12cfc090();
  /* 12d00d71 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12d00d77 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d00d7a jmp 0x12d00da6 */
  goto L_12d00da6;
L_12d00d7c:;
  /* 12d00d7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d00d7f push edx */
  push32((uint32_t)(EDX));
  /* 12d00d80 call 0x12cfd8a0 */
  push32(0x12d00d85u); f_12cfd8a0();
  /* 12d00d85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00d88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d00d8b push eax */
  push32((uint32_t)(EAX));
  /* 12d00d8c call 0x12d00db0 */
  push32(0x12d00d91u); f_12d00db0();
  /* 12d00d91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00d94 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d00d97 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d00d9a push ecx */
  push32((uint32_t)(ECX));
  /* 12d00d9b call 0x12cfd930 */
  push32(0x12d00da0u); f_12cfd930();
  /* 12d00da0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00da3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12d00da6:;
  /* 12d00da6 mov esp, ebp */
  ESP = (EBP);
  /* 12d00da8 pop ebp */
  EBP = (pop32());
  /* 12d00da9 ret  */
  ESPCHK(0x12d00d30u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x12d00db0 (170 bytes, 59 insns) */
void f_12d00db0(void) {
  FTRACE(0x12d00db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d00db0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d00db1 mov ebp, esp */
  EBP = (ESP);
  /* 12d00db3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d00db4 push esi */
  push32((uint32_t)(ESI));
  /* 12d00db5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d00db8 push eax */
  push32((uint32_t)(EAX));
  /* 12d00db9 call 0x12cfd720 */
  push32(0x12d00dbeu); f_12cfd720();
  /* 12d00dbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00dc1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00dc4 je 0x12d00e03 */
  if (C.zf) goto L_12d00e03;
  /* 12d00dc6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00dca je 0x12d00dd2 */
  if (C.zf) goto L_12d00dd2;
  /* 12d00dcc cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00dd0 jne 0x12d00dec */
  if (!C.zf) goto L_12d00dec;
L_12d00dd2:;
  /* 12d00dd2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12d00dd4 call 0x12cfd720 */
  push32(0x12d00dd9u); f_12cfd720();
  /* 12d00dd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00ddc mov esi, eax */
  ESI = (EAX);
  /* 12d00dde push 2 */
  push32((uint32_t)(0x2u));
  /* 12d00de0 call 0x12cfd720 */
  push32(0x12d00de5u); f_12cfd720();
  /* 12d00de5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00de8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00dea je 0x12d00e03 */
  if (C.zf) goto L_12d00e03;
L_12d00dec:;
  /* 12d00dec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d00def push ecx */
  push32((uint32_t)(ECX));
  /* 12d00df0 call 0x12cfd720 */
  push32(0x12d00df5u); f_12cfd720();
  /* 12d00df5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00df8 push eax */
  push32((uint32_t)(EAX));
  /* 12d00df9 call dword ptr [0x12d23294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23294))), 0x12d00dffu);
  /* 12d00dff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d00e01 je 0x12d00e0c */
  if (C.zf) goto L_12d00e0c;
L_12d00e03:;
  /* 12d00e03 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12d00e0a jmp 0x12d00e15 */
  goto L_12d00e15;
L_12d00e0c:;
  /* 12d00e0c call dword ptr [0x12d23348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12d23348))), 0x12d00e12u);
  /* 12d00e12 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12d00e15:;
  /* 12d00e15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d00e18 push edx */
  push32((uint32_t)(EDX));
  /* 12d00e19 call 0x12cfd640 */
  push32(0x12d00e1eu); f_12cfd640();
  /* 12d00e1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00e21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d00e24 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12d00e27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d00e2a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12d00e2d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12d00e30 mov edx, dword ptr [eax*4 + 0x12d21f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12d21f00)));
  /* 12d00e37 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 12d00e3c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00e40 je 0x12d00e53 */
  if (C.zf) goto L_12d00e53;
  /* 12d00e42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d00e45 push eax */
  push32((uint32_t)(EAX));
  /* 12d00e46 call 0x12cfbfe0 */
  push32(0x12d00e4bu); f_12cfbfe0();
  /* 12d00e4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00e4e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12d00e51 jmp 0x12d00e55 */
  goto L_12d00e55;
L_12d00e53:;
  /* 12d00e53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12d00e55:;
  /* 12d00e55 pop esi */
  ESI = (pop32());
  /* 12d00e56 mov esp, ebp */
  ESP = (EBP);
  /* 12d00e58 pop ebp */
  EBP = (pop32());
  /* 12d00e59 ret  */
  ESPCHK(0x12d00db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e60 @ 0x12d00e60 (146 bytes, 52 insns) */
void f_12d00e60(void) {
  FTRACE(0x12d00e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d00e60 push ebp */
  push32((uint32_t)(EBP));
  /* 12d00e61 mov ebp, esp */
  EBP = (ESP);
  /* 12d00e63 push ebx */
  push32((uint32_t)(EBX));
  /* 12d00e64 push esi */
  push32((uint32_t)(ESI));
  /* 12d00e65 push edi */
  push32((uint32_t)(EDI));
L_12d00e66:;
  /* 12d00e66 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00e6a jne 0x12d00e8a */
  if (!C.zf) goto L_12d00e8a;
  /* 12d00e6c push 0x12d1c450 */
  push32((uint32_t)(0x12d1c450u));
  /* 12d00e71 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d00e73 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12d00e75 push 0x12d1cb18 */
  push32((uint32_t)(0x12d1cb18u));
  /* 12d00e7a push 2 */
  push32((uint32_t)(0x2u));
  /* 12d00e7c call 0x12cf3270 */
  push32(0x12d00e81u); f_12cf3270();
  /* 12d00e81 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00e84 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00e87 jne 0x12d00e8a */
  if (!C.zf) goto L_12d00e8a;
  /* 12d00e89 int3  */
  x86_unimpl("int3 @ 0x12d00e89");
L_12d00e8a:;
  /* 12d00e8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12d00e8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12d00e8e jne 0x12d00e66 */
  if (!C.zf) goto L_12d00e66;
  /* 12d00e90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d00e93 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d00e96 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 12d00e9c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12d00e9e je 0x12d00eed */
  if (C.zf) goto L_12d00eed;
  /* 12d00ea0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d00ea3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12d00ea6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12d00ea9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12d00eab je 0x12d00eed */
  if (C.zf) goto L_12d00eed;
  /* 12d00ead push 2 */
  push32((uint32_t)(0x2u));
  /* 12d00eaf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d00eb2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12d00eb5 push eax */
  push32((uint32_t)(EAX));
  /* 12d00eb6 call 0x12cf4c40 */
  push32(0x12d00ebbu); f_12cf4c40();
  /* 12d00ebb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00ebe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d00ec1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12d00ec4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 12d00eca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d00ecd mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12d00ed0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d00ed3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12d00ed9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d00edc mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12d00ee3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d00ee6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_12d00eed:;
  /* 12d00eed pop edi */
  EDI = (pop32());
  /* 12d00eee pop esi */
  ESI = (pop32());
  /* 12d00eef pop ebx */
  EBX = (pop32());
  /* 12d00ef0 pop ebp */
  EBP = (pop32());
  /* 12d00ef1 ret  */
  ESPCHK(0x12d00e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f00 @ 0x12d00f00 (289 bytes, 97 insns) */
void f_12d00f00(void) {
  FTRACE(0x12d00f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d00f00 push ebp */
  push32((uint32_t)(EBP));
  /* 12d00f01 mov ebp, esp */
  EBP = (ESP);
  /* 12d00f03 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d00f06 push esi */
  push32((uint32_t)(ESI));
  /* 12d00f07 mov eax, dword ptr [0x12d1fc98] */
  EAX = (r32((uint32_t)(0x12d1fc98)));
  /* 12d00f0c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d00f0f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d00f16 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d00f1d jmp 0x12d00f28 */
  goto L_12d00f28;
L_12d00f1f:;
  /* 12d00f1f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d00f22 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00f25 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12d00f28:;
  /* 12d00f28 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00f2c jae 0x12d00f61 */
  if (!C.cf) goto L_12d00f61;
  /* 12d00f2e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d00f31 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d00f34 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12d00f37 push ecx */
  push32((uint32_t)(ECX));
  /* 12d00f38 call 0x12cf6fe0 */
  push32(0x12d00f3du); f_12cf6fe0();
  /* 12d00f3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00f40 mov esi, eax */
  ESI = (EAX);
  /* 12d00f42 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d00f45 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d00f48 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 12d00f4c push ecx */
  push32((uint32_t)(ECX));
  /* 12d00f4d call 0x12cf6fe0 */
  push32(0x12d00f52u); f_12cf6fe0();
  /* 12d00f52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00f55 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00f58 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12d00f5c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d00f5f jmp 0x12d00f1f */
  goto L_12d00f1f;
L_12d00f61:;
  /* 12d00f61 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d00f64 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00f67 push eax */
  push32((uint32_t)(EAX));
  /* 12d00f68 call 0x12cf4190 */
  push32(0x12d00f6du); f_12cf4190();
  /* 12d00f6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00f70 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d00f73 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00f77 je 0x12d01019 */
  if (C.zf) goto L_12d01019;
  /* 12d00f7d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d00f80 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d00f83 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d00f8a jmp 0x12d00f95 */
  goto L_12d00f95;
L_12d00f8c:;
  /* 12d00f8c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d00f8f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00f92 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12d00f95:;
  /* 12d00f95 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d00f99 jae 0x12d0100a */
  if (!C.cf) goto L_12d0100a;
  /* 12d00f9b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d00f9e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12d00fa1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d00fa4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00fa7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d00faa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d00fad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d00fb0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12d00fb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12d00fb4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d00fb7 push edx */
  push32((uint32_t)(EDX));
  /* 12d00fb8 call 0x12cf7160 */
  push32(0x12d00fbdu); f_12cf7160();
  /* 12d00fbd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00fc0 push eax */
  push32((uint32_t)(EAX));
  /* 12d00fc1 call 0x12cf6fe0 */
  push32(0x12d00fc6u); f_12cf6fe0();
  /* 12d00fc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00fc9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d00fcc add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00fce mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d00fd1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d00fd4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12d00fd7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d00fda add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00fdd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d00fe0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d00fe3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d00fe6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 12d00fea push eax */
  push32((uint32_t)(EAX));
  /* 12d00feb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d00fee push ecx */
  push32((uint32_t)(ECX));
  /* 12d00fef call 0x12cf7160 */
  push32(0x12d00ff4u); f_12cf7160();
  /* 12d00ff4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d00ff7 push eax */
  push32((uint32_t)(EAX));
  /* 12d00ff8 call 0x12cf6fe0 */
  push32(0x12d00ffdu); f_12cf6fe0();
  /* 12d00ffd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01000 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d01003 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01005 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12d01008 jmp 0x12d00f8c */
  goto L_12d00f8c;
L_12d0100a:;
  /* 12d0100a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d0100d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12d01010 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d01013 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01016 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12d01019:;
  /* 12d01019 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d0101c pop esi */
  ESI = (pop32());
  /* 12d0101d mov esp, ebp */
  ESP = (EBP);
  /* 12d0101f pop ebp */
  EBP = (pop32());
  /* 12d01020 ret  */
  ESPCHK(0x12d00f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10011030 @ 0x12d01030 (291 bytes, 97 insns) */
void f_12d01030(void) {
  FTRACE(0x12d01030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d01030 push ebp */
  push32((uint32_t)(EBP));
  /* 12d01031 mov ebp, esp */
  EBP = (ESP);
  /* 12d01033 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d01036 push esi */
  push32((uint32_t)(ESI));
  /* 12d01037 mov eax, dword ptr [0x12d1fc98] */
  EAX = (r32((uint32_t)(0x12d1fc98)));
  /* 12d0103c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d0103f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d01046 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d0104d jmp 0x12d01058 */
  goto L_12d01058;
L_12d0104f:;
  /* 12d0104f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d01052 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01055 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12d01058:;
  /* 12d01058 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d0105c jae 0x12d01092 */
  if (!C.cf) goto L_12d01092;
  /* 12d0105e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d01061 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d01064 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12d01068 push ecx */
  push32((uint32_t)(ECX));
  /* 12d01069 call 0x12cf6fe0 */
  push32(0x12d0106eu); f_12cf6fe0();
  /* 12d0106e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01071 mov esi, eax */
  ESI = (EAX);
  /* 12d01073 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d01076 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d01079 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 12d0107d push ecx */
  push32((uint32_t)(ECX));
  /* 12d0107e call 0x12cf6fe0 */
  push32(0x12d01083u); f_12cf6fe0();
  /* 12d01083 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01086 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01089 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12d0108d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d01090 jmp 0x12d0104f */
  goto L_12d0104f;
L_12d01092:;
  /* 12d01092 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d01095 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01098 push eax */
  push32((uint32_t)(EAX));
  /* 12d01099 call 0x12cf4190 */
  push32(0x12d0109eu); f_12cf4190();
  /* 12d0109e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d010a1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d010a4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d010a8 je 0x12d0114b */
  if (C.zf) goto L_12d0114b;
  /* 12d010ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d010b1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d010b4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d010bb jmp 0x12d010c6 */
  goto L_12d010c6;
L_12d010bd:;
  /* 12d010bd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d010c0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d010c3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12d010c6:;
  /* 12d010c6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d010ca jae 0x12d0113c */
  if (!C.cf) goto L_12d0113c;
  /* 12d010cc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d010cf mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12d010d2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d010d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d010d8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d010db mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d010de mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d010e1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12d010e5 push ecx */
  push32((uint32_t)(ECX));
  /* 12d010e6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d010e9 push edx */
  push32((uint32_t)(EDX));
  /* 12d010ea call 0x12cf7160 */
  push32(0x12d010efu); f_12cf7160();
  /* 12d010ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d010f2 push eax */
  push32((uint32_t)(EAX));
  /* 12d010f3 call 0x12cf6fe0 */
  push32(0x12d010f8u); f_12cf6fe0();
  /* 12d010f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d010fb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d010fe add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01100 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12d01103 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d01106 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12d01109 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d0110c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0110f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d01112 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d01115 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d01118 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12d0111c push eax */
  push32((uint32_t)(EAX));
  /* 12d0111d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d01120 push ecx */
  push32((uint32_t)(ECX));
  /* 12d01121 call 0x12cf7160 */
  push32(0x12d01126u); f_12cf7160();
  /* 12d01126 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01129 push eax */
  push32((uint32_t)(EAX));
  /* 12d0112a call 0x12cf6fe0 */
  push32(0x12d0112fu); f_12cf6fe0();
  /* 12d0112f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01132 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d01135 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01137 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12d0113a jmp 0x12d010bd */
  goto L_12d010bd;
L_12d0113c:;
  /* 12d0113c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d0113f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12d01142 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d01145 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01148 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12d0114b:;
  /* 12d0114b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d0114e pop esi */
  ESI = (pop32());
  /* 12d0114f mov esp, ebp */
  ESP = (EBP);
  /* 12d01151 pop ebp */
  EBP = (pop32());
  /* 12d01152 ret  */
  ESPCHK(0x12d01030u, _esp0);
  ESP += 4; return;
}

/* FUN_10011160 @ 0x12d01160 (878 bytes, 273 insns) */
void f_12d01160(void) {
  FTRACE(0x12d01160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d01160 push ebp */
  push32((uint32_t)(EBP));
  /* 12d01161 mov ebp, esp */
  EBP = (ESP);
  /* 12d01163 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12d01166 push esi */
  push32((uint32_t)(ESI));
  /* 12d01167 mov eax, dword ptr [0x12d1fc98] */
  EAX = (r32((uint32_t)(0x12d1fc98)));
  /* 12d0116c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12d0116f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12d01176 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d0117d jmp 0x12d01188 */
  goto L_12d01188;
L_12d0117f:;
  /* 12d0117f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d01182 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01185 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12d01188:;
  /* 12d01188 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d0118c jae 0x12d011c1 */
  if (!C.cf) goto L_12d011c1;
  /* 12d0118e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d01191 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d01194 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12d01197 push ecx */
  push32((uint32_t)(ECX));
  /* 12d01198 call 0x12cf6fe0 */
  push32(0x12d0119du); f_12cf6fe0();
  /* 12d0119d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d011a0 mov esi, eax */
  ESI = (EAX);
  /* 12d011a2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d011a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d011a8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 12d011ac push ecx */
  push32((uint32_t)(ECX));
  /* 12d011ad call 0x12cf6fe0 */
  push32(0x12d011b2u); f_12cf6fe0();
  /* 12d011b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d011b5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d011b8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12d011bc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d011bf jmp 0x12d0117f */
  goto L_12d0117f;
L_12d011c1:;
  /* 12d011c1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d011c8 jmp 0x12d011d3 */
  goto L_12d011d3;
L_12d011ca:;
  /* 12d011ca mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d011cd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d011d0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12d011d3:;
  /* 12d011d3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d011d7 jae 0x12d0120d */
  if (!C.cf) goto L_12d0120d;
  /* 12d011d9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d011dc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d011df mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12d011e3 push eax */
  push32((uint32_t)(EAX));
  /* 12d011e4 call 0x12cf6fe0 */
  push32(0x12d011e9u); f_12cf6fe0();
  /* 12d011e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d011ec mov esi, eax */
  ESI = (EAX);
  /* 12d011ee mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d011f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d011f4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12d011f8 push eax */
  push32((uint32_t)(EAX));
  /* 12d011f9 call 0x12cf6fe0 */
  push32(0x12d011feu); f_12cf6fe0();
  /* 12d011fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01201 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01204 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12d01208 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12d0120b jmp 0x12d011ca */
  goto L_12d011ca;
L_12d0120d:;
  /* 12d0120d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d01210 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12d01216 push eax */
  push32((uint32_t)(EAX));
  /* 12d01217 call 0x12cf6fe0 */
  push32(0x12d0121cu); f_12cf6fe0();
  /* 12d0121c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0121f mov esi, eax */
  ESI = (EAX);
  /* 12d01221 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d01224 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 12d0122a push edx */
  push32((uint32_t)(EDX));
  /* 12d0122b call 0x12cf6fe0 */
  push32(0x12d01230u); f_12cf6fe0();
  /* 12d01230 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01233 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01236 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12d0123a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d0123d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d01240 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12d01246 push edx */
  push32((uint32_t)(EDX));
  /* 12d01247 call 0x12cf6fe0 */
  push32(0x12d0124cu); f_12cf6fe0();
  /* 12d0124c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0124f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d01252 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12d01256 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d01259 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d0125c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 12d01262 push ecx */
  push32((uint32_t)(ECX));
  /* 12d01263 call 0x12cf6fe0 */
  push32(0x12d01268u); f_12cf6fe0();
  /* 12d01268 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0126b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d0126e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12d01272 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12d01275 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d01278 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 12d0127e push edx */
  push32((uint32_t)(EDX));
  /* 12d0127f call 0x12cf6fe0 */
  push32(0x12d01284u); f_12cf6fe0();
  /* 12d01284 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01287 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d0128a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12d0128e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12d01291 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12d01294 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01299 push eax */
  push32((uint32_t)(EAX));
  /* 12d0129a call 0x12cf4190 */
  push32(0x12d0129fu); f_12cf4190();
  /* 12d0129f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d012a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12d012a5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d012a9 je 0x12d014c6 */
  if (C.zf) goto L_12d014c6;
  /* 12d012af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d012b2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12d012b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d012b8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d012be mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12d012c1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 12d012c6 mov eax, dword ptr [0x12d1fc98] */
  EAX = (r32((uint32_t)(0x12d1fc98)));
  /* 12d012cb push eax */
  push32((uint32_t)(EAX));
  /* 12d012cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d012cf push ecx */
  push32((uint32_t)(ECX));
  /* 12d012d0 call 0x12cfaa90 */
  push32(0x12d012d5u); f_12cfaa90();
  /* 12d012d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d012d8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d012df jmp 0x12d012ea */
  goto L_12d012ea;
L_12d012e1:;
  /* 12d012e1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d012e4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d012e7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12d012ea:;
  /* 12d012ea cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d012ee jae 0x12d0135e */
  if (!C.cf) goto L_12d0135e;
  /* 12d012f0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d012f3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d012f6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d012f9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 12d012fc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d012ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d01302 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12d01305 push edx */
  push32((uint32_t)(EDX));
  /* 12d01306 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d01309 push eax */
  push32((uint32_t)(EAX));
  /* 12d0130a call 0x12cf7160 */
  push32(0x12d0130fu); f_12cf7160();
  /* 12d0130f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01312 push eax */
  push32((uint32_t)(EAX));
  /* 12d01313 call 0x12cf6fe0 */
  push32(0x12d01318u); f_12cf6fe0();
  /* 12d01318 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0131b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d0131e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12d01322 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12d01325 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d01328 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d0132b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d0132e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 12d01332 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d01335 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d01338 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 12d0133c push edx */
  push32((uint32_t)(EDX));
  /* 12d0133d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d01340 push eax */
  push32((uint32_t)(EAX));
  /* 12d01341 call 0x12cf7160 */
  push32(0x12d01346u); f_12cf7160();
  /* 12d01346 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01349 push eax */
  push32((uint32_t)(EAX));
  /* 12d0134a call 0x12cf6fe0 */
  push32(0x12d0134fu); f_12cf6fe0();
  /* 12d0134f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01352 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d01355 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12d01359 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12d0135c jmp 0x12d012e1 */
  goto L_12d012e1;
L_12d0135e:;
  /* 12d0135e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12d01365 jmp 0x12d01370 */
  goto L_12d01370;
L_12d01367:;
  /* 12d01367 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d0136a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0136d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12d01370:;
  /* 12d01370 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12d01374 jae 0x12d013e6 */
  if (!C.cf) goto L_12d013e6;
  /* 12d01376 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d01379 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d0137c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d0137f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 12d01383 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d01386 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d01389 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12d0138d push eax */
  push32((uint32_t)(EAX));
  /* 12d0138e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d01391 push ecx */
  push32((uint32_t)(ECX));
  /* 12d01392 call 0x12cf7160 */
  push32(0x12d01397u); f_12cf7160();
  /* 12d01397 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0139a push eax */
  push32((uint32_t)(EAX));
  /* 12d0139b call 0x12cf6fe0 */
  push32(0x12d013a0u); f_12cf6fe0();
  /* 12d013a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d013a3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d013a6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12d013aa mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d013ad mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d013b0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d013b3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d013b6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 12d013ba mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12d013bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d013c0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12d013c4 push eax */
  push32((uint32_t)(EAX));
  /* 12d013c5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d013c8 push ecx */
  push32((uint32_t)(ECX));
  /* 12d013c9 call 0x12cf7160 */
  push32(0x12d013ceu); f_12cf7160();
  /* 12d013ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d013d1 push eax */
  push32((uint32_t)(EAX));
  /* 12d013d2 call 0x12cf6fe0 */
  push32(0x12d013d7u); f_12cf6fe0();
  /* 12d013d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d013da mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d013dd lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12d013e1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d013e4 jmp 0x12d01367 */
  goto L_12d01367;
L_12d013e6:;
  /* 12d013e6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d013e9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d013ec mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 12d013f2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d013f5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 12d013fb push ecx */
  push32((uint32_t)(ECX));
  /* 12d013fc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d013ff push edx */
  push32((uint32_t)(EDX));
  /* 12d01400 call 0x12cf7160 */
  push32(0x12d01405u); f_12cf7160();
  /* 12d01405 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01408 push eax */
  push32((uint32_t)(EAX));
  /* 12d01409 call 0x12cf6fe0 */
  push32(0x12d0140eu); f_12cf6fe0();
  /* 12d0140e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01411 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d01414 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12d01418 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12d0141b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d0141e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d01421 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 12d01427 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d0142a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12d01430 push eax */
  push32((uint32_t)(EAX));
  /* 12d01431 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d01434 push ecx */
  push32((uint32_t)(ECX));
  /* 12d01435 call 0x12cf7160 */
  push32(0x12d0143au); f_12cf7160();
  /* 12d0143a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0143d push eax */
  push32((uint32_t)(EAX));
  /* 12d0143e call 0x12cf6fe0 */
  push32(0x12d01443u); f_12cf6fe0();
  /* 12d01443 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01446 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d01449 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12d0144d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d01450 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d01453 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d01456 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 12d0145c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d0145f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 12d01465 push ecx */
  push32((uint32_t)(ECX));
  /* 12d01466 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d01469 push edx */
  push32((uint32_t)(EDX));
  /* 12d0146a call 0x12cf7160 */
  push32(0x12d0146fu); f_12cf7160();
  /* 12d0146f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d01472 push eax */
  push32((uint32_t)(EAX));
  /* 12d01473 call 0x12cf6fe0 */
  push32(0x12d01478u); f_12cf6fe0();
  /* 12d01478 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d0147b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d0147e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12d01482 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12d01485 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d01488 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d0148b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 12d01491 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12d01494 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 12d0149a push eax */
  push32((uint32_t)(EAX));
  /* 12d0149b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d0149e push ecx */
  push32((uint32_t)(ECX));
  /* 12d0149f call 0x12cf7160 */
  push32(0x12d014a4u); f_12cf7160();
  /* 12d014a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d014a7 push eax */
  push32((uint32_t)(EAX));
  /* 12d014a8 call 0x12cf6fe0 */
  push32(0x12d014adu); f_12cf6fe0();
  /* 12d014ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d014b0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d014b3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12d014b7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12d014ba mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12d014bd mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12d014c0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_12d014c6:;
  /* 12d014c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12d014c9 pop esi */
  ESI = (pop32());
  /* 12d014ca mov esp, ebp */
  ESP = (EBP);
  /* 12d014cc pop ebp */
  EBP = (pop32());
  /* 12d014cd ret  */
  ESPCHK(0x12d01160u, _esp0);
  ESP += 4; return;
}

/* FUN_100114d0 @ 0x12d014d0 (31 bytes, 15 insns) */
void f_12d014d0(void) {
  FTRACE(0x12d014d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12d014d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12d014d1 mov ebp, esp */
  EBP = (ESP);
  /* 12d014d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12d014d5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12d014d8 push eax */
  push32((uint32_t)(EAX));
  /* 12d014d9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12d014dc push ecx */
  push32((uint32_t)(ECX));
  /* 12d014dd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12d014e0 push edx */
  push32((uint32_t)(EDX));
  /* 12d014e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12d014e4 push eax */
  push32((uint32_t)(EAX));
  /* 12d014e5 call 0x12d014f0 */
  push32(0x12d014eau); f_12d014f0();
  /* 12d014ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12d014ed pop ebp */
  EBP = (pop32());
  /* 12d014ee ret  */
  ESPCHK(0x12d014d0u, _esp0);
  ESP += 4; return;
}

