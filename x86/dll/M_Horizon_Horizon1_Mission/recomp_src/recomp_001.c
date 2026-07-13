#include "recomp.h"

/* FUN_10008420 @ 0x12cb8420 (10 bytes, 5 insns) */
void f_12cb8420(void) {
  FTRACE(0x12cb8420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb8420 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb8421 mov ebp, esp */
  EBP = (ESP);
  /* 12cb8423 mov eax, dword ptr [0x12cdec94] */
  EAX = (r32((uint32_t)(0x12cdec94)));
  /* 12cb8428 pop ebp */
  EBP = (pop32());
  /* 12cb8429 ret  */
  ESPCHK(0x12cb8420u, _esp0);
  ESP += 4; return;
}

/* FUN_10008430 @ 0x12cb8430 (31 bytes, 11 insns) */
void f_12cb8430(void) {
  FTRACE(0x12cb8430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb8430 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb8431 mov ebp, esp */
  EBP = (ESP);
  /* 12cb8433 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb843a jbe 0x12cb8440 */
  if ((C.cf||C.zf)) goto L_12cb8440;
  /* 12cb843c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb843e jmp 0x12cb844d */
  goto L_12cb844d;
L_12cb8440:;
  /* 12cb8440 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb8443 mov dword ptr [0x12cdec94], eax */
  w32((uint32_t)(0x12cdec94), (EAX));
  /* 12cb8448 mov eax, 1 */
  EAX = (0x1u);
L_12cb844d:;
  /* 12cb844d pop ebp */
  EBP = (pop32());
  /* 12cb844e ret  */
  ESPCHK(0x12cb8430u, _esp0);
  ESP += 4; return;
}

/* FUN_10008450 @ 0x12cb8450 (89 bytes, 20 insns) */
void f_12cb8450(void) {
  FTRACE(0x12cb8450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb8450 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb8451 mov ebp, esp */
  EBP = (ESP);
  /* 12cb8453 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 12cb8458 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb845a mov eax, dword ptr [0x12ce1ecc] */
  EAX = (r32((uint32_t)(0x12ce1ecc)));
  /* 12cb845f push eax */
  push32((uint32_t)(EAX));
  /* 12cb8460 call dword ptr [0x12ce32ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32ec))), 0x12cb8466u);
  /* 12cb8466 mov dword ptr [0x12ce1ec8], eax */
  w32((uint32_t)(0x12ce1ec8), (EAX));
  /* 12cb846b cmp dword ptr [0x12ce1ec8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce1ec8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb8472 jne 0x12cb8478 */
  if (!C.zf) goto L_12cb8478;
  /* 12cb8474 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb8476 jmp 0x12cb84a7 */
  goto L_12cb84a7;
L_12cb8478:;
  /* 12cb8478 mov ecx, dword ptr [0x12ce1ec8] */
  ECX = (r32((uint32_t)(0x12ce1ec8)));
  /* 12cb847e mov dword ptr [0x12ce1ebc], ecx */
  w32((uint32_t)(0x12ce1ebc), (ECX));
  /* 12cb8484 mov dword ptr [0x12ce1ec0], 0 */
  w32((uint32_t)(0x12ce1ec0), (0x0u));
  /* 12cb848e mov dword ptr [0x12ce1ec4], 0 */
  w32((uint32_t)(0x12ce1ec4), (0x0u));
  /* 12cb8498 mov dword ptr [0x12ce1ea8], 0x10 */
  w32((uint32_t)(0x12ce1ea8), (0x10u));
  /* 12cb84a2 mov eax, 1 */
  EAX = (0x1u);
L_12cb84a7:;
  /* 12cb84a7 pop ebp */
  EBP = (pop32());
  /* 12cb84a8 ret  */
  ESPCHK(0x12cb8450u, _esp0);
  ESP += 4; return;
}

/* FUN_100084b0 @ 0x12cb84b0 (85 bytes, 29 insns) */
void f_12cb84b0(void) {
  FTRACE(0x12cb84b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb84b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb84b1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb84b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb84b6 mov eax, dword ptr [0x12ce1ec4] */
  EAX = (r32((uint32_t)(0x12ce1ec4)));
  /* 12cb84bb imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cb84be mov ecx, dword ptr [0x12ce1ec8] */
  ECX = (r32((uint32_t)(0x12ce1ec8)));
  /* 12cb84c4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb84c6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cb84c9 mov edx, dword ptr [0x12ce1ec8] */
  EDX = (r32((uint32_t)(0x12ce1ec8)));
  /* 12cb84cf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12cb84d2:;
  /* 12cb84d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb84d5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb84d8 jae 0x12cb84ff */
  if (!C.cf) goto L_12cb84ff;
  /* 12cb84da mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb84dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb84e0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb84e3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cb84e6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb84ed jae 0x12cb84f4 */
  if (!C.cf) goto L_12cb84f4;
  /* 12cb84ef mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb84f2 jmp 0x12cb8501 */
  goto L_12cb8501;
L_12cb84f4:;
  /* 12cb84f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb84f7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb84fa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cb84fd jmp 0x12cb84d2 */
  goto L_12cb84d2;
L_12cb84ff:;
  /* 12cb84ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cb8501:;
  /* 12cb8501 mov esp, ebp */
  ESP = (EBP);
  /* 12cb8503 pop ebp */
  EBP = (pop32());
  /* 12cb8504 ret  */
  ESPCHK(0x12cb84b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008510 @ 0x12cb8510 (95 bytes, 33 insns) */
void f_12cb8510(void) {
  FTRACE(0x12cb8510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb8510 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb8511 mov ebp, esp */
  EBP = (ESP);
  /* 12cb8513 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb8516 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb8519 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb851c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb851f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cb8522 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb8525 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12cb8528 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cb852b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12cb8530 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb8533 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12cb8535 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb8538 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12cb853b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb853d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb853f jne 0x12cb8561 */
  if (!C.zf) goto L_12cb8561;
  /* 12cb8541 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb8544 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb8547 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb8549 jne 0x12cb8561 */
  if (!C.zf) goto L_12cb8561;
  /* 12cb854b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb854e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cb8554 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb8556 je 0x12cb8561 */
  if (C.zf) goto L_12cb8561;
  /* 12cb8558 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 12cb855f jmp 0x12cb8568 */
  goto L_12cb8568;
L_12cb8561:;
  /* 12cb8561 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12cb8568:;
  /* 12cb8568 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb856b mov esp, ebp */
  ESP = (EBP);
  /* 12cb856d pop ebp */
  EBP = (pop32());
  /* 12cb856e ret  */
  ESPCHK(0x12cb8510u, _esp0);
  ESP += 4; return;
}

/* FUN_10008570 @ 0x12cb8570 (1485 bytes, 453 insns) */
void f_12cb8570(void) {
  FTRACE(0x12cb8570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb8570 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb8571 mov ebp, esp */
  EBP = (ESP);
  /* 12cb8573 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb8576 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb8579 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12cb857c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 12cb857f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb8582 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb8585 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb8588 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12cb858b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb858e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 12cb8591 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cb8594 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb8597 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cb859d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cb85a0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 12cb85a7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cb85aa mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb85ad sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb85b0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12cb85b3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cb85b6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cb85b8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb85bb mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12cb85be mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cb85c1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb85c4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 12cb85c7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cb85ca mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cb85cc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12cb85cf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cb85d2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12cb85d5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cb85d8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb85db and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12cb85de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb85e0 jne 0x12cb8708 */
  if (!C.zf) goto L_12cb8708;
  /* 12cb85e6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb85e9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12cb85ec sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb85ef mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12cb85f2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb85f6 jbe 0x12cb85ff */
  if ((C.cf||C.zf)) goto L_12cb85ff;
  /* 12cb85f8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12cb85ff:;
  /* 12cb85ff mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cb8602 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cb8605 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cb8608 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb860b jne 0x12cb86e1 */
  if (!C.zf) goto L_12cb86e1;
  /* 12cb8611 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb8615 jae 0x12cb8676 */
  if (!C.cf) goto L_12cb8676;
  /* 12cb8617 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12cb861c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cb861f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12cb8621 not eax */
  EAX = (~(EAX));
  /* 12cb8623 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb8626 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cb8629 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12cb862d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb862f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb8632 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cb8635 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12cb8639 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cb863c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb863f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12cb8642 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12cb8645 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cb8648 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb864b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12cb864e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cb8651 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8654 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12cb8658 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb865a jne 0x12cb8674 */
  if (!C.zf) goto L_12cb8674;
  /* 12cb865c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12cb8661 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cb8664 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12cb8666 not eax */
  EAX = (~(EAX));
  /* 12cb8668 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb866b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cb866d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb866f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb8672 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12cb8674:;
  /* 12cb8674 jmp 0x12cb86e1 */
  goto L_12cb86e1;
L_12cb8676:;
  /* 12cb8676 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cb8679 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb867c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cb8681 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cb8683 not edx */
  EDX = (~(EDX));
  /* 12cb8685 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb8688 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cb868b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12cb8692 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb8694 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb8697 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cb869a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 12cb86a1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cb86a4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb86a7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12cb86aa sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12cb86ad mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cb86b0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb86b3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12cb86b6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cb86b9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb86bc movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12cb86c0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb86c2 jne 0x12cb86e1 */
  if (!C.zf) goto L_12cb86e1;
  /* 12cb86c4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cb86c7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb86ca mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cb86cf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cb86d1 not edx */
  EDX = (~(EDX));
  /* 12cb86d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb86d6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cb86d9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb86db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb86de mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12cb86e1:;
  /* 12cb86e1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cb86e4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12cb86e7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cb86ea mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12cb86ed mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12cb86f0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cb86f3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cb86f6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cb86f9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12cb86fc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12cb86ff mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb8702 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8705 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_12cb8708:;
  /* 12cb8708 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb870b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12cb870e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb8711 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12cb8714 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb8718 jbe 0x12cb8721 */
  if ((C.cf||C.zf)) goto L_12cb8721;
  /* 12cb871a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12cb8721:;
  /* 12cb8721 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb8724 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12cb8727 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb8729 jne 0x12cb8885 */
  if (!C.zf) goto L_12cb8885;
  /* 12cb872f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cb8732 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb8735 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 12cb8738 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb873b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12cb873e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb8741 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12cb8744 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb8748 jbe 0x12cb8751 */
  if ((C.cf||C.zf)) goto L_12cb8751;
  /* 12cb874a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_12cb8751:;
  /* 12cb8751 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb8754 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8757 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12cb875a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb875d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12cb8760 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb8763 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12cb8766 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb876a jbe 0x12cb8773 */
  if ((C.cf||C.zf)) goto L_12cb8773;
  /* 12cb876c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12cb8773:;
  /* 12cb8773 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cb8776 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb8779 je 0x12cb887f */
  if (C.zf) goto L_12cb887f;
  /* 12cb877f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12cb8782 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12cb8785 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cb8788 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb878b jne 0x12cb8861 */
  if (!C.zf) goto L_12cb8861;
  /* 12cb8791 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb8795 jae 0x12cb87f6 */
  if (!C.cf) goto L_12cb87f6;
  /* 12cb8797 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cb879c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cb879f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cb87a1 not edx */
  EDX = (~(EDX));
  /* 12cb87a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb87a6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cb87a9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12cb87ad and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb87af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb87b2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cb87b5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12cb87b9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cb87bc add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb87bf mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12cb87c2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12cb87c5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cb87c8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb87cb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12cb87ce mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cb87d1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb87d4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12cb87d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb87da jne 0x12cb87f4 */
  if (!C.zf) goto L_12cb87f4;
  /* 12cb87dc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cb87e1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cb87e4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cb87e6 not edx */
  EDX = (~(EDX));
  /* 12cb87e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb87eb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cb87ed and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb87ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb87f2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12cb87f4:;
  /* 12cb87f4 jmp 0x12cb8861 */
  goto L_12cb8861;
L_12cb87f6:;
  /* 12cb87f6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cb87f9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb87fc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12cb8801 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12cb8803 not eax */
  EAX = (~(EAX));
  /* 12cb8805 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb8808 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cb880b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12cb8812 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb8814 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb8817 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cb881a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12cb8821 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cb8824 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8827 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12cb882a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12cb882d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cb8830 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8833 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12cb8836 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cb8839 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb883c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12cb8840 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb8842 jne 0x12cb8861 */
  if (!C.zf) goto L_12cb8861;
  /* 12cb8844 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cb8847 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb884a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12cb884f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12cb8851 not eax */
  EAX = (~(EAX));
  /* 12cb8853 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb8856 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cb8859 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb885b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb885e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12cb8861:;
  /* 12cb8861 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12cb8864 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12cb8867 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12cb886a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cb886d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12cb8870 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12cb8873 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12cb8876 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12cb8879 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12cb887c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_12cb887f:;
  /* 12cb887f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12cb8882 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_12cb8885:;
  /* 12cb8885 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb8888 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12cb888b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb888d jne 0x12cb889b */
  if (!C.zf) goto L_12cb889b;
  /* 12cb888f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cb8892 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb8895 je 0x12cb89ab */
  if (C.zf) goto L_12cb89ab;
L_12cb889b:;
  /* 12cb889b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cb889e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb88a1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12cb88a4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12cb88a7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cb88aa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cb88ad mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cb88b0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12cb88b3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cb88b6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cb88b9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12cb88bc mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cb88bf mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cb88c2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12cb88c5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cb88c8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cb88cb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cb88ce mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12cb88d1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cb88d4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cb88d7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cb88da cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb88dd jne 0x12cb89ab */
  if (!C.zf) goto L_12cb89ab;
  /* 12cb88e3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb88e7 jae 0x12cb8944 */
  if (!C.cf) goto L_12cb8944;
  /* 12cb88e9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cb88ec add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb88ef movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12cb88f3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cb88f6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb88f9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12cb88fc add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12cb88ff mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cb8902 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8905 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12cb8908 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb890a jne 0x12cb8922 */
  if (!C.zf) goto L_12cb8922;
  /* 12cb890c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cb8911 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cb8914 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cb8916 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb8919 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cb891b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb891d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb8920 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12cb8922:;
  /* 12cb8922 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12cb8927 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cb892a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12cb892c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb892f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cb8932 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12cb8936 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb8938 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb893b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cb893e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12cb8942 jmp 0x12cb89ab */
  goto L_12cb89ab;
L_12cb8944:;
  /* 12cb8944 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cb8947 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb894a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12cb894e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cb8951 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8954 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12cb8957 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12cb895a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cb895d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8960 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12cb8963 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb8965 jne 0x12cb8982 */
  if (!C.zf) goto L_12cb8982;
  /* 12cb8967 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cb896a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb896d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cb8972 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cb8974 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb8977 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cb897a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb897c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb897f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12cb8982:;
  /* 12cb8982 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cb8985 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb8988 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12cb898d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12cb898f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb8992 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cb8995 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12cb899c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb899e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb89a1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12cb89a4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12cb89ab:;
  /* 12cb89ab mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cb89ae mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb89b1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12cb89b3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cb89b6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb89b9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb89bc mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 12cb89bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb89c2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cb89c4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb89c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb89ca mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12cb89cc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb89cf cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb89d2 jne 0x12cb8b39 */
  if (!C.zf) goto L_12cb8b39;
  /* 12cb89d8 cmp dword ptr [0x12ce1ec0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce1ec0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb89df je 0x12cb8b28 */
  if (C.zf) goto L_12cb8b28;
  /* 12cb89e5 mov eax, dword ptr [0x12ce1eb8] */
  EAX = (r32((uint32_t)(0x12ce1eb8)));
  /* 12cb89ea shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 12cb89ed mov ecx, dword ptr [0x12ce1ec0] */
  ECX = (r32((uint32_t)(0x12ce1ec0)));
  /* 12cb89f3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12cb89f6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb89f8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12cb89fb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12cb8a00 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12cb8a05 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb8a08 push eax */
  push32((uint32_t)(EAX));
  /* 12cb8a09 call dword ptr [0x12ce3388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3388))), 0x12cb8a0fu);
  /* 12cb8a0f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cb8a14 mov ecx, dword ptr [0x12ce1eb8] */
  ECX = (r32((uint32_t)(0x12ce1eb8)));
  /* 12cb8a1a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cb8a1c mov eax, dword ptr [0x12ce1ec0] */
  EAX = (r32((uint32_t)(0x12ce1ec0)));
  /* 12cb8a21 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12cb8a24 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb8a26 mov edx, dword ptr [0x12ce1ec0] */
  EDX = (r32((uint32_t)(0x12ce1ec0)));
  /* 12cb8a2c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12cb8a2f mov eax, dword ptr [0x12ce1ec0] */
  EAX = (r32((uint32_t)(0x12ce1ec0)));
  /* 12cb8a34 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12cb8a37 mov edx, dword ptr [0x12ce1eb8] */
  EDX = (r32((uint32_t)(0x12ce1eb8)));
  /* 12cb8a3d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12cb8a48 mov eax, dword ptr [0x12ce1ec0] */
  EAX = (r32((uint32_t)(0x12ce1ec0)));
  /* 12cb8a4d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12cb8a50 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 12cb8a53 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12cb8a56 mov eax, dword ptr [0x12ce1ec0] */
  EAX = (r32((uint32_t)(0x12ce1ec0)));
  /* 12cb8a5b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12cb8a5e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 12cb8a61 mov edx, dword ptr [0x12ce1ec0] */
  EDX = (r32((uint32_t)(0x12ce1ec0)));
  /* 12cb8a67 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12cb8a6a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 12cb8a6e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb8a70 jne 0x12cb8a86 */
  if (!C.zf) goto L_12cb8a86;
  /* 12cb8a72 mov edx, dword ptr [0x12ce1ec0] */
  EDX = (r32((uint32_t)(0x12ce1ec0)));
  /* 12cb8a78 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12cb8a7b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 12cb8a7d mov ecx, dword ptr [0x12ce1ec0] */
  ECX = (r32((uint32_t)(0x12ce1ec0)));
  /* 12cb8a83 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12cb8a86:;
  /* 12cb8a86 mov edx, dword ptr [0x12ce1ec0] */
  EDX = (r32((uint32_t)(0x12ce1ec0)));
  /* 12cb8a8c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb8a90 jne 0x12cb8b28 */
  if (!C.zf) goto L_12cb8b28;
  /* 12cb8a96 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12cb8a9b push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb8a9d mov eax, dword ptr [0x12ce1ec0] */
  EAX = (r32((uint32_t)(0x12ce1ec0)));
  /* 12cb8aa2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12cb8aa5 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb8aa6 call dword ptr [0x12ce3388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3388))), 0x12cb8aacu);
  /* 12cb8aac mov edx, dword ptr [0x12ce1ec0] */
  EDX = (r32((uint32_t)(0x12ce1ec0)));
  /* 12cb8ab2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12cb8ab5 push eax */
  push32((uint32_t)(EAX));
  /* 12cb8ab6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb8ab8 mov ecx, dword ptr [0x12ce1ecc] */
  ECX = (r32((uint32_t)(0x12ce1ecc)));
  /* 12cb8abe push ecx */
  push32((uint32_t)(ECX));
  /* 12cb8abf call dword ptr [0x12ce3384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3384))), 0x12cb8ac5u);
  /* 12cb8ac5 mov edx, dword ptr [0x12ce1ec4] */
  EDX = (r32((uint32_t)(0x12ce1ec4)));
  /* 12cb8acb imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cb8ace mov eax, dword ptr [0x12ce1ec8] */
  EAX = (r32((uint32_t)(0x12ce1ec8)));
  /* 12cb8ad3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8ad5 mov ecx, dword ptr [0x12ce1ec0] */
  ECX = (r32((uint32_t)(0x12ce1ec0)));
  /* 12cb8adb add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8ade sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb8ae0 push eax */
  push32((uint32_t)(EAX));
  /* 12cb8ae1 mov edx, dword ptr [0x12ce1ec0] */
  EDX = (r32((uint32_t)(0x12ce1ec0)));
  /* 12cb8ae7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8aea push edx */
  push32((uint32_t)(EDX));
  /* 12cb8aeb mov eax, dword ptr [0x12ce1ec0] */
  EAX = (r32((uint32_t)(0x12ce1ec0)));
  /* 12cb8af0 push eax */
  push32((uint32_t)(EAX));
  /* 12cb8af1 call 0x12cbc0a0 */
  push32(0x12cb8af6u); f_12cbc0a0();
  /* 12cb8af6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8af9 mov ecx, dword ptr [0x12ce1ec4] */
  ECX = (r32((uint32_t)(0x12ce1ec4)));
  /* 12cb8aff sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb8b02 mov dword ptr [0x12ce1ec4], ecx */
  w32((uint32_t)(0x12ce1ec4), (ECX));
  /* 12cb8b08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb8b0b cmp edx, dword ptr [0x12ce1ec0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12ce1ec0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb8b11 jbe 0x12cb8b1c */
  if ((C.cf||C.zf)) goto L_12cb8b1c;
  /* 12cb8b13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb8b16 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb8b19 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12cb8b1c:;
  /* 12cb8b1c mov ecx, dword ptr [0x12ce1ec8] */
  ECX = (r32((uint32_t)(0x12ce1ec8)));
  /* 12cb8b22 mov dword ptr [0x12ce1ebc], ecx */
  w32((uint32_t)(0x12ce1ebc), (ECX));
L_12cb8b28:;
  /* 12cb8b28 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb8b2b mov dword ptr [0x12ce1ec0], edx */
  w32((uint32_t)(0x12ce1ec0), (EDX));
  /* 12cb8b31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb8b34 mov dword ptr [0x12ce1eb8], eax */
  w32((uint32_t)(0x12ce1eb8), (EAX));
L_12cb8b39:;
  /* 12cb8b39 mov esp, ebp */
  ESP = (EBP);
  /* 12cb8b3b pop ebp */
  EBP = (pop32());
  /* 12cb8b3c ret  */
  ESPCHK(0x12cb8570u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b40 @ 0x12cb8b40 (1334 bytes, 427 insns) */
void f_12cb8b40(void) {
  FTRACE(0x12cb8b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb8b40 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb8b41 mov ebp, esp */
  EBP = (ESP);
  /* 12cb8b43 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb8b46 push esi */
  push32((uint32_t)(ESI));
  /* 12cb8b47 mov eax, dword ptr [0x12ce1ec4] */
  EAX = (r32((uint32_t)(0x12ce1ec4)));
  /* 12cb8b4c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cb8b4f mov ecx, dword ptr [0x12ce1ec8] */
  ECX = (r32((uint32_t)(0x12ce1ec8)));
  /* 12cb8b55 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8b57 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12cb8b5a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb8b5d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8b60 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12cb8b63 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12cb8b66 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cb8b69 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12cb8b6c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb8b6f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12cb8b72 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb8b76 jge 0x12cb8b8c */
  if ((C.sf==C.of)) goto L_12cb8b8c;
  /* 12cb8b78 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cb8b7b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cb8b7e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cb8b80 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12cb8b83 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 12cb8b8a jmp 0x12cb8ba1 */
  goto L_12cb8ba1;
L_12cb8b8c:;
  /* 12cb8b8c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12cb8b93 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cb8b96 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb8b99 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb8b9c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12cb8b9e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_12cb8ba1:;
  /* 12cb8ba1 mov ecx, dword ptr [0x12ce1ebc] */
  ECX = (r32((uint32_t)(0x12ce1ebc)));
  /* 12cb8ba7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12cb8baa:;
  /* 12cb8baa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb8bad cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb8bb0 jae 0x12cb8bd6 */
  if (!C.cf) goto L_12cb8bd6;
  /* 12cb8bb2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb8bb5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cb8bb8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 12cb8bba mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb8bbd mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12cb8bc0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 12cb8bc3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb8bc5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb8bc7 je 0x12cb8bcb */
  if (C.zf) goto L_12cb8bcb;
  /* 12cb8bc9 jmp 0x12cb8bd6 */
  goto L_12cb8bd6;
L_12cb8bcb:;
  /* 12cb8bcb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb8bce add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8bd1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12cb8bd4 jmp 0x12cb8baa */
  goto L_12cb8baa;
L_12cb8bd6:;
  /* 12cb8bd6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb8bd9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb8bdc jne 0x12cb8cbd */
  if (!C.zf) goto L_12cb8cbd;
  /* 12cb8be2 mov eax, dword ptr [0x12ce1ec8] */
  EAX = (r32((uint32_t)(0x12ce1ec8)));
  /* 12cb8be7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12cb8bea:;
  /* 12cb8bea mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb8bed cmp ecx, dword ptr [0x12ce1ebc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12ce1ebc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb8bf3 jae 0x12cb8c19 */
  if (!C.cf) goto L_12cb8c19;
  /* 12cb8bf5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb8bf8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cb8bfb and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 12cb8bfd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb8c00 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12cb8c03 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12cb8c06 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb8c08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb8c0a je 0x12cb8c0e */
  if (C.zf) goto L_12cb8c0e;
  /* 12cb8c0c jmp 0x12cb8c19 */
  goto L_12cb8c19;
L_12cb8c0e:;
  /* 12cb8c0e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb8c11 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8c14 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12cb8c17 jmp 0x12cb8bea */
  goto L_12cb8bea;
L_12cb8c19:;
  /* 12cb8c19 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb8c1c cmp ecx, dword ptr [0x12ce1ebc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12ce1ebc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb8c22 jne 0x12cb8cbd */
  if (!C.zf) goto L_12cb8cbd;
L_12cb8c28:;
  /* 12cb8c28 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb8c2b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb8c2e jae 0x12cb8c46 */
  if (!C.cf) goto L_12cb8c46;
  /* 12cb8c30 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb8c33 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb8c37 je 0x12cb8c3b */
  if (C.zf) goto L_12cb8c3b;
  /* 12cb8c39 jmp 0x12cb8c46 */
  goto L_12cb8c46;
L_12cb8c3b:;
  /* 12cb8c3b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb8c3e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8c41 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12cb8c44 jmp 0x12cb8c28 */
  goto L_12cb8c28;
L_12cb8c46:;
  /* 12cb8c46 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb8c49 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb8c4c jne 0x12cb8c97 */
  if (!C.zf) goto L_12cb8c97;
  /* 12cb8c4e mov eax, dword ptr [0x12ce1ec8] */
  EAX = (r32((uint32_t)(0x12ce1ec8)));
  /* 12cb8c53 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12cb8c56:;
  /* 12cb8c56 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb8c59 cmp ecx, dword ptr [0x12ce1ebc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12ce1ebc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb8c5f jae 0x12cb8c77 */
  if (!C.cf) goto L_12cb8c77;
  /* 12cb8c61 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb8c64 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb8c68 je 0x12cb8c6c */
  if (C.zf) goto L_12cb8c6c;
  /* 12cb8c6a jmp 0x12cb8c77 */
  goto L_12cb8c77;
L_12cb8c6c:;
  /* 12cb8c6c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb8c6f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8c72 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12cb8c75 jmp 0x12cb8c56 */
  goto L_12cb8c56;
L_12cb8c77:;
  /* 12cb8c77 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb8c7a cmp ecx, dword ptr [0x12ce1ebc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12ce1ebc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb8c80 jne 0x12cb8c97 */
  if (!C.zf) goto L_12cb8c97;
  /* 12cb8c82 call 0x12cb9080 */
  push32(0x12cb8c87u); f_12cb9080();
  /* 12cb8c87 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12cb8c8a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb8c8e jne 0x12cb8c97 */
  if (!C.zf) goto L_12cb8c97;
  /* 12cb8c90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb8c92 jmp 0x12cb9071 */
  goto L_12cb9071;
L_12cb8c97:;
  /* 12cb8c97 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb8c9a push edx */
  push32((uint32_t)(EDX));
  /* 12cb8c9b call 0x12cb9190 */
  push32(0x12cb8ca0u); f_12cb9190();
  /* 12cb8ca0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8ca3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb8ca6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12cb8ca9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12cb8cab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb8cae mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12cb8cb1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb8cb4 jne 0x12cb8cbd */
  if (!C.zf) goto L_12cb8cbd;
  /* 12cb8cb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb8cb8 jmp 0x12cb9071 */
  goto L_12cb9071;
L_12cb8cbd:;
  /* 12cb8cbd mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb8cc0 mov dword ptr [0x12ce1ebc], edx */
  w32((uint32_t)(0x12ce1ebc), (EDX));
  /* 12cb8cc6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb8cc9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12cb8ccc mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 12cb8ccf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cb8cd2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cb8cd4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12cb8cd7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb8cdb je 0x12cb8d00 */
  if (C.zf) goto L_12cb8d00;
  /* 12cb8cdd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb8ce0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cb8ce3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cb8ce6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 12cb8cea mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb8ced mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cb8cf0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 12cb8cf3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 12cb8cfa or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12cb8cfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb8cfe jne 0x12cb8d35 */
  if (!C.zf) goto L_12cb8d35;
L_12cb8d00:;
  /* 12cb8d00 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_12cb8d07:;
  /* 12cb8d07 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb8d0a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cb8d0d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cb8d10 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 12cb8d14 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb8d17 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cb8d1a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 12cb8d1d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 12cb8d24 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 12cb8d26 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb8d28 jne 0x12cb8d35 */
  if (!C.zf) goto L_12cb8d35;
  /* 12cb8d2a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb8d2d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8d30 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12cb8d33 jmp 0x12cb8d07 */
  goto L_12cb8d07;
L_12cb8d35:;
  /* 12cb8d35 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb8d38 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cb8d3e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cb8d41 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12cb8d48 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cb8d4b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12cb8d52 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb8d55 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cb8d58 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cb8d5b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 12cb8d5f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12cb8d62 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb8d66 jne 0x12cb8d82 */
  if (!C.zf) goto L_12cb8d82;
  /* 12cb8d68 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 12cb8d6f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb8d72 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cb8d75 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12cb8d78 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 12cb8d7f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_12cb8d82:;
  /* 12cb8d82 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb8d86 jl 0x12cb8d9b */
  if ((C.sf!=C.of)) goto L_12cb8d9b;
  /* 12cb8d88 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cb8d8b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12cb8d8d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12cb8d90 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cb8d93 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8d96 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12cb8d99 jmp 0x12cb8d82 */
  goto L_12cb8d82;
L_12cb8d9b:;
  /* 12cb8d9b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cb8d9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb8da1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 12cb8da5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12cb8da8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb8dab mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cb8dad sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb8db0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cb8db3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb8db6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12cb8db9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb8dbc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12cb8dbf cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb8dc3 jle 0x12cb8dcc */
  if ((C.zf||C.sf!=C.of)) goto L_12cb8dcc;
  /* 12cb8dc5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_12cb8dcc:;
  /* 12cb8dcc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb8dcf cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb8dd2 je 0x12cb8ff0 */
  if (C.zf) goto L_12cb8ff0;
  /* 12cb8dd8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb8ddb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb8dde mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cb8de1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb8de4 jne 0x12cb8eba */
  if (!C.zf) goto L_12cb8eba;
  /* 12cb8dea cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb8dee jge 0x12cb8e4f */
  if ((C.sf==C.of)) goto L_12cb8e4f;
  /* 12cb8df0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12cb8df5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cb8df8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12cb8dfa not eax */
  EAX = (~(EAX));
  /* 12cb8dfc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb8dff mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cb8e02 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12cb8e06 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb8e08 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb8e0b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cb8e0e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12cb8e12 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cb8e15 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8e18 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12cb8e1b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12cb8e1e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cb8e21 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8e24 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12cb8e27 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cb8e2a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8e2d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12cb8e31 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb8e33 jne 0x12cb8e4d */
  if (!C.zf) goto L_12cb8e4d;
  /* 12cb8e35 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12cb8e3a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cb8e3d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12cb8e3f not eax */
  EAX = (~(EAX));
  /* 12cb8e41 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb8e44 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cb8e46 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb8e48 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb8e4b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12cb8e4d:;
  /* 12cb8e4d jmp 0x12cb8eba */
  goto L_12cb8eba;
L_12cb8e4f:;
  /* 12cb8e4f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cb8e52 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb8e55 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cb8e5a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cb8e5c not edx */
  EDX = (~(EDX));
  /* 12cb8e5e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb8e61 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cb8e64 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12cb8e6b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb8e6d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb8e70 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cb8e73 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 12cb8e7a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cb8e7d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8e80 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12cb8e83 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12cb8e86 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cb8e89 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8e8c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12cb8e8f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cb8e92 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8e95 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12cb8e99 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb8e9b jne 0x12cb8eba */
  if (!C.zf) goto L_12cb8eba;
  /* 12cb8e9d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cb8ea0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb8ea3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cb8ea8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cb8eaa not edx */
  EDX = (~(EDX));
  /* 12cb8eac mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb8eaf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cb8eb2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb8eb4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb8eb7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12cb8eba:;
  /* 12cb8eba mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb8ebd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12cb8ec0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb8ec3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12cb8ec6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12cb8ec9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb8ecc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cb8ecf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb8ed2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12cb8ed5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12cb8ed8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb8edc je 0x12cb8ff0 */
  if (C.zf) goto L_12cb8ff0;
  /* 12cb8ee2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb8ee5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb8ee8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 12cb8eeb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cb8eee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb8ef1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb8ef4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cb8ef7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12cb8efa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb8efd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb8f00 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12cb8f03 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb8f06 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb8f09 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12cb8f0c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb8f0f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cb8f12 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb8f15 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12cb8f18 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb8f1b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb8f1e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cb8f21 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb8f24 jne 0x12cb8ff0 */
  if (!C.zf) goto L_12cb8ff0;
  /* 12cb8f2a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb8f2e jge 0x12cb8f8a */
  if ((C.sf==C.of)) goto L_12cb8f8a;
  /* 12cb8f30 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cb8f33 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8f36 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12cb8f3a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cb8f3d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8f40 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12cb8f43 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12cb8f45 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cb8f48 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8f4b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12cb8f4e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb8f50 jne 0x12cb8f68 */
  if (!C.zf) goto L_12cb8f68;
  /* 12cb8f52 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12cb8f57 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb8f5a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12cb8f5c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb8f5f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cb8f61 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb8f63 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb8f66 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12cb8f68:;
  /* 12cb8f68 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cb8f6d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb8f70 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cb8f72 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb8f75 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cb8f78 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12cb8f7c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb8f7e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb8f81 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cb8f84 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12cb8f88 jmp 0x12cb8ff0 */
  goto L_12cb8ff0;
L_12cb8f8a:;
  /* 12cb8f8a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cb8f8d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8f90 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12cb8f94 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cb8f97 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8f9a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12cb8f9d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12cb8f9f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cb8fa2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb8fa5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12cb8fa8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb8faa jne 0x12cb8fc7 */
  if (!C.zf) goto L_12cb8fc7;
  /* 12cb8fac mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb8faf sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb8fb2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12cb8fb7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12cb8fb9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb8fbc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cb8fbf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb8fc1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb8fc4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12cb8fc7:;
  /* 12cb8fc7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb8fca sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb8fcd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cb8fd2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cb8fd4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb8fd7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cb8fda mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12cb8fe1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb8fe3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb8fe6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cb8fe9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_12cb8ff0:;
  /* 12cb8ff0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb8ff4 je 0x12cb900a */
  if (C.zf) goto L_12cb900a;
  /* 12cb8ff6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb8ff9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb8ffc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12cb8ffe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb9001 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9004 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb9007 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_12cb900a:;
  /* 12cb900a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb900d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9010 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12cb9013 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cb9016 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9019 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb901c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12cb901e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cb9021 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9024 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb9027 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb902a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 12cb902d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb9030 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cb9032 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb9035 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cb9037 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb903a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb903d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12cb903f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb9041 jne 0x12cb9063 */
  if (!C.zf) goto L_12cb9063;
  /* 12cb9043 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb9046 cmp eax, dword ptr [0x12ce1ec0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ce1ec0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb904c jne 0x12cb9063 */
  if (!C.zf) goto L_12cb9063;
  /* 12cb904e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb9051 cmp ecx, dword ptr [0x12ce1eb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12ce1eb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb9057 jne 0x12cb9063 */
  if (!C.zf) goto L_12cb9063;
  /* 12cb9059 mov dword ptr [0x12ce1ec0], 0 */
  w32((uint32_t)(0x12ce1ec0), (0x0u));
L_12cb9063:;
  /* 12cb9063 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12cb9066 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb9069 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12cb906b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb906e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12cb9071:;
  /* 12cb9071 pop esi */
  ESI = (pop32());
  /* 12cb9072 mov esp, ebp */
  ESP = (EBP);
  /* 12cb9074 pop ebp */
  EBP = (pop32());
  /* 12cb9075 ret  */
  ESPCHK(0x12cb8b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10009080 @ 0x12cb9080 (271 bytes, 78 insns) */
void f_12cb9080(void) {
  FTRACE(0x12cb9080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb9080 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb9081 mov ebp, esp */
  EBP = (ESP);
  /* 12cb9083 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb9084 mov eax, dword ptr [0x12ce1ec4] */
  EAX = (r32((uint32_t)(0x12ce1ec4)));
  /* 12cb9089 cmp eax, dword ptr [0x12ce1ea8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ce1ea8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb908f jne 0x12cb90db */
  if (!C.zf) goto L_12cb90db;
  /* 12cb9091 mov ecx, dword ptr [0x12ce1ea8] */
  ECX = (r32((uint32_t)(0x12ce1ea8)));
  /* 12cb9097 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb909a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cb909d push ecx */
  push32((uint32_t)(ECX));
  /* 12cb909e mov edx, dword ptr [0x12ce1ec8] */
  EDX = (r32((uint32_t)(0x12ce1ec8)));
  /* 12cb90a4 push edx */
  push32((uint32_t)(EDX));
  /* 12cb90a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb90a7 mov eax, dword ptr [0x12ce1ecc] */
  EAX = (r32((uint32_t)(0x12ce1ecc)));
  /* 12cb90ac push eax */
  push32((uint32_t)(EAX));
  /* 12cb90ad call dword ptr [0x12ce32e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32e8))), 0x12cb90b3u);
  /* 12cb90b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cb90b6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb90ba jne 0x12cb90c3 */
  if (!C.zf) goto L_12cb90c3;
  /* 12cb90bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb90be jmp 0x12cb918b */
  goto L_12cb918b;
L_12cb90c3:;
  /* 12cb90c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb90c6 mov dword ptr [0x12ce1ec8], ecx */
  w32((uint32_t)(0x12ce1ec8), (ECX));
  /* 12cb90cc mov edx, dword ptr [0x12ce1ea8] */
  EDX = (r32((uint32_t)(0x12ce1ea8)));
  /* 12cb90d2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb90d5 mov dword ptr [0x12ce1ea8], edx */
  w32((uint32_t)(0x12ce1ea8), (EDX));
L_12cb90db:;
  /* 12cb90db mov eax, dword ptr [0x12ce1ec4] */
  EAX = (r32((uint32_t)(0x12ce1ec4)));
  /* 12cb90e0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cb90e3 mov ecx, dword ptr [0x12ce1ec8] */
  ECX = (r32((uint32_t)(0x12ce1ec8)));
  /* 12cb90e9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb90eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cb90ee push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 12cb90f3 push 8 */
  push32((uint32_t)(0x8u));
  /* 12cb90f5 mov edx, dword ptr [0x12ce1ecc] */
  EDX = (r32((uint32_t)(0x12ce1ecc)));
  /* 12cb90fb push edx */
  push32((uint32_t)(EDX));
  /* 12cb90fc call dword ptr [0x12ce32ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32ec))), 0x12cb9102u);
  /* 12cb9102 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb9105 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 12cb9108 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb910b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb910f jne 0x12cb9115 */
  if (!C.zf) goto L_12cb9115;
  /* 12cb9111 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb9113 jmp 0x12cb918b */
  goto L_12cb918b;
L_12cb9115:;
  /* 12cb9115 push 4 */
  push32((uint32_t)(0x4u));
  /* 12cb9117 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 12cb911c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12cb9121 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb9123 call dword ptr [0x12ce32e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32e4))), 0x12cb9129u);
  /* 12cb9129 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb912c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 12cb912f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb9132 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb9136 jne 0x12cb9152 */
  if (!C.zf) goto L_12cb9152;
  /* 12cb9138 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb913b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12cb913e push ecx */
  push32((uint32_t)(ECX));
  /* 12cb913f push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb9141 mov edx, dword ptr [0x12ce1ecc] */
  EDX = (r32((uint32_t)(0x12ce1ecc)));
  /* 12cb9147 push edx */
  push32((uint32_t)(EDX));
  /* 12cb9148 call dword ptr [0x12ce3384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3384))), 0x12cb914eu);
  /* 12cb914e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb9150 jmp 0x12cb918b */
  goto L_12cb918b;
L_12cb9152:;
  /* 12cb9152 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb9155 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12cb915b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb915e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12cb9165 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb9168 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 12cb916f mov eax, dword ptr [0x12ce1ec4] */
  EAX = (r32((uint32_t)(0x12ce1ec4)));
  /* 12cb9174 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9177 mov dword ptr [0x12ce1ec4], eax */
  w32((uint32_t)(0x12ce1ec4), (EAX));
  /* 12cb917c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb917f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12cb9182 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 12cb9188 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12cb918b:;
  /* 12cb918b mov esp, ebp */
  ESP = (EBP);
  /* 12cb918d pop ebp */
  EBP = (pop32());
  /* 12cb918e ret  */
  ESPCHK(0x12cb9080u, _esp0);
  ESP += 4; return;
}

/* FUN_10009190 @ 0x12cb9190 (494 bytes, 149 insns) */
void f_12cb9190(void) {
  FTRACE(0x12cb9190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb9190 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb9191 mov ebp, esp */
  EBP = (ESP);
  /* 12cb9193 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb9196 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb9199 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12cb919c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12cb919f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb91a2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12cb91a5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cb91a8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_12cb91af:;
  /* 12cb91af cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb91b3 jl 0x12cb91c8 */
  if ((C.sf!=C.of)) goto L_12cb91c8;
  /* 12cb91b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb91b8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12cb91ba mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cb91bd mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cb91c0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb91c3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12cb91c6 jmp 0x12cb91af */
  goto L_12cb91af;
L_12cb91c8:;
  /* 12cb91c8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cb91cb imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cb91d1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cb91d4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12cb91db mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12cb91de mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12cb91e5 jmp 0x12cb91f0 */
  goto L_12cb91f0;
L_12cb91e7:;
  /* 12cb91e7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cb91ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb91ed mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_12cb91f0:;
  /* 12cb91f0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb91f4 jge 0x12cb9216 */
  if ((C.sf==C.of)) goto L_12cb9216;
  /* 12cb91f6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cb91f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb91fc lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 12cb91ff mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12cb9202 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb9205 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb9208 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12cb920b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb920e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb9211 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12cb9214 jmp 0x12cb91e7 */
  goto L_12cb91e7;
L_12cb9216:;
  /* 12cb9216 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cb9219 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12cb921c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb921f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12cb9222 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9224 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12cb9227 push 4 */
  push32((uint32_t)(0x4u));
  /* 12cb9229 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12cb922e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12cb9233 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb9236 push edx */
  push32((uint32_t)(EDX));
  /* 12cb9237 call dword ptr [0x12ce32e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32e4))), 0x12cb923du);
  /* 12cb923d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb923f jne 0x12cb9249 */
  if (!C.zf) goto L_12cb9249;
  /* 12cb9241 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb9244 jmp 0x12cb937a */
  goto L_12cb937a;
L_12cb9249:;
  /* 12cb9249 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb924c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9251 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12cb9254 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb9257 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cb925a jmp 0x12cb9268 */
  goto L_12cb9268;
L_12cb925c:;
  /* 12cb925c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb925f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9265 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12cb9268:;
  /* 12cb9268 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb926b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb926e ja 0x12cb92cd */
  if ((!C.cf&&!C.zf)) goto L_12cb92cd;
  /* 12cb9270 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb9273 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 12cb927a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb927d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 12cb9287 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb928a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb928d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12cb9290 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb9293 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 12cb9299 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb929c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb92a2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb92a5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12cb92a8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb92ab sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb92b1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb92b4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12cb92b7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb92ba add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb92bf mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12cb92c2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cb92c5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 12cb92cb jmp 0x12cb925c */
  goto L_12cb925c;
L_12cb92cd:;
  /* 12cb92cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb92d0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb92d6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12cb92d9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb92dc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb92df mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb92e2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12cb92e5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb92e8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12cb92eb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12cb92ee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb92f1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb92f4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12cb92f7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cb92fa add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb92fd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb9300 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12cb9303 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb9306 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12cb9309 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12cb930c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb930f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb9312 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12cb9315 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cb9318 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cb931b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 12cb9323 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cb9326 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cb9329 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 12cb9334 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cb9337 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 12cb933b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cb933e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 12cb9341 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12cb9344 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cb9347 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 12cb934a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb934c jne 0x12cb935d */
  if (!C.zf) goto L_12cb935d;
  /* 12cb934e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb9351 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cb9354 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12cb9357 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb935a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12cb935d:;
  /* 12cb935d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cb9362 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cb9365 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cb9367 not edx */
  EDX = (~(EDX));
  /* 12cb9369 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb936c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12cb936f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb9371 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb9374 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12cb9377 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_12cb937a:;
  /* 12cb937a mov esp, ebp */
  ESP = (EBP);
  /* 12cb937c pop ebp */
  EBP = (pop32());
  /* 12cb937d ret  */
  ESPCHK(0x12cb9190u, _esp0);
  ESP += 4; return;
}

/* FUN_10009380 @ 0x12cb9380 (1515 bytes, 489 insns) */
void f_12cb9380(void) {
  FTRACE(0x12cb9380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb9380 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb9381 mov ebp, esp */
  EBP = (ESP);
  /* 12cb9383 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb9386 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cb9389 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb938c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12cb938e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12cb9391 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb9394 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12cb9397 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12cb939a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb939d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb93a0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb93a3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cb93a6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb93a9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12cb93ac mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cb93af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb93b2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cb93b8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb93bb lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12cb93c2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12cb93c5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cb93c8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb93cb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12cb93ce mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb93d1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cb93d3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb93d6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12cb93d9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb93dc add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb93df mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12cb93e2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cb93e5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cb93e7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12cb93ea mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cb93ed cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb93f0 jle 0x12cb96a6 */
  if ((C.zf||C.sf!=C.of)) goto L_12cb96a6;
  /* 12cb93f6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb93f9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12cb93fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb93fe jne 0x12cb940b */
  if (!C.zf) goto L_12cb940b;
  /* 12cb9400 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cb9403 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9406 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb9409 jle 0x12cb9412 */
  if ((C.zf||C.sf!=C.of)) goto L_12cb9412;
L_12cb940b:;
  /* 12cb940b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb940d jmp 0x12cb9967 */
  goto L_12cb9967;
L_12cb9412:;
  /* 12cb9412 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb9415 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12cb9418 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb941b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12cb941e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb9422 jbe 0x12cb942b */
  if ((C.cf||C.zf)) goto L_12cb942b;
  /* 12cb9424 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12cb942b:;
  /* 12cb942b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cb942e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cb9431 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cb9434 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb9437 jne 0x12cb950d */
  if (!C.zf) goto L_12cb950d;
  /* 12cb943d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb9441 jae 0x12cb94a2 */
  if (!C.cf) goto L_12cb94a2;
  /* 12cb9443 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cb9448 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cb944b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cb944d not edx */
  EDX = (~(EDX));
  /* 12cb944f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb9452 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb9455 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12cb9459 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb945b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb945e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb9461 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12cb9465 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb9468 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb946b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12cb946e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12cb9471 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb9474 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9477 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12cb947a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb947d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9480 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12cb9484 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb9486 jne 0x12cb94a0 */
  if (!C.zf) goto L_12cb94a0;
  /* 12cb9488 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cb948d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cb9490 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cb9492 not edx */
  EDX = (~(EDX));
  /* 12cb9494 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb9497 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cb9499 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb949b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb949e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12cb94a0:;
  /* 12cb94a0 jmp 0x12cb950d */
  goto L_12cb950d;
L_12cb94a2:;
  /* 12cb94a2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cb94a5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb94a8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12cb94ad shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12cb94af not eax */
  EAX = (~(EAX));
  /* 12cb94b1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb94b4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb94b7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12cb94be and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb94c0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb94c3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb94c6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12cb94cd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb94d0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb94d3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12cb94d6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12cb94d9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb94dc add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb94df mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12cb94e2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb94e5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb94e8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12cb94ec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb94ee jne 0x12cb950d */
  if (!C.zf) goto L_12cb950d;
  /* 12cb94f0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cb94f3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb94f6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12cb94fb shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12cb94fd not eax */
  EAX = (~(EAX));
  /* 12cb94ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb9502 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cb9505 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb9507 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb950a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12cb950d:;
  /* 12cb950d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cb9510 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12cb9513 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cb9516 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cb9519 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12cb951c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cb951f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12cb9522 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cb9525 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12cb9528 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12cb952b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cb952e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9531 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb9534 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12cb9537 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb953b jle 0x12cb9687 */
  if ((C.zf||C.sf!=C.of)) goto L_12cb9687;
  /* 12cb9541 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb9544 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9547 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12cb954a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb954d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12cb9550 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb9553 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12cb9556 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb955a jbe 0x12cb9563 */
  if ((C.cf||C.zf)) goto L_12cb9563;
  /* 12cb955c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12cb9563:;
  /* 12cb9563 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cb9566 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb9569 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12cb956c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12cb956f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cb9572 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb9575 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cb9578 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12cb957b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cb957e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb9581 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12cb9584 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb9587 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cb958a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12cb958d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cb9590 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cb9593 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cb9596 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12cb9599 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cb959c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cb959f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cb95a2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb95a5 jne 0x12cb9673 */
  if (!C.zf) goto L_12cb9673;
  /* 12cb95ab cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb95af jae 0x12cb960c */
  if (!C.cf) goto L_12cb960c;
  /* 12cb95b1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb95b4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb95b7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12cb95bb mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb95be add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb95c1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12cb95c4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12cb95c7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb95ca add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb95cd mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12cb95d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb95d2 jne 0x12cb95ea */
  if (!C.zf) goto L_12cb95ea;
  /* 12cb95d4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cb95d9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cb95dc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cb95de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb95e1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cb95e3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb95e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb95e8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12cb95ea:;
  /* 12cb95ea mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12cb95ef mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cb95f2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12cb95f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb95f7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb95fa mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12cb95fe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb9600 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb9603 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb9606 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12cb960a jmp 0x12cb9673 */
  goto L_12cb9673;
L_12cb960c:;
  /* 12cb960c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb960f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9612 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12cb9616 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb9619 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb961c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12cb961f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12cb9622 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb9625 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9628 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12cb962b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb962d jne 0x12cb964a */
  if (!C.zf) goto L_12cb964a;
  /* 12cb962f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cb9632 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb9635 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cb963a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cb963c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb963f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cb9642 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb9644 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb9647 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12cb964a:;
  /* 12cb964a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cb964d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb9650 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12cb9655 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12cb9657 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb965a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb965d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12cb9664 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb9666 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb9669 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb966c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12cb9673:;
  /* 12cb9673 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cb9676 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb9679 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12cb967b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cb967e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9681 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb9684 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_12cb9687:;
  /* 12cb9687 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cb968a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb968d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb9690 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12cb9692 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cb9695 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9698 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb969b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb969e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 12cb96a1 jmp 0x12cb9962 */
  goto L_12cb9962;
L_12cb96a6:;
  /* 12cb96a6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cb96a9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb96ac jge 0x12cb9962 */
  if ((C.sf==C.of)) goto L_12cb9962;
  /* 12cb96b2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cb96b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb96b8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb96bb mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12cb96bd mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cb96c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb96c3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb96c6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb96c9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 12cb96cc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb96cf add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb96d2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12cb96d5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cb96d8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb96db mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12cb96de mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cb96e1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12cb96e4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb96e7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12cb96ea cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb96ee jbe 0x12cb96f7 */
  if ((C.cf||C.zf)) goto L_12cb96f7;
  /* 12cb96f0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12cb96f7:;
  /* 12cb96f7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb96fa and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12cb96fd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb96ff jne 0x12cb9840 */
  if (!C.zf) goto L_12cb9840;
  /* 12cb9705 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb9708 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12cb970b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb970e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12cb9711 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb9715 jbe 0x12cb971e */
  if ((C.cf||C.zf)) goto L_12cb971e;
  /* 12cb9717 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12cb971e:;
  /* 12cb971e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cb9721 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cb9724 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cb9727 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb972a jne 0x12cb9800 */
  if (!C.zf) goto L_12cb9800;
  /* 12cb9730 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb9734 jae 0x12cb9795 */
  if (!C.cf) goto L_12cb9795;
  /* 12cb9736 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cb973b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cb973e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cb9740 not edx */
  EDX = (~(EDX));
  /* 12cb9742 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb9745 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb9748 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12cb974c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb974e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb9751 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb9754 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12cb9758 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb975b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb975e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12cb9761 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12cb9764 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb9767 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb976a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12cb976d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb9770 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9773 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12cb9777 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb9779 jne 0x12cb9793 */
  if (!C.zf) goto L_12cb9793;
  /* 12cb977b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cb9780 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cb9783 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cb9785 not edx */
  EDX = (~(EDX));
  /* 12cb9787 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb978a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cb978c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb978e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb9791 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12cb9793:;
  /* 12cb9793 jmp 0x12cb9800 */
  goto L_12cb9800;
L_12cb9795:;
  /* 12cb9795 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cb9798 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb979b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12cb97a0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12cb97a2 not eax */
  EAX = (~(EAX));
  /* 12cb97a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb97a7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb97aa mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12cb97b1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb97b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb97b6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb97b9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12cb97c0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb97c3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb97c6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12cb97c9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12cb97cc mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb97cf add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb97d2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12cb97d5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb97d8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb97db movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12cb97df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb97e1 jne 0x12cb9800 */
  if (!C.zf) goto L_12cb9800;
  /* 12cb97e3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cb97e6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb97e9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12cb97ee shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12cb97f0 not eax */
  EAX = (~(EAX));
  /* 12cb97f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb97f5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cb97f8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb97fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb97fd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12cb9800:;
  /* 12cb9800 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cb9803 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12cb9806 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cb9809 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cb980c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12cb980f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cb9812 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12cb9815 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cb9818 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12cb981b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12cb981e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cb9821 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9824 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12cb9827 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cb982a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12cb982d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb9830 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12cb9833 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb9837 jbe 0x12cb9840 */
  if ((C.cf||C.zf)) goto L_12cb9840;
  /* 12cb9839 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12cb9840:;
  /* 12cb9840 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cb9843 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb9846 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 12cb9849 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12cb984c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb984f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb9852 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cb9855 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12cb9858 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb985b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb985e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12cb9861 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb9864 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb9867 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12cb986a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb986d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cb9870 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb9873 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12cb9876 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb9879 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb987c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cb987f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb9882 jne 0x12cb994e */
  if (!C.zf) goto L_12cb994e;
  /* 12cb9888 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb988c jae 0x12cb98e8 */
  if (!C.cf) goto L_12cb98e8;
  /* 12cb988e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb9891 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9894 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12cb9898 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb989b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb989e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12cb98a1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12cb98a3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb98a6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb98a9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12cb98ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb98ae jne 0x12cb98c6 */
  if (!C.zf) goto L_12cb98c6;
  /* 12cb98b0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12cb98b5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cb98b8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12cb98ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb98bd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cb98bf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb98c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb98c4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12cb98c6:;
  /* 12cb98c6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cb98cb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cb98ce shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cb98d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb98d3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb98d6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12cb98da or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb98dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb98df mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb98e2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12cb98e6 jmp 0x12cb994e */
  goto L_12cb994e;
L_12cb98e8:;
  /* 12cb98e8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb98eb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb98ee movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12cb98f2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb98f5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb98f8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12cb98fb add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12cb98fd mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb9900 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9903 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12cb9906 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb9908 jne 0x12cb9925 */
  if (!C.zf) goto L_12cb9925;
  /* 12cb990a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cb990d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb9910 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12cb9915 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12cb9917 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb991a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cb991d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12cb991f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cb9922 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12cb9925:;
  /* 12cb9925 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cb9928 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb992b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cb9930 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cb9932 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb9935 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb9938 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12cb993f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb9941 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb9944 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cb9947 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_12cb994e:;
  /* 12cb994e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb9951 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cb9954 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12cb9956 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb9959 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb995c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cb995f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_12cb9962:;
  /* 12cb9962 mov eax, 1 */
  EAX = (0x1u);
L_12cb9967:;
  /* 12cb9967 mov esp, ebp */
  ESP = (EBP);
  /* 12cb9969 pop ebp */
  EBP = (pop32());
  /* 12cb996a ret  */
  ESPCHK(0x12cb9380u, _esp0);
  ESP += 4; return;
}

/* FUN_10009970 @ 0x12cb9970 (304 bytes, 79 insns) */
void f_12cb9970(void) {
  FTRACE(0x12cb9970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb9970 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb9971 mov ebp, esp */
  EBP = (ESP);
  /* 12cb9973 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb9974 cmp dword ptr [0x12ce1ec0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce1ec0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb997b je 0x12cb9a9c */
  if (C.zf) goto L_12cb9a9c;
  /* 12cb9981 mov eax, dword ptr [0x12ce1eb8] */
  EAX = (r32((uint32_t)(0x12ce1eb8)));
  /* 12cb9986 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 12cb9989 mov ecx, dword ptr [0x12ce1ec0] */
  ECX = (r32((uint32_t)(0x12ce1ec0)));
  /* 12cb998f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12cb9992 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9994 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cb9997 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12cb999c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12cb99a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cb99a4 push eax */
  push32((uint32_t)(EAX));
  /* 12cb99a5 call dword ptr [0x12ce3388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3388))), 0x12cb99abu);
  /* 12cb99ab mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cb99b0 mov ecx, dword ptr [0x12ce1eb8] */
  ECX = (r32((uint32_t)(0x12ce1eb8)));
  /* 12cb99b6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cb99b8 mov eax, dword ptr [0x12ce1ec0] */
  EAX = (r32((uint32_t)(0x12ce1ec0)));
  /* 12cb99bd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12cb99c0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12cb99c2 mov edx, dword ptr [0x12ce1ec0] */
  EDX = (r32((uint32_t)(0x12ce1ec0)));
  /* 12cb99c8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12cb99cb mov eax, dword ptr [0x12ce1ec0] */
  EAX = (r32((uint32_t)(0x12ce1ec0)));
  /* 12cb99d0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12cb99d3 mov edx, dword ptr [0x12ce1eb8] */
  EDX = (r32((uint32_t)(0x12ce1eb8)));
  /* 12cb99d9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12cb99e4 mov eax, dword ptr [0x12ce1ec0] */
  EAX = (r32((uint32_t)(0x12ce1ec0)));
  /* 12cb99e9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12cb99ec mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 12cb99ef sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12cb99f2 mov eax, dword ptr [0x12ce1ec0] */
  EAX = (r32((uint32_t)(0x12ce1ec0)));
  /* 12cb99f7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12cb99fa mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 12cb99fd mov edx, dword ptr [0x12ce1ec0] */
  EDX = (r32((uint32_t)(0x12ce1ec0)));
  /* 12cb9a03 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12cb9a06 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 12cb9a0a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cb9a0c jne 0x12cb9a22 */
  if (!C.zf) goto L_12cb9a22;
  /* 12cb9a0e mov edx, dword ptr [0x12ce1ec0] */
  EDX = (r32((uint32_t)(0x12ce1ec0)));
  /* 12cb9a14 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12cb9a17 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 12cb9a19 mov ecx, dword ptr [0x12ce1ec0] */
  ECX = (r32((uint32_t)(0x12ce1ec0)));
  /* 12cb9a1f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12cb9a22:;
  /* 12cb9a22 mov edx, dword ptr [0x12ce1ec0] */
  EDX = (r32((uint32_t)(0x12ce1ec0)));
  /* 12cb9a28 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb9a2c jne 0x12cb9a92 */
  if (!C.zf) goto L_12cb9a92;
  /* 12cb9a2e cmp dword ptr [0x12ce1ec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ce1ec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb9a35 jle 0x12cb9a92 */
  if ((C.zf||C.sf!=C.of)) goto L_12cb9a92;
  /* 12cb9a37 mov eax, dword ptr [0x12ce1ec0] */
  EAX = (r32((uint32_t)(0x12ce1ec0)));
  /* 12cb9a3c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12cb9a3f push ecx */
  push32((uint32_t)(ECX));
  /* 12cb9a40 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cb9a42 mov edx, dword ptr [0x12ce1ecc] */
  EDX = (r32((uint32_t)(0x12ce1ecc)));
  /* 12cb9a48 push edx */
  push32((uint32_t)(EDX));
  /* 12cb9a49 call dword ptr [0x12ce3384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3384))), 0x12cb9a4fu);
  /* 12cb9a4f mov eax, dword ptr [0x12ce1ec4] */
  EAX = (r32((uint32_t)(0x12ce1ec4)));
  /* 12cb9a54 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cb9a57 mov ecx, dword ptr [0x12ce1ec8] */
  ECX = (r32((uint32_t)(0x12ce1ec8)));
  /* 12cb9a5d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9a5f mov edx, dword ptr [0x12ce1ec0] */
  EDX = (r32((uint32_t)(0x12ce1ec0)));
  /* 12cb9a65 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9a68 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb9a6a push ecx */
  push32((uint32_t)(ECX));
  /* 12cb9a6b mov eax, dword ptr [0x12ce1ec0] */
  EAX = (r32((uint32_t)(0x12ce1ec0)));
  /* 12cb9a70 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9a73 push eax */
  push32((uint32_t)(EAX));
  /* 12cb9a74 mov ecx, dword ptr [0x12ce1ec0] */
  ECX = (r32((uint32_t)(0x12ce1ec0)));
  /* 12cb9a7a push ecx */
  push32((uint32_t)(ECX));
  /* 12cb9a7b call 0x12cbc0a0 */
  push32(0x12cb9a80u); f_12cbc0a0();
  /* 12cb9a80 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9a83 mov edx, dword ptr [0x12ce1ec4] */
  EDX = (r32((uint32_t)(0x12ce1ec4)));
  /* 12cb9a89 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb9a8c mov dword ptr [0x12ce1ec4], edx */
  w32((uint32_t)(0x12ce1ec4), (EDX));
L_12cb9a92:;
  /* 12cb9a92 mov dword ptr [0x12ce1ec0], 0 */
  w32((uint32_t)(0x12ce1ec0), (0x0u));
L_12cb9a9c:;
  /* 12cb9a9c mov esp, ebp */
  ESP = (EBP);
  /* 12cb9a9e pop ebp */
  EBP = (pop32());
  /* 12cb9a9f ret  */
  ESPCHK(0x12cb9970u, _esp0);
  ESP += 4; return;
}

/* FUN_10009aa0 @ 0x12cb9aa0 (1565 bytes, 343 insns) */
void f_12cb9aa0(void) {
  FTRACE(0x12cb9aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cb9aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cb9aa1 mov ebp, esp */
  EBP = (ESP);
  /* 12cb9aa3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb9aa9 mov eax, dword ptr [0x12ce1ec4] */
  EAX = (r32((uint32_t)(0x12ce1ec4)));
  /* 12cb9aae imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cb9ab1 push eax */
  push32((uint32_t)(EAX));
  /* 12cb9ab2 mov ecx, dword ptr [0x12ce1ec8] */
  ECX = (r32((uint32_t)(0x12ce1ec8)));
  /* 12cb9ab8 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb9ab9 call dword ptr [0x12ce335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce335c))), 0x12cb9abfu);
  /* 12cb9abf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb9ac1 je 0x12cb9acb */
  if (C.zf) goto L_12cb9acb;
  /* 12cb9ac3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb9ac6 jmp 0x12cba0b9 */
  goto L_12cba0b9;
L_12cb9acb:;
  /* 12cb9acb mov edx, dword ptr [0x12ce1ec8] */
  EDX = (r32((uint32_t)(0x12ce1ec8)));
  /* 12cb9ad1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 12cb9ad7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 12cb9ae1 jmp 0x12cb9af2 */
  goto L_12cb9af2;
L_12cb9ae3:;
  /* 12cb9ae3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 12cb9ae9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9aec mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_12cb9af2:;
  /* 12cb9af2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 12cb9af8 cmp ecx, dword ptr [0x12ce1ec4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12ce1ec4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb9afe jge 0x12cba0b7 */
  if ((C.sf==C.of)) goto L_12cba0b7;
  /* 12cb9b04 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12cb9b0a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12cb9b0d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 12cb9b13 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 12cb9b18 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 12cb9b1e push ecx */
  push32((uint32_t)(ECX));
  /* 12cb9b1f call dword ptr [0x12ce335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce335c))), 0x12cb9b25u);
  /* 12cb9b25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb9b27 je 0x12cb9b33 */
  if (C.zf) goto L_12cb9b33;
  /* 12cb9b29 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12cb9b2e jmp 0x12cba0b9 */
  goto L_12cba0b9;
L_12cb9b33:;
  /* 12cb9b33 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12cb9b39 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12cb9b3c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 12cb9b42 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 12cb9b48 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9b4e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12cb9b51 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12cb9b57 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12cb9b5a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cb9b5d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 12cb9b67 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 12cb9b71 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12cb9b78 jmp 0x12cb9b83 */
  goto L_12cb9b83;
L_12cb9b7a:;
  /* 12cb9b7a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cb9b7d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9b80 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12cb9b83:;
  /* 12cb9b83 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb9b87 jge 0x12cba07b */
  if ((C.sf==C.of)) goto L_12cba07b;
  /* 12cb9b8d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 12cb9b97 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 12cb9ba1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 12cb9bab mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 12cb9bb5 jmp 0x12cb9bc6 */
  goto L_12cb9bc6;
L_12cb9bb7:;
  /* 12cb9bb7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12cb9bbd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9bc0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_12cb9bc6:;
  /* 12cb9bc6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb9bcd jge 0x12cb9be2 */
  if ((C.sf==C.of)) goto L_12cb9be2;
  /* 12cb9bcf mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12cb9bd5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 12cb9be0 jmp 0x12cb9bb7 */
  goto L_12cb9bb7;
L_12cb9be2:;
  /* 12cb9be2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb9be6 jl 0x12cba01d */
  if ((C.sf!=C.of)) goto L_12cba01d;
  /* 12cb9bec push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12cb9bf1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 12cb9bf7 push ecx */
  push32((uint32_t)(ECX));
  /* 12cb9bf8 call dword ptr [0x12ce335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce335c))), 0x12cb9bfeu);
  /* 12cb9bfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb9c00 je 0x12cb9c0c */
  if (C.zf) goto L_12cb9c0c;
  /* 12cb9c02 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 12cb9c07 jmp 0x12cba0b9 */
  goto L_12cba0b9;
L_12cb9c0c:;
  /* 12cb9c0c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 12cb9c12 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12cb9c15 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 12cb9c1f jmp 0x12cb9c30 */
  goto L_12cb9c30;
L_12cb9c21:;
  /* 12cb9c21 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 12cb9c27 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9c2a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_12cb9c30:;
  /* 12cb9c30 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb9c37 jge 0x12cb9db4 */
  if ((C.sf==C.of)) goto L_12cb9db4;
  /* 12cb9c3d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb9c40 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9c43 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 12cb9c49 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12cb9c4f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9c55 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 12cb9c5b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12cb9c61 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb9c65 jne 0x12cb9c72 */
  if (!C.zf) goto L_12cb9c72;
  /* 12cb9c67 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 12cb9c6d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb9c70 je 0x12cb9c7c */
  if (C.zf) goto L_12cb9c7c;
L_12cb9c72:;
  /* 12cb9c72 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 12cb9c77 jmp 0x12cba0b9 */
  goto L_12cba0b9;
L_12cb9c7c:;
  /* 12cb9c7c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12cb9c82 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cb9c84 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 12cb9c8a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 12cb9c90 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 12cb9c96 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 12cb9c9c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12cb9c9f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cb9ca1 je 0x12cb9cd9 */
  if (C.zf) goto L_12cb9cd9;
  /* 12cb9ca3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 12cb9ca9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb9cac mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 12cb9cb2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb9cbc jle 0x12cb9cc8 */
  if ((C.zf||C.sf!=C.of)) goto L_12cb9cc8;
  /* 12cb9cbe mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 12cb9cc3 jmp 0x12cba0b9 */
  goto L_12cba0b9;
L_12cb9cc8:;
  /* 12cb9cc8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 12cb9cce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9cd1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 12cb9cd7 jmp 0x12cb9d1b */
  goto L_12cb9d1b;
L_12cb9cd9:;
  /* 12cb9cd9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 12cb9cdf sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12cb9ce2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb9ce5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 12cb9ceb cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb9cf2 jle 0x12cb9cfe */
  if ((C.zf||C.sf!=C.of)) goto L_12cb9cfe;
  /* 12cb9cf4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_12cb9cfe:;
  /* 12cb9cfe mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12cb9d04 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 12cb9d0b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9d0e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12cb9d14 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_12cb9d1b:;
  /* 12cb9d1b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb9d22 jl 0x12cb9d3d */
  if ((C.sf!=C.of)) goto L_12cb9d3d;
  /* 12cb9d24 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 12cb9d2a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12cb9d2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cb9d2f jne 0x12cb9d3d */
  if (!C.zf) goto L_12cb9d3d;
  /* 12cb9d31 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb9d3b jle 0x12cb9d47 */
  if ((C.zf||C.sf!=C.of)) goto L_12cb9d47;
L_12cb9d3d:;
  /* 12cb9d3d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 12cb9d42 jmp 0x12cba0b9 */
  goto L_12cba0b9;
L_12cb9d47:;
  /* 12cb9d47 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12cb9d4d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9d53 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12cb9d56 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb9d5c je 0x12cb9d68 */
  if (C.zf) goto L_12cb9d68;
  /* 12cb9d5e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 12cb9d63 jmp 0x12cba0b9 */
  goto L_12cba0b9;
L_12cb9d68:;
  /* 12cb9d68 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12cb9d6e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9d74 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 12cb9d7a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12cb9d80 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb9d86 jb 0x12cb9c7c */
  if (C.cf) goto L_12cb9c7c;
  /* 12cb9d8c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12cb9d92 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb9d98 je 0x12cb9da4 */
  if (C.zf) goto L_12cb9da4;
  /* 12cb9d9a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 12cb9d9f jmp 0x12cba0b9 */
  goto L_12cba0b9;
L_12cb9da4:;
  /* 12cb9da4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cb9da7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9dac mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cb9daf jmp 0x12cb9c21 */
  goto L_12cb9c21;
L_12cb9db4:;
  /* 12cb9db4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb9db7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cb9db9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb9dbf je 0x12cb9dcb */
  if (C.zf) goto L_12cb9dcb;
  /* 12cb9dc1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 12cb9dc6 jmp 0x12cba0b9 */
  goto L_12cba0b9;
L_12cb9dcb:;
  /* 12cb9dcb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cb9dce mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 12cb9dd4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12cb9ddb jmp 0x12cb9de6 */
  goto L_12cb9de6;
L_12cb9ddd:;
  /* 12cb9ddd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb9de0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9de3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12cb9de6:;
  /* 12cb9de6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb9dea jge 0x12cba01d */
  if ((C.sf==C.of)) goto L_12cba01d;
  /* 12cb9df0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 12cb9dfa mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 12cb9e00 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_12cb9e06:;
  /* 12cb9e06 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12cb9e0c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cb9e0f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 12cb9e15 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12cb9e1b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb9e21 je 0x12cb9f4a */
  if (C.zf) goto L_12cb9f4a;
  /* 12cb9e27 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb9e2a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12cb9e30 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb9e37 je 0x12cb9f4a */
  if (C.zf) goto L_12cb9f4a;
  /* 12cb9e3d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12cb9e43 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb9e49 jb 0x12cb9e5e */
  if (C.cf) goto L_12cb9e5e;
  /* 12cb9e4b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 12cb9e51 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9e56 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb9e5c jb 0x12cb9e68 */
  if (C.cf) goto L_12cb9e68;
L_12cb9e5e:;
  /* 12cb9e5e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 12cb9e63 jmp 0x12cba0b9 */
  goto L_12cba0b9;
L_12cb9e68:;
  /* 12cb9e68 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12cb9e6e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 12cb9e74 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 12cb9e7a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 12cb9e80 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9e83 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12cb9e86 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb9e89 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9e8e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_12cb9e94:;
  /* 12cb9e94 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb9e97 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb9e9d je 0x12cb9ebe */
  if (C.zf) goto L_12cb9ebe;
  /* 12cb9e9f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb9ea2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb9ea8 jne 0x12cb9eac */
  if (!C.zf) goto L_12cb9eac;
  /* 12cb9eaa jmp 0x12cb9ebe */
  goto L_12cb9ebe;
L_12cb9eac:;
  /* 12cb9eac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb9eaf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cb9eb1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 12cb9eb4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb9eb7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9eb9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12cb9ebc jmp 0x12cb9e94 */
  goto L_12cb9e94;
L_12cb9ebe:;
  /* 12cb9ebe mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cb9ec1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb9ec7 jne 0x12cb9ed3 */
  if (!C.zf) goto L_12cb9ed3;
  /* 12cb9ec9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 12cb9ece jmp 0x12cba0b9 */
  goto L_12cba0b9;
L_12cb9ed3:;
  /* 12cb9ed3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12cb9ed9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cb9edb sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12cb9ede sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb9ee1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 12cb9ee7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb9eee jle 0x12cb9efa */
  if ((C.zf||C.sf!=C.of)) goto L_12cb9efa;
  /* 12cb9ef0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_12cb9efa:;
  /* 12cb9efa mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12cb9f00 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb9f03 je 0x12cb9f0f */
  if (C.zf) goto L_12cb9f0f;
  /* 12cb9f05 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 12cb9f0a jmp 0x12cba0b9 */
  goto L_12cba0b9;
L_12cb9f0f:;
  /* 12cb9f0f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12cb9f15 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12cb9f18 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb9f1e je 0x12cb9f2a */
  if (C.zf) goto L_12cb9f2a;
  /* 12cb9f20 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 12cb9f25 jmp 0x12cba0b9 */
  goto L_12cba0b9;
L_12cb9f2a:;
  /* 12cb9f2a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12cb9f30 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 12cb9f36 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12cb9f3c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cb9f3f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 12cb9f45 jmp 0x12cb9e06 */
  goto L_12cb9e06;
L_12cb9f4a:;
  /* 12cb9f4a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb9f51 je 0x12cb9fc1 */
  if (C.zf) goto L_12cb9fc1;
  /* 12cb9f53 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb9f57 jge 0x12cb9f8b */
  if ((C.sf==C.of)) goto L_12cb9f8b;
  /* 12cb9f59 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cb9f5e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb9f61 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cb9f63 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 12cb9f69 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb9f6b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 12cb9f71 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cb9f76 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb9f79 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cb9f7b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 12cb9f81 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb9f83 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 12cb9f89 jmp 0x12cb9fc1 */
  goto L_12cb9fc1;
L_12cb9f8b:;
  /* 12cb9f8b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb9f8e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb9f91 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cb9f96 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cb9f98 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 12cb9f9e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb9fa0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 12cb9fa6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb9fa9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cb9fac mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12cb9fb1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12cb9fb3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 12cb9fb9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12cb9fbb mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_12cb9fc1:;
  /* 12cb9fc1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12cb9fc7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cb9fca cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb9fd0 jne 0x12cb9fe4 */
  if (!C.zf) goto L_12cb9fe4;
  /* 12cb9fd2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cb9fd5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12cb9fdb cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb9fe2 je 0x12cb9fee */
  if (C.zf) goto L_12cb9fee;
L_12cb9fe4:;
  /* 12cb9fe4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 12cb9fe9 jmp 0x12cba0b9 */
  goto L_12cba0b9;
L_12cb9fee:;
  /* 12cb9fee mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 12cb9ff4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12cb9ff7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cb9ffd je 0x12cba009 */
  if (C.zf) goto L_12cba009;
  /* 12cb9fff mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 12cba004 jmp 0x12cba0b9 */
  goto L_12cba0b9;
L_12cba009:;
  /* 12cba009 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 12cba00f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cba012 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 12cba018 jmp 0x12cb9ddd */
  goto L_12cb9ddd;
L_12cba01d:;
  /* 12cba01d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cba020 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 12cba026 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 12cba02c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cba030 jne 0x12cba04a */
  if (!C.zf) goto L_12cba04a;
  /* 12cba032 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cba035 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 12cba03b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 12cba041 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cba048 je 0x12cba051 */
  if (C.zf) goto L_12cba051;
L_12cba04a:;
  /* 12cba04a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 12cba04f jmp 0x12cba0b9 */
  goto L_12cba0b9;
L_12cba051:;
  /* 12cba051 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 12cba057 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cba05d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 12cba063 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cba066 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cba06b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12cba06e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cba071 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12cba073 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cba076 jmp 0x12cb9b7a */
  goto L_12cb9b7a;
L_12cba07b:;
  /* 12cba07b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12cba081 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 12cba087 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cba089 jne 0x12cba09c */
  if (!C.zf) goto L_12cba09c;
  /* 12cba08b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12cba091 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 12cba097 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cba09a je 0x12cba0a3 */
  if (C.zf) goto L_12cba0a3;
L_12cba09c:;
  /* 12cba09c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 12cba0a1 jmp 0x12cba0b9 */
  goto L_12cba0b9;
L_12cba0a3:;
  /* 12cba0a3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12cba0a9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cba0ac mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 12cba0b2 jmp 0x12cb9ae3 */
  goto L_12cb9ae3;
L_12cba0b7:;
  /* 12cba0b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cba0b9:;
  /* 12cba0b9 mov esp, ebp */
  ESP = (EBP);
  /* 12cba0bb pop ebp */
  EBP = (pop32());
  /* 12cba0bc ret  */
  ESPCHK(0x12cb9aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a0c0 @ 0x12cba0c0 (250 bytes, 92 insns) */
void f_12cba0c0(void) {
  FTRACE(0x12cba0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cba0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cba0c1 mov ebp, esp */
  EBP = (ESP);
  /* 12cba0c3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cba0c6 push ebx */
  push32((uint32_t)(EBX));
  /* 12cba0c7 push esi */
  push32((uint32_t)(ESI));
  /* 12cba0c8 push edi */
  push32((uint32_t)(EDI));
  /* 12cba0c9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12cba0cc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12cba0cf lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12cba0d2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12cba0d5:;
  /* 12cba0d5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cba0d9 jne 0x12cba0f9 */
  if (!C.zf) goto L_12cba0f9;
  /* 12cba0db push 0x12cdc248 */
  push32((uint32_t)(0x12cdc248u));
  /* 12cba0e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cba0e2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12cba0e4 push 0x12cdc23c */
  push32((uint32_t)(0x12cdc23cu));
  /* 12cba0e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cba0eb call 0x12cb3270 */
  push32(0x12cba0f0u); f_12cb3270();
  /* 12cba0f0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cba0f3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cba0f6 jne 0x12cba0f9 */
  if (!C.zf) goto L_12cba0f9;
  /* 12cba0f8 int3  */
  x86_unimpl("int3 @ 0x12cba0f8");
L_12cba0f9:;
  /* 12cba0f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cba0fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cba0fd jne 0x12cba0d5 */
  if (!C.zf) goto L_12cba0d5;
L_12cba0ff:;
  /* 12cba0ff cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cba103 jne 0x12cba123 */
  if (!C.zf) goto L_12cba123;
  /* 12cba105 push 0x12cdc22c */
  push32((uint32_t)(0x12cdc22cu));
  /* 12cba10a push 0 */
  push32((uint32_t)(0x0u));
  /* 12cba10c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12cba10e push 0x12cdc23c */
  push32((uint32_t)(0x12cdc23cu));
  /* 12cba113 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cba115 call 0x12cb3270 */
  push32(0x12cba11au); f_12cb3270();
  /* 12cba11a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cba11d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cba120 jne 0x12cba123 */
  if (!C.zf) goto L_12cba123;
  /* 12cba122 int3  */
  x86_unimpl("int3 @ 0x12cba122");
L_12cba123:;
  /* 12cba123 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cba125 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cba127 jne 0x12cba0ff */
  if (!C.zf) goto L_12cba0ff;
  /* 12cba129 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cba12c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12cba133 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cba136 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cba139 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12cba13c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cba13f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cba142 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12cba144 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cba147 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 12cba14e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cba151 push ecx */
  push32((uint32_t)(ECX));
  /* 12cba152 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cba155 push edx */
  push32((uint32_t)(EDX));
  /* 12cba156 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cba159 push eax */
  push32((uint32_t)(EAX));
  /* 12cba15a call 0x12cbb140 */
  push32(0x12cba15fu); f_12cbb140();
  /* 12cba15f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cba162 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12cba165 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cba168 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cba16b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cba16e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cba171 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12cba174 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cba177 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cba17b jl 0x12cba19f */
  if ((C.sf!=C.of)) goto L_12cba19f;
  /* 12cba17d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cba180 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cba182 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12cba185 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cba187 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cba18d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12cba190 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cba193 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cba195 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cba198 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cba19b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12cba19d jmp 0x12cba1b0 */
  goto L_12cba1b0;
L_12cba19f:;
  /* 12cba19f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cba1a2 push edx */
  push32((uint32_t)(EDX));
  /* 12cba1a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cba1a5 call 0x12cbaec0 */
  push32(0x12cba1aau); f_12cbaec0();
  /* 12cba1aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cba1ad mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_12cba1b0:;
  /* 12cba1b0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cba1b3 pop edi */
  EDI = (pop32());
  /* 12cba1b4 pop esi */
  ESI = (pop32());
  /* 12cba1b5 pop ebx */
  EBX = (pop32());
  /* 12cba1b6 mov esp, ebp */
  ESP = (EBP);
  /* 12cba1b8 pop ebp */
  EBP = (pop32());
  /* 12cba1b9 ret  */
  ESPCHK(0x12cba0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1c0 @ 0x12cba1c0 (183 bytes, 58 insns) */
void f_12cba1c0(void) {
  FTRACE(0x12cba1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cba1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cba1c1 mov ebp, esp */
  EBP = (ESP);
  /* 12cba1c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cba1c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cba1c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cba1cc cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cba1d1 ja 0x12cba1ea */
  if ((!C.cf&&!C.zf)) goto L_12cba1ea;
  /* 12cba1d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cba1d6 mov edx, dword ptr [0x12cdec98] */
  EDX = (r32((uint32_t)(0x12cdec98)));
  /* 12cba1dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cba1de mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12cba1e2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 12cba1e5 jmp 0x12cba273 */
  goto L_12cba273;
L_12cba1ea:;
  /* 12cba1ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cba1ed sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12cba1f0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cba1f6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cba1fc mov edx, dword ptr [0x12cdec98] */
  EDX = (r32((uint32_t)(0x12cdec98)));
  /* 12cba202 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cba204 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12cba208 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12cba20d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cba20f je 0x12cba233 */
  if (C.zf) goto L_12cba233;
  /* 12cba211 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cba214 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12cba217 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cba21d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 12cba220 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 12cba223 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 12cba226 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 12cba22a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 12cba231 jmp 0x12cba244 */
  goto L_12cba244;
L_12cba233:;
  /* 12cba233 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12cba236 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 12cba239 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 12cba23d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12cba244:;
  /* 12cba244 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cba246 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cba248 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cba24a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12cba24d push ecx */
  push32((uint32_t)(ECX));
  /* 12cba24e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cba251 push edx */
  push32((uint32_t)(EDX));
  /* 12cba252 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12cba255 push eax */
  push32((uint32_t)(EAX));
  /* 12cba256 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cba258 call 0x12cbc3e0 */
  push32(0x12cba25du); f_12cbc3e0();
  /* 12cba25d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cba260 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cba262 jne 0x12cba268 */
  if (!C.zf) goto L_12cba268;
  /* 12cba264 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cba266 jmp 0x12cba273 */
  goto L_12cba273;
L_12cba268:;
  /* 12cba268 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cba26b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cba270 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_12cba273:;
  /* 12cba273 mov esp, ebp */
  ESP = (EBP);
  /* 12cba275 pop ebp */
  EBP = (pop32());
  /* 12cba276 ret  */
  ESPCHK(0x12cba1c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a280 @ 0x12cba280 (836 bytes, 238 insns) */
void f_12cba280(void) {
  FTRACE(0x12cba280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cba280 push ebp */
  push32((uint32_t)(EBP));
  /* 12cba281 mov ebp, esp */
  EBP = (ESP);
  /* 12cba283 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cba286 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12cba288 call 0x12cb7bb0 */
  push32(0x12cba28du); f_12cb7bb0();
  /* 12cba28d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cba290 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cba293 push eax */
  push32((uint32_t)(EAX));
  /* 12cba294 call 0x12cba5d0 */
  push32(0x12cba299u); f_12cba5d0();
  /* 12cba299 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cba29c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12cba29f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cba2a2 cmp ecx, dword ptr [0x12ce1c04] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12ce1c04))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cba2a8 jne 0x12cba2bb */
  if (!C.zf) goto L_12cba2bb;
  /* 12cba2aa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12cba2ac call 0x12cb7c50 */
  push32(0x12cba2b1u); f_12cb7c50();
  /* 12cba2b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cba2b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cba2b6 jmp 0x12cba5c0 */
  goto L_12cba5c0;
L_12cba2bb:;
  /* 12cba2bb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cba2bf jne 0x12cba2dc */
  if (!C.zf) goto L_12cba2dc;
  /* 12cba2c1 call 0x12cba6b0 */
  push32(0x12cba2c6u); f_12cba6b0();
  /* 12cba2c6 call 0x12cba730 */
  push32(0x12cba2cbu); f_12cba730();
  /* 12cba2cb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12cba2cd call 0x12cb7c50 */
  push32(0x12cba2d2u); f_12cb7c50();
  /* 12cba2d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cba2d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cba2d7 jmp 0x12cba5c0 */
  goto L_12cba5c0;
L_12cba2dc:;
  /* 12cba2dc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cba2e3 jmp 0x12cba2ee */
  goto L_12cba2ee;
L_12cba2e5:;
  /* 12cba2e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cba2e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cba2eb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12cba2ee:;
  /* 12cba2ee cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cba2f2 jae 0x12cba43f */
  if (!C.cf) goto L_12cba43f;
  /* 12cba2f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cba2fb imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cba2fe mov ecx, dword ptr [eax + 0x12cdeeb8] */
  ECX = (r32((uint32_t)(EAX + 0x12cdeeb8)));
  /* 12cba304 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cba307 jne 0x12cba43a */
  if (!C.zf) goto L_12cba43a;
  /* 12cba30d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12cba314 jmp 0x12cba31f */
  goto L_12cba31f;
L_12cba316:;
  /* 12cba316 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cba319 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cba31c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_12cba31f:;
  /* 12cba31f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cba326 jae 0x12cba334 */
  if (!C.cf) goto L_12cba334;
  /* 12cba328 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cba32b mov byte ptr [eax + 0x12ce1da0], 0 */
  w8((uint32_t)(EAX + 0x12ce1da0), (0x0u));
  /* 12cba332 jmp 0x12cba316 */
  goto L_12cba316;
L_12cba334:;
  /* 12cba334 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12cba33b jmp 0x12cba346 */
  goto L_12cba346;
L_12cba33d:;
  /* 12cba33d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cba340 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cba343 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12cba346:;
  /* 12cba346 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cba34a jae 0x12cba3c7 */
  if (!C.cf) goto L_12cba3c7;
  /* 12cba34c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cba34f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cba352 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cba355 lea ecx, [edx + eax*8 + 0x12cdeec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x12cdeec8));
  /* 12cba35c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cba35f jmp 0x12cba36a */
  goto L_12cba36a;
L_12cba361:;
  /* 12cba361 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cba364 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cba367 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12cba36a:;
  /* 12cba36a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cba36d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cba36f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12cba371 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cba373 je 0x12cba3c2 */
  if (C.zf) goto L_12cba3c2;
  /* 12cba375 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cba378 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cba37a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12cba37d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cba37f je 0x12cba3c2 */
  if (C.zf) goto L_12cba3c2;
  /* 12cba381 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cba384 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cba386 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12cba388 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12cba38b jmp 0x12cba396 */
  goto L_12cba396;
L_12cba38d:;
  /* 12cba38d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cba390 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cba393 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12cba396:;
  /* 12cba396 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cba399 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cba39b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12cba39e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cba3a1 ja 0x12cba3c0 */
  if ((!C.cf&&!C.zf)) goto L_12cba3c0;
  /* 12cba3a3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cba3a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cba3a9 mov dl, byte ptr [eax + 0x12ce1da1] */
  DL = (r8((uint32_t)(EAX + 0x12ce1da1)));
  /* 12cba3af or dl, byte ptr [ecx + 0x12cdeeb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x12cdeeb0))); DL = (_r); fl_logic(_r,8); }
  /* 12cba3b5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cba3b8 mov byte ptr [eax + 0x12ce1da1], dl */
  w8((uint32_t)(EAX + 0x12ce1da1), (DL));
  /* 12cba3be jmp 0x12cba38d */
  goto L_12cba38d;
L_12cba3c0:;
  /* 12cba3c0 jmp 0x12cba361 */
  goto L_12cba361;
L_12cba3c2:;
  /* 12cba3c2 jmp 0x12cba33d */
  goto L_12cba33d;
L_12cba3c7:;
  /* 12cba3c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cba3ca mov dword ptr [0x12ce1c04], ecx */
  w32((uint32_t)(0x12ce1c04), (ECX));
  /* 12cba3d0 mov dword ptr [0x12ce1c8c], 1 */
  w32((uint32_t)(0x12ce1c8c), (0x1u));
  /* 12cba3da mov edx, dword ptr [0x12ce1c04] */
  EDX = (r32((uint32_t)(0x12ce1c04)));
  /* 12cba3e0 push edx */
  push32((uint32_t)(EDX));
  /* 12cba3e1 call 0x12cba630 */
  push32(0x12cba3e6u); f_12cba630();
  /* 12cba3e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cba3e9 mov dword ptr [0x12ce1ea4], eax */
  w32((uint32_t)(0x12ce1ea4), (EAX));
  /* 12cba3ee mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12cba3f5 jmp 0x12cba400 */
  goto L_12cba400;
L_12cba3f7:;
  /* 12cba3f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cba3fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cba3fd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12cba400:;
  /* 12cba400 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cba404 jae 0x12cba424 */
  if (!C.cf) goto L_12cba424;
  /* 12cba406 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cba409 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cba40c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cba40f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cba412 mov cx, word ptr [ecx + eax*2 + 0x12cdeebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x12cdeebc)));
  /* 12cba41a mov word ptr [edx*2 + 0x12ce1c80], cx */
  w16((uint32_t)(EDX*2 + 0x12ce1c80), (CX));
  /* 12cba422 jmp 0x12cba3f7 */
  goto L_12cba3f7;
L_12cba424:;
  /* 12cba424 call 0x12cba730 */
  push32(0x12cba429u); f_12cba730();
  /* 12cba429 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12cba42b call 0x12cb7c50 */
  push32(0x12cba430u); f_12cb7c50();
  /* 12cba430 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cba433 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cba435 jmp 0x12cba5c0 */
  goto L_12cba5c0;
L_12cba43a:;
  /* 12cba43a jmp 0x12cba2e5 */
  goto L_12cba2e5;
L_12cba43f:;
  /* 12cba43f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 12cba442 push edx */
  push32((uint32_t)(EDX));
  /* 12cba443 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cba446 push eax */
  push32((uint32_t)(EAX));
  /* 12cba447 call dword ptr [0x12ce32e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32e0))), 0x12cba44du);
  /* 12cba44d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cba450 jne 0x12cba592 */
  if (!C.zf) goto L_12cba592;
  /* 12cba456 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12cba45d jmp 0x12cba468 */
  goto L_12cba468;
L_12cba45f:;
  /* 12cba45f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cba462 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cba465 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_12cba468:;
  /* 12cba468 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cba46f jae 0x12cba47d */
  if (!C.cf) goto L_12cba47d;
  /* 12cba471 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cba474 mov byte ptr [edx + 0x12ce1da0], 0 */
  w8((uint32_t)(EDX + 0x12ce1da0), (0x0u));
  /* 12cba47b jmp 0x12cba45f */
  goto L_12cba45f;
L_12cba47d:;
  /* 12cba47d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cba480 mov dword ptr [0x12ce1c04], eax */
  w32((uint32_t)(0x12ce1c04), (EAX));
  /* 12cba485 mov dword ptr [0x12ce1ea4], 0 */
  w32((uint32_t)(0x12ce1ea4), (0x0u));
  /* 12cba48f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cba493 jbe 0x12cba54e */
  if ((C.cf||C.zf)) goto L_12cba54e;
  /* 12cba499 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 12cba49c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12cba49f jmp 0x12cba4aa */
  goto L_12cba4aa;
L_12cba4a1:;
  /* 12cba4a1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cba4a4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cba4a7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_12cba4aa:;
  /* 12cba4aa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cba4ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cba4af mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12cba4b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cba4b3 je 0x12cba4fc */
  if (C.zf) goto L_12cba4fc;
  /* 12cba4b5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cba4b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cba4ba mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12cba4bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cba4bf je 0x12cba4fc */
  if (C.zf) goto L_12cba4fc;
  /* 12cba4c1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cba4c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cba4c6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12cba4c8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12cba4cb jmp 0x12cba4d6 */
  goto L_12cba4d6;
L_12cba4cd:;
  /* 12cba4cd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cba4d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cba4d3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12cba4d6:;
  /* 12cba4d6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cba4d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cba4db mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12cba4de cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cba4e1 ja 0x12cba4fa */
  if ((!C.cf&&!C.zf)) goto L_12cba4fa;
  /* 12cba4e3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cba4e6 mov cl, byte ptr [eax + 0x12ce1da1] */
  CL = (r8((uint32_t)(EAX + 0x12ce1da1)));
  /* 12cba4ec or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 12cba4ef mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cba4f2 mov byte ptr [edx + 0x12ce1da1], cl */
  w8((uint32_t)(EDX + 0x12ce1da1), (CL));
  /* 12cba4f8 jmp 0x12cba4cd */
  goto L_12cba4cd;
L_12cba4fa:;
  /* 12cba4fa jmp 0x12cba4a1 */
  goto L_12cba4a1;
L_12cba4fc:;
  /* 12cba4fc mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 12cba503 jmp 0x12cba50e */
  goto L_12cba50e;
L_12cba505:;
  /* 12cba505 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cba508 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cba50b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12cba50e:;
  /* 12cba50e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cba515 jae 0x12cba52e */
  if (!C.cf) goto L_12cba52e;
  /* 12cba517 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cba51a mov dl, byte ptr [ecx + 0x12ce1da1] */
  DL = (r8((uint32_t)(ECX + 0x12ce1da1)));
  /* 12cba520 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 12cba523 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cba526 mov byte ptr [eax + 0x12ce1da1], dl */
  w8((uint32_t)(EAX + 0x12ce1da1), (DL));
  /* 12cba52c jmp 0x12cba505 */
  goto L_12cba505;
L_12cba52e:;
  /* 12cba52e mov ecx, dword ptr [0x12ce1c04] */
  ECX = (r32((uint32_t)(0x12ce1c04)));
  /* 12cba534 push ecx */
  push32((uint32_t)(ECX));
  /* 12cba535 call 0x12cba630 */
  push32(0x12cba53au); f_12cba630();
  /* 12cba53a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cba53d mov dword ptr [0x12ce1ea4], eax */
  w32((uint32_t)(0x12ce1ea4), (EAX));
  /* 12cba542 mov dword ptr [0x12ce1c8c], 1 */
  w32((uint32_t)(0x12ce1c8c), (0x1u));
  /* 12cba54c jmp 0x12cba558 */
  goto L_12cba558;
L_12cba54e:;
  /* 12cba54e mov dword ptr [0x12ce1c8c], 0 */
  w32((uint32_t)(0x12ce1c8c), (0x0u));
L_12cba558:;
  /* 12cba558 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12cba55f jmp 0x12cba56a */
  goto L_12cba56a;
L_12cba561:;
  /* 12cba561 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cba564 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cba567 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12cba56a:;
  /* 12cba56a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cba56e jae 0x12cba57f */
  if (!C.cf) goto L_12cba57f;
  /* 12cba570 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cba573 mov word ptr [eax*2 + 0x12ce1c80], 0 */
  w16((uint32_t)(EAX*2 + 0x12ce1c80), (0x0u));
  /* 12cba57d jmp 0x12cba561 */
  goto L_12cba561;
L_12cba57f:;
  /* 12cba57f call 0x12cba730 */
  push32(0x12cba584u); f_12cba730();
  /* 12cba584 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12cba586 call 0x12cb7c50 */
  push32(0x12cba58bu); f_12cb7c50();
  /* 12cba58b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cba58e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cba590 jmp 0x12cba5c0 */
  goto L_12cba5c0;
L_12cba592:;
  /* 12cba592 cmp dword ptr [0x12ce0708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cba599 je 0x12cba5b3 */
  if (C.zf) goto L_12cba5b3;
  /* 12cba59b call 0x12cba6b0 */
  push32(0x12cba5a0u); f_12cba6b0();
  /* 12cba5a0 call 0x12cba730 */
  push32(0x12cba5a5u); f_12cba730();
  /* 12cba5a5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12cba5a7 call 0x12cb7c50 */
  push32(0x12cba5acu); f_12cb7c50();
  /* 12cba5ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cba5af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cba5b1 jmp 0x12cba5c0 */
  goto L_12cba5c0;
L_12cba5b3:;
  /* 12cba5b3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12cba5b5 call 0x12cb7c50 */
  push32(0x12cba5bau); f_12cb7c50();
  /* 12cba5ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cba5bd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12cba5c0:;
  /* 12cba5c0 mov esp, ebp */
  ESP = (EBP);
  /* 12cba5c2 pop ebp */
  EBP = (pop32());
  /* 12cba5c3 ret  */
  ESPCHK(0x12cba280u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x12cba5d0 (89 bytes, 21 insns) */
void f_12cba5d0(void) {
  FTRACE(0x12cba5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cba5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cba5d1 mov ebp, esp */
  EBP = (ESP);
  /* 12cba5d3 mov dword ptr [0x12ce0708], 0 */
  w32((uint32_t)(0x12ce0708), (0x0u));
  /* 12cba5dd cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cba5e1 jne 0x12cba5f5 */
  if (!C.zf) goto L_12cba5f5;
  /* 12cba5e3 mov dword ptr [0x12ce0708], 1 */
  w32((uint32_t)(0x12ce0708), (0x1u));
  /* 12cba5ed call dword ptr [0x12ce32d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32d8))), 0x12cba5f3u);
  /* 12cba5f3 jmp 0x12cba627 */
  goto L_12cba627;
L_12cba5f5:;
  /* 12cba5f5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cba5f9 jne 0x12cba60d */
  if (!C.zf) goto L_12cba60d;
  /* 12cba5fb mov dword ptr [0x12ce0708], 1 */
  w32((uint32_t)(0x12ce0708), (0x1u));
  /* 12cba605 call dword ptr [0x12ce32dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32dc))), 0x12cba60bu);
  /* 12cba60b jmp 0x12cba627 */
  goto L_12cba627;
L_12cba60d:;
  /* 12cba60d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cba611 jne 0x12cba624 */
  if (!C.zf) goto L_12cba624;
  /* 12cba613 mov dword ptr [0x12ce0708], 1 */
  w32((uint32_t)(0x12ce0708), (0x1u));
  /* 12cba61d mov eax, dword ptr [0x12ce0728] */
  EAX = (r32((uint32_t)(0x12ce0728)));
  /* 12cba622 jmp 0x12cba627 */
  goto L_12cba627;
L_12cba624:;
  /* 12cba624 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12cba627:;
  /* 12cba627 pop ebp */
  EBP = (pop32());
  /* 12cba628 ret  */
  ESPCHK(0x12cba5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a630 @ 0x12cba630 (80 bytes, 26 insns) [1 switch table(s)] */
void f_12cba630(void) {
  FTRACE(0x12cba630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cba630 push ebp */
  push32((uint32_t)(EBP));
  /* 12cba631 mov ebp, esp */
  EBP = (ESP);
  /* 12cba633 push ecx */
  push32((uint32_t)(ECX));
  /* 12cba634 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cba637 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cba63a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cba63d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cba643 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cba646 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cba64a ja 0x12cba67a */
  if ((!C.cf&&!C.zf)) goto L_12cba67a;
  /* 12cba64c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cba64f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cba651 mov dl, byte ptr [eax + 0x12cba694] */
  DL = (r8((uint32_t)(EAX + 0x12cba694)));
  /* 12cba657 jmp dword ptr [edx*4 + 0x12cba680] */
  switch (EDX) {
    case 0: goto L_12cba65e;
    case 1: goto L_12cba665;
    case 2: goto L_12cba66c;
    case 3: goto L_12cba673;
    case 4: goto L_12cba67a;
    default: x86_unimpl("switch@0x12cba657 out of table"); return;
  }
L_12cba65e:;
  /* 12cba65e mov eax, 0x411 */
  EAX = (0x411u);
  /* 12cba663 jmp 0x12cba67c */
  goto L_12cba67c;
L_12cba665:;
  /* 12cba665 mov eax, 0x804 */
  EAX = (0x804u);
  /* 12cba66a jmp 0x12cba67c */
  goto L_12cba67c;
L_12cba66c:;
  /* 12cba66c mov eax, 0x412 */
  EAX = (0x412u);
  /* 12cba671 jmp 0x12cba67c */
  goto L_12cba67c;
L_12cba673:;
  /* 12cba673 mov eax, 0x404 */
  EAX = (0x404u);
  /* 12cba678 jmp 0x12cba67c */
  goto L_12cba67c;
L_12cba67a:;
  /* 12cba67a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cba67c:;
  /* 12cba67c mov esp, ebp */
  ESP = (EBP);
  /* 12cba67e pop ebp */
  EBP = (pop32());
  /* 12cba67f ret  */
  ESPCHK(0x12cba630u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x12cba6b0 (116 bytes, 29 insns) */
void f_12cba6b0(void) {
  FTRACE(0x12cba6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cba6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cba6b1 mov ebp, esp */
  EBP = (ESP);
  /* 12cba6b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cba6b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cba6bb jmp 0x12cba6c6 */
  goto L_12cba6c6;
L_12cba6bd:;
  /* 12cba6bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cba6c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cba6c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cba6c6:;
  /* 12cba6c6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cba6cd jge 0x12cba6db */
  if ((C.sf==C.of)) goto L_12cba6db;
  /* 12cba6cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cba6d2 mov byte ptr [ecx + 0x12ce1da0], 0 */
  w8((uint32_t)(ECX + 0x12ce1da0), (0x0u));
  /* 12cba6d9 jmp 0x12cba6bd */
  goto L_12cba6bd;
L_12cba6db:;
  /* 12cba6db mov dword ptr [0x12ce1c04], 0 */
  w32((uint32_t)(0x12ce1c04), (0x0u));
  /* 12cba6e5 mov dword ptr [0x12ce1c8c], 0 */
  w32((uint32_t)(0x12ce1c8c), (0x0u));
  /* 12cba6ef mov dword ptr [0x12ce1ea4], 0 */
  w32((uint32_t)(0x12ce1ea4), (0x0u));
  /* 12cba6f9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cba700 jmp 0x12cba70b */
  goto L_12cba70b;
L_12cba702:;
  /* 12cba702 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cba705 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cba708 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12cba70b:;
  /* 12cba70b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cba70f jge 0x12cba720 */
  if ((C.sf==C.of)) goto L_12cba720;
  /* 12cba711 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cba714 mov word ptr [eax*2 + 0x12ce1c80], 0 */
  w16((uint32_t)(EAX*2 + 0x12ce1c80), (0x0u));
  /* 12cba71e jmp 0x12cba702 */
  goto L_12cba702;
L_12cba720:;
  /* 12cba720 mov esp, ebp */
  ESP = (EBP);
  /* 12cba722 pop ebp */
  EBP = (pop32());
  /* 12cba723 ret  */
  ESPCHK(0x12cba6b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a730 @ 0x12cba730 (770 bytes, 175 insns) */
void f_12cba730(void) {
  FTRACE(0x12cba730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cba730 push ebp */
  push32((uint32_t)(EBP));
  /* 12cba731 mov ebp, esp */
  EBP = (ESP);
  /* 12cba733 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cba739 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 12cba73f push eax */
  push32((uint32_t)(EAX));
  /* 12cba740 mov ecx, dword ptr [0x12ce1c04] */
  ECX = (r32((uint32_t)(0x12ce1c04)));
  /* 12cba746 push ecx */
  push32((uint32_t)(ECX));
  /* 12cba747 call dword ptr [0x12ce32e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32e0))), 0x12cba74du);
  /* 12cba74d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cba750 jne 0x12cba969 */
  if (!C.zf) goto L_12cba969;
  /* 12cba756 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12cba760 jmp 0x12cba771 */
  goto L_12cba771;
L_12cba762:;
  /* 12cba762 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cba768 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cba76b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_12cba771:;
  /* 12cba771 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cba77b jae 0x12cba792 */
  if (!C.cf) goto L_12cba792;
  /* 12cba77d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cba783 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 12cba789 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 12cba790 jmp 0x12cba762 */
  goto L_12cba762;
L_12cba792:;
  /* 12cba792 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 12cba799 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 12cba79f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cba7a2 jmp 0x12cba7ad */
  goto L_12cba7ad;
L_12cba7a4:;
  /* 12cba7a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cba7a7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cba7aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cba7ad:;
  /* 12cba7ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cba7b0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cba7b2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12cba7b4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cba7b6 je 0x12cba7f8 */
  if (C.zf) goto L_12cba7f8;
  /* 12cba7b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cba7bb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cba7bd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12cba7bf mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 12cba7c5 jmp 0x12cba7d6 */
  goto L_12cba7d6;
L_12cba7c7:;
  /* 12cba7c7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cba7cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cba7d0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_12cba7d6:;
  /* 12cba7d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cba7d9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cba7db mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12cba7de cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cba7e4 ja 0x12cba7f6 */
  if ((!C.cf&&!C.zf)) goto L_12cba7f6;
  /* 12cba7e6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cba7ec mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 12cba7f4 jmp 0x12cba7c7 */
  goto L_12cba7c7;
L_12cba7f6:;
  /* 12cba7f6 jmp 0x12cba7a4 */
  goto L_12cba7a4;
L_12cba7f8:;
  /* 12cba7f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cba7fa mov eax, dword ptr [0x12ce1ea4] */
  EAX = (r32((uint32_t)(0x12ce1ea4)));
  /* 12cba7ff push eax */
  push32((uint32_t)(EAX));
  /* 12cba800 mov ecx, dword ptr [0x12ce1c04] */
  ECX = (r32((uint32_t)(0x12ce1c04)));
  /* 12cba806 push ecx */
  push32((uint32_t)(ECX));
  /* 12cba807 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 12cba80d push edx */
  push32((uint32_t)(EDX));
  /* 12cba80e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12cba813 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 12cba819 push eax */
  push32((uint32_t)(EAX));
  /* 12cba81a push 1 */
  push32((uint32_t)(0x1u));
  /* 12cba81c call 0x12cbc3e0 */
  push32(0x12cba821u); f_12cbc3e0();
  /* 12cba821 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cba824 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cba826 mov ecx, dword ptr [0x12ce1c04] */
  ECX = (r32((uint32_t)(0x12ce1c04)));
  /* 12cba82c push ecx */
  push32((uint32_t)(ECX));
  /* 12cba82d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12cba832 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 12cba838 push edx */
  push32((uint32_t)(EDX));
  /* 12cba839 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12cba83e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 12cba844 push eax */
  push32((uint32_t)(EAX));
  /* 12cba845 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12cba84a mov ecx, dword ptr [0x12ce1ea4] */
  ECX = (r32((uint32_t)(0x12ce1ea4)));
  /* 12cba850 push ecx */
  push32((uint32_t)(ECX));
  /* 12cba851 call 0x12cbc5a0 */
  push32(0x12cba856u); f_12cbc5a0();
  /* 12cba856 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cba859 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cba85b mov edx, dword ptr [0x12ce1c04] */
  EDX = (r32((uint32_t)(0x12ce1c04)));
  /* 12cba861 push edx */
  push32((uint32_t)(EDX));
  /* 12cba862 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12cba867 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 12cba86d push eax */
  push32((uint32_t)(EAX));
  /* 12cba86e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12cba873 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 12cba879 push ecx */
  push32((uint32_t)(ECX));
  /* 12cba87a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 12cba87f mov edx, dword ptr [0x12ce1ea4] */
  EDX = (r32((uint32_t)(0x12ce1ea4)));
  /* 12cba885 push edx */
  push32((uint32_t)(EDX));
  /* 12cba886 call 0x12cbc5a0 */
  push32(0x12cba88bu); f_12cbc5a0();
  /* 12cba88b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cba88e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12cba898 jmp 0x12cba8a9 */
  goto L_12cba8a9;
L_12cba89a:;
  /* 12cba89a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cba8a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cba8a3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12cba8a9:;
  /* 12cba8a9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cba8b3 jae 0x12cba964 */
  if (!C.cf) goto L_12cba964;
  /* 12cba8b9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cba8bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cba8c1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 12cba8c9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12cba8cc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cba8ce je 0x12cba906 */
  if (C.zf) goto L_12cba906;
  /* 12cba8d0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cba8d6 mov cl, byte ptr [eax + 0x12ce1da1] */
  CL = (r8((uint32_t)(EAX + 0x12ce1da1)));
  /* 12cba8dc or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 12cba8df mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cba8e5 mov byte ptr [edx + 0x12ce1da1], cl */
  w8((uint32_t)(EDX + 0x12ce1da1), (CL));
  /* 12cba8eb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cba8f1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cba8f7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 12cba8fe mov byte ptr [eax + 0x12ce1ca0], dl */
  w8((uint32_t)(EAX + 0x12ce1ca0), (DL));
  /* 12cba904 jmp 0x12cba95f */
  goto L_12cba95f;
L_12cba906:;
  /* 12cba906 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cba90c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cba90e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 12cba916 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12cba919 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cba91b je 0x12cba952 */
  if (C.zf) goto L_12cba952;
  /* 12cba91d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cba923 mov al, byte ptr [edx + 0x12ce1da1] */
  AL = (r8((uint32_t)(EDX + 0x12ce1da1)));
  /* 12cba929 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12cba92b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cba931 mov byte ptr [ecx + 0x12ce1da1], al */
  w8((uint32_t)(ECX + 0x12ce1da1), (AL));
  /* 12cba937 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cba93d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cba943 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 12cba94a mov byte ptr [edx + 0x12ce1ca0], cl */
  w8((uint32_t)(EDX + 0x12ce1ca0), (CL));
  /* 12cba950 jmp 0x12cba95f */
  goto L_12cba95f;
L_12cba952:;
  /* 12cba952 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cba958 mov byte ptr [edx + 0x12ce1ca0], 0 */
  w8((uint32_t)(EDX + 0x12ce1ca0), (0x0u));
L_12cba95f:;
  /* 12cba95f jmp 0x12cba89a */
  goto L_12cba89a;
L_12cba964:;
  /* 12cba964 jmp 0x12cbaa2e */
  goto L_12cbaa2e;
L_12cba969:;
  /* 12cba969 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12cba973 jmp 0x12cba984 */
  goto L_12cba984;
L_12cba975:;
  /* 12cba975 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cba97b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cba97e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12cba984:;
  /* 12cba984 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cba98e jae 0x12cbaa2e */
  if (!C.cf) goto L_12cbaa2e;
  /* 12cba994 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cba99b jb 0x12cba9d8 */
  if (C.cf) goto L_12cba9d8;
  /* 12cba99d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cba9a4 ja 0x12cba9d8 */
  if ((!C.cf&&!C.zf)) goto L_12cba9d8;
  /* 12cba9a6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cba9ac mov dl, byte ptr [ecx + 0x12ce1da1] */
  DL = (r8((uint32_t)(ECX + 0x12ce1da1)));
  /* 12cba9b2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 12cba9b5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cba9bb mov byte ptr [eax + 0x12ce1da1], dl */
  w8((uint32_t)(EAX + 0x12ce1da1), (DL));
  /* 12cba9c1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cba9c7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cba9ca mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cba9d0 mov byte ptr [edx + 0x12ce1ca0], cl */
  w8((uint32_t)(EDX + 0x12ce1ca0), (CL));
  /* 12cba9d6 jmp 0x12cbaa29 */
  goto L_12cbaa29;
L_12cba9d8:;
  /* 12cba9d8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cba9df jb 0x12cbaa1c */
  if (C.cf) goto L_12cbaa1c;
  /* 12cba9e1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cba9e8 ja 0x12cbaa1c */
  if ((!C.cf&&!C.zf)) goto L_12cbaa1c;
  /* 12cba9ea mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cba9f0 mov cl, byte ptr [eax + 0x12ce1da1] */
  CL = (r8((uint32_t)(EAX + 0x12ce1da1)));
  /* 12cba9f6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12cba9f9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cba9ff mov byte ptr [edx + 0x12ce1da1], cl */
  w8((uint32_t)(EDX + 0x12ce1da1), (CL));
  /* 12cbaa05 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cbaa0b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbaa0e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cbaa14 mov byte ptr [ecx + 0x12ce1ca0], al */
  w8((uint32_t)(ECX + 0x12ce1ca0), (AL));
  /* 12cbaa1a jmp 0x12cbaa29 */
  goto L_12cbaa29;
L_12cbaa1c:;
  /* 12cbaa1c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12cbaa22 mov byte ptr [edx + 0x12ce1ca0], 0 */
  w8((uint32_t)(EDX + 0x12ce1ca0), (0x0u));
L_12cbaa29:;
  /* 12cbaa29 jmp 0x12cba975 */
  goto L_12cba975;
L_12cbaa2e:;
  /* 12cbaa2e mov esp, ebp */
  ESP = (EBP);
  /* 12cbaa30 pop ebp */
  EBP = (pop32());
  /* 12cbaa31 ret  */
  ESPCHK(0x12cba730u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa40 @ 0x12cbaa40 (23 bytes, 9 insns) */
void f_12cbaa40(void) {
  FTRACE(0x12cbaa40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbaa40 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbaa41 mov ebp, esp */
  EBP = (ESP);
  /* 12cbaa43 cmp dword ptr [0x12ce1c8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce1c8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbaa4a je 0x12cbaa53 */
  if (C.zf) goto L_12cbaa53;
  /* 12cbaa4c mov eax, dword ptr [0x12ce1c04] */
  EAX = (r32((uint32_t)(0x12ce1c04)));
  /* 12cbaa51 jmp 0x12cbaa55 */
  goto L_12cbaa55;
L_12cbaa53:;
  /* 12cbaa53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cbaa55:;
  /* 12cbaa55 pop ebp */
  EBP = (pop32());
  /* 12cbaa56 ret  */
  ESPCHK(0x12cbaa40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa60 @ 0x12cbaa60 (34 bytes, 10 insns) */
void f_12cbaa60(void) {
  FTRACE(0x12cbaa60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbaa60 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbaa61 mov ebp, esp */
  EBP = (ESP);
  /* 12cbaa63 cmp dword ptr [0x12ce2050], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce2050))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbaa6a jne 0x12cbaa80 */
  if (!C.zf) goto L_12cbaa80;
  /* 12cbaa6c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 12cbaa6e call 0x12cba280 */
  push32(0x12cbaa73u); f_12cba280();
  /* 12cbaa73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbaa76 mov dword ptr [0x12ce2050], 1 */
  w32((uint32_t)(0x12ce2050), (0x1u));
L_12cbaa80:;
  /* 12cbaa80 pop ebp */
  EBP = (pop32());
  /* 12cbaa81 ret  */
  ESPCHK(0x12cbaa60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa90 @ 0x12cbaa90 (664 bytes, 259 insns) [15 switch table(s)] */
void f_12cbaa90(void) {
  FTRACE(0x12cbaa90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbaa90 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbaa91 mov ebp, esp */
  EBP = (ESP);
  /* 12cbaa93 push edi */
  push32((uint32_t)(EDI));
  /* 12cbaa94 push esi */
  push32((uint32_t)(ESI));
  /* 12cbaa95 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbaa98 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cbaa9b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbaa9e mov eax, ecx */
  EAX = (ECX);
  /* 12cbaaa0 mov edx, ecx */
  EDX = (ECX);
  /* 12cbaaa2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbaaa4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbaaa6 jbe 0x12cbaab0 */
  if ((C.cf||C.zf)) goto L_12cbaab0;
  /* 12cbaaa8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbaaaa jb 0x12cbac28 */
  if (C.cf) goto L_12cbac28;
L_12cbaab0:;
  /* 12cbaab0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12cbaab6 jne 0x12cbaacc */
  if (!C.zf) goto L_12cbaacc;
  /* 12cbaab8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12cbaabb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12cbaabe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbaac1 jb 0x12cbaaec */
  if (C.cf) goto L_12cbaaec;
  /* 12cbaac3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12cbaac5 jmp dword ptr [edx*4 + 0x12cbabd8] */
  switch (EDX) {
    case 0: goto L_12cbabe8;
    case 1: goto L_12cbabf0;
    case 2: goto L_12cbabfc;
    case 3: goto L_12cbac10;
    default: x86_unimpl("switch@0x12cbaac5 out of table"); return;
  }
L_12cbaacc:;
  /* 12cbaacc mov eax, edi */
  EAX = (EDI);
  /* 12cbaace mov edx, 3 */
  EDX = (0x3u);
  /* 12cbaad3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbaad6 jb 0x12cbaae4 */
  if (C.cf) goto L_12cbaae4;
  /* 12cbaad8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12cbaadb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbaadd jmp dword ptr [eax*4 + 0x12cbaaf0] */
  switch (EAX) {
    case 1: goto L_12cbab00;
    case 2: goto L_12cbab2c;
    case 3: goto L_12cbab50;
    default: x86_unimpl("switch@0x12cbaadd out of table"); return;
  }
L_12cbaae4:;
  /* 12cbaae4 jmp dword ptr [ecx*4 + 0x12cbabe8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x12cbabe8)))); return;
  /* 12cbaaeb nop  */
  /* nop */
L_12cbaaec:;
  /* 12cbaaec jmp dword ptr [ecx*4 + 0x12cbab6c] */
  switch (ECX) {
    case 0: goto L_12cbabcf;
    case 1: goto L_12cbabbc;
    case 2: goto L_12cbabb4;
    case 3: goto L_12cbabac;
    case 4: goto L_12cbaba4;
    case 5: goto L_12cbab9c;
    case 6: goto L_12cbab94;
    case 7: goto L_12cbab8c;
    default: x86_unimpl("switch@0x12cbaaec out of table"); return;
  }
  /* 12cbaaf3 nop  */
  /* nop */
L_12cbab00:;
  /* 12cbab00 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12cbab02 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12cbab04 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12cbab06 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12cbab09 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12cbab0c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12cbab0f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12cbab12 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12cbab15 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbab18 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbab1b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbab1e jb 0x12cbaaec */
  if (C.cf) goto L_12cbaaec;
  /* 12cbab20 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12cbab22 jmp dword ptr [edx*4 + 0x12cbabd8] */
  switch (EDX) {
    case 0: goto L_12cbabe8;
    case 1: goto L_12cbabf0;
    case 2: goto L_12cbabfc;
    case 3: goto L_12cbac10;
    default: x86_unimpl("switch@0x12cbab22 out of table"); return;
  }
  /* 12cbab29 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12cbab2c:;
  /* 12cbab2c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12cbab2e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12cbab30 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12cbab32 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12cbab35 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12cbab38 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12cbab3b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbab3e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbab41 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbab44 jb 0x12cbaaec */
  if (C.cf) goto L_12cbaaec;
  /* 12cbab46 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12cbab48 jmp dword ptr [edx*4 + 0x12cbabd8] */
  switch (EDX) {
    case 0: goto L_12cbabe8;
    case 1: goto L_12cbabf0;
    case 2: goto L_12cbabfc;
    case 3: goto L_12cbac10;
    default: x86_unimpl("switch@0x12cbab48 out of table"); return;
  }
  /* 12cbab4f nop  */
  /* nop */
L_12cbab50:;
  /* 12cbab50 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12cbab52 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12cbab54 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12cbab56 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12cbab57 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12cbab5a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12cbab5b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbab5e jb 0x12cbaaec */
  if (C.cf) goto L_12cbaaec;
  /* 12cbab60 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12cbab62 jmp dword ptr [edx*4 + 0x12cbabd8] */
  switch (EDX) {
    case 0: goto L_12cbabe8;
    case 1: goto L_12cbabf0;
    case 2: goto L_12cbabfc;
    case 3: goto L_12cbac10;
    default: x86_unimpl("switch@0x12cbab62 out of table"); return;
  }
  /* 12cbab69 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12cbab8c:;
  /* 12cbab8c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 12cbab90 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_12cbab94:;
  /* 12cbab94 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 12cbab98 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_12cbab9c:;
  /* 12cbab9c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 12cbaba0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_12cbaba4:;
  /* 12cbaba4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 12cbaba8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_12cbabac:;
  /* 12cbabac mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 12cbabb0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_12cbabb4:;
  /* 12cbabb4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 12cbabb8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_12cbabbc:;
  /* 12cbabbc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 12cbabc0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 12cbabc4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12cbabcb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbabcd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12cbabcf:;
  /* 12cbabcf jmp dword ptr [edx*4 + 0x12cbabd8] */
  switch (EDX) {
    case 0: goto L_12cbabe8;
    case 1: goto L_12cbabf0;
    case 2: goto L_12cbabfc;
    case 3: goto L_12cbac10;
    default: x86_unimpl("switch@0x12cbabcf out of table"); return;
  }
  /* 12cbabd6 mov edi, edi */
  EDI = (EDI);
L_12cbabe8:;
  /* 12cbabe8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbabeb pop esi */
  ESI = (pop32());
  /* 12cbabec pop edi */
  EDI = (pop32());
  /* 12cbabed leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12cbabee ret  */
  ESPCHK(0x12cbaa90u, _esp0);
  ESP += 4; return;
  /* 12cbabef nop  */
  /* nop */
L_12cbabf0:;
  /* 12cbabf0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12cbabf2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12cbabf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbabf7 pop esi */
  ESI = (pop32());
  /* 12cbabf8 pop edi */
  EDI = (pop32());
  /* 12cbabf9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12cbabfa ret  */
  ESPCHK(0x12cbaa90u, _esp0);
  ESP += 4; return;
  /* 12cbabfb nop  */
  /* nop */
L_12cbabfc:;
  /* 12cbabfc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12cbabfe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12cbac00 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12cbac03 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12cbac06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbac09 pop esi */
  ESI = (pop32());
  /* 12cbac0a pop edi */
  EDI = (pop32());
  /* 12cbac0b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12cbac0c ret  */
  ESPCHK(0x12cbaa90u, _esp0);
  ESP += 4; return;
  /* 12cbac0d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12cbac10:;
  /* 12cbac10 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12cbac12 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12cbac14 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12cbac17 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12cbac1a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12cbac1d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12cbac20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbac23 pop esi */
  ESI = (pop32());
  /* 12cbac24 pop edi */
  EDI = (pop32());
  /* 12cbac25 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12cbac26 ret  */
  ESPCHK(0x12cbaa90u, _esp0);
  ESP += 4; return;
  /* 12cbac27 nop  */
  /* nop */
L_12cbac28:;
  /* 12cbac28 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 12cbac2c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 12cbac30 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12cbac36 jne 0x12cbac5c */
  if (!C.zf) goto L_12cbac5c;
  /* 12cbac38 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12cbac3b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12cbac3e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbac41 jb 0x12cbac50 */
  if (C.cf) goto L_12cbac50;
  /* 12cbac43 std  */
  C.df=1;
  /* 12cbac44 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12cbac46 cld  */
  C.df=0;
  /* 12cbac47 jmp dword ptr [edx*4 + 0x12cbad70] */
  switch (EDX) {
    case 0: goto L_12cbad80;
    case 1: goto L_12cbad88;
    case 2: goto L_12cbad98;
    case 3: goto L_12cbadac;
    default: x86_unimpl("switch@0x12cbac47 out of table"); return;
  }
  /* 12cbac4e mov edi, edi */
  EDI = (EDI);
L_12cbac50:;
  /* 12cbac50 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cbac52 jmp dword ptr [ecx*4 + 0x12cbad20] */
  switch (ECX) {
    case 0: goto L_12cbad67;
    default: x86_unimpl("switch@0x12cbac52 out of table"); return;
  }
  /* 12cbac59 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12cbac5c:;
  /* 12cbac5c mov eax, edi */
  EAX = (EDI);
  /* 12cbac5e mov edx, 3 */
  EDX = (0x3u);
  /* 12cbac63 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbac66 jb 0x12cbac74 */
  if (C.cf) goto L_12cbac74;
  /* 12cbac68 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12cbac6b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbac6d jmp dword ptr [eax*4 + 0x12cbac78] */
  switch (EAX) {
    case 1: goto L_12cbac88;
    case 2: goto L_12cbaca8;
    case 3: goto L_12cbacd0;
    default: x86_unimpl("switch@0x12cbac6d out of table"); return;
  }
L_12cbac74:;
  /* 12cbac74 jmp dword ptr [ecx*4 + 0x12cbad70] */
  switch (ECX) {
    case 0: goto L_12cbad80;
    case 1: goto L_12cbad88;
    case 2: goto L_12cbad98;
    case 3: goto L_12cbadac;
    default: x86_unimpl("switch@0x12cbac74 out of table"); return;
  }
  /* 12cbac7b nop  */
  /* nop */
L_12cbac88:;
  /* 12cbac88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12cbac8b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12cbac8d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12cbac90 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12cbac91 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12cbac94 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12cbac95 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbac98 jb 0x12cbac50 */
  if (C.cf) goto L_12cbac50;
  /* 12cbac9a std  */
  C.df=1;
  /* 12cbac9b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12cbac9d cld  */
  C.df=0;
  /* 12cbac9e jmp dword ptr [edx*4 + 0x12cbad70] */
  switch (EDX) {
    case 0: goto L_12cbad80;
    case 1: goto L_12cbad88;
    case 2: goto L_12cbad98;
    case 3: goto L_12cbadac;
    default: x86_unimpl("switch@0x12cbac9e out of table"); return;
  }
  /* 12cbaca5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12cbaca8:;
  /* 12cbaca8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12cbacab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12cbacad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12cbacb0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12cbacb3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12cbacb6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12cbacb9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbacbc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbacbf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbacc2 jb 0x12cbac50 */
  if (C.cf) goto L_12cbac50;
  /* 12cbacc4 std  */
  C.df=1;
  /* 12cbacc5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12cbacc7 cld  */
  C.df=0;
  /* 12cbacc8 jmp dword ptr [edx*4 + 0x12cbad70] */
  switch (EDX) {
    case 0: goto L_12cbad80;
    case 1: goto L_12cbad88;
    case 2: goto L_12cbad98;
    case 3: goto L_12cbadac;
    default: x86_unimpl("switch@0x12cbacc8 out of table"); return;
  }
  /* 12cbaccf nop  */
  /* nop */
L_12cbacd0:;
  /* 12cbacd0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12cbacd3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12cbacd5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12cbacd8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12cbacdb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12cbacde mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12cbace1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12cbace4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12cbace7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbacea sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbaced cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbacf0 jb 0x12cbac50 */
  if (C.cf) goto L_12cbac50;
  /* 12cbacf6 std  */
  C.df=1;
  /* 12cbacf7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12cbacf9 cld  */
  C.df=0;
  /* 12cbacfa jmp dword ptr [edx*4 + 0x12cbad70] */
  switch (EDX) {
    case 0: goto L_12cbad80;
    case 1: goto L_12cbad88;
    case 2: goto L_12cbad98;
    case 3: goto L_12cbadac;
    default: x86_unimpl("switch@0x12cbacfa out of table"); return;
  }
  /* 12cbad01 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 12cbad04 and al, 0xad */
  { uint32_t _r=(AL)&(0xadu); AL = (_r); fl_logic(_r,8); }
  /* 12cbad06 retf  */
  x86_unimpl("retf @ 0x12cbad06");
  /* 12cbad07 adc ch, byte ptr [ebp*4 - 0x52cbed35] */
  { uint32_t _a=(C.c.b.h),_b=(r8((uint32_t)(EBP*4 + -0x52cbed35))),_r=_a+_b+C.cf; C.c.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 12cbad0e retf  */
  x86_unimpl("retf @ 0x12cbad0e");
  /* 12cbad0f adc bh, byte ptr [ebp*4 - 0x52bbed35] */
  { uint32_t _a=(C.b.b.h),_b=(r8((uint32_t)(EBP*4 + -0x52bbed35))),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 12cbad16 retf  */
  x86_unimpl("retf @ 0x12cbad16");
  /* 12cbad17 adc cl, byte ptr [ebp + ebp*4 - 0x35] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EBP + EBP*4 + -0x35))),_r=_a+_b+C.cf; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12cbad1b adc dl, byte ptr [ebp + ebp*4 - 0x35] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EBP + EBP*4 + -0x35))),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 12cbad24 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 12cbad28 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 12cbad2c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 12cbad30 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 12cbad34 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 12cbad38 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 12cbad3c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 12cbad40 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 12cbad44 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 12cbad48 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 12cbad4c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 12cbad50 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 12cbad54 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 12cbad58 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 12cbad5c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12cbad63 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbad65 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12cbad67:;
  /* 12cbad67 jmp dword ptr [edx*4 + 0x12cbad70] */
  switch (EDX) {
    case 0: goto L_12cbad80;
    case 1: goto L_12cbad88;
    case 2: goto L_12cbad98;
    case 3: goto L_12cbadac;
    default: x86_unimpl("switch@0x12cbad67 out of table"); return;
  }
  /* 12cbad6e mov edi, edi */
  EDI = (EDI);
L_12cbad80:;
  /* 12cbad80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbad83 pop esi */
  ESI = (pop32());
  /* 12cbad84 pop edi */
  EDI = (pop32());
  /* 12cbad85 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12cbad86 ret  */
  ESPCHK(0x12cbaa90u, _esp0);
  ESP += 4; return;
  /* 12cbad87 nop  */
  /* nop */
L_12cbad88:;
  /* 12cbad88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12cbad8b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12cbad8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbad91 pop esi */
  ESI = (pop32());
  /* 12cbad92 pop edi */
  EDI = (pop32());
  /* 12cbad93 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12cbad94 ret  */
  ESPCHK(0x12cbaa90u, _esp0);
  ESP += 4; return;
  /* 12cbad95 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12cbad98:;
  /* 12cbad98 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12cbad9b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12cbad9e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12cbada1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12cbada4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbada7 pop esi */
  ESI = (pop32());
  /* 12cbada8 pop edi */
  EDI = (pop32());
  /* 12cbada9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12cbadaa ret  */
  ESPCHK(0x12cbaa90u, _esp0);
  ESP += 4; return;
  /* 12cbadab nop  */
  /* nop */
L_12cbadac:;
  /* 12cbadac mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12cbadaf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12cbadb2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12cbadb5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12cbadb8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12cbadbb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12cbadbe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbadc1 pop esi */
  ESI = (pop32());
  /* 12cbadc2 pop edi */
  EDI = (pop32());
  /* 12cbadc3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12cbadc4 ret  */
  ESPCHK(0x12cbaa90u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x12cbadd0 (104 bytes, 43 insns) */
void f_12cbadd0(void) {
  FTRACE(0x12cbadd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbadd0 push ebx */
  push32((uint32_t)(EBX));
  /* 12cbadd1 push esi */
  push32((uint32_t)(ESI));
  /* 12cbadd2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 12cbadd6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbadd8 jne 0x12cbadf2 */
  if (!C.zf) goto L_12cbadf2;
  /* 12cbadda mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 12cbadde mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12cbade2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cbade4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12cbade6 mov ebx, eax */
  EBX = (EAX);
  /* 12cbade8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 12cbadec div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12cbadee mov edx, ebx */
  EDX = (EBX);
  /* 12cbadf0 jmp 0x12cbae33 */
  goto L_12cbae33;
L_12cbadf2:;
  /* 12cbadf2 mov ecx, eax */
  ECX = (EAX);
  /* 12cbadf4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 12cbadf8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 12cbadfc mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_12cbae00:;
  /* 12cbae00 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12cbae02 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 12cbae04 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12cbae06 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 12cbae08 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbae0a jne 0x12cbae00 */
  if (!C.zf) goto L_12cbae00;
  /* 12cbae0c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12cbae0e mov esi, eax */
  ESI = (EAX);
  /* 12cbae10 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12cbae14 mov ecx, eax */
  ECX = (EAX);
  /* 12cbae16 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 12cbae1a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12cbae1c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbae1e jb 0x12cbae2e */
  if (C.cf) goto L_12cbae2e;
  /* 12cbae20 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbae24 ja 0x12cbae2e */
  if ((!C.cf&&!C.zf)) goto L_12cbae2e;
  /* 12cbae26 jb 0x12cbae2f */
  if (C.cf) goto L_12cbae2f;
  /* 12cbae28 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbae2c jbe 0x12cbae2f */
  if ((C.cf||C.zf)) goto L_12cbae2f;
L_12cbae2e:;
  /* 12cbae2e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_12cbae2f:;
  /* 12cbae2f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cbae31 mov eax, esi */
  EAX = (ESI);
L_12cbae33:;
  /* 12cbae33 pop esi */
  ESI = (pop32());
  /* 12cbae34 pop ebx */
  EBX = (pop32());
  /* 12cbae35 ret 0x10 */
  ESPCHK(0x12cbadd0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x12cbae40 (117 bytes, 44 insns) */
void f_12cbae40(void) {
  FTRACE(0x12cbae40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbae40 push ebx */
  push32((uint32_t)(EBX));
  /* 12cbae41 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 12cbae45 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbae47 jne 0x12cbae61 */
  if (!C.zf) goto L_12cbae61;
  /* 12cbae49 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12cbae4d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 12cbae51 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cbae53 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12cbae55 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12cbae59 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12cbae5b mov eax, edx */
  EAX = (EDX);
  /* 12cbae5d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cbae5f jmp 0x12cbaeb1 */
  goto L_12cbaeb1;
L_12cbae61:;
  /* 12cbae61 mov ecx, eax */
  ECX = (EAX);
  /* 12cbae63 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 12cbae67 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 12cbae6b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_12cbae6f:;
  /* 12cbae6f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12cbae71 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 12cbae73 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12cbae75 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 12cbae77 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbae79 jne 0x12cbae6f */
  if (!C.zf) goto L_12cbae6f;
  /* 12cbae7b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12cbae7d mov ecx, eax */
  ECX = (EAX);
  /* 12cbae7f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12cbae83 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 12cbae84 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12cbae88 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbae8a jb 0x12cbae9a */
  if (C.cf) goto L_12cbae9a;
  /* 12cbae8c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbae90 ja 0x12cbae9a */
  if ((!C.cf&&!C.zf)) goto L_12cbae9a;
  /* 12cbae92 jb 0x12cbaea2 */
  if (C.cf) goto L_12cbaea2;
  /* 12cbae94 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbae98 jbe 0x12cbaea2 */
  if ((C.cf||C.zf)) goto L_12cbaea2;
L_12cbae9a:;
  /* 12cbae9a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbae9e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12cbaea2:;
  /* 12cbaea2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbaea6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbaeaa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cbaeac neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cbaeae sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12cbaeb1:;
  /* 12cbaeb1 pop ebx */
  EBX = (pop32());
  /* 12cbaeb2 ret 0x10 */
  ESPCHK(0x12cbae40u, _esp0);
  ESP += 20; return;
}

/* FUN_1000aec0 @ 0x12cbaec0 (628 bytes, 214 insns) */
void f_12cbaec0(void) {
  FTRACE(0x12cbaec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbaec0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbaec1 mov ebp, esp */
  EBP = (ESP);
  /* 12cbaec3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbaec6 push ebx */
  push32((uint32_t)(EBX));
  /* 12cbaec7 push esi */
  push32((uint32_t)(ESI));
  /* 12cbaec8 push edi */
  push32((uint32_t)(EDI));
L_12cbaec9:;
  /* 12cbaec9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbaecd jne 0x12cbaeed */
  if (!C.zf) goto L_12cbaeed;
  /* 12cbaecf push 0x12cdc2f4 */
  push32((uint32_t)(0x12cdc2f4u));
  /* 12cbaed4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbaed6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 12cbaed8 push 0x12cdc2e8 */
  push32((uint32_t)(0x12cdc2e8u));
  /* 12cbaedd push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbaedf call 0x12cb3270 */
  push32(0x12cbaee4u); f_12cb3270();
  /* 12cbaee4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbaee7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbaeea jne 0x12cbaeed */
  if (!C.zf) goto L_12cbaeed;
  /* 12cbaeec int3  */
  x86_unimpl("int3 @ 0x12cbaeec");
L_12cbaeed:;
  /* 12cbaeed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbaeef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbaef1 jne 0x12cbaec9 */
  if (!C.zf) goto L_12cbaec9;
  /* 12cbaef3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbaef6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cbaef9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbaefc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12cbaeff mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12cbaf02 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbaf05 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12cbaf08 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 12cbaf0e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cbaf10 je 0x12cbaf1f */
  if (C.zf) goto L_12cbaf1f;
  /* 12cbaf12 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbaf15 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12cbaf18 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 12cbaf1b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cbaf1d je 0x12cbaf35 */
  if (C.zf) goto L_12cbaf35;
L_12cbaf1f:;
  /* 12cbaf1f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbaf22 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12cbaf25 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12cbaf27 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbaf2a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 12cbaf2d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cbaf30 jmp 0x12cbb12d */
  goto L_12cbb12d;
L_12cbaf35:;
  /* 12cbaf35 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbaf38 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12cbaf3b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12cbaf3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbaf40 je 0x12cbaf8c */
  if (C.zf) goto L_12cbaf8c;
  /* 12cbaf42 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbaf45 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12cbaf4c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbaf4f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12cbaf52 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 12cbaf55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbaf57 je 0x12cbaf75 */
  if (C.zf) goto L_12cbaf75;
  /* 12cbaf59 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbaf5c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbaf5f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12cbaf62 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12cbaf64 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbaf67 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12cbaf6a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 12cbaf6d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbaf70 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12cbaf73 jmp 0x12cbaf8c */
  goto L_12cbaf8c;
L_12cbaf75:;
  /* 12cbaf75 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbaf78 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12cbaf7b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 12cbaf7e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbaf81 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12cbaf84 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cbaf87 jmp 0x12cbb12d */
  goto L_12cbb12d;
L_12cbaf8c:;
  /* 12cbaf8c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbaf8f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12cbaf92 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12cbaf95 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbaf98 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12cbaf9b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbaf9e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12cbafa1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 12cbafa4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbafa7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12cbafaa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbafad mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12cbafb4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cbafbb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbafbe mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12cbafc1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbafc4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12cbafc7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 12cbafcd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cbafcf jne 0x12cbafff */
  if (!C.zf) goto L_12cbafff;
  /* 12cbafd1 cmp dword ptr [ebp - 8], 0x12cdf140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12cdf140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbafd8 je 0x12cbafe3 */
  if (C.zf) goto L_12cbafe3;
  /* 12cbafda cmp dword ptr [ebp - 8], 0x12cdf160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12cdf160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbafe1 jne 0x12cbaff3 */
  if (!C.zf) goto L_12cbaff3;
L_12cbafe3:;
  /* 12cbafe3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cbafe6 push edx */
  push32((uint32_t)(EDX));
  /* 12cbafe7 call 0x12cbce30 */
  push32(0x12cbafecu); f_12cbce30();
  /* 12cbafec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbafef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbaff1 jne 0x12cbafff */
  if (!C.zf) goto L_12cbafff;
L_12cbaff3:;
  /* 12cbaff3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbaff6 push eax */
  push32((uint32_t)(EAX));
  /* 12cbaff7 call 0x12cbcd60 */
  push32(0x12cbaffcu); f_12cbcd60();
  /* 12cbaffc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cbafff:;
  /* 12cbafff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbb002 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12cbb005 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 12cbb00b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cbb00d je 0x12cbb0eb */
  if (C.zf) goto L_12cbb0eb;
L_12cbb013:;
  /* 12cbb013 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbb016 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbb019 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 12cbb01b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbb01e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cbb020 jge 0x12cbb043 */
  if ((C.sf==C.of)) goto L_12cbb043;
  /* 12cbb022 push 0x12cdc2a8 */
  push32((uint32_t)(0x12cdc2a8u));
  /* 12cbb027 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbb029 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 12cbb02e push 0x12cdc2e8 */
  push32((uint32_t)(0x12cdc2e8u));
  /* 12cbb033 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbb035 call 0x12cb3270 */
  push32(0x12cbb03au); f_12cb3270();
  /* 12cbb03a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbb03d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbb040 jne 0x12cbb043 */
  if (!C.zf) goto L_12cbb043;
  /* 12cbb042 int3  */
  x86_unimpl("int3 @ 0x12cbb042");
L_12cbb043:;
  /* 12cbb043 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbb045 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbb047 jne 0x12cbb013 */
  if (!C.zf) goto L_12cbb013;
  /* 12cbb049 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbb04c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbb04f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12cbb051 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbb054 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cbb057 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbb05a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12cbb05d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbb060 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbb063 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12cbb065 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbb068 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12cbb06b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbb06e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbb071 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12cbb074 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbb078 jle 0x12cbb096 */
  if ((C.zf||C.sf!=C.of)) goto L_12cbb096;
  /* 12cbb07a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbb07d push ecx */
  push32((uint32_t)(ECX));
  /* 12cbb07e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbb081 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12cbb084 push eax */
  push32((uint32_t)(EAX));
  /* 12cbb085 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cbb088 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbb089 call 0x12cbca50 */
  push32(0x12cbb08eu); f_12cbca50();
  /* 12cbb08e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbb091 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cbb094 jmp 0x12cbb0de */
  goto L_12cbb0de;
L_12cbb096:;
  /* 12cbb096 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbb09a je 0x12cbb0b9 */
  if (C.zf) goto L_12cbb0b9;
  /* 12cbb09c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cbb09f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12cbb0a2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cbb0a5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12cbb0a8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cbb0ab mov ecx, dword ptr [edx*4 + 0x12ce1f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12ce1f00)));
  /* 12cbb0b2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbb0b4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12cbb0b7 jmp 0x12cbb0c0 */
  goto L_12cbb0c0;
L_12cbb0b9:;
  /* 12cbb0b9 mov dword ptr [ebp - 0x14], 0x12cdea60 */
  w32((uint32_t)(EBP + -0x14), (0x12cdea60u));
L_12cbb0c0:;
  /* 12cbb0c0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cbb0c3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 12cbb0c7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12cbb0ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbb0cc je 0x12cbb0de */
  if (C.zf) goto L_12cbb0de;
  /* 12cbb0ce push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbb0d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbb0d2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cbb0d5 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbb0d6 call 0x12cbc900 */
  push32(0x12cbb0dbu); f_12cbc900();
  /* 12cbb0db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cbb0de:;
  /* 12cbb0de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbb0e1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12cbb0e4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12cbb0e7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12cbb0e9 jmp 0x12cbb109 */
  goto L_12cbb109;
L_12cbb0eb:;
  /* 12cbb0eb mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12cbb0f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbb0f5 push edx */
  push32((uint32_t)(EDX));
  /* 12cbb0f6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12cbb0f9 push eax */
  push32((uint32_t)(EAX));
  /* 12cbb0fa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cbb0fd push ecx */
  push32((uint32_t)(ECX));
  /* 12cbb0fe call 0x12cbca50 */
  push32(0x12cbb103u); f_12cbca50();
  /* 12cbb103 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbb106 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12cbb109:;
  /* 12cbb109 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbb10c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbb10f je 0x12cbb125 */
  if (C.zf) goto L_12cbb125;
  /* 12cbb111 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbb114 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12cbb117 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12cbb11a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbb11d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12cbb120 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cbb123 jmp 0x12cbb12d */
  goto L_12cbb12d;
L_12cbb125:;
  /* 12cbb125 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbb128 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_12cbb12d:;
  /* 12cbb12d pop edi */
  EDI = (pop32());
  /* 12cbb12e pop esi */
  ESI = (pop32());
  /* 12cbb12f pop ebx */
  EBX = (pop32());
  /* 12cbb130 mov esp, ebp */
  ESP = (EBP);
  /* 12cbb132 pop ebp */
  EBP = (pop32());
  /* 12cbb133 ret  */
  ESPCHK(0x12cbaec0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b140 @ 0x12cbb140 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_12cbb140(void) {
  FTRACE(0x12cbb140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbb140 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbb141 mov ebp, esp */
  EBP = (ESP);
  /* 12cbb143 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbb149 push ebx */
  push32((uint32_t)(EBX));
  /* 12cbb14a push esi */
  push32((uint32_t)(ESI));
  /* 12cbb14b push edi */
  push32((uint32_t)(EDI));
  /* 12cbb14c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12cbb153 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 12cbb15d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12cbb164:;
  /* 12cbb164 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbb167 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12cbb169 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 12cbb16c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12cbb170 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbb173 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbb176 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12cbb179 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cbb17b je 0x12cbbd57 */
  if (C.zf) goto L_12cbbd57;
  /* 12cbb181 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbb188 jl 0x12cbbd57 */
  if ((C.sf!=C.of)) goto L_12cbbd57;
  /* 12cbb18e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12cbb192 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbb195 jl 0x12cbb1b6 */
  if ((C.sf!=C.of)) goto L_12cbb1b6;
  /* 12cbb197 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12cbb19b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbb19e jg 0x12cbb1b6 */
  if ((!C.zf&&C.sf==C.of)) goto L_12cbb1b6;
  /* 12cbb1a0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12cbb1a4 movsx ecx, byte ptr [eax + 0x12cdc2e0] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x12cdc2e0))));
  /* 12cbb1ab and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 12cbb1ae mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 12cbb1b4 jmp 0x12cbb1c0 */
  goto L_12cbb1c0;
L_12cbb1b6:;
  /* 12cbb1b6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_12cbb1c0:;
  /* 12cbb1c0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 12cbb1c6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12cbb1c9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbb1cc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cbb1cf movsx edx, byte ptr [ecx + eax*8 + 0x12cdc300] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x12cdc300))));
  /* 12cbb1d7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12cbb1da mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12cbb1dd mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cbb1e0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 12cbb1e6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbb1ed ja 0x12cbbd52 */
  if ((!C.cf&&!C.zf)) goto L_12cbbd52;
  /* 12cbb1f3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 12cbb1f9 jmp dword ptr [ecx*4 + 0x12cbbd64] */
  switch (ECX) {
    case 0: goto L_12cbb200;
    case 1: goto L_12cbb29a;
    case 2: goto L_12cbb2dc;
    case 3: goto L_12cbb34b;
    case 4: goto L_12cbb3a3;
    case 5: goto L_12cbb3b2;
    case 6: goto L_12cbb3fe;
    case 7: goto L_12cbb491;
    case 8: goto L_12cbb328;
    case 9: goto L_12cbb333;
    case 10: goto L_12cbb31e;
    case 11: goto L_12cbb313;
    case 12: goto L_12cbb33e;
    case 13: goto L_12cbb346;
    default: x86_unimpl("switch@0x12cbb1f9 out of table"); return;
  }
L_12cbb200:;
  /* 12cbb200 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12cbb207 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cbb20a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cbb210 mov eax, dword ptr [0x12cdec98] */
  EAX = (r32((uint32_t)(0x12cdec98)));
  /* 12cbb215 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbb217 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12cbb21b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12cbb221 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cbb223 je 0x12cbb27d */
  if (C.zf) goto L_12cbb27d;
  /* 12cbb225 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 12cbb22b push edx */
  push32((uint32_t)(EDX));
  /* 12cbb22c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbb22f push eax */
  push32((uint32_t)(EAX));
  /* 12cbb230 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12cbb234 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbb235 call 0x12cbbe70 */
  push32(0x12cbb23au); f_12cbbe70();
  /* 12cbb23a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbb23d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbb240 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cbb242 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 12cbb245 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbb248 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbb24b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12cbb24e:;
  /* 12cbb24e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12cbb252 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cbb254 jne 0x12cbb277 */
  if (!C.zf) goto L_12cbb277;
  /* 12cbb256 push 0x12cdc380 */
  push32((uint32_t)(0x12cdc380u));
  /* 12cbb25b push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbb25d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 12cbb262 push 0x12cdc374 */
  push32((uint32_t)(0x12cdc374u));
  /* 12cbb267 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbb269 call 0x12cb3270 */
  push32(0x12cbb26eu); f_12cb3270();
  /* 12cbb26e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbb271 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbb274 jne 0x12cbb277 */
  if (!C.zf) goto L_12cbb277;
  /* 12cbb276 int3  */
  x86_unimpl("int3 @ 0x12cbb276");
L_12cbb277:;
  /* 12cbb277 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbb279 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbb27b jne 0x12cbb24e */
  if (!C.zf) goto L_12cbb24e;
L_12cbb27d:;
  /* 12cbb27d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 12cbb283 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbb284 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbb287 push edx */
  push32((uint32_t)(EDX));
  /* 12cbb288 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12cbb28c push eax */
  push32((uint32_t)(EAX));
  /* 12cbb28d call 0x12cbbe70 */
  push32(0x12cbb292u); f_12cbbe70();
  /* 12cbb292 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbb295 jmp 0x12cbbd52 */
  goto L_12cbbd52;
L_12cbb29a:;
  /* 12cbb29a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12cbb2a1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbb2a4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 12cbb2aa mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 12cbb2b0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 12cbb2b6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 12cbb2bc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12cbb2bf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cbb2c6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 12cbb2d0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12cbb2d7 jmp 0x12cbbd52 */
  goto L_12cbbd52;
L_12cbb2dc:;
  /* 12cbb2dc movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12cbb2e0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 12cbb2e6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 12cbb2ec sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbb2ef mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 12cbb2f5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbb2fc ja 0x12cbb346 */
  if ((!C.cf&&!C.zf)) goto L_12cbb346;
  /* 12cbb2fe mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 12cbb304 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbb306 mov al, byte ptr [ecx + 0x12cbbd9c] */
  AL = (r8((uint32_t)(ECX + 0x12cbbd9c)));
  /* 12cbb30c jmp dword ptr [eax*4 + 0x12cbbd84] */
  switch (EAX) {
    case 0: goto L_12cbb328;
    case 1: goto L_12cbb333;
    case 2: goto L_12cbb31e;
    case 3: goto L_12cbb313;
    case 4: goto L_12cbb33e;
    case 5: goto L_12cbb346;
    default: x86_unimpl("switch@0x12cbb30c out of table"); return;
  }
L_12cbb313:;
  /* 12cbb313 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbb316 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12cbb319 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cbb31c jmp 0x12cbb346 */
  goto L_12cbb346;
L_12cbb31e:;
  /* 12cbb31e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbb321 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12cbb323 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cbb326 jmp 0x12cbb346 */
  goto L_12cbb346;
L_12cbb328:;
  /* 12cbb328 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbb32b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12cbb32e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cbb331 jmp 0x12cbb346 */
  goto L_12cbb346;
L_12cbb333:;
  /* 12cbb333 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbb336 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 12cbb339 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cbb33c jmp 0x12cbb346 */
  goto L_12cbb346;
L_12cbb33e:;
  /* 12cbb33e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbb341 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 12cbb343 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cbb346:;
  /* 12cbb346 jmp 0x12cbbd52 */
  goto L_12cbbd52;
L_12cbb34b:;
  /* 12cbb34b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12cbb34f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbb352 jne 0x12cbb387 */
  if (!C.zf) goto L_12cbb387;
  /* 12cbb354 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12cbb357 push edx */
  push32((uint32_t)(EDX));
  /* 12cbb358 call 0x12cbbf80 */
  push32(0x12cbb35du); f_12cbbf80();
  /* 12cbb35d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbb360 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 12cbb366 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbb36d jge 0x12cbb385 */
  if ((C.sf==C.of)) goto L_12cbb385;
  /* 12cbb36f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbb372 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12cbb374 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cbb377 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 12cbb37d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cbb37f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_12cbb385:;
  /* 12cbb385 jmp 0x12cbb39e */
  goto L_12cbb39e;
L_12cbb387:;
  /* 12cbb387 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 12cbb38d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cbb390 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12cbb394 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 12cbb398 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_12cbb39e:;
  /* 12cbb39e jmp 0x12cbbd52 */
  goto L_12cbbd52;
L_12cbb3a3:;
  /* 12cbb3a3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 12cbb3ad jmp 0x12cbbd52 */
  goto L_12cbbd52;
L_12cbb3b2:;
  /* 12cbb3b2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12cbb3b6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbb3b9 jne 0x12cbb3e2 */
  if (!C.zf) goto L_12cbb3e2;
  /* 12cbb3bb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12cbb3be push eax */
  push32((uint32_t)(EAX));
  /* 12cbb3bf call 0x12cbbf80 */
  push32(0x12cbb3c4u); f_12cbbf80();
  /* 12cbb3c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbb3c7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 12cbb3cd cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbb3d4 jge 0x12cbb3e0 */
  if ((C.sf==C.of)) goto L_12cbb3e0;
  /* 12cbb3d6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_12cbb3e0:;
  /* 12cbb3e0 jmp 0x12cbb3f9 */
  goto L_12cbb3f9;
L_12cbb3e2:;
  /* 12cbb3e2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 12cbb3e8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cbb3eb movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12cbb3ef lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12cbb3f3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_12cbb3f9:;
  /* 12cbb3f9 jmp 0x12cbbd52 */
  goto L_12cbbd52;
L_12cbb3fe:;
  /* 12cbb3fe movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12cbb402 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 12cbb408 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 12cbb40e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbb411 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 12cbb417 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbb41e ja 0x12cbb48c */
  if ((!C.cf&&!C.zf)) goto L_12cbb48c;
  /* 12cbb420 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 12cbb426 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbb428 mov al, byte ptr [ecx + 0x12cbbdc1] */
  AL = (r8((uint32_t)(ECX + 0x12cbbdc1)));
  /* 12cbb42e jmp dword ptr [eax*4 + 0x12cbbdad] */
  switch (EAX) {
    case 0: goto L_12cbb440;
    case 1: goto L_12cbb479;
    case 2: goto L_12cbb435;
    case 3: goto L_12cbb483;
    case 4: goto L_12cbb48c;
    default: x86_unimpl("switch@0x12cbb42e out of table"); return;
  }
L_12cbb435:;
  /* 12cbb435 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbb438 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 12cbb43b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cbb43e jmp 0x12cbb48c */
  goto L_12cbb48c;
L_12cbb440:;
  /* 12cbb440 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbb443 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cbb446 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbb449 jne 0x12cbb46b */
  if (!C.zf) goto L_12cbb46b;
  /* 12cbb44b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbb44e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12cbb452 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbb455 jne 0x12cbb46b */
  if (!C.zf) goto L_12cbb46b;
  /* 12cbb457 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbb45a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbb45d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12cbb460 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbb463 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12cbb466 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cbb469 jmp 0x12cbb477 */
  goto L_12cbb477;
L_12cbb46b:;
  /* 12cbb46b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12cbb472 jmp 0x12cbb200 */
  goto L_12cbb200;
L_12cbb477:;
  /* 12cbb477 jmp 0x12cbb48c */
  goto L_12cbb48c;
L_12cbb479:;
  /* 12cbb479 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbb47c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12cbb47e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cbb481 jmp 0x12cbb48c */
  goto L_12cbb48c;
L_12cbb483:;
  /* 12cbb483 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbb486 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12cbb489 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12cbb48c:;
  /* 12cbb48c jmp 0x12cbbd52 */
  goto L_12cbbd52;
L_12cbb491:;
  /* 12cbb491 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12cbb495 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 12cbb49b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 12cbb4a1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbb4a4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 12cbb4aa cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbb4b1 ja 0x12cbbb77 */
  if ((!C.cf&&!C.zf)) goto L_12cbbb77;
  /* 12cbb4b7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 12cbb4bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbb4bf mov cl, byte ptr [edx + 0x12cbbe2c] */
  CL = (r8((uint32_t)(EDX + 0x12cbbe2c)));
  /* 12cbb4c5 jmp dword ptr [ecx*4 + 0x12cbbdf0] */
  switch (ECX) {
    case 0: goto L_12cbb4cc;
    case 1: goto L_12cbb760;
    case 2: goto L_12cbb5f0;
    case 3: goto L_12cbb899;
    case 4: goto L_12cbb55b;
    case 5: goto L_12cbb4e1;
    case 6: goto L_12cbb86b;
    case 7: goto L_12cbb770;
    case 8: goto L_12cbb715;
    case 9: goto L_12cbb8e5;
    case 10: goto L_12cbb88f;
    case 11: goto L_12cbb606;
    case 12: goto L_12cbb883;
    case 13: goto L_12cbb8a5;
    case 14: goto L_12cbbb77;
    default: x86_unimpl("switch@0x12cbb4c5 out of table"); return;
  }
L_12cbb4cc:;
  /* 12cbb4cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbb4cf and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 12cbb4d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbb4d6 jne 0x12cbb4e1 */
  if (!C.zf) goto L_12cbb4e1;
  /* 12cbb4d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbb4db or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12cbb4de mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12cbb4e1:;
  /* 12cbb4e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbb4e4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 12cbb4ea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cbb4ec je 0x12cbb527 */
  if (C.zf) goto L_12cbb527;
  /* 12cbb4ee lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12cbb4f1 push eax */
  push32((uint32_t)(EAX));
  /* 12cbb4f2 call 0x12cbbfc0 */
  push32(0x12cbb4f7u); f_12cbbfc0();
  /* 12cbb4f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbb4fa mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 12cbb4fe mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 12cbb502 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbb503 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 12cbb509 push edx */
  push32((uint32_t)(EDX));
  /* 12cbb50a call 0x12cbd0a0 */
  push32(0x12cbb50fu); f_12cbd0a0();
  /* 12cbb50f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbb512 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12cbb515 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbb519 jge 0x12cbb525 */
  if ((C.sf==C.of)) goto L_12cbb525;
  /* 12cbb51b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_12cbb525:;
  /* 12cbb525 jmp 0x12cbb54d */
  goto L_12cbb54d;
L_12cbb527:;
  /* 12cbb527 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12cbb52a push eax */
  push32((uint32_t)(EAX));
  /* 12cbb52b call 0x12cbbf80 */
  push32(0x12cbb530u); f_12cbbf80();
  /* 12cbb530 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbb533 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 12cbb53a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 12cbb540 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 12cbb546 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_12cbb54d:;
  /* 12cbb54d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 12cbb553 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12cbb556 jmp 0x12cbbb77 */
  goto L_12cbbb77;
L_12cbb55b:;
  /* 12cbb55b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12cbb55e push eax */
  push32((uint32_t)(EAX));
  /* 12cbb55f call 0x12cbbf80 */
  push32(0x12cbb564u); f_12cbbf80();
  /* 12cbb564 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbb567 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 12cbb56d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbb574 je 0x12cbb582 */
  if (C.zf) goto L_12cbb582;
  /* 12cbb576 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12cbb57c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbb580 jne 0x12cbb59c */
  if (!C.zf) goto L_12cbb59c;
L_12cbb582:;
  /* 12cbb582 mov edx, dword ptr [0x12cdefb0] */
  EDX = (r32((uint32_t)(0x12cdefb0)));
  /* 12cbb588 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12cbb58b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cbb58e push eax */
  push32((uint32_t)(EAX));
  /* 12cbb58f call 0x12cb6fe0 */
  push32(0x12cbb594u); f_12cb6fe0();
  /* 12cbb594 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbb597 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12cbb59a jmp 0x12cbb5eb */
  goto L_12cbb5eb;
L_12cbb59c:;
  /* 12cbb59c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbb59f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 12cbb5a5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cbb5a7 je 0x12cbb5cc */
  if (C.zf) goto L_12cbb5cc;
  /* 12cbb5a9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12cbb5af mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12cbb5b2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12cbb5b5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12cbb5bb movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 12cbb5be shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12cbb5c0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12cbb5c3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 12cbb5ca jmp 0x12cbb5eb */
  goto L_12cbb5eb;
L_12cbb5cc:;
  /* 12cbb5cc mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12cbb5d3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12cbb5d9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cbb5dc mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12cbb5df mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12cbb5e5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 12cbb5e8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12cbb5eb:;
  /* 12cbb5eb jmp 0x12cbbb77 */
  goto L_12cbbb77;
L_12cbb5f0:;
  /* 12cbb5f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbb5f3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 12cbb5f9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cbb5fb jne 0x12cbb606 */
  if (!C.zf) goto L_12cbb606;
  /* 12cbb5fd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbb600 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12cbb603 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12cbb606:;
  /* 12cbb606 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbb60d jne 0x12cbb61b */
  if (!C.zf) goto L_12cbb61b;
  /* 12cbb60f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 12cbb619 jmp 0x12cbb627 */
  goto L_12cbb627;
L_12cbb61b:;
  /* 12cbb61b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 12cbb621 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_12cbb627:;
  /* 12cbb627 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 12cbb62d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 12cbb633 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12cbb636 push edx */
  push32((uint32_t)(EDX));
  /* 12cbb637 call 0x12cbbf80 */
  push32(0x12cbb63cu); f_12cbbf80();
  /* 12cbb63c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbb63f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12cbb642 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbb645 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 12cbb64a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbb64c je 0x12cbb6b6 */
  if (C.zf) goto L_12cbb6b6;
  /* 12cbb64e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbb652 jne 0x12cbb65d */
  if (!C.zf) goto L_12cbb65d;
  /* 12cbb654 mov ecx, dword ptr [0x12cdefb4] */
  ECX = (r32((uint32_t)(0x12cdefb4)));
  /* 12cbb65a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12cbb65d:;
  /* 12cbb65d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 12cbb664 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cbb667 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_12cbb66d:;
  /* 12cbb66d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 12cbb673 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 12cbb679 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbb67c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 12cbb682 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbb684 je 0x12cbb6a6 */
  if (C.zf) goto L_12cbb6a6;
  /* 12cbb686 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 12cbb68c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbb68e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 12cbb691 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbb693 je 0x12cbb6a6 */
  if (C.zf) goto L_12cbb6a6;
  /* 12cbb695 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 12cbb69b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbb69e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 12cbb6a4 jmp 0x12cbb66d */
  goto L_12cbb66d;
L_12cbb6a6:;
  /* 12cbb6a6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 12cbb6ac sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbb6af sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12cbb6b1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12cbb6b4 jmp 0x12cbb710 */
  goto L_12cbb710;
L_12cbb6b6:;
  /* 12cbb6b6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbb6ba jne 0x12cbb6c4 */
  if (!C.zf) goto L_12cbb6c4;
  /* 12cbb6bc mov eax, dword ptr [0x12cdefb0] */
  EAX = (r32((uint32_t)(0x12cdefb0)));
  /* 12cbb6c1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_12cbb6c4:;
  /* 12cbb6c4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cbb6c7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_12cbb6cd:;
  /* 12cbb6cd mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 12cbb6d3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 12cbb6d9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbb6dc mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 12cbb6e2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cbb6e4 je 0x12cbb704 */
  if (C.zf) goto L_12cbb704;
  /* 12cbb6e6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 12cbb6ec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cbb6ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cbb6f1 je 0x12cbb704 */
  if (C.zf) goto L_12cbb704;
  /* 12cbb6f3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 12cbb6f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbb6fc mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 12cbb702 jmp 0x12cbb6cd */
  goto L_12cbb6cd;
L_12cbb704:;
  /* 12cbb704 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 12cbb70a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbb70d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_12cbb710:;
  /* 12cbb710 jmp 0x12cbbb77 */
  goto L_12cbbb77;
L_12cbb715:;
  /* 12cbb715 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12cbb718 push edx */
  push32((uint32_t)(EDX));
  /* 12cbb719 call 0x12cbbf80 */
  push32(0x12cbb71eu); f_12cbbf80();
  /* 12cbb71e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbb721 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 12cbb727 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbb72a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12cbb72d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbb72f je 0x12cbb743 */
  if (C.zf) goto L_12cbb743;
  /* 12cbb731 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 12cbb737 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 12cbb73e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 12cbb741 jmp 0x12cbb751 */
  goto L_12cbb751;
L_12cbb743:;
  /* 12cbb743 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 12cbb749 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 12cbb74f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_12cbb751:;
  /* 12cbb751 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 12cbb75b jmp 0x12cbbb77 */
  goto L_12cbbb77;
L_12cbb760:;
  /* 12cbb760 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12cbb767 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 12cbb76a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 12cbb76d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_12cbb770:;
  /* 12cbb770 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbb773 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12cbb775 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cbb778 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 12cbb77e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12cbb781 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbb788 jge 0x12cbb796 */
  if ((C.sf==C.of)) goto L_12cbb796;
  /* 12cbb78a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 12cbb794 jmp 0x12cbb7b2 */
  goto L_12cbb7b2;
L_12cbb796:;
  /* 12cbb796 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbb79d jne 0x12cbb7b2 */
  if (!C.zf) goto L_12cbb7b2;
  /* 12cbb79f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12cbb7a3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbb7a6 jne 0x12cbb7b2 */
  if (!C.zf) goto L_12cbb7b2;
  /* 12cbb7a8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_12cbb7b2:;
  /* 12cbb7b2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cbb7b5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbb7b8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12cbb7bb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cbb7be sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbb7c1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cbb7c3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cbb7c6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 12cbb7cc mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 12cbb7d2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbb7d5 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbb7d6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 12cbb7dc push edx */
  push32((uint32_t)(EDX));
  /* 12cbb7dd movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12cbb7e1 push eax */
  push32((uint32_t)(EAX));
  /* 12cbb7e2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cbb7e5 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbb7e6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 12cbb7ec push edx */
  push32((uint32_t)(EDX));
  /* 12cbb7ed call dword ptr [0x12cdf3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12cdf3a0))), 0x12cbb7f3u);
  /* 12cbb7f3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbb7f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbb7f9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12cbb7fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbb800 je 0x12cbb818 */
  if (C.zf) goto L_12cbb818;
  /* 12cbb802 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbb809 jne 0x12cbb818 */
  if (!C.zf) goto L_12cbb818;
  /* 12cbb80b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cbb80e push ecx */
  push32((uint32_t)(ECX));
  /* 12cbb80f call dword ptr [0x12cdf3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12cdf3ac))), 0x12cbb815u);
  /* 12cbb815 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cbb818:;
  /* 12cbb818 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12cbb81c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbb81f jne 0x12cbb83a */
  if (!C.zf) goto L_12cbb83a;
  /* 12cbb821 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbb824 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12cbb829 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbb82b jne 0x12cbb83a */
  if (!C.zf) goto L_12cbb83a;
  /* 12cbb82d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cbb830 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbb831 call dword ptr [0x12cdf3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12cdf3a4))), 0x12cbb837u);
  /* 12cbb837 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cbb83a:;
  /* 12cbb83a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cbb83d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12cbb840 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbb843 jne 0x12cbb857 */
  if (!C.zf) goto L_12cbb857;
  /* 12cbb845 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbb848 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12cbb84b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cbb84e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cbb851 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbb854 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12cbb857:;
  /* 12cbb857 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cbb85a push eax */
  push32((uint32_t)(EAX));
  /* 12cbb85b call 0x12cb6fe0 */
  push32(0x12cbb860u); f_12cb6fe0();
  /* 12cbb860 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbb863 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12cbb866 jmp 0x12cbbb77 */
  goto L_12cbbb77;
L_12cbb86b:;
  /* 12cbb86b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbb86e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 12cbb871 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cbb874 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 12cbb87e jmp 0x12cbb905 */
  goto L_12cbb905;
L_12cbb883:;
  /* 12cbb883 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 12cbb88d jmp 0x12cbb905 */
  goto L_12cbb905;
L_12cbb88f:;
  /* 12cbb88f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_12cbb899:;
  /* 12cbb899 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 12cbb8a3 jmp 0x12cbb8af */
  goto L_12cbb8af;
L_12cbb8a5:;
  /* 12cbb8a5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_12cbb8af:;
  /* 12cbb8af mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 12cbb8b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbb8bc and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 12cbb8c2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cbb8c4 je 0x12cbb8e3 */
  if (C.zf) goto L_12cbb8e3;
  /* 12cbb8c6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 12cbb8cd mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 12cbb8d3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbb8d6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 12cbb8dc mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_12cbb8e3:;
  /* 12cbb8e3 jmp 0x12cbb905 */
  goto L_12cbb905;
L_12cbb8e5:;
  /* 12cbb8e5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 12cbb8ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbb8f2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 12cbb8f8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cbb8fa je 0x12cbb905 */
  if (C.zf) goto L_12cbb905;
  /* 12cbb8fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbb8ff or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12cbb902 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12cbb905:;
  /* 12cbb905 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbb908 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12cbb90d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbb90f je 0x12cbb92e */
  if (C.zf) goto L_12cbb92e;
  /* 12cbb911 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12cbb914 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbb915 call 0x12cbbfa0 */
  push32(0x12cbb91au); f_12cbbfa0();
  /* 12cbb91a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbb91d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12cbb923 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12cbb929 jmp 0x12cbb9bf */
  goto L_12cbb9bf;
L_12cbb92e:;
  /* 12cbb92e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbb931 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 12cbb934 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cbb936 je 0x12cbb980 */
  if (C.zf) goto L_12cbb980;
  /* 12cbb938 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbb93b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12cbb93e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbb940 je 0x12cbb960 */
  if (C.zf) goto L_12cbb960;
  /* 12cbb942 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12cbb945 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbb946 call 0x12cbbf80 */
  push32(0x12cbb94bu); f_12cbbf80();
  /* 12cbb94b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbb94e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 12cbb951 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12cbb952 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12cbb958 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12cbb95e jmp 0x12cbb97e */
  goto L_12cbb97e;
L_12cbb960:;
  /* 12cbb960 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12cbb963 push edx */
  push32((uint32_t)(EDX));
  /* 12cbb964 call 0x12cbbf80 */
  push32(0x12cbb969u); f_12cbbf80();
  /* 12cbb969 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbb96c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cbb971 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12cbb972 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12cbb978 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_12cbb97e:;
  /* 12cbb97e jmp 0x12cbb9bf */
  goto L_12cbb9bf;
L_12cbb980:;
  /* 12cbb980 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbb983 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12cbb986 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbb988 je 0x12cbb9a5 */
  if (C.zf) goto L_12cbb9a5;
  /* 12cbb98a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12cbb98d push ecx */
  push32((uint32_t)(ECX));
  /* 12cbb98e call 0x12cbbf80 */
  push32(0x12cbb993u); f_12cbbf80();
  /* 12cbb993 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbb996 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12cbb997 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12cbb99d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12cbb9a3 jmp 0x12cbb9bf */
  goto L_12cbb9bf;
L_12cbb9a5:;
  /* 12cbb9a5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12cbb9a8 push edx */
  push32((uint32_t)(EDX));
  /* 12cbb9a9 call 0x12cbbf80 */
  push32(0x12cbb9aeu); f_12cbbf80();
  /* 12cbb9ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbb9b1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbb9b3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12cbb9b9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_12cbb9bf:;
  /* 12cbb9bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbb9c2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 12cbb9c5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cbb9c7 je 0x12cbba07 */
  if (C.zf) goto L_12cbba07;
  /* 12cbb9c9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbb9d0 jg 0x12cbba07 */
  if ((!C.zf&&C.sf==C.of)) goto L_12cbba07;
  /* 12cbb9d2 jl 0x12cbb9dd */
  if ((C.sf!=C.of)) goto L_12cbb9dd;
  /* 12cbb9d4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbb9db jae 0x12cbba07 */
  if (!C.cf) goto L_12cbba07;
L_12cbb9dd:;
  /* 12cbb9dd mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 12cbb9e3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cbb9e5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 12cbb9eb adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbb9ee neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cbb9f0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12cbb9f6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 12cbb9fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbb9ff or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12cbba02 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cbba05 jmp 0x12cbba1f */
  goto L_12cbba1f;
L_12cbba07:;
  /* 12cbba07 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 12cbba0d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12cbba13 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 12cbba19 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_12cbba1f:;
  /* 12cbba1f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbba22 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12cbba28 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cbba2a jne 0x12cbba47 */
  if (!C.zf) goto L_12cbba47;
  /* 12cbba2c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12cbba32 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 12cbba38 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 12cbba3b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12cbba41 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_12cbba47:;
  /* 12cbba47 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbba4e jge 0x12cbba5c */
  if ((C.sf==C.of)) goto L_12cbba5c;
  /* 12cbba50 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 12cbba5a jmp 0x12cbba65 */
  goto L_12cbba65;
L_12cbba5c:;
  /* 12cbba5c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbba5f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 12cbba62 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12cbba65:;
  /* 12cbba65 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12cbba6b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 12cbba71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbba73 jne 0x12cbba7c */
  if (!C.zf) goto L_12cbba7c;
  /* 12cbba75 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12cbba7c:;
  /* 12cbba7c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 12cbba7f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12cbba82:;
  /* 12cbba82 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 12cbba88 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 12cbba8e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbba91 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 12cbba97 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cbba99 jg 0x12cbbaaf */
  if ((!C.zf&&C.sf==C.of)) goto L_12cbbaaf;
  /* 12cbba9b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12cbbaa1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 12cbbaa7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cbbaa9 je 0x12cbbb30 */
  if (C.zf) goto L_12cbbb30;
L_12cbbaaf:;
  /* 12cbbaaf mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 12cbbab5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12cbbab6 push edx */
  push32((uint32_t)(EDX));
  /* 12cbbab7 push eax */
  push32((uint32_t)(EAX));
  /* 12cbbab8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 12cbbabe push edx */
  push32((uint32_t)(EDX));
  /* 12cbbabf mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12cbbac5 push eax */
  push32((uint32_t)(EAX));
  /* 12cbbac6 call 0x12cbae40 */
  push32(0x12cbbacbu); f_12cbae40();
  /* 12cbbacb add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbbace mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 12cbbad4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 12cbbada cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12cbbadb push edx */
  push32((uint32_t)(EDX));
  /* 12cbbadc push eax */
  push32((uint32_t)(EAX));
  /* 12cbbadd mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 12cbbae3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbbae4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12cbbaea push edx */
  push32((uint32_t)(EDX));
  /* 12cbbaeb call 0x12cbadd0 */
  push32(0x12cbbaf0u); f_12cbadd0();
  /* 12cbbaf0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12cbbaf6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 12cbbafc cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbbb03 jle 0x12cbbb17 */
  if ((C.zf||C.sf!=C.of)) goto L_12cbbb17;
  /* 12cbbb05 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 12cbbb0b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbbb11 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_12cbbb17:;
  /* 12cbbb17 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cbbb1a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 12cbbb20 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 12cbbb22 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cbbb25 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbbb28 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12cbbb2b jmp 0x12cbba82 */
  goto L_12cbba82;
L_12cbbb30:;
  /* 12cbbb30 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 12cbbb33 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbbb36 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12cbbb39 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cbbb3c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbbb3f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12cbbb42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbbb45 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 12cbbb4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbbb4c je 0x12cbbb77 */
  if (C.zf) goto L_12cbbb77;
  /* 12cbbb4e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cbbb51 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cbbb54 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbbb57 jne 0x12cbbb5f */
  if (!C.zf) goto L_12cbbb5f;
  /* 12cbbb59 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbbb5d jne 0x12cbbb77 */
  if (!C.zf) goto L_12cbbb77;
L_12cbbb5f:;
  /* 12cbbb5f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cbbb62 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbbb65 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12cbbb68 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cbbb6b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 12cbbb6e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cbbb71 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbbb74 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_12cbbb77:;
  /* 12cbbb77 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbbb7e jne 0x12cbbd52 */
  if (!C.zf) goto L_12cbbd52;
  /* 12cbbb84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbbb87 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12cbbb8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbbb8c je 0x12cbbbdd */
  if (C.zf) goto L_12cbbbdd;
  /* 12cbbb8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbbb91 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 12cbbb97 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cbbb99 je 0x12cbbbab */
  if (C.zf) goto L_12cbbbab;
  /* 12cbbb9b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 12cbbba2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12cbbba9 jmp 0x12cbbbdd */
  goto L_12cbbbdd;
L_12cbbbab:;
  /* 12cbbbab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbbbae and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12cbbbb1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cbbbb3 je 0x12cbbbc5 */
  if (C.zf) goto L_12cbbbc5;
  /* 12cbbbb5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 12cbbbbc mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12cbbbc3 jmp 0x12cbbbdd */
  goto L_12cbbbdd;
L_12cbbbc5:;
  /* 12cbbbc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbbbc8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 12cbbbcb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbbbcd je 0x12cbbbdd */
  if (C.zf) goto L_12cbbbdd;
  /* 12cbbbcf mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 12cbbbd6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_12cbbbdd:;
  /* 12cbbbdd mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 12cbbbe3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbbbe6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbbbe9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 12cbbbef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbbbf2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 12cbbbf5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cbbbf7 jne 0x12cbbc15 */
  if (!C.zf) goto L_12cbbc15;
  /* 12cbbbf9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12cbbbff push eax */
  push32((uint32_t)(EAX));
  /* 12cbbc00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbbc03 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbbc04 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12cbbc0a push edx */
  push32((uint32_t)(EDX));
  /* 12cbbc0b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12cbbc0d call 0x12cbbef0 */
  push32(0x12cbbc12u); f_12cbbef0();
  /* 12cbbc12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cbbc15:;
  /* 12cbbc15 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12cbbc1b push eax */
  push32((uint32_t)(EAX));
  /* 12cbbc1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbbc1f push ecx */
  push32((uint32_t)(ECX));
  /* 12cbbc20 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cbbc23 push edx */
  push32((uint32_t)(EDX));
  /* 12cbbc24 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 12cbbc2a push eax */
  push32((uint32_t)(EAX));
  /* 12cbbc2b call 0x12cbbf30 */
  push32(0x12cbbc30u); f_12cbbf30();
  /* 12cbbc30 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbbc33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbbc36 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12cbbc39 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cbbc3b je 0x12cbbc63 */
  if (C.zf) goto L_12cbbc63;
  /* 12cbbc3d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbbc40 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12cbbc43 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cbbc45 jne 0x12cbbc63 */
  if (!C.zf) goto L_12cbbc63;
  /* 12cbbc47 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12cbbc4d push eax */
  push32((uint32_t)(EAX));
  /* 12cbbc4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbbc51 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbbc52 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12cbbc58 push edx */
  push32((uint32_t)(EDX));
  /* 12cbbc59 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12cbbc5b call 0x12cbbef0 */
  push32(0x12cbbc60u); f_12cbbef0();
  /* 12cbbc60 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cbbc63:;
  /* 12cbbc63 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbbc67 je 0x12cbbd11 */
  if (C.zf) goto L_12cbbd11;
  /* 12cbbc6d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbbc71 jle 0x12cbbd11 */
  if ((C.zf||C.sf!=C.of)) goto L_12cbbd11;
  /* 12cbbc77 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cbbc7a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 12cbbc80 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cbbc83 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_12cbbc89:;
  /* 12cbbc89 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 12cbbc8f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 12cbbc95 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbbc98 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 12cbbc9e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cbbca0 je 0x12cbbd0f */
  if (C.zf) goto L_12cbbd0f;
  /* 12cbbca2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 12cbbca8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12cbbcab mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 12cbbcb2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 12cbbcb9 push eax */
  push32((uint32_t)(EAX));
  /* 12cbbcba lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 12cbbcc0 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbbcc1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 12cbbcc7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbbcca mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 12cbbcd0 call 0x12cbd0a0 */
  push32(0x12cbbcd5u); f_12cbd0a0();
  /* 12cbbcd5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbbcd8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 12cbbcde cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbbce5 jg 0x12cbbce9 */
  if ((!C.zf&&C.sf==C.of)) goto L_12cbbce9;
  /* 12cbbce7 jmp 0x12cbbd0f */
  goto L_12cbbd0f;
L_12cbbce9:;
  /* 12cbbce9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12cbbcef push eax */
  push32((uint32_t)(EAX));
  /* 12cbbcf0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbbcf3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbbcf4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 12cbbcfa push edx */
  push32((uint32_t)(EDX));
  /* 12cbbcfb lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 12cbbd01 push eax */
  push32((uint32_t)(EAX));
  /* 12cbbd02 call 0x12cbbf30 */
  push32(0x12cbbd07u); f_12cbbf30();
  /* 12cbbd07 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbbd0a jmp 0x12cbbc89 */
  goto L_12cbbc89;
L_12cbbd0f:;
  /* 12cbbd0f jmp 0x12cbbd2c */
  goto L_12cbbd2c;
L_12cbbd11:;
  /* 12cbbd11 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 12cbbd17 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbbd18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbbd1b push edx */
  push32((uint32_t)(EDX));
  /* 12cbbd1c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cbbd1f push eax */
  push32((uint32_t)(EAX));
  /* 12cbbd20 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cbbd23 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbbd24 call 0x12cbbf30 */
  push32(0x12cbbd29u); f_12cbbf30();
  /* 12cbbd29 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cbbd2c:;
  /* 12cbbd2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbbd2f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12cbbd32 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cbbd34 je 0x12cbbd52 */
  if (C.zf) goto L_12cbbd52;
  /* 12cbbd36 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12cbbd3c push eax */
  push32((uint32_t)(EAX));
  /* 12cbbd3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbbd40 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbbd41 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12cbbd47 push edx */
  push32((uint32_t)(EDX));
  /* 12cbbd48 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12cbbd4a call 0x12cbbef0 */
  push32(0x12cbbd4fu); f_12cbbef0();
  /* 12cbbd4f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cbbd52:;
  /* 12cbbd52 jmp 0x12cbb164 */
  goto L_12cbb164;
L_12cbbd57:;
  /* 12cbbd57 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 12cbbd5d pop edi */
  EDI = (pop32());
  /* 12cbbd5e pop esi */
  ESI = (pop32());
  /* 12cbbd5f pop ebx */
  EBX = (pop32());
  /* 12cbbd60 mov esp, ebp */
  ESP = (EBP);
  /* 12cbbd62 pop ebp */
  EBP = (pop32());
  /* 12cbbd63 ret  */
  ESPCHK(0x12cbb140u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be70 @ 0x12cbbe70 (119 bytes, 44 insns) */
void f_12cbbe70(void) {
  FTRACE(0x12cbbe70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbbe70 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbbe71 mov ebp, esp */
  EBP = (ESP);
  /* 12cbbe73 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbbe74 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbbe77 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cbbe7a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbbe7d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbbe80 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12cbbe83 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbbe86 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbbe8a jl 0x12cbbeb2 */
  if ((C.sf!=C.of)) goto L_12cbbeb2;
  /* 12cbbe8c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbbe8f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cbbe91 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12cbbe94 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12cbbe96 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 12cbbe9a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cbbea0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cbbea3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbbea6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cbbea8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbbeab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbbeae mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12cbbeb0 jmp 0x12cbbec5 */
  goto L_12cbbec5;
L_12cbbeb2:;
  /* 12cbbeb2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbbeb5 push edx */
  push32((uint32_t)(EDX));
  /* 12cbbeb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbbeb9 push eax */
  push32((uint32_t)(EAX));
  /* 12cbbeba call 0x12cbaec0 */
  push32(0x12cbbebfu); f_12cbaec0();
  /* 12cbbebf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbbec2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cbbec5:;
  /* 12cbbec5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbbec9 jne 0x12cbbed6 */
  if (!C.zf) goto L_12cbbed6;
  /* 12cbbecb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cbbece mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12cbbed4 jmp 0x12cbbee3 */
  goto L_12cbbee3;
L_12cbbed6:;
  /* 12cbbed6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cbbed9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cbbedb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbbede mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cbbee1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12cbbee3:;
  /* 12cbbee3 mov esp, ebp */
  ESP = (EBP);
  /* 12cbbee5 pop ebp */
  EBP = (pop32());
  /* 12cbbee6 ret  */
  ESPCHK(0x12cbbe70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bef0 @ 0x12cbbef0 (53 bytes, 23 insns) */
void f_12cbbef0(void) {
  FTRACE(0x12cbbef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbbef0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbbef1 mov ebp, esp */
  EBP = (ESP);
L_12cbbef3:;
  /* 12cbbef3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbbef6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbbef9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbbefc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12cbbeff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbbf01 jle 0x12cbbf23 */
  if ((C.zf||C.sf!=C.of)) goto L_12cbbf23;
  /* 12cbbf03 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cbbf06 push edx */
  push32((uint32_t)(EDX));
  /* 12cbbf07 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cbbf0a push eax */
  push32((uint32_t)(EAX));
  /* 12cbbf0b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbbf0e push ecx */
  push32((uint32_t)(ECX));
  /* 12cbbf0f call 0x12cbbe70 */
  push32(0x12cbbf14u); f_12cbbe70();
  /* 12cbbf14 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbbf17 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cbbf1a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbbf1d jne 0x12cbbf21 */
  if (!C.zf) goto L_12cbbf21;
  /* 12cbbf1f jmp 0x12cbbf23 */
  goto L_12cbbf23;
L_12cbbf21:;
  /* 12cbbf21 jmp 0x12cbbef3 */
  goto L_12cbbef3;
L_12cbbf23:;
  /* 12cbbf23 pop ebp */
  EBP = (pop32());
  /* 12cbbf24 ret  */
  ESPCHK(0x12cbbef0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf30 @ 0x12cbbf30 (74 bytes, 31 insns) */
void f_12cbbf30(void) {
  FTRACE(0x12cbbf30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbbf30 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbbf31 mov ebp, esp */
  EBP = (ESP);
  /* 12cbbf33 push ecx */
  push32((uint32_t)(ECX));
L_12cbbf34:;
  /* 12cbbf34 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbbf37 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbbf3a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbbf3d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12cbbf40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbbf42 jle 0x12cbbf76 */
  if ((C.zf||C.sf!=C.of)) goto L_12cbbf76;
  /* 12cbbf44 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cbbf47 push edx */
  push32((uint32_t)(EDX));
  /* 12cbbf48 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cbbf4b push eax */
  push32((uint32_t)(EAX));
  /* 12cbbf4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbbf4f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cbbf52 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cbbf55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbbf58 push eax */
  push32((uint32_t)(EAX));
  /* 12cbbf59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbbf5c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbbf5f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12cbbf62 call 0x12cbbe70 */
  push32(0x12cbbf67u); f_12cbbe70();
  /* 12cbbf67 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbbf6a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cbbf6d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbbf70 jne 0x12cbbf74 */
  if (!C.zf) goto L_12cbbf74;
  /* 12cbbf72 jmp 0x12cbbf76 */
  goto L_12cbbf76;
L_12cbbf74:;
  /* 12cbbf74 jmp 0x12cbbf34 */
  goto L_12cbbf34;
L_12cbbf76:;
  /* 12cbbf76 mov esp, ebp */
  ESP = (EBP);
  /* 12cbbf78 pop ebp */
  EBP = (pop32());
  /* 12cbbf79 ret  */
  ESPCHK(0x12cbbf30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf80 @ 0x12cbbf80 (26 bytes, 12 insns) */
void f_12cbbf80(void) {
  FTRACE(0x12cbbf80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbbf80 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbbf81 mov ebp, esp */
  EBP = (ESP);
  /* 12cbbf83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbbf86 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cbbf88 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbbf8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbbf8e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12cbbf90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbbf93 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cbbf95 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12cbbf98 pop ebp */
  EBP = (pop32());
  /* 12cbbf99 ret  */
  ESPCHK(0x12cbbf80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bfa0 @ 0x12cbbfa0 (31 bytes, 14 insns) */
void f_12cbbfa0(void) {
  FTRACE(0x12cbbfa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbbfa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbbfa1 mov ebp, esp */
  EBP = (ESP);
  /* 12cbbfa3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbbfa6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cbbfa8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbbfab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbbfae mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12cbbfb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbbfb3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cbbfb5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbbfb8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12cbbfba mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cbbfbd pop ebp */
  EBP = (pop32());
  /* 12cbbfbe ret  */
  ESPCHK(0x12cbbfa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bfc0 @ 0x12cbbfc0 (27 bytes, 12 insns) */
void f_12cbbfc0(void) {
  FTRACE(0x12cbbfc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbbfc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbbfc1 mov ebp, esp */
  EBP = (ESP);
  /* 12cbbfc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbbfc6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cbbfc8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbbfcb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbbfce mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12cbbfd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbbfd3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cbbfd5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 12cbbfd9 pop ebp */
  EBP = (pop32());
  /* 12cbbfda ret  */
  ESPCHK(0x12cbbfc0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x12cbbfe0 (145 bytes, 42 insns) */
void f_12cbbfe0(void) {
  FTRACE(0x12cbbfe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbbfe0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbbfe1 mov ebp, esp */
  EBP = (ESP);
  /* 12cbbfe3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbbfe4 call 0x12cbc090 */
  push32(0x12cbbfe9u); f_12cbc090();
  /* 12cbbfe9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbbfec mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12cbbfee mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cbbff5 jmp 0x12cbc000 */
  goto L_12cbc000;
L_12cbbff7:;
  /* 12cbbff7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbbffa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbbffd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12cbc000:;
  /* 12cbc000 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbc004 jae 0x12cbc02a */
  if (!C.cf) goto L_12cbc02a;
  /* 12cbc006 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbc009 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbc00c cmp ecx, dword ptr [eax*8 + 0x12cdefb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12cdefb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbc013 jne 0x12cbc028 */
  if (!C.zf) goto L_12cbc028;
  /* 12cbc015 call 0x12cbc080 */
  push32(0x12cbc01au); f_12cbc080();
  /* 12cbc01a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbc01d mov ecx, dword ptr [edx*8 + 0x12cdefbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x12cdefbc)));
  /* 12cbc024 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12cbc026 jmp 0x12cbc06d */
  goto L_12cbc06d;
L_12cbc028:;
  /* 12cbc028 jmp 0x12cbbff7 */
  goto L_12cbbff7;
L_12cbc02a:;
  /* 12cbc02a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbc02e jb 0x12cbc043 */
  if (C.cf) goto L_12cbc043;
  /* 12cbc030 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbc034 ja 0x12cbc043 */
  if ((!C.cf&&!C.zf)) goto L_12cbc043;
  /* 12cbc036 call 0x12cbc080 */
  push32(0x12cbc03bu); f_12cbc080();
  /* 12cbc03b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 12cbc041 jmp 0x12cbc06d */
  goto L_12cbc06d;
L_12cbc043:;
  /* 12cbc043 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbc04a jb 0x12cbc062 */
  if (C.cf) goto L_12cbc062;
  /* 12cbc04c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbc053 ja 0x12cbc062 */
  if ((!C.cf&&!C.zf)) goto L_12cbc062;
  /* 12cbc055 call 0x12cbc080 */
  push32(0x12cbc05au); f_12cbc080();
  /* 12cbc05a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 12cbc060 jmp 0x12cbc06d */
  goto L_12cbc06d;
L_12cbc062:;
  /* 12cbc062 call 0x12cbc080 */
  push32(0x12cbc067u); f_12cbc080();
  /* 12cbc067 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_12cbc06d:;
  /* 12cbc06d mov esp, ebp */
  ESP = (EBP);
  /* 12cbc06f pop ebp */
  EBP = (pop32());
  /* 12cbc070 ret  */
  ESPCHK(0x12cbbfe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c080 @ 0x12cbc080 (13 bytes, 6 insns) */
void f_12cbc080(void) {
  FTRACE(0x12cbc080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbc080 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbc081 mov ebp, esp */
  EBP = (ESP);
  /* 12cbc083 call 0x12cb3bf0 */
  push32(0x12cbc088u); f_12cb3bf0();
  /* 12cbc088 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbc08b pop ebp */
  EBP = (pop32());
  /* 12cbc08c ret  */
  ESPCHK(0x12cbc080u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c090 @ 0x12cbc090 (13 bytes, 6 insns) */
void f_12cbc090(void) {
  FTRACE(0x12cbc090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbc090 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbc091 mov ebp, esp */
  EBP = (ESP);
  /* 12cbc093 call 0x12cb3bf0 */
  push32(0x12cbc098u); f_12cb3bf0();
  /* 12cbc098 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbc09b pop ebp */
  EBP = (pop32());
  /* 12cbc09c ret  */
  ESPCHK(0x12cbc090u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0a0 @ 0x12cbc0a0 (664 bytes, 260 insns) [15 switch table(s)] */
void f_12cbc0a0(void) {
  FTRACE(0x12cbc0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbc0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbc0a1 mov ebp, esp */
  EBP = (ESP);
  /* 12cbc0a3 push edi */
  push32((uint32_t)(EDI));
  /* 12cbc0a4 push esi */
  push32((uint32_t)(ESI));
  /* 12cbc0a5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbc0a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cbc0ab mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbc0ae mov eax, ecx */
  EAX = (ECX);
  /* 12cbc0b0 mov edx, ecx */
  EDX = (ECX);
  /* 12cbc0b2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbc0b4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbc0b6 jbe 0x12cbc0c0 */
  if ((C.cf||C.zf)) goto L_12cbc0c0;
  /* 12cbc0b8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbc0ba jb 0x12cbc238 */
  if (C.cf) goto L_12cbc238;
L_12cbc0c0:;
  /* 12cbc0c0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12cbc0c6 jne 0x12cbc0dc */
  if (!C.zf) goto L_12cbc0dc;
  /* 12cbc0c8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12cbc0cb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12cbc0ce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbc0d1 jb 0x12cbc0fc */
  if (C.cf) goto L_12cbc0fc;
  /* 12cbc0d3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12cbc0d5 jmp dword ptr [edx*4 + 0x12cbc1e8] */
  switch (EDX) {
    case 0: goto L_12cbc1f8;
    case 1: goto L_12cbc200;
    case 2: goto L_12cbc20c;
    case 3: goto L_12cbc220;
    default: x86_unimpl("switch@0x12cbc0d5 out of table"); return;
  }
L_12cbc0dc:;
  /* 12cbc0dc mov eax, edi */
  EAX = (EDI);
  /* 12cbc0de mov edx, 3 */
  EDX = (0x3u);
  /* 12cbc0e3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbc0e6 jb 0x12cbc0f4 */
  if (C.cf) goto L_12cbc0f4;
  /* 12cbc0e8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12cbc0eb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbc0ed jmp dword ptr [eax*4 + 0x12cbc100] */
  switch (EAX) {
    case 1: goto L_12cbc110;
    case 2: goto L_12cbc13c;
    case 3: goto L_12cbc160;
    default: x86_unimpl("switch@0x12cbc0ed out of table"); return;
  }
L_12cbc0f4:;
  /* 12cbc0f4 jmp dword ptr [ecx*4 + 0x12cbc1f8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x12cbc1f8)))); return;
  /* 12cbc0fb nop  */
  /* nop */
L_12cbc0fc:;
  /* 12cbc0fc jmp dword ptr [ecx*4 + 0x12cbc17c] */
  switch (ECX) {
    case 0: goto L_12cbc1df;
    case 1: goto L_12cbc1cc;
    case 2: goto L_12cbc1c4;
    case 3: goto L_12cbc1bc;
    case 4: goto L_12cbc1b4;
    case 5: goto L_12cbc1ac;
    case 6: goto L_12cbc1a4;
    case 7: goto L_12cbc19c;
    default: x86_unimpl("switch@0x12cbc0fc out of table"); return;
  }
  /* 12cbc103 nop  */
  /* nop */
L_12cbc110:;
  /* 12cbc110 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12cbc112 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12cbc114 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12cbc116 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12cbc119 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12cbc11c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12cbc11f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12cbc122 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12cbc125 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbc128 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbc12b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbc12e jb 0x12cbc0fc */
  if (C.cf) goto L_12cbc0fc;
  /* 12cbc130 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12cbc132 jmp dword ptr [edx*4 + 0x12cbc1e8] */
  switch (EDX) {
    case 0: goto L_12cbc1f8;
    case 1: goto L_12cbc200;
    case 2: goto L_12cbc20c;
    case 3: goto L_12cbc220;
    default: x86_unimpl("switch@0x12cbc132 out of table"); return;
  }
  /* 12cbc139 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12cbc13c:;
  /* 12cbc13c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12cbc13e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12cbc140 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12cbc142 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12cbc145 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12cbc148 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12cbc14b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbc14e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbc151 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbc154 jb 0x12cbc0fc */
  if (C.cf) goto L_12cbc0fc;
  /* 12cbc156 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12cbc158 jmp dword ptr [edx*4 + 0x12cbc1e8] */
  switch (EDX) {
    case 0: goto L_12cbc1f8;
    case 1: goto L_12cbc200;
    case 2: goto L_12cbc20c;
    case 3: goto L_12cbc220;
    default: x86_unimpl("switch@0x12cbc158 out of table"); return;
  }
  /* 12cbc15f nop  */
  /* nop */
L_12cbc160:;
  /* 12cbc160 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12cbc162 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12cbc164 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12cbc166 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12cbc167 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12cbc16a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12cbc16b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbc16e jb 0x12cbc0fc */
  if (C.cf) goto L_12cbc0fc;
  /* 12cbc170 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12cbc172 jmp dword ptr [edx*4 + 0x12cbc1e8] */
  switch (EDX) {
    case 0: goto L_12cbc1f8;
    case 1: goto L_12cbc200;
    case 2: goto L_12cbc20c;
    case 3: goto L_12cbc220;
    default: x86_unimpl("switch@0x12cbc172 out of table"); return;
  }
  /* 12cbc179 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12cbc19c:;
  /* 12cbc19c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 12cbc1a0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_12cbc1a4:;
  /* 12cbc1a4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 12cbc1a8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_12cbc1ac:;
  /* 12cbc1ac mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 12cbc1b0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_12cbc1b4:;
  /* 12cbc1b4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 12cbc1b8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_12cbc1bc:;
  /* 12cbc1bc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 12cbc1c0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_12cbc1c4:;
  /* 12cbc1c4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 12cbc1c8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_12cbc1cc:;
  /* 12cbc1cc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 12cbc1d0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 12cbc1d4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12cbc1db add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbc1dd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12cbc1df:;
  /* 12cbc1df jmp dword ptr [edx*4 + 0x12cbc1e8] */
  switch (EDX) {
    case 0: goto L_12cbc1f8;
    case 1: goto L_12cbc200;
    case 2: goto L_12cbc20c;
    case 3: goto L_12cbc220;
    default: x86_unimpl("switch@0x12cbc1df out of table"); return;
  }
  /* 12cbc1e6 mov edi, edi */
  EDI = (EDI);
L_12cbc1f8:;
  /* 12cbc1f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbc1fb pop esi */
  ESI = (pop32());
  /* 12cbc1fc pop edi */
  EDI = (pop32());
  /* 12cbc1fd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12cbc1fe ret  */
  ESPCHK(0x12cbc0a0u, _esp0);
  ESP += 4; return;
  /* 12cbc1ff nop  */
  /* nop */
L_12cbc200:;
  /* 12cbc200 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12cbc202 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12cbc204 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbc207 pop esi */
  ESI = (pop32());
  /* 12cbc208 pop edi */
  EDI = (pop32());
  /* 12cbc209 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12cbc20a ret  */
  ESPCHK(0x12cbc0a0u, _esp0);
  ESP += 4; return;
  /* 12cbc20b nop  */
  /* nop */
L_12cbc20c:;
  /* 12cbc20c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12cbc20e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12cbc210 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12cbc213 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12cbc216 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbc219 pop esi */
  ESI = (pop32());
  /* 12cbc21a pop edi */
  EDI = (pop32());
  /* 12cbc21b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12cbc21c ret  */
  ESPCHK(0x12cbc0a0u, _esp0);
  ESP += 4; return;
  /* 12cbc21d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12cbc220:;
  /* 12cbc220 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12cbc222 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12cbc224 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12cbc227 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12cbc22a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12cbc22d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12cbc230 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbc233 pop esi */
  ESI = (pop32());
  /* 12cbc234 pop edi */
  EDI = (pop32());
  /* 12cbc235 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12cbc236 ret  */
  ESPCHK(0x12cbc0a0u, _esp0);
  ESP += 4; return;
  /* 12cbc237 nop  */
  /* nop */
L_12cbc238:;
  /* 12cbc238 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 12cbc23c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 12cbc240 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12cbc246 jne 0x12cbc26c */
  if (!C.zf) goto L_12cbc26c;
  /* 12cbc248 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12cbc24b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12cbc24e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbc251 jb 0x12cbc260 */
  if (C.cf) goto L_12cbc260;
  /* 12cbc253 std  */
  C.df=1;
  /* 12cbc254 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12cbc256 cld  */
  C.df=0;
  /* 12cbc257 jmp dword ptr [edx*4 + 0x12cbc380] */
  switch (EDX) {
    case 0: goto L_12cbc390;
    case 1: goto L_12cbc398;
    case 2: goto L_12cbc3a8;
    case 3: goto L_12cbc3bc;
    default: x86_unimpl("switch@0x12cbc257 out of table"); return;
  }
  /* 12cbc25e mov edi, edi */
  EDI = (EDI);
L_12cbc260:;
  /* 12cbc260 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cbc262 jmp dword ptr [ecx*4 + 0x12cbc330] */
  switch (ECX) {
    case 0: goto L_12cbc377;
    default: x86_unimpl("switch@0x12cbc262 out of table"); return;
  }
  /* 12cbc269 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12cbc26c:;
  /* 12cbc26c mov eax, edi */
  EAX = (EDI);
  /* 12cbc26e mov edx, 3 */
  EDX = (0x3u);
  /* 12cbc273 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbc276 jb 0x12cbc284 */
  if (C.cf) goto L_12cbc284;
  /* 12cbc278 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12cbc27b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbc27d jmp dword ptr [eax*4 + 0x12cbc288] */
  switch (EAX) {
    case 1: goto L_12cbc298;
    case 2: goto L_12cbc2b8;
    case 3: goto L_12cbc2e0;
    default: x86_unimpl("switch@0x12cbc27d out of table"); return;
  }
L_12cbc284:;
  /* 12cbc284 jmp dword ptr [ecx*4 + 0x12cbc380] */
  switch (ECX) {
    case 0: goto L_12cbc390;
    case 1: goto L_12cbc398;
    case 2: goto L_12cbc3a8;
    case 3: goto L_12cbc3bc;
    default: x86_unimpl("switch@0x12cbc284 out of table"); return;
  }
  /* 12cbc28b nop  */
  /* nop */
L_12cbc298:;
  /* 12cbc298 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12cbc29b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12cbc29d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12cbc2a0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12cbc2a1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12cbc2a4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12cbc2a5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbc2a8 jb 0x12cbc260 */
  if (C.cf) goto L_12cbc260;
  /* 12cbc2aa std  */
  C.df=1;
  /* 12cbc2ab rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12cbc2ad cld  */
  C.df=0;
  /* 12cbc2ae jmp dword ptr [edx*4 + 0x12cbc380] */
  switch (EDX) {
    case 0: goto L_12cbc390;
    case 1: goto L_12cbc398;
    case 2: goto L_12cbc3a8;
    case 3: goto L_12cbc3bc;
    default: x86_unimpl("switch@0x12cbc2ae out of table"); return;
  }
  /* 12cbc2b5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12cbc2b8:;
  /* 12cbc2b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12cbc2bb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12cbc2bd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12cbc2c0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12cbc2c3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12cbc2c6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12cbc2c9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbc2cc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbc2cf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbc2d2 jb 0x12cbc260 */
  if (C.cf) goto L_12cbc260;
  /* 12cbc2d4 std  */
  C.df=1;
  /* 12cbc2d5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12cbc2d7 cld  */
  C.df=0;
  /* 12cbc2d8 jmp dword ptr [edx*4 + 0x12cbc380] */
  switch (EDX) {
    case 0: goto L_12cbc390;
    case 1: goto L_12cbc398;
    case 2: goto L_12cbc3a8;
    case 3: goto L_12cbc3bc;
    default: x86_unimpl("switch@0x12cbc2d8 out of table"); return;
  }
  /* 12cbc2df nop  */
  /* nop */
L_12cbc2e0:;
  /* 12cbc2e0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12cbc2e3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12cbc2e5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12cbc2e8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12cbc2eb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12cbc2ee mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12cbc2f1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12cbc2f4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12cbc2f7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbc2fa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbc2fd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbc300 jb 0x12cbc260 */
  if (C.cf) goto L_12cbc260;
  /* 12cbc306 std  */
  C.df=1;
  /* 12cbc307 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12cbc309 cld  */
  C.df=0;
  /* 12cbc30a jmp dword ptr [edx*4 + 0x12cbc380] */
  switch (EDX) {
    case 0: goto L_12cbc390;
    case 1: goto L_12cbc398;
    case 2: goto L_12cbc3a8;
    case 3: goto L_12cbc3bc;
    default: x86_unimpl("switch@0x12cbc30a out of table"); return;
  }
  /* 12cbc311 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 12cbc314 xor al, 0xc3 */
  { uint32_t _r=(AL)^(0xc3u); AL = (_r); fl_logic(_r,8); }
  /* 12cbc316 retf  */
  x86_unimpl("retf @ 0x12cbc316");
  /* 12cbc317 adc bh, byte ptr [ebx + eax*8] */
  { uint32_t _a=(C.b.b.h),_b=(r8((uint32_t)(EBX + EAX*8))),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 12cbc31a retf  */
  x86_unimpl("retf @ 0x12cbc31a");
  /* 12cbc31b adc al, byte ptr [ebx + eax*8 - 0x35] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EBX + EAX*8 + -0x35))),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12cbc31f adc cl, byte ptr [ebx + eax*8 - 0x35] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EBX + EAX*8 + -0x35))),_r=_a+_b+C.cf; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12cbc323 adc dl, byte ptr [ebx + eax*8 - 0x35] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EBX + EAX*8 + -0x35))),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 12cbc327 adc bl, byte ptr [ebx + eax*8 - 0x35] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(EBX + EAX*8 + -0x35))),_r=_a+_b+C.cf; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 12cbc32b adc ah, byte ptr [ebx + eax*8 - 0x35] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(EBX + EAX*8 + -0x35))),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 12cbc334 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 12cbc338 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 12cbc33c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 12cbc340 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 12cbc344 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 12cbc348 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 12cbc34c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 12cbc350 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 12cbc354 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 12cbc358 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 12cbc35c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 12cbc360 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 12cbc364 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 12cbc368 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 12cbc36c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12cbc373 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbc375 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12cbc377:;
  /* 12cbc377 jmp dword ptr [edx*4 + 0x12cbc380] */
  switch (EDX) {
    case 0: goto L_12cbc390;
    case 1: goto L_12cbc398;
    case 2: goto L_12cbc3a8;
    case 3: goto L_12cbc3bc;
    default: x86_unimpl("switch@0x12cbc377 out of table"); return;
  }
  /* 12cbc37e mov edi, edi */
  EDI = (EDI);
L_12cbc390:;
  /* 12cbc390 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbc393 pop esi */
  ESI = (pop32());
  /* 12cbc394 pop edi */
  EDI = (pop32());
  /* 12cbc395 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12cbc396 ret  */
  ESPCHK(0x12cbc0a0u, _esp0);
  ESP += 4; return;
  /* 12cbc397 nop  */
  /* nop */
L_12cbc398:;
  /* 12cbc398 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12cbc39b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12cbc39e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbc3a1 pop esi */
  ESI = (pop32());
  /* 12cbc3a2 pop edi */
  EDI = (pop32());
  /* 12cbc3a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12cbc3a4 ret  */
  ESPCHK(0x12cbc0a0u, _esp0);
  ESP += 4; return;
  /* 12cbc3a5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12cbc3a8:;
  /* 12cbc3a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12cbc3ab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12cbc3ae mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12cbc3b1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12cbc3b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbc3b7 pop esi */
  ESI = (pop32());
  /* 12cbc3b8 pop edi */
  EDI = (pop32());
  /* 12cbc3b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12cbc3ba ret  */
  ESPCHK(0x12cbc0a0u, _esp0);
  ESP += 4; return;
  /* 12cbc3bb nop  */
  /* nop */
L_12cbc3bc:;
  /* 12cbc3bc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12cbc3bf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12cbc3c2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12cbc3c5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12cbc3c8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12cbc3cb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12cbc3ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbc3d1 pop esi */
  ESI = (pop32());
  /* 12cbc3d2 pop edi */
  EDI = (pop32());
  /* 12cbc3d3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12cbc3d4 ret  */
  ESPCHK(0x12cbc0a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3e0 @ 0x12cbc3e0 (421 bytes, 148 insns) */
void f_12cbc3e0(void) {
  FTRACE(0x12cbc3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbc3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbc3e1 mov ebp, esp */
  EBP = (ESP);
  /* 12cbc3e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12cbc3e5 push 0x12cdc398 */
  push32((uint32_t)(0x12cdc398u));
  /* 12cbc3ea push 0x12cbd2b8 */
  push32((uint32_t)(0x12cbd2b8u));
  /* 12cbc3ef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12cbc3f5 push eax */
  push32((uint32_t)(EAX));
  /* 12cbc3f6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12cbc3fd add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbc400 push ebx */
  push32((uint32_t)(EBX));
  /* 12cbc401 push esi */
  push32((uint32_t)(ESI));
  /* 12cbc402 push edi */
  push32((uint32_t)(EDI));
  /* 12cbc403 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12cbc406 cmp dword ptr [0x12ce070c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce070c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbc40d jne 0x12cbc45e */
  if (!C.zf) goto L_12cbc45e;
  /* 12cbc40f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12cbc412 push eax */
  push32((uint32_t)(EAX));
  /* 12cbc413 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbc415 push 0x12cdc394 */
  push32((uint32_t)(0x12cdc394u));
  /* 12cbc41a push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbc41c call dword ptr [0x12ce32cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32cc))), 0x12cbc422u);
  /* 12cbc422 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbc424 je 0x12cbc432 */
  if (C.zf) goto L_12cbc432;
  /* 12cbc426 mov dword ptr [0x12ce070c], 1 */
  w32((uint32_t)(0x12ce070c), (0x1u));
  /* 12cbc430 jmp 0x12cbc45e */
  goto L_12cbc45e;
L_12cbc432:;
  /* 12cbc432 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12cbc435 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbc436 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbc438 push 0x12cdc390 */
  push32((uint32_t)(0x12cdc390u));
  /* 12cbc43d push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbc43f push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbc441 call dword ptr [0x12ce32d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32d0))), 0x12cbc447u);
  /* 12cbc447 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbc449 je 0x12cbc457 */
  if (C.zf) goto L_12cbc457;
  /* 12cbc44b mov dword ptr [0x12ce070c], 2 */
  w32((uint32_t)(0x12ce070c), (0x2u));
  /* 12cbc455 jmp 0x12cbc45e */
  goto L_12cbc45e;
L_12cbc457:;
  /* 12cbc457 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbc459 jmp 0x12cbc588 */
  goto L_12cbc588;
L_12cbc45e:;
  /* 12cbc45e cmp dword ptr [0x12ce070c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12ce070c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbc465 jne 0x12cbc495 */
  if (!C.zf) goto L_12cbc495;
  /* 12cbc467 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbc46b jne 0x12cbc476 */
  if (!C.zf) goto L_12cbc476;
  /* 12cbc46d mov edx, dword ptr [0x12ce0718] */
  EDX = (r32((uint32_t)(0x12ce0718)));
  /* 12cbc473 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12cbc476:;
  /* 12cbc476 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cbc479 push eax */
  push32((uint32_t)(EAX));
  /* 12cbc47a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cbc47d push ecx */
  push32((uint32_t)(ECX));
  /* 12cbc47e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbc481 push edx */
  push32((uint32_t)(EDX));
  /* 12cbc482 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbc485 push eax */
  push32((uint32_t)(EAX));
  /* 12cbc486 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12cbc489 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbc48a call dword ptr [0x12ce32d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32d0))), 0x12cbc490u);
  /* 12cbc490 jmp 0x12cbc588 */
  goto L_12cbc588;
L_12cbc495:;
  /* 12cbc495 cmp dword ptr [0x12ce070c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ce070c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbc49c jne 0x12cbc586 */
  if (!C.zf) goto L_12cbc586;
  /* 12cbc4a2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbc4a6 jne 0x12cbc4b1 */
  if (!C.zf) goto L_12cbc4b1;
  /* 12cbc4a8 mov edx, dword ptr [0x12ce0728] */
  EDX = (r32((uint32_t)(0x12ce0728)));
  /* 12cbc4ae mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_12cbc4b1:;
  /* 12cbc4b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbc4b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbc4b5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cbc4b8 push eax */
  push32((uint32_t)(EAX));
  /* 12cbc4b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbc4bc push ecx */
  push32((uint32_t)(ECX));
  /* 12cbc4bd mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 12cbc4c0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cbc4c2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbc4c4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12cbc4c7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbc4ca push edx */
  push32((uint32_t)(EDX));
  /* 12cbc4cb mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cbc4ce push eax */
  push32((uint32_t)(EAX));
  /* 12cbc4cf call dword ptr [0x12ce32d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32d4))), 0x12cbc4d5u);
  /* 12cbc4d5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12cbc4d8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbc4dc jne 0x12cbc4e5 */
  if (!C.zf) goto L_12cbc4e5;
  /* 12cbc4de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbc4e0 jmp 0x12cbc588 */
  goto L_12cbc588;
L_12cbc4e5:;
  /* 12cbc4e5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cbc4ec mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cbc4ef shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12cbc4f1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbc4f4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12cbc4f6 call 0x12cb7350 */
  push32(0x12cbc4fbu); f_12cb7350();
  /* 12cbc4fb mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 12cbc4fe mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12cbc501 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cbc504 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12cbc507 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cbc50a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12cbc50c push edx */
  push32((uint32_t)(EDX));
  /* 12cbc50d push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbc50f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cbc512 push eax */
  push32((uint32_t)(EAX));
  /* 12cbc513 call 0x12cb7f20 */
  push32(0x12cbc518u); f_12cb7f20();
  /* 12cbc518 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbc51b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12cbc522 jmp 0x12cbc53b */
  goto L_12cbc53b;
  /* 12cbc524 mov eax, 1 */
  EAX = (0x1u);
  /* 12cbc529 ret  */
  ESPCHK(0x12cbc3e0u, _esp0);
  ESP += 4; return;
  /* 12cbc52a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12cbc52d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12cbc534 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12cbc53b:;
  /* 12cbc53b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbc53f jne 0x12cbc545 */
  if (!C.zf) goto L_12cbc545;
  /* 12cbc541 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbc543 jmp 0x12cbc588 */
  goto L_12cbc588;
L_12cbc545:;
  /* 12cbc545 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cbc548 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbc549 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cbc54c push edx */
  push32((uint32_t)(EDX));
  /* 12cbc54d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cbc550 push eax */
  push32((uint32_t)(EAX));
  /* 12cbc551 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbc554 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbc555 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbc557 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cbc55a push edx */
  push32((uint32_t)(EDX));
  /* 12cbc55b call dword ptr [0x12ce32d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32d4))), 0x12cbc561u);
  /* 12cbc561 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12cbc564 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbc568 jne 0x12cbc56e */
  if (!C.zf) goto L_12cbc56e;
  /* 12cbc56a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbc56c jmp 0x12cbc588 */
  goto L_12cbc588;
L_12cbc56e:;
  /* 12cbc56e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cbc571 push eax */
  push32((uint32_t)(EAX));
  /* 12cbc572 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cbc575 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbc576 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cbc579 push edx */
  push32((uint32_t)(EDX));
  /* 12cbc57a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbc57d push eax */
  push32((uint32_t)(EAX));
  /* 12cbc57e call dword ptr [0x12ce32cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32cc))), 0x12cbc584u);
  /* 12cbc584 jmp 0x12cbc588 */
  goto L_12cbc588;
L_12cbc586:;
  /* 12cbc586 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cbc588:;
  /* 12cbc588 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 12cbc58b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cbc58e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12cbc595 pop edi */
  EDI = (pop32());
  /* 12cbc596 pop esi */
  ESI = (pop32());
  /* 12cbc597 pop ebx */
  EBX = (pop32());
  /* 12cbc598 mov esp, ebp */
  ESP = (EBP);
  /* 12cbc59a pop ebp */
  EBP = (pop32());
  /* 12cbc59b ret  */
  ESPCHK(0x12cbc3e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c5a0 @ 0x12cbc5a0 (727 bytes, 263 insns) */
void f_12cbc5a0(void) {
  FTRACE(0x12cbc5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbc5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbc5a1 mov ebp, esp */
  EBP = (ESP);
  /* 12cbc5a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12cbc5a5 push 0x12cdc3a8 */
  push32((uint32_t)(0x12cdc3a8u));
  /* 12cbc5aa push 0x12cbd2b8 */
  push32((uint32_t)(0x12cbd2b8u));
  /* 12cbc5af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12cbc5b5 push eax */
  push32((uint32_t)(EAX));
  /* 12cbc5b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12cbc5bd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbc5c0 push ebx */
  push32((uint32_t)(EBX));
  /* 12cbc5c1 push esi */
  push32((uint32_t)(ESI));
  /* 12cbc5c2 push edi */
  push32((uint32_t)(EDI));
  /* 12cbc5c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12cbc5c6 cmp dword ptr [0x12ce0730], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0730))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbc5cd jne 0x12cbc626 */
  if (!C.zf) goto L_12cbc626;
  /* 12cbc5cf push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbc5d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbc5d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbc5d5 push 0x12cdc394 */
  push32((uint32_t)(0x12cdc394u));
  /* 12cbc5da push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12cbc5df push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbc5e1 call dword ptr [0x12ce32c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32c4))), 0x12cbc5e7u);
  /* 12cbc5e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbc5e9 je 0x12cbc5f7 */
  if (C.zf) goto L_12cbc5f7;
  /* 12cbc5eb mov dword ptr [0x12ce0730], 1 */
  w32((uint32_t)(0x12ce0730), (0x1u));
  /* 12cbc5f5 jmp 0x12cbc626 */
  goto L_12cbc626;
L_12cbc5f7:;
  /* 12cbc5f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbc5f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbc5fb push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbc5fd push 0x12cdc390 */
  push32((uint32_t)(0x12cdc390u));
  /* 12cbc602 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12cbc607 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbc609 call dword ptr [0x12ce32c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32c8))), 0x12cbc60fu);
  /* 12cbc60f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbc611 je 0x12cbc61f */
  if (C.zf) goto L_12cbc61f;
  /* 12cbc613 mov dword ptr [0x12ce0730], 2 */
  w32((uint32_t)(0x12ce0730), (0x2u));
  /* 12cbc61d jmp 0x12cbc626 */
  goto L_12cbc626;
L_12cbc61f:;
  /* 12cbc61f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbc621 jmp 0x12cbc891 */
  goto L_12cbc891;
L_12cbc626:;
  /* 12cbc626 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbc62a jle 0x12cbc63f */
  if ((C.zf||C.sf!=C.of)) goto L_12cbc63f;
  /* 12cbc62c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cbc62f push eax */
  push32((uint32_t)(EAX));
  /* 12cbc630 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cbc633 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbc634 call 0x12cbc8b0 */
  push32(0x12cbc639u); f_12cbc8b0();
  /* 12cbc639 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbc63c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_12cbc63f:;
  /* 12cbc63f cmp dword ptr [0x12ce0730], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0730))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbc646 jne 0x12cbc66b */
  if (!C.zf) goto L_12cbc66b;
  /* 12cbc648 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12cbc64b push edx */
  push32((uint32_t)(EDX));
  /* 12cbc64c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cbc64f push eax */
  push32((uint32_t)(EAX));
  /* 12cbc650 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cbc653 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbc654 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cbc657 push edx */
  push32((uint32_t)(EDX));
  /* 12cbc658 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbc65b push eax */
  push32((uint32_t)(EAX));
  /* 12cbc65c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbc65f push ecx */
  push32((uint32_t)(ECX));
  /* 12cbc660 call dword ptr [0x12ce32c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32c8))), 0x12cbc666u);
  /* 12cbc666 jmp 0x12cbc891 */
  goto L_12cbc891;
L_12cbc66b:;
  /* 12cbc66b cmp dword ptr [0x12ce0730], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0730))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbc672 jne 0x12cbc88f */
  if (!C.zf) goto L_12cbc88f;
  /* 12cbc678 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbc67c jne 0x12cbc687 */
  if (!C.zf) goto L_12cbc687;
  /* 12cbc67e mov edx, dword ptr [0x12ce0728] */
  EDX = (r32((uint32_t)(0x12ce0728)));
  /* 12cbc684 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_12cbc687:;
  /* 12cbc687 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbc689 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbc68b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cbc68e push eax */
  push32((uint32_t)(EAX));
  /* 12cbc68f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cbc692 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbc693 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 12cbc696 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cbc698 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbc69a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12cbc69d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbc6a0 push edx */
  push32((uint32_t)(EDX));
  /* 12cbc6a1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12cbc6a4 push eax */
  push32((uint32_t)(EAX));
  /* 12cbc6a5 call dword ptr [0x12ce32d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32d4))), 0x12cbc6abu);
  /* 12cbc6ab mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12cbc6ae cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbc6b2 jne 0x12cbc6bb */
  if (!C.zf) goto L_12cbc6bb;
  /* 12cbc6b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbc6b6 jmp 0x12cbc891 */
  goto L_12cbc891;
L_12cbc6bb:;
  /* 12cbc6bb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cbc6c2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cbc6c5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12cbc6c7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbc6ca and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12cbc6cc call 0x12cb7350 */
  push32(0x12cbc6d1u); f_12cb7350();
  /* 12cbc6d1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12cbc6d4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12cbc6d7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cbc6da mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12cbc6dd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12cbc6e4 jmp 0x12cbc6fd */
  goto L_12cbc6fd;
  /* 12cbc6e6 mov eax, 1 */
  EAX = (0x1u);
  /* 12cbc6eb ret  */
  ESPCHK(0x12cbc5a0u, _esp0);
  ESP += 4; return;
  /* 12cbc6ec mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12cbc6ef mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12cbc6f6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12cbc6fd:;
  /* 12cbc6fd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbc701 jne 0x12cbc70a */
  if (!C.zf) goto L_12cbc70a;
  /* 12cbc703 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbc705 jmp 0x12cbc891 */
  goto L_12cbc891;
L_12cbc70a:;
  /* 12cbc70a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cbc70d push edx */
  push32((uint32_t)(EDX));
  /* 12cbc70e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cbc711 push eax */
  push32((uint32_t)(EAX));
  /* 12cbc712 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cbc715 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbc716 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cbc719 push edx */
  push32((uint32_t)(EDX));
  /* 12cbc71a push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbc71c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12cbc71f push eax */
  push32((uint32_t)(EAX));
  /* 12cbc720 call dword ptr [0x12ce32d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32d4))), 0x12cbc726u);
  /* 12cbc726 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbc728 jne 0x12cbc731 */
  if (!C.zf) goto L_12cbc731;
  /* 12cbc72a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbc72c jmp 0x12cbc891 */
  goto L_12cbc891;
L_12cbc731:;
  /* 12cbc731 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbc733 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbc735 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cbc738 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbc739 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cbc73c push edx */
  push32((uint32_t)(EDX));
  /* 12cbc73d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbc740 push eax */
  push32((uint32_t)(EAX));
  /* 12cbc741 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbc744 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbc745 call dword ptr [0x12ce32c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32c4))), 0x12cbc74bu);
  /* 12cbc74b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12cbc74e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbc752 jne 0x12cbc75b */
  if (!C.zf) goto L_12cbc75b;
  /* 12cbc754 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbc756 jmp 0x12cbc891 */
  goto L_12cbc891;
L_12cbc75b:;
  /* 12cbc75b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbc75e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 12cbc764 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cbc766 je 0x12cbc7ab */
  if (C.zf) goto L_12cbc7ab;
  /* 12cbc768 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbc76c je 0x12cbc7a6 */
  if (C.zf) goto L_12cbc7a6;
  /* 12cbc76e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cbc771 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbc774 jle 0x12cbc77d */
  if ((C.zf||C.sf!=C.of)) goto L_12cbc77d;
  /* 12cbc776 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbc778 jmp 0x12cbc891 */
  goto L_12cbc891;
L_12cbc77d:;
  /* 12cbc77d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12cbc780 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbc781 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cbc784 push edx */
  push32((uint32_t)(EDX));
  /* 12cbc785 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cbc788 push eax */
  push32((uint32_t)(EAX));
  /* 12cbc789 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cbc78c push ecx */
  push32((uint32_t)(ECX));
  /* 12cbc78d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbc790 push edx */
  push32((uint32_t)(EDX));
  /* 12cbc791 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbc794 push eax */
  push32((uint32_t)(EAX));
  /* 12cbc795 call dword ptr [0x12ce32c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32c4))), 0x12cbc79bu);
  /* 12cbc79b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbc79d jne 0x12cbc7a6 */
  if (!C.zf) goto L_12cbc7a6;
  /* 12cbc79f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbc7a1 jmp 0x12cbc891 */
  goto L_12cbc891;
L_12cbc7a6:;
  /* 12cbc7a6 jmp 0x12cbc88a */
  goto L_12cbc88a;
L_12cbc7ab:;
  /* 12cbc7ab mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cbc7ae mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12cbc7b1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12cbc7b8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cbc7bb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12cbc7bd add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbc7c0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12cbc7c2 call 0x12cb7350 */
  push32(0x12cbc7c7u); f_12cb7350();
  /* 12cbc7c7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12cbc7ca mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12cbc7cd mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12cbc7d0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12cbc7d3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12cbc7da jmp 0x12cbc7f3 */
  goto L_12cbc7f3;
  /* 12cbc7dc mov eax, 1 */
  EAX = (0x1u);
  /* 12cbc7e1 ret  */
  ESPCHK(0x12cbc5a0u, _esp0);
  ESP += 4; return;
  /* 12cbc7e2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12cbc7e5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12cbc7ec mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12cbc7f3:;
  /* 12cbc7f3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbc7f7 jne 0x12cbc800 */
  if (!C.zf) goto L_12cbc800;
  /* 12cbc7f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbc7fb jmp 0x12cbc891 */
  goto L_12cbc891;
L_12cbc800:;
  /* 12cbc800 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cbc803 push eax */
  push32((uint32_t)(EAX));
  /* 12cbc804 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cbc807 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbc808 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cbc80b push edx */
  push32((uint32_t)(EDX));
  /* 12cbc80c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cbc80f push eax */
  push32((uint32_t)(EAX));
  /* 12cbc810 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbc813 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbc814 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbc817 push edx */
  push32((uint32_t)(EDX));
  /* 12cbc818 call dword ptr [0x12ce32c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32c4))), 0x12cbc81eu);
  /* 12cbc81e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbc820 jne 0x12cbc826 */
  if (!C.zf) goto L_12cbc826;
  /* 12cbc822 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbc824 jmp 0x12cbc891 */
  goto L_12cbc891;
L_12cbc826:;
  /* 12cbc826 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbc82a jne 0x12cbc85a */
  if (!C.zf) goto L_12cbc85a;
  /* 12cbc82c push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbc82e push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbc830 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbc832 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbc834 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cbc837 push eax */
  push32((uint32_t)(EAX));
  /* 12cbc838 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cbc83b push ecx */
  push32((uint32_t)(ECX));
  /* 12cbc83c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12cbc841 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 12cbc844 push edx */
  push32((uint32_t)(EDX));
  /* 12cbc845 call dword ptr [0x12ce3370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3370))), 0x12cbc84bu);
  /* 12cbc84b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12cbc84e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbc852 jne 0x12cbc858 */
  if (!C.zf) goto L_12cbc858;
  /* 12cbc854 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbc856 jmp 0x12cbc891 */
  goto L_12cbc891;
L_12cbc858:;
  /* 12cbc858 jmp 0x12cbc88a */
  goto L_12cbc88a;
L_12cbc85a:;
  /* 12cbc85a push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbc85c push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbc85e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12cbc861 push eax */
  push32((uint32_t)(EAX));
  /* 12cbc862 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12cbc865 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbc866 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cbc869 push edx */
  push32((uint32_t)(EDX));
  /* 12cbc86a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cbc86d push eax */
  push32((uint32_t)(EAX));
  /* 12cbc86e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12cbc873 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12cbc876 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbc877 call dword ptr [0x12ce3370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3370))), 0x12cbc87du);
  /* 12cbc87d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12cbc880 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbc884 jne 0x12cbc88a */
  if (!C.zf) goto L_12cbc88a;
  /* 12cbc886 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbc888 jmp 0x12cbc891 */
  goto L_12cbc891;
L_12cbc88a:;
  /* 12cbc88a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cbc88d jmp 0x12cbc891 */
  goto L_12cbc891;
L_12cbc88f:;
  /* 12cbc88f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cbc891:;
  /* 12cbc891 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12cbc894 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cbc897 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12cbc89e pop edi */
  EDI = (pop32());
  /* 12cbc89f pop esi */
  ESI = (pop32());
  /* 12cbc8a0 pop ebx */
  EBX = (pop32());
  /* 12cbc8a1 mov esp, ebp */
  ESP = (EBP);
  /* 12cbc8a3 pop ebp */
  EBP = (pop32());
  /* 12cbc8a4 ret  */
  ESPCHK(0x12cbc5a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c8b0 @ 0x12cbc8b0 (80 bytes, 32 insns) */
void f_12cbc8b0(void) {
  FTRACE(0x12cbc8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbc8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbc8b1 mov ebp, esp */
  EBP = (ESP);
  /* 12cbc8b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbc8b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbc8b9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cbc8bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbc8bf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12cbc8c2:;
  /* 12cbc8c2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbc8c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbc8c8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbc8cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cbc8ce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cbc8d0 je 0x12cbc8e7 */
  if (C.zf) goto L_12cbc8e7;
  /* 12cbc8d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbc8d5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cbc8d8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cbc8da je 0x12cbc8e7 */
  if (C.zf) goto L_12cbc8e7;
  /* 12cbc8dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbc8df add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbc8e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cbc8e5 jmp 0x12cbc8c2 */
  goto L_12cbc8c2;
L_12cbc8e7:;
  /* 12cbc8e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbc8ea movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cbc8ed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cbc8ef jne 0x12cbc8f9 */
  if (!C.zf) goto L_12cbc8f9;
  /* 12cbc8f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbc8f4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbc8f7 jmp 0x12cbc8fc */
  goto L_12cbc8fc;
L_12cbc8f9:;
  /* 12cbc8f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_12cbc8fc:;
  /* 12cbc8fc mov esp, ebp */
  ESP = (EBP);
  /* 12cbc8fe pop ebp */
  EBP = (pop32());
  /* 12cbc8ff ret  */
  ESPCHK(0x12cbc8b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c900 @ 0x12cbc900 (130 bytes, 43 insns) */
void f_12cbc900(void) {
  FTRACE(0x12cbc900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbc900 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbc901 mov ebp, esp */
  EBP = (ESP);
  /* 12cbc903 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbc904 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbc907 cmp eax, dword ptr [0x12ce203c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ce203c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbc90d jae 0x12cbc931 */
  if (!C.cf) goto L_12cbc931;
  /* 12cbc90f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbc912 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12cbc915 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbc918 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12cbc91b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cbc91e mov eax, dword ptr [ecx*4 + 0x12ce1f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12ce1f00)));
  /* 12cbc925 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12cbc92a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12cbc92d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cbc92f jne 0x12cbc94c */
  if (!C.zf) goto L_12cbc94c;
L_12cbc931:;
  /* 12cbc931 call 0x12cbc080 */
  push32(0x12cbc936u); f_12cbc080();
  /* 12cbc936 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12cbc93c call 0x12cbc090 */
  push32(0x12cbc941u); f_12cbc090();
  /* 12cbc941 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12cbc947 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cbc94a jmp 0x12cbc97e */
  goto L_12cbc97e;
L_12cbc94c:;
  /* 12cbc94c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbc94f push edx */
  push32((uint32_t)(EDX));
  /* 12cbc950 call 0x12cbd8a0 */
  push32(0x12cbc955u); f_12cbd8a0();
  /* 12cbc955 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbc958 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cbc95b push eax */
  push32((uint32_t)(EAX));
  /* 12cbc95c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbc95f push ecx */
  push32((uint32_t)(ECX));
  /* 12cbc960 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbc963 push edx */
  push32((uint32_t)(EDX));
  /* 12cbc964 call 0x12cbc990 */
  push32(0x12cbc969u); f_12cbc990();
  /* 12cbc969 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbc96c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cbc96f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbc972 push eax */
  push32((uint32_t)(EAX));
  /* 12cbc973 call 0x12cbd930 */
  push32(0x12cbc978u); f_12cbd930();
  /* 12cbc978 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbc97b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12cbc97e:;
  /* 12cbc97e mov esp, ebp */
  ESP = (EBP);
  /* 12cbc980 pop ebp */
  EBP = (pop32());
  /* 12cbc981 ret  */
  ESPCHK(0x12cbc900u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c990 @ 0x12cbc990 (178 bytes, 56 insns) */
void f_12cbc990(void) {
  FTRACE(0x12cbc990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbc990 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbc991 mov ebp, esp */
  EBP = (ESP);
  /* 12cbc993 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbc996 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbc999 push eax */
  push32((uint32_t)(EAX));
  /* 12cbc99a call 0x12cbd720 */
  push32(0x12cbc99fu); f_12cbd720();
  /* 12cbc99f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbc9a2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cbc9a5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbc9a9 jne 0x12cbc9be */
  if (!C.zf) goto L_12cbc9be;
  /* 12cbc9ab call 0x12cbc080 */
  push32(0x12cbc9b0u); f_12cbc080();
  /* 12cbc9b0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12cbc9b6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cbc9b9 jmp 0x12cbca3e */
  goto L_12cbca3e;
L_12cbc9be:;
  /* 12cbc9be mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cbc9c1 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbc9c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbc9c4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbc9c7 push edx */
  push32((uint32_t)(EDX));
  /* 12cbc9c8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbc9cb push eax */
  push32((uint32_t)(EAX));
  /* 12cbc9cc call dword ptr [0x12ce32c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32c0))), 0x12cbc9d2u);
  /* 12cbc9d2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cbc9d5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbc9d9 jne 0x12cbc9e6 */
  if (!C.zf) goto L_12cbc9e6;
  /* 12cbc9db call dword ptr [0x12ce3348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3348))), 0x12cbc9e1u);
  /* 12cbc9e1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cbc9e4 jmp 0x12cbc9ed */
  goto L_12cbc9ed;
L_12cbc9e6:;
  /* 12cbc9e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12cbc9ed:;
  /* 12cbc9ed cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbc9f1 je 0x12cbca04 */
  if (C.zf) goto L_12cbca04;
  /* 12cbc9f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbc9f6 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbc9f7 call 0x12cbbfe0 */
  push32(0x12cbc9fcu); f_12cbbfe0();
  /* 12cbc9fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbc9ff or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cbca02 jmp 0x12cbca3e */
  goto L_12cbca3e;
L_12cbca04:;
  /* 12cbca04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbca07 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12cbca0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbca0d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12cbca10 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cbca13 mov ecx, dword ptr [edx*4 + 0x12ce1f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12ce1f00)));
  /* 12cbca1a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 12cbca1e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 12cbca21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbca24 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12cbca27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbca2a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12cbca2d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cbca30 mov eax, dword ptr [eax*4 + 0x12ce1f00] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12ce1f00)));
  /* 12cbca37 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 12cbca3b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12cbca3e:;
  /* 12cbca3e mov esp, ebp */
  ESP = (EBP);
  /* 12cbca40 pop ebp */
  EBP = (pop32());
  /* 12cbca41 ret  */
  ESPCHK(0x12cbc990u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca50 @ 0x12cbca50 (130 bytes, 43 insns) */
void f_12cbca50(void) {
  FTRACE(0x12cbca50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbca50 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbca51 mov ebp, esp */
  EBP = (ESP);
  /* 12cbca53 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbca54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbca57 cmp eax, dword ptr [0x12ce203c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ce203c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbca5d jae 0x12cbca81 */
  if (!C.cf) goto L_12cbca81;
  /* 12cbca5f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbca62 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12cbca65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbca68 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12cbca6b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cbca6e mov eax, dword ptr [ecx*4 + 0x12ce1f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12ce1f00)));
  /* 12cbca75 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12cbca7a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12cbca7d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cbca7f jne 0x12cbca9c */
  if (!C.zf) goto L_12cbca9c;
L_12cbca81:;
  /* 12cbca81 call 0x12cbc080 */
  push32(0x12cbca86u); f_12cbc080();
  /* 12cbca86 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12cbca8c call 0x12cbc090 */
  push32(0x12cbca91u); f_12cbc090();
  /* 12cbca91 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12cbca97 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cbca9a jmp 0x12cbcace */
  goto L_12cbcace;
L_12cbca9c:;
  /* 12cbca9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbca9f push edx */
  push32((uint32_t)(EDX));
  /* 12cbcaa0 call 0x12cbd8a0 */
  push32(0x12cbcaa5u); f_12cbd8a0();
  /* 12cbcaa5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbcaa8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cbcaab push eax */
  push32((uint32_t)(EAX));
  /* 12cbcaac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbcaaf push ecx */
  push32((uint32_t)(ECX));
  /* 12cbcab0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbcab3 push edx */
  push32((uint32_t)(EDX));
  /* 12cbcab4 call 0x12cbcae0 */
  push32(0x12cbcab9u); f_12cbcae0();
  /* 12cbcab9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbcabc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cbcabf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbcac2 push eax */
  push32((uint32_t)(EAX));
  /* 12cbcac3 call 0x12cbd930 */
  push32(0x12cbcac8u); f_12cbd930();
  /* 12cbcac8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbcacb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12cbcace:;
  /* 12cbcace mov esp, ebp */
  ESP = (EBP);
  /* 12cbcad0 pop ebp */
  EBP = (pop32());
  /* 12cbcad1 ret  */
  ESPCHK(0x12cbca50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cae0 @ 0x12cbcae0 (627 bytes, 182 insns) */
void f_12cbcae0(void) {
  FTRACE(0x12cbcae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbcae0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbcae1 mov ebp, esp */
  EBP = (ESP);
  /* 12cbcae3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbcae9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12cbcaf0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cbcaf3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 12cbcaf9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbcafd jne 0x12cbcb06 */
  if (!C.zf) goto L_12cbcb06;
  /* 12cbcaff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbcb01 jmp 0x12cbcd4f */
  goto L_12cbcd4f;
L_12cbcb06:;
  /* 12cbcb06 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbcb09 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12cbcb0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbcb0f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12cbcb12 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cbcb15 mov eax, dword ptr [ecx*4 + 0x12ce1f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12ce1f00)));
  /* 12cbcb1c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12cbcb21 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12cbcb24 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cbcb26 je 0x12cbcb38 */
  if (C.zf) goto L_12cbcb38;
  /* 12cbcb28 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbcb2a push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbcb2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbcb2f push edx */
  push32((uint32_t)(EDX));
  /* 12cbcb30 call 0x12cbc990 */
  push32(0x12cbcb35u); f_12cbc990();
  /* 12cbcb35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cbcb38:;
  /* 12cbcb38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbcb3b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12cbcb3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbcb41 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12cbcb44 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cbcb47 mov edx, dword ptr [eax*4 + 0x12ce1f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12ce1f00)));
  /* 12cbcb4e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12cbcb53 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12cbcb58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbcb5a je 0x12cbcc6c */
  if (C.zf) goto L_12cbcc6c;
  /* 12cbcb60 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbcb63 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cbcb66 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12cbcb6d:;
  /* 12cbcb6d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbcb70 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbcb73 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbcb76 jae 0x12cbcc6a */
  if (!C.cf) goto L_12cbcc6a;
  /* 12cbcb7c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 12cbcb82 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12cbcb85:;
  /* 12cbcb85 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbcb88 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 12cbcb8e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbcb90 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbcb96 jge 0x12cbcbf7 */
  if ((C.sf==C.of)) goto L_12cbcbf7;
  /* 12cbcb98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbcb9b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbcb9e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbcba1 jae 0x12cbcbf7 */
  if (!C.cf) goto L_12cbcbf7;
  /* 12cbcba3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbcba6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12cbcba8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 12cbcbae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbcbb1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbcbb4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cbcbb7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 12cbcbbe cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbcbc1 jne 0x12cbcbe1 */
  if (!C.zf) goto L_12cbcbe1;
  /* 12cbcbc3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 12cbcbc9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbcbcc mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 12cbcbd2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbcbd5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 12cbcbd8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbcbdb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbcbde mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12cbcbe1:;
  /* 12cbcbe1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbcbe4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 12cbcbea mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12cbcbec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbcbef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbcbf2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cbcbf5 jmp 0x12cbcb85 */
  goto L_12cbcb85;
L_12cbcbf7:;
  /* 12cbcbf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbcbf9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 12cbcbff push edx */
  push32((uint32_t)(EDX));
  /* 12cbcc00 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbcc03 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 12cbcc09 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbcc0b push eax */
  push32((uint32_t)(EAX));
  /* 12cbcc0c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 12cbcc12 push edx */
  push32((uint32_t)(EDX));
  /* 12cbcc13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbcc16 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12cbcc19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbcc1c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12cbcc1f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cbcc22 mov edx, dword ptr [eax*4 + 0x12ce1f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12ce1f00)));
  /* 12cbcc29 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 12cbcc2c push eax */
  push32((uint32_t)(EAX));
  /* 12cbcc2d call dword ptr [0x12ce3308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3308))), 0x12cbcc33u);
  /* 12cbcc33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbcc35 je 0x12cbcc5a */
  if (C.zf) goto L_12cbcc5a;
  /* 12cbcc37 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cbcc3a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbcc40 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12cbcc43 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbcc46 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 12cbcc4c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbcc4e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbcc54 jge 0x12cbcc58 */
  if ((C.sf==C.of)) goto L_12cbcc58;
  /* 12cbcc56 jmp 0x12cbcc6a */
  goto L_12cbcc6a;
L_12cbcc58:;
  /* 12cbcc58 jmp 0x12cbcc65 */
  goto L_12cbcc65;
L_12cbcc5a:;
  /* 12cbcc5a call dword ptr [0x12ce3348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3348))), 0x12cbcc60u);
  /* 12cbcc60 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cbcc63 jmp 0x12cbcc6a */
  goto L_12cbcc6a;
L_12cbcc65:;
  /* 12cbcc65 jmp 0x12cbcb6d */
  goto L_12cbcb6d;
L_12cbcc6a:;
  /* 12cbcc6a jmp 0x12cbccbc */
  goto L_12cbccbc;
L_12cbcc6c:;
  /* 12cbcc6c push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbcc6e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 12cbcc74 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbcc75 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cbcc78 push edx */
  push32((uint32_t)(EDX));
  /* 12cbcc79 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbcc7c push eax */
  push32((uint32_t)(EAX));
  /* 12cbcc7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbcc80 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12cbcc83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbcc86 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12cbcc89 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cbcc8c mov eax, dword ptr [ecx*4 + 0x12ce1f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12ce1f00)));
  /* 12cbcc93 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 12cbcc96 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbcc97 call dword ptr [0x12ce3308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3308))), 0x12cbcc9du);
  /* 12cbcc9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbcc9f je 0x12cbccb3 */
  if (C.zf) goto L_12cbccb3;
  /* 12cbcca1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12cbcca8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 12cbccae mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12cbccb1 jmp 0x12cbccbc */
  goto L_12cbccbc;
L_12cbccb3:;
  /* 12cbccb3 call dword ptr [0x12ce3348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3348))), 0x12cbccb9u);
  /* 12cbccb9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12cbccbc:;
  /* 12cbccbc cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbccc0 jne 0x12cbcd46 */
  if (!C.zf) goto L_12cbcd46;
  /* 12cbccc6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbccca je 0x12cbccfa */
  if (C.zf) goto L_12cbccfa;
  /* 12cbcccc cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbccd0 jne 0x12cbcce9 */
  if (!C.zf) goto L_12cbcce9;
  /* 12cbccd2 call 0x12cbc080 */
  push32(0x12cbccd7u); f_12cbc080();
  /* 12cbccd7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12cbccdd call 0x12cbc090 */
  push32(0x12cbcce2u); f_12cbc090();
  /* 12cbcce2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbcce5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12cbcce7 jmp 0x12cbccf5 */
  goto L_12cbccf5;
L_12cbcce9:;
  /* 12cbcce9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbccec push edx */
  push32((uint32_t)(EDX));
  /* 12cbcced call 0x12cbbfe0 */
  push32(0x12cbccf2u); f_12cbbfe0();
  /* 12cbccf2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cbccf5:;
  /* 12cbccf5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cbccf8 jmp 0x12cbcd4f */
  goto L_12cbcd4f;
L_12cbccfa:;
  /* 12cbccfa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbccfd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12cbcd00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbcd03 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12cbcd06 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cbcd09 mov edx, dword ptr [eax*4 + 0x12ce1f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12ce1f00)));
  /* 12cbcd10 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12cbcd15 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12cbcd18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbcd1a je 0x12cbcd2b */
  if (C.zf) goto L_12cbcd2b;
  /* 12cbcd1c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbcd1f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cbcd22 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbcd25 jne 0x12cbcd2b */
  if (!C.zf) goto L_12cbcd2b;
  /* 12cbcd27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbcd29 jmp 0x12cbcd4f */
  goto L_12cbcd4f;
L_12cbcd2b:;
  /* 12cbcd2b call 0x12cbc080 */
  push32(0x12cbcd30u); f_12cbc080();
  /* 12cbcd30 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 12cbcd36 call 0x12cbc090 */
  push32(0x12cbcd3bu); f_12cbc090();
  /* 12cbcd3b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12cbcd41 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cbcd44 jmp 0x12cbcd4f */
  goto L_12cbcd4f;
L_12cbcd46:;
  /* 12cbcd46 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cbcd49 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12cbcd4f:;
  /* 12cbcd4f mov esp, ebp */
  ESP = (EBP);
  /* 12cbcd51 pop ebp */
  EBP = (pop32());
  /* 12cbcd52 ret  */
  ESPCHK(0x12cbcae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd60 @ 0x12cbcd60 (199 bytes, 68 insns) */
void f_12cbcd60(void) {
  FTRACE(0x12cbcd60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbcd60 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbcd61 mov ebp, esp */
  EBP = (ESP);
  /* 12cbcd63 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbcd64 push ebx */
  push32((uint32_t)(EBX));
  /* 12cbcd65 push esi */
  push32((uint32_t)(ESI));
  /* 12cbcd66 push edi */
  push32((uint32_t)(EDI));
L_12cbcd67:;
  /* 12cbcd67 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbcd6b jne 0x12cbcd8b */
  if (!C.zf) goto L_12cbcd8b;
  /* 12cbcd6d push 0x12cdc2f4 */
  push32((uint32_t)(0x12cdc2f4u));
  /* 12cbcd72 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbcd74 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 12cbcd76 push 0x12cdc3c0 */
  push32((uint32_t)(0x12cdc3c0u));
  /* 12cbcd7b push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbcd7d call 0x12cb3270 */
  push32(0x12cbcd82u); f_12cb3270();
  /* 12cbcd82 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbcd85 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbcd88 jne 0x12cbcd8b */
  if (!C.zf) goto L_12cbcd8b;
  /* 12cbcd8a int3  */
  x86_unimpl("int3 @ 0x12cbcd8a");
L_12cbcd8b:;
  /* 12cbcd8b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbcd8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbcd8f jne 0x12cbcd67 */
  if (!C.zf) goto L_12cbcd67;
  /* 12cbcd91 mov ecx, dword ptr [0x12ce0734] */
  ECX = (r32((uint32_t)(0x12ce0734)));
  /* 12cbcd97 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbcd9a mov dword ptr [0x12ce0734], ecx */
  w32((uint32_t)(0x12ce0734), (ECX));
  /* 12cbcda0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbcda3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cbcda6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 12cbcda8 push 0x12cdc3c0 */
  push32((uint32_t)(0x12cdc3c0u));
  /* 12cbcdad push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbcdaf push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12cbcdb4 call 0x12cb41b0 */
  push32(0x12cbcdb9u); f_12cb41b0();
  /* 12cbcdb9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbcdbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbcdbf mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12cbcdc2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbcdc5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbcdc9 je 0x12cbcde6 */
  if (C.zf) goto L_12cbcde6;
  /* 12cbcdcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbcdce mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12cbcdd1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12cbcdd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbcdd7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12cbcdda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbcddd mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 12cbcde4 jmp 0x12cbce0b */
  goto L_12cbce0b;
L_12cbcde6:;
  /* 12cbcde6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbcde9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12cbcdec or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12cbcdef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbcdf2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12cbcdf5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbcdf8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbcdfb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbcdfe mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12cbce01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbce04 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_12cbce0b:;
  /* 12cbce0b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbce0e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbce11 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12cbce14 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12cbce16 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbce19 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12cbce20 pop edi */
  EDI = (pop32());
  /* 12cbce21 pop esi */
  ESI = (pop32());
  /* 12cbce22 pop ebx */
  EBX = (pop32());
  /* 12cbce23 mov esp, ebp */
  ESP = (EBP);
  /* 12cbce25 pop ebp */
  EBP = (pop32());
  /* 12cbce26 ret  */
  ESPCHK(0x12cbcd60u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x12cbce30 (50 bytes, 17 insns) */
void f_12cbce30(void) {
  FTRACE(0x12cbce30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbce30 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbce31 mov ebp, esp */
  EBP = (ESP);
  /* 12cbce33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbce36 cmp eax, dword ptr [0x12ce203c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ce203c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbce3c jb 0x12cbce42 */
  if (C.cf) goto L_12cbce42;
  /* 12cbce3e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbce40 jmp 0x12cbce60 */
  goto L_12cbce60;
L_12cbce42:;
  /* 12cbce42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbce45 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12cbce48 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbce4b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12cbce4e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cbce51 mov eax, dword ptr [ecx*4 + 0x12ce1f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12ce1f00)));
  /* 12cbce58 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12cbce5d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_12cbce60:;
  /* 12cbce60 pop ebp */
  EBP = (pop32());
  /* 12cbce61 ret  */
  ESPCHK(0x12cbce30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce70 @ 0x12cbce70 (300 bytes, 80 insns) */
void f_12cbce70(void) {
  FTRACE(0x12cbce70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbce70 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbce71 mov ebp, esp */
  EBP = (ESP);
  /* 12cbce73 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbce74 cmp dword ptr [0x12ce1c00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce1c00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbce7b jne 0x12cbce89 */
  if (!C.zf) goto L_12cbce89;
  /* 12cbce7d mov dword ptr [0x12ce1c00], 0x200 */
  w32((uint32_t)(0x12ce1c00), (0x200u));
  /* 12cbce87 jmp 0x12cbce9c */
  goto L_12cbce9c;
L_12cbce89:;
  /* 12cbce89 cmp dword ptr [0x12ce1c00], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x12ce1c00))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbce90 jge 0x12cbce9c */
  if ((C.sf==C.of)) goto L_12cbce9c;
  /* 12cbce92 mov dword ptr [0x12ce1c00], 0x14 */
  w32((uint32_t)(0x12ce1c00), (0x14u));
L_12cbce9c:;
  /* 12cbce9c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 12cbcea1 push 0x12cdc3cc */
  push32((uint32_t)(0x12cdc3ccu));
  /* 12cbcea6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbcea8 push 4 */
  push32((uint32_t)(0x4u));
  /* 12cbceaa mov eax, dword ptr [0x12ce1c00] */
  EAX = (r32((uint32_t)(0x12ce1c00)));
  /* 12cbceaf push eax */
  push32((uint32_t)(EAX));
  /* 12cbceb0 call 0x12cb45c0 */
  push32(0x12cbceb5u); f_12cb45c0();
  /* 12cbceb5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbceb8 mov dword ptr [0x12ce08a8], eax */
  w32((uint32_t)(0x12ce08a8), (EAX));
  /* 12cbcebd cmp dword ptr [0x12ce08a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce08a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbcec4 jne 0x12cbcf05 */
  if (!C.zf) goto L_12cbcf05;
  /* 12cbcec6 mov dword ptr [0x12ce1c00], 0x14 */
  w32((uint32_t)(0x12ce1c00), (0x14u));
  /* 12cbced0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 12cbced5 push 0x12cdc3cc */
  push32((uint32_t)(0x12cdc3ccu));
  /* 12cbceda push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbcedc push 4 */
  push32((uint32_t)(0x4u));
  /* 12cbcede mov ecx, dword ptr [0x12ce1c00] */
  ECX = (r32((uint32_t)(0x12ce1c00)));
  /* 12cbcee4 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbcee5 call 0x12cb45c0 */
  push32(0x12cbceeau); f_12cb45c0();
  /* 12cbceea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbceed mov dword ptr [0x12ce08a8], eax */
  w32((uint32_t)(0x12ce08a8), (EAX));
  /* 12cbcef2 cmp dword ptr [0x12ce08a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce08a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbcef9 jne 0x12cbcf05 */
  if (!C.zf) goto L_12cbcf05;
  /* 12cbcefb push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12cbcefd call 0x12cb3120 */
  push32(0x12cbcf02u); f_12cb3120();
  /* 12cbcf02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cbcf05:;
  /* 12cbcf05 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cbcf0c jmp 0x12cbcf17 */
  goto L_12cbcf17;
L_12cbcf0e:;
  /* 12cbcf0e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbcf11 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbcf14 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12cbcf17:;
  /* 12cbcf17 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbcf1b jge 0x12cbcf36 */
  if ((C.sf==C.of)) goto L_12cbcf36;
  /* 12cbcf1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbcf20 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12cbcf23 add eax, 0x12cdf120 */
  { uint32_t _a=(EAX),_b=(0x12cdf120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbcf28 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbcf2b mov edx, dword ptr [0x12ce08a8] */
  EDX = (r32((uint32_t)(0x12ce08a8)));
  /* 12cbcf31 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12cbcf34 jmp 0x12cbcf0e */
  goto L_12cbcf0e;
L_12cbcf36:;
  /* 12cbcf36 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cbcf3d jmp 0x12cbcf48 */
  goto L_12cbcf48;
L_12cbcf3f:;
  /* 12cbcf3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbcf42 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbcf45 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cbcf48:;
  /* 12cbcf48 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbcf4c jge 0x12cbcf98 */
  if ((C.sf==C.of)) goto L_12cbcf98;
  /* 12cbcf4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbcf51 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12cbcf54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbcf57 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12cbcf5a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cbcf5d mov eax, dword ptr [ecx*4 + 0x12ce1f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12ce1f00)));
  /* 12cbcf64 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbcf68 je 0x12cbcf86 */
  if (C.zf) goto L_12cbcf86;
  /* 12cbcf6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbcf6d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12cbcf70 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbcf73 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12cbcf76 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cbcf79 mov eax, dword ptr [ecx*4 + 0x12ce1f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12ce1f00)));
  /* 12cbcf80 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbcf84 jne 0x12cbcf96 */
  if (!C.zf) goto L_12cbcf96;
L_12cbcf86:;
  /* 12cbcf86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbcf89 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12cbcf8c mov dword ptr [ecx + 0x12cdf130], 0xffffffff */
  w32((uint32_t)(ECX + 0x12cdf130), (0xffffffffu));
L_12cbcf96:;
  /* 12cbcf96 jmp 0x12cbcf3f */
  goto L_12cbcf3f;
L_12cbcf98:;
  /* 12cbcf98 mov esp, ebp */
  ESP = (EBP);
  /* 12cbcf9a pop ebp */
  EBP = (pop32());
  /* 12cbcf9b ret  */
  ESPCHK(0x12cbce70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cfa0 @ 0x12cbcfa0 (26 bytes, 9 insns) */
void f_12cbcfa0(void) {
  FTRACE(0x12cbcfa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbcfa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbcfa1 mov ebp, esp */
  EBP = (ESP);
  /* 12cbcfa3 call 0x12cbdba0 */
  push32(0x12cbcfa8u); f_12cbdba0();
  /* 12cbcfa8 movsx eax, byte ptr [0x12ce054c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x12ce054c))));
  /* 12cbcfaf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbcfb1 je 0x12cbcfb8 */
  if (C.zf) goto L_12cbcfb8;
  /* 12cbcfb3 call 0x12cbd960 */
  push32(0x12cbcfb8u); f_12cbd960();
L_12cbcfb8:;
  /* 12cbcfb8 pop ebp */
  EBP = (pop32());
  /* 12cbcfb9 ret  */
  ESPCHK(0x12cbcfa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cfc0 @ 0x12cbcfc0 (61 bytes, 20 insns) */
void f_12cbcfc0(void) {
  FTRACE(0x12cbcfc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbcfc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbcfc1 mov ebp, esp */
  EBP = (ESP);
  /* 12cbcfc3 cmp dword ptr [ebp + 8], 0x12cdf120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12cdf120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbcfca jb 0x12cbcfee */
  if (C.cf) goto L_12cbcfee;
  /* 12cbcfcc cmp dword ptr [ebp + 8], 0x12cdf380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12cdf380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbcfd3 ja 0x12cbcfee */
  if ((!C.cf&&!C.zf)) goto L_12cbcfee;
  /* 12cbcfd5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbcfd8 sub eax, 0x12cdf120 */
  { uint32_t _a=(EAX),_b=(0x12cdf120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbcfdd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12cbcfe0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbcfe3 push eax */
  push32((uint32_t)(EAX));
  /* 12cbcfe4 call 0x12cb7bb0 */
  push32(0x12cbcfe9u); f_12cb7bb0();
  /* 12cbcfe9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbcfec jmp 0x12cbcffb */
  goto L_12cbcffb;
L_12cbcfee:;
  /* 12cbcfee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbcff1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbcff4 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbcff5 call dword ptr [0x12ce3394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3394))), 0x12cbcffbu);
L_12cbcffb:;
  /* 12cbcffb pop ebp */
  EBP = (pop32());
  /* 12cbcffc ret  */
  ESPCHK(0x12cbcfc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d000 @ 0x12cbd000 (41 bytes, 16 insns) */
void f_12cbd000(void) {
  FTRACE(0x12cbd000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbd000 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbd001 mov ebp, esp */
  EBP = (ESP);
  /* 12cbd003 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd007 jge 0x12cbd01a */
  if ((C.sf==C.of)) goto L_12cbd01a;
  /* 12cbd009 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbd00c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbd00f push eax */
  push32((uint32_t)(EAX));
  /* 12cbd010 call 0x12cb7bb0 */
  push32(0x12cbd015u); f_12cb7bb0();
  /* 12cbd015 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbd018 jmp 0x12cbd027 */
  goto L_12cbd027;
L_12cbd01a:;
  /* 12cbd01a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbd01d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbd020 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbd021 call dword ptr [0x12ce3394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3394))), 0x12cbd027u);
L_12cbd027:;
  /* 12cbd027 pop ebp */
  EBP = (pop32());
  /* 12cbd028 ret  */
  ESPCHK(0x12cbd000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d030 @ 0x12cbd030 (61 bytes, 20 insns) */
void f_12cbd030(void) {
  FTRACE(0x12cbd030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbd030 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbd031 mov ebp, esp */
  EBP = (ESP);
  /* 12cbd033 cmp dword ptr [ebp + 8], 0x12cdf120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12cdf120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd03a jb 0x12cbd05e */
  if (C.cf) goto L_12cbd05e;
  /* 12cbd03c cmp dword ptr [ebp + 8], 0x12cdf380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12cdf380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd043 ja 0x12cbd05e */
  if ((!C.cf&&!C.zf)) goto L_12cbd05e;
  /* 12cbd045 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbd048 sub eax, 0x12cdf120 */
  { uint32_t _a=(EAX),_b=(0x12cdf120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbd04d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12cbd050 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbd053 push eax */
  push32((uint32_t)(EAX));
  /* 12cbd054 call 0x12cb7c50 */
  push32(0x12cbd059u); f_12cb7c50();
  /* 12cbd059 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbd05c jmp 0x12cbd06b */
  goto L_12cbd06b;
L_12cbd05e:;
  /* 12cbd05e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbd061 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbd064 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbd065 call dword ptr [0x12ce3398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3398))), 0x12cbd06bu);
L_12cbd06b:;
  /* 12cbd06b pop ebp */
  EBP = (pop32());
  /* 12cbd06c ret  */
  ESPCHK(0x12cbd030u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d070 @ 0x12cbd070 (41 bytes, 16 insns) */
void f_12cbd070(void) {
  FTRACE(0x12cbd070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbd070 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbd071 mov ebp, esp */
  EBP = (ESP);
  /* 12cbd073 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd077 jge 0x12cbd08a */
  if ((C.sf==C.of)) goto L_12cbd08a;
  /* 12cbd079 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbd07c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbd07f push eax */
  push32((uint32_t)(EAX));
  /* 12cbd080 call 0x12cb7c50 */
  push32(0x12cbd085u); f_12cb7c50();
  /* 12cbd085 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbd088 jmp 0x12cbd097 */
  goto L_12cbd097;
L_12cbd08a:;
  /* 12cbd08a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbd08d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbd090 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbd091 call dword ptr [0x12ce3398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3398))), 0x12cbd097u);
L_12cbd097:;
  /* 12cbd097 pop ebp */
  EBP = (pop32());
  /* 12cbd098 ret  */
  ESPCHK(0x12cbd070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d0a0 @ 0x12cbd0a0 (119 bytes, 34 insns) */
void f_12cbd0a0(void) {
  FTRACE(0x12cbd0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbd0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbd0a1 mov ebp, esp */
  EBP = (ESP);
  /* 12cbd0a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbd0a6 push 0x12ce08a4 */
  push32((uint32_t)(0x12ce08a4u));
  /* 12cbd0ab call dword ptr [0x12ce331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce331c))), 0x12cbd0b1u);
  /* 12cbd0b1 cmp dword ptr [0x12ce0894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd0b8 je 0x12cbd0d8 */
  if (C.zf) goto L_12cbd0d8;
  /* 12cbd0ba push 0x12ce08a4 */
  push32((uint32_t)(0x12ce08a4u));
  /* 12cbd0bf call dword ptr [0x12ce330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce330c))), 0x12cbd0c5u);
  /* 12cbd0c5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12cbd0c7 call 0x12cb7bb0 */
  push32(0x12cbd0ccu); f_12cb7bb0();
  /* 12cbd0cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbd0cf mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12cbd0d6 jmp 0x12cbd0df */
  goto L_12cbd0df;
L_12cbd0d8:;
  /* 12cbd0d8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12cbd0df:;
  /* 12cbd0df mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 12cbd0e3 push eax */
  push32((uint32_t)(EAX));
  /* 12cbd0e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbd0e7 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbd0e8 call 0x12cbd120 */
  push32(0x12cbd0edu); f_12cbd120();
  /* 12cbd0ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbd0f0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cbd0f3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd0f7 je 0x12cbd105 */
  if (C.zf) goto L_12cbd105;
  /* 12cbd0f9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12cbd0fb call 0x12cb7c50 */
  push32(0x12cbd100u); f_12cb7c50();
  /* 12cbd100 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbd103 jmp 0x12cbd110 */
  goto L_12cbd110;
L_12cbd105:;
  /* 12cbd105 push 0x12ce08a4 */
  push32((uint32_t)(0x12ce08a4u));
  /* 12cbd10a call dword ptr [0x12ce330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce330c))), 0x12cbd110u);
L_12cbd110:;
  /* 12cbd110 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbd113 mov esp, ebp */
  ESP = (EBP);
  /* 12cbd115 pop ebp */
  EBP = (pop32());
  /* 12cbd116 ret  */
  ESPCHK(0x12cbd0a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d120 @ 0x12cbd120 (160 bytes, 50 insns) */
void f_12cbd120(void) {
  FTRACE(0x12cbd120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbd120 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbd121 mov ebp, esp */
  EBP = (ESP);
  /* 12cbd123 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbd126 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd12a jne 0x12cbd133 */
  if (!C.zf) goto L_12cbd133;
  /* 12cbd12c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbd12e jmp 0x12cbd1bc */
  goto L_12cbd1bc;
L_12cbd133:;
  /* 12cbd133 cmp dword ptr [0x12ce0718], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0718))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd13a jne 0x12cbd16a */
  if (!C.zf) goto L_12cbd16a;
  /* 12cbd13c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbd13f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cbd144 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd149 jle 0x12cbd15b */
  if ((C.zf||C.sf!=C.of)) goto L_12cbd15b;
  /* 12cbd14b call 0x12cbc080 */
  push32(0x12cbd150u); f_12cbc080();
  /* 12cbd150 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 12cbd156 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cbd159 jmp 0x12cbd1bc */
  goto L_12cbd1bc;
L_12cbd15b:;
  /* 12cbd15b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbd15e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 12cbd161 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 12cbd163 mov eax, 1 */
  EAX = (0x1u);
  /* 12cbd168 jmp 0x12cbd1bc */
  goto L_12cbd1bc;
L_12cbd16a:;
  /* 12cbd16a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12cbd171 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12cbd174 push eax */
  push32((uint32_t)(EAX));
  /* 12cbd175 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbd177 mov ecx, dword ptr [0x12cdeea4] */
  ECX = (r32((uint32_t)(0x12cdeea4)));
  /* 12cbd17d push ecx */
  push32((uint32_t)(ECX));
  /* 12cbd17e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbd181 push edx */
  push32((uint32_t)(EDX));
  /* 12cbd182 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbd184 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 12cbd187 push eax */
  push32((uint32_t)(EAX));
  /* 12cbd188 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12cbd18d mov ecx, dword ptr [0x12ce0728] */
  ECX = (r32((uint32_t)(0x12ce0728)));
  /* 12cbd193 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbd194 call dword ptr [0x12ce3370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3370))), 0x12cbd19au);
  /* 12cbd19a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cbd19d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd1a1 je 0x12cbd1a9 */
  if (C.zf) goto L_12cbd1a9;
  /* 12cbd1a3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd1a7 je 0x12cbd1b9 */
  if (C.zf) goto L_12cbd1b9;
L_12cbd1a9:;
  /* 12cbd1a9 call 0x12cbc080 */
  push32(0x12cbd1aeu); f_12cbc080();
  /* 12cbd1ae mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 12cbd1b4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cbd1b7 jmp 0x12cbd1bc */
  goto L_12cbd1bc;
L_12cbd1b9:;
  /* 12cbd1b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12cbd1bc:;
  /* 12cbd1bc mov esp, ebp */
  ESP = (EBP);
  /* 12cbd1be pop ebp */
  EBP = (pop32());
  /* 12cbd1bf ret  */
  ESPCHK(0x12cbd120u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x12cbd1c0 (32 bytes, 18 insns) */
void f_12cbd1c0(void) {
  FTRACE(0x12cbd1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbd1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbd1c1 mov ebp, esp */
  EBP = (ESP);
  /* 12cbd1c3 push ebx */
  push32((uint32_t)(EBX));
  /* 12cbd1c4 push esi */
  push32((uint32_t)(ESI));
  /* 12cbd1c5 push edi */
  push32((uint32_t)(EDI));
  /* 12cbd1c6 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbd1c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbd1c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbd1cb push 0x12cbd1d8 */
  push32((uint32_t)(0x12cbd1d8u));
  /* 12cbd1d0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12cbd1d3 call 0x12cc490c */
  push32(0x12cbd1d8u); f_12cc490c();
  /* 12cbd1d8 pop ebp */
  EBP = (pop32());
  /* 12cbd1d9 pop edi */
  EDI = (pop32());
  /* 12cbd1da pop esi */
  ESI = (pop32());
  /* 12cbd1db pop ebx */
  EBX = (pop32());
  /* 12cbd1dc mov esp, ebp */
  ESP = (EBP);
  /* 12cbd1de pop ebp */
  EBP = (pop32());
  /* 12cbd1df ret  */
  ESPCHK(0x12cbd1c0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x12cbd202 (104 bytes, 33 insns) */
void f_12cbd202(void) {
  FTRACE(0x12cbd202u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbd202 push ebx */
  push32((uint32_t)(EBX));
  /* 12cbd203 push esi */
  push32((uint32_t)(ESI));
  /* 12cbd204 push edi */
  push32((uint32_t)(EDI));
  /* 12cbd205 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12cbd209 push eax */
  push32((uint32_t)(EAX));
  /* 12cbd20a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 12cbd20c push 0x12cbd1e0 */
  push32((uint32_t)(0x12cbd1e0u));
  /* 12cbd211 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 12cbd218 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_12cbd21f:;
  /* 12cbd21f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 12cbd223 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 12cbd226 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 12cbd229 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd22c je 0x12cbd25c */
  if (C.zf) goto L_12cbd25c;
  /* 12cbd22e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd232 je 0x12cbd25c */
  if (C.zf) goto L_12cbd25c;
  /* 12cbd234 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 12cbd237 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 12cbd23a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 12cbd23e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 12cbd241 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd246 jne 0x12cbd25a */
  if (!C.zf) goto L_12cbd25a;
  /* 12cbd248 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 12cbd24d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 12cbd251 call 0x12cbd296 */
  push32(0x12cbd256u); f_12cbd296();
  /* 12cbd256 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x12cbd25au);
L_12cbd25a:;
  /* 12cbd25a jmp 0x12cbd21f */
  goto L_12cbd21f;
L_12cbd25c:;
  /* 12cbd25c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 12cbd263 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbd266 pop edi */
  EDI = (pop32());
  /* 12cbd267 pop esi */
  ESI = (pop32());
  /* 12cbd268 pop ebx */
  EBX = (pop32());
  /* 12cbd269 ret  */
  ESPCHK(0x12cbd202u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d296 @ 0x12cbd296 (24 bytes, 10 insns) */
void f_12cbd296(void) {
  FTRACE(0x12cbd296u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbd296 push ebx */
  push32((uint32_t)(EBX));
  /* 12cbd297 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbd298 mov ebx, 0x12cdf3b8 */
  EBX = (0x12cdf3b8u);
  /* 12cbd29d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbd2a0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 12cbd2a3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 12cbd2a6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 12cbd2a9 pop ecx */
  ECX = (pop32());
  /* 12cbd2aa pop ebx */
  EBX = (pop32());
  /* 12cbd2ab ret 4 */
  ESPCHK(0x12cbd296u, _esp0);
  ESP += 8; return;
}

/* FUN_1000d375 @ 0x12cbd375 (27 bytes, 11 insns) */
void f_12cbd375(void) {
  FTRACE(0x12cbd375u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbd375 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbd376 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12cbd37a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 12cbd37c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12cbd37f push eax */
  push32((uint32_t)(EAX));
  /* 12cbd380 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 12cbd383 push eax */
  push32((uint32_t)(EAX));
  /* 12cbd384 call 0x12cbd202 */
  push32(0x12cbd389u); f_12cbd202();
  /* 12cbd389 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbd38c pop ebp */
  EBP = (pop32());
  /* 12cbd38d ret 4 */
  ESPCHK(0x12cbd375u, _esp0);
  ESP += 8; return;
}

/* FUN_1000d390 @ 0x12cbd390 (482 bytes, 138 insns) */
void f_12cbd390(void) {
  FTRACE(0x12cbd390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbd390 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbd391 mov ebp, esp */
  EBP = (ESP);
  /* 12cbd393 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbd396 push esi */
  push32((uint32_t)(ESI));
  /* 12cbd397 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 12cbd39e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12cbd3a0 call 0x12cb7bb0 */
  push32(0x12cbd3a5u); f_12cb7bb0();
  /* 12cbd3a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbd3a8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12cbd3af jmp 0x12cbd3ba */
  goto L_12cbd3ba;
L_12cbd3b1:;
  /* 12cbd3b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbd3b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbd3b7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12cbd3ba:;
  /* 12cbd3ba cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd3be jge 0x12cbd560 */
  if ((C.sf==C.of)) goto L_12cbd560;
  /* 12cbd3c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbd3c7 cmp dword ptr [ecx*4 + 0x12ce1f00], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12ce1f00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd3cf je 0x12cbd4c6 */
  if (C.zf) goto L_12cbd4c6;
  /* 12cbd3d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbd3d8 mov eax, dword ptr [edx*4 + 0x12ce1f00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12ce1f00)));
  /* 12cbd3df mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cbd3e2 jmp 0x12cbd3ed */
  goto L_12cbd3ed;
L_12cbd3e4:;
  /* 12cbd3e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbd3e7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbd3ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12cbd3ed:;
  /* 12cbd3ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbd3f0 mov eax, dword ptr [edx*4 + 0x12ce1f00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12ce1f00)));
  /* 12cbd3f7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbd3fc cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd3ff jae 0x12cbd4b6 */
  if (!C.cf) goto L_12cbd4b6;
  /* 12cbd405 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbd408 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12cbd40c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12cbd40f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cbd411 jne 0x12cbd4b1 */
  if (!C.zf) goto L_12cbd4b1;
  /* 12cbd417 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbd41a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd41e jne 0x12cbd459 */
  if (!C.zf) goto L_12cbd459;
  /* 12cbd420 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12cbd422 call 0x12cb7bb0 */
  push32(0x12cbd427u); f_12cb7bb0();
  /* 12cbd427 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbd42a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbd42d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd431 jne 0x12cbd44f */
  if (!C.zf) goto L_12cbd44f;
  /* 12cbd433 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbd436 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbd439 push edx */
  push32((uint32_t)(EDX));
  /* 12cbd43a call dword ptr [0x12ce3390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3390))), 0x12cbd440u);
  /* 12cbd440 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbd443 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12cbd446 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbd449 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbd44c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_12cbd44f:;
  /* 12cbd44f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12cbd451 call 0x12cb7c50 */
  push32(0x12cbd456u); f_12cb7c50();
  /* 12cbd456 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cbd459:;
  /* 12cbd459 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbd45c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbd45f push eax */
  push32((uint32_t)(EAX));
  /* 12cbd460 call dword ptr [0x12ce3394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3394))), 0x12cbd466u);
  /* 12cbd466 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbd469 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12cbd46d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12cbd470 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cbd472 je 0x12cbd486 */
  if (C.zf) goto L_12cbd486;
  /* 12cbd474 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbd477 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbd47a push eax */
  push32((uint32_t)(EAX));
  /* 12cbd47b call dword ptr [0x12ce3398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3398))), 0x12cbd481u);
  /* 12cbd481 jmp 0x12cbd3e4 */
  goto L_12cbd3e4;
L_12cbd486:;
  /* 12cbd486 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbd489 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12cbd48f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbd492 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12cbd495 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbd498 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbd49b sub eax, dword ptr [edx*4 + 0x12ce1f00] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x12ce1f00))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbd4a2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12cbd4a3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 12cbd4a8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12cbd4aa add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbd4ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cbd4af jmp 0x12cbd4b6 */
  goto L_12cbd4b6;
L_12cbd4b1:;
  /* 12cbd4b1 jmp 0x12cbd3e4 */
  goto L_12cbd3e4;
L_12cbd4b6:;
  /* 12cbd4b6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd4ba je 0x12cbd4c1 */
  if (C.zf) goto L_12cbd4c1;
  /* 12cbd4bc jmp 0x12cbd560 */
  goto L_12cbd560;
L_12cbd4c1:;
  /* 12cbd4c1 jmp 0x12cbd55b */
  goto L_12cbd55b;
L_12cbd4c6:;
  /* 12cbd4c6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12cbd4c8 push 0x12cdc3d4 */
  push32((uint32_t)(0x12cdc3d4u));
  /* 12cbd4cd push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbd4cf push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12cbd4d4 call 0x12cb41b0 */
  push32(0x12cbd4d9u); f_12cb41b0();
  /* 12cbd4d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbd4dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cbd4df cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd4e3 je 0x12cbd559 */
  if (C.zf) goto L_12cbd559;
  /* 12cbd4e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbd4e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbd4eb mov dword ptr [eax*4 + 0x12ce1f00], ecx */
  w32((uint32_t)(EAX*4 + 0x12ce1f00), (ECX));
  /* 12cbd4f2 mov edx, dword ptr [0x12ce203c] */
  EDX = (r32((uint32_t)(0x12ce203c)));
  /* 12cbd4f8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbd4fb mov dword ptr [0x12ce203c], edx */
  w32((uint32_t)(0x12ce203c), (EDX));
  /* 12cbd501 jmp 0x12cbd50c */
  goto L_12cbd50c;
L_12cbd503:;
  /* 12cbd503 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbd506 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbd509 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cbd50c:;
  /* 12cbd50c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbd50f mov edx, dword ptr [ecx*4 + 0x12ce1f00] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12ce1f00)));
  /* 12cbd516 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbd51c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd51f jae 0x12cbd544 */
  if (!C.cf) goto L_12cbd544;
  /* 12cbd521 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbd524 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12cbd528 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbd52b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12cbd531 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbd534 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12cbd538 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbd53b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12cbd542 jmp 0x12cbd503 */
  goto L_12cbd503;
L_12cbd544:;
  /* 12cbd544 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbd547 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12cbd54a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cbd54d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbd550 push edx */
  push32((uint32_t)(EDX));
  /* 12cbd551 call 0x12cbd8a0 */
  push32(0x12cbd556u); f_12cbd8a0();
  /* 12cbd556 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cbd559:;
  /* 12cbd559 jmp 0x12cbd560 */
  goto L_12cbd560;
L_12cbd55b:;
  /* 12cbd55b jmp 0x12cbd3b1 */
  goto L_12cbd3b1;
L_12cbd560:;
  /* 12cbd560 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12cbd562 call 0x12cb7c50 */
  push32(0x12cbd567u); f_12cb7c50();
  /* 12cbd567 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbd56a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbd56d pop esi */
  ESI = (pop32());
  /* 12cbd56e mov esp, ebp */
  ESP = (EBP);
  /* 12cbd570 pop ebp */
  EBP = (pop32());
  /* 12cbd571 ret  */
  ESPCHK(0x12cbd390u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x12cbd580 (183 bytes, 57 insns) */
void f_12cbd580(void) {
  FTRACE(0x12cbd580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbd580 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbd581 mov ebp, esp */
  EBP = (ESP);
  /* 12cbd583 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbd584 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbd587 cmp eax, dword ptr [0x12ce203c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ce203c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd58d jae 0x12cbd61a */
  if (!C.cf) goto L_12cbd61a;
  /* 12cbd593 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbd596 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12cbd599 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbd59c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12cbd59f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cbd5a2 mov eax, dword ptr [ecx*4 + 0x12ce1f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12ce1f00)));
  /* 12cbd5a9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd5ad jne 0x12cbd61a */
  if (!C.zf) goto L_12cbd61a;
  /* 12cbd5af cmp dword ptr [0x12ce050c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ce050c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd5b6 jne 0x12cbd5fa */
  if (!C.zf) goto L_12cbd5fa;
  /* 12cbd5b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbd5bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cbd5be cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd5c2 je 0x12cbd5d2 */
  if (C.zf) goto L_12cbd5d2;
  /* 12cbd5c4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd5c8 je 0x12cbd5e0 */
  if (C.zf) goto L_12cbd5e0;
  /* 12cbd5ca cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd5ce je 0x12cbd5ee */
  if (C.zf) goto L_12cbd5ee;
  /* 12cbd5d0 jmp 0x12cbd5fa */
  goto L_12cbd5fa;
L_12cbd5d2:;
  /* 12cbd5d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbd5d5 push edx */
  push32((uint32_t)(EDX));
  /* 12cbd5d6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 12cbd5d8 call dword ptr [0x12ce32b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32b8))), 0x12cbd5deu);
  /* 12cbd5de jmp 0x12cbd5fa */
  goto L_12cbd5fa;
L_12cbd5e0:;
  /* 12cbd5e0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbd5e3 push eax */
  push32((uint32_t)(EAX));
  /* 12cbd5e4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12cbd5e6 call dword ptr [0x12ce32b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32b8))), 0x12cbd5ecu);
  /* 12cbd5ec jmp 0x12cbd5fa */
  goto L_12cbd5fa;
L_12cbd5ee:;
  /* 12cbd5ee mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbd5f1 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbd5f2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12cbd5f4 call dword ptr [0x12ce32b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32b8))), 0x12cbd5fau);
L_12cbd5fa:;
  /* 12cbd5fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbd5fd sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12cbd600 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbd603 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12cbd606 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cbd609 mov ecx, dword ptr [edx*4 + 0x12ce1f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12ce1f00)));
  /* 12cbd610 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbd613 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 12cbd616 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbd618 jmp 0x12cbd633 */
  goto L_12cbd633;
L_12cbd61a:;
  /* 12cbd61a call 0x12cbc080 */
  push32(0x12cbd61fu); f_12cbc080();
  /* 12cbd61f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12cbd625 call 0x12cbc090 */
  push32(0x12cbd62au); f_12cbc090();
  /* 12cbd62a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12cbd630 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12cbd633:;
  /* 12cbd633 mov esp, ebp */
  ESP = (EBP);
  /* 12cbd635 pop ebp */
  EBP = (pop32());
  /* 12cbd636 ret  */
  ESPCHK(0x12cbd580u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d640 @ 0x12cbd640 (216 bytes, 63 insns) */
void f_12cbd640(void) {
  FTRACE(0x12cbd640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbd640 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbd641 mov ebp, esp */
  EBP = (ESP);
  /* 12cbd643 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbd644 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbd647 cmp eax, dword ptr [0x12ce203c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ce203c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd64d jae 0x12cbd6fb */
  if (!C.cf) goto L_12cbd6fb;
  /* 12cbd653 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbd656 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12cbd659 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbd65c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12cbd65f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cbd662 mov eax, dword ptr [ecx*4 + 0x12ce1f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12ce1f00)));
  /* 12cbd669 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12cbd66e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12cbd671 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cbd673 je 0x12cbd6fb */
  if (C.zf) goto L_12cbd6fb;
  /* 12cbd679 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbd67c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12cbd67f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbd682 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12cbd685 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cbd688 mov ecx, dword ptr [edx*4 + 0x12ce1f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12ce1f00)));
  /* 12cbd68f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd693 je 0x12cbd6fb */
  if (C.zf) goto L_12cbd6fb;
  /* 12cbd695 cmp dword ptr [0x12ce050c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ce050c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd69c jne 0x12cbd6da */
  if (!C.zf) goto L_12cbd6da;
  /* 12cbd69e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbd6a1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cbd6a4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd6a8 je 0x12cbd6b8 */
  if (C.zf) goto L_12cbd6b8;
  /* 12cbd6aa cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd6ae je 0x12cbd6c4 */
  if (C.zf) goto L_12cbd6c4;
  /* 12cbd6b0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd6b4 je 0x12cbd6d0 */
  if (C.zf) goto L_12cbd6d0;
  /* 12cbd6b6 jmp 0x12cbd6da */
  goto L_12cbd6da;
L_12cbd6b8:;
  /* 12cbd6b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbd6ba push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 12cbd6bc call dword ptr [0x12ce32b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32b8))), 0x12cbd6c2u);
  /* 12cbd6c2 jmp 0x12cbd6da */
  goto L_12cbd6da;
L_12cbd6c4:;
  /* 12cbd6c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbd6c6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12cbd6c8 call dword ptr [0x12ce32b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32b8))), 0x12cbd6ceu);
  /* 12cbd6ce jmp 0x12cbd6da */
  goto L_12cbd6da;
L_12cbd6d0:;
  /* 12cbd6d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbd6d2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12cbd6d4 call dword ptr [0x12ce32b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32b8))), 0x12cbd6dau);
L_12cbd6da:;
  /* 12cbd6da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbd6dd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12cbd6e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbd6e3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12cbd6e6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cbd6e9 mov edx, dword ptr [eax*4 + 0x12ce1f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12ce1f00)));
  /* 12cbd6f0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 12cbd6f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbd6f9 jmp 0x12cbd714 */
  goto L_12cbd714;
L_12cbd6fb:;
  /* 12cbd6fb call 0x12cbc080 */
  push32(0x12cbd700u); f_12cbc080();
  /* 12cbd700 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12cbd706 call 0x12cbc090 */
  push32(0x12cbd70bu); f_12cbc090();
  /* 12cbd70b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12cbd711 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12cbd714:;
  /* 12cbd714 mov esp, ebp */
  ESP = (EBP);
  /* 12cbd716 pop ebp */
  EBP = (pop32());
  /* 12cbd717 ret  */
  ESPCHK(0x12cbd640u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d720 @ 0x12cbd720 (102 bytes, 30 insns) */
void f_12cbd720(void) {
  FTRACE(0x12cbd720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbd720 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbd721 mov ebp, esp */
  EBP = (ESP);
  /* 12cbd723 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbd726 cmp eax, dword ptr [0x12ce203c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ce203c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd72c jae 0x12cbd76b */
  if (!C.cf) goto L_12cbd76b;
  /* 12cbd72e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbd731 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12cbd734 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbd737 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12cbd73a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cbd73d mov eax, dword ptr [ecx*4 + 0x12ce1f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12ce1f00)));
  /* 12cbd744 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12cbd749 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12cbd74c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cbd74e je 0x12cbd76b */
  if (C.zf) goto L_12cbd76b;
  /* 12cbd750 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbd753 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12cbd756 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbd759 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12cbd75c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cbd75f mov ecx, dword ptr [edx*4 + 0x12ce1f00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12ce1f00)));
  /* 12cbd766 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 12cbd769 jmp 0x12cbd784 */
  goto L_12cbd784;
L_12cbd76b:;
  /* 12cbd76b call 0x12cbc080 */
  push32(0x12cbd770u); f_12cbc080();
  /* 12cbd770 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12cbd776 call 0x12cbc090 */
  push32(0x12cbd77bu); f_12cbc090();
  /* 12cbd77b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12cbd781 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12cbd784:;
  /* 12cbd784 pop ebp */
  EBP = (pop32());
  /* 12cbd785 ret  */
  ESPCHK(0x12cbd720u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d790 @ 0x12cbd790 (260 bytes, 83 insns) */
void f_12cbd790(void) {
  FTRACE(0x12cbd790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbd790 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbd791 mov ebp, esp */
  EBP = (ESP);
  /* 12cbd793 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbd796 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 12cbd79a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbd79d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12cbd7a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbd7a2 je 0x12cbd7ad */
  if (C.zf) goto L_12cbd7ad;
  /* 12cbd7a4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 12cbd7a7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12cbd7aa mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_12cbd7ad:;
  /* 12cbd7ad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbd7b0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 12cbd7b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cbd7b8 je 0x12cbd7c2 */
  if (C.zf) goto L_12cbd7c2;
  /* 12cbd7ba mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12cbd7bd or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 12cbd7bf mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_12cbd7c2:;
  /* 12cbd7c2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbd7c5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 12cbd7cb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cbd7cd je 0x12cbd7d8 */
  if (C.zf) goto L_12cbd7d8;
  /* 12cbd7cf mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12cbd7d2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 12cbd7d5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_12cbd7d8:;
  /* 12cbd7d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbd7db push eax */
  push32((uint32_t)(EAX));
  /* 12cbd7dc call dword ptr [0x12ce3350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3350))), 0x12cbd7e2u);
  /* 12cbd7e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cbd7e5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd7e9 jne 0x12cbd802 */
  if (!C.zf) goto L_12cbd802;
  /* 12cbd7eb call dword ptr [0x12ce3348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3348))), 0x12cbd7f1u);
  /* 12cbd7f1 push eax */
  push32((uint32_t)(EAX));
  /* 12cbd7f2 call 0x12cbbfe0 */
  push32(0x12cbd7f7u); f_12cbbfe0();
  /* 12cbd7f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbd7fa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cbd7fd jmp 0x12cbd890 */
  goto L_12cbd890;
L_12cbd802:;
  /* 12cbd802 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd806 jne 0x12cbd813 */
  if (!C.zf) goto L_12cbd813;
  /* 12cbd808 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 12cbd80b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12cbd80e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 12cbd811 jmp 0x12cbd822 */
  goto L_12cbd822;
L_12cbd813:;
  /* 12cbd813 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd817 jne 0x12cbd822 */
  if (!C.zf) goto L_12cbd822;
  /* 12cbd819 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12cbd81c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 12cbd81f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_12cbd822:;
  /* 12cbd822 call 0x12cbd390 */
  push32(0x12cbd827u); f_12cbd390();
  /* 12cbd827 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cbd82a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd82e jne 0x12cbd84b */
  if (!C.zf) goto L_12cbd84b;
  /* 12cbd830 call 0x12cbc080 */
  push32(0x12cbd835u); f_12cbc080();
  /* 12cbd835 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 12cbd83b call 0x12cbc090 */
  push32(0x12cbd840u); f_12cbc090();
  /* 12cbd840 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12cbd846 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cbd849 jmp 0x12cbd890 */
  goto L_12cbd890;
L_12cbd84b:;
  /* 12cbd84b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbd84e push eax */
  push32((uint32_t)(EAX));
  /* 12cbd84f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbd852 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbd853 call 0x12cbd580 */
  push32(0x12cbd858u); f_12cbd580();
  /* 12cbd858 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbd85b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12cbd85e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 12cbd861 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12cbd864 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbd867 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12cbd86a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbd86d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12cbd870 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cbd873 mov edx, dword ptr [eax*4 + 0x12ce1f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12ce1f00)));
  /* 12cbd87a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12cbd87d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 12cbd881 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbd884 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbd885 call 0x12cbd930 */
  push32(0x12cbd88au); f_12cbd930();
  /* 12cbd88a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbd88d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12cbd890:;
  /* 12cbd890 mov esp, ebp */
  ESP = (EBP);
  /* 12cbd892 pop ebp */
  EBP = (pop32());
  /* 12cbd893 ret  */
  ESPCHK(0x12cbd790u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8a0 @ 0x12cbd8a0 (134 bytes, 44 insns) */
void f_12cbd8a0(void) {
  FTRACE(0x12cbd8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbd8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbd8a1 mov ebp, esp */
  EBP = (ESP);
  /* 12cbd8a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbd8a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbd8a7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12cbd8aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbd8ad and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12cbd8b0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cbd8b3 mov edx, dword ptr [eax*4 + 0x12ce1f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12ce1f00)));
  /* 12cbd8ba add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbd8bc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12cbd8bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbd8c2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd8c6 jne 0x12cbd901 */
  if (!C.zf) goto L_12cbd901;
  /* 12cbd8c8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12cbd8ca call 0x12cb7bb0 */
  push32(0x12cbd8cfu); f_12cb7bb0();
  /* 12cbd8cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbd8d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbd8d5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd8d9 jne 0x12cbd8f7 */
  if (!C.zf) goto L_12cbd8f7;
  /* 12cbd8db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbd8de add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbd8e1 push edx */
  push32((uint32_t)(EDX));
  /* 12cbd8e2 call dword ptr [0x12ce3390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3390))), 0x12cbd8e8u);
  /* 12cbd8e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbd8eb mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12cbd8ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbd8f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbd8f4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_12cbd8f7:;
  /* 12cbd8f7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12cbd8f9 call 0x12cb7c50 */
  push32(0x12cbd8feu); f_12cb7c50();
  /* 12cbd8fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cbd901:;
  /* 12cbd901 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbd904 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12cbd907 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbd90a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12cbd90d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cbd910 mov edx, dword ptr [eax*4 + 0x12ce1f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12ce1f00)));
  /* 12cbd917 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 12cbd91b push eax */
  push32((uint32_t)(EAX));
  /* 12cbd91c call dword ptr [0x12ce3394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3394))), 0x12cbd922u);
  /* 12cbd922 mov esp, ebp */
  ESP = (EBP);
  /* 12cbd924 pop ebp */
  EBP = (pop32());
  /* 12cbd925 ret  */
  ESPCHK(0x12cbd8a0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x12cbd930 (38 bytes, 13 insns) */
void f_12cbd930(void) {
  FTRACE(0x12cbd930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbd930 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbd931 mov ebp, esp */
  EBP = (ESP);
  /* 12cbd933 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbd936 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12cbd939 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbd93c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12cbd93f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cbd942 mov edx, dword ptr [eax*4 + 0x12ce1f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12ce1f00)));
  /* 12cbd949 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 12cbd94d push eax */
  push32((uint32_t)(EAX));
  /* 12cbd94e call dword ptr [0x12ce3398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3398))), 0x12cbd954u);
  /* 12cbd954 pop ebp */
  EBP = (pop32());
  /* 12cbd955 ret  */
  ESPCHK(0x12cbd930u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d960 @ 0x12cbd960 (218 bytes, 63 insns) */
void f_12cbd960(void) {
  FTRACE(0x12cbd960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbd960 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbd961 mov ebp, esp */
  EBP = (ESP);
  /* 12cbd963 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbd966 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cbd96d push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbd96f call 0x12cb7bb0 */
  push32(0x12cbd974u); f_12cb7bb0();
  /* 12cbd974 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbd977 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 12cbd97e jmp 0x12cbd989 */
  goto L_12cbd989;
L_12cbd980:;
  /* 12cbd980 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbd983 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbd986 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12cbd989:;
  /* 12cbd989 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbd98c cmp ecx, dword ptr [0x12ce1c00] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12ce1c00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd992 jge 0x12cbda29 */
  if ((C.sf==C.of)) goto L_12cbda29;
  /* 12cbd998 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbd99b mov eax, dword ptr [0x12ce08a8] */
  EAX = (r32((uint32_t)(0x12ce08a8)));
  /* 12cbd9a0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd9a4 je 0x12cbda24 */
  if (C.zf) goto L_12cbda24;
  /* 12cbd9a6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbd9a9 mov edx, dword ptr [0x12ce08a8] */
  EDX = (r32((uint32_t)(0x12ce08a8)));
  /* 12cbd9af mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12cbd9b2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12cbd9b5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 12cbd9bb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cbd9bd je 0x12cbd9e1 */
  if (C.zf) goto L_12cbd9e1;
  /* 12cbd9bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbd9c2 mov eax, dword ptr [0x12ce08a8] */
  EAX = (r32((uint32_t)(0x12ce08a8)));
  /* 12cbd9c7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12cbd9ca push ecx */
  push32((uint32_t)(ECX));
  /* 12cbd9cb call 0x12cbe750 */
  push32(0x12cbd9d0u); f_12cbe750();
  /* 12cbd9d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbd9d3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd9d6 je 0x12cbd9e1 */
  if (C.zf) goto L_12cbd9e1;
  /* 12cbd9d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbd9db add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbd9de mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12cbd9e1:;
  /* 12cbd9e1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbd9e5 jl 0x12cbda24 */
  if ((C.sf!=C.of)) goto L_12cbda24;
  /* 12cbd9e7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbd9ea mov ecx, dword ptr [0x12ce08a8] */
  ECX = (r32((uint32_t)(0x12ce08a8)));
  /* 12cbd9f0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12cbd9f3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbd9f6 push edx */
  push32((uint32_t)(EDX));
  /* 12cbd9f7 call dword ptr [0x12ce3358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3358))), 0x12cbd9fdu);
  /* 12cbd9fd push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbd9ff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbda02 mov ecx, dword ptr [0x12ce08a8] */
  ECX = (r32((uint32_t)(0x12ce08a8)));
  /* 12cbda08 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12cbda0b push edx */
  push32((uint32_t)(EDX));
  /* 12cbda0c call 0x12cb4c40 */
  push32(0x12cbda11u); f_12cb4c40();
  /* 12cbda11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbda14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbda17 mov ecx, dword ptr [0x12ce08a8] */
  ECX = (r32((uint32_t)(0x12ce08a8)));
  /* 12cbda1d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_12cbda24:;
  /* 12cbda24 jmp 0x12cbd980 */
  goto L_12cbd980;
L_12cbda29:;
  /* 12cbda29 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbda2b call 0x12cb7c50 */
  push32(0x12cbda30u); f_12cb7c50();
  /* 12cbda30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbda33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbda36 mov esp, ebp */
  ESP = (EBP);
  /* 12cbda38 pop ebp */
  EBP = (pop32());
  /* 12cbda39 ret  */
  ESPCHK(0x12cbd960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da40 @ 0x12cbda40 (68 bytes, 26 insns) */
void f_12cbda40(void) {
  FTRACE(0x12cbda40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbda40 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbda41 mov ebp, esp */
  EBP = (ESP);
  /* 12cbda43 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbda44 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbda48 jne 0x12cbda56 */
  if (!C.zf) goto L_12cbda56;
  /* 12cbda4a push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbda4c call 0x12cbdbb0 */
  push32(0x12cbda51u); f_12cbdbb0();
  /* 12cbda51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbda54 jmp 0x12cbda80 */
  goto L_12cbda80;
L_12cbda56:;
  /* 12cbda56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbda59 push eax */
  push32((uint32_t)(EAX));
  /* 12cbda5a call 0x12cbcfc0 */
  push32(0x12cbda5fu); f_12cbcfc0();
  /* 12cbda5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbda62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbda65 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbda66 call 0x12cbda90 */
  push32(0x12cbda6bu); f_12cbda90();
  /* 12cbda6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbda6e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cbda71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbda74 push edx */
  push32((uint32_t)(EDX));
  /* 12cbda75 call 0x12cbd030 */
  push32(0x12cbda7au); f_12cbd030();
  /* 12cbda7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbda7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12cbda80:;
  /* 12cbda80 mov esp, ebp */
  ESP = (EBP);
  /* 12cbda82 pop ebp */
  EBP = (pop32());
  /* 12cbda83 ret  */
  ESPCHK(0x12cbda40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da90 @ 0x12cbda90 (65 bytes, 26 insns) */
void f_12cbda90(void) {
  FTRACE(0x12cbda90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbda90 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbda91 mov ebp, esp */
  EBP = (ESP);
  /* 12cbda93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbda96 push eax */
  push32((uint32_t)(EAX));
  /* 12cbda97 call 0x12cbdae0 */
  push32(0x12cbda9cu); f_12cbdae0();
  /* 12cbda9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbda9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbdaa1 je 0x12cbdaa8 */
  if (C.zf) goto L_12cbdaa8;
  /* 12cbdaa3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cbdaa6 jmp 0x12cbdacf */
  goto L_12cbdacf;
L_12cbdaa8:;
  /* 12cbdaa8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbdaab mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12cbdaae and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 12cbdab4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cbdab6 je 0x12cbdacd */
  if (C.zf) goto L_12cbdacd;
  /* 12cbdab8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbdabb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12cbdabe push ecx */
  push32((uint32_t)(ECX));
  /* 12cbdabf call 0x12cbe8a0 */
  push32(0x12cbdac4u); f_12cbe8a0();
  /* 12cbdac4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbdac7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cbdac9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbdacb jmp 0x12cbdacf */
  goto L_12cbdacf;
L_12cbdacd:;
  /* 12cbdacd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cbdacf:;
  /* 12cbdacf pop ebp */
  EBP = (pop32());
  /* 12cbdad0 ret  */
  ESPCHK(0x12cbda90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dae0 @ 0x12cbdae0 (183 bytes, 62 insns) */
void f_12cbdae0(void) {
  FTRACE(0x12cbdae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbdae0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbdae1 mov ebp, esp */
  EBP = (ESP);
  /* 12cbdae3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbdae6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cbdaed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbdaf0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cbdaf3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbdaf6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12cbdaf9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12cbdafc cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbdaff jne 0x12cbdb7b */
  if (!C.zf) goto L_12cbdb7b;
  /* 12cbdb01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbdb04 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12cbdb07 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 12cbdb0d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cbdb0f je 0x12cbdb7b */
  if (C.zf) goto L_12cbdb7b;
  /* 12cbdb11 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbdb14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbdb17 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12cbdb19 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbdb1c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbdb1f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbdb23 jle 0x12cbdb7b */
  if ((C.zf||C.sf!=C.of)) goto L_12cbdb7b;
  /* 12cbdb25 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbdb28 push edx */
  push32((uint32_t)(EDX));
  /* 12cbdb29 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbdb2c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12cbdb2f push ecx */
  push32((uint32_t)(ECX));
  /* 12cbdb30 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbdb33 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12cbdb36 push eax */
  push32((uint32_t)(EAX));
  /* 12cbdb37 call 0x12cbca50 */
  push32(0x12cbdb3cu); f_12cbca50();
  /* 12cbdb3c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbdb3f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbdb42 jne 0x12cbdb65 */
  if (!C.zf) goto L_12cbdb65;
  /* 12cbdb44 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbdb47 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12cbdb4a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 12cbdb50 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cbdb52 je 0x12cbdb63 */
  if (C.zf) goto L_12cbdb63;
  /* 12cbdb54 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbdb57 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12cbdb5a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 12cbdb5d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbdb60 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_12cbdb63:;
  /* 12cbdb63 jmp 0x12cbdb7b */
  goto L_12cbdb7b;
L_12cbdb65:;
  /* 12cbdb65 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbdb68 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12cbdb6b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12cbdb6e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbdb71 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12cbdb74 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12cbdb7b:;
  /* 12cbdb7b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbdb7e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbdb81 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12cbdb84 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12cbdb86 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbdb89 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 12cbdb90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbdb93 mov esp, ebp */
  ESP = (EBP);
  /* 12cbdb95 pop ebp */
  EBP = (pop32());
  /* 12cbdb96 ret  */
  ESPCHK(0x12cbdae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dba0 @ 0x12cbdba0 (15 bytes, 7 insns) */
void f_12cbdba0(void) {
  FTRACE(0x12cbdba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbdba0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbdba1 mov ebp, esp */
  EBP = (ESP);
  /* 12cbdba3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbdba5 call 0x12cbdbb0 */
  push32(0x12cbdbaau); f_12cbdbb0();
  /* 12cbdbaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbdbad pop ebp */
  EBP = (pop32());
  /* 12cbdbae ret  */
  ESPCHK(0x12cbdba0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dbb0 @ 0x12cbdbb0 (319 bytes, 94 insns) */
void f_12cbdbb0(void) {
  FTRACE(0x12cbdbb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbdbb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbdbb1 mov ebp, esp */
  EBP = (ESP);
  /* 12cbdbb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbdbb6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cbdbbd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12cbdbc4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbdbc6 call 0x12cb7bb0 */
  push32(0x12cbdbcbu); f_12cb7bb0();
  /* 12cbdbcb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbdbce mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12cbdbd5 jmp 0x12cbdbe0 */
  goto L_12cbdbe0;
L_12cbdbd7:;
  /* 12cbdbd7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbdbda add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbdbdd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12cbdbe0:;
  /* 12cbdbe0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbdbe3 cmp ecx, dword ptr [0x12ce1c00] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12ce1c00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbdbe9 jge 0x12cbdcd3 */
  if ((C.sf==C.of)) goto L_12cbdcd3;
  /* 12cbdbef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbdbf2 mov eax, dword ptr [0x12ce08a8] */
  EAX = (r32((uint32_t)(0x12ce08a8)));
  /* 12cbdbf7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbdbfb je 0x12cbdcce */
  if (C.zf) goto L_12cbdcce;
  /* 12cbdc01 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbdc04 mov edx, dword ptr [0x12ce08a8] */
  EDX = (r32((uint32_t)(0x12ce08a8)));
  /* 12cbdc0a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12cbdc0d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12cbdc10 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 12cbdc16 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cbdc18 je 0x12cbdcce */
  if (C.zf) goto L_12cbdcce;
  /* 12cbdc1e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbdc21 mov eax, dword ptr [0x12ce08a8] */
  EAX = (r32((uint32_t)(0x12ce08a8)));
  /* 12cbdc26 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12cbdc29 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbdc2a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbdc2d push edx */
  push32((uint32_t)(EDX));
  /* 12cbdc2e call 0x12cbd000 */
  push32(0x12cbdc33u); f_12cbd000();
  /* 12cbdc33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbdc36 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbdc39 mov ecx, dword ptr [0x12ce08a8] */
  ECX = (r32((uint32_t)(0x12ce08a8)));
  /* 12cbdc3f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12cbdc42 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12cbdc45 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 12cbdc4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbdc4c je 0x12cbdcb5 */
  if (C.zf) goto L_12cbdcb5;
  /* 12cbdc4e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbdc52 jne 0x12cbdc79 */
  if (!C.zf) goto L_12cbdc79;
  /* 12cbdc54 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbdc57 mov edx, dword ptr [0x12ce08a8] */
  EDX = (r32((uint32_t)(0x12ce08a8)));
  /* 12cbdc5d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12cbdc60 push eax */
  push32((uint32_t)(EAX));
  /* 12cbdc61 call 0x12cbda90 */
  push32(0x12cbdc66u); f_12cbda90();
  /* 12cbdc66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbdc69 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbdc6c je 0x12cbdc77 */
  if (C.zf) goto L_12cbdc77;
  /* 12cbdc6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbdc71 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbdc74 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12cbdc77:;
  /* 12cbdc77 jmp 0x12cbdcb5 */
  goto L_12cbdcb5;
L_12cbdc79:;
  /* 12cbdc79 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbdc7d jne 0x12cbdcb5 */
  if (!C.zf) goto L_12cbdcb5;
  /* 12cbdc7f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbdc82 mov eax, dword ptr [0x12ce08a8] */
  EAX = (r32((uint32_t)(0x12ce08a8)));
  /* 12cbdc87 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12cbdc8a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12cbdc8d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12cbdc90 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cbdc92 je 0x12cbdcb5 */
  if (C.zf) goto L_12cbdcb5;
  /* 12cbdc94 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbdc97 mov ecx, dword ptr [0x12ce08a8] */
  ECX = (r32((uint32_t)(0x12ce08a8)));
  /* 12cbdc9d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12cbdca0 push edx */
  push32((uint32_t)(EDX));
  /* 12cbdca1 call 0x12cbda90 */
  push32(0x12cbdca6u); f_12cbda90();
  /* 12cbdca6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbdca9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbdcac jne 0x12cbdcb5 */
  if (!C.zf) goto L_12cbdcb5;
  /* 12cbdcae mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_12cbdcb5:;
  /* 12cbdcb5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbdcb8 mov ecx, dword ptr [0x12ce08a8] */
  ECX = (r32((uint32_t)(0x12ce08a8)));
  /* 12cbdcbe mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12cbdcc1 push edx */
  push32((uint32_t)(EDX));
  /* 12cbdcc2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbdcc5 push eax */
  push32((uint32_t)(EAX));
  /* 12cbdcc6 call 0x12cbd070 */
  push32(0x12cbdccbu); f_12cbd070();
  /* 12cbdccb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cbdcce:;
  /* 12cbdcce jmp 0x12cbdbd7 */
  goto L_12cbdbd7;
L_12cbdcd3:;
  /* 12cbdcd3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbdcd5 call 0x12cb7c50 */
  push32(0x12cbdcdau); f_12cb7c50();
  /* 12cbdcda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbdcdd cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbdce1 jne 0x12cbdce8 */
  if (!C.zf) goto L_12cbdce8;
  /* 12cbdce3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbdce6 jmp 0x12cbdceb */
  goto L_12cbdceb;
L_12cbdce8:;
  /* 12cbdce8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12cbdceb:;
  /* 12cbdceb mov esp, ebp */
  ESP = (EBP);
  /* 12cbdced pop ebp */
  EBP = (pop32());
  /* 12cbdcee ret  */
  ESPCHK(0x12cbdbb0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x12cbdcf0 (15 bytes, 7 insns) */
void f_12cbdcf0(void) {
  FTRACE(0x12cbdcf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbdcf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbdcf1 mov ebp, esp */
  EBP = (ESP);
  /* 12cbdcf3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbdcf5 call 0x12cb3120 */
  push32(0x12cbdcfau); f_12cb3120();
  /* 12cbdcfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbdcfd pop ebp */
  EBP = (pop32());
  /* 12cbdcfe ret  */
  ESPCHK(0x12cbdcf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd00 @ 0x12cbdd00 (1007 bytes, 269 insns) */
void f_12cbdd00(void) {
  FTRACE(0x12cbdd00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbdd00 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbdd01 mov ebp, esp */
  EBP = (ESP);
  /* 12cbdd03 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbdd09 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbdd0d jl 0x12cbdd15 */
  if ((C.sf!=C.of)) goto L_12cbdd15;
  /* 12cbdd0f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbdd13 jle 0x12cbdd1c */
  if ((C.zf||C.sf!=C.of)) goto L_12cbdd1c;
L_12cbdd15:;
  /* 12cbdd15 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbdd17 jmp 0x12cbe0eb */
  goto L_12cbe0eb;
L_12cbdd1c:;
  /* 12cbdd1c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12cbdd1e call 0x12cb7bb0 */
  push32(0x12cbdd23u); f_12cb7bb0();
  /* 12cbdd23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbdd26 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12cbdd2d mov eax, dword ptr [0x12ce0894] */
  EAX = (r32((uint32_t)(0x12ce0894)));
  /* 12cbdd32 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbdd35 mov dword ptr [0x12ce0894], eax */
  w32((uint32_t)(0x12ce0894), (EAX));
L_12cbdd3a:;
  /* 12cbdd3a cmp dword ptr [0x12ce08a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce08a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbdd41 je 0x12cbdd4d */
  if (C.zf) goto L_12cbdd4d;
  /* 12cbdd43 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbdd45 call dword ptr [0x12ce32b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32b4))), 0x12cbdd4bu);
  /* 12cbdd4b jmp 0x12cbdd3a */
  goto L_12cbdd3a;
L_12cbdd4d:;
  /* 12cbdd4d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbdd51 je 0x12cbdd91 */
  if (C.zf) goto L_12cbdd91;
  /* 12cbdd53 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbdd57 je 0x12cbdd71 */
  if (C.zf) goto L_12cbdd71;
  /* 12cbdd59 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbdd5c push ecx */
  push32((uint32_t)(ECX));
  /* 12cbdd5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbdd60 push edx */
  push32((uint32_t)(EDX));
  /* 12cbdd61 call 0x12cbe0f0 */
  push32(0x12cbdd66u); f_12cbe0f0();
  /* 12cbdd66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbdd69 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12cbdd6f jmp 0x12cbdd83 */
  goto L_12cbdd83;
L_12cbdd71:;
  /* 12cbdd71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbdd74 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cbdd77 mov ecx, dword ptr [eax + 0x12cdf4dc] */
  ECX = (r32((uint32_t)(EAX + 0x12cdf4dc)));
  /* 12cbdd7d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_12cbdd83:;
  /* 12cbdd83 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 12cbdd89 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12cbdd8c jmp 0x12cbe0cb */
  goto L_12cbe0cb;
L_12cbdd91:;
  /* 12cbdd91 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 12cbdd98 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12cbdd9f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbdda3 je 0x12cbe0c3 */
  if (C.zf) goto L_12cbe0c3;
  /* 12cbdda9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbddac movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cbddaf cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbddb2 jne 0x12cbdfd4 */
  if (!C.zf) goto L_12cbdfd4;
  /* 12cbddb8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbddbb movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12cbddbf cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbddc2 jne 0x12cbdfd4 */
  if (!C.zf) goto L_12cbdfd4;
  /* 12cbddc8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbddcb movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 12cbddcf cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbddd2 jne 0x12cbdfd4 */
  if (!C.zf) goto L_12cbdfd4;
  /* 12cbddd8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbdddb mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_12cbdde1:;
  /* 12cbdde1 push 0x12cdc424 */
  push32((uint32_t)(0x12cdc424u));
  /* 12cbdde6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12cbddec push ecx */
  push32((uint32_t)(ECX));
  /* 12cbdded call 0x12cbff50 */
  push32(0x12cbddf2u); f_12cbff50();
  /* 12cbddf2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbddf5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 12cbddfb cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbde02 je 0x12cbde2d */
  if (C.zf) goto L_12cbde2d;
  /* 12cbde04 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12cbde0a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbde10 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 12cbde16 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbde1d je 0x12cbde2d */
  if (C.zf) goto L_12cbde2d;
  /* 12cbde1f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12cbde25 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cbde28 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbde2b jne 0x12cbde53 */
  if (!C.zf) goto L_12cbde53;
L_12cbde2d:;
  /* 12cbde2d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbde31 je 0x12cbde4c */
  if (C.zf) goto L_12cbde4c;
  /* 12cbde33 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12cbde35 call 0x12cb7c50 */
  push32(0x12cbde3au); f_12cb7c50();
  /* 12cbde3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbde3d mov edx, dword ptr [0x12ce0894] */
  EDX = (r32((uint32_t)(0x12ce0894)));
  /* 12cbde43 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbde46 mov dword ptr [0x12ce0894], edx */
  w32((uint32_t)(0x12ce0894), (EDX));
L_12cbde4c:;
  /* 12cbde4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbde4e jmp 0x12cbe0eb */
  goto L_12cbe0eb;
L_12cbde53:;
  /* 12cbde53 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12cbde5a jmp 0x12cbde65 */
  goto L_12cbde65;
L_12cbde5c:;
  /* 12cbde5c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cbde5f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbde62 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12cbde65:;
  /* 12cbde65 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbde69 jg 0x12cbdeb3 */
  if ((!C.zf&&C.sf==C.of)) goto L_12cbdeb3;
  /* 12cbde6b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12cbde71 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbde72 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12cbde78 push edx */
  push32((uint32_t)(EDX));
  /* 12cbde79 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cbde7c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cbde7f mov ecx, dword ptr [eax + 0x12cdf4d8] */
  ECX = (r32((uint32_t)(EAX + 0x12cdf4d8)));
  /* 12cbde85 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbde86 call 0x12cbff10 */
  push32(0x12cbde8bu); f_12cbff10();
  /* 12cbde8b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbde8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbde90 jne 0x12cbdeb1 */
  if (!C.zf) goto L_12cbdeb1;
  /* 12cbde92 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cbde95 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cbde98 mov eax, dword ptr [edx + 0x12cdf4d8] */
  EAX = (r32((uint32_t)(EDX + 0x12cdf4d8)));
  /* 12cbde9e push eax */
  push32((uint32_t)(EAX));
  /* 12cbde9f call 0x12cb6fe0 */
  push32(0x12cbdea4u); f_12cb6fe0();
  /* 12cbdea4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbdea7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbdead jne 0x12cbdeb1 */
  if (!C.zf) goto L_12cbdeb1;
  /* 12cbdeaf jmp 0x12cbdeb3 */
  goto L_12cbdeb3;
L_12cbdeb1:;
  /* 12cbdeb1 jmp 0x12cbde5c */
  goto L_12cbde5c;
L_12cbdeb3:;
  /* 12cbdeb3 push 0x12cdc420 */
  push32((uint32_t)(0x12cdc420u));
  /* 12cbdeb8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12cbdebe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbdec1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 12cbdec7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12cbdecd push edx */
  push32((uint32_t)(EDX));
  /* 12cbdece call 0x12cbfed0 */
  push32(0x12cbded3u); f_12cbfed0();
  /* 12cbded3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbded6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 12cbdedc cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbdee3 jne 0x12cbdf19 */
  if (!C.zf) goto L_12cbdf19;
  /* 12cbdee5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12cbdeeb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cbdeee cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbdef1 je 0x12cbdf19 */
  if (C.zf) goto L_12cbdf19;
  /* 12cbdef3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbdef7 je 0x12cbdf12 */
  if (C.zf) goto L_12cbdf12;
  /* 12cbdef9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12cbdefb call 0x12cb7c50 */
  push32(0x12cbdf00u); f_12cb7c50();
  /* 12cbdf00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbdf03 mov edx, dword ptr [0x12ce0894] */
  EDX = (r32((uint32_t)(0x12ce0894)));
  /* 12cbdf09 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbdf0c mov dword ptr [0x12ce0894], edx */
  w32((uint32_t)(0x12ce0894), (EDX));
L_12cbdf12:;
  /* 12cbdf12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbdf14 jmp 0x12cbe0eb */
  goto L_12cbe0eb;
L_12cbdf19:;
  /* 12cbdf19 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbdf1d jg 0x12cbdf6a */
  if ((!C.zf&&C.sf==C.of)) goto L_12cbdf6a;
  /* 12cbdf1f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12cbdf25 push eax */
  push32((uint32_t)(EAX));
  /* 12cbdf26 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12cbdf2c push ecx */
  push32((uint32_t)(ECX));
  /* 12cbdf2d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 12cbdf33 push edx */
  push32((uint32_t)(EDX));
  /* 12cbdf34 call 0x12cb79d0 */
  push32(0x12cbdf39u); f_12cb79d0();
  /* 12cbdf39 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbdf3c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12cbdf42 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 12cbdf4a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 12cbdf50 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbdf51 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cbdf54 push edx */
  push32((uint32_t)(EDX));
  /* 12cbdf55 call 0x12cbe0f0 */
  push32(0x12cbdf5au); f_12cbe0f0();
  /* 12cbdf5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbdf5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbdf5f je 0x12cbdf6a */
  if (C.zf) goto L_12cbdf6a;
  /* 12cbdf61 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbdf64 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbdf67 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12cbdf6a:;
  /* 12cbdf6a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12cbdf70 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbdf76 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12cbdf7c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12cbdf82 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12cbdf85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbdf87 je 0x12cbdf98 */
  if (C.zf) goto L_12cbdf98;
  /* 12cbdf89 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12cbdf8f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbdf92 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_12cbdf98:;
  /* 12cbdf98 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12cbdf9e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12cbdfa1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbdfa3 jne 0x12cbdde1 */
  if (!C.zf) goto L_12cbdde1;
  /* 12cbdfa9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbdfad je 0x12cbdfbc */
  if (C.zf) goto L_12cbdfbc;
  /* 12cbdfaf call 0x12cbe290 */
  push32(0x12cbdfb4u); f_12cbe290();
  /* 12cbdfb4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 12cbdfba jmp 0x12cbdfc6 */
  goto L_12cbdfc6;
L_12cbdfbc:;
  /* 12cbdfbc mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_12cbdfc6:;
  /* 12cbdfc6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 12cbdfcc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cbdfcf jmp 0x12cbe0c1 */
  goto L_12cbe0c1;
L_12cbdfd4:;
  /* 12cbdfd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbdfd7 push edx */
  push32((uint32_t)(EDX));
  /* 12cbdfd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbdfda push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbdfdc lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 12cbdfe2 push eax */
  push32((uint32_t)(EAX));
  /* 12cbdfe3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbdfe6 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbdfe7 call 0x12cbe390 */
  push32(0x12cbdfecu); f_12cbe390();
  /* 12cbdfec add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbdfef mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cbdff2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbdff6 je 0x12cbe0c1 */
  if (C.zf) goto L_12cbe0c1;
  /* 12cbdffc mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12cbe003 jmp 0x12cbe00e */
  goto L_12cbe00e;
L_12cbe005:;
  /* 12cbe005 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cbe008 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe00b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12cbe00e:;
  /* 12cbe00e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbe012 jg 0x12cbe070 */
  if ((!C.zf&&C.sf==C.of)) goto L_12cbe070;
  /* 12cbe014 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbe018 je 0x12cbe06e */
  if (C.zf) goto L_12cbe06e;
  /* 12cbe01a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cbe01d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cbe020 mov ecx, dword ptr [eax + 0x12cdf4dc] */
  ECX = (r32((uint32_t)(EAX + 0x12cdf4dc)));
  /* 12cbe026 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbe027 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 12cbe02d push edx */
  push32((uint32_t)(EDX));
  /* 12cbe02e call 0x12cbfe40 */
  push32(0x12cbe033u); f_12cbfe40();
  /* 12cbe033 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe036 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbe038 je 0x12cbe065 */
  if (C.zf) goto L_12cbe065;
  /* 12cbe03a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 12cbe040 push eax */
  push32((uint32_t)(EAX));
  /* 12cbe041 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cbe044 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbe045 call 0x12cbe0f0 */
  push32(0x12cbe04au); f_12cbe0f0();
  /* 12cbe04a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe04d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbe04f je 0x12cbe05c */
  if (C.zf) goto L_12cbe05c;
  /* 12cbe051 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbe054 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe057 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12cbe05a jmp 0x12cbe063 */
  goto L_12cbe063;
L_12cbe05c:;
  /* 12cbe05c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12cbe063:;
  /* 12cbe063 jmp 0x12cbe06e */
  goto L_12cbe06e;
L_12cbe065:;
  /* 12cbe065 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbe068 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe06b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12cbe06e:;
  /* 12cbe06e jmp 0x12cbe005 */
  goto L_12cbe005;
L_12cbe070:;
  /* 12cbe070 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbe074 je 0x12cbe09b */
  if (C.zf) goto L_12cbe09b;
  /* 12cbe076 call 0x12cbe290 */
  push32(0x12cbe07bu); f_12cbe290();
  /* 12cbe07b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cbe07e push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbe080 mov ecx, dword ptr [0x12cdf4dc] */
  ECX = (r32((uint32_t)(0x12cdf4dc)));
  /* 12cbe086 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbe087 call 0x12cb4c40 */
  push32(0x12cbe08cu); f_12cb4c40();
  /* 12cbe08c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe08f mov dword ptr [0x12cdf4dc], 0 */
  w32((uint32_t)(0x12cdf4dc), (0x0u));
  /* 12cbe099 jmp 0x12cbe0c1 */
  goto L_12cbe0c1;
L_12cbe09b:;
  /* 12cbe09b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbe09f je 0x12cbe0ae */
  if (C.zf) goto L_12cbe0ae;
  /* 12cbe0a1 call 0x12cbe290 */
  push32(0x12cbe0a6u); f_12cbe290();
  /* 12cbe0a6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 12cbe0ac jmp 0x12cbe0b8 */
  goto L_12cbe0b8;
L_12cbe0ae:;
  /* 12cbe0ae mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_12cbe0b8:;
  /* 12cbe0b8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 12cbe0be mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12cbe0c1:;
  /* 12cbe0c1 jmp 0x12cbe0cb */
  goto L_12cbe0cb;
L_12cbe0c3:;
  /* 12cbe0c3 call 0x12cbe290 */
  push32(0x12cbe0c8u); f_12cbe290();
  /* 12cbe0c8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12cbe0cb:;
  /* 12cbe0cb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbe0cf je 0x12cbe0e8 */
  if (C.zf) goto L_12cbe0e8;
  /* 12cbe0d1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12cbe0d3 call 0x12cb7c50 */
  push32(0x12cbe0d8u); f_12cb7c50();
  /* 12cbe0d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe0db mov eax, dword ptr [0x12ce0894] */
  EAX = (r32((uint32_t)(0x12ce0894)));
  /* 12cbe0e0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbe0e3 mov dword ptr [0x12ce0894], eax */
  w32((uint32_t)(0x12ce0894), (EAX));
L_12cbe0e8:;
  /* 12cbe0e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12cbe0eb:;
  /* 12cbe0eb mov esp, ebp */
  ESP = (EBP);
  /* 12cbe0ed pop ebp */
  EBP = (pop32());
  /* 12cbe0ee ret  */
  ESPCHK(0x12cbdd00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0f0 @ 0x12cbe0f0 (403 bytes, 117 insns) */
void f_12cbe0f0(void) {
  FTRACE(0x12cbe0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbe0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbe0f1 mov ebp, esp */
  EBP = (ESP);
  /* 12cbe0f3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbe0f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbe0fc push eax */
  push32((uint32_t)(EAX));
  /* 12cbe0fd lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 12cbe103 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbe104 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 12cbe10a push edx */
  push32((uint32_t)(EDX));
  /* 12cbe10b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 12cbe111 push eax */
  push32((uint32_t)(EAX));
  /* 12cbe112 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbe115 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbe116 call 0x12cbe390 */
  push32(0x12cbe11bu); f_12cbe390();
  /* 12cbe11b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe11e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbe120 jne 0x12cbe129 */
  if (!C.zf) goto L_12cbe129;
  /* 12cbe122 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbe124 jmp 0x12cbe27f */
  goto L_12cbe27f;
L_12cbe129:;
  /* 12cbe129 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 12cbe12e push 0x12cdc428 */
  push32((uint32_t)(0x12cdc428u));
  /* 12cbe133 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbe135 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 12cbe13b push edx */
  push32((uint32_t)(EDX));
  /* 12cbe13c call 0x12cb6fe0 */
  push32(0x12cbe141u); f_12cb6fe0();
  /* 12cbe141 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe144 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe147 push eax */
  push32((uint32_t)(EAX));
  /* 12cbe148 call 0x12cb41b0 */
  push32(0x12cbe14du); f_12cb41b0();
  /* 12cbe14d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe150 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cbe153 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbe157 jne 0x12cbe160 */
  if (!C.zf) goto L_12cbe160;
  /* 12cbe159 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbe15b jmp 0x12cbe27f */
  goto L_12cbe27f;
L_12cbe160:;
  /* 12cbe160 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbe163 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cbe166 mov ecx, dword ptr [eax + 0x12cdf4dc] */
  ECX = (r32((uint32_t)(EAX + 0x12cdf4dc)));
  /* 12cbe16c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbe16f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbe172 mov eax, dword ptr [edx*4 + 0x12ce0710] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12ce0710)));
  /* 12cbe179 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cbe17c push 6 */
  push32((uint32_t)(0x6u));
  /* 12cbe17e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbe181 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cbe184 add ecx, 0x12ce0760 */
  { uint32_t _a=(ECX),_b=(0x12ce0760u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe18a push ecx */
  push32((uint32_t)(ECX));
  /* 12cbe18b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 12cbe18e push edx */
  push32((uint32_t)(EDX));
  /* 12cbe18f call 0x12cbaa90 */
  push32(0x12cbe194u); f_12cbaa90();
  /* 12cbe194 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe197 mov eax, dword ptr [0x12ce0728] */
  EAX = (r32((uint32_t)(0x12ce0728)));
  /* 12cbe19c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12cbe19f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 12cbe1a5 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbe1a6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbe1a9 push edx */
  push32((uint32_t)(EDX));
  /* 12cbe1aa call 0x12cb7160 */
  push32(0x12cbe1afu); f_12cb7160();
  /* 12cbe1af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe1b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbe1b5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cbe1b8 mov dword ptr [ecx + 0x12cdf4dc], eax */
  w32((uint32_t)(ECX + 0x12cdf4dc), (EAX));
  /* 12cbe1be mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 12cbe1c4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cbe1ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbe1cd mov dword ptr [eax*4 + 0x12ce0710], edx */
  w32((uint32_t)(EAX*4 + 0x12ce0710), (EDX));
  /* 12cbe1d4 push 6 */
  push32((uint32_t)(0x6u));
  /* 12cbe1d6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 12cbe1dc push ecx */
  push32((uint32_t)(ECX));
  /* 12cbe1dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbe1e0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cbe1e3 add edx, 0x12ce0760 */
  { uint32_t _a=(EDX),_b=(0x12ce0760u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe1e9 push edx */
  push32((uint32_t)(EDX));
  /* 12cbe1ea call 0x12cbaa90 */
  push32(0x12cbe1efu); f_12cbaa90();
  /* 12cbe1ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe1f2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbe1f6 jne 0x12cbe203 */
  if (!C.zf) goto L_12cbe203;
  /* 12cbe1f8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12cbe1fe mov dword ptr [0x12ce0728], eax */
  w32((uint32_t)(0x12ce0728), (EAX));
L_12cbe203:;
  /* 12cbe203 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbe207 jne 0x12cbe215 */
  if (!C.zf) goto L_12cbe215;
  /* 12cbe209 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12cbe20f mov dword ptr [0x12ce072c], ecx */
  w32((uint32_t)(0x12ce072c), (ECX));
L_12cbe215:;
  /* 12cbe215 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbe218 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cbe21b call dword ptr [edx + 0x12cdf4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x12cdf4e0))), 0x12cbe221u);
  /* 12cbe221 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbe223 je 0x12cbe25c */
  if (C.zf) goto L_12cbe25c;
  /* 12cbe225 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbe228 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cbe22b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbe22e mov dword ptr [eax + 0x12cdf4dc], ecx */
  w32((uint32_t)(EAX + 0x12cdf4dc), (ECX));
  /* 12cbe234 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbe236 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbe239 push edx */
  push32((uint32_t)(EDX));
  /* 12cbe23a call 0x12cb4c40 */
  push32(0x12cbe23fu); f_12cb4c40();
  /* 12cbe23f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe242 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbe245 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbe248 mov dword ptr [eax*4 + 0x12ce0710], ecx */
  w32((uint32_t)(EAX*4 + 0x12ce0710), (ECX));
  /* 12cbe24f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cbe252 mov dword ptr [0x12ce0728], edx */
  w32((uint32_t)(0x12ce0728), (EDX));
  /* 12cbe258 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbe25a jmp 0x12cbe27f */
  goto L_12cbe27f;
L_12cbe25c:;
  /* 12cbe25c cmp dword ptr [ebp - 0xc], 0x12cdf3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x12cdf3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbe263 je 0x12cbe273 */
  if (C.zf) goto L_12cbe273;
  /* 12cbe265 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbe267 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbe26a push eax */
  push32((uint32_t)(EAX));
  /* 12cbe26b call 0x12cb4c40 */
  push32(0x12cbe270u); f_12cb4c40();
  /* 12cbe270 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cbe273:;
  /* 12cbe273 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbe276 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cbe279 mov eax, dword ptr [ecx + 0x12cdf4dc] */
  EAX = (r32((uint32_t)(ECX + 0x12cdf4dc)));
L_12cbe27f:;
  /* 12cbe27f mov esp, ebp */
  ESP = (EBP);
  /* 12cbe281 pop ebp */
  EBP = (pop32());
  /* 12cbe282 ret  */
  ESPCHK(0x12cbe0f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e290 @ 0x12cbe290 (256 bytes, 72 insns) */
void f_12cbe290(void) {
  FTRACE(0x12cbe290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbe290 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbe291 mov ebp, esp */
  EBP = (ESP);
  /* 12cbe293 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbe296 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12cbe29d cmp dword ptr [0x12cdf4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12cdf4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbe2a4 jne 0x12cbe2c4 */
  if (!C.zf) goto L_12cbe2c4;
  /* 12cbe2a6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 12cbe2ab push 0x12cdc428 */
  push32((uint32_t)(0x12cdc428u));
  /* 12cbe2b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbe2b2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 12cbe2b7 call 0x12cb41b0 */
  push32(0x12cbe2bcu); f_12cb41b0();
  /* 12cbe2bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe2bf mov dword ptr [0x12cdf4dc], eax */
  w32((uint32_t)(0x12cdf4dc), (EAX));
L_12cbe2c4:;
  /* 12cbe2c4 mov eax, dword ptr [0x12cdf4dc] */
  EAX = (r32((uint32_t)(0x12cdf4dc)));
  /* 12cbe2c9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12cbe2cc mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12cbe2d3 jmp 0x12cbe2de */
  goto L_12cbe2de;
L_12cbe2d5:;
  /* 12cbe2d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbe2d8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe2db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12cbe2de:;
  /* 12cbe2de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbe2e1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cbe2e4 mov eax, dword ptr [edx + 0x12cdf4dc] */
  EAX = (r32((uint32_t)(EDX + 0x12cdf4dc)));
  /* 12cbe2ea push eax */
  push32((uint32_t)(EAX));
  /* 12cbe2eb push 0x12cdc434 */
  push32((uint32_t)(0x12cdc434u));
  /* 12cbe2f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbe2f3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cbe2f6 mov edx, dword ptr [ecx + 0x12cdf4d8] */
  EDX = (r32((uint32_t)(ECX + 0x12cdf4d8)));
  /* 12cbe2fc push edx */
  push32((uint32_t)(EDX));
  /* 12cbe2fd push 3 */
  push32((uint32_t)(0x3u));
  /* 12cbe2ff mov eax, dword ptr [0x12cdf4dc] */
  EAX = (r32((uint32_t)(0x12cdf4dc)));
  /* 12cbe304 push eax */
  push32((uint32_t)(EAX));
  /* 12cbe305 call 0x12cbe530 */
  push32(0x12cbe30au); f_12cbe530();
  /* 12cbe30a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe30d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbe311 jge 0x12cbe359 */
  if ((C.sf==C.of)) goto L_12cbe359;
  /* 12cbe313 push 0x12cdc420 */
  push32((uint32_t)(0x12cdc420u));
  /* 12cbe318 mov ecx, dword ptr [0x12cdf4dc] */
  ECX = (r32((uint32_t)(0x12cdf4dc)));
  /* 12cbe31e push ecx */
  push32((uint32_t)(ECX));
  /* 12cbe31f call 0x12cb7170 */
  push32(0x12cbe324u); f_12cb7170();
  /* 12cbe324 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe327 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbe32a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe32d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cbe330 mov eax, dword ptr [edx + 0x12cdf4dc] */
  EAX = (r32((uint32_t)(EDX + 0x12cdf4dc)));
  /* 12cbe336 push eax */
  push32((uint32_t)(EAX));
  /* 12cbe337 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbe33a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cbe33d mov edx, dword ptr [ecx + 0x12cdf4dc] */
  EDX = (r32((uint32_t)(ECX + 0x12cdf4dc)));
  /* 12cbe343 push edx */
  push32((uint32_t)(EDX));
  /* 12cbe344 call 0x12cbfe40 */
  push32(0x12cbe349u); f_12cbfe40();
  /* 12cbe349 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe34c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbe34e je 0x12cbe357 */
  if (C.zf) goto L_12cbe357;
  /* 12cbe350 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12cbe357:;
  /* 12cbe357 jmp 0x12cbe387 */
  goto L_12cbe387;
L_12cbe359:;
  /* 12cbe359 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbe35d jne 0x12cbe366 */
  if (!C.zf) goto L_12cbe366;
  /* 12cbe35f mov eax, dword ptr [0x12cdf4dc] */
  EAX = (r32((uint32_t)(0x12cdf4dc)));
  /* 12cbe364 jmp 0x12cbe38c */
  goto L_12cbe38c;
L_12cbe366:;
  /* 12cbe366 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbe368 mov eax, dword ptr [0x12cdf4dc] */
  EAX = (r32((uint32_t)(0x12cdf4dc)));
  /* 12cbe36d push eax */
  push32((uint32_t)(EAX));
  /* 12cbe36e call 0x12cb4c40 */
  push32(0x12cbe373u); f_12cb4c40();
  /* 12cbe373 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe376 mov dword ptr [0x12cdf4dc], 0 */
  w32((uint32_t)(0x12cdf4dc), (0x0u));
  /* 12cbe380 mov eax, dword ptr [0x12cdf4f4] */
  EAX = (r32((uint32_t)(0x12cdf4f4)));
  /* 12cbe385 jmp 0x12cbe38c */
  goto L_12cbe38c;
L_12cbe387:;
  /* 12cbe387 jmp 0x12cbe2d5 */
  goto L_12cbe2d5;
L_12cbe38c:;
  /* 12cbe38c mov esp, ebp */
  ESP = (EBP);
  /* 12cbe38e pop ebp */
  EBP = (pop32());
  /* 12cbe38f ret  */
  ESPCHK(0x12cbe290u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e390 @ 0x12cbe390 (388 bytes, 115 insns) */
void f_12cbe390(void) {
  FTRACE(0x12cbe390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbe390 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbe391 mov ebp, esp */
  EBP = (ESP);
  /* 12cbe393 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbe399 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbe39d jne 0x12cbe3a6 */
  if (!C.zf) goto L_12cbe3a6;
  /* 12cbe39f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbe3a1 jmp 0x12cbe510 */
  goto L_12cbe510;
L_12cbe3a6:;
  /* 12cbe3a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbe3a9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cbe3ac cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbe3af jne 0x12cbe400 */
  if (!C.zf) goto L_12cbe400;
  /* 12cbe3b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbe3b4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12cbe3b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbe3ba jne 0x12cbe400 */
  if (!C.zf) goto L_12cbe400;
  /* 12cbe3bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbe3bf mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 12cbe3c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbe3c5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 12cbe3c9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbe3cd je 0x12cbe3e9 */
  if (C.zf) goto L_12cbe3e9;
  /* 12cbe3cf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cbe3d2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 12cbe3d7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cbe3da mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 12cbe3e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cbe3e3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_12cbe3e9:;
  /* 12cbe3e9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbe3ed je 0x12cbe3f8 */
  if (C.zf) goto L_12cbe3f8;
  /* 12cbe3ef mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cbe3f2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12cbe3f8:;
  /* 12cbe3f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbe3fb jmp 0x12cbe510 */
  goto L_12cbe510;
L_12cbe400:;
  /* 12cbe400 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbe403 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbe404 push 0x12cdf450 */
  push32((uint32_t)(0x12cdf450u));
  /* 12cbe409 call 0x12cbfe40 */
  push32(0x12cbe40eu); f_12cbfe40();
  /* 12cbe40e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe411 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbe413 je 0x12cbe4c8 */
  if (C.zf) goto L_12cbe4c8;
  /* 12cbe419 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbe41c push edx */
  push32((uint32_t)(EDX));
  /* 12cbe41d push 0x12cdf3cc */
  push32((uint32_t)(0x12cdf3ccu));
  /* 12cbe422 call 0x12cbfe40 */
  push32(0x12cbe427u); f_12cbfe40();
  /* 12cbe427 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe42a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbe42c je 0x12cbe4c8 */
  if (C.zf) goto L_12cbe4c8;
  /* 12cbe432 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbe435 push eax */
  push32((uint32_t)(EAX));
  /* 12cbe436 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 12cbe43c push ecx */
  push32((uint32_t)(ECX));
  /* 12cbe43d call 0x12cbe580 */
  push32(0x12cbe442u); f_12cbe580();
  /* 12cbe442 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe445 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbe447 je 0x12cbe450 */
  if (C.zf) goto L_12cbe450;
  /* 12cbe449 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbe44b jmp 0x12cbe510 */
  goto L_12cbe510;
L_12cbe450:;
  /* 12cbe450 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 12cbe456 push edx */
  push32((uint32_t)(EDX));
  /* 12cbe457 push 0x12ce0738 */
  push32((uint32_t)(0x12ce0738u));
  /* 12cbe45c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 12cbe462 push eax */
  push32((uint32_t)(EAX));
  /* 12cbe463 call 0x12cbff90 */
  push32(0x12cbe468u); f_12cbff90();
  /* 12cbe468 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe46b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbe46d jne 0x12cbe476 */
  if (!C.zf) goto L_12cbe476;
  /* 12cbe46f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbe471 jmp 0x12cbe510 */
  goto L_12cbe510;
L_12cbe476:;
  /* 12cbe476 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbe478 mov cx, word ptr [0x12ce073c] */
  CX = (r16((uint32_t)(0x12ce073c)));
  /* 12cbe47f mov dword ptr [0x12ce0740], ecx */
  w32((uint32_t)(0x12ce0740), (ECX));
  /* 12cbe485 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 12cbe48b push edx */
  push32((uint32_t)(EDX));
  /* 12cbe48c push 0x12cdf450 */
  push32((uint32_t)(0x12cdf450u));
  /* 12cbe491 call 0x12cbe6e0 */
  push32(0x12cbe496u); f_12cbe6e0();
  /* 12cbe496 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe499 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbe49c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cbe49f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cbe4a1 je 0x12cbe4b6 */
  if (C.zf) goto L_12cbe4b6;
  /* 12cbe4a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbe4a6 push edx */
  push32((uint32_t)(EDX));
  /* 12cbe4a7 push 0x12cdf3cc */
  push32((uint32_t)(0x12cdf3ccu));
  /* 12cbe4ac call 0x12cb7160 */
  push32(0x12cbe4b1u); f_12cb7160();
  /* 12cbe4b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe4b4 jmp 0x12cbe4c8 */
  goto L_12cbe4c8;
L_12cbe4b6:;
  /* 12cbe4b6 push 0x12cdf450 */
  push32((uint32_t)(0x12cdf450u));
  /* 12cbe4bb push 0x12cdf3cc */
  push32((uint32_t)(0x12cdf3ccu));
  /* 12cbe4c0 call 0x12cb7160 */
  push32(0x12cbe4c5u); f_12cb7160();
  /* 12cbe4c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cbe4c8:;
  /* 12cbe4c8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbe4cc je 0x12cbe4e1 */
  if (C.zf) goto L_12cbe4e1;
  /* 12cbe4ce push 6 */
  push32((uint32_t)(0x6u));
  /* 12cbe4d0 push 0x12ce0738 */
  push32((uint32_t)(0x12ce0738u));
  /* 12cbe4d5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cbe4d8 push eax */
  push32((uint32_t)(EAX));
  /* 12cbe4d9 call 0x12cbaa90 */
  push32(0x12cbe4deu); f_12cbaa90();
  /* 12cbe4de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cbe4e1:;
  /* 12cbe4e1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbe4e5 je 0x12cbe4fa */
  if (C.zf) goto L_12cbe4fa;
  /* 12cbe4e7 push 4 */
  push32((uint32_t)(0x4u));
  /* 12cbe4e9 push 0x12ce0740 */
  push32((uint32_t)(0x12ce0740u));
  /* 12cbe4ee mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cbe4f1 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbe4f2 call 0x12cbaa90 */
  push32(0x12cbe4f7u); f_12cbaa90();
  /* 12cbe4f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cbe4fa:;
  /* 12cbe4fa push 0x12cdf450 */
  push32((uint32_t)(0x12cdf450u));
  /* 12cbe4ff mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbe502 push edx */
  push32((uint32_t)(EDX));
  /* 12cbe503 call 0x12cb7160 */
  push32(0x12cbe508u); f_12cb7160();
  /* 12cbe508 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe50b mov eax, 0x12cdf450 */
  EAX = (0x12cdf450u);
L_12cbe510:;
  /* 12cbe510 mov esp, ebp */
  ESP = (EBP);
  /* 12cbe512 pop ebp */
  EBP = (pop32());
  /* 12cbe513 ret  */
  ESPCHK(0x12cbe390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e520 @ 0x12cbe520 (7 bytes, 5 insns) */
void f_12cbe520(void) {
  FTRACE(0x12cbe520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbe520 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbe521 mov ebp, esp */
  EBP = (ESP);
  /* 12cbe523 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbe525 pop ebp */
  EBP = (pop32());
  /* 12cbe526 ret  */
  ESPCHK(0x12cbe520u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x12cbe530 (79 bytes, 28 insns) */
void f_12cbe530(void) {
  FTRACE(0x12cbe530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbe530 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbe531 mov ebp, esp */
  EBP = (ESP);
  /* 12cbe533 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbe536 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12cbe539 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cbe53c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12cbe543 jmp 0x12cbe54e */
  goto L_12cbe54e;
L_12cbe545:;
  /* 12cbe545 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbe548 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe54b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12cbe54e:;
  /* 12cbe54e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbe551 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbe554 jge 0x12cbe574 */
  if ((C.sf==C.of)) goto L_12cbe574;
  /* 12cbe556 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbe559 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe55c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cbe55f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbe562 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12cbe565 push edx */
  push32((uint32_t)(EDX));
  /* 12cbe566 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbe569 push eax */
  push32((uint32_t)(EAX));
  /* 12cbe56a call 0x12cb7170 */
  push32(0x12cbe56fu); f_12cb7170();
  /* 12cbe56f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe572 jmp 0x12cbe545 */
  goto L_12cbe545;
L_12cbe574:;
  /* 12cbe574 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cbe57b mov esp, ebp */
  ESP = (EBP);
  /* 12cbe57d pop ebp */
  EBP = (pop32());
  /* 12cbe57e ret  */
  ESPCHK(0x12cbe530u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e580 @ 0x12cbe580 (349 bytes, 122 insns) */
void f_12cbe580(void) {
  FTRACE(0x12cbe580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbe580 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbe581 mov ebp, esp */
  EBP = (ESP);
  /* 12cbe583 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbe586 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 12cbe58b push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbe58d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbe590 push eax */
  push32((uint32_t)(EAX));
  /* 12cbe591 call 0x12cb7f20 */
  push32(0x12cbe596u); f_12cb7f20();
  /* 12cbe596 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe599 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbe59c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cbe59f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cbe5a1 jne 0x12cbe5aa */
  if (!C.zf) goto L_12cbe5aa;
  /* 12cbe5a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbe5a5 jmp 0x12cbe6d9 */
  goto L_12cbe6d9;
L_12cbe5aa:;
  /* 12cbe5aa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbe5ad movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cbe5b0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbe5b3 jne 0x12cbe5e0 */
  if (!C.zf) goto L_12cbe5e0;
  /* 12cbe5b5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbe5b8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12cbe5bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbe5be je 0x12cbe5e0 */
  if (C.zf) goto L_12cbe5e0;
  /* 12cbe5c0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbe5c3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe5c6 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbe5c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbe5ca add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe5d0 push edx */
  push32((uint32_t)(EDX));
  /* 12cbe5d1 call 0x12cb7160 */
  push32(0x12cbe5d6u); f_12cb7160();
  /* 12cbe5d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe5d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbe5db jmp 0x12cbe6d9 */
  goto L_12cbe6d9;
L_12cbe5e0:;
  /* 12cbe5e0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cbe5e7 jmp 0x12cbe5f2 */
  goto L_12cbe5f2;
L_12cbe5e9:;
  /* 12cbe5e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbe5ec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe5ef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cbe5f2:;
  /* 12cbe5f2 push 0x12cdc438 */
  push32((uint32_t)(0x12cdc438u));
  /* 12cbe5f7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbe5fa push ecx */
  push32((uint32_t)(ECX));
  /* 12cbe5fb call 0x12cbfed0 */
  push32(0x12cbe600u); f_12cbfed0();
  /* 12cbe600 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe603 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cbe606 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbe60a jne 0x12cbe614 */
  if (!C.zf) goto L_12cbe614;
  /* 12cbe60c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cbe60f jmp 0x12cbe6d9 */
  goto L_12cbe6d9;
L_12cbe614:;
  /* 12cbe614 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbe617 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe61a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cbe61c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12cbe61f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbe623 jne 0x12cbe64a */
  if (!C.zf) goto L_12cbe64a;
  /* 12cbe625 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbe629 jge 0x12cbe64a */
  if ((C.sf==C.of)) goto L_12cbe64a;
  /* 12cbe62b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12cbe62f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbe632 je 0x12cbe64a */
  if (C.zf) goto L_12cbe64a;
  /* 12cbe634 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbe637 push edx */
  push32((uint32_t)(EDX));
  /* 12cbe638 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbe63b push eax */
  push32((uint32_t)(EAX));
  /* 12cbe63c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbe63f push ecx */
  push32((uint32_t)(ECX));
  /* 12cbe640 call 0x12cb79d0 */
  push32(0x12cbe645u); f_12cb79d0();
  /* 12cbe645 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe648 jmp 0x12cbe6b0 */
  goto L_12cbe6b0;
L_12cbe64a:;
  /* 12cbe64a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbe64e jne 0x12cbe678 */
  if (!C.zf) goto L_12cbe678;
  /* 12cbe650 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbe654 jge 0x12cbe678 */
  if ((C.sf==C.of)) goto L_12cbe678;
  /* 12cbe656 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12cbe65a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbe65d je 0x12cbe678 */
  if (C.zf) goto L_12cbe678;
  /* 12cbe65f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbe662 push eax */
  push32((uint32_t)(EAX));
  /* 12cbe663 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbe666 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbe667 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbe66a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe66d push edx */
  push32((uint32_t)(EDX));
  /* 12cbe66e call 0x12cb79d0 */
  push32(0x12cbe673u); f_12cb79d0();
  /* 12cbe673 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe676 jmp 0x12cbe6b0 */
  goto L_12cbe6b0;
L_12cbe678:;
  /* 12cbe678 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbe67c jne 0x12cbe6ab */
  if (!C.zf) goto L_12cbe6ab;
  /* 12cbe67e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12cbe682 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbe684 je 0x12cbe68f */
  if (C.zf) goto L_12cbe68f;
  /* 12cbe686 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12cbe68a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbe68d jne 0x12cbe6ab */
  if (!C.zf) goto L_12cbe6ab;
L_12cbe68f:;
  /* 12cbe68f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbe692 push edx */
  push32((uint32_t)(EDX));
  /* 12cbe693 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbe696 push eax */
  push32((uint32_t)(EAX));
  /* 12cbe697 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbe69a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe6a0 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbe6a1 call 0x12cb79d0 */
  push32(0x12cbe6a6u); f_12cb79d0();
  /* 12cbe6a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe6a9 jmp 0x12cbe6b0 */
  goto L_12cbe6b0;
L_12cbe6ab:;
  /* 12cbe6ab or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cbe6ae jmp 0x12cbe6d9 */
  goto L_12cbe6d9;
L_12cbe6b0:;
  /* 12cbe6b0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12cbe6b4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbe6b7 jne 0x12cbe6bb */
  if (!C.zf) goto L_12cbe6bb;
  /* 12cbe6b9 jmp 0x12cbe6d7 */
  goto L_12cbe6d7;
L_12cbe6bb:;
  /* 12cbe6bb movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12cbe6bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbe6c1 jne 0x12cbe6c5 */
  if (!C.zf) goto L_12cbe6c5;
  /* 12cbe6c3 jmp 0x12cbe6d7 */
  goto L_12cbe6d7;
L_12cbe6c5:;
  /* 12cbe6c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbe6c8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbe6cb lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 12cbe6cf mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12cbe6d2 jmp 0x12cbe5e9 */
  goto L_12cbe5e9;
L_12cbe6d7:;
  /* 12cbe6d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cbe6d9:;
  /* 12cbe6d9 mov esp, ebp */
  ESP = (EBP);
  /* 12cbe6db pop ebp */
  EBP = (pop32());
  /* 12cbe6dc ret  */
  ESPCHK(0x12cbe580u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x12cbe6e0 (101 bytes, 36 insns) */
void f_12cbe6e0(void) {
  FTRACE(0x12cbe6e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbe6e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbe6e1 mov ebp, esp */
  EBP = (ESP);
  /* 12cbe6e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbe6e6 push eax */
  push32((uint32_t)(EAX));
  /* 12cbe6e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbe6ea push ecx */
  push32((uint32_t)(ECX));
  /* 12cbe6eb call 0x12cb7160 */
  push32(0x12cbe6f0u); f_12cb7160();
  /* 12cbe6f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe6f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbe6f6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 12cbe6fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbe6fc je 0x12cbe718 */
  if (C.zf) goto L_12cbe718;
  /* 12cbe6fe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbe701 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe704 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbe705 push 0x12cdc440 */
  push32((uint32_t)(0x12cdc440u));
  /* 12cbe70a push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbe70c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbe70f push edx */
  push32((uint32_t)(EDX));
  /* 12cbe710 call 0x12cbe530 */
  push32(0x12cbe715u); f_12cbe530();
  /* 12cbe715 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cbe718:;
  /* 12cbe718 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbe71b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 12cbe722 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cbe724 je 0x12cbe743 */
  if (C.zf) goto L_12cbe743;
  /* 12cbe726 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbe729 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe72f push edx */
  push32((uint32_t)(EDX));
  /* 12cbe730 push 0x12cdc43c */
  push32((uint32_t)(0x12cdc43cu));
  /* 12cbe735 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbe737 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbe73a push eax */
  push32((uint32_t)(EAX));
  /* 12cbe73b call 0x12cbe530 */
  push32(0x12cbe740u); f_12cbe530();
  /* 12cbe740 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cbe743:;
  /* 12cbe743 pop ebp */
  EBP = (pop32());
  /* 12cbe744 ret  */
  ESPCHK(0x12cbe6e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e750 @ 0x12cbe750 (130 bytes, 50 insns) */
void f_12cbe750(void) {
  FTRACE(0x12cbe750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbe750 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbe751 mov ebp, esp */
  EBP = (ESP);
  /* 12cbe753 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbe754 push ebx */
  push32((uint32_t)(EBX));
  /* 12cbe755 push esi */
  push32((uint32_t)(ESI));
  /* 12cbe756 push edi */
  push32((uint32_t)(EDI));
  /* 12cbe757 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12cbe75e:;
  /* 12cbe75e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbe762 jne 0x12cbe782 */
  if (!C.zf) goto L_12cbe782;
  /* 12cbe764 push 0x12cdc450 */
  push32((uint32_t)(0x12cdc450u));
  /* 12cbe769 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbe76b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 12cbe76d push 0x12cdc444 */
  push32((uint32_t)(0x12cdc444u));
  /* 12cbe772 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbe774 call 0x12cb3270 */
  push32(0x12cbe779u); f_12cb3270();
  /* 12cbe779 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe77c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbe77f jne 0x12cbe782 */
  if (!C.zf) goto L_12cbe782;
  /* 12cbe781 int3  */
  x86_unimpl("int3 @ 0x12cbe781");
L_12cbe782:;
  /* 12cbe782 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbe784 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbe786 jne 0x12cbe75e */
  if (!C.zf) goto L_12cbe75e;
  /* 12cbe788 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbe78b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12cbe78e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 12cbe791 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cbe793 je 0x12cbe7a1 */
  if (C.zf) goto L_12cbe7a1;
  /* 12cbe795 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbe798 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 12cbe79f jmp 0x12cbe7c8 */
  goto L_12cbe7c8;
L_12cbe7a1:;
  /* 12cbe7a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbe7a4 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbe7a5 call 0x12cbcfc0 */
  push32(0x12cbe7aau); f_12cbcfc0();
  /* 12cbe7aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe7ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbe7b0 push edx */
  push32((uint32_t)(EDX));
  /* 12cbe7b1 call 0x12cbe7e0 */
  push32(0x12cbe7b6u); f_12cbe7e0();
  /* 12cbe7b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe7b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cbe7bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbe7bf push eax */
  push32((uint32_t)(EAX));
  /* 12cbe7c0 call 0x12cbd030 */
  push32(0x12cbe7c5u); f_12cbd030();
  /* 12cbe7c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cbe7c8:;
  /* 12cbe7c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbe7cb pop edi */
  EDI = (pop32());
  /* 12cbe7cc pop esi */
  ESI = (pop32());
  /* 12cbe7cd pop ebx */
  EBX = (pop32());
  /* 12cbe7ce mov esp, ebp */
  ESP = (EBP);
  /* 12cbe7d0 pop ebp */
  EBP = (pop32());
  /* 12cbe7d1 ret  */
  ESPCHK(0x12cbe750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e7e0 @ 0x12cbe7e0 (190 bytes, 67 insns) */
void f_12cbe7e0(void) {
  FTRACE(0x12cbe7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbe7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbe7e1 mov ebp, esp */
  EBP = (ESP);
  /* 12cbe7e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbe7e6 push ebx */
  push32((uint32_t)(EBX));
  /* 12cbe7e7 push esi */
  push32((uint32_t)(ESI));
  /* 12cbe7e8 push edi */
  push32((uint32_t)(EDI));
  /* 12cbe7e9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12cbe7f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbe7f3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12cbe7f6:;
  /* 12cbe7f6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbe7fa jne 0x12cbe81a */
  if (!C.zf) goto L_12cbe81a;
  /* 12cbe7fc push 0x12cdc2f4 */
  push32((uint32_t)(0x12cdc2f4u));
  /* 12cbe801 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbe803 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 12cbe805 push 0x12cdc444 */
  push32((uint32_t)(0x12cdc444u));
  /* 12cbe80a push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbe80c call 0x12cb3270 */
  push32(0x12cbe811u); f_12cb3270();
  /* 12cbe811 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe814 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbe817 jne 0x12cbe81a */
  if (!C.zf) goto L_12cbe81a;
  /* 12cbe819 int3  */
  x86_unimpl("int3 @ 0x12cbe819");
L_12cbe81a:;
  /* 12cbe81a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbe81c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cbe81e jne 0x12cbe7f6 */
  if (!C.zf) goto L_12cbe7f6;
  /* 12cbe820 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbe823 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12cbe826 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 12cbe82b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbe82d je 0x12cbe88a */
  if (C.zf) goto L_12cbe88a;
  /* 12cbe82f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbe832 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbe833 call 0x12cbdae0 */
  push32(0x12cbe838u); f_12cbdae0();
  /* 12cbe838 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe83b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cbe83e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbe841 push edx */
  push32((uint32_t)(EDX));
  /* 12cbe842 call 0x12cc0e60 */
  push32(0x12cbe847u); f_12cc0e60();
  /* 12cbe847 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe84a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbe84d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12cbe850 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbe851 call 0x12cc0d30 */
  push32(0x12cbe856u); f_12cc0d30();
  /* 12cbe856 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe859 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbe85b jge 0x12cbe866 */
  if ((C.sf==C.of)) goto L_12cbe866;
  /* 12cbe85d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12cbe864 jmp 0x12cbe88a */
  goto L_12cbe88a;
L_12cbe866:;
  /* 12cbe866 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbe869 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbe86d je 0x12cbe88a */
  if (C.zf) goto L_12cbe88a;
  /* 12cbe86f push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbe871 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbe874 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12cbe877 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbe878 call 0x12cb4c40 */
  push32(0x12cbe87du); f_12cb4c40();
  /* 12cbe87d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe880 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbe883 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_12cbe88a:;
  /* 12cbe88a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbe88d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 12cbe894 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbe897 pop edi */
  EDI = (pop32());
  /* 12cbe898 pop esi */
  ESI = (pop32());
  /* 12cbe899 pop ebx */
  EBX = (pop32());
  /* 12cbe89a mov esp, ebp */
  ESP = (EBP);
  /* 12cbe89c pop ebp */
  EBP = (pop32());
  /* 12cbe89d ret  */
  ESPCHK(0x12cbe7e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e8a0 @ 0x12cbe8a0 (210 bytes, 63 insns) */
void f_12cbe8a0(void) {
  FTRACE(0x12cbe8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbe8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbe8a1 mov ebp, esp */
  EBP = (ESP);
  /* 12cbe8a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbe8a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbe8a7 cmp eax, dword ptr [0x12ce203c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ce203c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbe8ad jae 0x12cbe8d1 */
  if (!C.cf) goto L_12cbe8d1;
  /* 12cbe8af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbe8b2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12cbe8b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbe8b8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12cbe8bb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cbe8be mov eax, dword ptr [ecx*4 + 0x12ce1f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12ce1f00)));
  /* 12cbe8c5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12cbe8ca and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12cbe8cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cbe8cf jne 0x12cbe8e4 */
  if (!C.zf) goto L_12cbe8e4;
L_12cbe8d1:;
  /* 12cbe8d1 call 0x12cbc080 */
  push32(0x12cbe8d6u); f_12cbc080();
  /* 12cbe8d6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12cbe8dc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cbe8df jmp 0x12cbe96e */
  goto L_12cbe96e;
L_12cbe8e4:;
  /* 12cbe8e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbe8e7 push edx */
  push32((uint32_t)(EDX));
  /* 12cbe8e8 call 0x12cbd8a0 */
  push32(0x12cbe8edu); f_12cbd8a0();
  /* 12cbe8ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe8f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbe8f3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12cbe8f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbe8f9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12cbe8fc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cbe8ff mov edx, dword ptr [eax*4 + 0x12ce1f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12ce1f00)));
  /* 12cbe906 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12cbe90b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12cbe90e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbe910 je 0x12cbe94d */
  if (C.zf) goto L_12cbe94d;
  /* 12cbe912 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbe915 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbe916 call 0x12cbd720 */
  push32(0x12cbe91bu); f_12cbd720();
  /* 12cbe91b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe91e push eax */
  push32((uint32_t)(EAX));
  /* 12cbe91f call dword ptr [0x12ce32b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32b0))), 0x12cbe925u);
  /* 12cbe925 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbe927 jne 0x12cbe934 */
  if (!C.zf) goto L_12cbe934;
  /* 12cbe929 call dword ptr [0x12ce3348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3348))), 0x12cbe92fu);
  /* 12cbe92f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cbe932 jmp 0x12cbe93b */
  goto L_12cbe93b;
L_12cbe934:;
  /* 12cbe934 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12cbe93b:;
  /* 12cbe93b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbe93f jne 0x12cbe943 */
  if (!C.zf) goto L_12cbe943;
  /* 12cbe941 jmp 0x12cbe95f */
  goto L_12cbe95f;
L_12cbe943:;
  /* 12cbe943 call 0x12cbc090 */
  push32(0x12cbe948u); f_12cbc090();
  /* 12cbe948 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbe94b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12cbe94d:;
  /* 12cbe94d call 0x12cbc080 */
  push32(0x12cbe952u); f_12cbc080();
  /* 12cbe952 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12cbe958 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12cbe95f:;
  /* 12cbe95f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbe962 push eax */
  push32((uint32_t)(EAX));
  /* 12cbe963 call 0x12cbd930 */
  push32(0x12cbe968u); f_12cbd930();
  /* 12cbe968 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe96b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12cbe96e:;
  /* 12cbe96e mov esp, ebp */
  ESP = (EBP);
  /* 12cbe970 pop ebp */
  EBP = (pop32());
  /* 12cbe971 ret  */
  ESPCHK(0x12cbe8a0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x12cbe980 (219 bytes, 64 insns) */
void f_12cbe980(void) {
  FTRACE(0x12cbe980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbe980 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbe981 mov ebp, esp */
  EBP = (ESP);
  /* 12cbe983 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbe984 cmp dword ptr [0x12ce0724], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0724))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbe98b je 0x12cbea21 */
  if (C.zf) goto L_12cbea21;
  /* 12cbe991 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12cbe993 push 0x12cdc460 */
  push32((uint32_t)(0x12cdc460u));
  /* 12cbe998 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbe99a push 0xac */
  push32((uint32_t)(0xacu));
  /* 12cbe99f push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbe9a1 call 0x12cb45c0 */
  push32(0x12cbe9a6u); f_12cb45c0();
  /* 12cbe9a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe9a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cbe9ac cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbe9b0 jne 0x12cbe9bc */
  if (!C.zf) goto L_12cbe9bc;
  /* 12cbe9b2 mov eax, 1 */
  EAX = (0x1u);
  /* 12cbe9b7 jmp 0x12cbea57 */
  goto L_12cbea57;
L_12cbe9bc:;
  /* 12cbe9bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbe9bf push eax */
  push32((uint32_t)(EAX));
  /* 12cbe9c0 call 0x12cbea60 */
  push32(0x12cbe9c5u); f_12cbea60();
  /* 12cbe9c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe9c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbe9ca je 0x12cbe9ed */
  if (C.zf) goto L_12cbe9ed;
  /* 12cbe9cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbe9cf push ecx */
  push32((uint32_t)(ECX));
  /* 12cbe9d0 call 0x12cbeff0 */
  push32(0x12cbe9d5u); f_12cbeff0();
  /* 12cbe9d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe9d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbe9da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbe9dd push edx */
  push32((uint32_t)(EDX));
  /* 12cbe9de call 0x12cb4c40 */
  push32(0x12cbe9e3u); f_12cb4c40();
  /* 12cbe9e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbe9e6 mov eax, 1 */
  EAX = (0x1u);
  /* 12cbe9eb jmp 0x12cbea57 */
  goto L_12cbea57;
L_12cbe9ed:;
  /* 12cbe9ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbe9f0 mov dword ptr [0x12cdfc98], eax */
  w32((uint32_t)(0x12cdfc98), (EAX));
  /* 12cbe9f5 mov ecx, dword ptr [0x12ce0744] */
  ECX = (r32((uint32_t)(0x12ce0744)));
  /* 12cbe9fb push ecx */
  push32((uint32_t)(ECX));
  /* 12cbe9fc call 0x12cbeff0 */
  push32(0x12cbea01u); f_12cbeff0();
  /* 12cbea01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbea04 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbea06 mov edx, dword ptr [0x12ce0744] */
  EDX = (r32((uint32_t)(0x12ce0744)));
  /* 12cbea0c push edx */
  push32((uint32_t)(EDX));
  /* 12cbea0d call 0x12cb4c40 */
  push32(0x12cbea12u); f_12cb4c40();
  /* 12cbea12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbea15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbea18 mov dword ptr [0x12ce0744], eax */
  w32((uint32_t)(0x12ce0744), (EAX));
  /* 12cbea1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbea1f jmp 0x12cbea57 */
  goto L_12cbea57;
L_12cbea21:;
  /* 12cbea21 mov dword ptr [0x12cdfc98], 0x12cdfca0 */
  w32((uint32_t)(0x12cdfc98), (0x12cdfca0u));
  /* 12cbea2b mov ecx, dword ptr [0x12ce0744] */
  ECX = (r32((uint32_t)(0x12ce0744)));
  /* 12cbea31 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbea32 call 0x12cbeff0 */
  push32(0x12cbea37u); f_12cbeff0();
  /* 12cbea37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbea3a push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbea3c mov edx, dword ptr [0x12ce0744] */
  EDX = (r32((uint32_t)(0x12ce0744)));
  /* 12cbea42 push edx */
  push32((uint32_t)(EDX));
  /* 12cbea43 call 0x12cb4c40 */
  push32(0x12cbea48u); f_12cb4c40();
  /* 12cbea48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbea4b mov dword ptr [0x12ce0744], 0 */
  w32((uint32_t)(0x12ce0744), (0x0u));
  /* 12cbea55 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cbea57:;
  /* 12cbea57 mov esp, ebp */
  ESP = (EBP);
  /* 12cbea59 pop ebp */
  EBP = (pop32());
  /* 12cbea5a ret  */
  ESPCHK(0x12cbe980u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea60 @ 0x12cbea60 (1423 bytes, 533 insns) */
void f_12cbea60(void) {
  FTRACE(0x12cbea60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbea60 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbea61 mov ebp, esp */
  EBP = (ESP);
  /* 12cbea63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbea66 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12cbea6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbea6f mov ax, word ptr [0x12ce077e] */
  AX = (r16((uint32_t)(0x12ce077e)));
  /* 12cbea75 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cbea78 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbea7a mov cx, word ptr [0x12ce0780] */
  CX = (r16((uint32_t)(0x12ce0780)));
  /* 12cbea81 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cbea84 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbea88 jne 0x12cbea92 */
  if (!C.zf) goto L_12cbea92;
  /* 12cbea8a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cbea8d jmp 0x12cbefeb */
  goto L_12cbefeb;
L_12cbea92:;
  /* 12cbea92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbea95 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbea98 push edx */
  push32((uint32_t)(EDX));
  /* 12cbea99 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 12cbea9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbea9e push eax */
  push32((uint32_t)(EAX));
  /* 12cbea9f push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbeaa1 call 0x12cc2370 */
  push32(0x12cbeaa6u); f_12cc2370();
  /* 12cbeaa6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbeaa9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbeaac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbeaae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbeab1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbeab4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbeab7 push edx */
  push32((uint32_t)(EDX));
  /* 12cbeab8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 12cbeaba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbeabd push eax */
  push32((uint32_t)(EAX));
  /* 12cbeabe push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbeac0 call 0x12cc2370 */
  push32(0x12cbeac5u); f_12cc2370();
  /* 12cbeac5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbeac8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbeacb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbeacd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbead0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbead3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbead6 push edx */
  push32((uint32_t)(EDX));
  /* 12cbead7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 12cbead9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbeadc push eax */
  push32((uint32_t)(EAX));
  /* 12cbeadd push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbeadf call 0x12cc2370 */
  push32(0x12cbeae4u); f_12cc2370();
  /* 12cbeae4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbeae7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbeaea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbeaec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbeaef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbeaf2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbeaf5 push edx */
  push32((uint32_t)(EDX));
  /* 12cbeaf6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 12cbeaf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbeafb push eax */
  push32((uint32_t)(EAX));
  /* 12cbeafc push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbeafe call 0x12cc2370 */
  push32(0x12cbeb03u); f_12cc2370();
  /* 12cbeb03 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbeb06 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbeb09 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbeb0b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbeb0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbeb11 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbeb14 push edx */
  push32((uint32_t)(EDX));
  /* 12cbeb15 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 12cbeb17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbeb1a push eax */
  push32((uint32_t)(EAX));
  /* 12cbeb1b push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbeb1d call 0x12cc2370 */
  push32(0x12cbeb22u); f_12cc2370();
  /* 12cbeb22 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbeb25 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbeb28 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbeb2a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbeb2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbeb30 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbeb33 push edx */
  push32((uint32_t)(EDX));
  /* 12cbeb34 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 12cbeb36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbeb39 push eax */
  push32((uint32_t)(EAX));
  /* 12cbeb3a push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbeb3c call 0x12cc2370 */
  push32(0x12cbeb41u); f_12cc2370();
  /* 12cbeb41 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbeb44 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbeb47 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbeb49 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbeb4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbeb4f push edx */
  push32((uint32_t)(EDX));
  /* 12cbeb50 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 12cbeb52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbeb55 push eax */
  push32((uint32_t)(EAX));
  /* 12cbeb56 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbeb58 call 0x12cc2370 */
  push32(0x12cbeb5du); f_12cc2370();
  /* 12cbeb5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbeb60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbeb63 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbeb65 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbeb68 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbeb6b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbeb6e push edx */
  push32((uint32_t)(EDX));
  /* 12cbeb6f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 12cbeb71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbeb74 push eax */
  push32((uint32_t)(EAX));
  /* 12cbeb75 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbeb77 call 0x12cc2370 */
  push32(0x12cbeb7cu); f_12cc2370();
  /* 12cbeb7c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbeb7f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbeb82 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbeb84 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbeb87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbeb8a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbeb8d push edx */
  push32((uint32_t)(EDX));
  /* 12cbeb8e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 12cbeb90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbeb93 push eax */
  push32((uint32_t)(EAX));
  /* 12cbeb94 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbeb96 call 0x12cc2370 */
  push32(0x12cbeb9bu); f_12cc2370();
  /* 12cbeb9b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbeb9e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbeba1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbeba3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbeba6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbeba9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbebac push edx */
  push32((uint32_t)(EDX));
  /* 12cbebad push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 12cbebaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbebb2 push eax */
  push32((uint32_t)(EAX));
  /* 12cbebb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbebb5 call 0x12cc2370 */
  push32(0x12cbebbau); f_12cc2370();
  /* 12cbebba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbebbd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbebc0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbebc2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbebc5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbebc8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbebcb push edx */
  push32((uint32_t)(EDX));
  /* 12cbebcc push 0x2d */
  push32((uint32_t)(0x2du));
  /* 12cbebce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbebd1 push eax */
  push32((uint32_t)(EAX));
  /* 12cbebd2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbebd4 call 0x12cc2370 */
  push32(0x12cbebd9u); f_12cc2370();
  /* 12cbebd9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbebdc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbebdf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbebe1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbebe4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbebe7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbebea push edx */
  push32((uint32_t)(EDX));
  /* 12cbebeb push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 12cbebed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbebf0 push eax */
  push32((uint32_t)(EAX));
  /* 12cbebf1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbebf3 call 0x12cc2370 */
  push32(0x12cbebf8u); f_12cc2370();
  /* 12cbebf8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbebfb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbebfe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbec00 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbec03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbec06 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbec09 push edx */
  push32((uint32_t)(EDX));
  /* 12cbec0a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 12cbec0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbec0f push eax */
  push32((uint32_t)(EAX));
  /* 12cbec10 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbec12 call 0x12cc2370 */
  push32(0x12cbec17u); f_12cc2370();
  /* 12cbec17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbec1a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbec1d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbec1f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbec22 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbec25 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbec28 push edx */
  push32((uint32_t)(EDX));
  /* 12cbec29 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12cbec2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbec2e push eax */
  push32((uint32_t)(EAX));
  /* 12cbec2f push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbec31 call 0x12cc2370 */
  push32(0x12cbec36u); f_12cc2370();
  /* 12cbec36 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbec39 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbec3c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbec3e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbec41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbec44 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbec47 push edx */
  push32((uint32_t)(EDX));
  /* 12cbec48 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 12cbec4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbec4d push eax */
  push32((uint32_t)(EAX));
  /* 12cbec4e push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbec50 call 0x12cc2370 */
  push32(0x12cbec55u); f_12cc2370();
  /* 12cbec55 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbec58 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbec5b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbec5d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbec60 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbec63 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbec66 push edx */
  push32((uint32_t)(EDX));
  /* 12cbec67 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 12cbec69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbec6c push eax */
  push32((uint32_t)(EAX));
  /* 12cbec6d push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbec6f call 0x12cc2370 */
  push32(0x12cbec74u); f_12cc2370();
  /* 12cbec74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbec77 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbec7a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbec7c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbec7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbec82 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbec85 push edx */
  push32((uint32_t)(EDX));
  /* 12cbec86 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 12cbec88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbec8b push eax */
  push32((uint32_t)(EAX));
  /* 12cbec8c push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbec8e call 0x12cc2370 */
  push32(0x12cbec93u); f_12cc2370();
  /* 12cbec93 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbec96 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbec99 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbec9b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbec9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbeca1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbeca4 push edx */
  push32((uint32_t)(EDX));
  /* 12cbeca5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 12cbeca7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbecaa push eax */
  push32((uint32_t)(EAX));
  /* 12cbecab push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbecad call 0x12cc2370 */
  push32(0x12cbecb2u); f_12cc2370();
  /* 12cbecb2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbecb5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbecb8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbecba mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbecbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbecc0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbecc3 push edx */
  push32((uint32_t)(EDX));
  /* 12cbecc4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12cbecc6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbecc9 push eax */
  push32((uint32_t)(EAX));
  /* 12cbecca push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbeccc call 0x12cc2370 */
  push32(0x12cbecd1u); f_12cc2370();
  /* 12cbecd1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbecd4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbecd7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbecd9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbecdc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbecdf add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbece2 push edx */
  push32((uint32_t)(EDX));
  /* 12cbece3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 12cbece5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbece8 push eax */
  push32((uint32_t)(EAX));
  /* 12cbece9 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbeceb call 0x12cc2370 */
  push32(0x12cbecf0u); f_12cc2370();
  /* 12cbecf0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbecf3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbecf6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbecf8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbecfb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbecfe add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbed01 push edx */
  push32((uint32_t)(EDX));
  /* 12cbed02 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12cbed04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbed07 push eax */
  push32((uint32_t)(EAX));
  /* 12cbed08 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbed0a call 0x12cc2370 */
  push32(0x12cbed0fu); f_12cc2370();
  /* 12cbed0f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbed12 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbed15 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbed17 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbed1a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbed1d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbed20 push edx */
  push32((uint32_t)(EDX));
  /* 12cbed21 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 12cbed23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbed26 push eax */
  push32((uint32_t)(EAX));
  /* 12cbed27 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbed29 call 0x12cc2370 */
  push32(0x12cbed2eu); f_12cc2370();
  /* 12cbed2e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbed31 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbed34 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbed36 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbed39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbed3c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbed3f push edx */
  push32((uint32_t)(EDX));
  /* 12cbed40 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 12cbed42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbed45 push eax */
  push32((uint32_t)(EAX));
  /* 12cbed46 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbed48 call 0x12cc2370 */
  push32(0x12cbed4du); f_12cc2370();
  /* 12cbed4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbed50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbed53 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbed55 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbed58 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbed5b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbed5e push edx */
  push32((uint32_t)(EDX));
  /* 12cbed5f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 12cbed61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbed64 push eax */
  push32((uint32_t)(EAX));
  /* 12cbed65 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbed67 call 0x12cc2370 */
  push32(0x12cbed6cu); f_12cc2370();
  /* 12cbed6c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbed6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbed72 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbed74 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbed77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbed7a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbed7d push edx */
  push32((uint32_t)(EDX));
  /* 12cbed7e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 12cbed80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbed83 push eax */
  push32((uint32_t)(EAX));
  /* 12cbed84 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbed86 call 0x12cc2370 */
  push32(0x12cbed8bu); f_12cc2370();
  /* 12cbed8b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbed8e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbed91 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbed93 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbed96 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbed99 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbed9c push edx */
  push32((uint32_t)(EDX));
  /* 12cbed9d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 12cbed9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbeda2 push eax */
  push32((uint32_t)(EAX));
  /* 12cbeda3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbeda5 call 0x12cc2370 */
  push32(0x12cbedaau); f_12cc2370();
  /* 12cbedaa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbedad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbedb0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbedb2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbedb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbedb8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbedbb push edx */
  push32((uint32_t)(EDX));
  /* 12cbedbc push 0x38 */
  push32((uint32_t)(0x38u));
  /* 12cbedbe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbedc1 push eax */
  push32((uint32_t)(EAX));
  /* 12cbedc2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbedc4 call 0x12cc2370 */
  push32(0x12cbedc9u); f_12cc2370();
  /* 12cbedc9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbedcc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbedcf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbedd1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbedd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbedd7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbedda push edx */
  push32((uint32_t)(EDX));
  /* 12cbeddb push 0x39 */
  push32((uint32_t)(0x39u));
  /* 12cbeddd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbede0 push eax */
  push32((uint32_t)(EAX));
  /* 12cbede1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbede3 call 0x12cc2370 */
  push32(0x12cbede8u); f_12cc2370();
  /* 12cbede8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbedeb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbedee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbedf0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbedf3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbedf6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbedf9 push edx */
  push32((uint32_t)(EDX));
  /* 12cbedfa push 0x3a */
  push32((uint32_t)(0x3au));
  /* 12cbedfc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbedff push eax */
  push32((uint32_t)(EAX));
  /* 12cbee00 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbee02 call 0x12cc2370 */
  push32(0x12cbee07u); f_12cc2370();
  /* 12cbee07 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbee0a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbee0d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbee0f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbee12 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbee15 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbee18 push edx */
  push32((uint32_t)(EDX));
  /* 12cbee19 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 12cbee1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbee1e push eax */
  push32((uint32_t)(EAX));
  /* 12cbee1f push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbee21 call 0x12cc2370 */
  push32(0x12cbee26u); f_12cc2370();
  /* 12cbee26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbee29 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbee2c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbee2e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbee31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbee34 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbee37 push edx */
  push32((uint32_t)(EDX));
  /* 12cbee38 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 12cbee3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbee3d push eax */
  push32((uint32_t)(EAX));
  /* 12cbee3e push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbee40 call 0x12cc2370 */
  push32(0x12cbee45u); f_12cc2370();
  /* 12cbee45 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbee48 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbee4b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbee4d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbee50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbee53 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbee56 push edx */
  push32((uint32_t)(EDX));
  /* 12cbee57 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12cbee59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbee5c push eax */
  push32((uint32_t)(EAX));
  /* 12cbee5d push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbee5f call 0x12cc2370 */
  push32(0x12cbee64u); f_12cc2370();
  /* 12cbee64 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbee67 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbee6a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbee6c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbee6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbee72 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbee78 push edx */
  push32((uint32_t)(EDX));
  /* 12cbee79 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 12cbee7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbee7e push eax */
  push32((uint32_t)(EAX));
  /* 12cbee7f push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbee81 call 0x12cc2370 */
  push32(0x12cbee86u); f_12cc2370();
  /* 12cbee86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbee89 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbee8c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbee8e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbee91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbee94 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbee9a push edx */
  push32((uint32_t)(EDX));
  /* 12cbee9b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12cbee9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbeea0 push eax */
  push32((uint32_t)(EAX));
  /* 12cbeea1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbeea3 call 0x12cc2370 */
  push32(0x12cbeea8u); f_12cc2370();
  /* 12cbeea8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbeeab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbeeae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbeeb0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbeeb3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbeeb6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbeebc push edx */
  push32((uint32_t)(EDX));
  /* 12cbeebd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12cbeebf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbeec2 push eax */
  push32((uint32_t)(EAX));
  /* 12cbeec3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbeec5 call 0x12cc2370 */
  push32(0x12cbeecau); f_12cc2370();
  /* 12cbeeca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbeecd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbeed0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbeed2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbeed5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbeed8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbeede push edx */
  push32((uint32_t)(EDX));
  /* 12cbeedf push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12cbeee1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbeee4 push eax */
  push32((uint32_t)(EAX));
  /* 12cbeee5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbeee7 call 0x12cc2370 */
  push32(0x12cbeeecu); f_12cc2370();
  /* 12cbeeec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbeeef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbeef2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbeef4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbeef7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbeefa add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbef00 push edx */
  push32((uint32_t)(EDX));
  /* 12cbef01 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12cbef03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbef06 push eax */
  push32((uint32_t)(EAX));
  /* 12cbef07 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbef09 call 0x12cc2370 */
  push32(0x12cbef0eu); f_12cc2370();
  /* 12cbef0e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbef11 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbef14 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbef16 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbef19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbef1c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbef22 push edx */
  push32((uint32_t)(EDX));
  /* 12cbef23 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 12cbef25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbef28 push eax */
  push32((uint32_t)(EAX));
  /* 12cbef29 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbef2b call 0x12cc2370 */
  push32(0x12cbef30u); f_12cc2370();
  /* 12cbef30 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbef33 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbef36 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbef38 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbef3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbef3e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbef44 push edx */
  push32((uint32_t)(EDX));
  /* 12cbef45 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 12cbef47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbef4a push eax */
  push32((uint32_t)(EAX));
  /* 12cbef4b push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbef4d call 0x12cc2370 */
  push32(0x12cbef52u); f_12cc2370();
  /* 12cbef52 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbef55 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbef58 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbef5a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbef5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbef60 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbef66 push edx */
  push32((uint32_t)(EDX));
  /* 12cbef67 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 12cbef69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbef6c push eax */
  push32((uint32_t)(EAX));
  /* 12cbef6d push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbef6f call 0x12cc2370 */
  push32(0x12cbef74u); f_12cc2370();
  /* 12cbef74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbef77 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbef7a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbef7c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbef7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbef82 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbef88 push edx */
  push32((uint32_t)(EDX));
  /* 12cbef89 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 12cbef8b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbef8e push eax */
  push32((uint32_t)(EAX));
  /* 12cbef8f push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbef91 call 0x12cc2370 */
  push32(0x12cbef96u); f_12cc2370();
  /* 12cbef96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbef99 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbef9c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbef9e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbefa1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbefa4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbefaa push edx */
  push32((uint32_t)(EDX));
  /* 12cbefab push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12cbefad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbefb0 push eax */
  push32((uint32_t)(EAX));
  /* 12cbefb1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbefb3 call 0x12cc2370 */
  push32(0x12cbefb8u); f_12cc2370();
  /* 12cbefb8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbefbb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbefbe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbefc0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbefc3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbefc6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbefcc push edx */
  push32((uint32_t)(EDX));
  /* 12cbefcd push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 12cbefd2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbefd5 push eax */
  push32((uint32_t)(EAX));
  /* 12cbefd6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbefd8 call 0x12cc2370 */
  push32(0x12cbefddu); f_12cc2370();
  /* 12cbefdd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbefe0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cbefe3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbefe5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12cbefe8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_12cbefeb:;
  /* 12cbefeb mov esp, ebp */
  ESP = (EBP);
  /* 12cbefed pop ebp */
  EBP = (pop32());
  /* 12cbefee ret  */
  ESPCHK(0x12cbea60u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x12cbeff0 (779 bytes, 265 insns) */
void f_12cbeff0(void) {
  FTRACE(0x12cbeff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbeff0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbeff1 mov ebp, esp */
  EBP = (ESP);
  /* 12cbeff3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbeff7 jne 0x12cbeffe */
  if (!C.zf) goto L_12cbeffe;
  /* 12cbeff9 jmp 0x12cbf2f9 */
  goto L_12cbf2f9;
L_12cbeffe:;
  /* 12cbeffe push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf000 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf003 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cbf006 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbf007 call 0x12cb4c40 */
  push32(0x12cbf00cu); f_12cb4c40();
  /* 12cbf00c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf00f push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf011 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf014 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12cbf017 push eax */
  push32((uint32_t)(EAX));
  /* 12cbf018 call 0x12cb4c40 */
  push32(0x12cbf01du); f_12cb4c40();
  /* 12cbf01d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf020 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf022 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf025 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12cbf028 push edx */
  push32((uint32_t)(EDX));
  /* 12cbf029 call 0x12cb4c40 */
  push32(0x12cbf02eu); f_12cb4c40();
  /* 12cbf02e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf031 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf033 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf036 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12cbf039 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbf03a call 0x12cb4c40 */
  push32(0x12cbf03fu); f_12cb4c40();
  /* 12cbf03f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf042 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf044 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf047 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12cbf04a push eax */
  push32((uint32_t)(EAX));
  /* 12cbf04b call 0x12cb4c40 */
  push32(0x12cbf050u); f_12cb4c40();
  /* 12cbf050 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf053 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf055 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf058 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12cbf05b push edx */
  push32((uint32_t)(EDX));
  /* 12cbf05c call 0x12cb4c40 */
  push32(0x12cbf061u); f_12cb4c40();
  /* 12cbf061 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf064 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf066 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf069 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cbf06b push ecx */
  push32((uint32_t)(ECX));
  /* 12cbf06c call 0x12cb4c40 */
  push32(0x12cbf071u); f_12cb4c40();
  /* 12cbf071 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf074 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf076 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf079 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 12cbf07c push eax */
  push32((uint32_t)(EAX));
  /* 12cbf07d call 0x12cb4c40 */
  push32(0x12cbf082u); f_12cb4c40();
  /* 12cbf082 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf085 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf087 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf08a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 12cbf08d push edx */
  push32((uint32_t)(EDX));
  /* 12cbf08e call 0x12cb4c40 */
  push32(0x12cbf093u); f_12cb4c40();
  /* 12cbf093 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf096 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf098 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf09b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 12cbf09e push ecx */
  push32((uint32_t)(ECX));
  /* 12cbf09f call 0x12cb4c40 */
  push32(0x12cbf0a4u); f_12cb4c40();
  /* 12cbf0a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf0a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf0a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf0ac mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 12cbf0af push eax */
  push32((uint32_t)(EAX));
  /* 12cbf0b0 call 0x12cb4c40 */
  push32(0x12cbf0b5u); f_12cb4c40();
  /* 12cbf0b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf0b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf0ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf0bd mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12cbf0c0 push edx */
  push32((uint32_t)(EDX));
  /* 12cbf0c1 call 0x12cb4c40 */
  push32(0x12cbf0c6u); f_12cb4c40();
  /* 12cbf0c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf0c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf0cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf0ce mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 12cbf0d1 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbf0d2 call 0x12cb4c40 */
  push32(0x12cbf0d7u); f_12cb4c40();
  /* 12cbf0d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf0da push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf0dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf0df mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12cbf0e2 push eax */
  push32((uint32_t)(EAX));
  /* 12cbf0e3 call 0x12cb4c40 */
  push32(0x12cbf0e8u); f_12cb4c40();
  /* 12cbf0e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf0eb push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf0ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf0f0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 12cbf0f3 push edx */
  push32((uint32_t)(EDX));
  /* 12cbf0f4 call 0x12cb4c40 */
  push32(0x12cbf0f9u); f_12cb4c40();
  /* 12cbf0f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf0fc push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf0fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf101 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 12cbf104 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbf105 call 0x12cb4c40 */
  push32(0x12cbf10au); f_12cb4c40();
  /* 12cbf10a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf10d push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf10f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf112 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12cbf115 push eax */
  push32((uint32_t)(EAX));
  /* 12cbf116 call 0x12cb4c40 */
  push32(0x12cbf11bu); f_12cb4c40();
  /* 12cbf11b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf11e push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf120 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf123 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 12cbf126 push edx */
  push32((uint32_t)(EDX));
  /* 12cbf127 call 0x12cb4c40 */
  push32(0x12cbf12cu); f_12cb4c40();
  /* 12cbf12c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf12f push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf131 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf134 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 12cbf137 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbf138 call 0x12cb4c40 */
  push32(0x12cbf13du); f_12cb4c40();
  /* 12cbf13d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf140 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf142 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf145 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 12cbf148 push eax */
  push32((uint32_t)(EAX));
  /* 12cbf149 call 0x12cb4c40 */
  push32(0x12cbf14eu); f_12cb4c40();
  /* 12cbf14e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf151 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf153 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf156 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12cbf159 push edx */
  push32((uint32_t)(EDX));
  /* 12cbf15a call 0x12cb4c40 */
  push32(0x12cbf15fu); f_12cb4c40();
  /* 12cbf15f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf162 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf164 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf167 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12cbf16a push ecx */
  push32((uint32_t)(ECX));
  /* 12cbf16b call 0x12cb4c40 */
  push32(0x12cbf170u); f_12cb4c40();
  /* 12cbf170 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf173 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf175 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf178 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 12cbf17b push eax */
  push32((uint32_t)(EAX));
  /* 12cbf17c call 0x12cb4c40 */
  push32(0x12cbf181u); f_12cb4c40();
  /* 12cbf181 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf184 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf186 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf189 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 12cbf18c push edx */
  push32((uint32_t)(EDX));
  /* 12cbf18d call 0x12cb4c40 */
  push32(0x12cbf192u); f_12cb4c40();
  /* 12cbf192 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf195 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf197 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf19a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 12cbf19d push ecx */
  push32((uint32_t)(ECX));
  /* 12cbf19e call 0x12cb4c40 */
  push32(0x12cbf1a3u); f_12cb4c40();
  /* 12cbf1a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf1a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf1a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf1ab mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 12cbf1ae push eax */
  push32((uint32_t)(EAX));
  /* 12cbf1af call 0x12cb4c40 */
  push32(0x12cbf1b4u); f_12cb4c40();
  /* 12cbf1b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf1b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf1b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf1bc mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 12cbf1bf push edx */
  push32((uint32_t)(EDX));
  /* 12cbf1c0 call 0x12cb4c40 */
  push32(0x12cbf1c5u); f_12cb4c40();
  /* 12cbf1c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf1c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf1ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf1cd mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 12cbf1d0 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbf1d1 call 0x12cb4c40 */
  push32(0x12cbf1d6u); f_12cb4c40();
  /* 12cbf1d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf1d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf1db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf1de mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 12cbf1e1 push eax */
  push32((uint32_t)(EAX));
  /* 12cbf1e2 call 0x12cb4c40 */
  push32(0x12cbf1e7u); f_12cb4c40();
  /* 12cbf1e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf1ea push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf1ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf1ef mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 12cbf1f2 push edx */
  push32((uint32_t)(EDX));
  /* 12cbf1f3 call 0x12cb4c40 */
  push32(0x12cbf1f8u); f_12cb4c40();
  /* 12cbf1f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf1fb push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf1fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf200 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 12cbf203 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbf204 call 0x12cb4c40 */
  push32(0x12cbf209u); f_12cb4c40();
  /* 12cbf209 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf20c push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf20e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf211 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 12cbf214 push eax */
  push32((uint32_t)(EAX));
  /* 12cbf215 call 0x12cb4c40 */
  push32(0x12cbf21au); f_12cb4c40();
  /* 12cbf21a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf21d push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf21f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf222 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 12cbf228 push edx */
  push32((uint32_t)(EDX));
  /* 12cbf229 call 0x12cb4c40 */
  push32(0x12cbf22eu); f_12cb4c40();
  /* 12cbf22e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf231 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf233 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf236 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 12cbf23c push ecx */
  push32((uint32_t)(ECX));
  /* 12cbf23d call 0x12cb4c40 */
  push32(0x12cbf242u); f_12cb4c40();
  /* 12cbf242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf245 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf247 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf24a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 12cbf250 push eax */
  push32((uint32_t)(EAX));
  /* 12cbf251 call 0x12cb4c40 */
  push32(0x12cbf256u); f_12cb4c40();
  /* 12cbf256 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf259 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf25b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf25e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 12cbf264 push edx */
  push32((uint32_t)(EDX));
  /* 12cbf265 call 0x12cb4c40 */
  push32(0x12cbf26au); f_12cb4c40();
  /* 12cbf26a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf26d push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf26f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf272 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 12cbf278 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbf279 call 0x12cb4c40 */
  push32(0x12cbf27eu); f_12cb4c40();
  /* 12cbf27e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf281 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf283 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf286 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 12cbf28c push eax */
  push32((uint32_t)(EAX));
  /* 12cbf28d call 0x12cb4c40 */
  push32(0x12cbf292u); f_12cb4c40();
  /* 12cbf292 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf295 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf297 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf29a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 12cbf2a0 push edx */
  push32((uint32_t)(EDX));
  /* 12cbf2a1 call 0x12cb4c40 */
  push32(0x12cbf2a6u); f_12cb4c40();
  /* 12cbf2a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf2a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf2ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf2ae mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12cbf2b4 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbf2b5 call 0x12cb4c40 */
  push32(0x12cbf2bau); f_12cb4c40();
  /* 12cbf2ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf2bd push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf2bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf2c2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12cbf2c8 push eax */
  push32((uint32_t)(EAX));
  /* 12cbf2c9 call 0x12cb4c40 */
  push32(0x12cbf2ceu); f_12cb4c40();
  /* 12cbf2ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf2d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf2d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf2d6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12cbf2dc push edx */
  push32((uint32_t)(EDX));
  /* 12cbf2dd call 0x12cb4c40 */
  push32(0x12cbf2e2u); f_12cb4c40();
  /* 12cbf2e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf2e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf2e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf2ea mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 12cbf2f0 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbf2f1 call 0x12cb4c40 */
  push32(0x12cbf2f6u); f_12cb4c40();
  /* 12cbf2f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cbf2f9:;
  /* 12cbf2f9 pop ebp */
  EBP = (pop32());
  /* 12cbf2fa ret  */
  ESPCHK(0x12cbeff0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f300 @ 0x12cbf300 (678 bytes, 180 insns) */
void f_12cbf300(void) {
  FTRACE(0x12cbf300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbf300 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbf301 mov ebp, esp */
  EBP = (ESP);
  /* 12cbf303 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbf306 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12cbf30d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbf30f mov ax, word ptr [0x12ce077a] */
  AX = (r16((uint32_t)(0x12ce077a)));
  /* 12cbf315 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cbf318 cmp dword ptr [0x12ce0720], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0720))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbf31f je 0x12cbf47a */
  if (C.zf) goto L_12cbf47a;
  /* 12cbf325 push 0x12ce0748 */
  push32((uint32_t)(0x12ce0748u));
  /* 12cbf32a push 0xe */
  push32((uint32_t)(0xeu));
  /* 12cbf32c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbf32f push ecx */
  push32((uint32_t)(ECX));
  /* 12cbf330 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbf332 call 0x12cc2370 */
  push32(0x12cbf337u); f_12cc2370();
  /* 12cbf337 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf33a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbf33d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12cbf33f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12cbf342 push 0x12ce074c */
  push32((uint32_t)(0x12ce074cu));
  /* 12cbf347 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12cbf349 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbf34c push eax */
  push32((uint32_t)(EAX));
  /* 12cbf34d push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbf34f call 0x12cc2370 */
  push32(0x12cbf354u); f_12cc2370();
  /* 12cbf354 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf357 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbf35a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbf35c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cbf35f push 0x12ce0750 */
  push32((uint32_t)(0x12ce0750u));
  /* 12cbf364 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12cbf366 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbf369 push edx */
  push32((uint32_t)(EDX));
  /* 12cbf36a push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbf36c call 0x12cc2370 */
  push32(0x12cbf371u); f_12cc2370();
  /* 12cbf371 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf374 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbf377 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbf379 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cbf37c mov edx, dword ptr [0x12ce0750] */
  EDX = (r32((uint32_t)(0x12ce0750)));
  /* 12cbf382 push edx */
  push32((uint32_t)(EDX));
  /* 12cbf383 call 0x12cbf5b0 */
  push32(0x12cbf388u); f_12cbf5b0();
  /* 12cbf388 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf38b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbf38f je 0x12cbf3e9 */
  if (C.zf) goto L_12cbf3e9;
  /* 12cbf391 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf393 mov eax, dword ptr [0x12ce0748] */
  EAX = (r32((uint32_t)(0x12ce0748)));
  /* 12cbf398 push eax */
  push32((uint32_t)(EAX));
  /* 12cbf399 call 0x12cb4c40 */
  push32(0x12cbf39eu); f_12cb4c40();
  /* 12cbf39e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf3a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf3a3 mov ecx, dword ptr [0x12ce074c] */
  ECX = (r32((uint32_t)(0x12ce074c)));
  /* 12cbf3a9 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbf3aa call 0x12cb4c40 */
  push32(0x12cbf3afu); f_12cb4c40();
  /* 12cbf3af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf3b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf3b4 mov edx, dword ptr [0x12ce0750] */
  EDX = (r32((uint32_t)(0x12ce0750)));
  /* 12cbf3ba push edx */
  push32((uint32_t)(EDX));
  /* 12cbf3bb call 0x12cb4c40 */
  push32(0x12cbf3c0u); f_12cb4c40();
  /* 12cbf3c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf3c3 mov dword ptr [0x12ce0748], 0 */
  w32((uint32_t)(0x12ce0748), (0x0u));
  /* 12cbf3cd mov dword ptr [0x12ce074c], 0 */
  w32((uint32_t)(0x12ce074c), (0x0u));
  /* 12cbf3d7 mov dword ptr [0x12ce0750], 0 */
  w32((uint32_t)(0x12ce0750), (0x0u));
  /* 12cbf3e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cbf3e4 jmp 0x12cbf5a2 */
  goto L_12cbf5a2;
L_12cbf3e9:;
  /* 12cbf3e9 mov eax, dword ptr [0x12cdfd88] */
  EAX = (r32((uint32_t)(0x12cdfd88)));
  /* 12cbf3ee cmp dword ptr [eax], 0x12cdfd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x12cdfd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbf3f4 je 0x12cbf430 */
  if (C.zf) goto L_12cbf430;
  /* 12cbf3f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf3f8 mov ecx, dword ptr [0x12cdfd88] */
  ECX = (r32((uint32_t)(0x12cdfd88)));
  /* 12cbf3fe mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cbf400 push edx */
  push32((uint32_t)(EDX));
  /* 12cbf401 call 0x12cb4c40 */
  push32(0x12cbf406u); f_12cb4c40();
  /* 12cbf406 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf409 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf40b mov eax, dword ptr [0x12cdfd88] */
  EAX = (r32((uint32_t)(0x12cdfd88)));
  /* 12cbf410 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cbf413 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbf414 call 0x12cb4c40 */
  push32(0x12cbf419u); f_12cb4c40();
  /* 12cbf419 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf41c push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf41e mov edx, dword ptr [0x12cdfd88] */
  EDX = (r32((uint32_t)(0x12cdfd88)));
  /* 12cbf424 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12cbf427 push eax */
  push32((uint32_t)(EAX));
  /* 12cbf428 call 0x12cb4c40 */
  push32(0x12cbf42du); f_12cb4c40();
  /* 12cbf42d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cbf430:;
  /* 12cbf430 mov ecx, dword ptr [0x12cdfd88] */
  ECX = (r32((uint32_t)(0x12cdfd88)));
  /* 12cbf436 mov edx, dword ptr [0x12ce0748] */
  EDX = (r32((uint32_t)(0x12ce0748)));
  /* 12cbf43c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12cbf43e mov eax, dword ptr [0x12cdfd88] */
  EAX = (r32((uint32_t)(0x12cdfd88)));
  /* 12cbf443 mov ecx, dword ptr [0x12ce074c] */
  ECX = (r32((uint32_t)(0x12ce074c)));
  /* 12cbf449 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12cbf44c mov edx, dword ptr [0x12cdfd88] */
  EDX = (r32((uint32_t)(0x12cdfd88)));
  /* 12cbf452 mov eax, dword ptr [0x12ce0750] */
  EAX = (r32((uint32_t)(0x12ce0750)));
  /* 12cbf457 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12cbf45a mov ecx, dword ptr [0x12cdfd88] */
  ECX = (r32((uint32_t)(0x12cdfd88)));
  /* 12cbf460 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cbf462 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cbf464 mov byte ptr [0x12cdeea8], al */
  w8((uint32_t)(0x12cdeea8), (AL));
  /* 12cbf469 mov dword ptr [0x12cdeeac], 1 */
  w32((uint32_t)(0x12cdeeac), (0x1u));
  /* 12cbf473 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbf475 jmp 0x12cbf5a2 */
  goto L_12cbf5a2;
L_12cbf47a:;
  /* 12cbf47a push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf47c mov ecx, dword ptr [0x12ce0748] */
  ECX = (r32((uint32_t)(0x12ce0748)));
  /* 12cbf482 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbf483 call 0x12cb4c40 */
  push32(0x12cbf488u); f_12cb4c40();
  /* 12cbf488 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf48b push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf48d mov edx, dword ptr [0x12ce074c] */
  EDX = (r32((uint32_t)(0x12ce074c)));
  /* 12cbf493 push edx */
  push32((uint32_t)(EDX));
  /* 12cbf494 call 0x12cb4c40 */
  push32(0x12cbf499u); f_12cb4c40();
  /* 12cbf499 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf49c push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf49e mov eax, dword ptr [0x12ce0750] */
  EAX = (r32((uint32_t)(0x12ce0750)));
  /* 12cbf4a3 push eax */
  push32((uint32_t)(EAX));
  /* 12cbf4a4 call 0x12cb4c40 */
  push32(0x12cbf4a9u); f_12cb4c40();
  /* 12cbf4a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf4ac mov dword ptr [0x12ce0748], 0 */
  w32((uint32_t)(0x12ce0748), (0x0u));
  /* 12cbf4b6 mov dword ptr [0x12ce074c], 0 */
  w32((uint32_t)(0x12ce074c), (0x0u));
  /* 12cbf4c0 mov dword ptr [0x12ce0750], 0 */
  w32((uint32_t)(0x12ce0750), (0x0u));
  /* 12cbf4ca push 0x88 */
  push32((uint32_t)(0x88u));
  /* 12cbf4cf push 0x12cdc46c */
  push32((uint32_t)(0x12cdc46cu));
  /* 12cbf4d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf4d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf4d8 call 0x12cb41b0 */
  push32(0x12cbf4ddu); f_12cb41b0();
  /* 12cbf4dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf4e0 mov ecx, dword ptr [0x12cdfd88] */
  ECX = (r32((uint32_t)(0x12cdfd88)));
  /* 12cbf4e6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12cbf4e8 mov edx, dword ptr [0x12cdfd88] */
  EDX = (r32((uint32_t)(0x12cdfd88)));
  /* 12cbf4ee cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbf4f1 jne 0x12cbf4fb */
  if (!C.zf) goto L_12cbf4fb;
  /* 12cbf4f3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cbf4f6 jmp 0x12cbf5a2 */
  goto L_12cbf5a2;
L_12cbf4fb:;
  /* 12cbf4fb push 0x12cdc43c */
  push32((uint32_t)(0x12cdc43cu));
  /* 12cbf500 mov eax, dword ptr [0x12cdfd88] */
  EAX = (r32((uint32_t)(0x12cdfd88)));
  /* 12cbf505 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12cbf507 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbf508 call 0x12cb7160 */
  push32(0x12cbf50du); f_12cb7160();
  /* 12cbf50d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf510 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 12cbf515 push 0x12cdc46c */
  push32((uint32_t)(0x12cdc46cu));
  /* 12cbf51a push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf51c push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf51e call 0x12cb41b0 */
  push32(0x12cbf523u); f_12cb41b0();
  /* 12cbf523 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf526 mov edx, dword ptr [0x12cdfd88] */
  EDX = (r32((uint32_t)(0x12cdfd88)));
  /* 12cbf52c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12cbf52f mov eax, dword ptr [0x12cdfd88] */
  EAX = (r32((uint32_t)(0x12cdfd88)));
  /* 12cbf534 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbf538 jne 0x12cbf53f */
  if (!C.zf) goto L_12cbf53f;
  /* 12cbf53a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cbf53d jmp 0x12cbf5a2 */
  goto L_12cbf5a2;
L_12cbf53f:;
  /* 12cbf53f mov ecx, dword ptr [0x12cdfd88] */
  ECX = (r32((uint32_t)(0x12cdfd88)));
  /* 12cbf545 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cbf548 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12cbf54b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 12cbf550 push 0x12cdc46c */
  push32((uint32_t)(0x12cdc46cu));
  /* 12cbf555 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf557 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf559 call 0x12cb41b0 */
  push32(0x12cbf55eu); f_12cb41b0();
  /* 12cbf55e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf561 mov ecx, dword ptr [0x12cdfd88] */
  ECX = (r32((uint32_t)(0x12cdfd88)));
  /* 12cbf567 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12cbf56a mov edx, dword ptr [0x12cdfd88] */
  EDX = (r32((uint32_t)(0x12cdfd88)));
  /* 12cbf570 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbf574 jne 0x12cbf57b */
  if (!C.zf) goto L_12cbf57b;
  /* 12cbf576 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cbf579 jmp 0x12cbf5a2 */
  goto L_12cbf5a2;
L_12cbf57b:;
  /* 12cbf57b mov eax, dword ptr [0x12cdfd88] */
  EAX = (r32((uint32_t)(0x12cdfd88)));
  /* 12cbf580 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12cbf583 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12cbf586 mov edx, dword ptr [0x12cdfd88] */
  EDX = (r32((uint32_t)(0x12cdfd88)));
  /* 12cbf58c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cbf58e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12cbf590 mov byte ptr [0x12cdeea8], cl */
  w8((uint32_t)(0x12cdeea8), (CL));
  /* 12cbf596 mov dword ptr [0x12cdeeac], 1 */
  w32((uint32_t)(0x12cdeeac), (0x1u));
  /* 12cbf5a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cbf5a2:;
  /* 12cbf5a2 mov esp, ebp */
  ESP = (EBP);
  /* 12cbf5a4 pop ebp */
  EBP = (pop32());
  /* 12cbf5a5 ret  */
  ESPCHK(0x12cbf300u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12cbf5b0 (125 bytes, 49 insns) */
void f_12cbf5b0(void) {
  FTRACE(0x12cbf5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbf5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbf5b1 mov ebp, esp */
  EBP = (ESP);
  /* 12cbf5b3 push ecx */
  push32((uint32_t)(ECX));
L_12cbf5b4:;
  /* 12cbf5b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf5b7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cbf5ba test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cbf5bc je 0x12cbf629 */
  if (C.zf) goto L_12cbf629;
  /* 12cbf5be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf5c1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12cbf5c4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbf5c7 jl 0x12cbf5ed */
  if ((C.sf!=C.of)) goto L_12cbf5ed;
  /* 12cbf5c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf5cc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cbf5cf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbf5d2 jg 0x12cbf5ed */
  if ((!C.zf&&C.sf==C.of)) goto L_12cbf5ed;
  /* 12cbf5d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf5d7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cbf5da sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbf5dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf5e0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12cbf5e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf5e5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf5e8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12cbf5eb jmp 0x12cbf627 */
  goto L_12cbf627;
L_12cbf5ed:;
  /* 12cbf5ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf5f0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cbf5f3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbf5f6 jne 0x12cbf61e */
  if (!C.zf) goto L_12cbf61e;
  /* 12cbf5f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf5fb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cbf5fe:;
  /* 12cbf5fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbf601 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbf604 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12cbf607 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12cbf609 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbf60c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf60f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cbf612 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbf615 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12cbf618 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbf61a jne 0x12cbf5fe */
  if (!C.zf) goto L_12cbf5fe;
  /* 12cbf61c jmp 0x12cbf627 */
  goto L_12cbf627;
L_12cbf61e:;
  /* 12cbf61e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf621 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf624 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12cbf627:;
  /* 12cbf627 jmp 0x12cbf5b4 */
  goto L_12cbf5b4;
L_12cbf629:;
  /* 12cbf629 mov esp, ebp */
  ESP = (EBP);
  /* 12cbf62b pop ebp */
  EBP = (pop32());
  /* 12cbf62c ret  */
  ESPCHK(0x12cbf5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f630 @ 0x12cbf630 (304 bytes, 85 insns) */
void f_12cbf630(void) {
  FTRACE(0x12cbf630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbf630 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbf631 mov ebp, esp */
  EBP = (ESP);
  /* 12cbf633 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbf634 cmp dword ptr [0x12ce071c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce071c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbf63b je 0x12cbf6fc */
  if (C.zf) goto L_12cbf6fc;
  /* 12cbf641 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12cbf643 push 0x12cdc478 */
  push32((uint32_t)(0x12cdc478u));
  /* 12cbf648 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf64a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12cbf64c push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbf64e call 0x12cb45c0 */
  push32(0x12cbf653u); f_12cb45c0();
  /* 12cbf653 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf656 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cbf659 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbf65d jne 0x12cbf669 */
  if (!C.zf) goto L_12cbf669;
  /* 12cbf65f mov eax, 1 */
  EAX = (0x1u);
  /* 12cbf664 jmp 0x12cbf75c */
  goto L_12cbf75c;
L_12cbf669:;
  /* 12cbf669 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbf66c push eax */
  push32((uint32_t)(EAX));
  /* 12cbf66d call 0x12cbf760 */
  push32(0x12cbf672u); f_12cbf760();
  /* 12cbf672 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf675 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbf677 je 0x12cbf69d */
  if (C.zf) goto L_12cbf69d;
  /* 12cbf679 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbf67c push ecx */
  push32((uint32_t)(ECX));
  /* 12cbf67d call 0x12cbf9f0 */
  push32(0x12cbf682u); f_12cbf9f0();
  /* 12cbf682 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf685 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf687 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbf68a push edx */
  push32((uint32_t)(EDX));
  /* 12cbf68b call 0x12cb4c40 */
  push32(0x12cbf690u); f_12cb4c40();
  /* 12cbf690 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf693 mov eax, 1 */
  EAX = (0x1u);
  /* 12cbf698 jmp 0x12cbf75c */
  goto L_12cbf75c;
L_12cbf69d:;
  /* 12cbf69d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbf6a0 mov ecx, dword ptr [0x12cdfd88] */
  ECX = (r32((uint32_t)(0x12cdfd88)));
  /* 12cbf6a6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cbf6a8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12cbf6aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbf6ad mov ecx, dword ptr [0x12cdfd88] */
  ECX = (r32((uint32_t)(0x12cdfd88)));
  /* 12cbf6b3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12cbf6b6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12cbf6b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbf6bc mov ecx, dword ptr [0x12cdfd88] */
  ECX = (r32((uint32_t)(0x12cdfd88)));
  /* 12cbf6c2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12cbf6c5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12cbf6c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbf6cb mov dword ptr [0x12cdfd88], eax */
  w32((uint32_t)(0x12cdfd88), (EAX));
  /* 12cbf6d0 mov ecx, dword ptr [0x12ce0754] */
  ECX = (r32((uint32_t)(0x12ce0754)));
  /* 12cbf6d6 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbf6d7 call 0x12cbf9f0 */
  push32(0x12cbf6dcu); f_12cbf9f0();
  /* 12cbf6dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf6df push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf6e1 mov edx, dword ptr [0x12ce0754] */
  EDX = (r32((uint32_t)(0x12ce0754)));
  /* 12cbf6e7 push edx */
  push32((uint32_t)(EDX));
  /* 12cbf6e8 call 0x12cb4c40 */
  push32(0x12cbf6edu); f_12cb4c40();
  /* 12cbf6ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf6f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbf6f3 mov dword ptr [0x12ce0754], eax */
  w32((uint32_t)(0x12ce0754), (EAX));
  /* 12cbf6f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbf6fa jmp 0x12cbf75c */
  goto L_12cbf75c;
L_12cbf6fc:;
  /* 12cbf6fc mov ecx, dword ptr [0x12cdfd88] */
  ECX = (r32((uint32_t)(0x12cdfd88)));
  /* 12cbf702 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cbf704 mov dword ptr [0x12cdfd58], edx */
  w32((uint32_t)(0x12cdfd58), (EDX));
  /* 12cbf70a mov eax, dword ptr [0x12cdfd88] */
  EAX = (r32((uint32_t)(0x12cdfd88)));
  /* 12cbf70f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12cbf712 mov dword ptr [0x12cdfd5c], ecx */
  w32((uint32_t)(0x12cdfd5c), (ECX));
  /* 12cbf718 mov edx, dword ptr [0x12cdfd88] */
  EDX = (r32((uint32_t)(0x12cdfd88)));
  /* 12cbf71e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12cbf721 mov dword ptr [0x12cdfd60], eax */
  w32((uint32_t)(0x12cdfd60), (EAX));
  /* 12cbf726 mov dword ptr [0x12cdfd88], 0x12cdfd58 */
  w32((uint32_t)(0x12cdfd88), (0x12cdfd58u));
  /* 12cbf730 mov ecx, dword ptr [0x12ce0754] */
  ECX = (r32((uint32_t)(0x12ce0754)));
  /* 12cbf736 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbf737 call 0x12cbf9f0 */
  push32(0x12cbf73cu); f_12cbf9f0();
  /* 12cbf73c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf73f push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbf741 mov edx, dword ptr [0x12ce0754] */
  EDX = (r32((uint32_t)(0x12ce0754)));
  /* 12cbf747 push edx */
  push32((uint32_t)(EDX));
  /* 12cbf748 call 0x12cb4c40 */
  push32(0x12cbf74du); f_12cb4c40();
  /* 12cbf74d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf750 mov dword ptr [0x12ce0754], 0 */
  w32((uint32_t)(0x12ce0754), (0x0u));
  /* 12cbf75a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cbf75c:;
  /* 12cbf75c mov esp, ebp */
  ESP = (EBP);
  /* 12cbf75e pop ebp */
  EBP = (pop32());
  /* 12cbf75f ret  */
  ESPCHK(0x12cbf630u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f760 @ 0x12cbf760 (525 bytes, 200 insns) */
void f_12cbf760(void) {
  FTRACE(0x12cbf760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbf760 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbf761 mov ebp, esp */
  EBP = (ESP);
  /* 12cbf763 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbf766 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12cbf76d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbf76f mov ax, word ptr [0x12ce0774] */
  AX = (r16((uint32_t)(0x12ce0774)));
  /* 12cbf775 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cbf778 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbf77c jne 0x12cbf786 */
  if (!C.zf) goto L_12cbf786;
  /* 12cbf77e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cbf781 jmp 0x12cbf969 */
  goto L_12cbf969;
L_12cbf786:;
  /* 12cbf786 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf789 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf78c push ecx */
  push32((uint32_t)(ECX));
  /* 12cbf78d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 12cbf78f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbf792 push edx */
  push32((uint32_t)(EDX));
  /* 12cbf793 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbf795 call 0x12cc2370 */
  push32(0x12cbf79au); f_12cc2370();
  /* 12cbf79a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf79d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbf7a0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbf7a2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cbf7a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf7a8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf7ab push edx */
  push32((uint32_t)(EDX));
  /* 12cbf7ac push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12cbf7ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbf7b1 push eax */
  push32((uint32_t)(EAX));
  /* 12cbf7b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbf7b4 call 0x12cc2370 */
  push32(0x12cbf7b9u); f_12cc2370();
  /* 12cbf7b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf7bc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbf7bf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbf7c1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cbf7c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf7c7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf7ca push edx */
  push32((uint32_t)(EDX));
  /* 12cbf7cb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12cbf7cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbf7d0 push eax */
  push32((uint32_t)(EAX));
  /* 12cbf7d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbf7d3 call 0x12cc2370 */
  push32(0x12cbf7d8u); f_12cc2370();
  /* 12cbf7d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf7db mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbf7de or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbf7e0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cbf7e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf7e6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf7e9 push edx */
  push32((uint32_t)(EDX));
  /* 12cbf7ea push 0x17 */
  push32((uint32_t)(0x17u));
  /* 12cbf7ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbf7ef push eax */
  push32((uint32_t)(EAX));
  /* 12cbf7f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbf7f2 call 0x12cc2370 */
  push32(0x12cbf7f7u); f_12cc2370();
  /* 12cbf7f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf7fa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbf7fd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbf7ff mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cbf802 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf805 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf808 push edx */
  push32((uint32_t)(EDX));
  /* 12cbf809 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12cbf80b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbf80e push eax */
  push32((uint32_t)(EAX));
  /* 12cbf80f push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbf811 call 0x12cc2370 */
  push32(0x12cbf816u); f_12cc2370();
  /* 12cbf816 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf819 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbf81c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbf81e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cbf821 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf824 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12cbf827 push eax */
  push32((uint32_t)(EAX));
  /* 12cbf828 call 0x12cbf970 */
  push32(0x12cbf82du); f_12cbf970();
  /* 12cbf82d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf830 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf833 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf836 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbf837 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 12cbf839 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbf83c push edx */
  push32((uint32_t)(EDX));
  /* 12cbf83d push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbf83f call 0x12cc2370 */
  push32(0x12cbf844u); f_12cc2370();
  /* 12cbf844 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf847 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbf84a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbf84c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cbf84f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf852 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf855 push edx */
  push32((uint32_t)(EDX));
  /* 12cbf856 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 12cbf858 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbf85b push eax */
  push32((uint32_t)(EAX));
  /* 12cbf85c push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbf85e call 0x12cc2370 */
  push32(0x12cbf863u); f_12cc2370();
  /* 12cbf863 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf866 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbf869 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbf86b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cbf86e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf871 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf874 push edx */
  push32((uint32_t)(EDX));
  /* 12cbf875 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12cbf877 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbf87a push eax */
  push32((uint32_t)(EAX));
  /* 12cbf87b push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbf87d call 0x12cc2370 */
  push32(0x12cbf882u); f_12cc2370();
  /* 12cbf882 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf885 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbf888 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbf88a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cbf88d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf890 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf893 push edx */
  push32((uint32_t)(EDX));
  /* 12cbf894 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12cbf896 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbf899 push eax */
  push32((uint32_t)(EAX));
  /* 12cbf89a push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbf89c call 0x12cc2370 */
  push32(0x12cbf8a1u); f_12cc2370();
  /* 12cbf8a1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf8a4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbf8a7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbf8a9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cbf8ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf8af add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf8b2 push edx */
  push32((uint32_t)(EDX));
  /* 12cbf8b3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 12cbf8b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbf8b8 push eax */
  push32((uint32_t)(EAX));
  /* 12cbf8b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbf8bb call 0x12cc2370 */
  push32(0x12cbf8c0u); f_12cc2370();
  /* 12cbf8c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf8c3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbf8c6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbf8c8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cbf8cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf8ce add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf8d1 push edx */
  push32((uint32_t)(EDX));
  /* 12cbf8d2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 12cbf8d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbf8d7 push eax */
  push32((uint32_t)(EAX));
  /* 12cbf8d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbf8da call 0x12cc2370 */
  push32(0x12cbf8dfu); f_12cc2370();
  /* 12cbf8df add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf8e2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbf8e5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbf8e7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cbf8ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf8ed add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf8f0 push edx */
  push32((uint32_t)(EDX));
  /* 12cbf8f1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 12cbf8f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbf8f6 push eax */
  push32((uint32_t)(EAX));
  /* 12cbf8f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbf8f9 call 0x12cc2370 */
  push32(0x12cbf8feu); f_12cc2370();
  /* 12cbf8fe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf901 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbf904 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbf906 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cbf909 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf90c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf90f push edx */
  push32((uint32_t)(EDX));
  /* 12cbf910 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 12cbf912 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbf915 push eax */
  push32((uint32_t)(EAX));
  /* 12cbf916 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbf918 call 0x12cc2370 */
  push32(0x12cbf91du); f_12cc2370();
  /* 12cbf91d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf920 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbf923 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbf925 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cbf928 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf92b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf92e push edx */
  push32((uint32_t)(EDX));
  /* 12cbf92f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 12cbf931 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbf934 push eax */
  push32((uint32_t)(EAX));
  /* 12cbf935 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbf937 call 0x12cc2370 */
  push32(0x12cbf93cu); f_12cc2370();
  /* 12cbf93c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf93f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbf942 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbf944 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cbf947 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf94a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf94d push edx */
  push32((uint32_t)(EDX));
  /* 12cbf94e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 12cbf950 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbf953 push eax */
  push32((uint32_t)(EAX));
  /* 12cbf954 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbf956 call 0x12cc2370 */
  push32(0x12cbf95bu); f_12cc2370();
  /* 12cbf95b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf95e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbf961 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbf963 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cbf966 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12cbf969:;
  /* 12cbf969 mov esp, ebp */
  ESP = (EBP);
  /* 12cbf96b pop ebp */
  EBP = (pop32());
  /* 12cbf96c ret  */
  ESPCHK(0x12cbf760u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12cbf970 (125 bytes, 49 insns) */
void f_12cbf970(void) {
  FTRACE(0x12cbf970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbf970 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbf971 mov ebp, esp */
  EBP = (ESP);
  /* 12cbf973 push ecx */
  push32((uint32_t)(ECX));
L_12cbf974:;
  /* 12cbf974 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf977 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cbf97a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cbf97c je 0x12cbf9e9 */
  if (C.zf) goto L_12cbf9e9;
  /* 12cbf97e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf981 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12cbf984 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbf987 jl 0x12cbf9ad */
  if ((C.sf!=C.of)) goto L_12cbf9ad;
  /* 12cbf989 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf98c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cbf98f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbf992 jg 0x12cbf9ad */
  if ((!C.zf&&C.sf==C.of)) goto L_12cbf9ad;
  /* 12cbf994 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf997 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cbf99a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbf99d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf9a0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12cbf9a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf9a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf9a8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12cbf9ab jmp 0x12cbf9e7 */
  goto L_12cbf9e7;
L_12cbf9ad:;
  /* 12cbf9ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf9b0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cbf9b3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbf9b6 jne 0x12cbf9de */
  if (!C.zf) goto L_12cbf9de;
  /* 12cbf9b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf9bb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cbf9be:;
  /* 12cbf9be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbf9c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbf9c4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12cbf9c7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12cbf9c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbf9cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf9cf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cbf9d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cbf9d5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12cbf9d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbf9da jne 0x12cbf9be */
  if (!C.zf) goto L_12cbf9be;
  /* 12cbf9dc jmp 0x12cbf9e7 */
  goto L_12cbf9e7;
L_12cbf9de:;
  /* 12cbf9de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbf9e1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbf9e4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12cbf9e7:;
  /* 12cbf9e7 jmp 0x12cbf974 */
  goto L_12cbf974;
L_12cbf9e9:;
  /* 12cbf9e9 mov esp, ebp */
  ESP = (EBP);
  /* 12cbf9eb pop ebp */
  EBP = (pop32());
  /* 12cbf9ec ret  */
  ESPCHK(0x12cbf970u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f9f0 @ 0x12cbf9f0 (147 bytes, 52 insns) */
void f_12cbf9f0(void) {
  FTRACE(0x12cbf9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbf9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbf9f1 mov ebp, esp */
  EBP = (ESP);
  /* 12cbf9f3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbf9f7 jne 0x12cbf9fe */
  if (!C.zf) goto L_12cbf9fe;
  /* 12cbf9f9 jmp 0x12cbfa81 */
  goto L_12cbfa81;
L_12cbf9fe:;
  /* 12cbf9fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbfa01 cmp dword ptr [eax + 0xc], 0x12ce07b0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x12ce07b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbfa08 je 0x12cbfa81 */
  if (C.zf) goto L_12cbfa81;
  /* 12cbfa0a push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbfa0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbfa0f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12cbfa12 push edx */
  push32((uint32_t)(EDX));
  /* 12cbfa13 call 0x12cb4c40 */
  push32(0x12cbfa18u); f_12cb4c40();
  /* 12cbfa18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbfa1b push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbfa1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbfa20 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12cbfa23 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbfa24 call 0x12cb4c40 */
  push32(0x12cbfa29u); f_12cb4c40();
  /* 12cbfa29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbfa2c push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbfa2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbfa31 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12cbfa34 push eax */
  push32((uint32_t)(EAX));
  /* 12cbfa35 call 0x12cb4c40 */
  push32(0x12cbfa3au); f_12cb4c40();
  /* 12cbfa3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbfa3d push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbfa3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbfa42 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12cbfa45 push edx */
  push32((uint32_t)(EDX));
  /* 12cbfa46 call 0x12cb4c40 */
  push32(0x12cbfa4bu); f_12cb4c40();
  /* 12cbfa4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbfa4e push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbfa50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbfa53 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12cbfa56 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbfa57 call 0x12cb4c40 */
  push32(0x12cbfa5cu); f_12cb4c40();
  /* 12cbfa5c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbfa5f push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbfa61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbfa64 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 12cbfa67 push eax */
  push32((uint32_t)(EAX));
  /* 12cbfa68 call 0x12cb4c40 */
  push32(0x12cbfa6du); f_12cb4c40();
  /* 12cbfa6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbfa70 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbfa72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbfa75 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 12cbfa78 push edx */
  push32((uint32_t)(EDX));
  /* 12cbfa79 call 0x12cb4c40 */
  push32(0x12cbfa7eu); f_12cb4c40();
  /* 12cbfa7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cbfa81:;
  /* 12cbfa81 pop ebp */
  EBP = (pop32());
  /* 12cbfa82 ret  */
  ESPCHK(0x12cbf9f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fa90 @ 0x12cbfa90 (928 bytes, 284 insns) */
void f_12cbfa90(void) {
  FTRACE(0x12cbfa90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbfa90 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbfa91 mov ebp, esp */
  EBP = (ESP);
  /* 12cbfa93 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbfa96 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12cbfa9d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12cbfaa4 cmp dword ptr [0x12ce0718], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0718))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbfaab je 0x12cbfde1 */
  if (C.zf) goto L_12cbfde1;
  /* 12cbfab1 cmp dword ptr [0x12ce0728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbfab8 jne 0x12cbfae0 */
  if (!C.zf) goto L_12cbfae0;
  /* 12cbfaba push 0x12ce0728 */
  push32((uint32_t)(0x12ce0728u));
  /* 12cbfabf push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12cbfac4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbfac6 mov ax, word ptr [0x12ce076c] */
  AX = (r16((uint32_t)(0x12ce076c)));
  /* 12cbfacc push eax */
  push32((uint32_t)(EAX));
  /* 12cbfacd push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbfacf call 0x12cc2370 */
  push32(0x12cbfad4u); f_12cc2370();
  /* 12cbfad4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbfad7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbfad9 je 0x12cbfae0 */
  if (C.zf) goto L_12cbfae0;
  /* 12cbfadb jmp 0x12cbfda2 */
  goto L_12cbfda2;
L_12cbfae0:;
  /* 12cbfae0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 12cbfae2 push 0x12cdc484 */
  push32((uint32_t)(0x12cdc484u));
  /* 12cbfae7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbfae9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12cbfaee call 0x12cb41b0 */
  push32(0x12cbfaf3u); f_12cb41b0();
  /* 12cbfaf3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbfaf6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12cbfaf9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12cbfafb push 0x12cdc484 */
  push32((uint32_t)(0x12cdc484u));
  /* 12cbfb00 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbfb02 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12cbfb07 call 0x12cb41b0 */
  push32(0x12cbfb0cu); f_12cb41b0();
  /* 12cbfb0c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbfb0f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12cbfb12 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 12cbfb14 push 0x12cdc484 */
  push32((uint32_t)(0x12cdc484u));
  /* 12cbfb19 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbfb1b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 12cbfb20 call 0x12cb41b0 */
  push32(0x12cbfb25u); f_12cb41b0();
  /* 12cbfb25 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbfb28 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12cbfb2b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 12cbfb2d push 0x12cdc484 */
  push32((uint32_t)(0x12cdc484u));
  /* 12cbfb32 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbfb34 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12cbfb39 call 0x12cb41b0 */
  push32(0x12cbfb3eu); f_12cb41b0();
  /* 12cbfb3e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbfb41 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12cbfb44 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbfb48 je 0x12cbfb5c */
  if (C.zf) goto L_12cbfb5c;
  /* 12cbfb4a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbfb4e je 0x12cbfb5c */
  if (C.zf) goto L_12cbfb5c;
  /* 12cbfb50 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbfb54 je 0x12cbfb5c */
  if (C.zf) goto L_12cbfb5c;
  /* 12cbfb56 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbfb5a jne 0x12cbfb61 */
  if (!C.zf) goto L_12cbfb61;
L_12cbfb5c:;
  /* 12cbfb5c jmp 0x12cbfda2 */
  goto L_12cbfda2;
L_12cbfb61:;
  /* 12cbfb61 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cbfb64 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12cbfb67 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12cbfb6e jmp 0x12cbfb79 */
  goto L_12cbfb79;
L_12cbfb70:;
  /* 12cbfb70 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cbfb73 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbfb76 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12cbfb79:;
  /* 12cbfb79 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbfb80 jge 0x12cbfb95 */
  if ((C.sf==C.of)) goto L_12cbfb95;
  /* 12cbfb82 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cbfb85 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 12cbfb88 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12cbfb8a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cbfb8d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbfb90 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12cbfb93 jmp 0x12cbfb70 */
  goto L_12cbfb70;
L_12cbfb95:;
  /* 12cbfb95 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 12cbfb98 push eax */
  push32((uint32_t)(EAX));
  /* 12cbfb99 mov ecx, dword ptr [0x12ce0728] */
  ECX = (r32((uint32_t)(0x12ce0728)));
  /* 12cbfb9f push ecx */
  push32((uint32_t)(ECX));
  /* 12cbfba0 call dword ptr [0x12ce32e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32e0))), 0x12cbfba6u);
  /* 12cbfba6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbfba8 jne 0x12cbfbaf */
  if (!C.zf) goto L_12cbfbaf;
  /* 12cbfbaa jmp 0x12cbfda2 */
  goto L_12cbfda2;
L_12cbfbaf:;
  /* 12cbfbaf cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbfbb3 jbe 0x12cbfbba */
  if ((C.cf||C.zf)) goto L_12cbfbba;
  /* 12cbfbb5 jmp 0x12cbfda2 */
  goto L_12cbfda2;
L_12cbfbba:;
  /* 12cbfbba mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cbfbbd and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cbfbc3 mov dword ptr [0x12cdeea4], edx */
  w32((uint32_t)(0x12cdeea4), (EDX));
  /* 12cbfbc9 cmp dword ptr [0x12cdeea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12cdeea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbfbd0 jle 0x12cbfc29 */
  if ((C.zf||C.sf!=C.of)) goto L_12cbfc29;
  /* 12cbfbd2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 12cbfbd5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12cbfbd8 jmp 0x12cbfbe3 */
  goto L_12cbfbe3;
L_12cbfbda:;
  /* 12cbfbda mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cbfbdd add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbfbe0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12cbfbe3:;
  /* 12cbfbe3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cbfbe6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbfbe8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cbfbea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbfbec je 0x12cbfc29 */
  if (C.zf) goto L_12cbfc29;
  /* 12cbfbee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cbfbf1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cbfbf3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12cbfbf6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cbfbf8 je 0x12cbfc29 */
  if (C.zf) goto L_12cbfc29;
  /* 12cbfbfa mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cbfbfd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbfbff mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12cbfc01 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12cbfc04 jmp 0x12cbfc0f */
  goto L_12cbfc0f;
L_12cbfc06:;
  /* 12cbfc06 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cbfc09 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbfc0c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12cbfc0f:;
  /* 12cbfc0f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cbfc12 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbfc14 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12cbfc17 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbfc1a jg 0x12cbfc27 */
  if ((!C.zf&&C.sf==C.of)) goto L_12cbfc27;
  /* 12cbfc1c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cbfc1f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbfc22 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12cbfc25 jmp 0x12cbfc06 */
  goto L_12cbfc06;
L_12cbfc27:;
  /* 12cbfc27 jmp 0x12cbfbda */
  goto L_12cbfbda;
L_12cbfc29:;
  /* 12cbfc29 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbfc2b push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbfc2d push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbfc2f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cbfc32 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbfc35 push eax */
  push32((uint32_t)(EAX));
  /* 12cbfc36 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12cbfc3b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cbfc3e push ecx */
  push32((uint32_t)(ECX));
  /* 12cbfc3f push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbfc41 call 0x12cbc3e0 */
  push32(0x12cbfc46u); f_12cbc3e0();
  /* 12cbfc46 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbfc49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbfc4b jne 0x12cbfc52 */
  if (!C.zf) goto L_12cbfc52;
  /* 12cbfc4d jmp 0x12cbfda2 */
  goto L_12cbfda2;
L_12cbfc52:;
  /* 12cbfc52 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cbfc55 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 12cbfc5a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cbfc5d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12cbfc60 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12cbfc67 jmp 0x12cbfc72 */
  goto L_12cbfc72;
L_12cbfc69:;
  /* 12cbfc69 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cbfc6c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbfc6f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12cbfc72:;
  /* 12cbfc72 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbfc79 jge 0x12cbfc90 */
  if ((C.sf==C.of)) goto L_12cbfc90;
  /* 12cbfc7b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cbfc7e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 12cbfc82 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 12cbfc85 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12cbfc88 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbfc8b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12cbfc8e jmp 0x12cbfc69 */
  goto L_12cbfc69;
L_12cbfc90:;
  /* 12cbfc90 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbfc92 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cbfc94 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cbfc97 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbfc9a push edx */
  push32((uint32_t)(EDX));
  /* 12cbfc9b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12cbfca0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cbfca3 push eax */
  push32((uint32_t)(EAX));
  /* 12cbfca4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cbfca6 call 0x12cc2610 */
  push32(0x12cbfcabu); f_12cc2610();
  /* 12cbfcab add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbfcae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbfcb0 jne 0x12cbfcb7 */
  if (!C.zf) goto L_12cbfcb7;
  /* 12cbfcb2 jmp 0x12cbfda2 */
  goto L_12cbfda2;
L_12cbfcb7:;
  /* 12cbfcb7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cbfcba mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 12cbfcbf cmp dword ptr [0x12cdeea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12cdeea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbfcc6 jle 0x12cbfd23 */
  if ((C.zf||C.sf!=C.of)) goto L_12cbfd23;
  /* 12cbfcc8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 12cbfccb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12cbfcce jmp 0x12cbfcd9 */
  goto L_12cbfcd9;
L_12cbfcd0:;
  /* 12cbfcd0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cbfcd3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbfcd6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12cbfcd9:;
  /* 12cbfcd9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cbfcdc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12cbfcde mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12cbfce0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cbfce2 je 0x12cbfd23 */
  if (C.zf) goto L_12cbfd23;
  /* 12cbfce4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cbfce7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbfce9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12cbfcec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cbfcee je 0x12cbfd23 */
  if (C.zf) goto L_12cbfd23;
  /* 12cbfcf0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cbfcf3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbfcf5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cbfcf7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12cbfcfa jmp 0x12cbfd05 */
  goto L_12cbfd05;
L_12cbfcfc:;
  /* 12cbfcfc mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cbfcff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbfd02 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12cbfd05:;
  /* 12cbfd05 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cbfd08 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbfd0a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12cbfd0d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbfd10 jg 0x12cbfd21 */
  if ((!C.zf&&C.sf==C.of)) goto L_12cbfd21;
  /* 12cbfd12 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12cbfd15 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cbfd18 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 12cbfd1f jmp 0x12cbfcfc */
  goto L_12cbfcfc;
L_12cbfd21:;
  /* 12cbfd21 jmp 0x12cbfcd0 */
  goto L_12cbfcd0;
L_12cbfd23:;
  /* 12cbfd23 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cbfd26 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbfd29 mov dword ptr [0x12cdec98], eax */
  w32((uint32_t)(0x12cdec98), (EAX));
  /* 12cbfd2e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cbfd31 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbfd34 mov dword ptr [0x12cdec9c], ecx */
  w32((uint32_t)(0x12cdec9c), (ECX));
  /* 12cbfd3a cmp dword ptr [0x12ce0758], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0758))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbfd41 je 0x12cbfd54 */
  if (C.zf) goto L_12cbfd54;
  /* 12cbfd43 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbfd45 mov edx, dword ptr [0x12ce0758] */
  EDX = (r32((uint32_t)(0x12ce0758)));
  /* 12cbfd4b push edx */
  push32((uint32_t)(EDX));
  /* 12cbfd4c call 0x12cb4c40 */
  push32(0x12cbfd51u); f_12cb4c40();
  /* 12cbfd51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cbfd54:;
  /* 12cbfd54 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cbfd57 mov dword ptr [0x12ce0758], eax */
  w32((uint32_t)(0x12ce0758), (EAX));
  /* 12cbfd5c cmp dword ptr [0x12ce075c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce075c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbfd63 je 0x12cbfd76 */
  if (C.zf) goto L_12cbfd76;
  /* 12cbfd65 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbfd67 mov ecx, dword ptr [0x12ce075c] */
  ECX = (r32((uint32_t)(0x12ce075c)));
  /* 12cbfd6d push ecx */
  push32((uint32_t)(ECX));
  /* 12cbfd6e call 0x12cb4c40 */
  push32(0x12cbfd73u); f_12cb4c40();
  /* 12cbfd73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cbfd76:;
  /* 12cbfd76 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cbfd79 mov dword ptr [0x12ce075c], edx */
  w32((uint32_t)(0x12ce075c), (EDX));
  /* 12cbfd7f push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbfd81 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cbfd84 push eax */
  push32((uint32_t)(EAX));
  /* 12cbfd85 call 0x12cb4c40 */
  push32(0x12cbfd8au); f_12cb4c40();
  /* 12cbfd8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbfd8d push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbfd8f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cbfd92 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbfd93 call 0x12cb4c40 */
  push32(0x12cbfd98u); f_12cb4c40();
  /* 12cbfd98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbfd9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbfd9d jmp 0x12cbfe2c */
  goto L_12cbfe2c;
L_12cbfda2:;
  /* 12cbfda2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbfda4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12cbfda7 push edx */
  push32((uint32_t)(EDX));
  /* 12cbfda8 call 0x12cb4c40 */
  push32(0x12cbfdadu); f_12cb4c40();
  /* 12cbfdad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbfdb0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbfdb2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12cbfdb5 push eax */
  push32((uint32_t)(EAX));
  /* 12cbfdb6 call 0x12cb4c40 */
  push32(0x12cbfdbbu); f_12cb4c40();
  /* 12cbfdbb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbfdbe push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbfdc0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12cbfdc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cbfdc4 call 0x12cb4c40 */
  push32(0x12cbfdc9u); f_12cb4c40();
  /* 12cbfdc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbfdcc push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbfdce mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12cbfdd1 push edx */
  push32((uint32_t)(EDX));
  /* 12cbfdd2 call 0x12cb4c40 */
  push32(0x12cbfdd7u); f_12cb4c40();
  /* 12cbfdd7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbfdda mov eax, 1 */
  EAX = (0x1u);
  /* 12cbfddf jmp 0x12cbfe2c */
  goto L_12cbfe2c;
L_12cbfde1:;
  /* 12cbfde1 mov dword ptr [0x12cdec98], 0x12cdeca2 */
  w32((uint32_t)(0x12cdec98), (0x12cdeca2u));
  /* 12cbfdeb mov dword ptr [0x12cdec9c], 0x12cdeca2 */
  w32((uint32_t)(0x12cdec9c), (0x12cdeca2u));
  /* 12cbfdf5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbfdf7 mov eax, dword ptr [0x12ce0758] */
  EAX = (r32((uint32_t)(0x12ce0758)));
  /* 12cbfdfc push eax */
  push32((uint32_t)(EAX));
  /* 12cbfdfd call 0x12cb4c40 */
  push32(0x12cbfe02u); f_12cb4c40();
  /* 12cbfe02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbfe05 push 2 */
  push32((uint32_t)(0x2u));
  /* 12cbfe07 mov ecx, dword ptr [0x12ce075c] */
  ECX = (r32((uint32_t)(0x12ce075c)));
  /* 12cbfe0d push ecx */
  push32((uint32_t)(ECX));
  /* 12cbfe0e call 0x12cb4c40 */
  push32(0x12cbfe13u); f_12cb4c40();
  /* 12cbfe13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbfe16 mov dword ptr [0x12ce0758], 0 */
  w32((uint32_t)(0x12ce0758), (0x0u));
  /* 12cbfe20 mov dword ptr [0x12ce075c], 0 */
  w32((uint32_t)(0x12ce075c), (0x0u));
  /* 12cbfe2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cbfe2c:;
  /* 12cbfe2c mov esp, ebp */
  ESP = (EBP);
  /* 12cbfe2e pop ebp */
  EBP = (pop32());
  /* 12cbfe2f ret  */
  ESPCHK(0x12cbfa90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe30 @ 0x12cbfe30 (7 bytes, 5 insns) */
void f_12cbfe30(void) {
  FTRACE(0x12cbfe30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbfe30 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbfe31 mov ebp, esp */
  EBP = (ESP);
  /* 12cbfe33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbfe35 pop ebp */
  EBP = (pop32());
  /* 12cbfe36 ret  */
  ESPCHK(0x12cbfe30u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x12cbfe40 (129 bytes, 56 insns) */
void f_12cbfe40(void) {
  FTRACE(0x12cbfe40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbfe40 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 12cbfe44 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12cbfe48 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12cbfe4e jne 0x12cbfe8c */
  if (!C.zf) goto L_12cbfe8c;
L_12cbfe50:;
  /* 12cbfe50 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12cbfe52 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12cbfe54 jne 0x12cbfe84 */
  if (!C.zf) goto L_12cbfe84;
  /* 12cbfe56 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12cbfe58 je 0x12cbfe80 */
  if (C.zf) goto L_12cbfe80;
  /* 12cbfe5a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12cbfe5d jne 0x12cbfe84 */
  if (!C.zf) goto L_12cbfe84;
  /* 12cbfe5f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12cbfe61 je 0x12cbfe80 */
  if (C.zf) goto L_12cbfe80;
  /* 12cbfe63 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12cbfe66 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12cbfe69 jne 0x12cbfe84 */
  if (!C.zf) goto L_12cbfe84;
  /* 12cbfe6b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12cbfe6d je 0x12cbfe80 */
  if (C.zf) goto L_12cbfe80;
  /* 12cbfe6f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12cbfe72 jne 0x12cbfe84 */
  if (!C.zf) goto L_12cbfe84;
  /* 12cbfe74 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbfe77 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbfe7a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12cbfe7c jne 0x12cbfe50 */
  if (!C.zf) goto L_12cbfe50;
  /* 12cbfe7e mov edi, edi */
  EDI = (EDI);
L_12cbfe80:;
  /* 12cbfe80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbfe82 ret  */
  ESPCHK(0x12cbfe40u, _esp0);
  ESP += 4; return;
  /* 12cbfe83 nop  */
  /* nop */
L_12cbfe84:;
  /* 12cbfe84 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbfe86 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12cbfe88 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12cbfe89 ret  */
  ESPCHK(0x12cbfe40u, _esp0);
  ESP += 4; return;
  /* 12cbfe8a mov edi, edi */
  EDI = (EDI);
L_12cbfe8c:;
  /* 12cbfe8c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 12cbfe92 je 0x12cbfea8 */
  if (C.zf) goto L_12cbfea8;
  /* 12cbfe94 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cbfe96 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12cbfe97 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12cbfe99 jne 0x12cbfe84 */
  if (!C.zf) goto L_12cbfe84;
  /* 12cbfe9b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12cbfe9c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12cbfe9e je 0x12cbfe80 */
  if (C.zf) goto L_12cbfe80;
  /* 12cbfea0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 12cbfea6 je 0x12cbfe50 */
  if (C.zf) goto L_12cbfe50;
L_12cbfea8:;
  /* 12cbfea8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 12cbfeab add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbfeae cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12cbfeb0 jne 0x12cbfe84 */
  if (!C.zf) goto L_12cbfe84;
  /* 12cbfeb2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12cbfeb4 je 0x12cbfe80 */
  if (C.zf) goto L_12cbfe80;
  /* 12cbfeb6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12cbfeb9 jne 0x12cbfe84 */
  if (!C.zf) goto L_12cbfe84;
  /* 12cbfebb or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12cbfebd je 0x12cbfe80 */
  if (C.zf) goto L_12cbfe80;
  /* 12cbfebf add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbfec2 jmp 0x12cbfe50 */
  goto L_12cbfe50;
}

/* FUN_1000fed0 @ 0x12cbfed0 (62 bytes, 35 insns) */
void f_12cbfed0(void) {
  FTRACE(0x12cbfed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbfed0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbfed1 mov ebp, esp */
  EBP = (ESP);
  /* 12cbfed3 push esi */
  push32((uint32_t)(ESI));
  /* 12cbfed4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbfed6 push eax */
  push32((uint32_t)(EAX));
  /* 12cbfed7 push eax */
  push32((uint32_t)(EAX));
  /* 12cbfed8 push eax */
  push32((uint32_t)(EAX));
  /* 12cbfed9 push eax */
  push32((uint32_t)(EAX));
  /* 12cbfeda push eax */
  push32((uint32_t)(EAX));
  /* 12cbfedb push eax */
  push32((uint32_t)(EAX));
  /* 12cbfedc push eax */
  push32((uint32_t)(EAX));
  /* 12cbfedd push eax */
  push32((uint32_t)(EAX));
  /* 12cbfede mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbfee1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12cbfee4:;
  /* 12cbfee4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cbfee6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12cbfee8 je 0x12cbfef1 */
  if (C.zf) goto L_12cbfef1;
  /* 12cbfeea inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12cbfeeb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x12cbfeeb");
  /* 12cbfeef jmp 0x12cbfee4 */
  goto L_12cbfee4;
L_12cbfef1:;
  /* 12cbfef1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbfef4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12cbfef7 nop  */
  /* nop */
L_12cbfef8:;
  /* 12cbfef8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12cbfef9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12cbfefb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12cbfefd je 0x12cbff06 */
  if (C.zf) goto L_12cbff06;
  /* 12cbfeff inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12cbff00 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12cbff00");
  /* 12cbff04 jae 0x12cbfef8 */
  if (!C.cf) goto L_12cbfef8;
L_12cbff06:;
  /* 12cbff06 mov eax, ecx */
  EAX = (ECX);
  /* 12cbff08 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbff0b pop esi */
  ESI = (pop32());
  /* 12cbff0c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12cbff0d ret  */
  ESPCHK(0x12cbfed0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x12cbff10 (56 bytes, 31 insns) */
void f_12cbff10(void) {
  FTRACE(0x12cbff10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbff10 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbff11 mov ebp, esp */
  EBP = (ESP);
  /* 12cbff13 push edi */
  push32((uint32_t)(EDI));
  /* 12cbff14 push esi */
  push32((uint32_t)(ESI));
  /* 12cbff15 push ebx */
  push32((uint32_t)(EBX));
  /* 12cbff16 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cbff19 jecxz 0x12cbff41 */
  x86_unimpl("jecxz @ 0x12cbff19");
  /* 12cbff1b mov ebx, ecx */
  EBX = (ECX);
  /* 12cbff1d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbff20 mov esi, edi */
  ESI = (EDI);
  /* 12cbff22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbff24 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 12cbff26 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cbff28 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbff2a mov edi, esi */
  EDI = (ESI);
  /* 12cbff2c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbff2f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 12cbff31 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 12cbff34 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cbff36 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12cbff39 ja 0x12cbff3f */
  if ((!C.cf&&!C.zf)) goto L_12cbff3f;
  /* 12cbff3b je 0x12cbff41 */
  if (C.zf) goto L_12cbff41;
  /* 12cbff3d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12cbff3e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_12cbff3f:;
  /* 12cbff3f not ecx */
  ECX = (~(ECX));
L_12cbff41:;
  /* 12cbff41 mov eax, ecx */
  EAX = (ECX);
  /* 12cbff43 pop ebx */
  EBX = (pop32());
  /* 12cbff44 pop esi */
  ESI = (pop32());
  /* 12cbff45 pop edi */
  EDI = (pop32());
  /* 12cbff46 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12cbff47 ret  */
  ESPCHK(0x12cbff10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff50 @ 0x12cbff50 (58 bytes, 32 insns) */
void f_12cbff50(void) {
  FTRACE(0x12cbff50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbff50 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbff51 mov ebp, esp */
  EBP = (ESP);
  /* 12cbff53 push esi */
  push32((uint32_t)(ESI));
  /* 12cbff54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cbff56 push eax */
  push32((uint32_t)(EAX));
  /* 12cbff57 push eax */
  push32((uint32_t)(EAX));
  /* 12cbff58 push eax */
  push32((uint32_t)(EAX));
  /* 12cbff59 push eax */
  push32((uint32_t)(EAX));
  /* 12cbff5a push eax */
  push32((uint32_t)(EAX));
  /* 12cbff5b push eax */
  push32((uint32_t)(EAX));
  /* 12cbff5c push eax */
  push32((uint32_t)(EAX));
  /* 12cbff5d push eax */
  push32((uint32_t)(EAX));
  /* 12cbff5e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cbff61 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12cbff64:;
  /* 12cbff64 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cbff66 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12cbff68 je 0x12cbff71 */
  if (C.zf) goto L_12cbff71;
  /* 12cbff6a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12cbff6b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x12cbff6b");
  /* 12cbff6f jmp 0x12cbff64 */
  goto L_12cbff64;
L_12cbff71:;
  /* 12cbff71 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_12cbff74:;
  /* 12cbff74 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12cbff76 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12cbff78 je 0x12cbff84 */
  if (C.zf) goto L_12cbff84;
  /* 12cbff7a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12cbff7b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12cbff7b");
  /* 12cbff7f jae 0x12cbff74 */
  if (!C.cf) goto L_12cbff74;
  /* 12cbff81 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_12cbff84:;
  /* 12cbff84 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cbff87 pop esi */
  ESI = (pop32());
  /* 12cbff88 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12cbff89 ret  */
  ESPCHK(0x12cbff50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff90 @ 0x12cbff90 (512 bytes, 147 insns) */
void f_12cbff90(void) {
  FTRACE(0x12cbff90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cbff90 push ebp */
  push32((uint32_t)(EBP));
  /* 12cbff91 mov ebp, esp */
  EBP = (ESP);
  /* 12cbff93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cbff96 cmp dword ptr [0x12ce07a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce07a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbff9d jne 0x12cbffc2 */
  if (!C.zf) goto L_12cbffc2;
  /* 12cbff9f call 0x12cc0a60 */
  push32(0x12cbffa4u); f_12cc0a60();
  /* 12cbffa4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cbffa6 je 0x12cbffb2 */
  if (C.zf) goto L_12cbffb2;
  /* 12cbffa8 mov eax, dword ptr [0x12ce32a4] */
  EAX = (r32((uint32_t)(0x12ce32a4)));
  /* 12cbffad mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cbffb0 jmp 0x12cbffb9 */
  goto L_12cbffb9;
L_12cbffb2:;
  /* 12cbffb2 mov dword ptr [ebp - 8], 0x12cc0ab0 */
  w32((uint32_t)(EBP + -0x8), (0x12cc0ab0u));
L_12cbffb9:;
  /* 12cbffb9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cbffbc mov dword ptr [0x12ce07a4], ecx */
  w32((uint32_t)(0x12ce07a4), (ECX));
L_12cbffc2:;
  /* 12cbffc2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbffc6 jne 0x12cbffd2 */
  if (!C.zf) goto L_12cbffd2;
  /* 12cbffc8 call 0x12cc08b0 */
  push32(0x12cbffcdu); f_12cc08b0();
  /* 12cbffcd jmp 0x12cc009e */
  goto L_12cc009e;
L_12cbffd2:;
  /* 12cbffd2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cbffd5 mov dword ptr [0x12ce0794], edx */
  w32((uint32_t)(0x12ce0794), (EDX));
  /* 12cbffdb cmp dword ptr [0x12ce0794], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0794))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cbffe2 je 0x12cc0004 */
  if (C.zf) goto L_12cc0004;
  /* 12cbffe4 mov eax, dword ptr [0x12ce0794] */
  EAX = (r32((uint32_t)(0x12ce0794)));
  /* 12cbffe9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cbffec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cbffee je 0x12cc0004 */
  if (C.zf) goto L_12cc0004;
  /* 12cbfff0 push 0x12ce0794 */
  push32((uint32_t)(0x12ce0794u));
  /* 12cbfff5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12cbfff7 push 0x12cdfa90 */
  push32((uint32_t)(0x12cdfa90u));
  /* 12cbfffc call 0x12cc0190 */
  push32(0x12cc0001u); f_12cc0190();
  /* 12cc0001 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cc0004:;
  /* 12cc0004 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc0007 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc000a mov dword ptr [0x12ce0798], edx */
  w32((uint32_t)(0x12ce0798), (EDX));
  /* 12cc0010 cmp dword ptr [0x12ce0798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0017 je 0x12cc0039 */
  if (C.zf) goto L_12cc0039;
  /* 12cc0019 mov eax, dword ptr [0x12ce0798] */
  EAX = (r32((uint32_t)(0x12ce0798)));
  /* 12cc001e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cc0021 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cc0023 je 0x12cc0039 */
  if (C.zf) goto L_12cc0039;
  /* 12cc0025 push 0x12ce0798 */
  push32((uint32_t)(0x12ce0798u));
  /* 12cc002a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12cc002c push 0x12cdf9d8 */
  push32((uint32_t)(0x12cdf9d8u));
  /* 12cc0031 call 0x12cc0190 */
  push32(0x12cc0036u); f_12cc0190();
  /* 12cc0036 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cc0039:;
  /* 12cc0039 mov dword ptr [0x12ce079c], 0 */
  w32((uint32_t)(0x12ce079c), (0x0u));
  /* 12cc0043 cmp dword ptr [0x12ce0794], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0794))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc004a je 0x12cc007d */
  if (C.zf) goto L_12cc007d;
  /* 12cc004c mov edx, dword ptr [0x12ce0794] */
  EDX = (r32((uint32_t)(0x12ce0794)));
  /* 12cc0052 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12cc0055 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc0057 je 0x12cc007d */
  if (C.zf) goto L_12cc007d;
  /* 12cc0059 cmp dword ptr [0x12ce0798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0060 je 0x12cc0076 */
  if (C.zf) goto L_12cc0076;
  /* 12cc0062 mov ecx, dword ptr [0x12ce0798] */
  ECX = (r32((uint32_t)(0x12ce0798)));
  /* 12cc0068 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12cc006b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cc006d je 0x12cc0076 */
  if (C.zf) goto L_12cc0076;
  /* 12cc006f call 0x12cc0220 */
  push32(0x12cc0074u); f_12cc0220();
  /* 12cc0074 jmp 0x12cc007b */
  goto L_12cc007b;
L_12cc0076:;
  /* 12cc0076 call 0x12cc0610 */
  push32(0x12cc007bu); f_12cc0610();
L_12cc007b:;
  /* 12cc007b jmp 0x12cc009e */
  goto L_12cc009e;
L_12cc007d:;
  /* 12cc007d cmp dword ptr [0x12ce0798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0084 je 0x12cc0099 */
  if (C.zf) goto L_12cc0099;
  /* 12cc0086 mov eax, dword ptr [0x12ce0798] */
  EAX = (r32((uint32_t)(0x12ce0798)));
  /* 12cc008b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cc008e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cc0090 je 0x12cc0099 */
  if (C.zf) goto L_12cc0099;
  /* 12cc0092 call 0x12cc07b0 */
  push32(0x12cc0097u); f_12cc07b0();
  /* 12cc0097 jmp 0x12cc009e */
  goto L_12cc009e;
L_12cc0099:;
  /* 12cc0099 call 0x12cc08b0 */
  push32(0x12cc009eu); f_12cc08b0();
L_12cc009e:;
  /* 12cc009e cmp dword ptr [0x12ce079c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce079c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc00a5 jne 0x12cc00ae */
  if (!C.zf) goto L_12cc00ae;
  /* 12cc00a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc00a9 jmp 0x12cc018c */
  goto L_12cc018c;
L_12cc00ae:;
  /* 12cc00ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc00b1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc00b7 push edx */
  push32((uint32_t)(EDX));
  /* 12cc00b8 call 0x12cc08e0 */
  push32(0x12cc00bdu); f_12cc08e0();
  /* 12cc00bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc00c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cc00c3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc00c7 je 0x12cc00dc */
  if (C.zf) goto L_12cc00dc;
  /* 12cc00c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc00cc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cc00d1 push eax */
  push32((uint32_t)(EAX));
  /* 12cc00d2 call dword ptr [0x12ce32a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32a8))), 0x12cc00d8u);
  /* 12cc00d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc00da jne 0x12cc00e3 */
  if (!C.zf) goto L_12cc00e3;
L_12cc00dc:;
  /* 12cc00dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc00de jmp 0x12cc018c */
  goto L_12cc018c;
L_12cc00e3:;
  /* 12cc00e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cc00e5 mov ecx, dword ptr [0x12ce0784] */
  ECX = (r32((uint32_t)(0x12ce0784)));
  /* 12cc00eb push ecx */
  push32((uint32_t)(ECX));
  /* 12cc00ec call dword ptr [0x12ce32ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32ac))), 0x12cc00f2u);
  /* 12cc00f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc00f4 jne 0x12cc00fd */
  if (!C.zf) goto L_12cc00fd;
  /* 12cc00f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc00f8 jmp 0x12cc018c */
  goto L_12cc018c;
L_12cc00fd:;
  /* 12cc00fd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0101 je 0x12cc0128 */
  if (C.zf) goto L_12cc0128;
  /* 12cc0103 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc0106 mov ax, word ptr [0x12ce0784] */
  AX = (r16((uint32_t)(0x12ce0784)));
  /* 12cc010c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 12cc010f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc0112 mov dx, word ptr [0x12ce07a0] */
  DX = (r16((uint32_t)(0x12ce07a0)));
  /* 12cc0119 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 12cc011d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc0120 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 12cc0124 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_12cc0128:;
  /* 12cc0128 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc012c je 0x12cc0187 */
  if (C.zf) goto L_12cc0187;
  /* 12cc012e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12cc0130 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc0133 push edx */
  push32((uint32_t)(EDX));
  /* 12cc0134 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 12cc0139 mov eax, dword ptr [0x12ce0784] */
  EAX = (r32((uint32_t)(0x12ce0784)));
  /* 12cc013e push eax */
  push32((uint32_t)(EAX));
  /* 12cc013f call dword ptr [0x12ce07a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce07a4))), 0x12cc0145u);
  /* 12cc0145 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc0147 jne 0x12cc014d */
  if (!C.zf) goto L_12cc014d;
  /* 12cc0149 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc014b jmp 0x12cc018c */
  goto L_12cc018c;
L_12cc014d:;
  /* 12cc014d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12cc014f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc0152 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0155 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc0156 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 12cc015b mov edx, dword ptr [0x12ce07a0] */
  EDX = (r32((uint32_t)(0x12ce07a0)));
  /* 12cc0161 push edx */
  push32((uint32_t)(EDX));
  /* 12cc0162 call dword ptr [0x12ce07a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce07a4))), 0x12cc0168u);
  /* 12cc0168 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc016a jne 0x12cc0170 */
  if (!C.zf) goto L_12cc0170;
  /* 12cc016c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc016e jmp 0x12cc018c */
  goto L_12cc018c;
L_12cc0170:;
  /* 12cc0170 push 0xa */
  push32((uint32_t)(0xau));
  /* 12cc0172 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc0175 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc017a push eax */
  push32((uint32_t)(EAX));
  /* 12cc017b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc017e push ecx */
  push32((uint32_t)(ECX));
  /* 12cc017f call 0x12cb6cf0 */
  push32(0x12cc0184u); f_12cb6cf0();
  /* 12cc0184 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cc0187:;
  /* 12cc0187 mov eax, 1 */
  EAX = (0x1u);
L_12cc018c:;
  /* 12cc018c mov esp, ebp */
  ESP = (EBP);
  /* 12cc018e pop ebp */
  EBP = (pop32());
  /* 12cc018f ret  */
  ESPCHK(0x12cbff90u, _esp0);
  ESP += 4; return;
}

/* FUN_10010190 @ 0x12cc0190 (130 bytes, 47 insns) */
void f_12cc0190(void) {
  FTRACE(0x12cc0190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc0190 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc0191 mov ebp, esp */
  EBP = (ESP);
  /* 12cc0193 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc0196 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12cc019d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12cc01a4:;
  /* 12cc01a4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc01a7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc01aa jg 0x12cc020e */
  if ((!C.zf&&C.sf==C.of)) goto L_12cc020e;
  /* 12cc01ac cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc01b0 je 0x12cc020e */
  if (C.zf) goto L_12cc020e;
  /* 12cc01b2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc01b5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc01b8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12cc01b9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc01bb sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12cc01bd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cc01c0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc01c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc01c6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 12cc01c9 push eax */
  push32((uint32_t)(EAX));
  /* 12cc01ca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc01cd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12cc01cf push edx */
  push32((uint32_t)(EDX));
  /* 12cc01d0 call 0x12cc2880 */
  push32(0x12cc01d5u); f_12cc2880();
  /* 12cc01d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc01d8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cc01db cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc01df jne 0x12cc01f2 */
  if (!C.zf) goto L_12cc01f2;
  /* 12cc01e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc01e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc01e7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 12cc01eb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc01ee mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12cc01f0 jmp 0x12cc020c */
  goto L_12cc020c;
L_12cc01f2:;
  /* 12cc01f2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc01f6 jge 0x12cc0203 */
  if ((C.sf==C.of)) goto L_12cc0203;
  /* 12cc01f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc01fb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc01fe mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12cc0201 jmp 0x12cc020c */
  goto L_12cc020c;
L_12cc0203:;
  /* 12cc0203 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc0206 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0209 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12cc020c:;
  /* 12cc020c jmp 0x12cc01a4 */
  goto L_12cc01a4;
L_12cc020e:;
  /* 12cc020e mov esp, ebp */
  ESP = (EBP);
  /* 12cc0210 pop ebp */
  EBP = (pop32());
  /* 12cc0211 ret  */
  ESPCHK(0x12cc0190u, _esp0);
  ESP += 4; return;
}

/* FUN_10010220 @ 0x12cc0220 (186 bytes, 50 insns) */
void f_12cc0220(void) {
  FTRACE(0x12cc0220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc0220 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc0221 mov ebp, esp */
  EBP = (ESP);
  /* 12cc0223 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc0224 mov eax, dword ptr [0x12ce0794] */
  EAX = (r32((uint32_t)(0x12ce0794)));
  /* 12cc0229 push eax */
  push32((uint32_t)(EAX));
  /* 12cc022a call 0x12cb6fe0 */
  push32(0x12cc022fu); f_12cb6fe0();
  /* 12cc022f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0232 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cc0234 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0237 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12cc023a mov dword ptr [0x12ce0790], ecx */
  w32((uint32_t)(0x12ce0790), (ECX));
  /* 12cc0240 mov edx, dword ptr [0x12ce0798] */
  EDX = (r32((uint32_t)(0x12ce0798)));
  /* 12cc0246 push edx */
  push32((uint32_t)(EDX));
  /* 12cc0247 call 0x12cb6fe0 */
  push32(0x12cc024cu); f_12cb6fe0();
  /* 12cc024c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc024f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cc0251 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0254 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12cc0257 mov dword ptr [0x12ce0788], ecx */
  w32((uint32_t)(0x12ce0788), (ECX));
  /* 12cc025d mov dword ptr [0x12ce0784], 0 */
  w32((uint32_t)(0x12ce0784), (0x0u));
  /* 12cc0267 cmp dword ptr [0x12ce0790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc026e je 0x12cc0279 */
  if (C.zf) goto L_12cc0279;
  /* 12cc0270 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12cc0277 jmp 0x12cc028b */
  goto L_12cc028b;
L_12cc0279:;
  /* 12cc0279 mov edx, dword ptr [0x12ce0794] */
  EDX = (r32((uint32_t)(0x12ce0794)));
  /* 12cc027f push edx */
  push32((uint32_t)(EDX));
  /* 12cc0280 call 0x12cc0cc0 */
  push32(0x12cc0285u); f_12cc0cc0();
  /* 12cc0285 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0288 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cc028b:;
  /* 12cc028b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc028e mov dword ptr [0x12ce078c], eax */
  w32((uint32_t)(0x12ce078c), (EAX));
  /* 12cc0293 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cc0295 push 0x12cc02e0 */
  push32((uint32_t)(0x12cc02e0u));
  /* 12cc029a call dword ptr [0x12ce32a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32a0))), 0x12cc02a0u);
  /* 12cc02a0 mov ecx, dword ptr [0x12ce079c] */
  ECX = (r32((uint32_t)(0x12ce079c)));
  /* 12cc02a6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 12cc02ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cc02ae je 0x12cc02cc */
  if (C.zf) goto L_12cc02cc;
  /* 12cc02b0 mov edx, dword ptr [0x12ce079c] */
  EDX = (r32((uint32_t)(0x12ce079c)));
  /* 12cc02b6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 12cc02bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cc02be je 0x12cc02cc */
  if (C.zf) goto L_12cc02cc;
  /* 12cc02c0 mov eax, dword ptr [0x12ce079c] */
  EAX = (r32((uint32_t)(0x12ce079c)));
  /* 12cc02c5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 12cc02c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc02ca jne 0x12cc02d6 */
  if (!C.zf) goto L_12cc02d6;
L_12cc02cc:;
  /* 12cc02cc mov dword ptr [0x12ce079c], 0 */
  w32((uint32_t)(0x12ce079c), (0x0u));
L_12cc02d6:;
  /* 12cc02d6 mov esp, ebp */
  ESP = (EBP);
  /* 12cc02d8 pop ebp */
  EBP = (pop32());
  /* 12cc02d9 ret  */
  ESPCHK(0x12cc0220u, _esp0);
  ESP += 4; return;
}

/* FUN_100102e0 @ 0x12cc02e0 (804 bytes, 220 insns) */
void f_12cc02e0(void) {
  FTRACE(0x12cc02e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc02e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc02e1 mov ebp, esp */
  EBP = (ESP);
  /* 12cc02e3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc02e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc02e9 push eax */
  push32((uint32_t)(EAX));
  /* 12cc02ea call 0x12cc0c40 */
  push32(0x12cc02efu); f_12cc0c40();
  /* 12cc02ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc02f2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12cc02f5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12cc02f7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12cc02fa push ecx */
  push32((uint32_t)(ECX));
  /* 12cc02fb mov edx, dword ptr [0x12ce0788] */
  EDX = (r32((uint32_t)(0x12ce0788)));
  /* 12cc0301 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cc0303 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc0305 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 12cc030b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0311 push edx */
  push32((uint32_t)(EDX));
  /* 12cc0312 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12cc0315 push eax */
  push32((uint32_t)(EAX));
  /* 12cc0316 call dword ptr [0x12ce07a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce07a4))), 0x12cc031cu);
  /* 12cc031c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc031e jne 0x12cc0334 */
  if (!C.zf) goto L_12cc0334;
  /* 12cc0320 mov dword ptr [0x12ce079c], 0 */
  w32((uint32_t)(0x12ce079c), (0x0u));
  /* 12cc032a mov eax, 1 */
  EAX = (0x1u);
  /* 12cc032f jmp 0x12cc05fe */
  goto L_12cc05fe;
L_12cc0334:;
  /* 12cc0334 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12cc0337 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc0338 mov edx, dword ptr [0x12ce0798] */
  EDX = (r32((uint32_t)(0x12ce0798)));
  /* 12cc033e push edx */
  push32((uint32_t)(EDX));
  /* 12cc033f call 0x12cc2880 */
  push32(0x12cc0344u); f_12cc2880();
  /* 12cc0344 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0347 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc0349 jne 0x12cc046f */
  if (!C.zf) goto L_12cc046f;
  /* 12cc034f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12cc0351 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12cc0354 push eax */
  push32((uint32_t)(EAX));
  /* 12cc0355 mov ecx, dword ptr [0x12ce0790] */
  ECX = (r32((uint32_t)(0x12ce0790)));
  /* 12cc035b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cc035d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc035f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12cc0365 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc036b push ecx */
  push32((uint32_t)(ECX));
  /* 12cc036c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12cc036f push edx */
  push32((uint32_t)(EDX));
  /* 12cc0370 call dword ptr [0x12ce07a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce07a4))), 0x12cc0376u);
  /* 12cc0376 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc0378 jne 0x12cc038e */
  if (!C.zf) goto L_12cc038e;
  /* 12cc037a mov dword ptr [0x12ce079c], 0 */
  w32((uint32_t)(0x12ce079c), (0x0u));
  /* 12cc0384 mov eax, 1 */
  EAX = (0x1u);
  /* 12cc0389 jmp 0x12cc05fe */
  goto L_12cc05fe;
L_12cc038e:;
  /* 12cc038e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12cc0391 push eax */
  push32((uint32_t)(EAX));
  /* 12cc0392 mov ecx, dword ptr [0x12ce0794] */
  ECX = (r32((uint32_t)(0x12ce0794)));
  /* 12cc0398 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc0399 call 0x12cc2880 */
  push32(0x12cc039eu); f_12cc2880();
  /* 12cc039e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc03a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc03a3 jne 0x12cc03d0 */
  if (!C.zf) goto L_12cc03d0;
  /* 12cc03a5 mov edx, dword ptr [0x12ce079c] */
  EDX = (r32((uint32_t)(0x12ce079c)));
  /* 12cc03ab or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 12cc03b1 mov dword ptr [0x12ce079c], edx */
  w32((uint32_t)(0x12ce079c), (EDX));
  /* 12cc03b7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12cc03ba mov dword ptr [0x12ce07a0], eax */
  w32((uint32_t)(0x12ce07a0), (EAX));
  /* 12cc03bf mov ecx, dword ptr [0x12ce07a0] */
  ECX = (r32((uint32_t)(0x12ce07a0)));
  /* 12cc03c5 mov dword ptr [0x12ce0784], ecx */
  w32((uint32_t)(0x12ce0784), (ECX));
  /* 12cc03cb jmp 0x12cc046f */
  goto L_12cc046f;
L_12cc03d0:;
  /* 12cc03d0 mov edx, dword ptr [0x12ce079c] */
  EDX = (r32((uint32_t)(0x12ce079c)));
  /* 12cc03d6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12cc03d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cc03db jne 0x12cc046f */
  if (!C.zf) goto L_12cc046f;
  /* 12cc03e1 cmp dword ptr [0x12ce078c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce078c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc03e8 je 0x12cc043d */
  if (C.zf) goto L_12cc043d;
  /* 12cc03ea mov eax, dword ptr [0x12ce078c] */
  EAX = (r32((uint32_t)(0x12ce078c)));
  /* 12cc03ef push eax */
  push32((uint32_t)(EAX));
  /* 12cc03f0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12cc03f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc03f4 mov edx, dword ptr [0x12ce0794] */
  EDX = (r32((uint32_t)(0x12ce0794)));
  /* 12cc03fa push edx */
  push32((uint32_t)(EDX));
  /* 12cc03fb call 0x12cc2950 */
  push32(0x12cc0400u); f_12cc2950();
  /* 12cc0400 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0403 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc0405 jne 0x12cc043d */
  if (!C.zf) goto L_12cc043d;
  /* 12cc0407 mov eax, dword ptr [0x12ce079c] */
  EAX = (r32((uint32_t)(0x12ce079c)));
  /* 12cc040c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 12cc040e mov dword ptr [0x12ce079c], eax */
  w32((uint32_t)(0x12ce079c), (EAX));
  /* 12cc0413 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12cc0416 mov dword ptr [0x12ce07a0], ecx */
  w32((uint32_t)(0x12ce07a0), (ECX));
  /* 12cc041c mov edx, dword ptr [0x12ce0794] */
  EDX = (r32((uint32_t)(0x12ce0794)));
  /* 12cc0422 push edx */
  push32((uint32_t)(EDX));
  /* 12cc0423 call 0x12cb6fe0 */
  push32(0x12cc0428u); f_12cb6fe0();
  /* 12cc0428 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc042b cmp eax, dword ptr [0x12ce078c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ce078c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0431 jne 0x12cc043b */
  if (!C.zf) goto L_12cc043b;
  /* 12cc0433 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12cc0436 mov dword ptr [0x12ce0784], eax */
  w32((uint32_t)(0x12ce0784), (EAX));
L_12cc043b:;
  /* 12cc043b jmp 0x12cc046f */
  goto L_12cc046f;
L_12cc043d:;
  /* 12cc043d mov ecx, dword ptr [0x12ce079c] */
  ECX = (r32((uint32_t)(0x12ce079c)));
  /* 12cc0443 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12cc0446 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cc0448 jne 0x12cc046f */
  if (!C.zf) goto L_12cc046f;
  /* 12cc044a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12cc044d push edx */
  push32((uint32_t)(EDX));
  /* 12cc044e call 0x12cc0980 */
  push32(0x12cc0453u); f_12cc0980();
  /* 12cc0453 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0456 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc0458 je 0x12cc046f */
  if (C.zf) goto L_12cc046f;
  /* 12cc045a mov eax, dword ptr [0x12ce079c] */
  EAX = (r32((uint32_t)(0x12ce079c)));
  /* 12cc045f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12cc0461 mov dword ptr [0x12ce079c], eax */
  w32((uint32_t)(0x12ce079c), (EAX));
  /* 12cc0466 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12cc0469 mov dword ptr [0x12ce07a0], ecx */
  w32((uint32_t)(0x12ce07a0), (ECX));
L_12cc046f:;
  /* 12cc046f mov edx, dword ptr [0x12ce079c] */
  EDX = (r32((uint32_t)(0x12ce079c)));
  /* 12cc0475 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 12cc047b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0481 je 0x12cc05f1 */
  if (C.zf) goto L_12cc05f1;
  /* 12cc0487 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12cc0489 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12cc048c push eax */
  push32((uint32_t)(EAX));
  /* 12cc048d mov ecx, dword ptr [0x12ce0790] */
  ECX = (r32((uint32_t)(0x12ce0790)));
  /* 12cc0493 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cc0495 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc0497 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12cc049d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc04a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc04a4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12cc04a7 push edx */
  push32((uint32_t)(EDX));
  /* 12cc04a8 call dword ptr [0x12ce07a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce07a4))), 0x12cc04aeu);
  /* 12cc04ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc04b0 jne 0x12cc04c6 */
  if (!C.zf) goto L_12cc04c6;
  /* 12cc04b2 mov dword ptr [0x12ce079c], 0 */
  w32((uint32_t)(0x12ce079c), (0x0u));
  /* 12cc04bc mov eax, 1 */
  EAX = (0x1u);
  /* 12cc04c1 jmp 0x12cc05fe */
  goto L_12cc05fe;
L_12cc04c6:;
  /* 12cc04c6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12cc04c9 push eax */
  push32((uint32_t)(EAX));
  /* 12cc04ca mov ecx, dword ptr [0x12ce0794] */
  ECX = (r32((uint32_t)(0x12ce0794)));
  /* 12cc04d0 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc04d1 call 0x12cc2880 */
  push32(0x12cc04d6u); f_12cc2880();
  /* 12cc04d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc04d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc04db jne 0x12cc0590 */
  if (!C.zf) goto L_12cc0590;
  /* 12cc04e1 mov edx, dword ptr [0x12ce079c] */
  EDX = (r32((uint32_t)(0x12ce079c)));
  /* 12cc04e7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12cc04ea mov dword ptr [0x12ce079c], edx */
  w32((uint32_t)(0x12ce079c), (EDX));
  /* 12cc04f0 cmp dword ptr [0x12ce0790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc04f7 je 0x12cc051a */
  if (C.zf) goto L_12cc051a;
  /* 12cc04f9 mov eax, dword ptr [0x12ce079c] */
  EAX = (r32((uint32_t)(0x12ce079c)));
  /* 12cc04fe or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12cc0501 mov dword ptr [0x12ce079c], eax */
  w32((uint32_t)(0x12ce079c), (EAX));
  /* 12cc0506 cmp dword ptr [0x12ce0784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc050d jne 0x12cc0518 */
  if (!C.zf) goto L_12cc0518;
  /* 12cc050f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12cc0512 mov dword ptr [0x12ce0784], ecx */
  w32((uint32_t)(0x12ce0784), (ECX));
L_12cc0518:;
  /* 12cc0518 jmp 0x12cc058e */
  goto L_12cc058e;
L_12cc051a:;
  /* 12cc051a cmp dword ptr [0x12ce078c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce078c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0521 je 0x12cc056f */
  if (C.zf) goto L_12cc056f;
  /* 12cc0523 mov edx, dword ptr [0x12ce0794] */
  EDX = (r32((uint32_t)(0x12ce0794)));
  /* 12cc0529 push edx */
  push32((uint32_t)(EDX));
  /* 12cc052a call 0x12cb6fe0 */
  push32(0x12cc052fu); f_12cb6fe0();
  /* 12cc052f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0532 cmp eax, dword ptr [0x12ce078c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ce078c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0538 jne 0x12cc056f */
  if (!C.zf) goto L_12cc056f;
  /* 12cc053a push 1 */
  push32((uint32_t)(0x1u));
  /* 12cc053c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12cc053f push eax */
  push32((uint32_t)(EAX));
  /* 12cc0540 call 0x12cc09d0 */
  push32(0x12cc0545u); f_12cc09d0();
  /* 12cc0545 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0548 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc054a je 0x12cc056d */
  if (C.zf) goto L_12cc056d;
  /* 12cc054c mov ecx, dword ptr [0x12ce079c] */
  ECX = (r32((uint32_t)(0x12ce079c)));
  /* 12cc0552 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12cc0555 mov dword ptr [0x12ce079c], ecx */
  w32((uint32_t)(0x12ce079c), (ECX));
  /* 12cc055b cmp dword ptr [0x12ce0784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0562 jne 0x12cc056d */
  if (!C.zf) goto L_12cc056d;
  /* 12cc0564 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12cc0567 mov dword ptr [0x12ce0784], edx */
  w32((uint32_t)(0x12ce0784), (EDX));
L_12cc056d:;
  /* 12cc056d jmp 0x12cc058e */
  goto L_12cc058e;
L_12cc056f:;
  /* 12cc056f mov eax, dword ptr [0x12ce079c] */
  EAX = (r32((uint32_t)(0x12ce079c)));
  /* 12cc0574 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12cc0577 mov dword ptr [0x12ce079c], eax */
  w32((uint32_t)(0x12ce079c), (EAX));
  /* 12cc057c cmp dword ptr [0x12ce0784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0583 jne 0x12cc058e */
  if (!C.zf) goto L_12cc058e;
  /* 12cc0585 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12cc0588 mov dword ptr [0x12ce0784], ecx */
  w32((uint32_t)(0x12ce0784), (ECX));
L_12cc058e:;
  /* 12cc058e jmp 0x12cc05f1 */
  goto L_12cc05f1;
L_12cc0590:;
  /* 12cc0590 cmp dword ptr [0x12ce0790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0597 jne 0x12cc05f1 */
  if (!C.zf) goto L_12cc05f1;
  /* 12cc0599 cmp dword ptr [0x12ce078c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce078c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc05a0 je 0x12cc05f1 */
  if (C.zf) goto L_12cc05f1;
  /* 12cc05a2 mov edx, dword ptr [0x12ce078c] */
  EDX = (r32((uint32_t)(0x12ce078c)));
  /* 12cc05a8 push edx */
  push32((uint32_t)(EDX));
  /* 12cc05a9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12cc05ac push eax */
  push32((uint32_t)(EAX));
  /* 12cc05ad mov ecx, dword ptr [0x12ce0794] */
  ECX = (r32((uint32_t)(0x12ce0794)));
  /* 12cc05b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc05b4 call 0x12cc2950 */
  push32(0x12cc05b9u); f_12cc2950();
  /* 12cc05b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc05bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc05be jne 0x12cc05f1 */
  if (!C.zf) goto L_12cc05f1;
  /* 12cc05c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc05c2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12cc05c5 push edx */
  push32((uint32_t)(EDX));
  /* 12cc05c6 call 0x12cc09d0 */
  push32(0x12cc05cbu); f_12cc09d0();
  /* 12cc05cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc05ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc05d0 je 0x12cc05f1 */
  if (C.zf) goto L_12cc05f1;
  /* 12cc05d2 mov eax, dword ptr [0x12ce079c] */
  EAX = (r32((uint32_t)(0x12ce079c)));
  /* 12cc05d7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12cc05da mov dword ptr [0x12ce079c], eax */
  w32((uint32_t)(0x12ce079c), (EAX));
  /* 12cc05df cmp dword ptr [0x12ce0784], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0784))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc05e6 jne 0x12cc05f1 */
  if (!C.zf) goto L_12cc05f1;
  /* 12cc05e8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12cc05eb mov dword ptr [0x12ce0784], ecx */
  w32((uint32_t)(0x12ce0784), (ECX));
L_12cc05f1:;
  /* 12cc05f1 mov eax, dword ptr [0x12ce079c] */
  EAX = (r32((uint32_t)(0x12ce079c)));
  /* 12cc05f6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12cc05f9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cc05fb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc05fd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12cc05fe:;
  /* 12cc05fe mov esp, ebp */
  ESP = (EBP);
  /* 12cc0600 pop ebp */
  EBP = (pop32());
  /* 12cc0601 ret 4 */
  ESPCHK(0x12cc02e0u, _esp0);
  ESP += 8; return;
}

/* FUN_10010610 @ 0x12cc0610 (116 bytes, 33 insns) */
void f_12cc0610(void) {
  FTRACE(0x12cc0610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc0610 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc0611 mov ebp, esp */
  EBP = (ESP);
  /* 12cc0613 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc0614 mov eax, dword ptr [0x12ce0794] */
  EAX = (r32((uint32_t)(0x12ce0794)));
  /* 12cc0619 push eax */
  push32((uint32_t)(EAX));
  /* 12cc061a call 0x12cb6fe0 */
  push32(0x12cc061fu); f_12cb6fe0();
  /* 12cc061f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0622 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cc0624 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0627 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12cc062a mov dword ptr [0x12ce0790], ecx */
  w32((uint32_t)(0x12ce0790), (ECX));
  /* 12cc0630 cmp dword ptr [0x12ce0790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0637 je 0x12cc0642 */
  if (C.zf) goto L_12cc0642;
  /* 12cc0639 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12cc0640 jmp 0x12cc0654 */
  goto L_12cc0654;
L_12cc0642:;
  /* 12cc0642 mov edx, dword ptr [0x12ce0794] */
  EDX = (r32((uint32_t)(0x12ce0794)));
  /* 12cc0648 push edx */
  push32((uint32_t)(EDX));
  /* 12cc0649 call 0x12cc0cc0 */
  push32(0x12cc064eu); f_12cc0cc0();
  /* 12cc064e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0651 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cc0654:;
  /* 12cc0654 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc0657 mov dword ptr [0x12ce078c], eax */
  w32((uint32_t)(0x12ce078c), (EAX));
  /* 12cc065c push 1 */
  push32((uint32_t)(0x1u));
  /* 12cc065e push 0x12cc0690 */
  push32((uint32_t)(0x12cc0690u));
  /* 12cc0663 call dword ptr [0x12ce32a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32a0))), 0x12cc0669u);
  /* 12cc0669 mov ecx, dword ptr [0x12ce079c] */
  ECX = (r32((uint32_t)(0x12ce079c)));
  /* 12cc066f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12cc0672 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cc0674 jne 0x12cc0680 */
  if (!C.zf) goto L_12cc0680;
  /* 12cc0676 mov dword ptr [0x12ce079c], 0 */
  w32((uint32_t)(0x12ce079c), (0x0u));
L_12cc0680:;
  /* 12cc0680 mov esp, ebp */
  ESP = (EBP);
  /* 12cc0682 pop ebp */
  EBP = (pop32());
  /* 12cc0683 ret  */
  ESPCHK(0x12cc0610u, _esp0);
  ESP += 4; return;
}

/* FUN_10010690 @ 0x12cc0690 (287 bytes, 86 insns) */
void f_12cc0690(void) {
  FTRACE(0x12cc0690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc0690 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc0691 mov ebp, esp */
  EBP = (ESP);
  /* 12cc0693 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc0696 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc0699 push eax */
  push32((uint32_t)(EAX));
  /* 12cc069a call 0x12cc0c40 */
  push32(0x12cc069fu); f_12cc0c40();
  /* 12cc069f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc06a2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12cc06a5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12cc06a7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12cc06aa push ecx */
  push32((uint32_t)(ECX));
  /* 12cc06ab mov edx, dword ptr [0x12ce0790] */
  EDX = (r32((uint32_t)(0x12ce0790)));
  /* 12cc06b1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cc06b3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc06b5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 12cc06bb add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc06c1 push edx */
  push32((uint32_t)(EDX));
  /* 12cc06c2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12cc06c5 push eax */
  push32((uint32_t)(EAX));
  /* 12cc06c6 call dword ptr [0x12ce07a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce07a4))), 0x12cc06ccu);
  /* 12cc06cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc06ce jne 0x12cc06e4 */
  if (!C.zf) goto L_12cc06e4;
  /* 12cc06d0 mov dword ptr [0x12ce079c], 0 */
  w32((uint32_t)(0x12ce079c), (0x0u));
  /* 12cc06da mov eax, 1 */
  EAX = (0x1u);
  /* 12cc06df jmp 0x12cc07a9 */
  goto L_12cc07a9;
L_12cc06e4:;
  /* 12cc06e4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12cc06e7 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc06e8 mov edx, dword ptr [0x12ce0794] */
  EDX = (r32((uint32_t)(0x12ce0794)));
  /* 12cc06ee push edx */
  push32((uint32_t)(EDX));
  /* 12cc06ef call 0x12cc2880 */
  push32(0x12cc06f4u); f_12cc2880();
  /* 12cc06f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc06f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc06f9 jne 0x12cc0739 */
  if (!C.zf) goto L_12cc0739;
  /* 12cc06fb cmp dword ptr [0x12ce0790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0702 jne 0x12cc0716 */
  if (!C.zf) goto L_12cc0716;
  /* 12cc0704 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cc0706 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12cc0709 push eax */
  push32((uint32_t)(EAX));
  /* 12cc070a call 0x12cc09d0 */
  push32(0x12cc070fu); f_12cc09d0();
  /* 12cc070f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0712 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc0714 je 0x12cc0737 */
  if (C.zf) goto L_12cc0737;
L_12cc0716:;
  /* 12cc0716 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12cc0719 mov dword ptr [0x12ce07a0], ecx */
  w32((uint32_t)(0x12ce07a0), (ECX));
  /* 12cc071f mov edx, dword ptr [0x12ce07a0] */
  EDX = (r32((uint32_t)(0x12ce07a0)));
  /* 12cc0725 mov dword ptr [0x12ce0784], edx */
  w32((uint32_t)(0x12ce0784), (EDX));
  /* 12cc072b mov eax, dword ptr [0x12ce079c] */
  EAX = (r32((uint32_t)(0x12ce079c)));
  /* 12cc0730 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12cc0732 mov dword ptr [0x12ce079c], eax */
  w32((uint32_t)(0x12ce079c), (EAX));
L_12cc0737:;
  /* 12cc0737 jmp 0x12cc079c */
  goto L_12cc079c;
L_12cc0739:;
  /* 12cc0739 cmp dword ptr [0x12ce0790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce0790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0740 jne 0x12cc079c */
  if (!C.zf) goto L_12cc079c;
  /* 12cc0742 cmp dword ptr [0x12ce078c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ce078c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0749 je 0x12cc079c */
  if (C.zf) goto L_12cc079c;
  /* 12cc074b mov ecx, dword ptr [0x12ce078c] */
  ECX = (r32((uint32_t)(0x12ce078c)));
  /* 12cc0751 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc0752 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 12cc0755 push edx */
  push32((uint32_t)(EDX));
  /* 12cc0756 mov eax, dword ptr [0x12ce0794] */
  EAX = (r32((uint32_t)(0x12ce0794)));
  /* 12cc075b push eax */
  push32((uint32_t)(EAX));
  /* 12cc075c call 0x12cc2950 */
  push32(0x12cc0761u); f_12cc2950();
  /* 12cc0761 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0764 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc0766 jne 0x12cc079c */
  if (!C.zf) goto L_12cc079c;
  /* 12cc0768 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc076a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12cc076d push ecx */
  push32((uint32_t)(ECX));
  /* 12cc076e call 0x12cc09d0 */
  push32(0x12cc0773u); f_12cc09d0();
  /* 12cc0773 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0776 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc0778 je 0x12cc079c */
  if (C.zf) goto L_12cc079c;
  /* 12cc077a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12cc077d mov dword ptr [0x12ce07a0], edx */
  w32((uint32_t)(0x12ce07a0), (EDX));
  /* 12cc0783 mov eax, dword ptr [0x12ce07a0] */
  EAX = (r32((uint32_t)(0x12ce07a0)));
  /* 12cc0788 mov dword ptr [0x12ce0784], eax */
  w32((uint32_t)(0x12ce0784), (EAX));
  /* 12cc078d mov ecx, dword ptr [0x12ce079c] */
  ECX = (r32((uint32_t)(0x12ce079c)));
  /* 12cc0793 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12cc0796 mov dword ptr [0x12ce079c], ecx */
  w32((uint32_t)(0x12ce079c), (ECX));
L_12cc079c:;
  /* 12cc079c mov eax, dword ptr [0x12ce079c] */
  EAX = (r32((uint32_t)(0x12ce079c)));
  /* 12cc07a1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12cc07a4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cc07a6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc07a8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12cc07a9:;
  /* 12cc07a9 mov esp, ebp */
  ESP = (EBP);
  /* 12cc07ab pop ebp */
  EBP = (pop32());
  /* 12cc07ac ret 4 */
  ESPCHK(0x12cc0690u, _esp0);
  ESP += 8; return;
}

/* FUN_100107b0 @ 0x12cc07b0 (69 bytes, 20 insns) */
void f_12cc07b0(void) {
  FTRACE(0x12cc07b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc07b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc07b1 mov ebp, esp */
  EBP = (ESP);
  /* 12cc07b3 mov eax, dword ptr [0x12ce0798] */
  EAX = (r32((uint32_t)(0x12ce0798)));
  /* 12cc07b8 push eax */
  push32((uint32_t)(EAX));
  /* 12cc07b9 call 0x12cb6fe0 */
  push32(0x12cc07beu); f_12cb6fe0();
  /* 12cc07be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc07c1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cc07c3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc07c6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12cc07c9 mov dword ptr [0x12ce0788], ecx */
  w32((uint32_t)(0x12ce0788), (ECX));
  /* 12cc07cf push 1 */
  push32((uint32_t)(0x1u));
  /* 12cc07d1 push 0x12cc0800 */
  push32((uint32_t)(0x12cc0800u));
  /* 12cc07d6 call dword ptr [0x12ce32a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32a0))), 0x12cc07dcu);
  /* 12cc07dc mov edx, dword ptr [0x12ce079c] */
  EDX = (r32((uint32_t)(0x12ce079c)));
  /* 12cc07e2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12cc07e5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cc07e7 jne 0x12cc07f3 */
  if (!C.zf) goto L_12cc07f3;
  /* 12cc07e9 mov dword ptr [0x12ce079c], 0 */
  w32((uint32_t)(0x12ce079c), (0x0u));
L_12cc07f3:;
  /* 12cc07f3 pop ebp */
  EBP = (pop32());
  /* 12cc07f4 ret  */
  ESPCHK(0x12cc07b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010800 @ 0x12cc0800 (172 bytes, 54 insns) */
void f_12cc0800(void) {
  FTRACE(0x12cc0800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc0800 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc0801 mov ebp, esp */
  EBP = (ESP);
  /* 12cc0803 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc0806 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc0809 push eax */
  push32((uint32_t)(EAX));
  /* 12cc080a call 0x12cc0c40 */
  push32(0x12cc080fu); f_12cc0c40();
  /* 12cc080f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0812 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12cc0815 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12cc0817 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12cc081a push ecx */
  push32((uint32_t)(ECX));
  /* 12cc081b mov edx, dword ptr [0x12ce0788] */
  EDX = (r32((uint32_t)(0x12ce0788)));
  /* 12cc0821 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cc0823 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc0825 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 12cc082b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0831 push edx */
  push32((uint32_t)(EDX));
  /* 12cc0832 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12cc0835 push eax */
  push32((uint32_t)(EAX));
  /* 12cc0836 call dword ptr [0x12ce07a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce07a4))), 0x12cc083cu);
  /* 12cc083c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc083e jne 0x12cc0851 */
  if (!C.zf) goto L_12cc0851;
  /* 12cc0840 mov dword ptr [0x12ce079c], 0 */
  w32((uint32_t)(0x12ce079c), (0x0u));
  /* 12cc084a mov eax, 1 */
  EAX = (0x1u);
  /* 12cc084f jmp 0x12cc08a6 */
  goto L_12cc08a6;
L_12cc0851:;
  /* 12cc0851 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12cc0854 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc0855 mov edx, dword ptr [0x12ce0798] */
  EDX = (r32((uint32_t)(0x12ce0798)));
  /* 12cc085b push edx */
  push32((uint32_t)(EDX));
  /* 12cc085c call 0x12cc2880 */
  push32(0x12cc0861u); f_12cc2880();
  /* 12cc0861 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0864 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc0866 jne 0x12cc0899 */
  if (!C.zf) goto L_12cc0899;
  /* 12cc0868 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12cc086b push eax */
  push32((uint32_t)(EAX));
  /* 12cc086c call 0x12cc0980 */
  push32(0x12cc0871u); f_12cc0980();
  /* 12cc0871 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0874 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc0876 je 0x12cc0899 */
  if (C.zf) goto L_12cc0899;
  /* 12cc0878 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12cc087b mov dword ptr [0x12ce07a0], ecx */
  w32((uint32_t)(0x12ce07a0), (ECX));
  /* 12cc0881 mov edx, dword ptr [0x12ce07a0] */
  EDX = (r32((uint32_t)(0x12ce07a0)));
  /* 12cc0887 mov dword ptr [0x12ce0784], edx */
  w32((uint32_t)(0x12ce0784), (EDX));
  /* 12cc088d mov eax, dword ptr [0x12ce079c] */
  EAX = (r32((uint32_t)(0x12ce079c)));
  /* 12cc0892 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12cc0894 mov dword ptr [0x12ce079c], eax */
  w32((uint32_t)(0x12ce079c), (EAX));
L_12cc0899:;
  /* 12cc0899 mov eax, dword ptr [0x12ce079c] */
  EAX = (r32((uint32_t)(0x12ce079c)));
  /* 12cc089e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12cc08a1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12cc08a3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc08a5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12cc08a6:;
  /* 12cc08a6 mov esp, ebp */
  ESP = (EBP);
  /* 12cc08a8 pop ebp */
  EBP = (pop32());
  /* 12cc08a9 ret 4 */
  ESPCHK(0x12cc0800u, _esp0);
  ESP += 8; return;
}

/* FUN_100108b0 @ 0x12cc08b0 (43 bytes, 11 insns) */
void f_12cc08b0(void) {
  FTRACE(0x12cc08b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc08b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc08b1 mov ebp, esp */
  EBP = (ESP);
  /* 12cc08b3 mov eax, dword ptr [0x12ce079c] */
  EAX = (r32((uint32_t)(0x12ce079c)));
  /* 12cc08b8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 12cc08bd mov dword ptr [0x12ce079c], eax */
  w32((uint32_t)(0x12ce079c), (EAX));
  /* 12cc08c2 call dword ptr [0x12ce329c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce329c))), 0x12cc08c8u);
  /* 12cc08c8 mov dword ptr [0x12ce07a0], eax */
  w32((uint32_t)(0x12ce07a0), (EAX));
  /* 12cc08cd mov ecx, dword ptr [0x12ce07a0] */
  ECX = (r32((uint32_t)(0x12ce07a0)));
  /* 12cc08d3 mov dword ptr [0x12ce0784], ecx */
  w32((uint32_t)(0x12ce0784), (ECX));
  /* 12cc08d9 pop ebp */
  EBP = (pop32());
  /* 12cc08da ret  */
  ESPCHK(0x12cc08b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100108e0 @ 0x12cc08e0 (155 bytes, 57 insns) */
void f_12cc08e0(void) {
  FTRACE(0x12cc08e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc08e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc08e1 mov ebp, esp */
  EBP = (ESP);
  /* 12cc08e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc08e6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc08ea je 0x12cc090b */
  if (C.zf) goto L_12cc090b;
  /* 12cc08ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc08ef movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12cc08f2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cc08f4 je 0x12cc090b */
  if (C.zf) goto L_12cc090b;
  /* 12cc08f6 push 0x12cdcb14 */
  push32((uint32_t)(0x12cdcb14u));
  /* 12cc08fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc08fe push edx */
  push32((uint32_t)(EDX));
  /* 12cc08ff call 0x12cbfe40 */
  push32(0x12cc0904u); f_12cbfe40();
  /* 12cc0904 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0907 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc0909 jne 0x12cc0933 */
  if (!C.zf) goto L_12cc0933;
L_12cc090b:;
  /* 12cc090b push 8 */
  push32((uint32_t)(0x8u));
  /* 12cc090d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12cc0910 push eax */
  push32((uint32_t)(EAX));
  /* 12cc0911 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12cc0916 mov ecx, dword ptr [0x12ce07a0] */
  ECX = (r32((uint32_t)(0x12ce07a0)));
  /* 12cc091c push ecx */
  push32((uint32_t)(ECX));
  /* 12cc091d call dword ptr [0x12ce07a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce07a4))), 0x12cc0923u);
  /* 12cc0923 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc0925 jne 0x12cc092b */
  if (!C.zf) goto L_12cc092b;
  /* 12cc0927 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc0929 jmp 0x12cc0977 */
  goto L_12cc0977;
L_12cc092b:;
  /* 12cc092b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 12cc092e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12cc0931 jmp 0x12cc096b */
  goto L_12cc096b;
L_12cc0933:;
  /* 12cc0933 push 0x12cdcb10 */
  push32((uint32_t)(0x12cdcb10u));
  /* 12cc0938 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc093b push eax */
  push32((uint32_t)(EAX));
  /* 12cc093c call 0x12cbfe40 */
  push32(0x12cc0941u); f_12cbfe40();
  /* 12cc0941 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0944 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc0946 jne 0x12cc096b */
  if (!C.zf) goto L_12cc096b;
  /* 12cc0948 push 8 */
  push32((uint32_t)(0x8u));
  /* 12cc094a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12cc094d push ecx */
  push32((uint32_t)(ECX));
  /* 12cc094e push 0xb */
  push32((uint32_t)(0xbu));
  /* 12cc0950 mov edx, dword ptr [0x12ce07a0] */
  EDX = (r32((uint32_t)(0x12ce07a0)));
  /* 12cc0956 push edx */
  push32((uint32_t)(EDX));
  /* 12cc0957 call dword ptr [0x12ce07a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce07a4))), 0x12cc095du);
  /* 12cc095d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc095f jne 0x12cc0965 */
  if (!C.zf) goto L_12cc0965;
  /* 12cc0961 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc0963 jmp 0x12cc0977 */
  goto L_12cc0977;
L_12cc0965:;
  /* 12cc0965 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12cc0968 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12cc096b:;
  /* 12cc096b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc096e push ecx */
  push32((uint32_t)(ECX));
  /* 12cc096f call 0x12cc2a60 */
  push32(0x12cc0974u); f_12cc2a60();
  /* 12cc0974 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12cc0977:;
  /* 12cc0977 mov esp, ebp */
  ESP = (EBP);
  /* 12cc0979 pop ebp */
  EBP = (pop32());
  /* 12cc097a ret  */
  ESPCHK(0x12cc08e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010980 @ 0x12cc0980 (79 bytes, 26 insns) */
void f_12cc0980(void) {
  FTRACE(0x12cc0980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc0980 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc0981 mov ebp, esp */
  EBP = (ESP);
  /* 12cc0983 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc0986 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 12cc098a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 12cc098e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12cc0995 jmp 0x12cc09a0 */
  goto L_12cc09a0;
L_12cc0997:;
  /* 12cc0997 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc099a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc099d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12cc09a0:;
  /* 12cc09a0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc09a4 jae 0x12cc09c6 */
  if (!C.cf) goto L_12cc09c6;
  /* 12cc09a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc09a9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12cc09af mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc09b2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12cc09b4 mov cx, word ptr [eax*2 + 0x12cdf9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x12cdf9c4)));
  /* 12cc09bc cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc09be jne 0x12cc09c4 */
  if (!C.zf) goto L_12cc09c4;
  /* 12cc09c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc09c2 jmp 0x12cc09cb */
  goto L_12cc09cb;
L_12cc09c4:;
  /* 12cc09c4 jmp 0x12cc0997 */
  goto L_12cc0997;
L_12cc09c6:;
  /* 12cc09c6 mov eax, 1 */
  EAX = (0x1u);
L_12cc09cb:;
  /* 12cc09cb mov esp, ebp */
  ESP = (EBP);
  /* 12cc09cd pop ebp */
  EBP = (pop32());
  /* 12cc09ce ret  */
  ESPCHK(0x12cc0980u, _esp0);
  ESP += 4; return;
}

/* FUN_100109d0 @ 0x12cc09d0 (135 bytes, 48 insns) */
void f_12cc09d0(void) {
  FTRACE(0x12cc09d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc09d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc09d1 mov ebp, esp */
  EBP = (ESP);
  /* 12cc09d3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc09d6 push esi */
  push32((uint32_t)(ESI));
  /* 12cc09d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc09da and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cc09df and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cc09e4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cc09e9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 12cc09ec and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cc09f1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cc09f4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12cc09f6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 12cc09f9 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc09fa push 1 */
  push32((uint32_t)(0x1u));
  /* 12cc09fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc09ff push edx */
  push32((uint32_t)(EDX));
  /* 12cc0a00 call dword ptr [0x12ce07a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce07a4))), 0x12cc0a06u);
  /* 12cc0a06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc0a08 jne 0x12cc0a0e */
  if (!C.zf) goto L_12cc0a0e;
  /* 12cc0a0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc0a0c jmp 0x12cc0a52 */
  goto L_12cc0a52;
L_12cc0a0e:;
  /* 12cc0a0e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 12cc0a11 push eax */
  push32((uint32_t)(EAX));
  /* 12cc0a12 call 0x12cc0c40 */
  push32(0x12cc0a17u); f_12cc0c40();
  /* 12cc0a17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0a1a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0a1d je 0x12cc0a4d */
  if (C.zf) goto L_12cc0a4d;
  /* 12cc0a1f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0a23 je 0x12cc0a4d */
  if (C.zf) goto L_12cc0a4d;
  /* 12cc0a25 mov ecx, dword ptr [0x12ce0794] */
  ECX = (r32((uint32_t)(0x12ce0794)));
  /* 12cc0a2b push ecx */
  push32((uint32_t)(ECX));
  /* 12cc0a2c call 0x12cc0cc0 */
  push32(0x12cc0a31u); f_12cc0cc0();
  /* 12cc0a31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0a34 mov esi, eax */
  ESI = (EAX);
  /* 12cc0a36 mov edx, dword ptr [0x12ce0794] */
  EDX = (r32((uint32_t)(0x12ce0794)));
  /* 12cc0a3c push edx */
  push32((uint32_t)(EDX));
  /* 12cc0a3d call 0x12cb6fe0 */
  push32(0x12cc0a42u); f_12cb6fe0();
  /* 12cc0a42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0a45 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0a47 jne 0x12cc0a4d */
  if (!C.zf) goto L_12cc0a4d;
  /* 12cc0a49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc0a4b jmp 0x12cc0a52 */
  goto L_12cc0a52;
L_12cc0a4d:;
  /* 12cc0a4d mov eax, 1 */
  EAX = (0x1u);
L_12cc0a52:;
  /* 12cc0a52 pop esi */
  ESI = (pop32());
  /* 12cc0a53 mov esp, ebp */
  ESP = (EBP);
  /* 12cc0a55 pop ebp */
  EBP = (pop32());
  /* 12cc0a56 ret  */
  ESPCHK(0x12cc09d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a60 @ 0x12cc0a60 (77 bytes, 18 insns) */
void f_12cc0a60(void) {
  FTRACE(0x12cc0a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc0a60 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc0a61 mov ebp, esp */
  EBP = (ESP);
  /* 12cc0a63 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc0a69 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 12cc0a73 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 12cc0a79 push eax */
  push32((uint32_t)(EAX));
  /* 12cc0a7a call dword ptr [0x12ce3298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3298))), 0x12cc0a80u);
  /* 12cc0a80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc0a82 je 0x12cc0a99 */
  if (C.zf) goto L_12cc0a99;
  /* 12cc0a84 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0a8b jne 0x12cc0a99 */
  if (!C.zf) goto L_12cc0a99;
  /* 12cc0a8d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 12cc0a97 jmp 0x12cc0aa3 */
  goto L_12cc0aa3;
L_12cc0a99:;
  /* 12cc0a99 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_12cc0aa3:;
  /* 12cc0aa3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12cc0aa9 mov esp, ebp */
  ESP = (EBP);
  /* 12cc0aab pop ebp */
  EBP = (pop32());
  /* 12cc0aac ret  */
  ESPCHK(0x12cc0a60u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x12cc0ab0 (388 bytes, 118 insns) */
void f_12cc0ab0(void) {
  FTRACE(0x12cc0ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc0ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc0ab1 mov ebp, esp */
  EBP = (ESP);
  /* 12cc0ab3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc0ab6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12cc0abd mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 12cc0ac4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12cc0acb:;
  /* 12cc0acb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc0ace cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0ad1 jg 0x12cc0c18 */
  if ((!C.zf&&C.sf==C.of)) goto L_12cc0c18;
  /* 12cc0ad7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc0ada add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0add cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12cc0ade sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc0ae0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12cc0ae2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cc0ae5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc0ae8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cc0aeb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc0aee cmp edx, dword ptr [ecx + 0x12cdf520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x12cdf520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0af4 jne 0x12cc0bee */
  if (!C.zf) goto L_12cc0bee;
  /* 12cc0afa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc0afd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12cc0b00 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0b04 ja 0x12cc0b27 */
  if ((!C.cf&&!C.zf)) goto L_12cc0b27;
  /* 12cc0b06 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0b0a je 0x12cc0b99 */
  if (C.zf) goto L_12cc0b99;
  /* 12cc0b10 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0b14 je 0x12cc0b44 */
  if (C.zf) goto L_12cc0b44;
  /* 12cc0b16 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0b1a je 0x12cc0b66 */
  if (C.zf) goto L_12cc0b66;
  /* 12cc0b1c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0b20 je 0x12cc0b88 */
  if (C.zf) goto L_12cc0b88;
  /* 12cc0b22 jmp 0x12cc0bb8 */
  goto L_12cc0bb8;
L_12cc0b27:;
  /* 12cc0b27 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0b2e je 0x12cc0b55 */
  if (C.zf) goto L_12cc0b55;
  /* 12cc0b30 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0b37 je 0x12cc0b77 */
  if (C.zf) goto L_12cc0b77;
  /* 12cc0b39 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0b40 je 0x12cc0baa */
  if (C.zf) goto L_12cc0baa;
  /* 12cc0b42 jmp 0x12cc0bb8 */
  goto L_12cc0bb8;
L_12cc0b44:;
  /* 12cc0b44 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc0b47 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cc0b4a add ecx, 0x12cdf524 */
  { uint32_t _a=(ECX),_b=(0x12cdf524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0b50 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cc0b53 jmp 0x12cc0bb8 */
  goto L_12cc0bb8;
L_12cc0b55:;
  /* 12cc0b55 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc0b58 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cc0b5b mov eax, dword ptr [edx + 0x12cdf52c] */
  EAX = (r32((uint32_t)(EDX + 0x12cdf52c)));
  /* 12cc0b61 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cc0b64 jmp 0x12cc0bb8 */
  goto L_12cc0bb8;
L_12cc0b66:;
  /* 12cc0b66 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc0b69 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cc0b6c add ecx, 0x12cdf530 */
  { uint32_t _a=(ECX),_b=(0x12cdf530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0b72 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cc0b75 jmp 0x12cc0bb8 */
  goto L_12cc0bb8;
L_12cc0b77:;
  /* 12cc0b77 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc0b7a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cc0b7d mov eax, dword ptr [edx + 0x12cdf534] */
  EAX = (r32((uint32_t)(EDX + 0x12cdf534)));
  /* 12cc0b83 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cc0b86 jmp 0x12cc0bb8 */
  goto L_12cc0bb8;
L_12cc0b88:;
  /* 12cc0b88 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc0b8b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cc0b8e add ecx, 0x12cdf538 */
  { uint32_t _a=(ECX),_b=(0x12cdf538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0b94 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cc0b97 jmp 0x12cc0bb8 */
  goto L_12cc0bb8;
L_12cc0b99:;
  /* 12cc0b99 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc0b9c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cc0b9f add edx, 0x12cdf53c */
  { uint32_t _a=(EDX),_b=(0x12cdf53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0ba5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12cc0ba8 jmp 0x12cc0bb8 */
  goto L_12cc0bb8;
L_12cc0baa:;
  /* 12cc0baa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc0bad imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cc0bb0 add eax, 0x12cdf544 */
  { uint32_t _a=(EAX),_b=(0x12cdf544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0bb5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12cc0bb8:;
  /* 12cc0bb8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0bbc je 0x12cc0bc4 */
  if (C.zf) goto L_12cc0bc4;
  /* 12cc0bbe cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0bc2 jge 0x12cc0bc6 */
  if ((C.sf==C.of)) goto L_12cc0bc6;
L_12cc0bc4:;
  /* 12cc0bc4 jmp 0x12cc0c18 */
  goto L_12cc0c18;
L_12cc0bc6:;
  /* 12cc0bc6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc0bc9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc0bcc push ecx */
  push32((uint32_t)(ECX));
  /* 12cc0bcd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc0bd0 push edx */
  push32((uint32_t)(EDX));
  /* 12cc0bd1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc0bd4 push eax */
  push32((uint32_t)(EAX));
  /* 12cc0bd5 call 0x12cb79d0 */
  push32(0x12cc0bdau); f_12cb79d0();
  /* 12cc0bda add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0bdd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc0be0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0be3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 12cc0be7 mov eax, 1 */
  EAX = (0x1u);
  /* 12cc0bec jmp 0x12cc0c2e */
  goto L_12cc0c2e;
L_12cc0bee:;
  /* 12cc0bee mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc0bf1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cc0bf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc0bf7 cmp eax, dword ptr [edx + 0x12cdf520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x12cdf520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0bfd jae 0x12cc0c0a */
  if (!C.cf) goto L_12cc0c0a;
  /* 12cc0bff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc0c02 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc0c05 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12cc0c08 jmp 0x12cc0c13 */
  goto L_12cc0c13;
L_12cc0c0a:;
  /* 12cc0c0a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc0c0d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0c10 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12cc0c13:;
  /* 12cc0c13 jmp 0x12cc0acb */
  goto L_12cc0acb;
L_12cc0c18:;
  /* 12cc0c18 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc0c1b push eax */
  push32((uint32_t)(EAX));
  /* 12cc0c1c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc0c1f push ecx */
  push32((uint32_t)(ECX));
  /* 12cc0c20 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc0c23 push edx */
  push32((uint32_t)(EDX));
  /* 12cc0c24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc0c27 push eax */
  push32((uint32_t)(EAX));
  /* 12cc0c28 call dword ptr [0x12ce32a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce32a4))), 0x12cc0c2eu);
L_12cc0c2e:;
  /* 12cc0c2e mov esp, ebp */
  ESP = (EBP);
  /* 12cc0c30 pop ebp */
  EBP = (pop32());
  /* 12cc0c31 ret 0x10 */
  ESPCHK(0x12cc0ab0u, _esp0);
  ESP += 20; return;
}

/* FUN_10010c40 @ 0x12cc0c40 (118 bytes, 42 insns) */
void f_12cc0c40(void) {
  FTRACE(0x12cc0c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc0c40 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc0c41 mov ebp, esp */
  EBP = (ESP);
  /* 12cc0c43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc0c46 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12cc0c4d:;
  /* 12cc0c4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc0c50 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12cc0c52 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12cc0c55 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12cc0c59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc0c5c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0c5f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12cc0c62 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cc0c64 je 0x12cc0caf */
  if (C.zf) goto L_12cc0caf;
  /* 12cc0c66 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12cc0c6a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0c6d jl 0x12cc0c82 */
  if ((C.sf!=C.of)) goto L_12cc0c82;
  /* 12cc0c6f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12cc0c73 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0c76 jg 0x12cc0c82 */
  if ((!C.zf&&C.sf==C.of)) goto L_12cc0c82;
  /* 12cc0c78 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12cc0c7b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12cc0c7d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12cc0c80 jmp 0x12cc0c9c */
  goto L_12cc0c9c;
L_12cc0c82:;
  /* 12cc0c82 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12cc0c86 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0c89 jl 0x12cc0c9c */
  if ((C.sf!=C.of)) goto L_12cc0c9c;
  /* 12cc0c8b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12cc0c8f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0c92 jg 0x12cc0c9c */
  if ((!C.zf&&C.sf==C.of)) goto L_12cc0c9c;
  /* 12cc0c94 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12cc0c97 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12cc0c99 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_12cc0c9c:;
  /* 12cc0c9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc0c9f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12cc0ca2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12cc0ca6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12cc0caa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cc0cad jmp 0x12cc0c4d */
  goto L_12cc0c4d;
L_12cc0caf:;
  /* 12cc0caf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc0cb2 mov esp, ebp */
  ESP = (EBP);
  /* 12cc0cb4 pop ebp */
  EBP = (pop32());
  /* 12cc0cb5 ret  */
  ESPCHK(0x12cc0c40u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x12cc0cc0 (101 bytes, 36 insns) */
void f_12cc0cc0(void) {
  FTRACE(0x12cc0cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc0cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc0cc1 mov ebp, esp */
  EBP = (ESP);
  /* 12cc0cc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc0cc6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12cc0ccd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc0cd0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12cc0cd2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 12cc0cd5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc0cd8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0cdb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12cc0cde:;
  /* 12cc0cde movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12cc0ce2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0ce5 jl 0x12cc0cf0 */
  if ((C.sf!=C.of)) goto L_12cc0cf0;
  /* 12cc0ce7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12cc0ceb cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0cee jle 0x12cc0d02 */
  if ((C.zf||C.sf!=C.of)) goto L_12cc0d02;
L_12cc0cf0:;
  /* 12cc0cf0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12cc0cf4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0cf7 jl 0x12cc0d1e */
  if ((C.sf!=C.of)) goto L_12cc0d1e;
  /* 12cc0cf9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12cc0cfd cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0d00 jg 0x12cc0d1e */
  if ((!C.zf&&C.sf==C.of)) goto L_12cc0d1e;
L_12cc0d02:;
  /* 12cc0d02 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc0d05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0d08 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cc0d0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc0d0e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12cc0d10 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 12cc0d13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc0d16 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0d19 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12cc0d1c jmp 0x12cc0cde */
  goto L_12cc0cde;
L_12cc0d1e:;
  /* 12cc0d1e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc0d21 mov esp, ebp */
  ESP = (EBP);
  /* 12cc0d23 pop ebp */
  EBP = (pop32());
  /* 12cc0d24 ret  */
  ESPCHK(0x12cc0cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010d30 @ 0x12cc0d30 (122 bytes, 39 insns) */
void f_12cc0d30(void) {
  FTRACE(0x12cc0d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc0d30 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc0d31 mov ebp, esp */
  EBP = (ESP);
  /* 12cc0d33 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc0d34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc0d37 cmp eax, dword ptr [0x12ce203c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ce203c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0d3d jae 0x12cc0d61 */
  if (!C.cf) goto L_12cc0d61;
  /* 12cc0d3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc0d42 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12cc0d45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc0d48 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12cc0d4b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cc0d4e mov eax, dword ptr [ecx*4 + 0x12ce1f00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12ce1f00)));
  /* 12cc0d55 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12cc0d5a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12cc0d5d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cc0d5f jne 0x12cc0d7c */
  if (!C.zf) goto L_12cc0d7c;
L_12cc0d61:;
  /* 12cc0d61 call 0x12cbc080 */
  push32(0x12cc0d66u); f_12cbc080();
  /* 12cc0d66 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12cc0d6c call 0x12cbc090 */
  push32(0x12cc0d71u); f_12cbc090();
  /* 12cc0d71 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12cc0d77 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cc0d7a jmp 0x12cc0da6 */
  goto L_12cc0da6;
L_12cc0d7c:;
  /* 12cc0d7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc0d7f push edx */
  push32((uint32_t)(EDX));
  /* 12cc0d80 call 0x12cbd8a0 */
  push32(0x12cc0d85u); f_12cbd8a0();
  /* 12cc0d85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0d88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc0d8b push eax */
  push32((uint32_t)(EAX));
  /* 12cc0d8c call 0x12cc0db0 */
  push32(0x12cc0d91u); f_12cc0db0();
  /* 12cc0d91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0d94 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cc0d97 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc0d9a push ecx */
  push32((uint32_t)(ECX));
  /* 12cc0d9b call 0x12cbd930 */
  push32(0x12cc0da0u); f_12cbd930();
  /* 12cc0da0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0da3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12cc0da6:;
  /* 12cc0da6 mov esp, ebp */
  ESP = (EBP);
  /* 12cc0da8 pop ebp */
  EBP = (pop32());
  /* 12cc0da9 ret  */
  ESPCHK(0x12cc0d30u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x12cc0db0 (170 bytes, 59 insns) */
void f_12cc0db0(void) {
  FTRACE(0x12cc0db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc0db0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc0db1 mov ebp, esp */
  EBP = (ESP);
  /* 12cc0db3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc0db4 push esi */
  push32((uint32_t)(ESI));
  /* 12cc0db5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc0db8 push eax */
  push32((uint32_t)(EAX));
  /* 12cc0db9 call 0x12cbd720 */
  push32(0x12cc0dbeu); f_12cbd720();
  /* 12cc0dbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0dc1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0dc4 je 0x12cc0e03 */
  if (C.zf) goto L_12cc0e03;
  /* 12cc0dc6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0dca je 0x12cc0dd2 */
  if (C.zf) goto L_12cc0dd2;
  /* 12cc0dcc cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0dd0 jne 0x12cc0dec */
  if (!C.zf) goto L_12cc0dec;
L_12cc0dd2:;
  /* 12cc0dd2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12cc0dd4 call 0x12cbd720 */
  push32(0x12cc0dd9u); f_12cbd720();
  /* 12cc0dd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0ddc mov esi, eax */
  ESI = (EAX);
  /* 12cc0dde push 2 */
  push32((uint32_t)(0x2u));
  /* 12cc0de0 call 0x12cbd720 */
  push32(0x12cc0de5u); f_12cbd720();
  /* 12cc0de5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0de8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0dea je 0x12cc0e03 */
  if (C.zf) goto L_12cc0e03;
L_12cc0dec:;
  /* 12cc0dec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc0def push ecx */
  push32((uint32_t)(ECX));
  /* 12cc0df0 call 0x12cbd720 */
  push32(0x12cc0df5u); f_12cbd720();
  /* 12cc0df5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0df8 push eax */
  push32((uint32_t)(EAX));
  /* 12cc0df9 call dword ptr [0x12ce3294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3294))), 0x12cc0dffu);
  /* 12cc0dff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc0e01 je 0x12cc0e0c */
  if (C.zf) goto L_12cc0e0c;
L_12cc0e03:;
  /* 12cc0e03 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12cc0e0a jmp 0x12cc0e15 */
  goto L_12cc0e15;
L_12cc0e0c:;
  /* 12cc0e0c call dword ptr [0x12ce3348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ce3348))), 0x12cc0e12u);
  /* 12cc0e12 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12cc0e15:;
  /* 12cc0e15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc0e18 push edx */
  push32((uint32_t)(EDX));
  /* 12cc0e19 call 0x12cbd640 */
  push32(0x12cc0e1eu); f_12cbd640();
  /* 12cc0e1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0e21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc0e24 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12cc0e27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc0e2a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12cc0e2d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12cc0e30 mov edx, dword ptr [eax*4 + 0x12ce1f00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12ce1f00)));
  /* 12cc0e37 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 12cc0e3c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0e40 je 0x12cc0e53 */
  if (C.zf) goto L_12cc0e53;
  /* 12cc0e42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc0e45 push eax */
  push32((uint32_t)(EAX));
  /* 12cc0e46 call 0x12cbbfe0 */
  push32(0x12cc0e4bu); f_12cbbfe0();
  /* 12cc0e4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0e4e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12cc0e51 jmp 0x12cc0e55 */
  goto L_12cc0e55;
L_12cc0e53:;
  /* 12cc0e53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12cc0e55:;
  /* 12cc0e55 pop esi */
  ESI = (pop32());
  /* 12cc0e56 mov esp, ebp */
  ESP = (EBP);
  /* 12cc0e58 pop ebp */
  EBP = (pop32());
  /* 12cc0e59 ret  */
  ESPCHK(0x12cc0db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e60 @ 0x12cc0e60 (146 bytes, 52 insns) */
void f_12cc0e60(void) {
  FTRACE(0x12cc0e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc0e60 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc0e61 mov ebp, esp */
  EBP = (ESP);
  /* 12cc0e63 push ebx */
  push32((uint32_t)(EBX));
  /* 12cc0e64 push esi */
  push32((uint32_t)(ESI));
  /* 12cc0e65 push edi */
  push32((uint32_t)(EDI));
L_12cc0e66:;
  /* 12cc0e66 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0e6a jne 0x12cc0e8a */
  if (!C.zf) goto L_12cc0e8a;
  /* 12cc0e6c push 0x12cdc450 */
  push32((uint32_t)(0x12cdc450u));
  /* 12cc0e71 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc0e73 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12cc0e75 push 0x12cdcb18 */
  push32((uint32_t)(0x12cdcb18u));
  /* 12cc0e7a push 2 */
  push32((uint32_t)(0x2u));
  /* 12cc0e7c call 0x12cb3270 */
  push32(0x12cc0e81u); f_12cb3270();
  /* 12cc0e81 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0e84 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0e87 jne 0x12cc0e8a */
  if (!C.zf) goto L_12cc0e8a;
  /* 12cc0e89 int3  */
  x86_unimpl("int3 @ 0x12cc0e89");
L_12cc0e8a:;
  /* 12cc0e8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12cc0e8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12cc0e8e jne 0x12cc0e66 */
  if (!C.zf) goto L_12cc0e66;
  /* 12cc0e90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc0e93 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12cc0e96 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 12cc0e9c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12cc0e9e je 0x12cc0eed */
  if (C.zf) goto L_12cc0eed;
  /* 12cc0ea0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc0ea3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12cc0ea6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12cc0ea9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12cc0eab je 0x12cc0eed */
  if (C.zf) goto L_12cc0eed;
  /* 12cc0ead push 2 */
  push32((uint32_t)(0x2u));
  /* 12cc0eaf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc0eb2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12cc0eb5 push eax */
  push32((uint32_t)(EAX));
  /* 12cc0eb6 call 0x12cb4c40 */
  push32(0x12cc0ebbu); f_12cb4c40();
  /* 12cc0ebb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0ebe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc0ec1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12cc0ec4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 12cc0eca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc0ecd mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12cc0ed0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc0ed3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12cc0ed9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc0edc mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12cc0ee3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc0ee6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_12cc0eed:;
  /* 12cc0eed pop edi */
  EDI = (pop32());
  /* 12cc0eee pop esi */
  ESI = (pop32());
  /* 12cc0eef pop ebx */
  EBX = (pop32());
  /* 12cc0ef0 pop ebp */
  EBP = (pop32());
  /* 12cc0ef1 ret  */
  ESPCHK(0x12cc0e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f00 @ 0x12cc0f00 (289 bytes, 97 insns) */
void f_12cc0f00(void) {
  FTRACE(0x12cc0f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc0f00 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc0f01 mov ebp, esp */
  EBP = (ESP);
  /* 12cc0f03 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc0f06 push esi */
  push32((uint32_t)(ESI));
  /* 12cc0f07 mov eax, dword ptr [0x12cdfc98] */
  EAX = (r32((uint32_t)(0x12cdfc98)));
  /* 12cc0f0c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cc0f0f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12cc0f16 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12cc0f1d jmp 0x12cc0f28 */
  goto L_12cc0f28;
L_12cc0f1f:;
  /* 12cc0f1f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc0f22 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0f25 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12cc0f28:;
  /* 12cc0f28 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0f2c jae 0x12cc0f61 */
  if (!C.cf) goto L_12cc0f61;
  /* 12cc0f2e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc0f31 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc0f34 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12cc0f37 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc0f38 call 0x12cb6fe0 */
  push32(0x12cc0f3du); f_12cb6fe0();
  /* 12cc0f3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0f40 mov esi, eax */
  ESI = (EAX);
  /* 12cc0f42 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc0f45 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc0f48 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 12cc0f4c push ecx */
  push32((uint32_t)(ECX));
  /* 12cc0f4d call 0x12cb6fe0 */
  push32(0x12cc0f52u); f_12cb6fe0();
  /* 12cc0f52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0f55 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0f58 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12cc0f5c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12cc0f5f jmp 0x12cc0f1f */
  goto L_12cc0f1f;
L_12cc0f61:;
  /* 12cc0f61 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc0f64 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0f67 push eax */
  push32((uint32_t)(EAX));
  /* 12cc0f68 call 0x12cb4190 */
  push32(0x12cc0f6du); f_12cb4190();
  /* 12cc0f6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0f70 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cc0f73 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0f77 je 0x12cc1019 */
  if (C.zf) goto L_12cc1019;
  /* 12cc0f7d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc0f80 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12cc0f83 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12cc0f8a jmp 0x12cc0f95 */
  goto L_12cc0f95;
L_12cc0f8c:;
  /* 12cc0f8c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc0f8f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0f92 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12cc0f95:;
  /* 12cc0f95 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc0f99 jae 0x12cc100a */
  if (!C.cf) goto L_12cc100a;
  /* 12cc0f9b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc0f9e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12cc0fa1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc0fa4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0fa7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12cc0faa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc0fad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc0fb0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12cc0fb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc0fb4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc0fb7 push edx */
  push32((uint32_t)(EDX));
  /* 12cc0fb8 call 0x12cb7160 */
  push32(0x12cc0fbdu); f_12cb7160();
  /* 12cc0fbd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0fc0 push eax */
  push32((uint32_t)(EAX));
  /* 12cc0fc1 call 0x12cb6fe0 */
  push32(0x12cc0fc6u); f_12cb6fe0();
  /* 12cc0fc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0fc9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc0fcc add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0fce mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12cc0fd1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc0fd4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12cc0fd7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc0fda add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0fdd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12cc0fe0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc0fe3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc0fe6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 12cc0fea push eax */
  push32((uint32_t)(EAX));
  /* 12cc0feb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc0fee push ecx */
  push32((uint32_t)(ECX));
  /* 12cc0fef call 0x12cb7160 */
  push32(0x12cc0ff4u); f_12cb7160();
  /* 12cc0ff4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc0ff7 push eax */
  push32((uint32_t)(EAX));
  /* 12cc0ff8 call 0x12cb6fe0 */
  push32(0x12cc0ffdu); f_12cb6fe0();
  /* 12cc0ffd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1000 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc1003 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1005 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12cc1008 jmp 0x12cc0f8c */
  goto L_12cc0f8c;
L_12cc100a:;
  /* 12cc100a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc100d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12cc1010 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc1013 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1016 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12cc1019:;
  /* 12cc1019 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc101c pop esi */
  ESI = (pop32());
  /* 12cc101d mov esp, ebp */
  ESP = (EBP);
  /* 12cc101f pop ebp */
  EBP = (pop32());
  /* 12cc1020 ret  */
  ESPCHK(0x12cc0f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10011030 @ 0x12cc1030 (291 bytes, 97 insns) */
void f_12cc1030(void) {
  FTRACE(0x12cc1030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc1030 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc1031 mov ebp, esp */
  EBP = (ESP);
  /* 12cc1033 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc1036 push esi */
  push32((uint32_t)(ESI));
  /* 12cc1037 mov eax, dword ptr [0x12cdfc98] */
  EAX = (r32((uint32_t)(0x12cdfc98)));
  /* 12cc103c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cc103f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12cc1046 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12cc104d jmp 0x12cc1058 */
  goto L_12cc1058;
L_12cc104f:;
  /* 12cc104f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc1052 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1055 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12cc1058:;
  /* 12cc1058 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc105c jae 0x12cc1092 */
  if (!C.cf) goto L_12cc1092;
  /* 12cc105e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc1061 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc1064 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12cc1068 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc1069 call 0x12cb6fe0 */
  push32(0x12cc106eu); f_12cb6fe0();
  /* 12cc106e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1071 mov esi, eax */
  ESI = (EAX);
  /* 12cc1073 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc1076 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc1079 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 12cc107d push ecx */
  push32((uint32_t)(ECX));
  /* 12cc107e call 0x12cb6fe0 */
  push32(0x12cc1083u); f_12cb6fe0();
  /* 12cc1083 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1086 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1089 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12cc108d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12cc1090 jmp 0x12cc104f */
  goto L_12cc104f;
L_12cc1092:;
  /* 12cc1092 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc1095 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1098 push eax */
  push32((uint32_t)(EAX));
  /* 12cc1099 call 0x12cb4190 */
  push32(0x12cc109eu); f_12cb4190();
  /* 12cc109e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc10a1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cc10a4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc10a8 je 0x12cc114b */
  if (C.zf) goto L_12cc114b;
  /* 12cc10ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc10b1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12cc10b4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12cc10bb jmp 0x12cc10c6 */
  goto L_12cc10c6;
L_12cc10bd:;
  /* 12cc10bd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc10c0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc10c3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12cc10c6:;
  /* 12cc10c6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc10ca jae 0x12cc113c */
  if (!C.cf) goto L_12cc113c;
  /* 12cc10cc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc10cf mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12cc10d2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc10d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc10d8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12cc10db mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc10de mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc10e1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12cc10e5 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc10e6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc10e9 push edx */
  push32((uint32_t)(EDX));
  /* 12cc10ea call 0x12cb7160 */
  push32(0x12cc10efu); f_12cb7160();
  /* 12cc10ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc10f2 push eax */
  push32((uint32_t)(EAX));
  /* 12cc10f3 call 0x12cb6fe0 */
  push32(0x12cc10f8u); f_12cb6fe0();
  /* 12cc10f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc10fb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc10fe add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1100 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12cc1103 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc1106 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12cc1109 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc110c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc110f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12cc1112 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc1115 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc1118 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12cc111c push eax */
  push32((uint32_t)(EAX));
  /* 12cc111d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc1120 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc1121 call 0x12cb7160 */
  push32(0x12cc1126u); f_12cb7160();
  /* 12cc1126 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1129 push eax */
  push32((uint32_t)(EAX));
  /* 12cc112a call 0x12cb6fe0 */
  push32(0x12cc112fu); f_12cb6fe0();
  /* 12cc112f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1132 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc1135 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1137 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12cc113a jmp 0x12cc10bd */
  goto L_12cc10bd;
L_12cc113c:;
  /* 12cc113c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc113f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12cc1142 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc1145 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1148 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12cc114b:;
  /* 12cc114b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc114e pop esi */
  ESI = (pop32());
  /* 12cc114f mov esp, ebp */
  ESP = (EBP);
  /* 12cc1151 pop ebp */
  EBP = (pop32());
  /* 12cc1152 ret  */
  ESPCHK(0x12cc1030u, _esp0);
  ESP += 4; return;
}

/* FUN_10011160 @ 0x12cc1160 (878 bytes, 273 insns) */
void f_12cc1160(void) {
  FTRACE(0x12cc1160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc1160 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc1161 mov ebp, esp */
  EBP = (ESP);
  /* 12cc1163 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12cc1166 push esi */
  push32((uint32_t)(ESI));
  /* 12cc1167 mov eax, dword ptr [0x12cdfc98] */
  EAX = (r32((uint32_t)(0x12cdfc98)));
  /* 12cc116c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12cc116f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12cc1176 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12cc117d jmp 0x12cc1188 */
  goto L_12cc1188;
L_12cc117f:;
  /* 12cc117f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc1182 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1185 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12cc1188:;
  /* 12cc1188 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc118c jae 0x12cc11c1 */
  if (!C.cf) goto L_12cc11c1;
  /* 12cc118e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc1191 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc1194 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12cc1197 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc1198 call 0x12cb6fe0 */
  push32(0x12cc119du); f_12cb6fe0();
  /* 12cc119d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc11a0 mov esi, eax */
  ESI = (EAX);
  /* 12cc11a2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc11a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc11a8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 12cc11ac push ecx */
  push32((uint32_t)(ECX));
  /* 12cc11ad call 0x12cb6fe0 */
  push32(0x12cc11b2u); f_12cb6fe0();
  /* 12cc11b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc11b5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc11b8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12cc11bc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12cc11bf jmp 0x12cc117f */
  goto L_12cc117f;
L_12cc11c1:;
  /* 12cc11c1 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12cc11c8 jmp 0x12cc11d3 */
  goto L_12cc11d3;
L_12cc11ca:;
  /* 12cc11ca mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc11cd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc11d0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12cc11d3:;
  /* 12cc11d3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc11d7 jae 0x12cc120d */
  if (!C.cf) goto L_12cc120d;
  /* 12cc11d9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc11dc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc11df mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12cc11e3 push eax */
  push32((uint32_t)(EAX));
  /* 12cc11e4 call 0x12cb6fe0 */
  push32(0x12cc11e9u); f_12cb6fe0();
  /* 12cc11e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc11ec mov esi, eax */
  ESI = (EAX);
  /* 12cc11ee mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc11f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc11f4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12cc11f8 push eax */
  push32((uint32_t)(EAX));
  /* 12cc11f9 call 0x12cb6fe0 */
  push32(0x12cc11feu); f_12cb6fe0();
  /* 12cc11fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1201 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1204 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12cc1208 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12cc120b jmp 0x12cc11ca */
  goto L_12cc11ca;
L_12cc120d:;
  /* 12cc120d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc1210 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12cc1216 push eax */
  push32((uint32_t)(EAX));
  /* 12cc1217 call 0x12cb6fe0 */
  push32(0x12cc121cu); f_12cb6fe0();
  /* 12cc121c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc121f mov esi, eax */
  ESI = (EAX);
  /* 12cc1221 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc1224 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 12cc122a push edx */
  push32((uint32_t)(EDX));
  /* 12cc122b call 0x12cb6fe0 */
  push32(0x12cc1230u); f_12cb6fe0();
  /* 12cc1230 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1233 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1236 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12cc123a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cc123d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc1240 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12cc1246 push edx */
  push32((uint32_t)(EDX));
  /* 12cc1247 call 0x12cb6fe0 */
  push32(0x12cc124cu); f_12cb6fe0();
  /* 12cc124c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc124f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc1252 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12cc1256 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12cc1259 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc125c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 12cc1262 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc1263 call 0x12cb6fe0 */
  push32(0x12cc1268u); f_12cb6fe0();
  /* 12cc1268 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc126b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc126e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12cc1272 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12cc1275 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc1278 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 12cc127e push edx */
  push32((uint32_t)(EDX));
  /* 12cc127f call 0x12cb6fe0 */
  push32(0x12cc1284u); f_12cb6fe0();
  /* 12cc1284 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1287 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc128a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12cc128e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12cc1291 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12cc1294 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1299 push eax */
  push32((uint32_t)(EAX));
  /* 12cc129a call 0x12cb4190 */
  push32(0x12cc129fu); f_12cb4190();
  /* 12cc129f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc12a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12cc12a5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc12a9 je 0x12cc14c6 */
  if (C.zf) goto L_12cc14c6;
  /* 12cc12af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc12b2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12cc12b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc12b8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc12be mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12cc12c1 push 0xac */
  push32((uint32_t)(0xacu));
  /* 12cc12c6 mov eax, dword ptr [0x12cdfc98] */
  EAX = (r32((uint32_t)(0x12cdfc98)));
  /* 12cc12cb push eax */
  push32((uint32_t)(EAX));
  /* 12cc12cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc12cf push ecx */
  push32((uint32_t)(ECX));
  /* 12cc12d0 call 0x12cbaa90 */
  push32(0x12cc12d5u); f_12cbaa90();
  /* 12cc12d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc12d8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12cc12df jmp 0x12cc12ea */
  goto L_12cc12ea;
L_12cc12e1:;
  /* 12cc12e1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc12e4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc12e7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12cc12ea:;
  /* 12cc12ea cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc12ee jae 0x12cc135e */
  if (!C.cf) goto L_12cc135e;
  /* 12cc12f0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc12f3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cc12f6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc12f9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 12cc12fc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc12ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc1302 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12cc1305 push edx */
  push32((uint32_t)(EDX));
  /* 12cc1306 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc1309 push eax */
  push32((uint32_t)(EAX));
  /* 12cc130a call 0x12cb7160 */
  push32(0x12cc130fu); f_12cb7160();
  /* 12cc130f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1312 push eax */
  push32((uint32_t)(EAX));
  /* 12cc1313 call 0x12cb6fe0 */
  push32(0x12cc1318u); f_12cb6fe0();
  /* 12cc1318 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc131b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc131e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12cc1322 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12cc1325 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc1328 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cc132b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc132e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 12cc1332 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc1335 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc1338 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 12cc133c push edx */
  push32((uint32_t)(EDX));
  /* 12cc133d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc1340 push eax */
  push32((uint32_t)(EAX));
  /* 12cc1341 call 0x12cb7160 */
  push32(0x12cc1346u); f_12cb7160();
  /* 12cc1346 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1349 push eax */
  push32((uint32_t)(EAX));
  /* 12cc134a call 0x12cb6fe0 */
  push32(0x12cc134fu); f_12cb6fe0();
  /* 12cc134f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1352 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc1355 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12cc1359 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12cc135c jmp 0x12cc12e1 */
  goto L_12cc12e1;
L_12cc135e:;
  /* 12cc135e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12cc1365 jmp 0x12cc1370 */
  goto L_12cc1370;
L_12cc1367:;
  /* 12cc1367 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc136a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc136d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12cc1370:;
  /* 12cc1370 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12cc1374 jae 0x12cc13e6 */
  if (!C.cf) goto L_12cc13e6;
  /* 12cc1376 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc1379 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cc137c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc137f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 12cc1383 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc1386 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc1389 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12cc138d push eax */
  push32((uint32_t)(EAX));
  /* 12cc138e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc1391 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc1392 call 0x12cb7160 */
  push32(0x12cc1397u); f_12cb7160();
  /* 12cc1397 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc139a push eax */
  push32((uint32_t)(EAX));
  /* 12cc139b call 0x12cb6fe0 */
  push32(0x12cc13a0u); f_12cb6fe0();
  /* 12cc13a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc13a3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc13a6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12cc13aa mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12cc13ad mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc13b0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cc13b3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc13b6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 12cc13ba mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12cc13bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc13c0 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12cc13c4 push eax */
  push32((uint32_t)(EAX));
  /* 12cc13c5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc13c8 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc13c9 call 0x12cb7160 */
  push32(0x12cc13ceu); f_12cb7160();
  /* 12cc13ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc13d1 push eax */
  push32((uint32_t)(EAX));
  /* 12cc13d2 call 0x12cb6fe0 */
  push32(0x12cc13d7u); f_12cb6fe0();
  /* 12cc13d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc13da mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc13dd lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12cc13e1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12cc13e4 jmp 0x12cc1367 */
  goto L_12cc1367;
L_12cc13e6:;
  /* 12cc13e6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cc13e9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc13ec mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 12cc13f2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc13f5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 12cc13fb push ecx */
  push32((uint32_t)(ECX));
  /* 12cc13fc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc13ff push edx */
  push32((uint32_t)(EDX));
  /* 12cc1400 call 0x12cb7160 */
  push32(0x12cc1405u); f_12cb7160();
  /* 12cc1405 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1408 push eax */
  push32((uint32_t)(EAX));
  /* 12cc1409 call 0x12cb6fe0 */
  push32(0x12cc140eu); f_12cb6fe0();
  /* 12cc140e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1411 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc1414 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12cc1418 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12cc141b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cc141e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc1421 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 12cc1427 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc142a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12cc1430 push eax */
  push32((uint32_t)(EAX));
  /* 12cc1431 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc1434 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc1435 call 0x12cb7160 */
  push32(0x12cc143au); f_12cb7160();
  /* 12cc143a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc143d push eax */
  push32((uint32_t)(EAX));
  /* 12cc143e call 0x12cb6fe0 */
  push32(0x12cc1443u); f_12cb6fe0();
  /* 12cc1443 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1446 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc1449 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12cc144d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12cc1450 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cc1453 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc1456 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 12cc145c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc145f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 12cc1465 push ecx */
  push32((uint32_t)(ECX));
  /* 12cc1466 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc1469 push edx */
  push32((uint32_t)(EDX));
  /* 12cc146a call 0x12cb7160 */
  push32(0x12cc146fu); f_12cb7160();
  /* 12cc146f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc1472 push eax */
  push32((uint32_t)(EAX));
  /* 12cc1473 call 0x12cb6fe0 */
  push32(0x12cc1478u); f_12cb6fe0();
  /* 12cc1478 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc147b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc147e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12cc1482 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12cc1485 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cc1488 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc148b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 12cc1491 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12cc1494 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 12cc149a push eax */
  push32((uint32_t)(EAX));
  /* 12cc149b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc149e push ecx */
  push32((uint32_t)(ECX));
  /* 12cc149f call 0x12cb7160 */
  push32(0x12cc14a4u); f_12cb7160();
  /* 12cc14a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc14a7 push eax */
  push32((uint32_t)(EAX));
  /* 12cc14a8 call 0x12cb6fe0 */
  push32(0x12cc14adu); f_12cb6fe0();
  /* 12cc14ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc14b0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc14b3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12cc14b7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12cc14ba mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12cc14bd mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12cc14c0 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_12cc14c6:;
  /* 12cc14c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12cc14c9 pop esi */
  ESI = (pop32());
  /* 12cc14ca mov esp, ebp */
  ESP = (EBP);
  /* 12cc14cc pop ebp */
  EBP = (pop32());
  /* 12cc14cd ret  */
  ESPCHK(0x12cc1160u, _esp0);
  ESP += 4; return;
}

/* FUN_100114d0 @ 0x12cc14d0 (31 bytes, 15 insns) */
void f_12cc14d0(void) {
  FTRACE(0x12cc14d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12cc14d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12cc14d1 mov ebp, esp */
  EBP = (ESP);
  /* 12cc14d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12cc14d5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12cc14d8 push eax */
  push32((uint32_t)(EAX));
  /* 12cc14d9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12cc14dc push ecx */
  push32((uint32_t)(ECX));
  /* 12cc14dd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12cc14e0 push edx */
  push32((uint32_t)(EDX));
  /* 12cc14e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12cc14e4 push eax */
  push32((uint32_t)(EAX));
  /* 12cc14e5 call 0x12cc14f0 */
  push32(0x12cc14eau); f_12cc14f0();
  /* 12cc14ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12cc14ed pop ebp */
  EBP = (pop32());
  /* 12cc14ee ret  */
  ESPCHK(0x12cc14d0u, _esp0);
  ESP += 4; return;
}

