#include "recomp.h"

/* FUN_100093a0 @ 0x122193a0 (10 bytes, 5 insns) */
void f_122193a0(void) {
  FTRACE(0x122193a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122193a0 push ebp */
  push32((uint32_t)(EBP));
  /* 122193a1 mov ebp, esp */
  EBP = (ESP);
  /* 122193a3 mov eax, dword ptr [0x1223ec94] */
  EAX = (r32((uint32_t)(0x1223ec94)));
  /* 122193a8 pop ebp */
  EBP = (pop32());
  /* 122193a9 ret  */
  ESPCHK(0x122193a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100093b0 @ 0x122193b0 (31 bytes, 11 insns) */
void f_122193b0(void) {
  FTRACE(0x122193b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122193b0 push ebp */
  push32((uint32_t)(EBP));
  /* 122193b1 mov ebp, esp */
  EBP = (ESP);
  /* 122193b3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122193ba jbe 0x122193c0 */
  if ((C.cf||C.zf)) goto L_122193c0;
  /* 122193bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122193be jmp 0x122193cd */
  goto L_122193cd;
L_122193c0:;
  /* 122193c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122193c3 mov dword ptr [0x1223ec94], eax */
  w32((uint32_t)(0x1223ec94), (EAX));
  /* 122193c8 mov eax, 1 */
  EAX = (0x1u);
L_122193cd:;
  /* 122193cd pop ebp */
  EBP = (pop32());
  /* 122193ce ret  */
  ESPCHK(0x122193b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100093d0 @ 0x122193d0 (89 bytes, 20 insns) */
void f_122193d0(void) {
  FTRACE(0x122193d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122193d0 push ebp */
  push32((uint32_t)(EBP));
  /* 122193d1 mov ebp, esp */
  EBP = (ESP);
  /* 122193d3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 122193d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 122193da mov eax, dword ptr [0x12241f6c] */
  EAX = (r32((uint32_t)(0x12241f6c)));
  /* 122193df push eax */
  push32((uint32_t)(EAX));
  /* 122193e0 call dword ptr [0x12243328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243328))), 0x122193e6u);
  /* 122193e6 mov dword ptr [0x12241f68], eax */
  w32((uint32_t)(0x12241f68), (EAX));
  /* 122193eb cmp dword ptr [0x12241f68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12241f68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122193f2 jne 0x122193f8 */
  if (!C.zf) goto L_122193f8;
  /* 122193f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122193f6 jmp 0x12219427 */
  goto L_12219427;
L_122193f8:;
  /* 122193f8 mov ecx, dword ptr [0x12241f68] */
  ECX = (r32((uint32_t)(0x12241f68)));
  /* 122193fe mov dword ptr [0x12241f5c], ecx */
  w32((uint32_t)(0x12241f5c), (ECX));
  /* 12219404 mov dword ptr [0x12241f60], 0 */
  w32((uint32_t)(0x12241f60), (0x0u));
  /* 1221940e mov dword ptr [0x12241f64], 0 */
  w32((uint32_t)(0x12241f64), (0x0u));
  /* 12219418 mov dword ptr [0x12241f48], 0x10 */
  w32((uint32_t)(0x12241f48), (0x10u));
  /* 12219422 mov eax, 1 */
  EAX = (0x1u);
L_12219427:;
  /* 12219427 pop ebp */
  EBP = (pop32());
  /* 12219428 ret  */
  ESPCHK(0x122193d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009430 @ 0x12219430 (85 bytes, 29 insns) */
void f_12219430(void) {
  FTRACE(0x12219430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12219430 push ebp */
  push32((uint32_t)(EBP));
  /* 12219431 mov ebp, esp */
  EBP = (ESP);
  /* 12219433 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12219436 mov eax, dword ptr [0x12241f64] */
  EAX = (r32((uint32_t)(0x12241f64)));
  /* 1221943b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221943e mov ecx, dword ptr [0x12241f68] */
  ECX = (r32((uint32_t)(0x12241f68)));
  /* 12219444 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12219446 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12219449 mov edx, dword ptr [0x12241f68] */
  EDX = (r32((uint32_t)(0x12241f68)));
  /* 1221944f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12219452:;
  /* 12219452 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12219455 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12219458 jae 0x1221947f */
  if (!C.cf) goto L_1221947f;
  /* 1221945a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221945d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12219460 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12219463 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12219466 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221946d jae 0x12219474 */
  if (!C.cf) goto L_12219474;
  /* 1221946f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12219472 jmp 0x12219481 */
  goto L_12219481;
L_12219474:;
  /* 12219474 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12219477 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221947a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1221947d jmp 0x12219452 */
  goto L_12219452;
L_1221947f:;
  /* 1221947f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12219481:;
  /* 12219481 mov esp, ebp */
  ESP = (EBP);
  /* 12219483 pop ebp */
  EBP = (pop32());
  /* 12219484 ret  */
  ESPCHK(0x12219430u, _esp0);
  ESP += 4; return;
}

/* FUN_10009490 @ 0x12219490 (95 bytes, 33 insns) */
void f_12219490(void) {
  FTRACE(0x12219490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12219490 push ebp */
  push32((uint32_t)(EBP));
  /* 12219491 mov ebp, esp */
  EBP = (ESP);
  /* 12219493 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12219496 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12219499 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221949c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221949f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122194a2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122194a5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 122194a8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122194ab mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 122194b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122194b3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 122194b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122194b8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 122194bb and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 122194bd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122194bf jne 0x122194e1 */
  if (!C.zf) goto L_122194e1;
  /* 122194c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122194c4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 122194c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122194c9 jne 0x122194e1 */
  if (!C.zf) goto L_122194e1;
  /* 122194cb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122194ce and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 122194d4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122194d6 je 0x122194e1 */
  if (C.zf) goto L_122194e1;
  /* 122194d8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 122194df jmp 0x122194e8 */
  goto L_122194e8;
L_122194e1:;
  /* 122194e1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_122194e8:;
  /* 122194e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122194eb mov esp, ebp */
  ESP = (EBP);
  /* 122194ed pop ebp */
  EBP = (pop32());
  /* 122194ee ret  */
  ESPCHK(0x12219490u, _esp0);
  ESP += 4; return;
}

/* FUN_100094f0 @ 0x122194f0 (1485 bytes, 453 insns) */
void f_122194f0(void) {
  FTRACE(0x122194f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122194f0 push ebp */
  push32((uint32_t)(EBP));
  /* 122194f1 mov ebp, esp */
  EBP = (ESP);
  /* 122194f3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122194f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122194f9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 122194fc mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 122194ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12219502 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12219505 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12219508 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1221950b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221950e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 12219511 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12219514 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12219517 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221951d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12219520 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 12219527 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1221952a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221952d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12219530 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12219533 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12219536 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12219538 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221953b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1221953e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12219541 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12219544 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 12219547 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1221954a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1221954c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1221954f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12219552 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12219555 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12219558 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1221955b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1221955e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12219560 jne 0x12219688 */
  if (!C.zf) goto L_12219688;
  /* 12219566 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12219569 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1221956c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221956f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12219572 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12219576 jbe 0x1221957f */
  if ((C.cf||C.zf)) goto L_1221957f;
  /* 12219578 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1221957f:;
  /* 1221957f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12219582 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12219585 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12219588 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221958b jne 0x12219661 */
  if (!C.zf) goto L_12219661;
  /* 12219591 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12219595 jae 0x122195f6 */
  if (!C.cf) goto L_122195f6;
  /* 12219597 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1221959c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221959f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 122195a1 not eax */
  EAX = (~(EAX));
  /* 122195a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122195a6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122195a9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 122195ad and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122195af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122195b2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122195b5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 122195b9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122195bc add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122195bf mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 122195c2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 122195c5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122195c8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122195cb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 122195ce mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122195d1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122195d4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 122195d8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122195da jne 0x122195f4 */
  if (!C.zf) goto L_122195f4;
  /* 122195dc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 122195e1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122195e4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 122195e6 not eax */
  EAX = (~(EAX));
  /* 122195e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122195eb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122195ed and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 122195ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122195f2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_122195f4:;
  /* 122195f4 jmp 0x12219661 */
  goto L_12219661;
L_122195f6:;
  /* 122195f6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122195f9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122195fc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12219601 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12219603 not edx */
  EDX = (~(EDX));
  /* 12219605 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12219608 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1221960b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12219612 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12219614 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12219617 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1221961a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 12219621 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12219624 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12219627 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1221962a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1221962d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12219630 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12219633 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12219636 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12219639 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221963c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12219640 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12219642 jne 0x12219661 */
  if (!C.zf) goto L_12219661;
  /* 12219644 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12219647 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221964a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1221964f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12219651 not edx */
  EDX = (~(EDX));
  /* 12219653 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12219656 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12219659 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1221965b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221965e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12219661:;
  /* 12219661 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12219664 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12219667 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1221966a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1221966d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12219670 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12219673 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12219676 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12219679 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1221967c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1221967f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12219682 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12219685 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_12219688:;
  /* 12219688 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221968b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1221968e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12219691 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12219694 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12219698 jbe 0x122196a1 */
  if ((C.cf||C.zf)) goto L_122196a1;
  /* 1221969a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_122196a1:;
  /* 122196a1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122196a4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 122196a7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122196a9 jne 0x12219805 */
  if (!C.zf) goto L_12219805;
  /* 122196af mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122196b2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122196b5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 122196b8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122196bb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 122196be sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122196c1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 122196c4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122196c8 jbe 0x122196d1 */
  if ((C.cf||C.zf)) goto L_122196d1;
  /* 122196ca mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_122196d1:;
  /* 122196d1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 122196d4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122196d7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 122196da mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 122196dd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 122196e0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122196e3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 122196e6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122196ea jbe 0x122196f3 */
  if ((C.cf||C.zf)) goto L_122196f3;
  /* 122196ec mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_122196f3:;
  /* 122196f3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122196f6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122196f9 je 0x122197ff */
  if (C.zf) goto L_122197ff;
  /* 122196ff mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12219702 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12219705 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12219708 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221970b jne 0x122197e1 */
  if (!C.zf) goto L_122197e1;
  /* 12219711 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12219715 jae 0x12219776 */
  if (!C.cf) goto L_12219776;
  /* 12219717 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1221971c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1221971f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12219721 not edx */
  EDX = (~(EDX));
  /* 12219723 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12219726 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12219729 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1221972d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1221972f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12219732 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12219735 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12219739 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1221973c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221973f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12219742 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12219745 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12219748 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221974b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1221974e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12219751 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12219754 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12219758 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1221975a jne 0x12219774 */
  if (!C.zf) goto L_12219774;
  /* 1221975c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12219761 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12219764 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12219766 not edx */
  EDX = (~(EDX));
  /* 12219768 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221976b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1221976d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1221976f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12219772 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12219774:;
  /* 12219774 jmp 0x122197e1 */
  goto L_122197e1;
L_12219776:;
  /* 12219776 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12219779 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221977c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12219781 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12219783 not eax */
  EAX = (~(EAX));
  /* 12219785 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12219788 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1221978b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12219792 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12219794 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12219797 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1221979a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 122197a1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122197a4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122197a7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 122197aa sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 122197ad mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122197b0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122197b3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 122197b6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122197b9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122197bc movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 122197c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122197c2 jne 0x122197e1 */
  if (!C.zf) goto L_122197e1;
  /* 122197c4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122197c7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122197ca mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 122197cf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 122197d1 not eax */
  EAX = (~(EAX));
  /* 122197d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122197d6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 122197d9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 122197db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122197de mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_122197e1:;
  /* 122197e1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 122197e4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 122197e7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 122197ea mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 122197ed mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 122197f0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 122197f3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 122197f6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 122197f9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 122197fc mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_122197ff:;
  /* 122197ff mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12219802 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_12219805:;
  /* 12219805 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12219808 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1221980b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1221980d jne 0x1221981b */
  if (!C.zf) goto L_1221981b;
  /* 1221980f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12219812 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12219815 je 0x1221992b */
  if (C.zf) goto L_1221992b;
L_1221981b:;
  /* 1221981b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1221981e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12219821 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12219824 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12219827 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1221982a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1221982d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12219830 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12219833 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12219836 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12219839 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1221983c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1221983f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12219842 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12219845 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12219848 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1221984b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1221984e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12219851 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12219854 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12219857 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1221985a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221985d jne 0x1221992b */
  if (!C.zf) goto L_1221992b;
  /* 12219863 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12219867 jae 0x122198c4 */
  if (!C.cf) goto L_122198c4;
  /* 12219869 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1221986c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221986f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12219873 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12219876 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12219879 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1221987c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1221987f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12219882 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12219885 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12219888 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221988a jne 0x122198a2 */
  if (!C.zf) goto L_122198a2;
  /* 1221988c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12219891 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12219894 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12219896 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12219899 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1221989b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1221989d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122198a0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_122198a2:;
  /* 122198a2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 122198a7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 122198aa shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 122198ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122198af mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122198b2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 122198b6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122198b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122198bb mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122198be mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 122198c2 jmp 0x1221992b */
  goto L_1221992b;
L_122198c4:;
  /* 122198c4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122198c7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122198ca movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 122198ce mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122198d1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122198d4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 122198d7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 122198da mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 122198dd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122198e0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 122198e3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122198e5 jne 0x12219902 */
  if (!C.zf) goto L_12219902;
  /* 122198e7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 122198ea sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122198ed mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 122198f2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 122198f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122198f7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 122198fa or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 122198fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122198ff mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12219902:;
  /* 12219902 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12219905 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12219908 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1221990d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1221990f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12219912 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12219915 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1221991c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221991e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12219921 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12219924 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1221992b:;
  /* 1221992b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1221992e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12219931 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12219933 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12219936 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12219939 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221993c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1221993f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12219942 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12219944 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12219947 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221994a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1221994c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221994f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12219952 jne 0x12219ab9 */
  if (!C.zf) goto L_12219ab9;
  /* 12219958 cmp dword ptr [0x12241f60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12241f60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221995f je 0x12219aa8 */
  if (C.zf) goto L_12219aa8;
  /* 12219965 mov eax, dword ptr [0x12241f58] */
  EAX = (r32((uint32_t)(0x12241f58)));
  /* 1221996a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1221996d mov ecx, dword ptr [0x12241f60] */
  ECX = (r32((uint32_t)(0x12241f60)));
  /* 12219973 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12219976 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12219978 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1221997b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12219980 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12219985 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12219988 push eax */
  push32((uint32_t)(EAX));
  /* 12219989 call dword ptr [0x12243344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243344))), 0x1221998fu);
  /* 1221998f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12219994 mov ecx, dword ptr [0x12241f58] */
  ECX = (r32((uint32_t)(0x12241f58)));
  /* 1221999a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1221999c mov eax, dword ptr [0x12241f60] */
  EAX = (r32((uint32_t)(0x12241f60)));
  /* 122199a1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 122199a4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 122199a6 mov edx, dword ptr [0x12241f60] */
  EDX = (r32((uint32_t)(0x12241f60)));
  /* 122199ac mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 122199af mov eax, dword ptr [0x12241f60] */
  EAX = (r32((uint32_t)(0x12241f60)));
  /* 122199b4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 122199b7 mov edx, dword ptr [0x12241f58] */
  EDX = (r32((uint32_t)(0x12241f58)));
  /* 122199bd mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 122199c8 mov eax, dword ptr [0x12241f60] */
  EAX = (r32((uint32_t)(0x12241f60)));
  /* 122199cd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 122199d0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 122199d3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 122199d6 mov eax, dword ptr [0x12241f60] */
  EAX = (r32((uint32_t)(0x12241f60)));
  /* 122199db mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 122199de mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 122199e1 mov edx, dword ptr [0x12241f60] */
  EDX = (r32((uint32_t)(0x12241f60)));
  /* 122199e7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 122199ea movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 122199ee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122199f0 jne 0x12219a06 */
  if (!C.zf) goto L_12219a06;
  /* 122199f2 mov edx, dword ptr [0x12241f60] */
  EDX = (r32((uint32_t)(0x12241f60)));
  /* 122199f8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 122199fb and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 122199fd mov ecx, dword ptr [0x12241f60] */
  ECX = (r32((uint32_t)(0x12241f60)));
  /* 12219a03 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12219a06:;
  /* 12219a06 mov edx, dword ptr [0x12241f60] */
  EDX = (r32((uint32_t)(0x12241f60)));
  /* 12219a0c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12219a10 jne 0x12219aa8 */
  if (!C.zf) goto L_12219aa8;
  /* 12219a16 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12219a1b push 0 */
  push32((uint32_t)(0x0u));
  /* 12219a1d mov eax, dword ptr [0x12241f60] */
  EAX = (r32((uint32_t)(0x12241f60)));
  /* 12219a22 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12219a25 push ecx */
  push32((uint32_t)(ECX));
  /* 12219a26 call dword ptr [0x12243344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243344))), 0x12219a2cu);
  /* 12219a2c mov edx, dword ptr [0x12241f60] */
  EDX = (r32((uint32_t)(0x12241f60)));
  /* 12219a32 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12219a35 push eax */
  push32((uint32_t)(EAX));
  /* 12219a36 push 0 */
  push32((uint32_t)(0x0u));
  /* 12219a38 mov ecx, dword ptr [0x12241f6c] */
  ECX = (r32((uint32_t)(0x12241f6c)));
  /* 12219a3e push ecx */
  push32((uint32_t)(ECX));
  /* 12219a3f call dword ptr [0x12243354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243354))), 0x12219a45u);
  /* 12219a45 mov edx, dword ptr [0x12241f64] */
  EDX = (r32((uint32_t)(0x12241f64)));
  /* 12219a4b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12219a4e mov eax, dword ptr [0x12241f68] */
  EAX = (r32((uint32_t)(0x12241f68)));
  /* 12219a53 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12219a55 mov ecx, dword ptr [0x12241f60] */
  ECX = (r32((uint32_t)(0x12241f60)));
  /* 12219a5b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12219a5e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12219a60 push eax */
  push32((uint32_t)(EAX));
  /* 12219a61 mov edx, dword ptr [0x12241f60] */
  EDX = (r32((uint32_t)(0x12241f60)));
  /* 12219a67 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12219a6a push edx */
  push32((uint32_t)(EDX));
  /* 12219a6b mov eax, dword ptr [0x12241f60] */
  EAX = (r32((uint32_t)(0x12241f60)));
  /* 12219a70 push eax */
  push32((uint32_t)(EAX));
  /* 12219a71 call 0x1221d020 */
  push32(0x12219a76u); f_1221d020();
  /* 12219a76 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12219a79 mov ecx, dword ptr [0x12241f64] */
  ECX = (r32((uint32_t)(0x12241f64)));
  /* 12219a7f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12219a82 mov dword ptr [0x12241f64], ecx */
  w32((uint32_t)(0x12241f64), (ECX));
  /* 12219a88 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12219a8b cmp edx, dword ptr [0x12241f60] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12241f60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12219a91 jbe 0x12219a9c */
  if ((C.cf||C.zf)) goto L_12219a9c;
  /* 12219a93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12219a96 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12219a99 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12219a9c:;
  /* 12219a9c mov ecx, dword ptr [0x12241f68] */
  ECX = (r32((uint32_t)(0x12241f68)));
  /* 12219aa2 mov dword ptr [0x12241f5c], ecx */
  w32((uint32_t)(0x12241f5c), (ECX));
L_12219aa8:;
  /* 12219aa8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12219aab mov dword ptr [0x12241f60], edx */
  w32((uint32_t)(0x12241f60), (EDX));
  /* 12219ab1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12219ab4 mov dword ptr [0x12241f58], eax */
  w32((uint32_t)(0x12241f58), (EAX));
L_12219ab9:;
  /* 12219ab9 mov esp, ebp */
  ESP = (EBP);
  /* 12219abb pop ebp */
  EBP = (pop32());
  /* 12219abc ret  */
  ESPCHK(0x122194f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ac0 @ 0x12219ac0 (1334 bytes, 427 insns) */
void f_12219ac0(void) {
  FTRACE(0x12219ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12219ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 12219ac1 mov ebp, esp */
  EBP = (ESP);
  /* 12219ac3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12219ac6 push esi */
  push32((uint32_t)(ESI));
  /* 12219ac7 mov eax, dword ptr [0x12241f64] */
  EAX = (r32((uint32_t)(0x12241f64)));
  /* 12219acc imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12219acf mov ecx, dword ptr [0x12241f68] */
  ECX = (r32((uint32_t)(0x12241f68)));
  /* 12219ad5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12219ad7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12219ada mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12219add add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12219ae0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12219ae3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12219ae6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12219ae9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12219aec sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12219aef mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12219af2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12219af6 jge 0x12219b0c */
  if ((C.sf==C.of)) goto L_12219b0c;
  /* 12219af8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12219afb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12219afe shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12219b00 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12219b03 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 12219b0a jmp 0x12219b21 */
  goto L_12219b21;
L_12219b0c:;
  /* 12219b0c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12219b13 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12219b16 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12219b19 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12219b1c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12219b1e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_12219b21:;
  /* 12219b21 mov ecx, dword ptr [0x12241f5c] */
  ECX = (r32((uint32_t)(0x12241f5c)));
  /* 12219b27 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12219b2a:;
  /* 12219b2a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12219b2d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12219b30 jae 0x12219b56 */
  if (!C.cf) goto L_12219b56;
  /* 12219b32 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12219b35 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12219b38 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 12219b3a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12219b3d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12219b40 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 12219b43 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12219b45 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12219b47 je 0x12219b4b */
  if (C.zf) goto L_12219b4b;
  /* 12219b49 jmp 0x12219b56 */
  goto L_12219b56;
L_12219b4b:;
  /* 12219b4b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12219b4e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12219b51 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12219b54 jmp 0x12219b2a */
  goto L_12219b2a;
L_12219b56:;
  /* 12219b56 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12219b59 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12219b5c jne 0x12219c3d */
  if (!C.zf) goto L_12219c3d;
  /* 12219b62 mov eax, dword ptr [0x12241f68] */
  EAX = (r32((uint32_t)(0x12241f68)));
  /* 12219b67 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12219b6a:;
  /* 12219b6a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12219b6d cmp ecx, dword ptr [0x12241f5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12241f5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12219b73 jae 0x12219b99 */
  if (!C.cf) goto L_12219b99;
  /* 12219b75 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12219b78 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12219b7b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 12219b7d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12219b80 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12219b83 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12219b86 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12219b88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12219b8a je 0x12219b8e */
  if (C.zf) goto L_12219b8e;
  /* 12219b8c jmp 0x12219b99 */
  goto L_12219b99;
L_12219b8e:;
  /* 12219b8e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12219b91 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12219b94 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12219b97 jmp 0x12219b6a */
  goto L_12219b6a;
L_12219b99:;
  /* 12219b99 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12219b9c cmp ecx, dword ptr [0x12241f5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12241f5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12219ba2 jne 0x12219c3d */
  if (!C.zf) goto L_12219c3d;
L_12219ba8:;
  /* 12219ba8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12219bab cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12219bae jae 0x12219bc6 */
  if (!C.cf) goto L_12219bc6;
  /* 12219bb0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12219bb3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12219bb7 je 0x12219bbb */
  if (C.zf) goto L_12219bbb;
  /* 12219bb9 jmp 0x12219bc6 */
  goto L_12219bc6;
L_12219bbb:;
  /* 12219bbb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12219bbe add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12219bc1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12219bc4 jmp 0x12219ba8 */
  goto L_12219ba8;
L_12219bc6:;
  /* 12219bc6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12219bc9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12219bcc jne 0x12219c17 */
  if (!C.zf) goto L_12219c17;
  /* 12219bce mov eax, dword ptr [0x12241f68] */
  EAX = (r32((uint32_t)(0x12241f68)));
  /* 12219bd3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12219bd6:;
  /* 12219bd6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12219bd9 cmp ecx, dword ptr [0x12241f5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12241f5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12219bdf jae 0x12219bf7 */
  if (!C.cf) goto L_12219bf7;
  /* 12219be1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12219be4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12219be8 je 0x12219bec */
  if (C.zf) goto L_12219bec;
  /* 12219bea jmp 0x12219bf7 */
  goto L_12219bf7;
L_12219bec:;
  /* 12219bec mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12219bef add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12219bf2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12219bf5 jmp 0x12219bd6 */
  goto L_12219bd6;
L_12219bf7:;
  /* 12219bf7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12219bfa cmp ecx, dword ptr [0x12241f5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12241f5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12219c00 jne 0x12219c17 */
  if (!C.zf) goto L_12219c17;
  /* 12219c02 call 0x1221a000 */
  push32(0x12219c07u); f_1221a000();
  /* 12219c07 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12219c0a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12219c0e jne 0x12219c17 */
  if (!C.zf) goto L_12219c17;
  /* 12219c10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12219c12 jmp 0x12219ff1 */
  goto L_12219ff1;
L_12219c17:;
  /* 12219c17 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12219c1a push edx */
  push32((uint32_t)(EDX));
  /* 12219c1b call 0x1221a110 */
  push32(0x12219c20u); f_1221a110();
  /* 12219c20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12219c23 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12219c26 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12219c29 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12219c2b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12219c2e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12219c31 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12219c34 jne 0x12219c3d */
  if (!C.zf) goto L_12219c3d;
  /* 12219c36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12219c38 jmp 0x12219ff1 */
  goto L_12219ff1;
L_12219c3d:;
  /* 12219c3d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12219c40 mov dword ptr [0x12241f5c], edx */
  w32((uint32_t)(0x12241f5c), (EDX));
  /* 12219c46 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12219c49 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12219c4c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 12219c4f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12219c52 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12219c54 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12219c57 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12219c5b je 0x12219c80 */
  if (C.zf) goto L_12219c80;
  /* 12219c5d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12219c60 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12219c63 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12219c66 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 12219c6a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12219c6d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12219c70 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 12219c73 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 12219c7a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12219c7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12219c7e jne 0x12219cb5 */
  if (!C.zf) goto L_12219cb5;
L_12219c80:;
  /* 12219c80 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_12219c87:;
  /* 12219c87 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12219c8a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12219c8d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12219c90 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 12219c94 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12219c97 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12219c9a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 12219c9d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 12219ca4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 12219ca6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12219ca8 jne 0x12219cb5 */
  if (!C.zf) goto L_12219cb5;
  /* 12219caa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12219cad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12219cb0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12219cb3 jmp 0x12219c87 */
  goto L_12219c87;
L_12219cb5:;
  /* 12219cb5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12219cb8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12219cbe mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12219cc1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12219cc8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12219ccb mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12219cd2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12219cd5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12219cd8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12219cdb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 12219cdf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12219ce2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12219ce6 jne 0x12219d02 */
  if (!C.zf) goto L_12219d02;
  /* 12219ce8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 12219cef mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12219cf2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12219cf5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12219cf8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 12219cff mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_12219d02:;
  /* 12219d02 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12219d06 jl 0x12219d1b */
  if ((C.sf!=C.of)) goto L_12219d1b;
  /* 12219d08 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12219d0b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12219d0d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12219d10 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12219d13 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12219d16 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12219d19 jmp 0x12219d02 */
  goto L_12219d02;
L_12219d1b:;
  /* 12219d1b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12219d1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12219d21 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 12219d25 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12219d28 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12219d2b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12219d2d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12219d30 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12219d33 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12219d36 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12219d39 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12219d3c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12219d3f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12219d43 jle 0x12219d4c */
  if ((C.zf||C.sf!=C.of)) goto L_12219d4c;
  /* 12219d45 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_12219d4c:;
  /* 12219d4c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12219d4f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12219d52 je 0x12219f70 */
  if (C.zf) goto L_12219f70;
  /* 12219d58 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12219d5b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12219d5e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12219d61 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12219d64 jne 0x12219e3a */
  if (!C.zf) goto L_12219e3a;
  /* 12219d6a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12219d6e jge 0x12219dcf */
  if ((C.sf==C.of)) goto L_12219dcf;
  /* 12219d70 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12219d75 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12219d78 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12219d7a not eax */
  EAX = (~(EAX));
  /* 12219d7c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12219d7f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12219d82 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12219d86 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12219d88 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12219d8b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12219d8e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12219d92 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12219d95 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12219d98 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12219d9b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12219d9e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12219da1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12219da4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12219da7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12219daa add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12219dad movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12219db1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12219db3 jne 0x12219dcd */
  if (!C.zf) goto L_12219dcd;
  /* 12219db5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12219dba mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12219dbd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12219dbf not eax */
  EAX = (~(EAX));
  /* 12219dc1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12219dc4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12219dc6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12219dc8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12219dcb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12219dcd:;
  /* 12219dcd jmp 0x12219e3a */
  goto L_12219e3a;
L_12219dcf:;
  /* 12219dcf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12219dd2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12219dd5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12219dda shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12219ddc not edx */
  EDX = (~(EDX));
  /* 12219dde mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12219de1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12219de4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12219deb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12219ded mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12219df0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12219df3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 12219dfa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12219dfd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12219e00 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12219e03 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12219e06 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12219e09 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12219e0c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12219e0f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12219e12 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12219e15 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12219e19 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12219e1b jne 0x12219e3a */
  if (!C.zf) goto L_12219e3a;
  /* 12219e1d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12219e20 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12219e23 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12219e28 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12219e2a not edx */
  EDX = (~(EDX));
  /* 12219e2c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12219e2f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12219e32 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12219e34 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12219e37 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12219e3a:;
  /* 12219e3a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12219e3d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12219e40 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12219e43 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12219e46 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12219e49 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12219e4c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12219e4f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12219e52 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12219e55 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12219e58 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12219e5c je 0x12219f70 */
  if (C.zf) goto L_12219f70;
  /* 12219e62 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12219e65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12219e68 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 12219e6b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12219e6e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12219e71 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12219e74 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12219e77 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12219e7a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12219e7d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12219e80 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12219e83 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12219e86 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12219e89 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12219e8c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12219e8f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12219e92 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12219e95 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12219e98 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12219e9b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12219e9e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12219ea1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12219ea4 jne 0x12219f70 */
  if (!C.zf) goto L_12219f70;
  /* 12219eaa cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12219eae jge 0x12219f0a */
  if ((C.sf==C.of)) goto L_12219f0a;
  /* 12219eb0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12219eb3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12219eb6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12219eba mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12219ebd add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12219ec0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12219ec3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12219ec5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12219ec8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12219ecb mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12219ece test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12219ed0 jne 0x12219ee8 */
  if (!C.zf) goto L_12219ee8;
  /* 12219ed2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12219ed7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12219eda shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12219edc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12219edf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12219ee1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12219ee3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12219ee6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12219ee8:;
  /* 12219ee8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12219eed mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12219ef0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12219ef2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12219ef5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12219ef8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12219efc or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12219efe mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12219f01 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12219f04 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12219f08 jmp 0x12219f70 */
  goto L_12219f70;
L_12219f0a:;
  /* 12219f0a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12219f0d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12219f10 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12219f14 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12219f17 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12219f1a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12219f1d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12219f1f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12219f22 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12219f25 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12219f28 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12219f2a jne 0x12219f47 */
  if (!C.zf) goto L_12219f47;
  /* 12219f2c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12219f2f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12219f32 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12219f37 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12219f39 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12219f3c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12219f3f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12219f41 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12219f44 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12219f47:;
  /* 12219f47 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12219f4a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12219f4d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12219f52 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12219f54 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12219f57 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12219f5a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12219f61 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12219f63 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12219f66 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12219f69 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_12219f70:;
  /* 12219f70 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12219f74 je 0x12219f8a */
  if (C.zf) goto L_12219f8a;
  /* 12219f76 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12219f79 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12219f7c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12219f7e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12219f81 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12219f84 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12219f87 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_12219f8a:;
  /* 12219f8a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12219f8d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12219f90 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12219f93 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12219f96 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12219f99 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12219f9c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12219f9e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12219fa1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12219fa4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12219fa7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12219faa mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 12219fad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12219fb0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12219fb2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12219fb5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12219fb7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12219fba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12219fbd mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12219fbf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12219fc1 jne 0x12219fe3 */
  if (!C.zf) goto L_12219fe3;
  /* 12219fc3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12219fc6 cmp eax, dword ptr [0x12241f60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12241f60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12219fcc jne 0x12219fe3 */
  if (!C.zf) goto L_12219fe3;
  /* 12219fce mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12219fd1 cmp ecx, dword ptr [0x12241f58] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12241f58))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12219fd7 jne 0x12219fe3 */
  if (!C.zf) goto L_12219fe3;
  /* 12219fd9 mov dword ptr [0x12241f60], 0 */
  w32((uint32_t)(0x12241f60), (0x0u));
L_12219fe3:;
  /* 12219fe3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12219fe6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12219fe9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12219feb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12219fee add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12219ff1:;
  /* 12219ff1 pop esi */
  ESI = (pop32());
  /* 12219ff2 mov esp, ebp */
  ESP = (EBP);
  /* 12219ff4 pop ebp */
  EBP = (pop32());
  /* 12219ff5 ret  */
  ESPCHK(0x12219ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a000 @ 0x1221a000 (271 bytes, 78 insns) */
void f_1221a000(void) {
  FTRACE(0x1221a000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221a000 push ebp */
  push32((uint32_t)(EBP));
  /* 1221a001 mov ebp, esp */
  EBP = (ESP);
  /* 1221a003 push ecx */
  push32((uint32_t)(ECX));
  /* 1221a004 mov eax, dword ptr [0x12241f64] */
  EAX = (r32((uint32_t)(0x12241f64)));
  /* 1221a009 cmp eax, dword ptr [0x12241f48] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12241f48))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221a00f jne 0x1221a05b */
  if (!C.zf) goto L_1221a05b;
  /* 1221a011 mov ecx, dword ptr [0x12241f48] */
  ECX = (r32((uint32_t)(0x12241f48)));
  /* 1221a017 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a01a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221a01d push ecx */
  push32((uint32_t)(ECX));
  /* 1221a01e mov edx, dword ptr [0x12241f68] */
  EDX = (r32((uint32_t)(0x12241f68)));
  /* 1221a024 push edx */
  push32((uint32_t)(EDX));
  /* 1221a025 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221a027 mov eax, dword ptr [0x12241f6c] */
  EAX = (r32((uint32_t)(0x12241f6c)));
  /* 1221a02c push eax */
  push32((uint32_t)(EAX));
  /* 1221a02d call dword ptr [0x12243330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243330))), 0x1221a033u);
  /* 1221a033 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1221a036 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221a03a jne 0x1221a043 */
  if (!C.zf) goto L_1221a043;
  /* 1221a03c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221a03e jmp 0x1221a10b */
  goto L_1221a10b;
L_1221a043:;
  /* 1221a043 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221a046 mov dword ptr [0x12241f68], ecx */
  w32((uint32_t)(0x12241f68), (ECX));
  /* 1221a04c mov edx, dword ptr [0x12241f48] */
  EDX = (r32((uint32_t)(0x12241f48)));
  /* 1221a052 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a055 mov dword ptr [0x12241f48], edx */
  w32((uint32_t)(0x12241f48), (EDX));
L_1221a05b:;
  /* 1221a05b mov eax, dword ptr [0x12241f64] */
  EAX = (r32((uint32_t)(0x12241f64)));
  /* 1221a060 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221a063 mov ecx, dword ptr [0x12241f68] */
  ECX = (r32((uint32_t)(0x12241f68)));
  /* 1221a069 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a06b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1221a06e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1221a073 push 8 */
  push32((uint32_t)(0x8u));
  /* 1221a075 mov edx, dword ptr [0x12241f6c] */
  EDX = (r32((uint32_t)(0x12241f6c)));
  /* 1221a07b push edx */
  push32((uint32_t)(EDX));
  /* 1221a07c call dword ptr [0x12243328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243328))), 0x1221a082u);
  /* 1221a082 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221a085 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 1221a088 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221a08b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221a08f jne 0x1221a095 */
  if (!C.zf) goto L_1221a095;
  /* 1221a091 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221a093 jmp 0x1221a10b */
  goto L_1221a10b;
L_1221a095:;
  /* 1221a095 push 4 */
  push32((uint32_t)(0x4u));
  /* 1221a097 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1221a09c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1221a0a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221a0a3 call dword ptr [0x12243320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243320))), 0x1221a0a9u);
  /* 1221a0a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221a0ac mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1221a0af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221a0b2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221a0b6 jne 0x1221a0d2 */
  if (!C.zf) goto L_1221a0d2;
  /* 1221a0b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221a0bb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1221a0be push ecx */
  push32((uint32_t)(ECX));
  /* 1221a0bf push 0 */
  push32((uint32_t)(0x0u));
  /* 1221a0c1 mov edx, dword ptr [0x12241f6c] */
  EDX = (r32((uint32_t)(0x12241f6c)));
  /* 1221a0c7 push edx */
  push32((uint32_t)(EDX));
  /* 1221a0c8 call dword ptr [0x12243354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243354))), 0x1221a0ceu);
  /* 1221a0ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221a0d0 jmp 0x1221a10b */
  goto L_1221a10b;
L_1221a0d2:;
  /* 1221a0d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221a0d5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1221a0db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221a0de mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1221a0e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221a0e8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1221a0ef mov eax, dword ptr [0x12241f64] */
  EAX = (r32((uint32_t)(0x12241f64)));
  /* 1221a0f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a0f7 mov dword ptr [0x12241f64], eax */
  w32((uint32_t)(0x12241f64), (EAX));
  /* 1221a0fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221a0ff mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1221a102 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 1221a108 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1221a10b:;
  /* 1221a10b mov esp, ebp */
  ESP = (EBP);
  /* 1221a10d pop ebp */
  EBP = (pop32());
  /* 1221a10e ret  */
  ESPCHK(0x1221a000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a110 @ 0x1221a110 (494 bytes, 149 insns) */
void f_1221a110(void) {
  FTRACE(0x1221a110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221a110 push ebp */
  push32((uint32_t)(EBP));
  /* 1221a111 mov ebp, esp */
  EBP = (ESP);
  /* 1221a113 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221a116 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221a119 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1221a11c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1221a11f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221a122 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1221a125 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1221a128 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_1221a12f:;
  /* 1221a12f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221a133 jl 0x1221a148 */
  if ((C.sf!=C.of)) goto L_1221a148;
  /* 1221a135 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221a138 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1221a13a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1221a13d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1221a140 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a143 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1221a146 jmp 0x1221a12f */
  goto L_1221a12f;
L_1221a148:;
  /* 1221a148 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1221a14b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221a151 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1221a154 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1221a15b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1221a15e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1221a165 jmp 0x1221a170 */
  goto L_1221a170;
L_1221a167:;
  /* 1221a167 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1221a16a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a16d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1221a170:;
  /* 1221a170 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221a174 jge 0x1221a196 */
  if ((C.sf==C.of)) goto L_1221a196;
  /* 1221a176 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1221a179 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221a17c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 1221a17f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1221a182 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1221a185 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1221a188 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1221a18b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1221a18e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1221a191 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1221a194 jmp 0x1221a167 */
  goto L_1221a167;
L_1221a196:;
  /* 1221a196 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1221a199 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1221a19c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221a19f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1221a1a2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a1a4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1221a1a7 push 4 */
  push32((uint32_t)(0x4u));
  /* 1221a1a9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1221a1ae push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1221a1b3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221a1b6 push edx */
  push32((uint32_t)(EDX));
  /* 1221a1b7 call dword ptr [0x12243320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243320))), 0x1221a1bdu);
  /* 1221a1bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221a1bf jne 0x1221a1c9 */
  if (!C.zf) goto L_1221a1c9;
  /* 1221a1c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1221a1c4 jmp 0x1221a2fa */
  goto L_1221a2fa;
L_1221a1c9:;
  /* 1221a1c9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221a1cc add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a1d1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1221a1d4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221a1d7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1221a1da jmp 0x1221a1e8 */
  goto L_1221a1e8;
L_1221a1dc:;
  /* 1221a1dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221a1df add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a1e5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1221a1e8:;
  /* 1221a1e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221a1eb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221a1ee ja 0x1221a24d */
  if ((!C.cf&&!C.zf)) goto L_1221a24d;
  /* 1221a1f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221a1f3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1221a1fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221a1fd mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 1221a207 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221a20a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a20d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1221a210 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1221a213 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1221a219 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1221a21c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a222 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1221a225 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1221a228 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1221a22b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221a231 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1221a234 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1221a237 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1221a23a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a23f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1221a242 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221a245 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1221a24b jmp 0x1221a1dc */
  goto L_1221a1dc;
L_1221a24d:;
  /* 1221a24d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221a250 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a256 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1221a259 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221a25c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a25f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1221a262 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1221a265 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1221a268 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1221a26b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1221a26e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1221a271 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1221a274 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1221a277 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1221a27a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a27d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1221a280 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1221a283 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1221a286 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1221a289 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1221a28c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1221a28f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1221a292 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1221a295 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1221a298 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1221a29b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 1221a2a3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1221a2a6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1221a2a9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 1221a2b4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1221a2b7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 1221a2bb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1221a2be mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 1221a2c1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1221a2c4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1221a2c7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 1221a2ca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221a2cc jne 0x1221a2dd */
  if (!C.zf) goto L_1221a2dd;
  /* 1221a2ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221a2d1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1221a2d4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1221a2d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221a2da mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1221a2dd:;
  /* 1221a2dd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1221a2e2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1221a2e5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1221a2e7 not edx */
  EDX = (~(EDX));
  /* 1221a2e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221a2ec mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1221a2ef and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1221a2f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221a2f4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1221a2f7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1221a2fa:;
  /* 1221a2fa mov esp, ebp */
  ESP = (EBP);
  /* 1221a2fc pop ebp */
  EBP = (pop32());
  /* 1221a2fd ret  */
  ESPCHK(0x1221a110u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a300 @ 0x1221a300 (1515 bytes, 489 insns) */
void f_1221a300(void) {
  FTRACE(0x1221a300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221a300 push ebp */
  push32((uint32_t)(EBP));
  /* 1221a301 mov ebp, esp */
  EBP = (ESP);
  /* 1221a303 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221a306 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1221a309 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a30c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1221a30e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1221a311 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221a314 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1221a317 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1221a31a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221a31d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221a320 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221a323 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221a326 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221a329 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1221a32c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1221a32f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221a332 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221a338 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221a33b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1221a342 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1221a345 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221a348 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221a34b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1221a34e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1221a351 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1221a353 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221a356 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1221a359 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1221a35c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a35f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1221a362 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1221a365 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1221a367 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1221a36a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1221a36d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221a370 jle 0x1221a626 */
  if ((C.zf||C.sf!=C.of)) goto L_1221a626;
  /* 1221a376 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221a379 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1221a37c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1221a37e jne 0x1221a38b */
  if (!C.zf) goto L_1221a38b;
  /* 1221a380 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1221a383 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a386 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221a389 jle 0x1221a392 */
  if ((C.zf||C.sf!=C.of)) goto L_1221a392;
L_1221a38b:;
  /* 1221a38b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221a38d jmp 0x1221a8e7 */
  goto L_1221a8e7;
L_1221a392:;
  /* 1221a392 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221a395 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1221a398 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221a39b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1221a39e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221a3a2 jbe 0x1221a3ab */
  if ((C.cf||C.zf)) goto L_1221a3ab;
  /* 1221a3a4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1221a3ab:;
  /* 1221a3ab mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1221a3ae mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1221a3b1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1221a3b4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221a3b7 jne 0x1221a48d */
  if (!C.zf) goto L_1221a48d;
  /* 1221a3bd cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221a3c1 jae 0x1221a422 */
  if (!C.cf) goto L_1221a422;
  /* 1221a3c3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1221a3c8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1221a3cb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1221a3cd not edx */
  EDX = (~(EDX));
  /* 1221a3cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221a3d2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221a3d5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1221a3d9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1221a3db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221a3de mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221a3e1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1221a3e5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221a3e8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a3eb mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1221a3ee sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1221a3f1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221a3f4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a3f7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1221a3fa mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221a3fd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a400 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1221a404 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1221a406 jne 0x1221a420 */
  if (!C.zf) goto L_1221a420;
  /* 1221a408 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1221a40d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1221a410 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1221a412 not edx */
  EDX = (~(EDX));
  /* 1221a414 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221a417 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1221a419 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1221a41b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221a41e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1221a420:;
  /* 1221a420 jmp 0x1221a48d */
  goto L_1221a48d;
L_1221a422:;
  /* 1221a422 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1221a425 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221a428 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1221a42d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1221a42f not eax */
  EAX = (~(EAX));
  /* 1221a431 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221a434 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221a437 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1221a43e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221a440 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221a443 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221a446 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1221a44d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221a450 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a453 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1221a456 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1221a459 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221a45c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a45f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1221a462 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221a465 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a468 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1221a46c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221a46e jne 0x1221a48d */
  if (!C.zf) goto L_1221a48d;
  /* 1221a470 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1221a473 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221a476 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1221a47b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1221a47d not eax */
  EAX = (~(EAX));
  /* 1221a47f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221a482 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1221a485 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1221a487 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221a48a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1221a48d:;
  /* 1221a48d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1221a490 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1221a493 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1221a496 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1221a499 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1221a49c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1221a49f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1221a4a2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1221a4a5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1221a4a8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1221a4ab mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1221a4ae add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a4b1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221a4b4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1221a4b7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221a4bb jle 0x1221a607 */
  if ((C.zf||C.sf!=C.of)) goto L_1221a607;
  /* 1221a4c1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1221a4c4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a4c7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1221a4ca mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221a4cd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1221a4d0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221a4d3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1221a4d6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221a4da jbe 0x1221a4e3 */
  if ((C.cf||C.zf)) goto L_1221a4e3;
  /* 1221a4dc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1221a4e3:;
  /* 1221a4e3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1221a4e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221a4e9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1221a4ec mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1221a4ef mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1221a4f2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1221a4f5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1221a4f8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1221a4fb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1221a4fe mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1221a501 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1221a504 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1221a507 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1221a50a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1221a50d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1221a510 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1221a513 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1221a516 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1221a519 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1221a51c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1221a51f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1221a522 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221a525 jne 0x1221a5f3 */
  if (!C.zf) goto L_1221a5f3;
  /* 1221a52b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221a52f jae 0x1221a58c */
  if (!C.cf) goto L_1221a58c;
  /* 1221a531 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221a534 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a537 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1221a53b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221a53e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a541 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1221a544 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1221a547 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221a54a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a54d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1221a550 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221a552 jne 0x1221a56a */
  if (!C.zf) goto L_1221a56a;
  /* 1221a554 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1221a559 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1221a55c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1221a55e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221a561 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1221a563 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1221a565 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221a568 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1221a56a:;
  /* 1221a56a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1221a56f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1221a572 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1221a574 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221a577 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221a57a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1221a57e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221a580 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221a583 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221a586 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1221a58a jmp 0x1221a5f3 */
  goto L_1221a5f3;
L_1221a58c:;
  /* 1221a58c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221a58f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a592 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1221a596 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221a599 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a59c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1221a59f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1221a5a2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221a5a5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a5a8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1221a5ab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221a5ad jne 0x1221a5ca */
  if (!C.zf) goto L_1221a5ca;
  /* 1221a5af mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1221a5b2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221a5b5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1221a5ba shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1221a5bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221a5bf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1221a5c2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1221a5c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221a5c7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1221a5ca:;
  /* 1221a5ca mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1221a5cd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221a5d0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1221a5d5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1221a5d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221a5da mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221a5dd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1221a5e4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221a5e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221a5e9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221a5ec mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1221a5f3:;
  /* 1221a5f3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1221a5f6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221a5f9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1221a5fb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1221a5fe add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a601 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221a604 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_1221a607:;
  /* 1221a607 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1221a60a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a60d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1221a610 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1221a612 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1221a615 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a618 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1221a61b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a61e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1221a621 jmp 0x1221a8e2 */
  goto L_1221a8e2;
L_1221a626:;
  /* 1221a626 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1221a629 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221a62c jge 0x1221a8e2 */
  if ((C.sf==C.of)) goto L_1221a8e2;
  /* 1221a632 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1221a635 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a638 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1221a63b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1221a63d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1221a640 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a643 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1221a646 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a649 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1221a64c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1221a64f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a652 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1221a655 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1221a658 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221a65b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1221a65e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1221a661 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1221a664 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221a667 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1221a66a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221a66e jbe 0x1221a677 */
  if ((C.cf||C.zf)) goto L_1221a677;
  /* 1221a670 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1221a677:;
  /* 1221a677 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221a67a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1221a67d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221a67f jne 0x1221a7c0 */
  if (!C.zf) goto L_1221a7c0;
  /* 1221a685 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221a688 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1221a68b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221a68e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1221a691 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221a695 jbe 0x1221a69e */
  if ((C.cf||C.zf)) goto L_1221a69e;
  /* 1221a697 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1221a69e:;
  /* 1221a69e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1221a6a1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1221a6a4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1221a6a7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221a6aa jne 0x1221a780 */
  if (!C.zf) goto L_1221a780;
  /* 1221a6b0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221a6b4 jae 0x1221a715 */
  if (!C.cf) goto L_1221a715;
  /* 1221a6b6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1221a6bb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1221a6be shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1221a6c0 not edx */
  EDX = (~(EDX));
  /* 1221a6c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221a6c5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221a6c8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1221a6cc and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1221a6ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221a6d1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221a6d4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1221a6d8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221a6db add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a6de mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1221a6e1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1221a6e4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221a6e7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a6ea mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1221a6ed mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221a6f0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a6f3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1221a6f7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1221a6f9 jne 0x1221a713 */
  if (!C.zf) goto L_1221a713;
  /* 1221a6fb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1221a700 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1221a703 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1221a705 not edx */
  EDX = (~(EDX));
  /* 1221a707 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221a70a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1221a70c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1221a70e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221a711 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1221a713:;
  /* 1221a713 jmp 0x1221a780 */
  goto L_1221a780;
L_1221a715:;
  /* 1221a715 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1221a718 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221a71b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1221a720 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1221a722 not eax */
  EAX = (~(EAX));
  /* 1221a724 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221a727 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221a72a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1221a731 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221a733 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221a736 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221a739 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1221a740 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221a743 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a746 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1221a749 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1221a74c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221a74f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a752 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1221a755 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221a758 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a75b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1221a75f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221a761 jne 0x1221a780 */
  if (!C.zf) goto L_1221a780;
  /* 1221a763 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1221a766 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221a769 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1221a76e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1221a770 not eax */
  EAX = (~(EAX));
  /* 1221a772 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221a775 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1221a778 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1221a77a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221a77d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1221a780:;
  /* 1221a780 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1221a783 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1221a786 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1221a789 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1221a78c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1221a78f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1221a792 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1221a795 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1221a798 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1221a79b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1221a79e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1221a7a1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a7a4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1221a7a7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1221a7aa sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1221a7ad sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221a7b0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1221a7b3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221a7b7 jbe 0x1221a7c0 */
  if ((C.cf||C.zf)) goto L_1221a7c0;
  /* 1221a7b9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1221a7c0:;
  /* 1221a7c0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221a7c3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221a7c6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1221a7c9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1221a7cc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1221a7cf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1221a7d2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1221a7d5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1221a7d8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1221a7db mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1221a7de mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1221a7e1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1221a7e4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1221a7e7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1221a7ea mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1221a7ed mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1221a7f0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1221a7f3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1221a7f6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1221a7f9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1221a7fc mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1221a7ff cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221a802 jne 0x1221a8ce */
  if (!C.zf) goto L_1221a8ce;
  /* 1221a808 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221a80c jae 0x1221a868 */
  if (!C.cf) goto L_1221a868;
  /* 1221a80e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221a811 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a814 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1221a818 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221a81b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a81e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1221a821 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1221a823 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221a826 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a829 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1221a82c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1221a82e jne 0x1221a846 */
  if (!C.zf) goto L_1221a846;
  /* 1221a830 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1221a835 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221a838 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1221a83a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221a83d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1221a83f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1221a841 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221a844 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1221a846:;
  /* 1221a846 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1221a84b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221a84e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1221a850 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221a853 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221a856 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1221a85a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1221a85c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221a85f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221a862 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1221a866 jmp 0x1221a8ce */
  goto L_1221a8ce;
L_1221a868:;
  /* 1221a868 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221a86b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a86e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1221a872 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221a875 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a878 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1221a87b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1221a87d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221a880 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a883 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1221a886 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1221a888 jne 0x1221a8a5 */
  if (!C.zf) goto L_1221a8a5;
  /* 1221a88a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221a88d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221a890 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1221a895 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1221a897 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221a89a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1221a89d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1221a89f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221a8a2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1221a8a5:;
  /* 1221a8a5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221a8a8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221a8ab mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1221a8b0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1221a8b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221a8b5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221a8b8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1221a8bf or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1221a8c1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221a8c4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221a8c7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1221a8ce:;
  /* 1221a8ce mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1221a8d1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1221a8d4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1221a8d6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1221a8d9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a8dc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1221a8df mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1221a8e2:;
  /* 1221a8e2 mov eax, 1 */
  EAX = (0x1u);
L_1221a8e7:;
  /* 1221a8e7 mov esp, ebp */
  ESP = (EBP);
  /* 1221a8e9 pop ebp */
  EBP = (pop32());
  /* 1221a8ea ret  */
  ESPCHK(0x1221a300u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a8f0 @ 0x1221a8f0 (304 bytes, 79 insns) */
void f_1221a8f0(void) {
  FTRACE(0x1221a8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221a8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1221a8f1 mov ebp, esp */
  EBP = (ESP);
  /* 1221a8f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1221a8f4 cmp dword ptr [0x12241f60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12241f60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221a8fb je 0x1221aa1c */
  if (C.zf) goto L_1221aa1c;
  /* 1221a901 mov eax, dword ptr [0x12241f58] */
  EAX = (r32((uint32_t)(0x12241f58)));
  /* 1221a906 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1221a909 mov ecx, dword ptr [0x12241f60] */
  ECX = (r32((uint32_t)(0x12241f60)));
  /* 1221a90f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1221a912 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a914 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1221a917 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1221a91c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1221a921 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221a924 push eax */
  push32((uint32_t)(EAX));
  /* 1221a925 call dword ptr [0x12243344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243344))), 0x1221a92bu);
  /* 1221a92b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1221a930 mov ecx, dword ptr [0x12241f58] */
  ECX = (r32((uint32_t)(0x12241f58)));
  /* 1221a936 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1221a938 mov eax, dword ptr [0x12241f60] */
  EAX = (r32((uint32_t)(0x12241f60)));
  /* 1221a93d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1221a940 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1221a942 mov edx, dword ptr [0x12241f60] */
  EDX = (r32((uint32_t)(0x12241f60)));
  /* 1221a948 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1221a94b mov eax, dword ptr [0x12241f60] */
  EAX = (r32((uint32_t)(0x12241f60)));
  /* 1221a950 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1221a953 mov edx, dword ptr [0x12241f58] */
  EDX = (r32((uint32_t)(0x12241f58)));
  /* 1221a959 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1221a964 mov eax, dword ptr [0x12241f60] */
  EAX = (r32((uint32_t)(0x12241f60)));
  /* 1221a969 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1221a96c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1221a96f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1221a972 mov eax, dword ptr [0x12241f60] */
  EAX = (r32((uint32_t)(0x12241f60)));
  /* 1221a977 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1221a97a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1221a97d mov edx, dword ptr [0x12241f60] */
  EDX = (r32((uint32_t)(0x12241f60)));
  /* 1221a983 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1221a986 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1221a98a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1221a98c jne 0x1221a9a2 */
  if (!C.zf) goto L_1221a9a2;
  /* 1221a98e mov edx, dword ptr [0x12241f60] */
  EDX = (r32((uint32_t)(0x12241f60)));
  /* 1221a994 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1221a997 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1221a999 mov ecx, dword ptr [0x12241f60] */
  ECX = (r32((uint32_t)(0x12241f60)));
  /* 1221a99f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1221a9a2:;
  /* 1221a9a2 mov edx, dword ptr [0x12241f60] */
  EDX = (r32((uint32_t)(0x12241f60)));
  /* 1221a9a8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221a9ac jne 0x1221aa12 */
  if (!C.zf) goto L_1221aa12;
  /* 1221a9ae cmp dword ptr [0x12241f64], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12241f64))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221a9b5 jle 0x1221aa12 */
  if ((C.zf||C.sf!=C.of)) goto L_1221aa12;
  /* 1221a9b7 mov eax, dword ptr [0x12241f60] */
  EAX = (r32((uint32_t)(0x12241f60)));
  /* 1221a9bc mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1221a9bf push ecx */
  push32((uint32_t)(ECX));
  /* 1221a9c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221a9c2 mov edx, dword ptr [0x12241f6c] */
  EDX = (r32((uint32_t)(0x12241f6c)));
  /* 1221a9c8 push edx */
  push32((uint32_t)(EDX));
  /* 1221a9c9 call dword ptr [0x12243354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243354))), 0x1221a9cfu);
  /* 1221a9cf mov eax, dword ptr [0x12241f64] */
  EAX = (r32((uint32_t)(0x12241f64)));
  /* 1221a9d4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221a9d7 mov ecx, dword ptr [0x12241f68] */
  ECX = (r32((uint32_t)(0x12241f68)));
  /* 1221a9dd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a9df mov edx, dword ptr [0x12241f60] */
  EDX = (r32((uint32_t)(0x12241f60)));
  /* 1221a9e5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a9e8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221a9ea push ecx */
  push32((uint32_t)(ECX));
  /* 1221a9eb mov eax, dword ptr [0x12241f60] */
  EAX = (r32((uint32_t)(0x12241f60)));
  /* 1221a9f0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221a9f3 push eax */
  push32((uint32_t)(EAX));
  /* 1221a9f4 mov ecx, dword ptr [0x12241f60] */
  ECX = (r32((uint32_t)(0x12241f60)));
  /* 1221a9fa push ecx */
  push32((uint32_t)(ECX));
  /* 1221a9fb call 0x1221d020 */
  push32(0x1221aa00u); f_1221d020();
  /* 1221aa00 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221aa03 mov edx, dword ptr [0x12241f64] */
  EDX = (r32((uint32_t)(0x12241f64)));
  /* 1221aa09 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221aa0c mov dword ptr [0x12241f64], edx */
  w32((uint32_t)(0x12241f64), (EDX));
L_1221aa12:;
  /* 1221aa12 mov dword ptr [0x12241f60], 0 */
  w32((uint32_t)(0x12241f60), (0x0u));
L_1221aa1c:;
  /* 1221aa1c mov esp, ebp */
  ESP = (EBP);
  /* 1221aa1e pop ebp */
  EBP = (pop32());
  /* 1221aa1f ret  */
  ESPCHK(0x1221a8f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa20 @ 0x1221aa20 (1565 bytes, 343 insns) */
void f_1221aa20(void) {
  FTRACE(0x1221aa20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221aa20 push ebp */
  push32((uint32_t)(EBP));
  /* 1221aa21 mov ebp, esp */
  EBP = (ESP);
  /* 1221aa23 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221aa29 mov eax, dword ptr [0x12241f64] */
  EAX = (r32((uint32_t)(0x12241f64)));
  /* 1221aa2e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221aa31 push eax */
  push32((uint32_t)(EAX));
  /* 1221aa32 mov ecx, dword ptr [0x12241f68] */
  ECX = (r32((uint32_t)(0x12241f68)));
  /* 1221aa38 push ecx */
  push32((uint32_t)(ECX));
  /* 1221aa39 call dword ptr [0x122433bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122433bc))), 0x1221aa3fu);
  /* 1221aa3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221aa41 je 0x1221aa4b */
  if (C.zf) goto L_1221aa4b;
  /* 1221aa43 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1221aa46 jmp 0x1221b039 */
  goto L_1221b039;
L_1221aa4b:;
  /* 1221aa4b mov edx, dword ptr [0x12241f68] */
  EDX = (r32((uint32_t)(0x12241f68)));
  /* 1221aa51 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 1221aa57 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 1221aa61 jmp 0x1221aa72 */
  goto L_1221aa72;
L_1221aa63:;
  /* 1221aa63 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 1221aa69 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221aa6c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_1221aa72:;
  /* 1221aa72 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 1221aa78 cmp ecx, dword ptr [0x12241f64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12241f64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221aa7e jge 0x1221b037 */
  if ((C.sf==C.of)) goto L_1221b037;
  /* 1221aa84 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1221aa8a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1221aa8d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 1221aa93 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1221aa98 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1221aa9e push ecx */
  push32((uint32_t)(ECX));
  /* 1221aa9f call dword ptr [0x122433bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122433bc))), 0x1221aaa5u);
  /* 1221aaa5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221aaa7 je 0x1221aab3 */
  if (C.zf) goto L_1221aab3;
  /* 1221aaa9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1221aaae jmp 0x1221b039 */
  goto L_1221b039;
L_1221aab3:;
  /* 1221aab3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1221aab9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1221aabc mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 1221aac2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1221aac8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221aace mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1221aad1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1221aad7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1221aada mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1221aadd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 1221aae7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 1221aaf1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1221aaf8 jmp 0x1221ab03 */
  goto L_1221ab03;
L_1221aafa:;
  /* 1221aafa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221aafd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ab00 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1221ab03:;
  /* 1221ab03 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ab07 jge 0x1221affb */
  if ((C.sf==C.of)) goto L_1221affb;
  /* 1221ab0d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 1221ab17 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 1221ab21 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1221ab2b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 1221ab35 jmp 0x1221ab46 */
  goto L_1221ab46;
L_1221ab37:;
  /* 1221ab37 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1221ab3d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ab40 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_1221ab46:;
  /* 1221ab46 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ab4d jge 0x1221ab62 */
  if ((C.sf==C.of)) goto L_1221ab62;
  /* 1221ab4f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1221ab55 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 1221ab60 jmp 0x1221ab37 */
  goto L_1221ab37;
L_1221ab62:;
  /* 1221ab62 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ab66 jl 0x1221af9d */
  if ((C.sf!=C.of)) goto L_1221af9d;
  /* 1221ab6c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1221ab71 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 1221ab77 push ecx */
  push32((uint32_t)(ECX));
  /* 1221ab78 call dword ptr [0x122433bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122433bc))), 0x1221ab7eu);
  /* 1221ab7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221ab80 je 0x1221ab8c */
  if (C.zf) goto L_1221ab8c;
  /* 1221ab82 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 1221ab87 jmp 0x1221b039 */
  goto L_1221b039;
L_1221ab8c:;
  /* 1221ab8c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1221ab92 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1221ab95 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1221ab9f jmp 0x1221abb0 */
  goto L_1221abb0;
L_1221aba1:;
  /* 1221aba1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 1221aba7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221abaa mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_1221abb0:;
  /* 1221abb0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221abb7 jge 0x1221ad34 */
  if ((C.sf==C.of)) goto L_1221ad34;
  /* 1221abbd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221abc0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221abc3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 1221abc9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1221abcf add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221abd5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 1221abdb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1221abe1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221abe5 jne 0x1221abf2 */
  if (!C.zf) goto L_1221abf2;
  /* 1221abe7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1221abed cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221abf0 je 0x1221abfc */
  if (C.zf) goto L_1221abfc;
L_1221abf2:;
  /* 1221abf2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 1221abf7 jmp 0x1221b039 */
  goto L_1221b039;
L_1221abfc:;
  /* 1221abfc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1221ac02 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1221ac04 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1221ac0a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 1221ac10 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 1221ac16 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1221ac1c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1221ac1f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221ac21 je 0x1221ac59 */
  if (C.zf) goto L_1221ac59;
  /* 1221ac23 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1221ac29 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221ac2c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1221ac32 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ac3c jle 0x1221ac48 */
  if ((C.zf||C.sf!=C.of)) goto L_1221ac48;
  /* 1221ac3e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 1221ac43 jmp 0x1221b039 */
  goto L_1221b039;
L_1221ac48:;
  /* 1221ac48 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1221ac4e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ac51 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 1221ac57 jmp 0x1221ac9b */
  goto L_1221ac9b;
L_1221ac59:;
  /* 1221ac59 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1221ac5f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1221ac62 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221ac65 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1221ac6b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ac72 jle 0x1221ac7e */
  if ((C.zf||C.sf!=C.of)) goto L_1221ac7e;
  /* 1221ac74 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1221ac7e:;
  /* 1221ac7e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1221ac84 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1221ac8b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ac8e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1221ac94 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1221ac9b:;
  /* 1221ac9b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221aca2 jl 0x1221acbd */
  if ((C.sf!=C.of)) goto L_1221acbd;
  /* 1221aca4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1221acaa and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1221acad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221acaf jne 0x1221acbd */
  if (!C.zf) goto L_1221acbd;
  /* 1221acb1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221acbb jle 0x1221acc7 */
  if ((C.zf||C.sf!=C.of)) goto L_1221acc7;
L_1221acbd:;
  /* 1221acbd mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 1221acc2 jmp 0x1221b039 */
  goto L_1221b039;
L_1221acc7:;
  /* 1221acc7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1221accd add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221acd3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1221acd6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221acdc je 0x1221ace8 */
  if (C.zf) goto L_1221ace8;
  /* 1221acde mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1221ace3 jmp 0x1221b039 */
  goto L_1221b039;
L_1221ace8:;
  /* 1221ace8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1221acee add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221acf4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1221acfa mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1221ad00 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ad06 jb 0x1221abfc */
  if (C.cf) goto L_1221abfc;
  /* 1221ad0c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1221ad12 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ad18 je 0x1221ad24 */
  if (C.zf) goto L_1221ad24;
  /* 1221ad1a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1221ad1f jmp 0x1221b039 */
  goto L_1221b039;
L_1221ad24:;
  /* 1221ad24 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221ad27 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ad2c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1221ad2f jmp 0x1221aba1 */
  goto L_1221aba1;
L_1221ad34:;
  /* 1221ad34 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1221ad37 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1221ad39 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ad3f je 0x1221ad4b */
  if (C.zf) goto L_1221ad4b;
  /* 1221ad41 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 1221ad46 jmp 0x1221b039 */
  goto L_1221b039;
L_1221ad4b:;
  /* 1221ad4b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1221ad4e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 1221ad54 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1221ad5b jmp 0x1221ad66 */
  goto L_1221ad66;
L_1221ad5d:;
  /* 1221ad5d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1221ad60 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ad63 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1221ad66:;
  /* 1221ad66 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ad6a jge 0x1221af9d */
  if ((C.sf==C.of)) goto L_1221af9d;
  /* 1221ad70 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1221ad7a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1221ad80 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_1221ad86:;
  /* 1221ad86 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1221ad8c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1221ad8f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 1221ad95 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1221ad9b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ada1 je 0x1221aeca */
  if (C.zf) goto L_1221aeca;
  /* 1221ada7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1221adaa mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1221adb0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221adb7 je 0x1221aeca */
  if (C.zf) goto L_1221aeca;
  /* 1221adbd mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1221adc3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221adc9 jb 0x1221adde */
  if (C.cf) goto L_1221adde;
  /* 1221adcb mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 1221add1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221add6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221addc jb 0x1221ade8 */
  if (C.cf) goto L_1221ade8;
L_1221adde:;
  /* 1221adde mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 1221ade3 jmp 0x1221b039 */
  goto L_1221b039;
L_1221ade8:;
  /* 1221ade8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1221adee and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 1221adf4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1221adfa mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 1221ae00 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ae03 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1221ae06 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221ae09 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ae0e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_1221ae14:;
  /* 1221ae14 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221ae17 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ae1d je 0x1221ae3e */
  if (C.zf) goto L_1221ae3e;
  /* 1221ae1f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221ae22 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ae28 jne 0x1221ae2c */
  if (!C.zf) goto L_1221ae2c;
  /* 1221ae2a jmp 0x1221ae3e */
  goto L_1221ae3e;
L_1221ae2c:;
  /* 1221ae2c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221ae2f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1221ae31 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 1221ae34 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221ae37 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ae39 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1221ae3c jmp 0x1221ae14 */
  goto L_1221ae14;
L_1221ae3e:;
  /* 1221ae3e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221ae41 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ae47 jne 0x1221ae53 */
  if (!C.zf) goto L_1221ae53;
  /* 1221ae49 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1221ae4e jmp 0x1221b039 */
  goto L_1221b039;
L_1221ae53:;
  /* 1221ae53 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1221ae59 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1221ae5b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1221ae5e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221ae61 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1221ae67 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ae6e jle 0x1221ae7a */
  if ((C.zf||C.sf!=C.of)) goto L_1221ae7a;
  /* 1221ae70 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1221ae7a:;
  /* 1221ae7a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1221ae80 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ae83 je 0x1221ae8f */
  if (C.zf) goto L_1221ae8f;
  /* 1221ae85 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1221ae8a jmp 0x1221b039 */
  goto L_1221b039;
L_1221ae8f:;
  /* 1221ae8f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1221ae95 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1221ae98 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ae9e je 0x1221aeaa */
  if (C.zf) goto L_1221aeaa;
  /* 1221aea0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 1221aea5 jmp 0x1221b039 */
  goto L_1221b039;
L_1221aeaa:;
  /* 1221aeaa mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1221aeb0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1221aeb6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1221aebc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221aebf mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 1221aec5 jmp 0x1221ad86 */
  goto L_1221ad86;
L_1221aeca:;
  /* 1221aeca cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221aed1 je 0x1221af41 */
  if (C.zf) goto L_1221af41;
  /* 1221aed3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221aed7 jge 0x1221af0b */
  if ((C.sf==C.of)) goto L_1221af0b;
  /* 1221aed9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1221aede mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1221aee1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1221aee3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1221aee9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1221aeeb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 1221aef1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1221aef6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1221aef9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1221aefb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1221af01 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1221af03 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 1221af09 jmp 0x1221af41 */
  goto L_1221af41;
L_1221af0b:;
  /* 1221af0b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1221af0e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221af11 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1221af16 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1221af18 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1221af1e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1221af20 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 1221af26 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1221af29 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221af2c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1221af31 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1221af33 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 1221af39 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1221af3b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_1221af41:;
  /* 1221af41 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1221af47 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1221af4a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221af50 jne 0x1221af64 */
  if (!C.zf) goto L_1221af64;
  /* 1221af52 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1221af55 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1221af5b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221af62 je 0x1221af6e */
  if (C.zf) goto L_1221af6e;
L_1221af64:;
  /* 1221af64 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 1221af69 jmp 0x1221b039 */
  goto L_1221b039;
L_1221af6e:;
  /* 1221af6e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1221af74 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1221af77 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221af7d je 0x1221af89 */
  if (C.zf) goto L_1221af89;
  /* 1221af7f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 1221af84 jmp 0x1221b039 */
  goto L_1221b039;
L_1221af89:;
  /* 1221af89 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1221af8f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221af92 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 1221af98 jmp 0x1221ad5d */
  goto L_1221ad5d;
L_1221af9d:;
  /* 1221af9d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221afa0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1221afa6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1221afac cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221afb0 jne 0x1221afca */
  if (!C.zf) goto L_1221afca;
  /* 1221afb2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221afb5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1221afbb mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 1221afc1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221afc8 je 0x1221afd1 */
  if (C.zf) goto L_1221afd1;
L_1221afca:;
  /* 1221afca mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1221afcf jmp 0x1221b039 */
  goto L_1221b039;
L_1221afd1:;
  /* 1221afd1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1221afd7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221afdd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 1221afe3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1221afe6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221afeb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1221afee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221aff1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1221aff3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1221aff6 jmp 0x1221aafa */
  goto L_1221aafa;
L_1221affb:;
  /* 1221affb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1221b001 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1221b007 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221b009 jne 0x1221b01c */
  if (!C.zf) goto L_1221b01c;
  /* 1221b00b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1221b011 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 1221b017 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221b01a je 0x1221b023 */
  if (C.zf) goto L_1221b023;
L_1221b01c:;
  /* 1221b01c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 1221b021 jmp 0x1221b039 */
  goto L_1221b039;
L_1221b023:;
  /* 1221b023 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1221b029 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221b02c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 1221b032 jmp 0x1221aa63 */
  goto L_1221aa63;
L_1221b037:;
  /* 1221b037 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1221b039:;
  /* 1221b039 mov esp, ebp */
  ESP = (EBP);
  /* 1221b03b pop ebp */
  EBP = (pop32());
  /* 1221b03c ret  */
  ESPCHK(0x1221aa20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b040 @ 0x1221b040 (250 bytes, 92 insns) */
void f_1221b040(void) {
  FTRACE(0x1221b040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221b040 push ebp */
  push32((uint32_t)(EBP));
  /* 1221b041 mov ebp, esp */
  EBP = (ESP);
  /* 1221b043 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221b046 push ebx */
  push32((uint32_t)(EBX));
  /* 1221b047 push esi */
  push32((uint32_t)(ESI));
  /* 1221b048 push edi */
  push32((uint32_t)(EDI));
  /* 1221b049 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1221b04c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1221b04f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1221b052 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1221b055:;
  /* 1221b055 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221b059 jne 0x1221b079 */
  if (!C.zf) goto L_1221b079;
  /* 1221b05b push 0x1223c09c */
  push32((uint32_t)(0x1223c09cu));
  /* 1221b060 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221b062 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1221b064 push 0x1223c090 */
  push32((uint32_t)(0x1223c090u));
  /* 1221b069 push 2 */
  push32((uint32_t)(0x2u));
  /* 1221b06b call 0x122141f0 */
  push32(0x1221b070u); f_122141f0();
  /* 1221b070 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221b073 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221b076 jne 0x1221b079 */
  if (!C.zf) goto L_1221b079;
  /* 1221b078 int3  */
  x86_unimpl("int3 @ 0x1221b078");
L_1221b079:;
  /* 1221b079 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1221b07b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221b07d jne 0x1221b055 */
  if (!C.zf) goto L_1221b055;
L_1221b07f:;
  /* 1221b07f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221b083 jne 0x1221b0a3 */
  if (!C.zf) goto L_1221b0a3;
  /* 1221b085 push 0x1223c080 */
  push32((uint32_t)(0x1223c080u));
  /* 1221b08a push 0 */
  push32((uint32_t)(0x0u));
  /* 1221b08c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1221b08e push 0x1223c090 */
  push32((uint32_t)(0x1223c090u));
  /* 1221b093 push 2 */
  push32((uint32_t)(0x2u));
  /* 1221b095 call 0x122141f0 */
  push32(0x1221b09au); f_122141f0();
  /* 1221b09a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221b09d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221b0a0 jne 0x1221b0a3 */
  if (!C.zf) goto L_1221b0a3;
  /* 1221b0a2 int3  */
  x86_unimpl("int3 @ 0x1221b0a2");
L_1221b0a3:;
  /* 1221b0a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221b0a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221b0a7 jne 0x1221b07f */
  if (!C.zf) goto L_1221b07f;
  /* 1221b0a9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221b0ac mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1221b0b3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221b0b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221b0b9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1221b0bc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221b0bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221b0c2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1221b0c4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221b0c7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1221b0ce mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1221b0d1 push ecx */
  push32((uint32_t)(ECX));
  /* 1221b0d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221b0d5 push edx */
  push32((uint32_t)(EDX));
  /* 1221b0d6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221b0d9 push eax */
  push32((uint32_t)(EAX));
  /* 1221b0da call 0x1221c0c0 */
  push32(0x1221b0dfu); f_1221c0c0();
  /* 1221b0df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221b0e2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1221b0e5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221b0e8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1221b0eb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221b0ee mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221b0f1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1221b0f4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221b0f7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221b0fb jl 0x1221b11f */
  if ((C.sf!=C.of)) goto L_1221b11f;
  /* 1221b0fd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221b100 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1221b102 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1221b105 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1221b107 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1221b10d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1221b110 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221b113 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1221b115 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221b118 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221b11b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1221b11d jmp 0x1221b130 */
  goto L_1221b130;
L_1221b11f:;
  /* 1221b11f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221b122 push edx */
  push32((uint32_t)(EDX));
  /* 1221b123 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221b125 call 0x1221be40 */
  push32(0x1221b12au); f_1221be40();
  /* 1221b12a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221b12d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1221b130:;
  /* 1221b130 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1221b133 pop edi */
  EDI = (pop32());
  /* 1221b134 pop esi */
  ESI = (pop32());
  /* 1221b135 pop ebx */
  EBX = (pop32());
  /* 1221b136 mov esp, ebp */
  ESP = (EBP);
  /* 1221b138 pop ebp */
  EBP = (pop32());
  /* 1221b139 ret  */
  ESPCHK(0x1221b040u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b140 @ 0x1221b140 (183 bytes, 58 insns) */
void f_1221b140(void) {
  FTRACE(0x1221b140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221b140 push ebp */
  push32((uint32_t)(EBP));
  /* 1221b141 mov ebp, esp */
  EBP = (ESP);
  /* 1221b143 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221b146 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221b149 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221b14c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221b151 ja 0x1221b16a */
  if ((!C.cf&&!C.zf)) goto L_1221b16a;
  /* 1221b153 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221b156 mov edx, dword ptr [0x1223ec98] */
  EDX = (r32((uint32_t)(0x1223ec98)));
  /* 1221b15c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221b15e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1221b162 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1221b165 jmp 0x1221b1f3 */
  goto L_1221b1f3;
L_1221b16a:;
  /* 1221b16a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221b16d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1221b170 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1221b176 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1221b17c mov edx, dword ptr [0x1223ec98] */
  EDX = (r32((uint32_t)(0x1223ec98)));
  /* 1221b182 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221b184 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1221b188 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1221b18d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221b18f je 0x1221b1b3 */
  if (C.zf) goto L_1221b1b3;
  /* 1221b191 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221b194 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1221b197 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1221b19d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1221b1a0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 1221b1a3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 1221b1a6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1221b1aa mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 1221b1b1 jmp 0x1221b1c4 */
  goto L_1221b1c4;
L_1221b1b3:;
  /* 1221b1b3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1221b1b6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1221b1b9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1221b1bd mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1221b1c4:;
  /* 1221b1c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1221b1c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221b1c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221b1ca lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1221b1cd push ecx */
  push32((uint32_t)(ECX));
  /* 1221b1ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221b1d1 push edx */
  push32((uint32_t)(EDX));
  /* 1221b1d2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1221b1d5 push eax */
  push32((uint32_t)(EAX));
  /* 1221b1d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1221b1d8 call 0x1221d360 */
  push32(0x1221b1ddu); f_1221d360();
  /* 1221b1dd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221b1e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221b1e2 jne 0x1221b1e8 */
  if (!C.zf) goto L_1221b1e8;
  /* 1221b1e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221b1e6 jmp 0x1221b1f3 */
  goto L_1221b1f3;
L_1221b1e8:;
  /* 1221b1e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221b1eb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1221b1f0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_1221b1f3:;
  /* 1221b1f3 mov esp, ebp */
  ESP = (EBP);
  /* 1221b1f5 pop ebp */
  EBP = (pop32());
  /* 1221b1f6 ret  */
  ESPCHK(0x1221b140u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b200 @ 0x1221b200 (836 bytes, 238 insns) */
void f_1221b200(void) {
  FTRACE(0x1221b200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221b200 push ebp */
  push32((uint32_t)(EBP));
  /* 1221b201 mov ebp, esp */
  EBP = (ESP);
  /* 1221b203 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221b206 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1221b208 call 0x12218b30 */
  push32(0x1221b20du); f_12218b30();
  /* 1221b20d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221b210 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221b213 push eax */
  push32((uint32_t)(EAX));
  /* 1221b214 call 0x1221b550 */
  push32(0x1221b219u); f_1221b550();
  /* 1221b219 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221b21c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1221b21f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221b222 cmp ecx, dword ptr [0x12241ca4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12241ca4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221b228 jne 0x1221b23b */
  if (!C.zf) goto L_1221b23b;
  /* 1221b22a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1221b22c call 0x12218bd0 */
  push32(0x1221b231u); f_12218bd0();
  /* 1221b231 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221b234 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221b236 jmp 0x1221b540 */
  goto L_1221b540;
L_1221b23b:;
  /* 1221b23b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221b23f jne 0x1221b25c */
  if (!C.zf) goto L_1221b25c;
  /* 1221b241 call 0x1221b630 */
  push32(0x1221b246u); f_1221b630();
  /* 1221b246 call 0x1221b6b0 */
  push32(0x1221b24bu); f_1221b6b0();
  /* 1221b24b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1221b24d call 0x12218bd0 */
  push32(0x1221b252u); f_12218bd0();
  /* 1221b252 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221b255 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221b257 jmp 0x1221b540 */
  goto L_1221b540;
L_1221b25c:;
  /* 1221b25c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1221b263 jmp 0x1221b26e */
  goto L_1221b26e;
L_1221b265:;
  /* 1221b265 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221b268 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221b26b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1221b26e:;
  /* 1221b26e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221b272 jae 0x1221b3bf */
  if (!C.cf) goto L_1221b3bf;
  /* 1221b278 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221b27b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221b27e mov ecx, dword ptr [eax + 0x1223eeb8] */
  ECX = (r32((uint32_t)(EAX + 0x1223eeb8)));
  /* 1221b284 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221b287 jne 0x1221b3ba */
  if (!C.zf) goto L_1221b3ba;
  /* 1221b28d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1221b294 jmp 0x1221b29f */
  goto L_1221b29f;
L_1221b296:;
  /* 1221b296 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221b299 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221b29c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1221b29f:;
  /* 1221b29f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221b2a6 jae 0x1221b2b4 */
  if (!C.cf) goto L_1221b2b4;
  /* 1221b2a8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221b2ab mov byte ptr [eax + 0x12241e40], 0 */
  w8((uint32_t)(EAX + 0x12241e40), (0x0u));
  /* 1221b2b2 jmp 0x1221b296 */
  goto L_1221b296;
L_1221b2b4:;
  /* 1221b2b4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1221b2bb jmp 0x1221b2c6 */
  goto L_1221b2c6;
L_1221b2bd:;
  /* 1221b2bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221b2c0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221b2c3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1221b2c6:;
  /* 1221b2c6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221b2ca jae 0x1221b347 */
  if (!C.cf) goto L_1221b347;
  /* 1221b2cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221b2cf imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221b2d2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221b2d5 lea ecx, [edx + eax*8 + 0x1223eec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x1223eec8));
  /* 1221b2dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1221b2df jmp 0x1221b2ea */
  goto L_1221b2ea;
L_1221b2e1:;
  /* 1221b2e1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221b2e4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221b2e7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1221b2ea:;
  /* 1221b2ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221b2ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1221b2ef mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1221b2f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1221b2f3 je 0x1221b342 */
  if (C.zf) goto L_1221b342;
  /* 1221b2f5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221b2f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221b2fa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1221b2fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221b2ff je 0x1221b342 */
  if (C.zf) goto L_1221b342;
  /* 1221b301 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221b304 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1221b306 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1221b308 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1221b30b jmp 0x1221b316 */
  goto L_1221b316;
L_1221b30d:;
  /* 1221b30d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221b310 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221b313 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1221b316:;
  /* 1221b316 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221b319 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1221b31b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1221b31e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221b321 ja 0x1221b340 */
  if ((!C.cf&&!C.zf)) goto L_1221b340;
  /* 1221b323 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221b326 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221b329 mov dl, byte ptr [eax + 0x12241e41] */
  DL = (r8((uint32_t)(EAX + 0x12241e41)));
  /* 1221b32f or dl, byte ptr [ecx + 0x1223eeb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x1223eeb0))); DL = (_r); fl_logic(_r,8); }
  /* 1221b335 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221b338 mov byte ptr [eax + 0x12241e41], dl */
  w8((uint32_t)(EAX + 0x12241e41), (DL));
  /* 1221b33e jmp 0x1221b30d */
  goto L_1221b30d;
L_1221b340:;
  /* 1221b340 jmp 0x1221b2e1 */
  goto L_1221b2e1;
L_1221b342:;
  /* 1221b342 jmp 0x1221b2bd */
  goto L_1221b2bd;
L_1221b347:;
  /* 1221b347 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221b34a mov dword ptr [0x12241ca4], ecx */
  w32((uint32_t)(0x12241ca4), (ECX));
  /* 1221b350 mov dword ptr [0x12241d2c], 1 */
  w32((uint32_t)(0x12241d2c), (0x1u));
  /* 1221b35a mov edx, dword ptr [0x12241ca4] */
  EDX = (r32((uint32_t)(0x12241ca4)));
  /* 1221b360 push edx */
  push32((uint32_t)(EDX));
  /* 1221b361 call 0x1221b5b0 */
  push32(0x1221b366u); f_1221b5b0();
  /* 1221b366 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221b369 mov dword ptr [0x12241f44], eax */
  w32((uint32_t)(0x12241f44), (EAX));
  /* 1221b36e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1221b375 jmp 0x1221b380 */
  goto L_1221b380;
L_1221b377:;
  /* 1221b377 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221b37a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221b37d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1221b380:;
  /* 1221b380 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221b384 jae 0x1221b3a4 */
  if (!C.cf) goto L_1221b3a4;
  /* 1221b386 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221b389 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221b38c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221b38f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221b392 mov cx, word ptr [ecx + eax*2 + 0x1223eebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x1223eebc)));
  /* 1221b39a mov word ptr [edx*2 + 0x12241d20], cx */
  w16((uint32_t)(EDX*2 + 0x12241d20), (CX));
  /* 1221b3a2 jmp 0x1221b377 */
  goto L_1221b377;
L_1221b3a4:;
  /* 1221b3a4 call 0x1221b6b0 */
  push32(0x1221b3a9u); f_1221b6b0();
  /* 1221b3a9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1221b3ab call 0x12218bd0 */
  push32(0x1221b3b0u); f_12218bd0();
  /* 1221b3b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221b3b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221b3b5 jmp 0x1221b540 */
  goto L_1221b540;
L_1221b3ba:;
  /* 1221b3ba jmp 0x1221b265 */
  goto L_1221b265;
L_1221b3bf:;
  /* 1221b3bf lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 1221b3c2 push edx */
  push32((uint32_t)(EDX));
  /* 1221b3c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221b3c6 push eax */
  push32((uint32_t)(EAX));
  /* 1221b3c7 call dword ptr [0x1224331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224331c))), 0x1221b3cdu);
  /* 1221b3cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221b3d0 jne 0x1221b512 */
  if (!C.zf) goto L_1221b512;
  /* 1221b3d6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1221b3dd jmp 0x1221b3e8 */
  goto L_1221b3e8;
L_1221b3df:;
  /* 1221b3df mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221b3e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221b3e5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1221b3e8:;
  /* 1221b3e8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221b3ef jae 0x1221b3fd */
  if (!C.cf) goto L_1221b3fd;
  /* 1221b3f1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221b3f4 mov byte ptr [edx + 0x12241e40], 0 */
  w8((uint32_t)(EDX + 0x12241e40), (0x0u));
  /* 1221b3fb jmp 0x1221b3df */
  goto L_1221b3df;
L_1221b3fd:;
  /* 1221b3fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221b400 mov dword ptr [0x12241ca4], eax */
  w32((uint32_t)(0x12241ca4), (EAX));
  /* 1221b405 mov dword ptr [0x12241f44], 0 */
  w32((uint32_t)(0x12241f44), (0x0u));
  /* 1221b40f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221b413 jbe 0x1221b4ce */
  if ((C.cf||C.zf)) goto L_1221b4ce;
  /* 1221b419 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1221b41c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1221b41f jmp 0x1221b42a */
  goto L_1221b42a;
L_1221b421:;
  /* 1221b421 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1221b424 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221b427 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1221b42a:;
  /* 1221b42a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1221b42d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1221b42f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1221b431 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1221b433 je 0x1221b47c */
  if (C.zf) goto L_1221b47c;
  /* 1221b435 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1221b438 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221b43a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1221b43d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221b43f je 0x1221b47c */
  if (C.zf) goto L_1221b47c;
  /* 1221b441 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1221b444 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1221b446 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1221b448 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1221b44b jmp 0x1221b456 */
  goto L_1221b456;
L_1221b44d:;
  /* 1221b44d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221b450 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221b453 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1221b456:;
  /* 1221b456 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1221b459 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1221b45b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1221b45e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221b461 ja 0x1221b47a */
  if ((!C.cf&&!C.zf)) goto L_1221b47a;
  /* 1221b463 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221b466 mov cl, byte ptr [eax + 0x12241e41] */
  CL = (r8((uint32_t)(EAX + 0x12241e41)));
  /* 1221b46c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1221b46f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221b472 mov byte ptr [edx + 0x12241e41], cl */
  w8((uint32_t)(EDX + 0x12241e41), (CL));
  /* 1221b478 jmp 0x1221b44d */
  goto L_1221b44d;
L_1221b47a:;
  /* 1221b47a jmp 0x1221b421 */
  goto L_1221b421;
L_1221b47c:;
  /* 1221b47c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1221b483 jmp 0x1221b48e */
  goto L_1221b48e;
L_1221b485:;
  /* 1221b485 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221b488 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221b48b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1221b48e:;
  /* 1221b48e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221b495 jae 0x1221b4ae */
  if (!C.cf) goto L_1221b4ae;
  /* 1221b497 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221b49a mov dl, byte ptr [ecx + 0x12241e41] */
  DL = (r8((uint32_t)(ECX + 0x12241e41)));
  /* 1221b4a0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1221b4a3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221b4a6 mov byte ptr [eax + 0x12241e41], dl */
  w8((uint32_t)(EAX + 0x12241e41), (DL));
  /* 1221b4ac jmp 0x1221b485 */
  goto L_1221b485;
L_1221b4ae:;
  /* 1221b4ae mov ecx, dword ptr [0x12241ca4] */
  ECX = (r32((uint32_t)(0x12241ca4)));
  /* 1221b4b4 push ecx */
  push32((uint32_t)(ECX));
  /* 1221b4b5 call 0x1221b5b0 */
  push32(0x1221b4bau); f_1221b5b0();
  /* 1221b4ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221b4bd mov dword ptr [0x12241f44], eax */
  w32((uint32_t)(0x12241f44), (EAX));
  /* 1221b4c2 mov dword ptr [0x12241d2c], 1 */
  w32((uint32_t)(0x12241d2c), (0x1u));
  /* 1221b4cc jmp 0x1221b4d8 */
  goto L_1221b4d8;
L_1221b4ce:;
  /* 1221b4ce mov dword ptr [0x12241d2c], 0 */
  w32((uint32_t)(0x12241d2c), (0x0u));
L_1221b4d8:;
  /* 1221b4d8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1221b4df jmp 0x1221b4ea */
  goto L_1221b4ea;
L_1221b4e1:;
  /* 1221b4e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221b4e4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221b4e7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1221b4ea:;
  /* 1221b4ea cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221b4ee jae 0x1221b4ff */
  if (!C.cf) goto L_1221b4ff;
  /* 1221b4f0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221b4f3 mov word ptr [eax*2 + 0x12241d20], 0 */
  w16((uint32_t)(EAX*2 + 0x12241d20), (0x0u));
  /* 1221b4fd jmp 0x1221b4e1 */
  goto L_1221b4e1;
L_1221b4ff:;
  /* 1221b4ff call 0x1221b6b0 */
  push32(0x1221b504u); f_1221b6b0();
  /* 1221b504 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1221b506 call 0x12218bd0 */
  push32(0x1221b50bu); f_12218bd0();
  /* 1221b50b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221b50e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221b510 jmp 0x1221b540 */
  goto L_1221b540;
L_1221b512:;
  /* 1221b512 cmp dword ptr [0x122407c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122407c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221b519 je 0x1221b533 */
  if (C.zf) goto L_1221b533;
  /* 1221b51b call 0x1221b630 */
  push32(0x1221b520u); f_1221b630();
  /* 1221b520 call 0x1221b6b0 */
  push32(0x1221b525u); f_1221b6b0();
  /* 1221b525 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1221b527 call 0x12218bd0 */
  push32(0x1221b52cu); f_12218bd0();
  /* 1221b52c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221b52f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221b531 jmp 0x1221b540 */
  goto L_1221b540;
L_1221b533:;
  /* 1221b533 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1221b535 call 0x12218bd0 */
  push32(0x1221b53au); f_12218bd0();
  /* 1221b53a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221b53d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1221b540:;
  /* 1221b540 mov esp, ebp */
  ESP = (EBP);
  /* 1221b542 pop ebp */
  EBP = (pop32());
  /* 1221b543 ret  */
  ESPCHK(0x1221b200u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x1221b550 (89 bytes, 21 insns) */
void f_1221b550(void) {
  FTRACE(0x1221b550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221b550 push ebp */
  push32((uint32_t)(EBP));
  /* 1221b551 mov ebp, esp */
  EBP = (ESP);
  /* 1221b553 mov dword ptr [0x122407c0], 0 */
  w32((uint32_t)(0x122407c0), (0x0u));
  /* 1221b55d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221b561 jne 0x1221b575 */
  if (!C.zf) goto L_1221b575;
  /* 1221b563 mov dword ptr [0x122407c0], 1 */
  w32((uint32_t)(0x122407c0), (0x1u));
  /* 1221b56d call dword ptr [0x12243314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243314))), 0x1221b573u);
  /* 1221b573 jmp 0x1221b5a7 */
  goto L_1221b5a7;
L_1221b575:;
  /* 1221b575 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221b579 jne 0x1221b58d */
  if (!C.zf) goto L_1221b58d;
  /* 1221b57b mov dword ptr [0x122407c0], 1 */
  w32((uint32_t)(0x122407c0), (0x1u));
  /* 1221b585 call dword ptr [0x12243324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243324))), 0x1221b58bu);
  /* 1221b58b jmp 0x1221b5a7 */
  goto L_1221b5a7;
L_1221b58d:;
  /* 1221b58d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221b591 jne 0x1221b5a4 */
  if (!C.zf) goto L_1221b5a4;
  /* 1221b593 mov dword ptr [0x122407c0], 1 */
  w32((uint32_t)(0x122407c0), (0x1u));
  /* 1221b59d mov eax, dword ptr [0x122407e0] */
  EAX = (r32((uint32_t)(0x122407e0)));
  /* 1221b5a2 jmp 0x1221b5a7 */
  goto L_1221b5a7;
L_1221b5a4:;
  /* 1221b5a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1221b5a7:;
  /* 1221b5a7 pop ebp */
  EBP = (pop32());
  /* 1221b5a8 ret  */
  ESPCHK(0x1221b550u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5b0 @ 0x1221b5b0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_1221b5b0(void) {
  FTRACE(0x1221b5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221b5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1221b5b1 mov ebp, esp */
  EBP = (ESP);
  /* 1221b5b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1221b5b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221b5b7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1221b5ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221b5bd sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221b5c3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1221b5c6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221b5ca ja 0x1221b5fa */
  if ((!C.cf&&!C.zf)) goto L_1221b5fa;
  /* 1221b5cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221b5cf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1221b5d1 mov dl, byte ptr [eax + 0x1221b614] */
  DL = (r8((uint32_t)(EAX + 0x1221b614)));
  /* 1221b5d7 jmp dword ptr [edx*4 + 0x1221b600] */
  switch (EDX) {
    case 0: goto L_1221b5de;
    case 1: goto L_1221b5e5;
    case 2: goto L_1221b5ec;
    case 3: goto L_1221b5f3;
    case 4: goto L_1221b5fa;
    default: x86_unimpl("switch@0x1221b5d7 out of table"); return;
  }
L_1221b5de:;
  /* 1221b5de mov eax, 0x411 */
  EAX = (0x411u);
  /* 1221b5e3 jmp 0x1221b5fc */
  goto L_1221b5fc;
L_1221b5e5:;
  /* 1221b5e5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1221b5ea jmp 0x1221b5fc */
  goto L_1221b5fc;
L_1221b5ec:;
  /* 1221b5ec mov eax, 0x412 */
  EAX = (0x412u);
  /* 1221b5f1 jmp 0x1221b5fc */
  goto L_1221b5fc;
L_1221b5f3:;
  /* 1221b5f3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 1221b5f8 jmp 0x1221b5fc */
  goto L_1221b5fc;
L_1221b5fa:;
  /* 1221b5fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1221b5fc:;
  /* 1221b5fc mov esp, ebp */
  ESP = (EBP);
  /* 1221b5fe pop ebp */
  EBP = (pop32());
  /* 1221b5ff ret  */
  ESPCHK(0x1221b5b0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x1221b630 (116 bytes, 29 insns) */
void f_1221b630(void) {
  FTRACE(0x1221b630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221b630 push ebp */
  push32((uint32_t)(EBP));
  /* 1221b631 mov ebp, esp */
  EBP = (ESP);
  /* 1221b633 push ecx */
  push32((uint32_t)(ECX));
  /* 1221b634 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1221b63b jmp 0x1221b646 */
  goto L_1221b646;
L_1221b63d:;
  /* 1221b63d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221b640 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221b643 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1221b646:;
  /* 1221b646 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221b64d jge 0x1221b65b */
  if ((C.sf==C.of)) goto L_1221b65b;
  /* 1221b64f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221b652 mov byte ptr [ecx + 0x12241e40], 0 */
  w8((uint32_t)(ECX + 0x12241e40), (0x0u));
  /* 1221b659 jmp 0x1221b63d */
  goto L_1221b63d;
L_1221b65b:;
  /* 1221b65b mov dword ptr [0x12241ca4], 0 */
  w32((uint32_t)(0x12241ca4), (0x0u));
  /* 1221b665 mov dword ptr [0x12241d2c], 0 */
  w32((uint32_t)(0x12241d2c), (0x0u));
  /* 1221b66f mov dword ptr [0x12241f44], 0 */
  w32((uint32_t)(0x12241f44), (0x0u));
  /* 1221b679 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1221b680 jmp 0x1221b68b */
  goto L_1221b68b;
L_1221b682:;
  /* 1221b682 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221b685 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221b688 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1221b68b:;
  /* 1221b68b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221b68f jge 0x1221b6a0 */
  if ((C.sf==C.of)) goto L_1221b6a0;
  /* 1221b691 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221b694 mov word ptr [eax*2 + 0x12241d20], 0 */
  w16((uint32_t)(EAX*2 + 0x12241d20), (0x0u));
  /* 1221b69e jmp 0x1221b682 */
  goto L_1221b682;
L_1221b6a0:;
  /* 1221b6a0 mov esp, ebp */
  ESP = (EBP);
  /* 1221b6a2 pop ebp */
  EBP = (pop32());
  /* 1221b6a3 ret  */
  ESPCHK(0x1221b630u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6b0 @ 0x1221b6b0 (770 bytes, 175 insns) */
void f_1221b6b0(void) {
  FTRACE(0x1221b6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221b6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1221b6b1 mov ebp, esp */
  EBP = (ESP);
  /* 1221b6b3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221b6b9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1221b6bf push eax */
  push32((uint32_t)(EAX));
  /* 1221b6c0 mov ecx, dword ptr [0x12241ca4] */
  ECX = (r32((uint32_t)(0x12241ca4)));
  /* 1221b6c6 push ecx */
  push32((uint32_t)(ECX));
  /* 1221b6c7 call dword ptr [0x1224331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224331c))), 0x1221b6cdu);
  /* 1221b6cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221b6d0 jne 0x1221b8e9 */
  if (!C.zf) goto L_1221b8e9;
  /* 1221b6d6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1221b6e0 jmp 0x1221b6f1 */
  goto L_1221b6f1;
L_1221b6e2:;
  /* 1221b6e2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1221b6e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221b6eb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1221b6f1:;
  /* 1221b6f1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221b6fb jae 0x1221b712 */
  if (!C.cf) goto L_1221b712;
  /* 1221b6fd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1221b703 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 1221b709 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 1221b710 jmp 0x1221b6e2 */
  goto L_1221b6e2;
L_1221b712:;
  /* 1221b712 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 1221b719 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1221b71f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1221b722 jmp 0x1221b72d */
  goto L_1221b72d;
L_1221b724:;
  /* 1221b724 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221b727 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221b72a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1221b72d:;
  /* 1221b72d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221b730 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1221b732 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1221b734 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221b736 je 0x1221b778 */
  if (C.zf) goto L_1221b778;
  /* 1221b738 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221b73b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1221b73d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1221b73f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 1221b745 jmp 0x1221b756 */
  goto L_1221b756;
L_1221b747:;
  /* 1221b747 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1221b74d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221b750 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1221b756:;
  /* 1221b756 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221b759 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1221b75b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1221b75e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221b764 ja 0x1221b776 */
  if ((!C.cf&&!C.zf)) goto L_1221b776;
  /* 1221b766 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1221b76c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 1221b774 jmp 0x1221b747 */
  goto L_1221b747;
L_1221b776:;
  /* 1221b776 jmp 0x1221b724 */
  goto L_1221b724;
L_1221b778:;
  /* 1221b778 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221b77a mov eax, dword ptr [0x12241f44] */
  EAX = (r32((uint32_t)(0x12241f44)));
  /* 1221b77f push eax */
  push32((uint32_t)(EAX));
  /* 1221b780 mov ecx, dword ptr [0x12241ca4] */
  ECX = (r32((uint32_t)(0x12241ca4)));
  /* 1221b786 push ecx */
  push32((uint32_t)(ECX));
  /* 1221b787 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1221b78d push edx */
  push32((uint32_t)(EDX));
  /* 1221b78e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1221b793 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1221b799 push eax */
  push32((uint32_t)(EAX));
  /* 1221b79a push 1 */
  push32((uint32_t)(0x1u));
  /* 1221b79c call 0x1221d360 */
  push32(0x1221b7a1u); f_1221d360();
  /* 1221b7a1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221b7a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221b7a6 mov ecx, dword ptr [0x12241ca4] */
  ECX = (r32((uint32_t)(0x12241ca4)));
  /* 1221b7ac push ecx */
  push32((uint32_t)(ECX));
  /* 1221b7ad push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1221b7b2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1221b7b8 push edx */
  push32((uint32_t)(EDX));
  /* 1221b7b9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1221b7be lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1221b7c4 push eax */
  push32((uint32_t)(EAX));
  /* 1221b7c5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1221b7ca mov ecx, dword ptr [0x12241f44] */
  ECX = (r32((uint32_t)(0x12241f44)));
  /* 1221b7d0 push ecx */
  push32((uint32_t)(ECX));
  /* 1221b7d1 call 0x1221d520 */
  push32(0x1221b7d6u); f_1221d520();
  /* 1221b7d6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221b7d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221b7db mov edx, dword ptr [0x12241ca4] */
  EDX = (r32((uint32_t)(0x12241ca4)));
  /* 1221b7e1 push edx */
  push32((uint32_t)(EDX));
  /* 1221b7e2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1221b7e7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1221b7ed push eax */
  push32((uint32_t)(EAX));
  /* 1221b7ee push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1221b7f3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 1221b7f9 push ecx */
  push32((uint32_t)(ECX));
  /* 1221b7fa push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1221b7ff mov edx, dword ptr [0x12241f44] */
  EDX = (r32((uint32_t)(0x12241f44)));
  /* 1221b805 push edx */
  push32((uint32_t)(EDX));
  /* 1221b806 call 0x1221d520 */
  push32(0x1221b80bu); f_1221d520();
  /* 1221b80b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221b80e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1221b818 jmp 0x1221b829 */
  goto L_1221b829;
L_1221b81a:;
  /* 1221b81a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1221b820 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221b823 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1221b829:;
  /* 1221b829 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221b833 jae 0x1221b8e4 */
  if (!C.cf) goto L_1221b8e4;
  /* 1221b839 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1221b83f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1221b841 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 1221b849 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1221b84c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221b84e je 0x1221b886 */
  if (C.zf) goto L_1221b886;
  /* 1221b850 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1221b856 mov cl, byte ptr [eax + 0x12241e41] */
  CL = (r8((uint32_t)(EAX + 0x12241e41)));
  /* 1221b85c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1221b85f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1221b865 mov byte ptr [edx + 0x12241e41], cl */
  w8((uint32_t)(EDX + 0x12241e41), (CL));
  /* 1221b86b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1221b871 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1221b877 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1221b87e mov byte ptr [eax + 0x12241d40], dl */
  w8((uint32_t)(EAX + 0x12241d40), (DL));
  /* 1221b884 jmp 0x1221b8df */
  goto L_1221b8df;
L_1221b886:;
  /* 1221b886 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1221b88c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1221b88e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 1221b896 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1221b899 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1221b89b je 0x1221b8d2 */
  if (C.zf) goto L_1221b8d2;
  /* 1221b89d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1221b8a3 mov al, byte ptr [edx + 0x12241e41] */
  AL = (r8((uint32_t)(EDX + 0x12241e41)));
  /* 1221b8a9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1221b8ab mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1221b8b1 mov byte ptr [ecx + 0x12241e41], al */
  w8((uint32_t)(ECX + 0x12241e41), (AL));
  /* 1221b8b7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1221b8bd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1221b8c3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1221b8ca mov byte ptr [edx + 0x12241d40], cl */
  w8((uint32_t)(EDX + 0x12241d40), (CL));
  /* 1221b8d0 jmp 0x1221b8df */
  goto L_1221b8df;
L_1221b8d2:;
  /* 1221b8d2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1221b8d8 mov byte ptr [edx + 0x12241d40], 0 */
  w8((uint32_t)(EDX + 0x12241d40), (0x0u));
L_1221b8df:;
  /* 1221b8df jmp 0x1221b81a */
  goto L_1221b81a;
L_1221b8e4:;
  /* 1221b8e4 jmp 0x1221b9ae */
  goto L_1221b9ae;
L_1221b8e9:;
  /* 1221b8e9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1221b8f3 jmp 0x1221b904 */
  goto L_1221b904;
L_1221b8f5:;
  /* 1221b8f5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1221b8fb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221b8fe mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1221b904:;
  /* 1221b904 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221b90e jae 0x1221b9ae */
  if (!C.cf) goto L_1221b9ae;
  /* 1221b914 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221b91b jb 0x1221b958 */
  if (C.cf) goto L_1221b958;
  /* 1221b91d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221b924 ja 0x1221b958 */
  if ((!C.cf&&!C.zf)) goto L_1221b958;
  /* 1221b926 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1221b92c mov dl, byte ptr [ecx + 0x12241e41] */
  DL = (r8((uint32_t)(ECX + 0x12241e41)));
  /* 1221b932 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1221b935 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1221b93b mov byte ptr [eax + 0x12241e41], dl */
  w8((uint32_t)(EAX + 0x12241e41), (DL));
  /* 1221b941 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1221b947 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221b94a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1221b950 mov byte ptr [edx + 0x12241d40], cl */
  w8((uint32_t)(EDX + 0x12241d40), (CL));
  /* 1221b956 jmp 0x1221b9a9 */
  goto L_1221b9a9;
L_1221b958:;
  /* 1221b958 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221b95f jb 0x1221b99c */
  if (C.cf) goto L_1221b99c;
  /* 1221b961 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221b968 ja 0x1221b99c */
  if ((!C.cf&&!C.zf)) goto L_1221b99c;
  /* 1221b96a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1221b970 mov cl, byte ptr [eax + 0x12241e41] */
  CL = (r8((uint32_t)(EAX + 0x12241e41)));
  /* 1221b976 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1221b979 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1221b97f mov byte ptr [edx + 0x12241e41], cl */
  w8((uint32_t)(EDX + 0x12241e41), (CL));
  /* 1221b985 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1221b98b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221b98e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1221b994 mov byte ptr [ecx + 0x12241d40], al */
  w8((uint32_t)(ECX + 0x12241d40), (AL));
  /* 1221b99a jmp 0x1221b9a9 */
  goto L_1221b9a9;
L_1221b99c:;
  /* 1221b99c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1221b9a2 mov byte ptr [edx + 0x12241d40], 0 */
  w8((uint32_t)(EDX + 0x12241d40), (0x0u));
L_1221b9a9:;
  /* 1221b9a9 jmp 0x1221b8f5 */
  goto L_1221b8f5;
L_1221b9ae:;
  /* 1221b9ae mov esp, ebp */
  ESP = (EBP);
  /* 1221b9b0 pop ebp */
  EBP = (pop32());
  /* 1221b9b1 ret  */
  ESPCHK(0x1221b6b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9c0 @ 0x1221b9c0 (23 bytes, 9 insns) */
void f_1221b9c0(void) {
  FTRACE(0x1221b9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221b9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1221b9c1 mov ebp, esp */
  EBP = (ESP);
  /* 1221b9c3 cmp dword ptr [0x12241d2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12241d2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221b9ca je 0x1221b9d3 */
  if (C.zf) goto L_1221b9d3;
  /* 1221b9cc mov eax, dword ptr [0x12241ca4] */
  EAX = (r32((uint32_t)(0x12241ca4)));
  /* 1221b9d1 jmp 0x1221b9d5 */
  goto L_1221b9d5;
L_1221b9d3:;
  /* 1221b9d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1221b9d5:;
  /* 1221b9d5 pop ebp */
  EBP = (pop32());
  /* 1221b9d6 ret  */
  ESPCHK(0x1221b9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9e0 @ 0x1221b9e0 (34 bytes, 10 insns) */
void f_1221b9e0(void) {
  FTRACE(0x1221b9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221b9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1221b9e1 mov ebp, esp */
  EBP = (ESP);
  /* 1221b9e3 cmp dword ptr [0x122420f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122420f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221b9ea jne 0x1221ba00 */
  if (!C.zf) goto L_1221ba00;
  /* 1221b9ec push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1221b9ee call 0x1221b200 */
  push32(0x1221b9f3u); f_1221b200();
  /* 1221b9f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221b9f6 mov dword ptr [0x122420f0], 1 */
  w32((uint32_t)(0x122420f0), (0x1u));
L_1221ba00:;
  /* 1221ba00 pop ebp */
  EBP = (pop32());
  /* 1221ba01 ret  */
  ESPCHK(0x1221b9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba10 @ 0x1221ba10 (664 bytes, 261 insns) [15 switch table(s)] */
void f_1221ba10(void) {
  FTRACE(0x1221ba10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221ba10 push ebp */
  push32((uint32_t)(EBP));
  /* 1221ba11 mov ebp, esp */
  EBP = (ESP);
  /* 1221ba13 push edi */
  push32((uint32_t)(EDI));
  /* 1221ba14 push esi */
  push32((uint32_t)(ESI));
  /* 1221ba15 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1221ba18 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1221ba1b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1221ba1e mov eax, ecx */
  EAX = (ECX);
  /* 1221ba20 mov edx, ecx */
  EDX = (ECX);
  /* 1221ba22 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ba24 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ba26 jbe 0x1221ba30 */
  if ((C.cf||C.zf)) goto L_1221ba30;
  /* 1221ba28 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ba2a jb 0x1221bba8 */
  if (C.cf) goto L_1221bba8;
L_1221ba30:;
  /* 1221ba30 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1221ba36 jne 0x1221ba4c */
  if (!C.zf) goto L_1221ba4c;
  /* 1221ba38 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1221ba3b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1221ba3e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ba41 jb 0x1221ba6c */
  if (C.cf) goto L_1221ba6c;
  /* 1221ba43 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1221ba45 jmp dword ptr [edx*4 + 0x1221bb58] */
  switch (EDX) {
    case 0: goto L_1221bb68;
    case 1: goto L_1221bb70;
    case 2: goto L_1221bb7c;
    case 3: goto L_1221bb90;
    default: x86_unimpl("switch@0x1221ba45 out of table"); return;
  }
L_1221ba4c:;
  /* 1221ba4c mov eax, edi */
  EAX = (EDI);
  /* 1221ba4e mov edx, 3 */
  EDX = (0x3u);
  /* 1221ba53 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221ba56 jb 0x1221ba64 */
  if (C.cf) goto L_1221ba64;
  /* 1221ba58 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1221ba5b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ba5d jmp dword ptr [eax*4 + 0x1221ba70] */
  switch (EAX) {
    case 1: goto L_1221ba80;
    case 2: goto L_1221baac;
    case 3: goto L_1221bad0;
    default: x86_unimpl("switch@0x1221ba5d out of table"); return;
  }
L_1221ba64:;
  /* 1221ba64 jmp dword ptr [ecx*4 + 0x1221bb68] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1221bb68)))); return;
  /* 1221ba6b nop  */
  /* nop */
L_1221ba6c:;
  /* 1221ba6c jmp dword ptr [ecx*4 + 0x1221baec] */
  switch (ECX) {
    case 0: goto L_1221bb4f;
    case 1: goto L_1221bb3c;
    case 2: goto L_1221bb34;
    case 3: goto L_1221bb2c;
    case 4: goto L_1221bb24;
    case 5: goto L_1221bb1c;
    case 6: goto L_1221bb14;
    case 7: goto L_1221bb0c;
    default: x86_unimpl("switch@0x1221ba6c out of table"); return;
  }
  /* 1221ba73 nop  */
  /* nop */
L_1221ba80:;
  /* 1221ba80 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1221ba82 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1221ba84 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1221ba86 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1221ba89 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1221ba8c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1221ba8f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1221ba92 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1221ba95 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ba98 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ba9b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ba9e jb 0x1221ba6c */
  if (C.cf) goto L_1221ba6c;
  /* 1221baa0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1221baa2 jmp dword ptr [edx*4 + 0x1221bb58] */
  switch (EDX) {
    case 0: goto L_1221bb68;
    case 1: goto L_1221bb70;
    case 2: goto L_1221bb7c;
    case 3: goto L_1221bb90;
    default: x86_unimpl("switch@0x1221baa2 out of table"); return;
  }
  /* 1221baa9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1221baac:;
  /* 1221baac and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1221baae mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1221bab0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1221bab2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1221bab5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1221bab8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1221babb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1221babe add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1221bac1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221bac4 jb 0x1221ba6c */
  if (C.cf) goto L_1221ba6c;
  /* 1221bac6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1221bac8 jmp dword ptr [edx*4 + 0x1221bb58] */
  switch (EDX) {
    case 0: goto L_1221bb68;
    case 1: goto L_1221bb70;
    case 2: goto L_1221bb7c;
    case 3: goto L_1221bb90;
    default: x86_unimpl("switch@0x1221bac8 out of table"); return;
  }
  /* 1221bacf nop  */
  /* nop */
L_1221bad0:;
  /* 1221bad0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1221bad2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1221bad4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1221bad6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1221bad7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1221bada inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1221badb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221bade jb 0x1221ba6c */
  if (C.cf) goto L_1221ba6c;
  /* 1221bae0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1221bae2 jmp dword ptr [edx*4 + 0x1221bb58] */
  switch (EDX) {
    case 0: goto L_1221bb68;
    case 1: goto L_1221bb70;
    case 2: goto L_1221bb7c;
    case 3: goto L_1221bb90;
    default: x86_unimpl("switch@0x1221bae2 out of table"); return;
  }
  /* 1221bae9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1221bb0c:;
  /* 1221bb0c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1221bb10 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1221bb14:;
  /* 1221bb14 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1221bb18 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1221bb1c:;
  /* 1221bb1c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1221bb20 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1221bb24:;
  /* 1221bb24 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1221bb28 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1221bb2c:;
  /* 1221bb2c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1221bb30 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1221bb34:;
  /* 1221bb34 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1221bb38 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1221bb3c:;
  /* 1221bb3c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1221bb40 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1221bb44 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1221bb4b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1221bb4d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1221bb4f:;
  /* 1221bb4f jmp dword ptr [edx*4 + 0x1221bb58] */
  switch (EDX) {
    case 0: goto L_1221bb68;
    case 1: goto L_1221bb70;
    case 2: goto L_1221bb7c;
    case 3: goto L_1221bb90;
    default: x86_unimpl("switch@0x1221bb4f out of table"); return;
  }
  /* 1221bb56 mov edi, edi */
  EDI = (EDI);
L_1221bb68:;
  /* 1221bb68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221bb6b pop esi */
  ESI = (pop32());
  /* 1221bb6c pop edi */
  EDI = (pop32());
  /* 1221bb6d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1221bb6e ret  */
  ESPCHK(0x1221ba10u, _esp0);
  ESP += 4; return;
  /* 1221bb6f nop  */
  /* nop */
L_1221bb70:;
  /* 1221bb70 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1221bb72 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1221bb74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221bb77 pop esi */
  ESI = (pop32());
  /* 1221bb78 pop edi */
  EDI = (pop32());
  /* 1221bb79 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1221bb7a ret  */
  ESPCHK(0x1221ba10u, _esp0);
  ESP += 4; return;
  /* 1221bb7b nop  */
  /* nop */
L_1221bb7c:;
  /* 1221bb7c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1221bb7e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1221bb80 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1221bb83 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1221bb86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221bb89 pop esi */
  ESI = (pop32());
  /* 1221bb8a pop edi */
  EDI = (pop32());
  /* 1221bb8b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1221bb8c ret  */
  ESPCHK(0x1221ba10u, _esp0);
  ESP += 4; return;
  /* 1221bb8d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1221bb90:;
  /* 1221bb90 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1221bb92 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1221bb94 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1221bb97 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1221bb9a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1221bb9d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1221bba0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221bba3 pop esi */
  ESI = (pop32());
  /* 1221bba4 pop edi */
  EDI = (pop32());
  /* 1221bba5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1221bba6 ret  */
  ESPCHK(0x1221ba10u, _esp0);
  ESP += 4; return;
  /* 1221bba7 nop  */
  /* nop */
L_1221bba8:;
  /* 1221bba8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1221bbac lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1221bbb0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1221bbb6 jne 0x1221bbdc */
  if (!C.zf) goto L_1221bbdc;
  /* 1221bbb8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1221bbbb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1221bbbe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221bbc1 jb 0x1221bbd0 */
  if (C.cf) goto L_1221bbd0;
  /* 1221bbc3 std  */
  C.df=1;
  /* 1221bbc4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1221bbc6 cld  */
  C.df=0;
  /* 1221bbc7 jmp dword ptr [edx*4 + 0x1221bcf0] */
  switch (EDX) {
    case 0: goto L_1221bd00;
    case 1: goto L_1221bd08;
    case 2: goto L_1221bd18;
    case 3: goto L_1221bd2c;
    default: x86_unimpl("switch@0x1221bbc7 out of table"); return;
  }
  /* 1221bbce mov edi, edi */
  EDI = (EDI);
L_1221bbd0:;
  /* 1221bbd0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1221bbd2 jmp dword ptr [ecx*4 + 0x1221bca0] */
  switch (ECX) {
    case 0: goto L_1221bce7;
    default: x86_unimpl("switch@0x1221bbd2 out of table"); return;
  }
  /* 1221bbd9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1221bbdc:;
  /* 1221bbdc mov eax, edi */
  EAX = (EDI);
  /* 1221bbde mov edx, 3 */
  EDX = (0x3u);
  /* 1221bbe3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221bbe6 jb 0x1221bbf4 */
  if (C.cf) goto L_1221bbf4;
  /* 1221bbe8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1221bbeb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221bbed jmp dword ptr [eax*4 + 0x1221bbf8] */
  switch (EAX) {
    case 1: goto L_1221bc08;
    case 2: goto L_1221bc28;
    case 3: goto L_1221bc50;
    default: x86_unimpl("switch@0x1221bbed out of table"); return;
  }
L_1221bbf4:;
  /* 1221bbf4 jmp dword ptr [ecx*4 + 0x1221bcf0] */
  switch (ECX) {
    case 0: goto L_1221bd00;
    case 1: goto L_1221bd08;
    case 2: goto L_1221bd18;
    case 3: goto L_1221bd2c;
    default: x86_unimpl("switch@0x1221bbf4 out of table"); return;
  }
  /* 1221bbfb nop  */
  /* nop */
L_1221bc08:;
  /* 1221bc08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1221bc0b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1221bc0d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1221bc10 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1221bc11 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1221bc14 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1221bc15 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221bc18 jb 0x1221bbd0 */
  if (C.cf) goto L_1221bbd0;
  /* 1221bc1a std  */
  C.df=1;
  /* 1221bc1b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1221bc1d cld  */
  C.df=0;
  /* 1221bc1e jmp dword ptr [edx*4 + 0x1221bcf0] */
  switch (EDX) {
    case 0: goto L_1221bd00;
    case 1: goto L_1221bd08;
    case 2: goto L_1221bd18;
    case 3: goto L_1221bd2c;
    default: x86_unimpl("switch@0x1221bc1e out of table"); return;
  }
  /* 1221bc25 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1221bc28:;
  /* 1221bc28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1221bc2b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1221bc2d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1221bc30 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1221bc33 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1221bc36 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1221bc39 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221bc3c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221bc3f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221bc42 jb 0x1221bbd0 */
  if (C.cf) goto L_1221bbd0;
  /* 1221bc44 std  */
  C.df=1;
  /* 1221bc45 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1221bc47 cld  */
  C.df=0;
  /* 1221bc48 jmp dword ptr [edx*4 + 0x1221bcf0] */
  switch (EDX) {
    case 0: goto L_1221bd00;
    case 1: goto L_1221bd08;
    case 2: goto L_1221bd18;
    case 3: goto L_1221bd2c;
    default: x86_unimpl("switch@0x1221bc48 out of table"); return;
  }
  /* 1221bc4f nop  */
  /* nop */
L_1221bc50:;
  /* 1221bc50 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1221bc53 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1221bc55 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1221bc58 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1221bc5b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1221bc5e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1221bc61 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1221bc64 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1221bc67 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221bc6a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221bc6d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221bc70 jb 0x1221bbd0 */
  if (C.cf) goto L_1221bbd0;
  /* 1221bc76 std  */
  C.df=1;
  /* 1221bc77 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1221bc79 cld  */
  C.df=0;
  /* 1221bc7a jmp dword ptr [edx*4 + 0x1221bcf0] */
  switch (EDX) {
    case 0: goto L_1221bd00;
    case 1: goto L_1221bd08;
    case 2: goto L_1221bd18;
    case 3: goto L_1221bd2c;
    default: x86_unimpl("switch@0x1221bc7a out of table"); return;
  }
  /* 1221bc81 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1221bc84 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 1221bc85 mov esp, 0xbcac1221 */
  ESP = (0xbcac1221u);
  /* 1221bc8a and dword ptr [edx], edx */
  { uint32_t _r=(r32((uint32_t)(EDX)))&(EDX); w32((uint32_t)(EDX), (_r)); fl_logic(_r,32); }
  /* 1221bc8c mov ah, 0xbc */
  AH = (0xbcu);
  /* 1221bc8e and dword ptr [edx], edx */
  { uint32_t _r=(r32((uint32_t)(EDX)))&(EDX); w32((uint32_t)(EDX), (_r)); fl_logic(_r,32); }
  /* 1221bc90 mov esp, 0xc41221bc */
  ESP = (0xc41221bcu);
  /* 1221bc95 mov esp, 0xbccc1221 */
  ESP = (0xbccc1221u);
  /* 1221bc9a and dword ptr [edx], edx */
  { uint32_t _r=(r32((uint32_t)(EDX)))&(EDX); w32((uint32_t)(EDX), (_r)); fl_logic(_r,32); }
  /* 1221bc9c aam 0xbc */
  x86_unimpl("aam @ 0x1221bc9c");
  /* 1221bc9e and dword ptr [edx], edx */
  { uint32_t _r=(r32((uint32_t)(EDX)))&(EDX); w32((uint32_t)(EDX), (_r)); fl_logic(_r,32); }
  /* 1221bca4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1221bca8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1221bcac mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1221bcb0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1221bcb4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1221bcb8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1221bcbc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1221bcc0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1221bcc4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1221bcc8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1221bccc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1221bcd0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1221bcd4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1221bcd8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1221bcdc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1221bce3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1221bce5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1221bce7:;
  /* 1221bce7 jmp dword ptr [edx*4 + 0x1221bcf0] */
  switch (EDX) {
    case 0: goto L_1221bd00;
    case 1: goto L_1221bd08;
    case 2: goto L_1221bd18;
    case 3: goto L_1221bd2c;
    default: x86_unimpl("switch@0x1221bce7 out of table"); return;
  }
  /* 1221bcee mov edi, edi */
  EDI = (EDI);
L_1221bd00:;
  /* 1221bd00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221bd03 pop esi */
  ESI = (pop32());
  /* 1221bd04 pop edi */
  EDI = (pop32());
  /* 1221bd05 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1221bd06 ret  */
  ESPCHK(0x1221ba10u, _esp0);
  ESP += 4; return;
  /* 1221bd07 nop  */
  /* nop */
L_1221bd08:;
  /* 1221bd08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1221bd0b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1221bd0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221bd11 pop esi */
  ESI = (pop32());
  /* 1221bd12 pop edi */
  EDI = (pop32());
  /* 1221bd13 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1221bd14 ret  */
  ESPCHK(0x1221ba10u, _esp0);
  ESP += 4; return;
  /* 1221bd15 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1221bd18:;
  /* 1221bd18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1221bd1b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1221bd1e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1221bd21 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1221bd24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221bd27 pop esi */
  ESI = (pop32());
  /* 1221bd28 pop edi */
  EDI = (pop32());
  /* 1221bd29 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1221bd2a ret  */
  ESPCHK(0x1221ba10u, _esp0);
  ESP += 4; return;
  /* 1221bd2b nop  */
  /* nop */
L_1221bd2c:;
  /* 1221bd2c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1221bd2f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1221bd32 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1221bd35 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1221bd38 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1221bd3b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1221bd3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221bd41 pop esi */
  ESI = (pop32());
  /* 1221bd42 pop edi */
  EDI = (pop32());
  /* 1221bd43 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1221bd44 ret  */
  ESPCHK(0x1221ba10u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x1221bd50 (104 bytes, 43 insns) */
void f_1221bd50(void) {
  FTRACE(0x1221bd50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221bd50 push ebx */
  push32((uint32_t)(EBX));
  /* 1221bd51 push esi */
  push32((uint32_t)(ESI));
  /* 1221bd52 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1221bd56 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221bd58 jne 0x1221bd72 */
  if (!C.zf) goto L_1221bd72;
  /* 1221bd5a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1221bd5e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1221bd62 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1221bd64 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1221bd66 mov ebx, eax */
  EBX = (EAX);
  /* 1221bd68 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1221bd6c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1221bd6e mov edx, ebx */
  EDX = (EBX);
  /* 1221bd70 jmp 0x1221bdb3 */
  goto L_1221bdb3;
L_1221bd72:;
  /* 1221bd72 mov ecx, eax */
  ECX = (EAX);
  /* 1221bd74 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1221bd78 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1221bd7c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1221bd80:;
  /* 1221bd80 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1221bd82 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1221bd84 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1221bd86 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1221bd88 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1221bd8a jne 0x1221bd80 */
  if (!C.zf) goto L_1221bd80;
  /* 1221bd8c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1221bd8e mov esi, eax */
  ESI = (EAX);
  /* 1221bd90 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1221bd94 mov ecx, eax */
  ECX = (EAX);
  /* 1221bd96 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1221bd9a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1221bd9c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221bd9e jb 0x1221bdae */
  if (C.cf) goto L_1221bdae;
  /* 1221bda0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221bda4 ja 0x1221bdae */
  if ((!C.cf&&!C.zf)) goto L_1221bdae;
  /* 1221bda6 jb 0x1221bdaf */
  if (C.cf) goto L_1221bdaf;
  /* 1221bda8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221bdac jbe 0x1221bdaf */
  if ((C.cf||C.zf)) goto L_1221bdaf;
L_1221bdae:;
  /* 1221bdae dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1221bdaf:;
  /* 1221bdaf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1221bdb1 mov eax, esi */
  EAX = (ESI);
L_1221bdb3:;
  /* 1221bdb3 pop esi */
  ESI = (pop32());
  /* 1221bdb4 pop ebx */
  EBX = (pop32());
  /* 1221bdb5 ret 0x10 */
  ESPCHK(0x1221bd50u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1221bdc0 (117 bytes, 44 insns) */
void f_1221bdc0(void) {
  FTRACE(0x1221bdc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221bdc0 push ebx */
  push32((uint32_t)(EBX));
  /* 1221bdc1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1221bdc5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221bdc7 jne 0x1221bde1 */
  if (!C.zf) goto L_1221bde1;
  /* 1221bdc9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1221bdcd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1221bdd1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1221bdd3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1221bdd5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1221bdd9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1221bddb mov eax, edx */
  EAX = (EDX);
  /* 1221bddd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1221bddf jmp 0x1221be31 */
  goto L_1221be31;
L_1221bde1:;
  /* 1221bde1 mov ecx, eax */
  ECX = (EAX);
  /* 1221bde3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1221bde7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1221bdeb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1221bdef:;
  /* 1221bdef shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1221bdf1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1221bdf3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1221bdf5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1221bdf7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1221bdf9 jne 0x1221bdef */
  if (!C.zf) goto L_1221bdef;
  /* 1221bdfb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1221bdfd mov ecx, eax */
  ECX = (EAX);
  /* 1221bdff mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1221be03 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1221be04 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1221be08 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221be0a jb 0x1221be1a */
  if (C.cf) goto L_1221be1a;
  /* 1221be0c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221be10 ja 0x1221be1a */
  if ((!C.cf&&!C.zf)) goto L_1221be1a;
  /* 1221be12 jb 0x1221be22 */
  if (C.cf) goto L_1221be22;
  /* 1221be14 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221be18 jbe 0x1221be22 */
  if ((C.cf||C.zf)) goto L_1221be22;
L_1221be1a:;
  /* 1221be1a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221be1e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1221be22:;
  /* 1221be22 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221be26 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221be2a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1221be2c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1221be2e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1221be31:;
  /* 1221be31 pop ebx */
  EBX = (pop32());
  /* 1221be32 ret 0x10 */
  ESPCHK(0x1221bdc0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000be40 @ 0x1221be40 (628 bytes, 214 insns) */
void f_1221be40(void) {
  FTRACE(0x1221be40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221be40 push ebp */
  push32((uint32_t)(EBP));
  /* 1221be41 mov ebp, esp */
  EBP = (ESP);
  /* 1221be43 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221be46 push ebx */
  push32((uint32_t)(EBX));
  /* 1221be47 push esi */
  push32((uint32_t)(ESI));
  /* 1221be48 push edi */
  push32((uint32_t)(EDI));
L_1221be49:;
  /* 1221be49 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221be4d jne 0x1221be6d */
  if (!C.zf) goto L_1221be6d;
  /* 1221be4f push 0x1223c148 */
  push32((uint32_t)(0x1223c148u));
  /* 1221be54 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221be56 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1221be58 push 0x1223c13c */
  push32((uint32_t)(0x1223c13cu));
  /* 1221be5d push 2 */
  push32((uint32_t)(0x2u));
  /* 1221be5f call 0x122141f0 */
  push32(0x1221be64u); f_122141f0();
  /* 1221be64 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221be67 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221be6a jne 0x1221be6d */
  if (!C.zf) goto L_1221be6d;
  /* 1221be6c int3  */
  x86_unimpl("int3 @ 0x1221be6c");
L_1221be6d:;
  /* 1221be6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221be6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221be71 jne 0x1221be49 */
  if (!C.zf) goto L_1221be49;
  /* 1221be73 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221be76 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1221be79 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221be7c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1221be7f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1221be82 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221be85 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1221be88 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1221be8e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221be90 je 0x1221be9f */
  if (C.zf) goto L_1221be9f;
  /* 1221be92 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221be95 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1221be98 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1221be9b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1221be9d je 0x1221beb5 */
  if (C.zf) goto L_1221beb5;
L_1221be9f:;
  /* 1221be9f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221bea2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1221bea5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1221bea7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221beaa mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1221bead or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1221beb0 jmp 0x1221c0ad */
  goto L_1221c0ad;
L_1221beb5:;
  /* 1221beb5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221beb8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1221bebb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1221bebe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221bec0 je 0x1221bf0c */
  if (C.zf) goto L_1221bf0c;
  /* 1221bec2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221bec5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1221becc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221becf mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1221bed2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1221bed5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221bed7 je 0x1221bef5 */
  if (C.zf) goto L_1221bef5;
  /* 1221bed9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221bedc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221bedf mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1221bee2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1221bee4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221bee7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1221beea and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1221beed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221bef0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1221bef3 jmp 0x1221bf0c */
  goto L_1221bf0c;
L_1221bef5:;
  /* 1221bef5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221bef8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1221befb or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1221befe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221bf01 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1221bf04 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1221bf07 jmp 0x1221c0ad */
  goto L_1221c0ad;
L_1221bf0c:;
  /* 1221bf0c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221bf0f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1221bf12 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1221bf15 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221bf18 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1221bf1b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221bf1e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1221bf21 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1221bf24 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221bf27 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1221bf2a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221bf2d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1221bf34 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1221bf3b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221bf3e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1221bf41 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221bf44 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1221bf47 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1221bf4d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1221bf4f jne 0x1221bf7f */
  if (!C.zf) goto L_1221bf7f;
  /* 1221bf51 cmp dword ptr [ebp - 8], 0x1223f140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1223f140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221bf58 je 0x1221bf63 */
  if (C.zf) goto L_1221bf63;
  /* 1221bf5a cmp dword ptr [ebp - 8], 0x1223f160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1223f160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221bf61 jne 0x1221bf73 */
  if (!C.zf) goto L_1221bf73;
L_1221bf63:;
  /* 1221bf63 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221bf66 push edx */
  push32((uint32_t)(EDX));
  /* 1221bf67 call 0x1221ddb0 */
  push32(0x1221bf6cu); f_1221ddb0();
  /* 1221bf6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221bf6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221bf71 jne 0x1221bf7f */
  if (!C.zf) goto L_1221bf7f;
L_1221bf73:;
  /* 1221bf73 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221bf76 push eax */
  push32((uint32_t)(EAX));
  /* 1221bf77 call 0x1221dce0 */
  push32(0x1221bf7cu); f_1221dce0();
  /* 1221bf7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1221bf7f:;
  /* 1221bf7f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221bf82 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1221bf85 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1221bf8b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221bf8d je 0x1221c06b */
  if (C.zf) goto L_1221c06b;
L_1221bf93:;
  /* 1221bf93 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221bf96 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221bf99 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1221bf9b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221bf9e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221bfa0 jge 0x1221bfc3 */
  if ((C.sf==C.of)) goto L_1221bfc3;
  /* 1221bfa2 push 0x1223c0fc */
  push32((uint32_t)(0x1223c0fcu));
  /* 1221bfa7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221bfa9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1221bfae push 0x1223c13c */
  push32((uint32_t)(0x1223c13cu));
  /* 1221bfb3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1221bfb5 call 0x122141f0 */
  push32(0x1221bfbau); f_122141f0();
  /* 1221bfba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221bfbd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221bfc0 jne 0x1221bfc3 */
  if (!C.zf) goto L_1221bfc3;
  /* 1221bfc2 int3  */
  x86_unimpl("int3 @ 0x1221bfc2");
L_1221bfc3:;
  /* 1221bfc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221bfc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221bfc7 jne 0x1221bf93 */
  if (!C.zf) goto L_1221bf93;
  /* 1221bfc9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221bfcc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221bfcf mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1221bfd1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221bfd4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1221bfd7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221bfda mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1221bfdd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221bfe0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221bfe3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1221bfe5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221bfe8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1221bfeb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221bfee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221bff1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1221bff4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221bff8 jle 0x1221c016 */
  if ((C.zf||C.sf!=C.of)) goto L_1221c016;
  /* 1221bffa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221bffd push ecx */
  push32((uint32_t)(ECX));
  /* 1221bffe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221c001 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1221c004 push eax */
  push32((uint32_t)(EAX));
  /* 1221c005 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221c008 push ecx */
  push32((uint32_t)(ECX));
  /* 1221c009 call 0x1221d9d0 */
  push32(0x1221c00eu); f_1221d9d0();
  /* 1221c00e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221c011 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1221c014 jmp 0x1221c05e */
  goto L_1221c05e;
L_1221c016:;
  /* 1221c016 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221c01a je 0x1221c039 */
  if (C.zf) goto L_1221c039;
  /* 1221c01c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221c01f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1221c022 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221c025 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1221c028 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221c02b mov ecx, dword ptr [edx*4 + 0x12241fa0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12241fa0)));
  /* 1221c032 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221c034 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1221c037 jmp 0x1221c040 */
  goto L_1221c040;
L_1221c039:;
  /* 1221c039 mov dword ptr [ebp - 0x14], 0x1223ea60 */
  w32((uint32_t)(EBP + -0x14), (0x1223ea60u));
L_1221c040:;
  /* 1221c040 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1221c043 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1221c047 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1221c04a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221c04c je 0x1221c05e */
  if (C.zf) goto L_1221c05e;
  /* 1221c04e push 2 */
  push32((uint32_t)(0x2u));
  /* 1221c050 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221c052 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221c055 push ecx */
  push32((uint32_t)(ECX));
  /* 1221c056 call 0x1221d880 */
  push32(0x1221c05bu); f_1221d880();
  /* 1221c05b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1221c05e:;
  /* 1221c05e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221c061 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1221c064 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1221c067 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1221c069 jmp 0x1221c089 */
  goto L_1221c089;
L_1221c06b:;
  /* 1221c06b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1221c072 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221c075 push edx */
  push32((uint32_t)(EDX));
  /* 1221c076 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1221c079 push eax */
  push32((uint32_t)(EAX));
  /* 1221c07a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221c07d push ecx */
  push32((uint32_t)(ECX));
  /* 1221c07e call 0x1221d9d0 */
  push32(0x1221c083u); f_1221d9d0();
  /* 1221c083 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221c086 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1221c089:;
  /* 1221c089 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221c08c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221c08f je 0x1221c0a5 */
  if (C.zf) goto L_1221c0a5;
  /* 1221c091 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221c094 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1221c097 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1221c09a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221c09d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1221c0a0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1221c0a3 jmp 0x1221c0ad */
  goto L_1221c0ad;
L_1221c0a5:;
  /* 1221c0a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221c0a8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1221c0ad:;
  /* 1221c0ad pop edi */
  EDI = (pop32());
  /* 1221c0ae pop esi */
  ESI = (pop32());
  /* 1221c0af pop ebx */
  EBX = (pop32());
  /* 1221c0b0 mov esp, ebp */
  ESP = (EBP);
  /* 1221c0b2 pop ebp */
  EBP = (pop32());
  /* 1221c0b3 ret  */
  ESPCHK(0x1221be40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0c0 @ 0x1221c0c0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1221c0c0(void) {
  FTRACE(0x1221c0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221c0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1221c0c1 mov ebp, esp */
  EBP = (ESP);
  /* 1221c0c3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221c0c9 push ebx */
  push32((uint32_t)(EBX));
  /* 1221c0ca push esi */
  push32((uint32_t)(ESI));
  /* 1221c0cb push edi */
  push32((uint32_t)(EDI));
  /* 1221c0cc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1221c0d3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1221c0dd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1221c0e4:;
  /* 1221c0e4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221c0e7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1221c0e9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1221c0ec movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1221c0f0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221c0f3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221c0f6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1221c0f9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221c0fb je 0x1221ccd7 */
  if (C.zf) goto L_1221ccd7;
  /* 1221c101 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221c108 jl 0x1221ccd7 */
  if ((C.sf!=C.of)) goto L_1221ccd7;
  /* 1221c10e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1221c112 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221c115 jl 0x1221c136 */
  if ((C.sf!=C.of)) goto L_1221c136;
  /* 1221c117 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1221c11b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221c11e jg 0x1221c136 */
  if ((!C.zf&&C.sf==C.of)) goto L_1221c136;
  /* 1221c120 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1221c124 movsx ecx, byte ptr [eax + 0x1223c134] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x1223c134))));
  /* 1221c12b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1221c12e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1221c134 jmp 0x1221c140 */
  goto L_1221c140;
L_1221c136:;
  /* 1221c136 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1221c140:;
  /* 1221c140 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1221c146 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1221c149 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221c14c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1221c14f movsx edx, byte ptr [ecx + eax*8 + 0x1223c154] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x1223c154))));
  /* 1221c157 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1221c15a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1221c15d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1221c160 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1221c166 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221c16d ja 0x1221ccd2 */
  if ((!C.cf&&!C.zf)) goto L_1221ccd2;
  /* 1221c173 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1221c179 jmp dword ptr [ecx*4 + 0x1221cce4] */
  switch (ECX) {
    case 0: goto L_1221c180;
    case 1: goto L_1221c21a;
    case 2: goto L_1221c25c;
    case 3: goto L_1221c2cb;
    case 4: goto L_1221c323;
    case 5: goto L_1221c332;
    case 6: goto L_1221c37e;
    case 7: goto L_1221c411;
    case 8: goto L_1221c2a8;
    case 9: goto L_1221c2b3;
    case 10: goto L_1221c29e;
    case 11: goto L_1221c293;
    case 12: goto L_1221c2be;
    case 13: goto L_1221c2c6;
    default: x86_unimpl("switch@0x1221c179 out of table"); return;
  }
L_1221c180:;
  /* 1221c180 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1221c187 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1221c18a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1221c190 mov eax, dword ptr [0x1223ec98] */
  EAX = (r32((uint32_t)(0x1223ec98)));
  /* 1221c195 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1221c197 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1221c19b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1221c1a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1221c1a3 je 0x1221c1fd */
  if (C.zf) goto L_1221c1fd;
  /* 1221c1a5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1221c1ab push edx */
  push32((uint32_t)(EDX));
  /* 1221c1ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221c1af push eax */
  push32((uint32_t)(EAX));
  /* 1221c1b0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1221c1b4 push ecx */
  push32((uint32_t)(ECX));
  /* 1221c1b5 call 0x1221cdf0 */
  push32(0x1221c1bau); f_1221cdf0();
  /* 1221c1ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221c1bd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221c1c0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1221c1c2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1221c1c5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221c1c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221c1cb mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1221c1ce:;
  /* 1221c1ce movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1221c1d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221c1d4 jne 0x1221c1f7 */
  if (!C.zf) goto L_1221c1f7;
  /* 1221c1d6 push 0x1223c1d4 */
  push32((uint32_t)(0x1223c1d4u));
  /* 1221c1db push 0 */
  push32((uint32_t)(0x0u));
  /* 1221c1dd push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1221c1e2 push 0x1223c1c8 */
  push32((uint32_t)(0x1223c1c8u));
  /* 1221c1e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1221c1e9 call 0x122141f0 */
  push32(0x1221c1eeu); f_122141f0();
  /* 1221c1ee add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221c1f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221c1f4 jne 0x1221c1f7 */
  if (!C.zf) goto L_1221c1f7;
  /* 1221c1f6 int3  */
  x86_unimpl("int3 @ 0x1221c1f6");
L_1221c1f7:;
  /* 1221c1f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221c1f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221c1fb jne 0x1221c1ce */
  if (!C.zf) goto L_1221c1ce;
L_1221c1fd:;
  /* 1221c1fd lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1221c203 push ecx */
  push32((uint32_t)(ECX));
  /* 1221c204 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221c207 push edx */
  push32((uint32_t)(EDX));
  /* 1221c208 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1221c20c push eax */
  push32((uint32_t)(EAX));
  /* 1221c20d call 0x1221cdf0 */
  push32(0x1221c212u); f_1221cdf0();
  /* 1221c212 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221c215 jmp 0x1221ccd2 */
  goto L_1221ccd2;
L_1221c21a:;
  /* 1221c21a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1221c221 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221c224 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1221c22a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1221c230 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1221c236 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1221c23c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1221c23f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1221c246 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1221c250 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1221c257 jmp 0x1221ccd2 */
  goto L_1221ccd2;
L_1221c25c:;
  /* 1221c25c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1221c260 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1221c266 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1221c26c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221c26f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1221c275 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221c27c ja 0x1221c2c6 */
  if ((!C.cf&&!C.zf)) goto L_1221c2c6;
  /* 1221c27e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1221c284 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221c286 mov al, byte ptr [ecx + 0x1221cd1c] */
  AL = (r8((uint32_t)(ECX + 0x1221cd1c)));
  /* 1221c28c jmp dword ptr [eax*4 + 0x1221cd04] */
  switch (EAX) {
    case 0: goto L_1221c2a8;
    case 1: goto L_1221c2b3;
    case 2: goto L_1221c29e;
    case 3: goto L_1221c293;
    case 4: goto L_1221c2be;
    case 5: goto L_1221c2c6;
    default: x86_unimpl("switch@0x1221c28c out of table"); return;
  }
L_1221c293:;
  /* 1221c293 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221c296 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1221c299 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1221c29c jmp 0x1221c2c6 */
  goto L_1221c2c6;
L_1221c29e:;
  /* 1221c29e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221c2a1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1221c2a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1221c2a6 jmp 0x1221c2c6 */
  goto L_1221c2c6;
L_1221c2a8:;
  /* 1221c2a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221c2ab or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1221c2ae mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1221c2b1 jmp 0x1221c2c6 */
  goto L_1221c2c6;
L_1221c2b3:;
  /* 1221c2b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221c2b6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1221c2b9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1221c2bc jmp 0x1221c2c6 */
  goto L_1221c2c6;
L_1221c2be:;
  /* 1221c2be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221c2c1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1221c2c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1221c2c6:;
  /* 1221c2c6 jmp 0x1221ccd2 */
  goto L_1221ccd2;
L_1221c2cb:;
  /* 1221c2cb movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1221c2cf cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221c2d2 jne 0x1221c307 */
  if (!C.zf) goto L_1221c307;
  /* 1221c2d4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1221c2d7 push edx */
  push32((uint32_t)(EDX));
  /* 1221c2d8 call 0x1221cf00 */
  push32(0x1221c2ddu); f_1221cf00();
  /* 1221c2dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221c2e0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1221c2e6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221c2ed jge 0x1221c305 */
  if ((C.sf==C.of)) goto L_1221c305;
  /* 1221c2ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221c2f2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1221c2f4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1221c2f7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1221c2fd neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1221c2ff mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1221c305:;
  /* 1221c305 jmp 0x1221c31e */
  goto L_1221c31e;
L_1221c307:;
  /* 1221c307 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1221c30d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221c310 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1221c314 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1221c318 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1221c31e:;
  /* 1221c31e jmp 0x1221ccd2 */
  goto L_1221ccd2;
L_1221c323:;
  /* 1221c323 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1221c32d jmp 0x1221ccd2 */
  goto L_1221ccd2;
L_1221c332:;
  /* 1221c332 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1221c336 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221c339 jne 0x1221c362 */
  if (!C.zf) goto L_1221c362;
  /* 1221c33b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1221c33e push eax */
  push32((uint32_t)(EAX));
  /* 1221c33f call 0x1221cf00 */
  push32(0x1221c344u); f_1221cf00();
  /* 1221c344 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221c347 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1221c34d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221c354 jge 0x1221c360 */
  if ((C.sf==C.of)) goto L_1221c360;
  /* 1221c356 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1221c360:;
  /* 1221c360 jmp 0x1221c379 */
  goto L_1221c379;
L_1221c362:;
  /* 1221c362 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1221c368 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221c36b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1221c36f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1221c373 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1221c379:;
  /* 1221c379 jmp 0x1221ccd2 */
  goto L_1221ccd2;
L_1221c37e:;
  /* 1221c37e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1221c382 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1221c388 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1221c38e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221c391 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1221c397 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221c39e ja 0x1221c40c */
  if ((!C.cf&&!C.zf)) goto L_1221c40c;
  /* 1221c3a0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1221c3a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221c3a8 mov al, byte ptr [ecx + 0x1221cd41] */
  AL = (r8((uint32_t)(ECX + 0x1221cd41)));
  /* 1221c3ae jmp dword ptr [eax*4 + 0x1221cd2d] */
  switch (EAX) {
    case 0: goto L_1221c3c0;
    case 1: goto L_1221c3f9;
    case 2: goto L_1221c3b5;
    case 3: goto L_1221c403;
    case 4: goto L_1221c40c;
    default: x86_unimpl("switch@0x1221c3ae out of table"); return;
  }
L_1221c3b5:;
  /* 1221c3b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221c3b8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1221c3bb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1221c3be jmp 0x1221c40c */
  goto L_1221c40c;
L_1221c3c0:;
  /* 1221c3c0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221c3c3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1221c3c6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221c3c9 jne 0x1221c3eb */
  if (!C.zf) goto L_1221c3eb;
  /* 1221c3cb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221c3ce movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1221c3d2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221c3d5 jne 0x1221c3eb */
  if (!C.zf) goto L_1221c3eb;
  /* 1221c3d7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221c3da add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221c3dd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1221c3e0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221c3e3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1221c3e6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1221c3e9 jmp 0x1221c3f7 */
  goto L_1221c3f7;
L_1221c3eb:;
  /* 1221c3eb mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1221c3f2 jmp 0x1221c180 */
  goto L_1221c180;
L_1221c3f7:;
  /* 1221c3f7 jmp 0x1221c40c */
  goto L_1221c40c;
L_1221c3f9:;
  /* 1221c3f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221c3fc or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1221c3fe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1221c401 jmp 0x1221c40c */
  goto L_1221c40c;
L_1221c403:;
  /* 1221c403 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221c406 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1221c409 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1221c40c:;
  /* 1221c40c jmp 0x1221ccd2 */
  goto L_1221ccd2;
L_1221c411:;
  /* 1221c411 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1221c415 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1221c41b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1221c421 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221c424 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1221c42a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221c431 ja 0x1221caf7 */
  if ((!C.cf&&!C.zf)) goto L_1221caf7;
  /* 1221c437 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1221c43d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1221c43f mov cl, byte ptr [edx + 0x1221cdac] */
  CL = (r8((uint32_t)(EDX + 0x1221cdac)));
  /* 1221c445 jmp dword ptr [ecx*4 + 0x1221cd70] */
  switch (ECX) {
    case 0: goto L_1221c44c;
    case 1: goto L_1221c6e0;
    case 2: goto L_1221c570;
    case 3: goto L_1221c819;
    case 4: goto L_1221c4db;
    case 5: goto L_1221c461;
    case 6: goto L_1221c7eb;
    case 7: goto L_1221c6f0;
    case 8: goto L_1221c695;
    case 9: goto L_1221c865;
    case 10: goto L_1221c80f;
    case 11: goto L_1221c586;
    case 12: goto L_1221c803;
    case 13: goto L_1221c825;
    case 14: goto L_1221caf7;
    default: x86_unimpl("switch@0x1221c445 out of table"); return;
  }
L_1221c44c:;
  /* 1221c44c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221c44f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1221c454 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221c456 jne 0x1221c461 */
  if (!C.zf) goto L_1221c461;
  /* 1221c458 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221c45b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1221c45e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1221c461:;
  /* 1221c461 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221c464 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1221c46a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221c46c je 0x1221c4a7 */
  if (C.zf) goto L_1221c4a7;
  /* 1221c46e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1221c471 push eax */
  push32((uint32_t)(EAX));
  /* 1221c472 call 0x1221cf40 */
  push32(0x1221c477u); f_1221cf40();
  /* 1221c477 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221c47a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1221c47e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1221c482 push ecx */
  push32((uint32_t)(ECX));
  /* 1221c483 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1221c489 push edx */
  push32((uint32_t)(EDX));
  /* 1221c48a call 0x1221e020 */
  push32(0x1221c48fu); f_1221e020();
  /* 1221c48f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221c492 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1221c495 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221c499 jge 0x1221c4a5 */
  if ((C.sf==C.of)) goto L_1221c4a5;
  /* 1221c49b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1221c4a5:;
  /* 1221c4a5 jmp 0x1221c4cd */
  goto L_1221c4cd;
L_1221c4a7:;
  /* 1221c4a7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1221c4aa push eax */
  push32((uint32_t)(EAX));
  /* 1221c4ab call 0x1221cf00 */
  push32(0x1221c4b0u); f_1221cf00();
  /* 1221c4b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221c4b3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1221c4ba mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1221c4c0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1221c4c6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1221c4cd:;
  /* 1221c4cd lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1221c4d3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1221c4d6 jmp 0x1221caf7 */
  goto L_1221caf7;
L_1221c4db:;
  /* 1221c4db lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1221c4de push eax */
  push32((uint32_t)(EAX));
  /* 1221c4df call 0x1221cf00 */
  push32(0x1221c4e4u); f_1221cf00();
  /* 1221c4e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221c4e7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1221c4ed cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221c4f4 je 0x1221c502 */
  if (C.zf) goto L_1221c502;
  /* 1221c4f6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1221c4fc cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221c500 jne 0x1221c51c */
  if (!C.zf) goto L_1221c51c;
L_1221c502:;
  /* 1221c502 mov edx, dword ptr [0x1223efb0] */
  EDX = (r32((uint32_t)(0x1223efb0)));
  /* 1221c508 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1221c50b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1221c50e push eax */
  push32((uint32_t)(EAX));
  /* 1221c50f call 0x12217f60 */
  push32(0x1221c514u); f_12217f60();
  /* 1221c514 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221c517 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1221c51a jmp 0x1221c56b */
  goto L_1221c56b;
L_1221c51c:;
  /* 1221c51c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221c51f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1221c525 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1221c527 je 0x1221c54c */
  if (C.zf) goto L_1221c54c;
  /* 1221c529 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1221c52f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1221c532 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1221c535 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1221c53b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1221c53e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1221c540 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1221c543 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1221c54a jmp 0x1221c56b */
  goto L_1221c56b;
L_1221c54c:;
  /* 1221c54c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1221c553 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1221c559 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1221c55c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1221c55f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1221c565 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1221c568 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1221c56b:;
  /* 1221c56b jmp 0x1221caf7 */
  goto L_1221caf7;
L_1221c570:;
  /* 1221c570 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221c573 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1221c579 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1221c57b jne 0x1221c586 */
  if (!C.zf) goto L_1221c586;
  /* 1221c57d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221c580 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1221c583 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1221c586:;
  /* 1221c586 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221c58d jne 0x1221c59b */
  if (!C.zf) goto L_1221c59b;
  /* 1221c58f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1221c599 jmp 0x1221c5a7 */
  goto L_1221c5a7;
L_1221c59b:;
  /* 1221c59b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1221c5a1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1221c5a7:;
  /* 1221c5a7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1221c5ad mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1221c5b3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1221c5b6 push edx */
  push32((uint32_t)(EDX));
  /* 1221c5b7 call 0x1221cf00 */
  push32(0x1221c5bcu); f_1221cf00();
  /* 1221c5bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221c5bf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1221c5c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221c5c5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1221c5ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221c5cc je 0x1221c636 */
  if (C.zf) goto L_1221c636;
  /* 1221c5ce cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221c5d2 jne 0x1221c5dd */
  if (!C.zf) goto L_1221c5dd;
  /* 1221c5d4 mov ecx, dword ptr [0x1223efb4] */
  ECX = (r32((uint32_t)(0x1223efb4)));
  /* 1221c5da mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1221c5dd:;
  /* 1221c5dd mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1221c5e4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1221c5e7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1221c5ed:;
  /* 1221c5ed mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1221c5f3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1221c5f9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221c5fc mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1221c602 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221c604 je 0x1221c626 */
  if (C.zf) goto L_1221c626;
  /* 1221c606 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1221c60c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221c60e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1221c611 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221c613 je 0x1221c626 */
  if (C.zf) goto L_1221c626;
  /* 1221c615 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1221c61b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221c61e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1221c624 jmp 0x1221c5ed */
  goto L_1221c5ed;
L_1221c626:;
  /* 1221c626 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1221c62c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221c62f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1221c631 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1221c634 jmp 0x1221c690 */
  goto L_1221c690;
L_1221c636:;
  /* 1221c636 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221c63a jne 0x1221c644 */
  if (!C.zf) goto L_1221c644;
  /* 1221c63c mov eax, dword ptr [0x1223efb0] */
  EAX = (r32((uint32_t)(0x1223efb0)));
  /* 1221c641 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1221c644:;
  /* 1221c644 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1221c647 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1221c64d:;
  /* 1221c64d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1221c653 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1221c659 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221c65c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1221c662 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221c664 je 0x1221c684 */
  if (C.zf) goto L_1221c684;
  /* 1221c666 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1221c66c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1221c66f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221c671 je 0x1221c684 */
  if (C.zf) goto L_1221c684;
  /* 1221c673 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1221c679 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221c67c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1221c682 jmp 0x1221c64d */
  goto L_1221c64d;
L_1221c684:;
  /* 1221c684 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1221c68a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221c68d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1221c690:;
  /* 1221c690 jmp 0x1221caf7 */
  goto L_1221caf7;
L_1221c695:;
  /* 1221c695 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1221c698 push edx */
  push32((uint32_t)(EDX));
  /* 1221c699 call 0x1221cf00 */
  push32(0x1221c69eu); f_1221cf00();
  /* 1221c69e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221c6a1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1221c6a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221c6aa and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1221c6ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221c6af je 0x1221c6c3 */
  if (C.zf) goto L_1221c6c3;
  /* 1221c6b1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1221c6b7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1221c6be mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1221c6c1 jmp 0x1221c6d1 */
  goto L_1221c6d1;
L_1221c6c3:;
  /* 1221c6c3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1221c6c9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1221c6cf mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1221c6d1:;
  /* 1221c6d1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1221c6db jmp 0x1221caf7 */
  goto L_1221caf7;
L_1221c6e0:;
  /* 1221c6e0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1221c6e7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1221c6ea add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1221c6ed mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1221c6f0:;
  /* 1221c6f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221c6f3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1221c6f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1221c6f8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1221c6fe mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1221c701 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221c708 jge 0x1221c716 */
  if ((C.sf==C.of)) goto L_1221c716;
  /* 1221c70a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1221c714 jmp 0x1221c732 */
  goto L_1221c732;
L_1221c716:;
  /* 1221c716 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221c71d jne 0x1221c732 */
  if (!C.zf) goto L_1221c732;
  /* 1221c71f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1221c723 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221c726 jne 0x1221c732 */
  if (!C.zf) goto L_1221c732;
  /* 1221c728 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1221c732:;
  /* 1221c732 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1221c735 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221c738 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1221c73b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1221c73e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221c741 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1221c743 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1221c746 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1221c74c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1221c752 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221c755 push ecx */
  push32((uint32_t)(ECX));
  /* 1221c756 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1221c75c push edx */
  push32((uint32_t)(EDX));
  /* 1221c75d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1221c761 push eax */
  push32((uint32_t)(EAX));
  /* 1221c762 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1221c765 push ecx */
  push32((uint32_t)(ECX));
  /* 1221c766 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1221c76c push edx */
  push32((uint32_t)(EDX));
  /* 1221c76d call dword ptr [0x1223f3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1223f3a0))), 0x1221c773u);
  /* 1221c773 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221c776 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221c779 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1221c77e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221c780 je 0x1221c798 */
  if (C.zf) goto L_1221c798;
  /* 1221c782 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221c789 jne 0x1221c798 */
  if (!C.zf) goto L_1221c798;
  /* 1221c78b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1221c78e push ecx */
  push32((uint32_t)(ECX));
  /* 1221c78f call dword ptr [0x1223f3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1223f3ac))), 0x1221c795u);
  /* 1221c795 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1221c798:;
  /* 1221c798 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1221c79c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221c79f jne 0x1221c7ba */
  if (!C.zf) goto L_1221c7ba;
  /* 1221c7a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221c7a4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1221c7a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221c7ab jne 0x1221c7ba */
  if (!C.zf) goto L_1221c7ba;
  /* 1221c7ad mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1221c7b0 push ecx */
  push32((uint32_t)(ECX));
  /* 1221c7b1 call dword ptr [0x1223f3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1223f3a4))), 0x1221c7b7u);
  /* 1221c7b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1221c7ba:;
  /* 1221c7ba mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1221c7bd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1221c7c0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221c7c3 jne 0x1221c7d7 */
  if (!C.zf) goto L_1221c7d7;
  /* 1221c7c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221c7c8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1221c7cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1221c7ce mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1221c7d1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221c7d4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1221c7d7:;
  /* 1221c7d7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1221c7da push eax */
  push32((uint32_t)(EAX));
  /* 1221c7db call 0x12217f60 */
  push32(0x1221c7e0u); f_12217f60();
  /* 1221c7e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221c7e3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1221c7e6 jmp 0x1221caf7 */
  goto L_1221caf7;
L_1221c7eb:;
  /* 1221c7eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221c7ee or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1221c7f1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1221c7f4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1221c7fe jmp 0x1221c885 */
  goto L_1221c885;
L_1221c803:;
  /* 1221c803 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1221c80d jmp 0x1221c885 */
  goto L_1221c885;
L_1221c80f:;
  /* 1221c80f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1221c819:;
  /* 1221c819 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1221c823 jmp 0x1221c82f */
  goto L_1221c82f;
L_1221c825:;
  /* 1221c825 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1221c82f:;
  /* 1221c82f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1221c839 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221c83c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1221c842 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221c844 je 0x1221c863 */
  if (C.zf) goto L_1221c863;
  /* 1221c846 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1221c84d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1221c853 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221c856 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1221c85c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1221c863:;
  /* 1221c863 jmp 0x1221c885 */
  goto L_1221c885;
L_1221c865:;
  /* 1221c865 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1221c86f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221c872 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1221c878 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1221c87a je 0x1221c885 */
  if (C.zf) goto L_1221c885;
  /* 1221c87c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221c87f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1221c882 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1221c885:;
  /* 1221c885 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221c888 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1221c88d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221c88f je 0x1221c8ae */
  if (C.zf) goto L_1221c8ae;
  /* 1221c891 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1221c894 push ecx */
  push32((uint32_t)(ECX));
  /* 1221c895 call 0x1221cf20 */
  push32(0x1221c89au); f_1221cf20();
  /* 1221c89a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221c89d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1221c8a3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1221c8a9 jmp 0x1221c93f */
  goto L_1221c93f;
L_1221c8ae:;
  /* 1221c8ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221c8b1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1221c8b4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221c8b6 je 0x1221c900 */
  if (C.zf) goto L_1221c900;
  /* 1221c8b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221c8bb and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1221c8be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221c8c0 je 0x1221c8e0 */
  if (C.zf) goto L_1221c8e0;
  /* 1221c8c2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1221c8c5 push ecx */
  push32((uint32_t)(ECX));
  /* 1221c8c6 call 0x1221cf00 */
  push32(0x1221c8cbu); f_1221cf00();
  /* 1221c8cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221c8ce movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1221c8d1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1221c8d2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1221c8d8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1221c8de jmp 0x1221c8fe */
  goto L_1221c8fe;
L_1221c8e0:;
  /* 1221c8e0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1221c8e3 push edx */
  push32((uint32_t)(EDX));
  /* 1221c8e4 call 0x1221cf00 */
  push32(0x1221c8e9u); f_1221cf00();
  /* 1221c8e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221c8ec and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1221c8f1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1221c8f2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1221c8f8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1221c8fe:;
  /* 1221c8fe jmp 0x1221c93f */
  goto L_1221c93f;
L_1221c900:;
  /* 1221c900 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221c903 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1221c906 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221c908 je 0x1221c925 */
  if (C.zf) goto L_1221c925;
  /* 1221c90a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1221c90d push ecx */
  push32((uint32_t)(ECX));
  /* 1221c90e call 0x1221cf00 */
  push32(0x1221c913u); f_1221cf00();
  /* 1221c913 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221c916 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1221c917 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1221c91d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1221c923 jmp 0x1221c93f */
  goto L_1221c93f;
L_1221c925:;
  /* 1221c925 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1221c928 push edx */
  push32((uint32_t)(EDX));
  /* 1221c929 call 0x1221cf00 */
  push32(0x1221c92eu); f_1221cf00();
  /* 1221c92e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221c931 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1221c933 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1221c939 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1221c93f:;
  /* 1221c93f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221c942 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1221c945 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221c947 je 0x1221c987 */
  if (C.zf) goto L_1221c987;
  /* 1221c949 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221c950 jg 0x1221c987 */
  if ((!C.zf&&C.sf==C.of)) goto L_1221c987;
  /* 1221c952 jl 0x1221c95d */
  if ((C.sf!=C.of)) goto L_1221c95d;
  /* 1221c954 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221c95b jae 0x1221c987 */
  if (!C.cf) goto L_1221c987;
L_1221c95d:;
  /* 1221c95d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1221c963 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1221c965 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1221c96b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221c96e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1221c970 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1221c976 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1221c97c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221c97f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1221c982 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1221c985 jmp 0x1221c99f */
  goto L_1221c99f;
L_1221c987:;
  /* 1221c987 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1221c98d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1221c993 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1221c999 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1221c99f:;
  /* 1221c99f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221c9a2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1221c9a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221c9aa jne 0x1221c9c7 */
  if (!C.zf) goto L_1221c9c7;
  /* 1221c9ac mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1221c9b2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1221c9b8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1221c9bb mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1221c9c1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1221c9c7:;
  /* 1221c9c7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221c9ce jge 0x1221c9dc */
  if ((C.sf==C.of)) goto L_1221c9dc;
  /* 1221c9d0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1221c9da jmp 0x1221c9e5 */
  goto L_1221c9e5;
L_1221c9dc:;
  /* 1221c9dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221c9df and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1221c9e2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1221c9e5:;
  /* 1221c9e5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1221c9eb or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1221c9f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221c9f3 jne 0x1221c9fc */
  if (!C.zf) goto L_1221c9fc;
  /* 1221c9f5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1221c9fc:;
  /* 1221c9fc lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1221c9ff mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1221ca02:;
  /* 1221ca02 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1221ca08 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1221ca0e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221ca11 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1221ca17 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221ca19 jg 0x1221ca2f */
  if ((!C.zf&&C.sf==C.of)) goto L_1221ca2f;
  /* 1221ca1b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1221ca21 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1221ca27 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1221ca29 je 0x1221cab0 */
  if (C.zf) goto L_1221cab0;
L_1221ca2f:;
  /* 1221ca2f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1221ca35 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1221ca36 push edx */
  push32((uint32_t)(EDX));
  /* 1221ca37 push eax */
  push32((uint32_t)(EAX));
  /* 1221ca38 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1221ca3e push edx */
  push32((uint32_t)(EDX));
  /* 1221ca3f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1221ca45 push eax */
  push32((uint32_t)(EAX));
  /* 1221ca46 call 0x1221bdc0 */
  push32(0x1221ca4bu); f_1221bdc0();
  /* 1221ca4b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ca4e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1221ca54 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1221ca5a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1221ca5b push edx */
  push32((uint32_t)(EDX));
  /* 1221ca5c push eax */
  push32((uint32_t)(EAX));
  /* 1221ca5d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1221ca63 push ecx */
  push32((uint32_t)(ECX));
  /* 1221ca64 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1221ca6a push edx */
  push32((uint32_t)(EDX));
  /* 1221ca6b call 0x1221bd50 */
  push32(0x1221ca70u); f_1221bd50();
  /* 1221ca70 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1221ca76 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1221ca7c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ca83 jle 0x1221ca97 */
  if ((C.zf||C.sf!=C.of)) goto L_1221ca97;
  /* 1221ca85 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1221ca8b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ca91 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1221ca97:;
  /* 1221ca97 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1221ca9a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1221caa0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1221caa2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1221caa5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221caa8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1221caab jmp 0x1221ca02 */
  goto L_1221ca02;
L_1221cab0:;
  /* 1221cab0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1221cab3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221cab6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1221cab9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1221cabc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221cabf mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1221cac2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221cac5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1221caca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221cacc je 0x1221caf7 */
  if (C.zf) goto L_1221caf7;
  /* 1221cace mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1221cad1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1221cad4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221cad7 jne 0x1221cadf */
  if (!C.zf) goto L_1221cadf;
  /* 1221cad9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221cadd jne 0x1221caf7 */
  if (!C.zf) goto L_1221caf7;
L_1221cadf:;
  /* 1221cadf mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1221cae2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221cae5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1221cae8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1221caeb mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1221caee mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221caf1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221caf4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1221caf7:;
  /* 1221caf7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221cafe jne 0x1221ccd2 */
  if (!C.zf) goto L_1221ccd2;
  /* 1221cb04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221cb07 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1221cb0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221cb0c je 0x1221cb5d */
  if (C.zf) goto L_1221cb5d;
  /* 1221cb0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221cb11 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1221cb17 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1221cb19 je 0x1221cb2b */
  if (C.zf) goto L_1221cb2b;
  /* 1221cb1b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1221cb22 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1221cb29 jmp 0x1221cb5d */
  goto L_1221cb5d;
L_1221cb2b:;
  /* 1221cb2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221cb2e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1221cb31 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221cb33 je 0x1221cb45 */
  if (C.zf) goto L_1221cb45;
  /* 1221cb35 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1221cb3c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1221cb43 jmp 0x1221cb5d */
  goto L_1221cb5d;
L_1221cb45:;
  /* 1221cb45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221cb48 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1221cb4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221cb4d je 0x1221cb5d */
  if (C.zf) goto L_1221cb5d;
  /* 1221cb4f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1221cb56 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1221cb5d:;
  /* 1221cb5d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1221cb63 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221cb66 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221cb69 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1221cb6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221cb72 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1221cb75 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221cb77 jne 0x1221cb95 */
  if (!C.zf) goto L_1221cb95;
  /* 1221cb79 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1221cb7f push eax */
  push32((uint32_t)(EAX));
  /* 1221cb80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221cb83 push ecx */
  push32((uint32_t)(ECX));
  /* 1221cb84 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1221cb8a push edx */
  push32((uint32_t)(EDX));
  /* 1221cb8b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1221cb8d call 0x1221ce70 */
  push32(0x1221cb92u); f_1221ce70();
  /* 1221cb92 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1221cb95:;
  /* 1221cb95 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1221cb9b push eax */
  push32((uint32_t)(EAX));
  /* 1221cb9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221cb9f push ecx */
  push32((uint32_t)(ECX));
  /* 1221cba0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221cba3 push edx */
  push32((uint32_t)(EDX));
  /* 1221cba4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1221cbaa push eax */
  push32((uint32_t)(EAX));
  /* 1221cbab call 0x1221ceb0 */
  push32(0x1221cbb0u); f_1221ceb0();
  /* 1221cbb0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221cbb3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221cbb6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1221cbb9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1221cbbb je 0x1221cbe3 */
  if (C.zf) goto L_1221cbe3;
  /* 1221cbbd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221cbc0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1221cbc3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221cbc5 jne 0x1221cbe3 */
  if (!C.zf) goto L_1221cbe3;
  /* 1221cbc7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1221cbcd push eax */
  push32((uint32_t)(EAX));
  /* 1221cbce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221cbd1 push ecx */
  push32((uint32_t)(ECX));
  /* 1221cbd2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1221cbd8 push edx */
  push32((uint32_t)(EDX));
  /* 1221cbd9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1221cbdb call 0x1221ce70 */
  push32(0x1221cbe0u); f_1221ce70();
  /* 1221cbe0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1221cbe3:;
  /* 1221cbe3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221cbe7 je 0x1221cc91 */
  if (C.zf) goto L_1221cc91;
  /* 1221cbed cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221cbf1 jle 0x1221cc91 */
  if ((C.zf||C.sf!=C.of)) goto L_1221cc91;
  /* 1221cbf7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1221cbfa mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1221cc00 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221cc03 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1221cc09:;
  /* 1221cc09 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1221cc0f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1221cc15 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221cc18 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1221cc1e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221cc20 je 0x1221cc8f */
  if (C.zf) goto L_1221cc8f;
  /* 1221cc22 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1221cc28 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1221cc2b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1221cc32 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1221cc39 push eax */
  push32((uint32_t)(EAX));
  /* 1221cc3a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1221cc40 push ecx */
  push32((uint32_t)(ECX));
  /* 1221cc41 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1221cc47 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221cc4a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1221cc50 call 0x1221e020 */
  push32(0x1221cc55u); f_1221e020();
  /* 1221cc55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221cc58 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1221cc5e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221cc65 jg 0x1221cc69 */
  if ((!C.zf&&C.sf==C.of)) goto L_1221cc69;
  /* 1221cc67 jmp 0x1221cc8f */
  goto L_1221cc8f;
L_1221cc69:;
  /* 1221cc69 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1221cc6f push eax */
  push32((uint32_t)(EAX));
  /* 1221cc70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221cc73 push ecx */
  push32((uint32_t)(ECX));
  /* 1221cc74 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1221cc7a push edx */
  push32((uint32_t)(EDX));
  /* 1221cc7b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1221cc81 push eax */
  push32((uint32_t)(EAX));
  /* 1221cc82 call 0x1221ceb0 */
  push32(0x1221cc87u); f_1221ceb0();
  /* 1221cc87 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221cc8a jmp 0x1221cc09 */
  goto L_1221cc09;
L_1221cc8f:;
  /* 1221cc8f jmp 0x1221ccac */
  goto L_1221ccac;
L_1221cc91:;
  /* 1221cc91 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1221cc97 push ecx */
  push32((uint32_t)(ECX));
  /* 1221cc98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221cc9b push edx */
  push32((uint32_t)(EDX));
  /* 1221cc9c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221cc9f push eax */
  push32((uint32_t)(EAX));
  /* 1221cca0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1221cca3 push ecx */
  push32((uint32_t)(ECX));
  /* 1221cca4 call 0x1221ceb0 */
  push32(0x1221cca9u); f_1221ceb0();
  /* 1221cca9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1221ccac:;
  /* 1221ccac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221ccaf and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1221ccb2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221ccb4 je 0x1221ccd2 */
  if (C.zf) goto L_1221ccd2;
  /* 1221ccb6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1221ccbc push eax */
  push32((uint32_t)(EAX));
  /* 1221ccbd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221ccc0 push ecx */
  push32((uint32_t)(ECX));
  /* 1221ccc1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1221ccc7 push edx */
  push32((uint32_t)(EDX));
  /* 1221ccc8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1221ccca call 0x1221ce70 */
  push32(0x1221cccfu); f_1221ce70();
  /* 1221cccf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1221ccd2:;
  /* 1221ccd2 jmp 0x1221c0e4 */
  goto L_1221c0e4;
L_1221ccd7:;
  /* 1221ccd7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1221ccdd pop edi */
  EDI = (pop32());
  /* 1221ccde pop esi */
  ESI = (pop32());
  /* 1221ccdf pop ebx */
  EBX = (pop32());
  /* 1221cce0 mov esp, ebp */
  ESP = (EBP);
  /* 1221cce2 pop ebp */
  EBP = (pop32());
  /* 1221cce3 ret  */
  ESPCHK(0x1221c0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cdf0 @ 0x1221cdf0 (119 bytes, 44 insns) */
void f_1221cdf0(void) {
  FTRACE(0x1221cdf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221cdf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1221cdf1 mov ebp, esp */
  EBP = (ESP);
  /* 1221cdf3 push ecx */
  push32((uint32_t)(ECX));
  /* 1221cdf4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221cdf7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1221cdfa sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221cdfd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221ce00 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1221ce03 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221ce06 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ce0a jl 0x1221ce32 */
  if ((C.sf!=C.of)) goto L_1221ce32;
  /* 1221ce0c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221ce0f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1221ce11 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1221ce14 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1221ce16 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1221ce1a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1221ce20 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1221ce23 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221ce26 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1221ce28 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ce2b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221ce2e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1221ce30 jmp 0x1221ce45 */
  goto L_1221ce45;
L_1221ce32:;
  /* 1221ce32 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221ce35 push edx */
  push32((uint32_t)(EDX));
  /* 1221ce36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221ce39 push eax */
  push32((uint32_t)(EAX));
  /* 1221ce3a call 0x1221be40 */
  push32(0x1221ce3fu); f_1221be40();
  /* 1221ce3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ce42 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1221ce45:;
  /* 1221ce45 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ce49 jne 0x1221ce56 */
  if (!C.zf) goto L_1221ce56;
  /* 1221ce4b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1221ce4e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1221ce54 jmp 0x1221ce63 */
  goto L_1221ce63;
L_1221ce56:;
  /* 1221ce56 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1221ce59 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1221ce5b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ce5e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1221ce61 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1221ce63:;
  /* 1221ce63 mov esp, ebp */
  ESP = (EBP);
  /* 1221ce65 pop ebp */
  EBP = (pop32());
  /* 1221ce66 ret  */
  ESPCHK(0x1221cdf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce70 @ 0x1221ce70 (53 bytes, 23 insns) */
void f_1221ce70(void) {
  FTRACE(0x1221ce70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221ce70 push ebp */
  push32((uint32_t)(EBP));
  /* 1221ce71 mov ebp, esp */
  EBP = (ESP);
L_1221ce73:;
  /* 1221ce73 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221ce76 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221ce79 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221ce7c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1221ce7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221ce81 jle 0x1221cea3 */
  if ((C.zf||C.sf!=C.of)) goto L_1221cea3;
  /* 1221ce83 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1221ce86 push edx */
  push32((uint32_t)(EDX));
  /* 1221ce87 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1221ce8a push eax */
  push32((uint32_t)(EAX));
  /* 1221ce8b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221ce8e push ecx */
  push32((uint32_t)(ECX));
  /* 1221ce8f call 0x1221cdf0 */
  push32(0x1221ce94u); f_1221cdf0();
  /* 1221ce94 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ce97 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1221ce9a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ce9d jne 0x1221cea1 */
  if (!C.zf) goto L_1221cea1;
  /* 1221ce9f jmp 0x1221cea3 */
  goto L_1221cea3;
L_1221cea1:;
  /* 1221cea1 jmp 0x1221ce73 */
  goto L_1221ce73;
L_1221cea3:;
  /* 1221cea3 pop ebp */
  EBP = (pop32());
  /* 1221cea4 ret  */
  ESPCHK(0x1221ce70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ceb0 @ 0x1221ceb0 (74 bytes, 31 insns) */
void f_1221ceb0(void) {
  FTRACE(0x1221ceb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221ceb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1221ceb1 mov ebp, esp */
  EBP = (ESP);
  /* 1221ceb3 push ecx */
  push32((uint32_t)(ECX));
L_1221ceb4:;
  /* 1221ceb4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221ceb7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221ceba sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221cebd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1221cec0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221cec2 jle 0x1221cef6 */
  if ((C.zf||C.sf!=C.of)) goto L_1221cef6;
  /* 1221cec4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1221cec7 push edx */
  push32((uint32_t)(EDX));
  /* 1221cec8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1221cecb push eax */
  push32((uint32_t)(EAX));
  /* 1221cecc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221cecf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1221ced2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1221ced5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221ced8 push eax */
  push32((uint32_t)(EAX));
  /* 1221ced9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221cedc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221cedf mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1221cee2 call 0x1221cdf0 */
  push32(0x1221cee7u); f_1221cdf0();
  /* 1221cee7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ceea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1221ceed cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221cef0 jne 0x1221cef4 */
  if (!C.zf) goto L_1221cef4;
  /* 1221cef2 jmp 0x1221cef6 */
  goto L_1221cef6;
L_1221cef4:;
  /* 1221cef4 jmp 0x1221ceb4 */
  goto L_1221ceb4;
L_1221cef6:;
  /* 1221cef6 mov esp, ebp */
  ESP = (EBP);
  /* 1221cef8 pop ebp */
  EBP = (pop32());
  /* 1221cef9 ret  */
  ESPCHK(0x1221ceb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf00 @ 0x1221cf00 (26 bytes, 12 insns) */
void f_1221cf00(void) {
  FTRACE(0x1221cf00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221cf00 push ebp */
  push32((uint32_t)(EBP));
  /* 1221cf01 mov ebp, esp */
  EBP = (ESP);
  /* 1221cf03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221cf06 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1221cf08 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221cf0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221cf0e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1221cf10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221cf13 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1221cf15 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1221cf18 pop ebp */
  EBP = (pop32());
  /* 1221cf19 ret  */
  ESPCHK(0x1221cf00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf20 @ 0x1221cf20 (31 bytes, 14 insns) */
void f_1221cf20(void) {
  FTRACE(0x1221cf20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221cf20 push ebp */
  push32((uint32_t)(EBP));
  /* 1221cf21 mov ebp, esp */
  EBP = (ESP);
  /* 1221cf23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221cf26 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1221cf28 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221cf2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221cf2e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1221cf30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221cf33 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1221cf35 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221cf38 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1221cf3a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1221cf3d pop ebp */
  EBP = (pop32());
  /* 1221cf3e ret  */
  ESPCHK(0x1221cf20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf40 @ 0x1221cf40 (27 bytes, 12 insns) */
void f_1221cf40(void) {
  FTRACE(0x1221cf40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221cf40 push ebp */
  push32((uint32_t)(EBP));
  /* 1221cf41 mov ebp, esp */
  EBP = (ESP);
  /* 1221cf43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221cf46 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1221cf48 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221cf4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221cf4e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1221cf50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221cf53 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1221cf55 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1221cf59 pop ebp */
  EBP = (pop32());
  /* 1221cf5a ret  */
  ESPCHK(0x1221cf40u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1221cf60 (145 bytes, 42 insns) */
void f_1221cf60(void) {
  FTRACE(0x1221cf60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221cf60 push ebp */
  push32((uint32_t)(EBP));
  /* 1221cf61 mov ebp, esp */
  EBP = (ESP);
  /* 1221cf63 push ecx */
  push32((uint32_t)(ECX));
  /* 1221cf64 call 0x1221d010 */
  push32(0x1221cf69u); f_1221d010();
  /* 1221cf69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221cf6c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1221cf6e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1221cf75 jmp 0x1221cf80 */
  goto L_1221cf80;
L_1221cf77:;
  /* 1221cf77 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221cf7a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221cf7d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1221cf80:;
  /* 1221cf80 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221cf84 jae 0x1221cfaa */
  if (!C.cf) goto L_1221cfaa;
  /* 1221cf86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221cf89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221cf8c cmp ecx, dword ptr [eax*8 + 0x1223efb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1223efb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221cf93 jne 0x1221cfa8 */
  if (!C.zf) goto L_1221cfa8;
  /* 1221cf95 call 0x1221d000 */
  push32(0x1221cf9au); f_1221d000();
  /* 1221cf9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221cf9d mov ecx, dword ptr [edx*8 + 0x1223efbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x1223efbc)));
  /* 1221cfa4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1221cfa6 jmp 0x1221cfed */
  goto L_1221cfed;
L_1221cfa8:;
  /* 1221cfa8 jmp 0x1221cf77 */
  goto L_1221cf77;
L_1221cfaa:;
  /* 1221cfaa cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221cfae jb 0x1221cfc3 */
  if (C.cf) goto L_1221cfc3;
  /* 1221cfb0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221cfb4 ja 0x1221cfc3 */
  if ((!C.cf&&!C.zf)) goto L_1221cfc3;
  /* 1221cfb6 call 0x1221d000 */
  push32(0x1221cfbbu); f_1221d000();
  /* 1221cfbb mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1221cfc1 jmp 0x1221cfed */
  goto L_1221cfed;
L_1221cfc3:;
  /* 1221cfc3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221cfca jb 0x1221cfe2 */
  if (C.cf) goto L_1221cfe2;
  /* 1221cfcc cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221cfd3 ja 0x1221cfe2 */
  if ((!C.cf&&!C.zf)) goto L_1221cfe2;
  /* 1221cfd5 call 0x1221d000 */
  push32(0x1221cfdau); f_1221d000();
  /* 1221cfda mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1221cfe0 jmp 0x1221cfed */
  goto L_1221cfed;
L_1221cfe2:;
  /* 1221cfe2 call 0x1221d000 */
  push32(0x1221cfe7u); f_1221d000();
  /* 1221cfe7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1221cfed:;
  /* 1221cfed mov esp, ebp */
  ESP = (EBP);
  /* 1221cfef pop ebp */
  EBP = (pop32());
  /* 1221cff0 ret  */
  ESPCHK(0x1221cf60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d000 @ 0x1221d000 (13 bytes, 6 insns) */
void f_1221d000(void) {
  FTRACE(0x1221d000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221d000 push ebp */
  push32((uint32_t)(EBP));
  /* 1221d001 mov ebp, esp */
  EBP = (ESP);
  /* 1221d003 call 0x12214b70 */
  push32(0x1221d008u); f_12214b70();
  /* 1221d008 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221d00b pop ebp */
  EBP = (pop32());
  /* 1221d00c ret  */
  ESPCHK(0x1221d000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d010 @ 0x1221d010 (13 bytes, 6 insns) */
void f_1221d010(void) {
  FTRACE(0x1221d010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221d010 push ebp */
  push32((uint32_t)(EBP));
  /* 1221d011 mov ebp, esp */
  EBP = (ESP);
  /* 1221d013 call 0x12214b70 */
  push32(0x1221d018u); f_12214b70();
  /* 1221d018 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221d01b pop ebp */
  EBP = (pop32());
  /* 1221d01c ret  */
  ESPCHK(0x1221d010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d020 @ 0x1221d020 (664 bytes, 263 insns) [15 switch table(s)] */
void f_1221d020(void) {
  FTRACE(0x1221d020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221d020 push ebp */
  push32((uint32_t)(EBP));
  /* 1221d021 mov ebp, esp */
  EBP = (ESP);
  /* 1221d023 push edi */
  push32((uint32_t)(EDI));
  /* 1221d024 push esi */
  push32((uint32_t)(ESI));
  /* 1221d025 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1221d028 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1221d02b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1221d02e mov eax, ecx */
  EAX = (ECX);
  /* 1221d030 mov edx, ecx */
  EDX = (ECX);
  /* 1221d032 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221d034 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221d036 jbe 0x1221d040 */
  if ((C.cf||C.zf)) goto L_1221d040;
  /* 1221d038 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221d03a jb 0x1221d1b8 */
  if (C.cf) goto L_1221d1b8;
L_1221d040:;
  /* 1221d040 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1221d046 jne 0x1221d05c */
  if (!C.zf) goto L_1221d05c;
  /* 1221d048 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1221d04b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1221d04e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221d051 jb 0x1221d07c */
  if (C.cf) goto L_1221d07c;
  /* 1221d053 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1221d055 jmp dword ptr [edx*4 + 0x1221d168] */
  switch (EDX) {
    case 0: goto L_1221d178;
    case 1: goto L_1221d180;
    case 2: goto L_1221d18c;
    case 3: goto L_1221d1a0;
    default: x86_unimpl("switch@0x1221d055 out of table"); return;
  }
L_1221d05c:;
  /* 1221d05c mov eax, edi */
  EAX = (EDI);
  /* 1221d05e mov edx, 3 */
  EDX = (0x3u);
  /* 1221d063 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221d066 jb 0x1221d074 */
  if (C.cf) goto L_1221d074;
  /* 1221d068 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1221d06b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221d06d jmp dword ptr [eax*4 + 0x1221d080] */
  switch (EAX) {
    case 1: goto L_1221d090;
    case 2: goto L_1221d0bc;
    case 3: goto L_1221d0e0;
    default: x86_unimpl("switch@0x1221d06d out of table"); return;
  }
L_1221d074:;
  /* 1221d074 jmp dword ptr [ecx*4 + 0x1221d178] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1221d178)))); return;
  /* 1221d07b nop  */
  /* nop */
L_1221d07c:;
  /* 1221d07c jmp dword ptr [ecx*4 + 0x1221d0fc] */
  switch (ECX) {
    case 0: goto L_1221d15f;
    case 1: goto L_1221d14c;
    case 2: goto L_1221d144;
    case 3: goto L_1221d13c;
    case 4: goto L_1221d134;
    case 5: goto L_1221d12c;
    case 6: goto L_1221d124;
    case 7: goto L_1221d11c;
    default: x86_unimpl("switch@0x1221d07c out of table"); return;
  }
  /* 1221d083 nop  */
  /* nop */
L_1221d090:;
  /* 1221d090 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1221d092 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1221d094 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1221d096 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1221d099 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1221d09c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1221d09f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1221d0a2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1221d0a5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1221d0a8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1221d0ab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221d0ae jb 0x1221d07c */
  if (C.cf) goto L_1221d07c;
  /* 1221d0b0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1221d0b2 jmp dword ptr [edx*4 + 0x1221d168] */
  switch (EDX) {
    case 0: goto L_1221d178;
    case 1: goto L_1221d180;
    case 2: goto L_1221d18c;
    case 3: goto L_1221d1a0;
    default: x86_unimpl("switch@0x1221d0b2 out of table"); return;
  }
  /* 1221d0b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1221d0bc:;
  /* 1221d0bc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1221d0be mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1221d0c0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1221d0c2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1221d0c5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1221d0c8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1221d0cb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1221d0ce add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1221d0d1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221d0d4 jb 0x1221d07c */
  if (C.cf) goto L_1221d07c;
  /* 1221d0d6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1221d0d8 jmp dword ptr [edx*4 + 0x1221d168] */
  switch (EDX) {
    case 0: goto L_1221d178;
    case 1: goto L_1221d180;
    case 2: goto L_1221d18c;
    case 3: goto L_1221d1a0;
    default: x86_unimpl("switch@0x1221d0d8 out of table"); return;
  }
  /* 1221d0df nop  */
  /* nop */
L_1221d0e0:;
  /* 1221d0e0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1221d0e2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1221d0e4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1221d0e6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1221d0e7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1221d0ea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1221d0eb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221d0ee jb 0x1221d07c */
  if (C.cf) goto L_1221d07c;
  /* 1221d0f0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1221d0f2 jmp dword ptr [edx*4 + 0x1221d168] */
  switch (EDX) {
    case 0: goto L_1221d178;
    case 1: goto L_1221d180;
    case 2: goto L_1221d18c;
    case 3: goto L_1221d1a0;
    default: x86_unimpl("switch@0x1221d0f2 out of table"); return;
  }
  /* 1221d0f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1221d11c:;
  /* 1221d11c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1221d120 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1221d124:;
  /* 1221d124 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1221d128 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1221d12c:;
  /* 1221d12c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1221d130 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1221d134:;
  /* 1221d134 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1221d138 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1221d13c:;
  /* 1221d13c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1221d140 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1221d144:;
  /* 1221d144 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1221d148 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1221d14c:;
  /* 1221d14c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1221d150 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1221d154 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1221d15b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1221d15d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1221d15f:;
  /* 1221d15f jmp dword ptr [edx*4 + 0x1221d168] */
  switch (EDX) {
    case 0: goto L_1221d178;
    case 1: goto L_1221d180;
    case 2: goto L_1221d18c;
    case 3: goto L_1221d1a0;
    default: x86_unimpl("switch@0x1221d15f out of table"); return;
  }
  /* 1221d166 mov edi, edi */
  EDI = (EDI);
L_1221d178:;
  /* 1221d178 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221d17b pop esi */
  ESI = (pop32());
  /* 1221d17c pop edi */
  EDI = (pop32());
  /* 1221d17d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1221d17e ret  */
  ESPCHK(0x1221d020u, _esp0);
  ESP += 4; return;
  /* 1221d17f nop  */
  /* nop */
L_1221d180:;
  /* 1221d180 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1221d182 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1221d184 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221d187 pop esi */
  ESI = (pop32());
  /* 1221d188 pop edi */
  EDI = (pop32());
  /* 1221d189 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1221d18a ret  */
  ESPCHK(0x1221d020u, _esp0);
  ESP += 4; return;
  /* 1221d18b nop  */
  /* nop */
L_1221d18c:;
  /* 1221d18c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1221d18e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1221d190 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1221d193 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1221d196 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221d199 pop esi */
  ESI = (pop32());
  /* 1221d19a pop edi */
  EDI = (pop32());
  /* 1221d19b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1221d19c ret  */
  ESPCHK(0x1221d020u, _esp0);
  ESP += 4; return;
  /* 1221d19d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1221d1a0:;
  /* 1221d1a0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1221d1a2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1221d1a4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1221d1a7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1221d1aa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1221d1ad mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1221d1b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221d1b3 pop esi */
  ESI = (pop32());
  /* 1221d1b4 pop edi */
  EDI = (pop32());
  /* 1221d1b5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1221d1b6 ret  */
  ESPCHK(0x1221d020u, _esp0);
  ESP += 4; return;
  /* 1221d1b7 nop  */
  /* nop */
L_1221d1b8:;
  /* 1221d1b8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1221d1bc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1221d1c0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1221d1c6 jne 0x1221d1ec */
  if (!C.zf) goto L_1221d1ec;
  /* 1221d1c8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1221d1cb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1221d1ce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221d1d1 jb 0x1221d1e0 */
  if (C.cf) goto L_1221d1e0;
  /* 1221d1d3 std  */
  C.df=1;
  /* 1221d1d4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1221d1d6 cld  */
  C.df=0;
  /* 1221d1d7 jmp dword ptr [edx*4 + 0x1221d300] */
  switch (EDX) {
    case 0: goto L_1221d310;
    case 1: goto L_1221d318;
    case 2: goto L_1221d328;
    case 3: goto L_1221d33c;
    default: x86_unimpl("switch@0x1221d1d7 out of table"); return;
  }
  /* 1221d1de mov edi, edi */
  EDI = (EDI);
L_1221d1e0:;
  /* 1221d1e0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1221d1e2 jmp dword ptr [ecx*4 + 0x1221d2b0] */
  switch (ECX) {
    case 0: goto L_1221d2f7;
    default: x86_unimpl("switch@0x1221d1e2 out of table"); return;
  }
  /* 1221d1e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1221d1ec:;
  /* 1221d1ec mov eax, edi */
  EAX = (EDI);
  /* 1221d1ee mov edx, 3 */
  EDX = (0x3u);
  /* 1221d1f3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221d1f6 jb 0x1221d204 */
  if (C.cf) goto L_1221d204;
  /* 1221d1f8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1221d1fb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221d1fd jmp dword ptr [eax*4 + 0x1221d208] */
  switch (EAX) {
    case 1: goto L_1221d218;
    case 2: goto L_1221d238;
    case 3: goto L_1221d260;
    default: x86_unimpl("switch@0x1221d1fd out of table"); return;
  }
L_1221d204:;
  /* 1221d204 jmp dword ptr [ecx*4 + 0x1221d300] */
  switch (ECX) {
    case 0: goto L_1221d310;
    case 1: goto L_1221d318;
    case 2: goto L_1221d328;
    case 3: goto L_1221d33c;
    default: x86_unimpl("switch@0x1221d204 out of table"); return;
  }
  /* 1221d20b nop  */
  /* nop */
L_1221d218:;
  /* 1221d218 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1221d21b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1221d21d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1221d220 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1221d221 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1221d224 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1221d225 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221d228 jb 0x1221d1e0 */
  if (C.cf) goto L_1221d1e0;
  /* 1221d22a std  */
  C.df=1;
  /* 1221d22b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1221d22d cld  */
  C.df=0;
  /* 1221d22e jmp dword ptr [edx*4 + 0x1221d300] */
  switch (EDX) {
    case 0: goto L_1221d310;
    case 1: goto L_1221d318;
    case 2: goto L_1221d328;
    case 3: goto L_1221d33c;
    default: x86_unimpl("switch@0x1221d22e out of table"); return;
  }
  /* 1221d235 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1221d238:;
  /* 1221d238 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1221d23b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1221d23d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1221d240 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1221d243 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1221d246 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1221d249 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221d24c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221d24f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221d252 jb 0x1221d1e0 */
  if (C.cf) goto L_1221d1e0;
  /* 1221d254 std  */
  C.df=1;
  /* 1221d255 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1221d257 cld  */
  C.df=0;
  /* 1221d258 jmp dword ptr [edx*4 + 0x1221d300] */
  switch (EDX) {
    case 0: goto L_1221d310;
    case 1: goto L_1221d318;
    case 2: goto L_1221d328;
    case 3: goto L_1221d33c;
    default: x86_unimpl("switch@0x1221d258 out of table"); return;
  }
  /* 1221d25f nop  */
  /* nop */
L_1221d260:;
  /* 1221d260 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1221d263 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1221d265 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1221d268 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1221d26b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1221d26e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1221d271 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1221d274 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1221d277 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221d27a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221d27d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221d280 jb 0x1221d1e0 */
  if (C.cf) goto L_1221d1e0;
  /* 1221d286 std  */
  C.df=1;
  /* 1221d287 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1221d289 cld  */
  C.df=0;
  /* 1221d28a jmp dword ptr [edx*4 + 0x1221d300] */
  switch (EDX) {
    case 0: goto L_1221d310;
    case 1: goto L_1221d318;
    case 2: goto L_1221d328;
    case 3: goto L_1221d33c;
    default: x86_unimpl("switch@0x1221d28a out of table"); return;
  }
  /* 1221d291 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1221d294 mov ah, 0xd2 */
  AH = (0xd2u);
  /* 1221d296 and dword ptr [edx], edx */
  { uint32_t _r=(r32((uint32_t)(EDX)))&(EDX); w32((uint32_t)(EDX), (_r)); fl_logic(_r,32); }
  /* 1221d298 mov esp, 0xc41221d2 */
  ESP = (0xc41221d2u);
  /* 1221d29d shl byte ptr [ecx], cl */
  w8((uint32_t)(ECX), (sh_shl((uint32_t)(r8((uint32_t)(ECX))), (CL)&0x1f, 8)));
  /* 1221d29f adc cl, ah */
  { uint32_t _a=(CL),_b=(AH),_r=_a+_b+C.cf; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1221d2a1 shl byte ptr [ecx], cl */
  w8((uint32_t)(ECX), (sh_shl((uint32_t)(r8((uint32_t)(ECX))), (CL)&0x1f, 8)));
  /* 1221d2a3 adc dl, ah */
  { uint32_t _a=(DL),_b=(AH),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1221d2a5 shl byte ptr [ecx], cl */
  w8((uint32_t)(ECX), (sh_shl((uint32_t)(r8((uint32_t)(ECX))), (CL)&0x1f, 8)));
  /* 1221d2a7 adc bl, ah */
  { uint32_t _a=(BL),_b=(AH),_r=_a+_b+C.cf; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 1221d2a9 shl byte ptr [ecx], cl */
  w8((uint32_t)(ECX), (sh_shl((uint32_t)(r8((uint32_t)(ECX))), (CL)&0x1f, 8)));
  /* 1221d2ab adc ah, ah */
  { uint32_t _a=(AH),_b=(AH),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 1221d2ad shl byte ptr [ecx], cl */
  w8((uint32_t)(ECX), (sh_shl((uint32_t)(r8((uint32_t)(ECX))), (CL)&0x1f, 8)));
  /* 1221d2b4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1221d2b8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1221d2bc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1221d2c0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1221d2c4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1221d2c8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1221d2cc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1221d2d0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1221d2d4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1221d2d8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1221d2dc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1221d2e0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1221d2e4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1221d2e8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1221d2ec lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1221d2f3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1221d2f5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1221d2f7:;
  /* 1221d2f7 jmp dword ptr [edx*4 + 0x1221d300] */
  switch (EDX) {
    case 0: goto L_1221d310;
    case 1: goto L_1221d318;
    case 2: goto L_1221d328;
    case 3: goto L_1221d33c;
    default: x86_unimpl("switch@0x1221d2f7 out of table"); return;
  }
  /* 1221d2fe mov edi, edi */
  EDI = (EDI);
L_1221d310:;
  /* 1221d310 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221d313 pop esi */
  ESI = (pop32());
  /* 1221d314 pop edi */
  EDI = (pop32());
  /* 1221d315 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1221d316 ret  */
  ESPCHK(0x1221d020u, _esp0);
  ESP += 4; return;
  /* 1221d317 nop  */
  /* nop */
L_1221d318:;
  /* 1221d318 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1221d31b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1221d31e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221d321 pop esi */
  ESI = (pop32());
  /* 1221d322 pop edi */
  EDI = (pop32());
  /* 1221d323 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1221d324 ret  */
  ESPCHK(0x1221d020u, _esp0);
  ESP += 4; return;
  /* 1221d325 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1221d328:;
  /* 1221d328 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1221d32b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1221d32e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1221d331 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1221d334 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221d337 pop esi */
  ESI = (pop32());
  /* 1221d338 pop edi */
  EDI = (pop32());
  /* 1221d339 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1221d33a ret  */
  ESPCHK(0x1221d020u, _esp0);
  ESP += 4; return;
  /* 1221d33b nop  */
  /* nop */
L_1221d33c:;
  /* 1221d33c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1221d33f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1221d342 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1221d345 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1221d348 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1221d34b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1221d34e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221d351 pop esi */
  ESI = (pop32());
  /* 1221d352 pop edi */
  EDI = (pop32());
  /* 1221d353 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1221d354 ret  */
  ESPCHK(0x1221d020u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d360 @ 0x1221d360 (421 bytes, 148 insns) */
void f_1221d360(void) {
  FTRACE(0x1221d360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221d360 push ebp */
  push32((uint32_t)(EBP));
  /* 1221d361 mov ebp, esp */
  EBP = (ESP);
  /* 1221d363 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1221d365 push 0x1223c1f0 */
  push32((uint32_t)(0x1223c1f0u));
  /* 1221d36a push 0x1221e238 */
  push32((uint32_t)(0x1221e238u));
  /* 1221d36f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1221d375 push eax */
  push32((uint32_t)(EAX));
  /* 1221d376 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1221d37d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221d380 push ebx */
  push32((uint32_t)(EBX));
  /* 1221d381 push esi */
  push32((uint32_t)(ESI));
  /* 1221d382 push edi */
  push32((uint32_t)(EDI));
  /* 1221d383 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1221d386 cmp dword ptr [0x122407c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122407c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221d38d jne 0x1221d3de */
  if (!C.zf) goto L_1221d3de;
  /* 1221d38f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1221d392 push eax */
  push32((uint32_t)(EAX));
  /* 1221d393 push 1 */
  push32((uint32_t)(0x1u));
  /* 1221d395 push 0x1223c1e8 */
  push32((uint32_t)(0x1223c1e8u));
  /* 1221d39a push 1 */
  push32((uint32_t)(0x1u));
  /* 1221d39c call dword ptr [0x12243308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243308))), 0x1221d3a2u);
  /* 1221d3a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221d3a4 je 0x1221d3b2 */
  if (C.zf) goto L_1221d3b2;
  /* 1221d3a6 mov dword ptr [0x122407c4], 1 */
  w32((uint32_t)(0x122407c4), (0x1u));
  /* 1221d3b0 jmp 0x1221d3de */
  goto L_1221d3de;
L_1221d3b2:;
  /* 1221d3b2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1221d3b5 push ecx */
  push32((uint32_t)(ECX));
  /* 1221d3b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1221d3b8 push 0x1223c1e4 */
  push32((uint32_t)(0x1223c1e4u));
  /* 1221d3bd push 1 */
  push32((uint32_t)(0x1u));
  /* 1221d3bf push 0 */
  push32((uint32_t)(0x0u));
  /* 1221d3c1 call dword ptr [0x12243318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243318))), 0x1221d3c7u);
  /* 1221d3c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221d3c9 je 0x1221d3d7 */
  if (C.zf) goto L_1221d3d7;
  /* 1221d3cb mov dword ptr [0x122407c4], 2 */
  w32((uint32_t)(0x122407c4), (0x2u));
  /* 1221d3d5 jmp 0x1221d3de */
  goto L_1221d3de;
L_1221d3d7:;
  /* 1221d3d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221d3d9 jmp 0x1221d508 */
  goto L_1221d508;
L_1221d3de:;
  /* 1221d3de cmp dword ptr [0x122407c4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x122407c4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221d3e5 jne 0x1221d415 */
  if (!C.zf) goto L_1221d415;
  /* 1221d3e7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221d3eb jne 0x1221d3f6 */
  if (!C.zf) goto L_1221d3f6;
  /* 1221d3ed mov edx, dword ptr [0x122407d0] */
  EDX = (r32((uint32_t)(0x122407d0)));
  /* 1221d3f3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1221d3f6:;
  /* 1221d3f6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1221d3f9 push eax */
  push32((uint32_t)(EAX));
  /* 1221d3fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1221d3fd push ecx */
  push32((uint32_t)(ECX));
  /* 1221d3fe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221d401 push edx */
  push32((uint32_t)(EDX));
  /* 1221d402 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221d405 push eax */
  push32((uint32_t)(EAX));
  /* 1221d406 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1221d409 push ecx */
  push32((uint32_t)(ECX));
  /* 1221d40a call dword ptr [0x12243318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243318))), 0x1221d410u);
  /* 1221d410 jmp 0x1221d508 */
  goto L_1221d508;
L_1221d415:;
  /* 1221d415 cmp dword ptr [0x122407c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x122407c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221d41c jne 0x1221d506 */
  if (!C.zf) goto L_1221d506;
  /* 1221d422 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221d426 jne 0x1221d431 */
  if (!C.zf) goto L_1221d431;
  /* 1221d428 mov edx, dword ptr [0x122407e0] */
  EDX = (r32((uint32_t)(0x122407e0)));
  /* 1221d42e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1221d431:;
  /* 1221d431 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221d433 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221d435 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1221d438 push eax */
  push32((uint32_t)(EAX));
  /* 1221d439 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221d43c push ecx */
  push32((uint32_t)(ECX));
  /* 1221d43d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1221d440 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1221d442 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221d444 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1221d447 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221d44a push edx */
  push32((uint32_t)(EDX));
  /* 1221d44b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1221d44e push eax */
  push32((uint32_t)(EAX));
  /* 1221d44f call dword ptr [0x12243310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243310))), 0x1221d455u);
  /* 1221d455 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1221d458 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221d45c jne 0x1221d465 */
  if (!C.zf) goto L_1221d465;
  /* 1221d45e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221d460 jmp 0x1221d508 */
  goto L_1221d508;
L_1221d465:;
  /* 1221d465 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1221d46c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1221d46f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1221d471 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221d474 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1221d476 call 0x122182d0 */
  push32(0x1221d47bu); f_122182d0();
  /* 1221d47b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1221d47e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1221d481 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1221d484 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1221d487 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1221d48a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1221d48c push edx */
  push32((uint32_t)(EDX));
  /* 1221d48d push 0 */
  push32((uint32_t)(0x0u));
  /* 1221d48f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221d492 push eax */
  push32((uint32_t)(EAX));
  /* 1221d493 call 0x12218ea0 */
  push32(0x1221d498u); f_12218ea0();
  /* 1221d498 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221d49b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1221d4a2 jmp 0x1221d4bb */
  goto L_1221d4bb;
  /* 1221d4a4 mov eax, 1 */
  EAX = (0x1u);
  /* 1221d4a9 ret  */
  ESPCHK(0x1221d360u, _esp0);
  ESP += 4; return;
  /* 1221d4aa mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1221d4ad mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1221d4b4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1221d4bb:;
  /* 1221d4bb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221d4bf jne 0x1221d4c5 */
  if (!C.zf) goto L_1221d4c5;
  /* 1221d4c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221d4c3 jmp 0x1221d508 */
  goto L_1221d508;
L_1221d4c5:;
  /* 1221d4c5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1221d4c8 push ecx */
  push32((uint32_t)(ECX));
  /* 1221d4c9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221d4cc push edx */
  push32((uint32_t)(EDX));
  /* 1221d4cd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1221d4d0 push eax */
  push32((uint32_t)(EAX));
  /* 1221d4d1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221d4d4 push ecx */
  push32((uint32_t)(ECX));
  /* 1221d4d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1221d4d7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1221d4da push edx */
  push32((uint32_t)(EDX));
  /* 1221d4db call dword ptr [0x12243310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243310))), 0x1221d4e1u);
  /* 1221d4e1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1221d4e4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221d4e8 jne 0x1221d4ee */
  if (!C.zf) goto L_1221d4ee;
  /* 1221d4ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221d4ec jmp 0x1221d508 */
  goto L_1221d508;
L_1221d4ee:;
  /* 1221d4ee mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1221d4f1 push eax */
  push32((uint32_t)(EAX));
  /* 1221d4f2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1221d4f5 push ecx */
  push32((uint32_t)(ECX));
  /* 1221d4f6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221d4f9 push edx */
  push32((uint32_t)(EDX));
  /* 1221d4fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221d4fd push eax */
  push32((uint32_t)(EAX));
  /* 1221d4fe call dword ptr [0x12243308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243308))), 0x1221d504u);
  /* 1221d504 jmp 0x1221d508 */
  goto L_1221d508;
L_1221d506:;
  /* 1221d506 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1221d508:;
  /* 1221d508 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1221d50b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221d50e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1221d515 pop edi */
  EDI = (pop32());
  /* 1221d516 pop esi */
  ESI = (pop32());
  /* 1221d517 pop ebx */
  EBX = (pop32());
  /* 1221d518 mov esp, ebp */
  ESP = (EBP);
  /* 1221d51a pop ebp */
  EBP = (pop32());
  /* 1221d51b ret  */
  ESPCHK(0x1221d360u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d520 @ 0x1221d520 (727 bytes, 263 insns) */
void f_1221d520(void) {
  FTRACE(0x1221d520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221d520 push ebp */
  push32((uint32_t)(EBP));
  /* 1221d521 mov ebp, esp */
  EBP = (ESP);
  /* 1221d523 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1221d525 push 0x1223c200 */
  push32((uint32_t)(0x1223c200u));
  /* 1221d52a push 0x1221e238 */
  push32((uint32_t)(0x1221e238u));
  /* 1221d52f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1221d535 push eax */
  push32((uint32_t)(EAX));
  /* 1221d536 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1221d53d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221d540 push ebx */
  push32((uint32_t)(EBX));
  /* 1221d541 push esi */
  push32((uint32_t)(ESI));
  /* 1221d542 push edi */
  push32((uint32_t)(EDI));
  /* 1221d543 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1221d546 cmp dword ptr [0x122407e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122407e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221d54d jne 0x1221d5a6 */
  if (!C.zf) goto L_1221d5a6;
  /* 1221d54f push 0 */
  push32((uint32_t)(0x0u));
  /* 1221d551 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221d553 push 1 */
  push32((uint32_t)(0x1u));
  /* 1221d555 push 0x1223c1e8 */
  push32((uint32_t)(0x1223c1e8u));
  /* 1221d55a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1221d55f push 0 */
  push32((uint32_t)(0x0u));
  /* 1221d561 call dword ptr [0x1224330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224330c))), 0x1221d567u);
  /* 1221d567 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221d569 je 0x1221d577 */
  if (C.zf) goto L_1221d577;
  /* 1221d56b mov dword ptr [0x122407e8], 1 */
  w32((uint32_t)(0x122407e8), (0x1u));
  /* 1221d575 jmp 0x1221d5a6 */
  goto L_1221d5a6;
L_1221d577:;
  /* 1221d577 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221d579 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221d57b push 1 */
  push32((uint32_t)(0x1u));
  /* 1221d57d push 0x1223c1e4 */
  push32((uint32_t)(0x1223c1e4u));
  /* 1221d582 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1221d587 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221d589 call dword ptr [0x12243304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243304))), 0x1221d58fu);
  /* 1221d58f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221d591 je 0x1221d59f */
  if (C.zf) goto L_1221d59f;
  /* 1221d593 mov dword ptr [0x122407e8], 2 */
  w32((uint32_t)(0x122407e8), (0x2u));
  /* 1221d59d jmp 0x1221d5a6 */
  goto L_1221d5a6;
L_1221d59f:;
  /* 1221d59f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221d5a1 jmp 0x1221d811 */
  goto L_1221d811;
L_1221d5a6:;
  /* 1221d5a6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221d5aa jle 0x1221d5bf */
  if ((C.zf||C.sf!=C.of)) goto L_1221d5bf;
  /* 1221d5ac mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1221d5af push eax */
  push32((uint32_t)(EAX));
  /* 1221d5b0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1221d5b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1221d5b4 call 0x1221d830 */
  push32(0x1221d5b9u); f_1221d830();
  /* 1221d5b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221d5bc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1221d5bf:;
  /* 1221d5bf cmp dword ptr [0x122407e8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x122407e8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221d5c6 jne 0x1221d5eb */
  if (!C.zf) goto L_1221d5eb;
  /* 1221d5c8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1221d5cb push edx */
  push32((uint32_t)(EDX));
  /* 1221d5cc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1221d5cf push eax */
  push32((uint32_t)(EAX));
  /* 1221d5d0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1221d5d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1221d5d4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1221d5d7 push edx */
  push32((uint32_t)(EDX));
  /* 1221d5d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221d5db push eax */
  push32((uint32_t)(EAX));
  /* 1221d5dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221d5df push ecx */
  push32((uint32_t)(ECX));
  /* 1221d5e0 call dword ptr [0x12243304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243304))), 0x1221d5e6u);
  /* 1221d5e6 jmp 0x1221d811 */
  goto L_1221d811;
L_1221d5eb:;
  /* 1221d5eb cmp dword ptr [0x122407e8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x122407e8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221d5f2 jne 0x1221d80f */
  if (!C.zf) goto L_1221d80f;
  /* 1221d5f8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221d5fc jne 0x1221d607 */
  if (!C.zf) goto L_1221d607;
  /* 1221d5fe mov edx, dword ptr [0x122407e0] */
  EDX = (r32((uint32_t)(0x122407e0)));
  /* 1221d604 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1221d607:;
  /* 1221d607 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221d609 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221d60b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1221d60e push eax */
  push32((uint32_t)(EAX));
  /* 1221d60f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1221d612 push ecx */
  push32((uint32_t)(ECX));
  /* 1221d613 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1221d616 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1221d618 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221d61a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1221d61d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221d620 push edx */
  push32((uint32_t)(EDX));
  /* 1221d621 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1221d624 push eax */
  push32((uint32_t)(EAX));
  /* 1221d625 call dword ptr [0x12243310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243310))), 0x1221d62bu);
  /* 1221d62b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1221d62e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221d632 jne 0x1221d63b */
  if (!C.zf) goto L_1221d63b;
  /* 1221d634 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221d636 jmp 0x1221d811 */
  goto L_1221d811;
L_1221d63b:;
  /* 1221d63b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1221d642 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1221d645 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1221d647 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221d64a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1221d64c call 0x122182d0 */
  push32(0x1221d651u); f_122182d0();
  /* 1221d651 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1221d654 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1221d657 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1221d65a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1221d65d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1221d664 jmp 0x1221d67d */
  goto L_1221d67d;
  /* 1221d666 mov eax, 1 */
  EAX = (0x1u);
  /* 1221d66b ret  */
  ESPCHK(0x1221d520u, _esp0);
  ESP += 4; return;
  /* 1221d66c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1221d66f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1221d676 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1221d67d:;
  /* 1221d67d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221d681 jne 0x1221d68a */
  if (!C.zf) goto L_1221d68a;
  /* 1221d683 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221d685 jmp 0x1221d811 */
  goto L_1221d811;
L_1221d68a:;
  /* 1221d68a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1221d68d push edx */
  push32((uint32_t)(EDX));
  /* 1221d68e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221d691 push eax */
  push32((uint32_t)(EAX));
  /* 1221d692 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1221d695 push ecx */
  push32((uint32_t)(ECX));
  /* 1221d696 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1221d699 push edx */
  push32((uint32_t)(EDX));
  /* 1221d69a push 1 */
  push32((uint32_t)(0x1u));
  /* 1221d69c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1221d69f push eax */
  push32((uint32_t)(EAX));
  /* 1221d6a0 call dword ptr [0x12243310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243310))), 0x1221d6a6u);
  /* 1221d6a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221d6a8 jne 0x1221d6b1 */
  if (!C.zf) goto L_1221d6b1;
  /* 1221d6aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221d6ac jmp 0x1221d811 */
  goto L_1221d811;
L_1221d6b1:;
  /* 1221d6b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221d6b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221d6b5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1221d6b8 push ecx */
  push32((uint32_t)(ECX));
  /* 1221d6b9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221d6bc push edx */
  push32((uint32_t)(EDX));
  /* 1221d6bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221d6c0 push eax */
  push32((uint32_t)(EAX));
  /* 1221d6c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221d6c4 push ecx */
  push32((uint32_t)(ECX));
  /* 1221d6c5 call dword ptr [0x1224330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224330c))), 0x1221d6cbu);
  /* 1221d6cb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1221d6ce cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221d6d2 jne 0x1221d6db */
  if (!C.zf) goto L_1221d6db;
  /* 1221d6d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221d6d6 jmp 0x1221d811 */
  goto L_1221d811;
L_1221d6db:;
  /* 1221d6db mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221d6de and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1221d6e4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221d6e6 je 0x1221d72b */
  if (C.zf) goto L_1221d72b;
  /* 1221d6e8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221d6ec je 0x1221d726 */
  if (C.zf) goto L_1221d726;
  /* 1221d6ee mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1221d6f1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221d6f4 jle 0x1221d6fd */
  if ((C.zf||C.sf!=C.of)) goto L_1221d6fd;
  /* 1221d6f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221d6f8 jmp 0x1221d811 */
  goto L_1221d811;
L_1221d6fd:;
  /* 1221d6fd mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1221d700 push ecx */
  push32((uint32_t)(ECX));
  /* 1221d701 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1221d704 push edx */
  push32((uint32_t)(EDX));
  /* 1221d705 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1221d708 push eax */
  push32((uint32_t)(EAX));
  /* 1221d709 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221d70c push ecx */
  push32((uint32_t)(ECX));
  /* 1221d70d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221d710 push edx */
  push32((uint32_t)(EDX));
  /* 1221d711 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221d714 push eax */
  push32((uint32_t)(EAX));
  /* 1221d715 call dword ptr [0x1224330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224330c))), 0x1221d71bu);
  /* 1221d71b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221d71d jne 0x1221d726 */
  if (!C.zf) goto L_1221d726;
  /* 1221d71f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221d721 jmp 0x1221d811 */
  goto L_1221d811;
L_1221d726:;
  /* 1221d726 jmp 0x1221d80a */
  goto L_1221d80a;
L_1221d72b:;
  /* 1221d72b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1221d72e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1221d731 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1221d738 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1221d73b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1221d73d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221d740 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1221d742 call 0x122182d0 */
  push32(0x1221d747u); f_122182d0();
  /* 1221d747 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1221d74a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1221d74d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1221d750 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1221d753 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1221d75a jmp 0x1221d773 */
  goto L_1221d773;
  /* 1221d75c mov eax, 1 */
  EAX = (0x1u);
  /* 1221d761 ret  */
  ESPCHK(0x1221d520u, _esp0);
  ESP += 4; return;
  /* 1221d762 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1221d765 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1221d76c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1221d773:;
  /* 1221d773 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221d777 jne 0x1221d780 */
  if (!C.zf) goto L_1221d780;
  /* 1221d779 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221d77b jmp 0x1221d811 */
  goto L_1221d811;
L_1221d780:;
  /* 1221d780 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1221d783 push eax */
  push32((uint32_t)(EAX));
  /* 1221d784 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1221d787 push ecx */
  push32((uint32_t)(ECX));
  /* 1221d788 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1221d78b push edx */
  push32((uint32_t)(EDX));
  /* 1221d78c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1221d78f push eax */
  push32((uint32_t)(EAX));
  /* 1221d790 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221d793 push ecx */
  push32((uint32_t)(ECX));
  /* 1221d794 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221d797 push edx */
  push32((uint32_t)(EDX));
  /* 1221d798 call dword ptr [0x1224330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224330c))), 0x1221d79eu);
  /* 1221d79e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221d7a0 jne 0x1221d7a6 */
  if (!C.zf) goto L_1221d7a6;
  /* 1221d7a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221d7a4 jmp 0x1221d811 */
  goto L_1221d811;
L_1221d7a6:;
  /* 1221d7a6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221d7aa jne 0x1221d7da */
  if (!C.zf) goto L_1221d7da;
  /* 1221d7ac push 0 */
  push32((uint32_t)(0x0u));
  /* 1221d7ae push 0 */
  push32((uint32_t)(0x0u));
  /* 1221d7b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221d7b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221d7b4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1221d7b7 push eax */
  push32((uint32_t)(EAX));
  /* 1221d7b8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1221d7bb push ecx */
  push32((uint32_t)(ECX));
  /* 1221d7bc push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1221d7c1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1221d7c4 push edx */
  push32((uint32_t)(EDX));
  /* 1221d7c5 call dword ptr [0x1224335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224335c))), 0x1221d7cbu);
  /* 1221d7cb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1221d7ce cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221d7d2 jne 0x1221d7d8 */
  if (!C.zf) goto L_1221d7d8;
  /* 1221d7d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221d7d6 jmp 0x1221d811 */
  goto L_1221d811;
L_1221d7d8:;
  /* 1221d7d8 jmp 0x1221d80a */
  goto L_1221d80a;
L_1221d7da:;
  /* 1221d7da push 0 */
  push32((uint32_t)(0x0u));
  /* 1221d7dc push 0 */
  push32((uint32_t)(0x0u));
  /* 1221d7de mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1221d7e1 push eax */
  push32((uint32_t)(EAX));
  /* 1221d7e2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1221d7e5 push ecx */
  push32((uint32_t)(ECX));
  /* 1221d7e6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1221d7e9 push edx */
  push32((uint32_t)(EDX));
  /* 1221d7ea mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1221d7ed push eax */
  push32((uint32_t)(EAX));
  /* 1221d7ee push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1221d7f3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1221d7f6 push ecx */
  push32((uint32_t)(ECX));
  /* 1221d7f7 call dword ptr [0x1224335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224335c))), 0x1221d7fdu);
  /* 1221d7fd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1221d800 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221d804 jne 0x1221d80a */
  if (!C.zf) goto L_1221d80a;
  /* 1221d806 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221d808 jmp 0x1221d811 */
  goto L_1221d811;
L_1221d80a:;
  /* 1221d80a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1221d80d jmp 0x1221d811 */
  goto L_1221d811;
L_1221d80f:;
  /* 1221d80f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1221d811:;
  /* 1221d811 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1221d814 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221d817 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1221d81e pop edi */
  EDI = (pop32());
  /* 1221d81f pop esi */
  ESI = (pop32());
  /* 1221d820 pop ebx */
  EBX = (pop32());
  /* 1221d821 mov esp, ebp */
  ESP = (EBP);
  /* 1221d823 pop ebp */
  EBP = (pop32());
  /* 1221d824 ret  */
  ESPCHK(0x1221d520u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d830 @ 0x1221d830 (80 bytes, 32 insns) */
void f_1221d830(void) {
  FTRACE(0x1221d830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221d830 push ebp */
  push32((uint32_t)(EBP));
  /* 1221d831 mov ebp, esp */
  EBP = (ESP);
  /* 1221d833 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221d836 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221d839 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1221d83c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221d83f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1221d842:;
  /* 1221d842 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221d845 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221d848 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221d84b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1221d84e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221d850 je 0x1221d867 */
  if (C.zf) goto L_1221d867;
  /* 1221d852 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221d855 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1221d858 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221d85a je 0x1221d867 */
  if (C.zf) goto L_1221d867;
  /* 1221d85c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221d85f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221d862 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1221d865 jmp 0x1221d842 */
  goto L_1221d842;
L_1221d867:;
  /* 1221d867 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221d86a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1221d86d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221d86f jne 0x1221d879 */
  if (!C.zf) goto L_1221d879;
  /* 1221d871 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221d874 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221d877 jmp 0x1221d87c */
  goto L_1221d87c;
L_1221d879:;
  /* 1221d879 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1221d87c:;
  /* 1221d87c mov esp, ebp */
  ESP = (EBP);
  /* 1221d87e pop ebp */
  EBP = (pop32());
  /* 1221d87f ret  */
  ESPCHK(0x1221d830u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d880 @ 0x1221d880 (130 bytes, 43 insns) */
void f_1221d880(void) {
  FTRACE(0x1221d880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221d880 push ebp */
  push32((uint32_t)(EBP));
  /* 1221d881 mov ebp, esp */
  EBP = (ESP);
  /* 1221d883 push ecx */
  push32((uint32_t)(ECX));
  /* 1221d884 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221d887 cmp eax, dword ptr [0x122420dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122420dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221d88d jae 0x1221d8b1 */
  if (!C.cf) goto L_1221d8b1;
  /* 1221d88f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221d892 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1221d895 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221d898 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1221d89b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221d89e mov eax, dword ptr [ecx*4 + 0x12241fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12241fa0)));
  /* 1221d8a5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1221d8aa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1221d8ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1221d8af jne 0x1221d8cc */
  if (!C.zf) goto L_1221d8cc;
L_1221d8b1:;
  /* 1221d8b1 call 0x1221d000 */
  push32(0x1221d8b6u); f_1221d000();
  /* 1221d8b6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1221d8bc call 0x1221d010 */
  push32(0x1221d8c1u); f_1221d010();
  /* 1221d8c1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1221d8c7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1221d8ca jmp 0x1221d8fe */
  goto L_1221d8fe;
L_1221d8cc:;
  /* 1221d8cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221d8cf push edx */
  push32((uint32_t)(EDX));
  /* 1221d8d0 call 0x1221e820 */
  push32(0x1221d8d5u); f_1221e820();
  /* 1221d8d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221d8d8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1221d8db push eax */
  push32((uint32_t)(EAX));
  /* 1221d8dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221d8df push ecx */
  push32((uint32_t)(ECX));
  /* 1221d8e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221d8e3 push edx */
  push32((uint32_t)(EDX));
  /* 1221d8e4 call 0x1221d910 */
  push32(0x1221d8e9u); f_1221d910();
  /* 1221d8e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221d8ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1221d8ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221d8f2 push eax */
  push32((uint32_t)(EAX));
  /* 1221d8f3 call 0x1221e8b0 */
  push32(0x1221d8f8u); f_1221e8b0();
  /* 1221d8f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221d8fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1221d8fe:;
  /* 1221d8fe mov esp, ebp */
  ESP = (EBP);
  /* 1221d900 pop ebp */
  EBP = (pop32());
  /* 1221d901 ret  */
  ESPCHK(0x1221d880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d910 @ 0x1221d910 (178 bytes, 56 insns) */
void f_1221d910(void) {
  FTRACE(0x1221d910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221d910 push ebp */
  push32((uint32_t)(EBP));
  /* 1221d911 mov ebp, esp */
  EBP = (ESP);
  /* 1221d913 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221d916 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221d919 push eax */
  push32((uint32_t)(EAX));
  /* 1221d91a call 0x1221e6a0 */
  push32(0x1221d91fu); f_1221e6a0();
  /* 1221d91f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221d922 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1221d925 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221d929 jne 0x1221d93e */
  if (!C.zf) goto L_1221d93e;
  /* 1221d92b call 0x1221d000 */
  push32(0x1221d930u); f_1221d000();
  /* 1221d930 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1221d936 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1221d939 jmp 0x1221d9be */
  goto L_1221d9be;
L_1221d93e:;
  /* 1221d93e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1221d941 push ecx */
  push32((uint32_t)(ECX));
  /* 1221d942 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221d944 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221d947 push edx */
  push32((uint32_t)(EDX));
  /* 1221d948 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221d94b push eax */
  push32((uint32_t)(EAX));
  /* 1221d94c call dword ptr [0x122432fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122432fc))), 0x1221d952u);
  /* 1221d952 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1221d955 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221d959 jne 0x1221d966 */
  if (!C.zf) goto L_1221d966;
  /* 1221d95b call dword ptr [0x122433b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122433b4))), 0x1221d961u);
  /* 1221d961 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1221d964 jmp 0x1221d96d */
  goto L_1221d96d;
L_1221d966:;
  /* 1221d966 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1221d96d:;
  /* 1221d96d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221d971 je 0x1221d984 */
  if (C.zf) goto L_1221d984;
  /* 1221d973 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221d976 push ecx */
  push32((uint32_t)(ECX));
  /* 1221d977 call 0x1221cf60 */
  push32(0x1221d97cu); f_1221cf60();
  /* 1221d97c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221d97f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1221d982 jmp 0x1221d9be */
  goto L_1221d9be;
L_1221d984:;
  /* 1221d984 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221d987 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1221d98a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221d98d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1221d990 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221d993 mov ecx, dword ptr [edx*4 + 0x12241fa0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12241fa0)));
  /* 1221d99a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1221d99e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1221d9a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221d9a4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1221d9a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221d9aa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1221d9ad imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221d9b0 mov eax, dword ptr [eax*4 + 0x12241fa0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12241fa0)));
  /* 1221d9b7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1221d9bb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1221d9be:;
  /* 1221d9be mov esp, ebp */
  ESP = (EBP);
  /* 1221d9c0 pop ebp */
  EBP = (pop32());
  /* 1221d9c1 ret  */
  ESPCHK(0x1221d910u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d9d0 @ 0x1221d9d0 (130 bytes, 43 insns) */
void f_1221d9d0(void) {
  FTRACE(0x1221d9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221d9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1221d9d1 mov ebp, esp */
  EBP = (ESP);
  /* 1221d9d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1221d9d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221d9d7 cmp eax, dword ptr [0x122420dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122420dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221d9dd jae 0x1221da01 */
  if (!C.cf) goto L_1221da01;
  /* 1221d9df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221d9e2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1221d9e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221d9e8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1221d9eb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221d9ee mov eax, dword ptr [ecx*4 + 0x12241fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12241fa0)));
  /* 1221d9f5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1221d9fa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1221d9fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1221d9ff jne 0x1221da1c */
  if (!C.zf) goto L_1221da1c;
L_1221da01:;
  /* 1221da01 call 0x1221d000 */
  push32(0x1221da06u); f_1221d000();
  /* 1221da06 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1221da0c call 0x1221d010 */
  push32(0x1221da11u); f_1221d010();
  /* 1221da11 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1221da17 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1221da1a jmp 0x1221da4e */
  goto L_1221da4e;
L_1221da1c:;
  /* 1221da1c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221da1f push edx */
  push32((uint32_t)(EDX));
  /* 1221da20 call 0x1221e820 */
  push32(0x1221da25u); f_1221e820();
  /* 1221da25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221da28 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1221da2b push eax */
  push32((uint32_t)(EAX));
  /* 1221da2c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221da2f push ecx */
  push32((uint32_t)(ECX));
  /* 1221da30 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221da33 push edx */
  push32((uint32_t)(EDX));
  /* 1221da34 call 0x1221da60 */
  push32(0x1221da39u); f_1221da60();
  /* 1221da39 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221da3c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1221da3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221da42 push eax */
  push32((uint32_t)(EAX));
  /* 1221da43 call 0x1221e8b0 */
  push32(0x1221da48u); f_1221e8b0();
  /* 1221da48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221da4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1221da4e:;
  /* 1221da4e mov esp, ebp */
  ESP = (EBP);
  /* 1221da50 pop ebp */
  EBP = (pop32());
  /* 1221da51 ret  */
  ESPCHK(0x1221d9d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da60 @ 0x1221da60 (627 bytes, 182 insns) */
void f_1221da60(void) {
  FTRACE(0x1221da60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221da60 push ebp */
  push32((uint32_t)(EBP));
  /* 1221da61 mov ebp, esp */
  EBP = (ESP);
  /* 1221da63 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221da69 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1221da70 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221da73 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1221da79 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221da7d jne 0x1221da86 */
  if (!C.zf) goto L_1221da86;
  /* 1221da7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221da81 jmp 0x1221dccf */
  goto L_1221dccf;
L_1221da86:;
  /* 1221da86 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221da89 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1221da8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221da8f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1221da92 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221da95 mov eax, dword ptr [ecx*4 + 0x12241fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12241fa0)));
  /* 1221da9c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1221daa1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1221daa4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1221daa6 je 0x1221dab8 */
  if (C.zf) goto L_1221dab8;
  /* 1221daa8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1221daaa push 0 */
  push32((uint32_t)(0x0u));
  /* 1221daac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221daaf push edx */
  push32((uint32_t)(EDX));
  /* 1221dab0 call 0x1221d910 */
  push32(0x1221dab5u); f_1221d910();
  /* 1221dab5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1221dab8:;
  /* 1221dab8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221dabb sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1221dabe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221dac1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1221dac4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221dac7 mov edx, dword ptr [eax*4 + 0x12241fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12241fa0)));
  /* 1221dace movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1221dad3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1221dad8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221dada je 0x1221dbec */
  if (C.zf) goto L_1221dbec;
  /* 1221dae0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221dae3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1221dae6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1221daed:;
  /* 1221daed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221daf0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221daf3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221daf6 jae 0x1221dbea */
  if (!C.cf) goto L_1221dbea;
  /* 1221dafc lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1221db02 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1221db05:;
  /* 1221db05 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221db08 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1221db0e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221db10 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221db16 jge 0x1221db77 */
  if ((C.sf==C.of)) goto L_1221db77;
  /* 1221db18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221db1b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221db1e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221db21 jae 0x1221db77 */
  if (!C.cf) goto L_1221db77;
  /* 1221db23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221db26 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1221db28 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1221db2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221db31 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221db34 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1221db37 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1221db3e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221db41 jne 0x1221db61 */
  if (!C.zf) goto L_1221db61;
  /* 1221db43 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1221db49 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221db4c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1221db52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221db55 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1221db58 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221db5b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221db5e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1221db61:;
  /* 1221db61 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221db64 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1221db6a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1221db6c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221db6f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221db72 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1221db75 jmp 0x1221db05 */
  goto L_1221db05;
L_1221db77:;
  /* 1221db77 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221db79 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1221db7f push edx */
  push32((uint32_t)(EDX));
  /* 1221db80 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221db83 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1221db89 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221db8b push eax */
  push32((uint32_t)(EAX));
  /* 1221db8c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1221db92 push edx */
  push32((uint32_t)(EDX));
  /* 1221db93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221db96 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1221db99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221db9c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1221db9f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221dba2 mov edx, dword ptr [eax*4 + 0x12241fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12241fa0)));
  /* 1221dba9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1221dbac push eax */
  push32((uint32_t)(EAX));
  /* 1221dbad call dword ptr [0x12243374] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243374))), 0x1221dbb3u);
  /* 1221dbb3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221dbb5 je 0x1221dbda */
  if (C.zf) goto L_1221dbda;
  /* 1221dbb7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221dbba add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221dbc0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1221dbc3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221dbc6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1221dbcc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221dbce cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221dbd4 jge 0x1221dbd8 */
  if ((C.sf==C.of)) goto L_1221dbd8;
  /* 1221dbd6 jmp 0x1221dbea */
  goto L_1221dbea;
L_1221dbd8:;
  /* 1221dbd8 jmp 0x1221dbe5 */
  goto L_1221dbe5;
L_1221dbda:;
  /* 1221dbda call dword ptr [0x122433b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122433b4))), 0x1221dbe0u);
  /* 1221dbe0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1221dbe3 jmp 0x1221dbea */
  goto L_1221dbea;
L_1221dbe5:;
  /* 1221dbe5 jmp 0x1221daed */
  goto L_1221daed;
L_1221dbea:;
  /* 1221dbea jmp 0x1221dc3c */
  goto L_1221dc3c;
L_1221dbec:;
  /* 1221dbec push 0 */
  push32((uint32_t)(0x0u));
  /* 1221dbee lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 1221dbf4 push ecx */
  push32((uint32_t)(ECX));
  /* 1221dbf5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1221dbf8 push edx */
  push32((uint32_t)(EDX));
  /* 1221dbf9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221dbfc push eax */
  push32((uint32_t)(EAX));
  /* 1221dbfd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221dc00 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1221dc03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221dc06 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1221dc09 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221dc0c mov eax, dword ptr [ecx*4 + 0x12241fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12241fa0)));
  /* 1221dc13 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1221dc16 push ecx */
  push32((uint32_t)(ECX));
  /* 1221dc17 call dword ptr [0x12243374] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243374))), 0x1221dc1du);
  /* 1221dc1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221dc1f je 0x1221dc33 */
  if (C.zf) goto L_1221dc33;
  /* 1221dc21 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1221dc28 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1221dc2e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1221dc31 jmp 0x1221dc3c */
  goto L_1221dc3c;
L_1221dc33:;
  /* 1221dc33 call dword ptr [0x122433b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122433b4))), 0x1221dc39u);
  /* 1221dc39 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1221dc3c:;
  /* 1221dc3c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221dc40 jne 0x1221dcc6 */
  if (!C.zf) goto L_1221dcc6;
  /* 1221dc46 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221dc4a je 0x1221dc7a */
  if (C.zf) goto L_1221dc7a;
  /* 1221dc4c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221dc50 jne 0x1221dc69 */
  if (!C.zf) goto L_1221dc69;
  /* 1221dc52 call 0x1221d000 */
  push32(0x1221dc57u); f_1221d000();
  /* 1221dc57 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1221dc5d call 0x1221d010 */
  push32(0x1221dc62u); f_1221d010();
  /* 1221dc62 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221dc65 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1221dc67 jmp 0x1221dc75 */
  goto L_1221dc75;
L_1221dc69:;
  /* 1221dc69 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221dc6c push edx */
  push32((uint32_t)(EDX));
  /* 1221dc6d call 0x1221cf60 */
  push32(0x1221dc72u); f_1221cf60();
  /* 1221dc72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1221dc75:;
  /* 1221dc75 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1221dc78 jmp 0x1221dccf */
  goto L_1221dccf;
L_1221dc7a:;
  /* 1221dc7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221dc7d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1221dc80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221dc83 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1221dc86 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221dc89 mov edx, dword ptr [eax*4 + 0x12241fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12241fa0)));
  /* 1221dc90 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1221dc95 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1221dc98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221dc9a je 0x1221dcab */
  if (C.zf) goto L_1221dcab;
  /* 1221dc9c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221dc9f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1221dca2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221dca5 jne 0x1221dcab */
  if (!C.zf) goto L_1221dcab;
  /* 1221dca7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221dca9 jmp 0x1221dccf */
  goto L_1221dccf;
L_1221dcab:;
  /* 1221dcab call 0x1221d000 */
  push32(0x1221dcb0u); f_1221d000();
  /* 1221dcb0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 1221dcb6 call 0x1221d010 */
  push32(0x1221dcbbu); f_1221d010();
  /* 1221dcbb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1221dcc1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1221dcc4 jmp 0x1221dccf */
  goto L_1221dccf;
L_1221dcc6:;
  /* 1221dcc6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221dcc9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1221dccf:;
  /* 1221dccf mov esp, ebp */
  ESP = (EBP);
  /* 1221dcd1 pop ebp */
  EBP = (pop32());
  /* 1221dcd2 ret  */
  ESPCHK(0x1221da60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dce0 @ 0x1221dce0 (199 bytes, 68 insns) */
void f_1221dce0(void) {
  FTRACE(0x1221dce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221dce0 push ebp */
  push32((uint32_t)(EBP));
  /* 1221dce1 mov ebp, esp */
  EBP = (ESP);
  /* 1221dce3 push ecx */
  push32((uint32_t)(ECX));
  /* 1221dce4 push ebx */
  push32((uint32_t)(EBX));
  /* 1221dce5 push esi */
  push32((uint32_t)(ESI));
  /* 1221dce6 push edi */
  push32((uint32_t)(EDI));
L_1221dce7:;
  /* 1221dce7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221dceb jne 0x1221dd0b */
  if (!C.zf) goto L_1221dd0b;
  /* 1221dced push 0x1223c148 */
  push32((uint32_t)(0x1223c148u));
  /* 1221dcf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221dcf4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1221dcf6 push 0x1223c218 */
  push32((uint32_t)(0x1223c218u));
  /* 1221dcfb push 2 */
  push32((uint32_t)(0x2u));
  /* 1221dcfd call 0x122141f0 */
  push32(0x1221dd02u); f_122141f0();
  /* 1221dd02 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221dd05 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221dd08 jne 0x1221dd0b */
  if (!C.zf) goto L_1221dd0b;
  /* 1221dd0a int3  */
  x86_unimpl("int3 @ 0x1221dd0a");
L_1221dd0b:;
  /* 1221dd0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221dd0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221dd0f jne 0x1221dce7 */
  if (!C.zf) goto L_1221dce7;
  /* 1221dd11 mov ecx, dword ptr [0x122407ec] */
  ECX = (r32((uint32_t)(0x122407ec)));
  /* 1221dd17 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221dd1a mov dword ptr [0x122407ec], ecx */
  w32((uint32_t)(0x122407ec), (ECX));
  /* 1221dd20 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221dd23 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1221dd26 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1221dd28 push 0x1223c218 */
  push32((uint32_t)(0x1223c218u));
  /* 1221dd2d push 2 */
  push32((uint32_t)(0x2u));
  /* 1221dd2f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1221dd34 call 0x12215130 */
  push32(0x1221dd39u); f_12215130();
  /* 1221dd39 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221dd3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221dd3f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1221dd42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221dd45 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221dd49 je 0x1221dd66 */
  if (C.zf) goto L_1221dd66;
  /* 1221dd4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221dd4e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1221dd51 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1221dd54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221dd57 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1221dd5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221dd5d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 1221dd64 jmp 0x1221dd8b */
  goto L_1221dd8b;
L_1221dd66:;
  /* 1221dd66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221dd69 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1221dd6c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1221dd6f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221dd72 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1221dd75 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221dd78 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221dd7b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221dd7e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1221dd81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221dd84 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1221dd8b:;
  /* 1221dd8b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221dd8e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221dd91 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1221dd94 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1221dd96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221dd99 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1221dda0 pop edi */
  EDI = (pop32());
  /* 1221dda1 pop esi */
  ESI = (pop32());
  /* 1221dda2 pop ebx */
  EBX = (pop32());
  /* 1221dda3 mov esp, ebp */
  ESP = (EBP);
  /* 1221dda5 pop ebp */
  EBP = (pop32());
  /* 1221dda6 ret  */
  ESPCHK(0x1221dce0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x1221ddb0 (50 bytes, 17 insns) */
void f_1221ddb0(void) {
  FTRACE(0x1221ddb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221ddb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1221ddb1 mov ebp, esp */
  EBP = (ESP);
  /* 1221ddb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221ddb6 cmp eax, dword ptr [0x122420dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122420dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ddbc jb 0x1221ddc2 */
  if (C.cf) goto L_1221ddc2;
  /* 1221ddbe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221ddc0 jmp 0x1221dde0 */
  goto L_1221dde0;
L_1221ddc2:;
  /* 1221ddc2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221ddc5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1221ddc8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221ddcb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1221ddce imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221ddd1 mov eax, dword ptr [ecx*4 + 0x12241fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12241fa0)));
  /* 1221ddd8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1221dddd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_1221dde0:;
  /* 1221dde0 pop ebp */
  EBP = (pop32());
  /* 1221dde1 ret  */
  ESPCHK(0x1221ddb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ddf0 @ 0x1221ddf0 (300 bytes, 80 insns) */
void f_1221ddf0(void) {
  FTRACE(0x1221ddf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221ddf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1221ddf1 mov ebp, esp */
  EBP = (ESP);
  /* 1221ddf3 push ecx */
  push32((uint32_t)(ECX));
  /* 1221ddf4 cmp dword ptr [0x12241ca0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12241ca0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ddfb jne 0x1221de09 */
  if (!C.zf) goto L_1221de09;
  /* 1221ddfd mov dword ptr [0x12241ca0], 0x200 */
  w32((uint32_t)(0x12241ca0), (0x200u));
  /* 1221de07 jmp 0x1221de1c */
  goto L_1221de1c;
L_1221de09:;
  /* 1221de09 cmp dword ptr [0x12241ca0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x12241ca0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221de10 jge 0x1221de1c */
  if ((C.sf==C.of)) goto L_1221de1c;
  /* 1221de12 mov dword ptr [0x12241ca0], 0x14 */
  w32((uint32_t)(0x12241ca0), (0x14u));
L_1221de1c:;
  /* 1221de1c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 1221de21 push 0x1223c224 */
  push32((uint32_t)(0x1223c224u));
  /* 1221de26 push 2 */
  push32((uint32_t)(0x2u));
  /* 1221de28 push 4 */
  push32((uint32_t)(0x4u));
  /* 1221de2a mov eax, dword ptr [0x12241ca0] */
  EAX = (r32((uint32_t)(0x12241ca0)));
  /* 1221de2f push eax */
  push32((uint32_t)(EAX));
  /* 1221de30 call 0x12215540 */
  push32(0x1221de35u); f_12215540();
  /* 1221de35 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221de38 mov dword ptr [0x12240960], eax */
  w32((uint32_t)(0x12240960), (EAX));
  /* 1221de3d cmp dword ptr [0x12240960], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12240960))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221de44 jne 0x1221de85 */
  if (!C.zf) goto L_1221de85;
  /* 1221de46 mov dword ptr [0x12241ca0], 0x14 */
  w32((uint32_t)(0x12241ca0), (0x14u));
  /* 1221de50 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 1221de55 push 0x1223c224 */
  push32((uint32_t)(0x1223c224u));
  /* 1221de5a push 2 */
  push32((uint32_t)(0x2u));
  /* 1221de5c push 4 */
  push32((uint32_t)(0x4u));
  /* 1221de5e mov ecx, dword ptr [0x12241ca0] */
  ECX = (r32((uint32_t)(0x12241ca0)));
  /* 1221de64 push ecx */
  push32((uint32_t)(ECX));
  /* 1221de65 call 0x12215540 */
  push32(0x1221de6au); f_12215540();
  /* 1221de6a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221de6d mov dword ptr [0x12240960], eax */
  w32((uint32_t)(0x12240960), (EAX));
  /* 1221de72 cmp dword ptr [0x12240960], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12240960))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221de79 jne 0x1221de85 */
  if (!C.zf) goto L_1221de85;
  /* 1221de7b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1221de7d call 0x122140a0 */
  push32(0x1221de82u); f_122140a0();
  /* 1221de82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1221de85:;
  /* 1221de85 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1221de8c jmp 0x1221de97 */
  goto L_1221de97;
L_1221de8e:;
  /* 1221de8e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221de91 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221de94 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1221de97:;
  /* 1221de97 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221de9b jge 0x1221deb6 */
  if ((C.sf==C.of)) goto L_1221deb6;
  /* 1221de9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221dea0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1221dea3 add eax, 0x1223f120 */
  { uint32_t _a=(EAX),_b=(0x1223f120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221dea8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221deab mov edx, dword ptr [0x12240960] */
  EDX = (r32((uint32_t)(0x12240960)));
  /* 1221deb1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1221deb4 jmp 0x1221de8e */
  goto L_1221de8e;
L_1221deb6:;
  /* 1221deb6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1221debd jmp 0x1221dec8 */
  goto L_1221dec8;
L_1221debf:;
  /* 1221debf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221dec2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221dec5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1221dec8:;
  /* 1221dec8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221decc jge 0x1221df18 */
  if ((C.sf==C.of)) goto L_1221df18;
  /* 1221dece mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221ded1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1221ded4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221ded7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1221deda imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221dedd mov eax, dword ptr [ecx*4 + 0x12241fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12241fa0)));
  /* 1221dee4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221dee8 je 0x1221df06 */
  if (C.zf) goto L_1221df06;
  /* 1221deea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221deed sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1221def0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221def3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1221def6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221def9 mov eax, dword ptr [ecx*4 + 0x12241fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12241fa0)));
  /* 1221df00 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221df04 jne 0x1221df16 */
  if (!C.zf) goto L_1221df16;
L_1221df06:;
  /* 1221df06 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221df09 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1221df0c mov dword ptr [ecx + 0x1223f130], 0xffffffff */
  w32((uint32_t)(ECX + 0x1223f130), (0xffffffffu));
L_1221df16:;
  /* 1221df16 jmp 0x1221debf */
  goto L_1221debf;
L_1221df18:;
  /* 1221df18 mov esp, ebp */
  ESP = (EBP);
  /* 1221df1a pop ebp */
  EBP = (pop32());
  /* 1221df1b ret  */
  ESPCHK(0x1221ddf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df20 @ 0x1221df20 (26 bytes, 9 insns) */
void f_1221df20(void) {
  FTRACE(0x1221df20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221df20 push ebp */
  push32((uint32_t)(EBP));
  /* 1221df21 mov ebp, esp */
  EBP = (ESP);
  /* 1221df23 call 0x1221eb20 */
  push32(0x1221df28u); f_1221eb20();
  /* 1221df28 movsx eax, byte ptr [0x12240604] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x12240604))));
  /* 1221df2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221df31 je 0x1221df38 */
  if (C.zf) goto L_1221df38;
  /* 1221df33 call 0x1221e8e0 */
  push32(0x1221df38u); f_1221e8e0();
L_1221df38:;
  /* 1221df38 pop ebp */
  EBP = (pop32());
  /* 1221df39 ret  */
  ESPCHK(0x1221df20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df40 @ 0x1221df40 (61 bytes, 20 insns) */
void f_1221df40(void) {
  FTRACE(0x1221df40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221df40 push ebp */
  push32((uint32_t)(EBP));
  /* 1221df41 mov ebp, esp */
  EBP = (ESP);
  /* 1221df43 cmp dword ptr [ebp + 8], 0x1223f120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1223f120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221df4a jb 0x1221df6e */
  if (C.cf) goto L_1221df6e;
  /* 1221df4c cmp dword ptr [ebp + 8], 0x1223f380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1223f380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221df53 ja 0x1221df6e */
  if ((!C.cf&&!C.zf)) goto L_1221df6e;
  /* 1221df55 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221df58 sub eax, 0x1223f120 */
  { uint32_t _a=(EAX),_b=(0x1223f120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221df5d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1221df60 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221df63 push eax */
  push32((uint32_t)(EAX));
  /* 1221df64 call 0x12218b30 */
  push32(0x1221df69u); f_12218b30();
  /* 1221df69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221df6c jmp 0x1221df7b */
  goto L_1221df7b;
L_1221df6e:;
  /* 1221df6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221df71 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221df74 push ecx */
  push32((uint32_t)(ECX));
  /* 1221df75 call dword ptr [0x12243338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243338))), 0x1221df7bu);
L_1221df7b:;
  /* 1221df7b pop ebp */
  EBP = (pop32());
  /* 1221df7c ret  */
  ESPCHK(0x1221df40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df80 @ 0x1221df80 (41 bytes, 16 insns) */
void f_1221df80(void) {
  FTRACE(0x1221df80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221df80 push ebp */
  push32((uint32_t)(EBP));
  /* 1221df81 mov ebp, esp */
  EBP = (ESP);
  /* 1221df83 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221df87 jge 0x1221df9a */
  if ((C.sf==C.of)) goto L_1221df9a;
  /* 1221df89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221df8c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221df8f push eax */
  push32((uint32_t)(EAX));
  /* 1221df90 call 0x12218b30 */
  push32(0x1221df95u); f_12218b30();
  /* 1221df95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221df98 jmp 0x1221dfa7 */
  goto L_1221dfa7;
L_1221df9a:;
  /* 1221df9a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221df9d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221dfa0 push ecx */
  push32((uint32_t)(ECX));
  /* 1221dfa1 call dword ptr [0x12243338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243338))), 0x1221dfa7u);
L_1221dfa7:;
  /* 1221dfa7 pop ebp */
  EBP = (pop32());
  /* 1221dfa8 ret  */
  ESPCHK(0x1221df80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dfb0 @ 0x1221dfb0 (61 bytes, 20 insns) */
void f_1221dfb0(void) {
  FTRACE(0x1221dfb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221dfb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1221dfb1 mov ebp, esp */
  EBP = (ESP);
  /* 1221dfb3 cmp dword ptr [ebp + 8], 0x1223f120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1223f120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221dfba jb 0x1221dfde */
  if (C.cf) goto L_1221dfde;
  /* 1221dfbc cmp dword ptr [ebp + 8], 0x1223f380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1223f380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221dfc3 ja 0x1221dfde */
  if ((!C.cf&&!C.zf)) goto L_1221dfde;
  /* 1221dfc5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221dfc8 sub eax, 0x1223f120 */
  { uint32_t _a=(EAX),_b=(0x1223f120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221dfcd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1221dfd0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221dfd3 push eax */
  push32((uint32_t)(EAX));
  /* 1221dfd4 call 0x12218bd0 */
  push32(0x1221dfd9u); f_12218bd0();
  /* 1221dfd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221dfdc jmp 0x1221dfeb */
  goto L_1221dfeb;
L_1221dfde:;
  /* 1221dfde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221dfe1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221dfe4 push ecx */
  push32((uint32_t)(ECX));
  /* 1221dfe5 call dword ptr [0x12243334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243334))), 0x1221dfebu);
L_1221dfeb:;
  /* 1221dfeb pop ebp */
  EBP = (pop32());
  /* 1221dfec ret  */
  ESPCHK(0x1221dfb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dff0 @ 0x1221dff0 (41 bytes, 16 insns) */
void f_1221dff0(void) {
  FTRACE(0x1221dff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221dff0 push ebp */
  push32((uint32_t)(EBP));
  /* 1221dff1 mov ebp, esp */
  EBP = (ESP);
  /* 1221dff3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221dff7 jge 0x1221e00a */
  if ((C.sf==C.of)) goto L_1221e00a;
  /* 1221dff9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221dffc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221dfff push eax */
  push32((uint32_t)(EAX));
  /* 1221e000 call 0x12218bd0 */
  push32(0x1221e005u); f_12218bd0();
  /* 1221e005 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221e008 jmp 0x1221e017 */
  goto L_1221e017;
L_1221e00a:;
  /* 1221e00a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221e00d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221e010 push ecx */
  push32((uint32_t)(ECX));
  /* 1221e011 call dword ptr [0x12243334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243334))), 0x1221e017u);
L_1221e017:;
  /* 1221e017 pop ebp */
  EBP = (pop32());
  /* 1221e018 ret  */
  ESPCHK(0x1221dff0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e020 @ 0x1221e020 (119 bytes, 34 insns) */
void f_1221e020(void) {
  FTRACE(0x1221e020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221e020 push ebp */
  push32((uint32_t)(EBP));
  /* 1221e021 mov ebp, esp */
  EBP = (ESP);
  /* 1221e023 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221e026 push 0x1224095c */
  push32((uint32_t)(0x1224095cu));
  /* 1221e02b call dword ptr [0x12243388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243388))), 0x1221e031u);
  /* 1221e031 cmp dword ptr [0x1224094c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1224094c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221e038 je 0x1221e058 */
  if (C.zf) goto L_1221e058;
  /* 1221e03a push 0x1224095c */
  push32((uint32_t)(0x1224095cu));
  /* 1221e03f call dword ptr [0x12243378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243378))), 0x1221e045u);
  /* 1221e045 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1221e047 call 0x12218b30 */
  push32(0x1221e04cu); f_12218b30();
  /* 1221e04c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221e04f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1221e056 jmp 0x1221e05f */
  goto L_1221e05f;
L_1221e058:;
  /* 1221e058 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1221e05f:;
  /* 1221e05f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 1221e063 push eax */
  push32((uint32_t)(EAX));
  /* 1221e064 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221e067 push ecx */
  push32((uint32_t)(ECX));
  /* 1221e068 call 0x1221e0a0 */
  push32(0x1221e06du); f_1221e0a0();
  /* 1221e06d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221e070 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1221e073 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221e077 je 0x1221e085 */
  if (C.zf) goto L_1221e085;
  /* 1221e079 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1221e07b call 0x12218bd0 */
  push32(0x1221e080u); f_12218bd0();
  /* 1221e080 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221e083 jmp 0x1221e090 */
  goto L_1221e090;
L_1221e085:;
  /* 1221e085 push 0x1224095c */
  push32((uint32_t)(0x1224095cu));
  /* 1221e08a call dword ptr [0x12243378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243378))), 0x1221e090u);
L_1221e090:;
  /* 1221e090 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221e093 mov esp, ebp */
  ESP = (EBP);
  /* 1221e095 pop ebp */
  EBP = (pop32());
  /* 1221e096 ret  */
  ESPCHK(0x1221e020u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0a0 @ 0x1221e0a0 (160 bytes, 50 insns) */
void f_1221e0a0(void) {
  FTRACE(0x1221e0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221e0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1221e0a1 mov ebp, esp */
  EBP = (ESP);
  /* 1221e0a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221e0a6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221e0aa jne 0x1221e0b3 */
  if (!C.zf) goto L_1221e0b3;
  /* 1221e0ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221e0ae jmp 0x1221e13c */
  goto L_1221e13c;
L_1221e0b3:;
  /* 1221e0b3 cmp dword ptr [0x122407d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122407d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221e0ba jne 0x1221e0ea */
  if (!C.zf) goto L_1221e0ea;
  /* 1221e0bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221e0bf and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1221e0c4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221e0c9 jle 0x1221e0db */
  if ((C.zf||C.sf!=C.of)) goto L_1221e0db;
  /* 1221e0cb call 0x1221d000 */
  push32(0x1221e0d0u); f_1221d000();
  /* 1221e0d0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1221e0d6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1221e0d9 jmp 0x1221e13c */
  goto L_1221e13c;
L_1221e0db:;
  /* 1221e0db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221e0de mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 1221e0e1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1221e0e3 mov eax, 1 */
  EAX = (0x1u);
  /* 1221e0e8 jmp 0x1221e13c */
  goto L_1221e13c;
L_1221e0ea:;
  /* 1221e0ea mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1221e0f1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1221e0f4 push eax */
  push32((uint32_t)(EAX));
  /* 1221e0f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221e0f7 mov ecx, dword ptr [0x1223eea4] */
  ECX = (r32((uint32_t)(0x1223eea4)));
  /* 1221e0fd push ecx */
  push32((uint32_t)(ECX));
  /* 1221e0fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221e101 push edx */
  push32((uint32_t)(EDX));
  /* 1221e102 push 1 */
  push32((uint32_t)(0x1u));
  /* 1221e104 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1221e107 push eax */
  push32((uint32_t)(EAX));
  /* 1221e108 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1221e10d mov ecx, dword ptr [0x122407e0] */
  ECX = (r32((uint32_t)(0x122407e0)));
  /* 1221e113 push ecx */
  push32((uint32_t)(ECX));
  /* 1221e114 call dword ptr [0x1224335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224335c))), 0x1221e11au);
  /* 1221e11a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1221e11d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221e121 je 0x1221e129 */
  if (C.zf) goto L_1221e129;
  /* 1221e123 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221e127 je 0x1221e139 */
  if (C.zf) goto L_1221e139;
L_1221e129:;
  /* 1221e129 call 0x1221d000 */
  push32(0x1221e12eu); f_1221d000();
  /* 1221e12e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1221e134 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1221e137 jmp 0x1221e13c */
  goto L_1221e13c;
L_1221e139:;
  /* 1221e139 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1221e13c:;
  /* 1221e13c mov esp, ebp */
  ESP = (EBP);
  /* 1221e13e pop ebp */
  EBP = (pop32());
  /* 1221e13f ret  */
  ESPCHK(0x1221e0a0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1221e140 (32 bytes, 18 insns) */
void f_1221e140(void) {
  FTRACE(0x1221e140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221e140 push ebp */
  push32((uint32_t)(EBP));
  /* 1221e141 mov ebp, esp */
  EBP = (ESP);
  /* 1221e143 push ebx */
  push32((uint32_t)(EBX));
  /* 1221e144 push esi */
  push32((uint32_t)(ESI));
  /* 1221e145 push edi */
  push32((uint32_t)(EDI));
  /* 1221e146 push ebp */
  push32((uint32_t)(EBP));
  /* 1221e147 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221e149 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221e14b push 0x1221e158 */
  push32((uint32_t)(0x1221e158u));
  /* 1221e150 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1221e153 call 0x1222588c */
  push32(0x1221e158u); f_1222588c();
  /* 1221e158 pop ebp */
  EBP = (pop32());
  /* 1221e159 pop edi */
  EDI = (pop32());
  /* 1221e15a pop esi */
  ESI = (pop32());
  /* 1221e15b pop ebx */
  EBX = (pop32());
  /* 1221e15c mov esp, ebp */
  ESP = (EBP);
  /* 1221e15e pop ebp */
  EBP = (pop32());
  /* 1221e15f ret  */
  ESPCHK(0x1221e140u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1221e182 (104 bytes, 33 insns) */
void f_1221e182(void) {
  FTRACE(0x1221e182u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221e182 push ebx */
  push32((uint32_t)(EBX));
  /* 1221e183 push esi */
  push32((uint32_t)(ESI));
  /* 1221e184 push edi */
  push32((uint32_t)(EDI));
  /* 1221e185 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1221e189 push eax */
  push32((uint32_t)(EAX));
  /* 1221e18a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1221e18c push 0x1221e160 */
  push32((uint32_t)(0x1221e160u));
  /* 1221e191 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1221e198 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1221e19f:;
  /* 1221e19f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1221e1a3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1221e1a6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1221e1a9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221e1ac je 0x1221e1dc */
  if (C.zf) goto L_1221e1dc;
  /* 1221e1ae cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221e1b2 je 0x1221e1dc */
  if (C.zf) goto L_1221e1dc;
  /* 1221e1b4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1221e1b7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1221e1ba mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1221e1be mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1221e1c1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221e1c6 jne 0x1221e1da */
  if (!C.zf) goto L_1221e1da;
  /* 1221e1c8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1221e1cd mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1221e1d1 call 0x1221e216 */
  push32(0x1221e1d6u); f_1221e216();
  /* 1221e1d6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1221e1dau);
L_1221e1da:;
  /* 1221e1da jmp 0x1221e19f */
  goto L_1221e19f;
L_1221e1dc:;
  /* 1221e1dc pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1221e1e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221e1e6 pop edi */
  EDI = (pop32());
  /* 1221e1e7 pop esi */
  ESI = (pop32());
  /* 1221e1e8 pop ebx */
  EBX = (pop32());
  /* 1221e1e9 ret  */
  ESPCHK(0x1221e182u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e216 @ 0x1221e216 (24 bytes, 10 insns) */
void f_1221e216(void) {
  FTRACE(0x1221e216u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221e216 push ebx */
  push32((uint32_t)(EBX));
  /* 1221e217 push ecx */
  push32((uint32_t)(ECX));
  /* 1221e218 mov ebx, 0x1223f3b8 */
  EBX = (0x1223f3b8u);
  /* 1221e21d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221e220 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1221e223 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1221e226 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1221e229 pop ecx */
  ECX = (pop32());
  /* 1221e22a pop ebx */
  EBX = (pop32());
  /* 1221e22b ret 4 */
  ESPCHK(0x1221e216u, _esp0);
  ESP += 8; return;
}

/* FUN_1000e2f5 @ 0x1221e2f5 (27 bytes, 11 insns) */
void f_1221e2f5(void) {
  FTRACE(0x1221e2f5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221e2f5 push ebp */
  push32((uint32_t)(EBP));
  /* 1221e2f6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1221e2fa mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1221e2fc mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1221e2ff push eax */
  push32((uint32_t)(EAX));
  /* 1221e300 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1221e303 push eax */
  push32((uint32_t)(EAX));
  /* 1221e304 call 0x1221e182 */
  push32(0x1221e309u); f_1221e182();
  /* 1221e309 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221e30c pop ebp */
  EBP = (pop32());
  /* 1221e30d ret 4 */
  ESPCHK(0x1221e2f5u, _esp0);
  ESP += 8; return;
}

/* FUN_1000e310 @ 0x1221e310 (482 bytes, 138 insns) */
void f_1221e310(void) {
  FTRACE(0x1221e310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221e310 push ebp */
  push32((uint32_t)(EBP));
  /* 1221e311 mov ebp, esp */
  EBP = (ESP);
  /* 1221e313 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221e316 push esi */
  push32((uint32_t)(ESI));
  /* 1221e317 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1221e31e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1221e320 call 0x12218b30 */
  push32(0x1221e325u); f_12218b30();
  /* 1221e325 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221e328 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1221e32f jmp 0x1221e33a */
  goto L_1221e33a;
L_1221e331:;
  /* 1221e331 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221e334 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221e337 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1221e33a:;
  /* 1221e33a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221e33e jge 0x1221e4e0 */
  if ((C.sf==C.of)) goto L_1221e4e0;
  /* 1221e344 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221e347 cmp dword ptr [ecx*4 + 0x12241fa0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12241fa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221e34f je 0x1221e446 */
  if (C.zf) goto L_1221e446;
  /* 1221e355 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221e358 mov eax, dword ptr [edx*4 + 0x12241fa0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12241fa0)));
  /* 1221e35f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1221e362 jmp 0x1221e36d */
  goto L_1221e36d;
L_1221e364:;
  /* 1221e364 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221e367 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221e36a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1221e36d:;
  /* 1221e36d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221e370 mov eax, dword ptr [edx*4 + 0x12241fa0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12241fa0)));
  /* 1221e377 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221e37c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221e37f jae 0x1221e436 */
  if (!C.cf) goto L_1221e436;
  /* 1221e385 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221e388 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1221e38c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1221e38f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221e391 jne 0x1221e431 */
  if (!C.zf) goto L_1221e431;
  /* 1221e397 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221e39a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221e39e jne 0x1221e3d9 */
  if (!C.zf) goto L_1221e3d9;
  /* 1221e3a0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1221e3a2 call 0x12218b30 */
  push32(0x1221e3a7u); f_12218b30();
  /* 1221e3a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221e3aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221e3ad cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221e3b1 jne 0x1221e3cf */
  if (!C.zf) goto L_1221e3cf;
  /* 1221e3b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221e3b6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221e3b9 push edx */
  push32((uint32_t)(EDX));
  /* 1221e3ba call dword ptr [0x12243348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243348))), 0x1221e3c0u);
  /* 1221e3c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221e3c3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1221e3c6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221e3c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221e3cc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1221e3cf:;
  /* 1221e3cf push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1221e3d1 call 0x12218bd0 */
  push32(0x1221e3d6u); f_12218bd0();
  /* 1221e3d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1221e3d9:;
  /* 1221e3d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221e3dc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221e3df push eax */
  push32((uint32_t)(EAX));
  /* 1221e3e0 call dword ptr [0x12243338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243338))), 0x1221e3e6u);
  /* 1221e3e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221e3e9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1221e3ed and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1221e3f0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221e3f2 je 0x1221e406 */
  if (C.zf) goto L_1221e406;
  /* 1221e3f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221e3f7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221e3fa push eax */
  push32((uint32_t)(EAX));
  /* 1221e3fb call dword ptr [0x12243334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243334))), 0x1221e401u);
  /* 1221e401 jmp 0x1221e364 */
  goto L_1221e364;
L_1221e406:;
  /* 1221e406 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221e409 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1221e40f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221e412 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1221e415 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221e418 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221e41b sub eax, dword ptr [edx*4 + 0x12241fa0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x12241fa0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221e422 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1221e423 mov esi, 0x24 */
  ESI = (0x24u);
  /* 1221e428 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1221e42a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221e42c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1221e42f jmp 0x1221e436 */
  goto L_1221e436;
L_1221e431:;
  /* 1221e431 jmp 0x1221e364 */
  goto L_1221e364;
L_1221e436:;
  /* 1221e436 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221e43a je 0x1221e441 */
  if (C.zf) goto L_1221e441;
  /* 1221e43c jmp 0x1221e4e0 */
  goto L_1221e4e0;
L_1221e441:;
  /* 1221e441 jmp 0x1221e4db */
  goto L_1221e4db;
L_1221e446:;
  /* 1221e446 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1221e448 push 0x1223c22c */
  push32((uint32_t)(0x1223c22cu));
  /* 1221e44d push 2 */
  push32((uint32_t)(0x2u));
  /* 1221e44f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1221e454 call 0x12215130 */
  push32(0x1221e459u); f_12215130();
  /* 1221e459 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221e45c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1221e45f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221e463 je 0x1221e4d9 */
  if (C.zf) goto L_1221e4d9;
  /* 1221e465 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221e468 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221e46b mov dword ptr [eax*4 + 0x12241fa0], ecx */
  w32((uint32_t)(EAX*4 + 0x12241fa0), (ECX));
  /* 1221e472 mov edx, dword ptr [0x122420dc] */
  EDX = (r32((uint32_t)(0x122420dc)));
  /* 1221e478 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221e47b mov dword ptr [0x122420dc], edx */
  w32((uint32_t)(0x122420dc), (EDX));
  /* 1221e481 jmp 0x1221e48c */
  goto L_1221e48c;
L_1221e483:;
  /* 1221e483 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221e486 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221e489 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1221e48c:;
  /* 1221e48c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221e48f mov edx, dword ptr [ecx*4 + 0x12241fa0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12241fa0)));
  /* 1221e496 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221e49c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221e49f jae 0x1221e4c4 */
  if (!C.cf) goto L_1221e4c4;
  /* 1221e4a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221e4a4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1221e4a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221e4ab mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1221e4b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221e4b4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1221e4b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221e4bb mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1221e4c2 jmp 0x1221e483 */
  goto L_1221e483;
L_1221e4c4:;
  /* 1221e4c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221e4c7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1221e4ca mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1221e4cd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221e4d0 push edx */
  push32((uint32_t)(EDX));
  /* 1221e4d1 call 0x1221e820 */
  push32(0x1221e4d6u); f_1221e820();
  /* 1221e4d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1221e4d9:;
  /* 1221e4d9 jmp 0x1221e4e0 */
  goto L_1221e4e0;
L_1221e4db:;
  /* 1221e4db jmp 0x1221e331 */
  goto L_1221e331;
L_1221e4e0:;
  /* 1221e4e0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1221e4e2 call 0x12218bd0 */
  push32(0x1221e4e7u); f_12218bd0();
  /* 1221e4e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221e4ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221e4ed pop esi */
  ESI = (pop32());
  /* 1221e4ee mov esp, ebp */
  ESP = (EBP);
  /* 1221e4f0 pop ebp */
  EBP = (pop32());
  /* 1221e4f1 ret  */
  ESPCHK(0x1221e310u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x1221e500 (183 bytes, 57 insns) */
void f_1221e500(void) {
  FTRACE(0x1221e500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221e500 push ebp */
  push32((uint32_t)(EBP));
  /* 1221e501 mov ebp, esp */
  EBP = (ESP);
  /* 1221e503 push ecx */
  push32((uint32_t)(ECX));
  /* 1221e504 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221e507 cmp eax, dword ptr [0x122420dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122420dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221e50d jae 0x1221e59a */
  if (!C.cf) goto L_1221e59a;
  /* 1221e513 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221e516 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1221e519 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221e51c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1221e51f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221e522 mov eax, dword ptr [ecx*4 + 0x12241fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12241fa0)));
  /* 1221e529 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221e52d jne 0x1221e59a */
  if (!C.zf) goto L_1221e59a;
  /* 1221e52f cmp dword ptr [0x122405c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x122405c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221e536 jne 0x1221e57a */
  if (!C.zf) goto L_1221e57a;
  /* 1221e538 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221e53b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1221e53e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221e542 je 0x1221e552 */
  if (C.zf) goto L_1221e552;
  /* 1221e544 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221e548 je 0x1221e560 */
  if (C.zf) goto L_1221e560;
  /* 1221e54a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221e54e je 0x1221e56e */
  if (C.zf) goto L_1221e56e;
  /* 1221e550 jmp 0x1221e57a */
  goto L_1221e57a;
L_1221e552:;
  /* 1221e552 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221e555 push edx */
  push32((uint32_t)(EDX));
  /* 1221e556 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1221e558 call dword ptr [0x12243300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243300))), 0x1221e55eu);
  /* 1221e55e jmp 0x1221e57a */
  goto L_1221e57a;
L_1221e560:;
  /* 1221e560 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221e563 push eax */
  push32((uint32_t)(EAX));
  /* 1221e564 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1221e566 call dword ptr [0x12243300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243300))), 0x1221e56cu);
  /* 1221e56c jmp 0x1221e57a */
  goto L_1221e57a;
L_1221e56e:;
  /* 1221e56e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221e571 push ecx */
  push32((uint32_t)(ECX));
  /* 1221e572 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1221e574 call dword ptr [0x12243300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243300))), 0x1221e57au);
L_1221e57a:;
  /* 1221e57a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221e57d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1221e580 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221e583 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1221e586 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221e589 mov ecx, dword ptr [edx*4 + 0x12241fa0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12241fa0)));
  /* 1221e590 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221e593 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 1221e596 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221e598 jmp 0x1221e5b3 */
  goto L_1221e5b3;
L_1221e59a:;
  /* 1221e59a call 0x1221d000 */
  push32(0x1221e59fu); f_1221d000();
  /* 1221e59f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1221e5a5 call 0x1221d010 */
  push32(0x1221e5aau); f_1221d010();
  /* 1221e5aa mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1221e5b0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1221e5b3:;
  /* 1221e5b3 mov esp, ebp */
  ESP = (EBP);
  /* 1221e5b5 pop ebp */
  EBP = (pop32());
  /* 1221e5b6 ret  */
  ESPCHK(0x1221e500u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5c0 @ 0x1221e5c0 (216 bytes, 63 insns) */
void f_1221e5c0(void) {
  FTRACE(0x1221e5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221e5c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1221e5c1 mov ebp, esp */
  EBP = (ESP);
  /* 1221e5c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1221e5c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221e5c7 cmp eax, dword ptr [0x122420dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122420dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221e5cd jae 0x1221e67b */
  if (!C.cf) goto L_1221e67b;
  /* 1221e5d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221e5d6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1221e5d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221e5dc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1221e5df imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221e5e2 mov eax, dword ptr [ecx*4 + 0x12241fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12241fa0)));
  /* 1221e5e9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1221e5ee and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1221e5f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1221e5f3 je 0x1221e67b */
  if (C.zf) goto L_1221e67b;
  /* 1221e5f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221e5fc sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1221e5ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221e602 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1221e605 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221e608 mov ecx, dword ptr [edx*4 + 0x12241fa0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12241fa0)));
  /* 1221e60f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221e613 je 0x1221e67b */
  if (C.zf) goto L_1221e67b;
  /* 1221e615 cmp dword ptr [0x122405c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x122405c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221e61c jne 0x1221e65a */
  if (!C.zf) goto L_1221e65a;
  /* 1221e61e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221e621 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1221e624 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221e628 je 0x1221e638 */
  if (C.zf) goto L_1221e638;
  /* 1221e62a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221e62e je 0x1221e644 */
  if (C.zf) goto L_1221e644;
  /* 1221e630 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221e634 je 0x1221e650 */
  if (C.zf) goto L_1221e650;
  /* 1221e636 jmp 0x1221e65a */
  goto L_1221e65a;
L_1221e638:;
  /* 1221e638 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221e63a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1221e63c call dword ptr [0x12243300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243300))), 0x1221e642u);
  /* 1221e642 jmp 0x1221e65a */
  goto L_1221e65a;
L_1221e644:;
  /* 1221e644 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221e646 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1221e648 call dword ptr [0x12243300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243300))), 0x1221e64eu);
  /* 1221e64e jmp 0x1221e65a */
  goto L_1221e65a;
L_1221e650:;
  /* 1221e650 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221e652 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1221e654 call dword ptr [0x12243300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243300))), 0x1221e65au);
L_1221e65a:;
  /* 1221e65a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221e65d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1221e660 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221e663 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1221e666 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221e669 mov edx, dword ptr [eax*4 + 0x12241fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12241fa0)));
  /* 1221e670 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 1221e677 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221e679 jmp 0x1221e694 */
  goto L_1221e694;
L_1221e67b:;
  /* 1221e67b call 0x1221d000 */
  push32(0x1221e680u); f_1221d000();
  /* 1221e680 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1221e686 call 0x1221d010 */
  push32(0x1221e68bu); f_1221d010();
  /* 1221e68b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1221e691 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1221e694:;
  /* 1221e694 mov esp, ebp */
  ESP = (EBP);
  /* 1221e696 pop ebp */
  EBP = (pop32());
  /* 1221e697 ret  */
  ESPCHK(0x1221e5c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e6a0 @ 0x1221e6a0 (102 bytes, 30 insns) */
void f_1221e6a0(void) {
  FTRACE(0x1221e6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221e6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1221e6a1 mov ebp, esp */
  EBP = (ESP);
  /* 1221e6a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221e6a6 cmp eax, dword ptr [0x122420dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122420dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221e6ac jae 0x1221e6eb */
  if (!C.cf) goto L_1221e6eb;
  /* 1221e6ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221e6b1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1221e6b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221e6b7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1221e6ba imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221e6bd mov eax, dword ptr [ecx*4 + 0x12241fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12241fa0)));
  /* 1221e6c4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1221e6c9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1221e6cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1221e6ce je 0x1221e6eb */
  if (C.zf) goto L_1221e6eb;
  /* 1221e6d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221e6d3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1221e6d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221e6d9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1221e6dc imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221e6df mov ecx, dword ptr [edx*4 + 0x12241fa0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12241fa0)));
  /* 1221e6e6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 1221e6e9 jmp 0x1221e704 */
  goto L_1221e704;
L_1221e6eb:;
  /* 1221e6eb call 0x1221d000 */
  push32(0x1221e6f0u); f_1221d000();
  /* 1221e6f0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1221e6f6 call 0x1221d010 */
  push32(0x1221e6fbu); f_1221d010();
  /* 1221e6fb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1221e701 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1221e704:;
  /* 1221e704 pop ebp */
  EBP = (pop32());
  /* 1221e705 ret  */
  ESPCHK(0x1221e6a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e710 @ 0x1221e710 (260 bytes, 83 insns) */
void f_1221e710(void) {
  FTRACE(0x1221e710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221e710 push ebp */
  push32((uint32_t)(EBP));
  /* 1221e711 mov ebp, esp */
  EBP = (ESP);
  /* 1221e713 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221e716 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1221e71a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221e71d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1221e720 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221e722 je 0x1221e72d */
  if (C.zf) goto L_1221e72d;
  /* 1221e724 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1221e727 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1221e72a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1221e72d:;
  /* 1221e72d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221e730 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1221e736 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221e738 je 0x1221e742 */
  if (C.zf) goto L_1221e742;
  /* 1221e73a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1221e73d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1221e73f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_1221e742:;
  /* 1221e742 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221e745 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1221e74b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1221e74d je 0x1221e758 */
  if (C.zf) goto L_1221e758;
  /* 1221e74f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1221e752 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1221e755 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1221e758:;
  /* 1221e758 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221e75b push eax */
  push32((uint32_t)(EAX));
  /* 1221e75c call dword ptr [0x122433a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122433a0))), 0x1221e762u);
  /* 1221e762 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1221e765 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221e769 jne 0x1221e782 */
  if (!C.zf) goto L_1221e782;
  /* 1221e76b call dword ptr [0x122433b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122433b4))), 0x1221e771u);
  /* 1221e771 push eax */
  push32((uint32_t)(EAX));
  /* 1221e772 call 0x1221cf60 */
  push32(0x1221e777u); f_1221cf60();
  /* 1221e777 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221e77a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1221e77d jmp 0x1221e810 */
  goto L_1221e810;
L_1221e782:;
  /* 1221e782 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221e786 jne 0x1221e793 */
  if (!C.zf) goto L_1221e793;
  /* 1221e788 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1221e78b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1221e78e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1221e791 jmp 0x1221e7a2 */
  goto L_1221e7a2;
L_1221e793:;
  /* 1221e793 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221e797 jne 0x1221e7a2 */
  if (!C.zf) goto L_1221e7a2;
  /* 1221e799 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1221e79c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1221e79f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1221e7a2:;
  /* 1221e7a2 call 0x1221e310 */
  push32(0x1221e7a7u); f_1221e310();
  /* 1221e7a7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1221e7aa cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221e7ae jne 0x1221e7cb */
  if (!C.zf) goto L_1221e7cb;
  /* 1221e7b0 call 0x1221d000 */
  push32(0x1221e7b5u); f_1221d000();
  /* 1221e7b5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 1221e7bb call 0x1221d010 */
  push32(0x1221e7c0u); f_1221d010();
  /* 1221e7c0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1221e7c6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1221e7c9 jmp 0x1221e810 */
  goto L_1221e810;
L_1221e7cb:;
  /* 1221e7cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221e7ce push eax */
  push32((uint32_t)(EAX));
  /* 1221e7cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221e7d2 push ecx */
  push32((uint32_t)(ECX));
  /* 1221e7d3 call 0x1221e500 */
  push32(0x1221e7d8u); f_1221e500();
  /* 1221e7d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221e7db mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1221e7de or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 1221e7e1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1221e7e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221e7e7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1221e7ea mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221e7ed and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1221e7f0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221e7f3 mov edx, dword ptr [eax*4 + 0x12241fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12241fa0)));
  /* 1221e7fa mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1221e7fd mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 1221e801 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221e804 push ecx */
  push32((uint32_t)(ECX));
  /* 1221e805 call 0x1221e8b0 */
  push32(0x1221e80au); f_1221e8b0();
  /* 1221e80a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221e80d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1221e810:;
  /* 1221e810 mov esp, ebp */
  ESP = (EBP);
  /* 1221e812 pop ebp */
  EBP = (pop32());
  /* 1221e813 ret  */
  ESPCHK(0x1221e710u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e820 @ 0x1221e820 (134 bytes, 44 insns) */
void f_1221e820(void) {
  FTRACE(0x1221e820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221e820 push ebp */
  push32((uint32_t)(EBP));
  /* 1221e821 mov ebp, esp */
  EBP = (ESP);
  /* 1221e823 push ecx */
  push32((uint32_t)(ECX));
  /* 1221e824 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221e827 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1221e82a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221e82d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1221e830 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221e833 mov edx, dword ptr [eax*4 + 0x12241fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12241fa0)));
  /* 1221e83a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221e83c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1221e83f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221e842 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221e846 jne 0x1221e881 */
  if (!C.zf) goto L_1221e881;
  /* 1221e848 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1221e84a call 0x12218b30 */
  push32(0x1221e84fu); f_12218b30();
  /* 1221e84f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221e852 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221e855 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221e859 jne 0x1221e877 */
  if (!C.zf) goto L_1221e877;
  /* 1221e85b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221e85e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221e861 push edx */
  push32((uint32_t)(EDX));
  /* 1221e862 call dword ptr [0x12243348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243348))), 0x1221e868u);
  /* 1221e868 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221e86b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1221e86e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221e871 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221e874 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1221e877:;
  /* 1221e877 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1221e879 call 0x12218bd0 */
  push32(0x1221e87eu); f_12218bd0();
  /* 1221e87e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1221e881:;
  /* 1221e881 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221e884 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1221e887 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221e88a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1221e88d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221e890 mov edx, dword ptr [eax*4 + 0x12241fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12241fa0)));
  /* 1221e897 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1221e89b push eax */
  push32((uint32_t)(EAX));
  /* 1221e89c call dword ptr [0x12243338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243338))), 0x1221e8a2u);
  /* 1221e8a2 mov esp, ebp */
  ESP = (EBP);
  /* 1221e8a4 pop ebp */
  EBP = (pop32());
  /* 1221e8a5 ret  */
  ESPCHK(0x1221e820u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x1221e8b0 (38 bytes, 13 insns) */
void f_1221e8b0(void) {
  FTRACE(0x1221e8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221e8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1221e8b1 mov ebp, esp */
  EBP = (ESP);
  /* 1221e8b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221e8b6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1221e8b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221e8bc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1221e8bf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221e8c2 mov edx, dword ptr [eax*4 + 0x12241fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12241fa0)));
  /* 1221e8c9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1221e8cd push eax */
  push32((uint32_t)(EAX));
  /* 1221e8ce call dword ptr [0x12243334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12243334))), 0x1221e8d4u);
  /* 1221e8d4 pop ebp */
  EBP = (pop32());
  /* 1221e8d5 ret  */
  ESPCHK(0x1221e8b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e8e0 @ 0x1221e8e0 (218 bytes, 63 insns) */
void f_1221e8e0(void) {
  FTRACE(0x1221e8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221e8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1221e8e1 mov ebp, esp */
  EBP = (ESP);
  /* 1221e8e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221e8e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1221e8ed push 2 */
  push32((uint32_t)(0x2u));
  /* 1221e8ef call 0x12218b30 */
  push32(0x1221e8f4u); f_12218b30();
  /* 1221e8f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221e8f7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1221e8fe jmp 0x1221e909 */
  goto L_1221e909;
L_1221e900:;
  /* 1221e900 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221e903 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221e906 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1221e909:;
  /* 1221e909 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221e90c cmp ecx, dword ptr [0x12241ca0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12241ca0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221e912 jge 0x1221e9a9 */
  if ((C.sf==C.of)) goto L_1221e9a9;
  /* 1221e918 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221e91b mov eax, dword ptr [0x12240960] */
  EAX = (r32((uint32_t)(0x12240960)));
  /* 1221e920 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221e924 je 0x1221e9a4 */
  if (C.zf) goto L_1221e9a4;
  /* 1221e926 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221e929 mov edx, dword ptr [0x12240960] */
  EDX = (r32((uint32_t)(0x12240960)));
  /* 1221e92f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1221e932 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1221e935 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1221e93b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1221e93d je 0x1221e961 */
  if (C.zf) goto L_1221e961;
  /* 1221e93f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221e942 mov eax, dword ptr [0x12240960] */
  EAX = (r32((uint32_t)(0x12240960)));
  /* 1221e947 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1221e94a push ecx */
  push32((uint32_t)(ECX));
  /* 1221e94b call 0x1221f6d0 */
  push32(0x1221e950u); f_1221f6d0();
  /* 1221e950 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221e953 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221e956 je 0x1221e961 */
  if (C.zf) goto L_1221e961;
  /* 1221e958 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221e95b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221e95e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1221e961:;
  /* 1221e961 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221e965 jl 0x1221e9a4 */
  if ((C.sf!=C.of)) goto L_1221e9a4;
  /* 1221e967 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221e96a mov ecx, dword ptr [0x12240960] */
  ECX = (r32((uint32_t)(0x12240960)));
  /* 1221e970 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1221e973 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221e976 push edx */
  push32((uint32_t)(EDX));
  /* 1221e977 call dword ptr [0x122433c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122433c4))), 0x1221e97du);
  /* 1221e97d push 2 */
  push32((uint32_t)(0x2u));
  /* 1221e97f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221e982 mov ecx, dword ptr [0x12240960] */
  ECX = (r32((uint32_t)(0x12240960)));
  /* 1221e988 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1221e98b push edx */
  push32((uint32_t)(EDX));
  /* 1221e98c call 0x12215bc0 */
  push32(0x1221e991u); f_12215bc0();
  /* 1221e991 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221e994 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221e997 mov ecx, dword ptr [0x12240960] */
  ECX = (r32((uint32_t)(0x12240960)));
  /* 1221e99d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_1221e9a4:;
  /* 1221e9a4 jmp 0x1221e900 */
  goto L_1221e900;
L_1221e9a9:;
  /* 1221e9a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1221e9ab call 0x12218bd0 */
  push32(0x1221e9b0u); f_12218bd0();
  /* 1221e9b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221e9b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221e9b6 mov esp, ebp */
  ESP = (EBP);
  /* 1221e9b8 pop ebp */
  EBP = (pop32());
  /* 1221e9b9 ret  */
  ESPCHK(0x1221e8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e9c0 @ 0x1221e9c0 (68 bytes, 26 insns) */
void f_1221e9c0(void) {
  FTRACE(0x1221e9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221e9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1221e9c1 mov ebp, esp */
  EBP = (ESP);
  /* 1221e9c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1221e9c4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221e9c8 jne 0x1221e9d6 */
  if (!C.zf) goto L_1221e9d6;
  /* 1221e9ca push 0 */
  push32((uint32_t)(0x0u));
  /* 1221e9cc call 0x1221eb30 */
  push32(0x1221e9d1u); f_1221eb30();
  /* 1221e9d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221e9d4 jmp 0x1221ea00 */
  goto L_1221ea00;
L_1221e9d6:;
  /* 1221e9d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221e9d9 push eax */
  push32((uint32_t)(EAX));
  /* 1221e9da call 0x1221df40 */
  push32(0x1221e9dfu); f_1221df40();
  /* 1221e9df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221e9e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221e9e5 push ecx */
  push32((uint32_t)(ECX));
  /* 1221e9e6 call 0x1221ea10 */
  push32(0x1221e9ebu); f_1221ea10();
  /* 1221e9eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221e9ee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1221e9f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221e9f4 push edx */
  push32((uint32_t)(EDX));
  /* 1221e9f5 call 0x1221dfb0 */
  push32(0x1221e9fau); f_1221dfb0();
  /* 1221e9fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221e9fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1221ea00:;
  /* 1221ea00 mov esp, ebp */
  ESP = (EBP);
  /* 1221ea02 pop ebp */
  EBP = (pop32());
  /* 1221ea03 ret  */
  ESPCHK(0x1221e9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea10 @ 0x1221ea10 (65 bytes, 26 insns) */
void f_1221ea10(void) {
  FTRACE(0x1221ea10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221ea10 push ebp */
  push32((uint32_t)(EBP));
  /* 1221ea11 mov ebp, esp */
  EBP = (ESP);
  /* 1221ea13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221ea16 push eax */
  push32((uint32_t)(EAX));
  /* 1221ea17 call 0x1221ea60 */
  push32(0x1221ea1cu); f_1221ea60();
  /* 1221ea1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ea1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221ea21 je 0x1221ea28 */
  if (C.zf) goto L_1221ea28;
  /* 1221ea23 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1221ea26 jmp 0x1221ea4f */
  goto L_1221ea4f;
L_1221ea28:;
  /* 1221ea28 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221ea2b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1221ea2e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1221ea34 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221ea36 je 0x1221ea4d */
  if (C.zf) goto L_1221ea4d;
  /* 1221ea38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221ea3b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1221ea3e push ecx */
  push32((uint32_t)(ECX));
  /* 1221ea3f call 0x1221f820 */
  push32(0x1221ea44u); f_1221f820();
  /* 1221ea44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ea47 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1221ea49 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221ea4b jmp 0x1221ea4f */
  goto L_1221ea4f;
L_1221ea4d:;
  /* 1221ea4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1221ea4f:;
  /* 1221ea4f pop ebp */
  EBP = (pop32());
  /* 1221ea50 ret  */
  ESPCHK(0x1221ea10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea60 @ 0x1221ea60 (183 bytes, 62 insns) */
void f_1221ea60(void) {
  FTRACE(0x1221ea60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221ea60 push ebp */
  push32((uint32_t)(EBP));
  /* 1221ea61 mov ebp, esp */
  EBP = (ESP);
  /* 1221ea63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221ea66 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1221ea6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221ea70 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1221ea73 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221ea76 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1221ea79 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1221ea7c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ea7f jne 0x1221eafb */
  if (!C.zf) goto L_1221eafb;
  /* 1221ea81 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221ea84 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1221ea87 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1221ea8d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1221ea8f je 0x1221eafb */
  if (C.zf) goto L_1221eafb;
  /* 1221ea91 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221ea94 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221ea97 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1221ea99 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221ea9c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221ea9f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221eaa3 jle 0x1221eafb */
  if ((C.zf||C.sf!=C.of)) goto L_1221eafb;
  /* 1221eaa5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221eaa8 push edx */
  push32((uint32_t)(EDX));
  /* 1221eaa9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221eaac mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1221eaaf push ecx */
  push32((uint32_t)(ECX));
  /* 1221eab0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221eab3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1221eab6 push eax */
  push32((uint32_t)(EAX));
  /* 1221eab7 call 0x1221d9d0 */
  push32(0x1221eabcu); f_1221d9d0();
  /* 1221eabc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221eabf cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221eac2 jne 0x1221eae5 */
  if (!C.zf) goto L_1221eae5;
  /* 1221eac4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221eac7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1221eaca and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1221ead0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221ead2 je 0x1221eae3 */
  if (C.zf) goto L_1221eae3;
  /* 1221ead4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221ead7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1221eada and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1221eadd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221eae0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_1221eae3:;
  /* 1221eae3 jmp 0x1221eafb */
  goto L_1221eafb;
L_1221eae5:;
  /* 1221eae5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221eae8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1221eaeb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1221eaee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221eaf1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1221eaf4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1221eafb:;
  /* 1221eafb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221eafe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221eb01 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1221eb04 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1221eb06 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221eb09 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1221eb10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221eb13 mov esp, ebp */
  ESP = (EBP);
  /* 1221eb15 pop ebp */
  EBP = (pop32());
  /* 1221eb16 ret  */
  ESPCHK(0x1221ea60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb20 @ 0x1221eb20 (15 bytes, 7 insns) */
void f_1221eb20(void) {
  FTRACE(0x1221eb20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221eb20 push ebp */
  push32((uint32_t)(EBP));
  /* 1221eb21 mov ebp, esp */
  EBP = (ESP);
  /* 1221eb23 push 1 */
  push32((uint32_t)(0x1u));
  /* 1221eb25 call 0x1221eb30 */
  push32(0x1221eb2au); f_1221eb30();
  /* 1221eb2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221eb2d pop ebp */
  EBP = (pop32());
  /* 1221eb2e ret  */
  ESPCHK(0x1221eb20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb30 @ 0x1221eb30 (319 bytes, 94 insns) */
void f_1221eb30(void) {
  FTRACE(0x1221eb30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221eb30 push ebp */
  push32((uint32_t)(EBP));
  /* 1221eb31 mov ebp, esp */
  EBP = (ESP);
  /* 1221eb33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221eb36 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1221eb3d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1221eb44 push 2 */
  push32((uint32_t)(0x2u));
  /* 1221eb46 call 0x12218b30 */
  push32(0x1221eb4bu); f_12218b30();
  /* 1221eb4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221eb4e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1221eb55 jmp 0x1221eb60 */
  goto L_1221eb60;
L_1221eb57:;
  /* 1221eb57 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221eb5a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221eb5d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1221eb60:;
  /* 1221eb60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221eb63 cmp ecx, dword ptr [0x12241ca0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12241ca0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221eb69 jge 0x1221ec53 */
  if ((C.sf==C.of)) goto L_1221ec53;
  /* 1221eb6f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221eb72 mov eax, dword ptr [0x12240960] */
  EAX = (r32((uint32_t)(0x12240960)));
  /* 1221eb77 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221eb7b je 0x1221ec4e */
  if (C.zf) goto L_1221ec4e;
  /* 1221eb81 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221eb84 mov edx, dword ptr [0x12240960] */
  EDX = (r32((uint32_t)(0x12240960)));
  /* 1221eb8a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1221eb8d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1221eb90 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1221eb96 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1221eb98 je 0x1221ec4e */
  if (C.zf) goto L_1221ec4e;
  /* 1221eb9e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221eba1 mov eax, dword ptr [0x12240960] */
  EAX = (r32((uint32_t)(0x12240960)));
  /* 1221eba6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1221eba9 push ecx */
  push32((uint32_t)(ECX));
  /* 1221ebaa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221ebad push edx */
  push32((uint32_t)(EDX));
  /* 1221ebae call 0x1221df80 */
  push32(0x1221ebb3u); f_1221df80();
  /* 1221ebb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ebb6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221ebb9 mov ecx, dword ptr [0x12240960] */
  ECX = (r32((uint32_t)(0x12240960)));
  /* 1221ebbf mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1221ebc2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1221ebc5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1221ebca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221ebcc je 0x1221ec35 */
  if (C.zf) goto L_1221ec35;
  /* 1221ebce cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ebd2 jne 0x1221ebf9 */
  if (!C.zf) goto L_1221ebf9;
  /* 1221ebd4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221ebd7 mov edx, dword ptr [0x12240960] */
  EDX = (r32((uint32_t)(0x12240960)));
  /* 1221ebdd mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1221ebe0 push eax */
  push32((uint32_t)(EAX));
  /* 1221ebe1 call 0x1221ea10 */
  push32(0x1221ebe6u); f_1221ea10();
  /* 1221ebe6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ebe9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ebec je 0x1221ebf7 */
  if (C.zf) goto L_1221ebf7;
  /* 1221ebee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221ebf1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ebf4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1221ebf7:;
  /* 1221ebf7 jmp 0x1221ec35 */
  goto L_1221ec35;
L_1221ebf9:;
  /* 1221ebf9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ebfd jne 0x1221ec35 */
  if (!C.zf) goto L_1221ec35;
  /* 1221ebff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221ec02 mov eax, dword ptr [0x12240960] */
  EAX = (r32((uint32_t)(0x12240960)));
  /* 1221ec07 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1221ec0a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1221ec0d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1221ec10 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221ec12 je 0x1221ec35 */
  if (C.zf) goto L_1221ec35;
  /* 1221ec14 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221ec17 mov ecx, dword ptr [0x12240960] */
  ECX = (r32((uint32_t)(0x12240960)));
  /* 1221ec1d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1221ec20 push edx */
  push32((uint32_t)(EDX));
  /* 1221ec21 call 0x1221ea10 */
  push32(0x1221ec26u); f_1221ea10();
  /* 1221ec26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ec29 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ec2c jne 0x1221ec35 */
  if (!C.zf) goto L_1221ec35;
  /* 1221ec2e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_1221ec35:;
  /* 1221ec35 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221ec38 mov ecx, dword ptr [0x12240960] */
  ECX = (r32((uint32_t)(0x12240960)));
  /* 1221ec3e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1221ec41 push edx */
  push32((uint32_t)(EDX));
  /* 1221ec42 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221ec45 push eax */
  push32((uint32_t)(EAX));
  /* 1221ec46 call 0x1221dff0 */
  push32(0x1221ec4bu); f_1221dff0();
  /* 1221ec4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1221ec4e:;
  /* 1221ec4e jmp 0x1221eb57 */
  goto L_1221eb57;
L_1221ec53:;
  /* 1221ec53 push 2 */
  push32((uint32_t)(0x2u));
  /* 1221ec55 call 0x12218bd0 */
  push32(0x1221ec5au); f_12218bd0();
  /* 1221ec5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ec5d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ec61 jne 0x1221ec68 */
  if (!C.zf) goto L_1221ec68;
  /* 1221ec63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221ec66 jmp 0x1221ec6b */
  goto L_1221ec6b;
L_1221ec68:;
  /* 1221ec68 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1221ec6b:;
  /* 1221ec6b mov esp, ebp */
  ESP = (EBP);
  /* 1221ec6d pop ebp */
  EBP = (pop32());
  /* 1221ec6e ret  */
  ESPCHK(0x1221eb30u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x1221ec70 (15 bytes, 7 insns) */
void f_1221ec70(void) {
  FTRACE(0x1221ec70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221ec70 push ebp */
  push32((uint32_t)(EBP));
  /* 1221ec71 mov ebp, esp */
  EBP = (ESP);
  /* 1221ec73 push 2 */
  push32((uint32_t)(0x2u));
  /* 1221ec75 call 0x122140a0 */
  push32(0x1221ec7au); f_122140a0();
  /* 1221ec7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ec7d pop ebp */
  EBP = (pop32());
  /* 1221ec7e ret  */
  ESPCHK(0x1221ec70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec80 @ 0x1221ec80 (1007 bytes, 269 insns) */
void f_1221ec80(void) {
  FTRACE(0x1221ec80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221ec80 push ebp */
  push32((uint32_t)(EBP));
  /* 1221ec81 mov ebp, esp */
  EBP = (ESP);
  /* 1221ec83 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221ec89 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ec8d jl 0x1221ec95 */
  if ((C.sf!=C.of)) goto L_1221ec95;
  /* 1221ec8f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ec93 jle 0x1221ec9c */
  if ((C.zf||C.sf!=C.of)) goto L_1221ec9c;
L_1221ec95:;
  /* 1221ec95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221ec97 jmp 0x1221f06b */
  goto L_1221f06b;
L_1221ec9c:;
  /* 1221ec9c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1221ec9e call 0x12218b30 */
  push32(0x1221eca3u); f_12218b30();
  /* 1221eca3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221eca6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1221ecad mov eax, dword ptr [0x1224094c] */
  EAX = (r32((uint32_t)(0x1224094c)));
  /* 1221ecb2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ecb5 mov dword ptr [0x1224094c], eax */
  w32((uint32_t)(0x1224094c), (EAX));
L_1221ecba:;
  /* 1221ecba cmp dword ptr [0x1224095c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1224095c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ecc1 je 0x1221eccd */
  if (C.zf) goto L_1221eccd;
  /* 1221ecc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1221ecc5 call dword ptr [0x122432f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122432f0))), 0x1221eccbu);
  /* 1221eccb jmp 0x1221ecba */
  goto L_1221ecba;
L_1221eccd:;
  /* 1221eccd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ecd1 je 0x1221ed11 */
  if (C.zf) goto L_1221ed11;
  /* 1221ecd3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ecd7 je 0x1221ecf1 */
  if (C.zf) goto L_1221ecf1;
  /* 1221ecd9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221ecdc push ecx */
  push32((uint32_t)(ECX));
  /* 1221ecdd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221ece0 push edx */
  push32((uint32_t)(EDX));
  /* 1221ece1 call 0x1221f070 */
  push32(0x1221ece6u); f_1221f070();
  /* 1221ece6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ece9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1221ecef jmp 0x1221ed03 */
  goto L_1221ed03;
L_1221ecf1:;
  /* 1221ecf1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221ecf4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221ecf7 mov ecx, dword ptr [eax + 0x1223f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1223f4dc)));
  /* 1221ecfd mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_1221ed03:;
  /* 1221ed03 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1221ed09 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1221ed0c jmp 0x1221f04b */
  goto L_1221f04b;
L_1221ed11:;
  /* 1221ed11 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 1221ed18 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1221ed1f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ed23 je 0x1221f043 */
  if (C.zf) goto L_1221f043;
  /* 1221ed29 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221ed2c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1221ed2f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ed32 jne 0x1221ef54 */
  if (!C.zf) goto L_1221ef54;
  /* 1221ed38 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221ed3b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1221ed3f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ed42 jne 0x1221ef54 */
  if (!C.zf) goto L_1221ef54;
  /* 1221ed48 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221ed4b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1221ed4f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ed52 jne 0x1221ef54 */
  if (!C.zf) goto L_1221ef54;
  /* 1221ed58 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221ed5b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_1221ed61:;
  /* 1221ed61 push 0x1223c27c */
  push32((uint32_t)(0x1223c27cu));
  /* 1221ed66 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1221ed6c push ecx */
  push32((uint32_t)(ECX));
  /* 1221ed6d call 0x12220ed0 */
  push32(0x1221ed72u); f_12220ed0();
  /* 1221ed72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ed75 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1221ed7b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ed82 je 0x1221edad */
  if (C.zf) goto L_1221edad;
  /* 1221ed84 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1221ed8a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221ed90 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 1221ed96 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ed9d je 0x1221edad */
  if (C.zf) goto L_1221edad;
  /* 1221ed9f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1221eda5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1221eda8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221edab jne 0x1221edd3 */
  if (!C.zf) goto L_1221edd3;
L_1221edad:;
  /* 1221edad cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221edb1 je 0x1221edcc */
  if (C.zf) goto L_1221edcc;
  /* 1221edb3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1221edb5 call 0x12218bd0 */
  push32(0x1221edbau); f_12218bd0();
  /* 1221edba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221edbd mov edx, dword ptr [0x1224094c] */
  EDX = (r32((uint32_t)(0x1224094c)));
  /* 1221edc3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221edc6 mov dword ptr [0x1224094c], edx */
  w32((uint32_t)(0x1224094c), (EDX));
L_1221edcc:;
  /* 1221edcc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221edce jmp 0x1221f06b */
  goto L_1221f06b;
L_1221edd3:;
  /* 1221edd3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1221edda jmp 0x1221ede5 */
  goto L_1221ede5;
L_1221eddc:;
  /* 1221eddc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221eddf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ede2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1221ede5:;
  /* 1221ede5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ede9 jg 0x1221ee33 */
  if ((!C.zf&&C.sf==C.of)) goto L_1221ee33;
  /* 1221edeb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1221edf1 push ecx */
  push32((uint32_t)(ECX));
  /* 1221edf2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1221edf8 push edx */
  push32((uint32_t)(EDX));
  /* 1221edf9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221edfc imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221edff mov ecx, dword ptr [eax + 0x1223f4d8] */
  ECX = (r32((uint32_t)(EAX + 0x1223f4d8)));
  /* 1221ee05 push ecx */
  push32((uint32_t)(ECX));
  /* 1221ee06 call 0x12220e90 */
  push32(0x1221ee0bu); f_12220e90();
  /* 1221ee0b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ee0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221ee10 jne 0x1221ee31 */
  if (!C.zf) goto L_1221ee31;
  /* 1221ee12 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221ee15 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221ee18 mov eax, dword ptr [edx + 0x1223f4d8] */
  EAX = (r32((uint32_t)(EDX + 0x1223f4d8)));
  /* 1221ee1e push eax */
  push32((uint32_t)(EAX));
  /* 1221ee1f call 0x12217f60 */
  push32(0x1221ee24u); f_12217f60();
  /* 1221ee24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ee27 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ee2d jne 0x1221ee31 */
  if (!C.zf) goto L_1221ee31;
  /* 1221ee2f jmp 0x1221ee33 */
  goto L_1221ee33;
L_1221ee31:;
  /* 1221ee31 jmp 0x1221eddc */
  goto L_1221eddc;
L_1221ee33:;
  /* 1221ee33 push 0x1223c278 */
  push32((uint32_t)(0x1223c278u));
  /* 1221ee38 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1221ee3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ee41 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 1221ee47 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1221ee4d push edx */
  push32((uint32_t)(EDX));
  /* 1221ee4e call 0x12220e50 */
  push32(0x1221ee53u); f_12220e50();
  /* 1221ee53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ee56 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1221ee5c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ee63 jne 0x1221ee99 */
  if (!C.zf) goto L_1221ee99;
  /* 1221ee65 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1221ee6b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1221ee6e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ee71 je 0x1221ee99 */
  if (C.zf) goto L_1221ee99;
  /* 1221ee73 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ee77 je 0x1221ee92 */
  if (C.zf) goto L_1221ee92;
  /* 1221ee79 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1221ee7b call 0x12218bd0 */
  push32(0x1221ee80u); f_12218bd0();
  /* 1221ee80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ee83 mov edx, dword ptr [0x1224094c] */
  EDX = (r32((uint32_t)(0x1224094c)));
  /* 1221ee89 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221ee8c mov dword ptr [0x1224094c], edx */
  w32((uint32_t)(0x1224094c), (EDX));
L_1221ee92:;
  /* 1221ee92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221ee94 jmp 0x1221f06b */
  goto L_1221f06b;
L_1221ee99:;
  /* 1221ee99 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ee9d jg 0x1221eeea */
  if ((!C.zf&&C.sf==C.of)) goto L_1221eeea;
  /* 1221ee9f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1221eea5 push eax */
  push32((uint32_t)(EAX));
  /* 1221eea6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1221eeac push ecx */
  push32((uint32_t)(ECX));
  /* 1221eead lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1221eeb3 push edx */
  push32((uint32_t)(EDX));
  /* 1221eeb4 call 0x12218950 */
  push32(0x1221eeb9u); f_12218950();
  /* 1221eeb9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221eebc mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1221eec2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1221eeca lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 1221eed0 push ecx */
  push32((uint32_t)(ECX));
  /* 1221eed1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221eed4 push edx */
  push32((uint32_t)(EDX));
  /* 1221eed5 call 0x1221f070 */
  push32(0x1221eedau); f_1221f070();
  /* 1221eeda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221eedd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221eedf je 0x1221eeea */
  if (C.zf) goto L_1221eeea;
  /* 1221eee1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221eee4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221eee7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1221eeea:;
  /* 1221eeea mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1221eef0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221eef6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1221eefc mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1221ef02 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1221ef05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221ef07 je 0x1221ef18 */
  if (C.zf) goto L_1221ef18;
  /* 1221ef09 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1221ef0f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ef12 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_1221ef18:;
  /* 1221ef18 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1221ef1e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1221ef21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221ef23 jne 0x1221ed61 */
  if (!C.zf) goto L_1221ed61;
  /* 1221ef29 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ef2d je 0x1221ef3c */
  if (C.zf) goto L_1221ef3c;
  /* 1221ef2f call 0x1221f210 */
  push32(0x1221ef34u); f_1221f210();
  /* 1221ef34 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1221ef3a jmp 0x1221ef46 */
  goto L_1221ef46;
L_1221ef3c:;
  /* 1221ef3c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_1221ef46:;
  /* 1221ef46 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1221ef4c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1221ef4f jmp 0x1221f041 */
  goto L_1221f041;
L_1221ef54:;
  /* 1221ef54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221ef57 push edx */
  push32((uint32_t)(EDX));
  /* 1221ef58 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221ef5a push 0 */
  push32((uint32_t)(0x0u));
  /* 1221ef5c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1221ef62 push eax */
  push32((uint32_t)(EAX));
  /* 1221ef63 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221ef66 push ecx */
  push32((uint32_t)(ECX));
  /* 1221ef67 call 0x1221f310 */
  push32(0x1221ef6cu); f_1221f310();
  /* 1221ef6c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ef6f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1221ef72 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ef76 je 0x1221f041 */
  if (C.zf) goto L_1221f041;
  /* 1221ef7c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1221ef83 jmp 0x1221ef8e */
  goto L_1221ef8e;
L_1221ef85:;
  /* 1221ef85 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221ef88 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ef8b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1221ef8e:;
  /* 1221ef8e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ef92 jg 0x1221eff0 */
  if ((!C.zf&&C.sf==C.of)) goto L_1221eff0;
  /* 1221ef94 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ef98 je 0x1221efee */
  if (C.zf) goto L_1221efee;
  /* 1221ef9a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221ef9d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221efa0 mov ecx, dword ptr [eax + 0x1223f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1223f4dc)));
  /* 1221efa6 push ecx */
  push32((uint32_t)(ECX));
  /* 1221efa7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1221efad push edx */
  push32((uint32_t)(EDX));
  /* 1221efae call 0x12220dc0 */
  push32(0x1221efb3u); f_12220dc0();
  /* 1221efb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221efb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221efb8 je 0x1221efe5 */
  if (C.zf) goto L_1221efe5;
  /* 1221efba lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1221efc0 push eax */
  push32((uint32_t)(EAX));
  /* 1221efc1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1221efc4 push ecx */
  push32((uint32_t)(ECX));
  /* 1221efc5 call 0x1221f070 */
  push32(0x1221efcau); f_1221f070();
  /* 1221efca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221efcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221efcf je 0x1221efdc */
  if (C.zf) goto L_1221efdc;
  /* 1221efd1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221efd4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221efd7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1221efda jmp 0x1221efe3 */
  goto L_1221efe3;
L_1221efdc:;
  /* 1221efdc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_1221efe3:;
  /* 1221efe3 jmp 0x1221efee */
  goto L_1221efee;
L_1221efe5:;
  /* 1221efe5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221efe8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221efeb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1221efee:;
  /* 1221efee jmp 0x1221ef85 */
  goto L_1221ef85;
L_1221eff0:;
  /* 1221eff0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221eff4 je 0x1221f01b */
  if (C.zf) goto L_1221f01b;
  /* 1221eff6 call 0x1221f210 */
  push32(0x1221effbu); f_1221f210();
  /* 1221effb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1221effe push 2 */
  push32((uint32_t)(0x2u));
  /* 1221f000 mov ecx, dword ptr [0x1223f4dc] */
  ECX = (r32((uint32_t)(0x1223f4dc)));
  /* 1221f006 push ecx */
  push32((uint32_t)(ECX));
  /* 1221f007 call 0x12215bc0 */
  push32(0x1221f00cu); f_12215bc0();
  /* 1221f00c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f00f mov dword ptr [0x1223f4dc], 0 */
  w32((uint32_t)(0x1223f4dc), (0x0u));
  /* 1221f019 jmp 0x1221f041 */
  goto L_1221f041;
L_1221f01b:;
  /* 1221f01b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221f01f je 0x1221f02e */
  if (C.zf) goto L_1221f02e;
  /* 1221f021 call 0x1221f210 */
  push32(0x1221f026u); f_1221f210();
  /* 1221f026 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1221f02c jmp 0x1221f038 */
  goto L_1221f038;
L_1221f02e:;
  /* 1221f02e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_1221f038:;
  /* 1221f038 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1221f03e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1221f041:;
  /* 1221f041 jmp 0x1221f04b */
  goto L_1221f04b;
L_1221f043:;
  /* 1221f043 call 0x1221f210 */
  push32(0x1221f048u); f_1221f210();
  /* 1221f048 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1221f04b:;
  /* 1221f04b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221f04f je 0x1221f068 */
  if (C.zf) goto L_1221f068;
  /* 1221f051 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1221f053 call 0x12218bd0 */
  push32(0x1221f058u); f_12218bd0();
  /* 1221f058 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f05b mov eax, dword ptr [0x1224094c] */
  EAX = (r32((uint32_t)(0x1224094c)));
  /* 1221f060 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221f063 mov dword ptr [0x1224094c], eax */
  w32((uint32_t)(0x1224094c), (EAX));
L_1221f068:;
  /* 1221f068 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1221f06b:;
  /* 1221f06b mov esp, ebp */
  ESP = (EBP);
  /* 1221f06d pop ebp */
  EBP = (pop32());
  /* 1221f06e ret  */
  ESPCHK(0x1221ec80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f070 @ 0x1221f070 (403 bytes, 117 insns) */
void f_1221f070(void) {
  FTRACE(0x1221f070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221f070 push ebp */
  push32((uint32_t)(EBP));
  /* 1221f071 mov ebp, esp */
  EBP = (ESP);
  /* 1221f073 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221f079 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221f07c push eax */
  push32((uint32_t)(EAX));
  /* 1221f07d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 1221f083 push ecx */
  push32((uint32_t)(ECX));
  /* 1221f084 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1221f08a push edx */
  push32((uint32_t)(EDX));
  /* 1221f08b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 1221f091 push eax */
  push32((uint32_t)(EAX));
  /* 1221f092 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221f095 push ecx */
  push32((uint32_t)(ECX));
  /* 1221f096 call 0x1221f310 */
  push32(0x1221f09bu); f_1221f310();
  /* 1221f09b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f09e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221f0a0 jne 0x1221f0a9 */
  if (!C.zf) goto L_1221f0a9;
  /* 1221f0a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221f0a4 jmp 0x1221f1ff */
  goto L_1221f1ff;
L_1221f0a9:;
  /* 1221f0a9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1221f0ae push 0x1223c280 */
  push32((uint32_t)(0x1223c280u));
  /* 1221f0b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1221f0b5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1221f0bb push edx */
  push32((uint32_t)(EDX));
  /* 1221f0bc call 0x12217f60 */
  push32(0x1221f0c1u); f_12217f60();
  /* 1221f0c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f0c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f0c7 push eax */
  push32((uint32_t)(EAX));
  /* 1221f0c8 call 0x12215130 */
  push32(0x1221f0cdu); f_12215130();
  /* 1221f0cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f0d0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1221f0d3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221f0d7 jne 0x1221f0e0 */
  if (!C.zf) goto L_1221f0e0;
  /* 1221f0d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221f0db jmp 0x1221f1ff */
  goto L_1221f1ff;
L_1221f0e0:;
  /* 1221f0e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221f0e3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221f0e6 mov ecx, dword ptr [eax + 0x1223f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1223f4dc)));
  /* 1221f0ec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221f0ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221f0f2 mov eax, dword ptr [edx*4 + 0x122407c8] */
  EAX = (r32((uint32_t)(EDX*4 + 0x122407c8)));
  /* 1221f0f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1221f0fc push 6 */
  push32((uint32_t)(0x6u));
  /* 1221f0fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221f101 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221f104 add ecx, 0x12240818 */
  { uint32_t _a=(ECX),_b=(0x12240818u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f10a push ecx */
  push32((uint32_t)(ECX));
  /* 1221f10b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1221f10e push edx */
  push32((uint32_t)(EDX));
  /* 1221f10f call 0x1221ba10 */
  push32(0x1221f114u); f_1221ba10();
  /* 1221f114 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f117 mov eax, dword ptr [0x122407e0] */
  EAX = (r32((uint32_t)(0x122407e0)));
  /* 1221f11c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1221f11f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 1221f125 push ecx */
  push32((uint32_t)(ECX));
  /* 1221f126 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221f129 push edx */
  push32((uint32_t)(EDX));
  /* 1221f12a call 0x122180e0 */
  push32(0x1221f12fu); f_122180e0();
  /* 1221f12f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f132 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221f135 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221f138 mov dword ptr [ecx + 0x1223f4dc], eax */
  w32((uint32_t)(ECX + 0x1223f4dc), (EAX));
  /* 1221f13e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1221f144 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1221f14a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221f14d mov dword ptr [eax*4 + 0x122407c8], edx */
  w32((uint32_t)(EAX*4 + 0x122407c8), (EDX));
  /* 1221f154 push 6 */
  push32((uint32_t)(0x6u));
  /* 1221f156 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1221f15c push ecx */
  push32((uint32_t)(ECX));
  /* 1221f15d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221f160 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221f163 add edx, 0x12240818 */
  { uint32_t _a=(EDX),_b=(0x12240818u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f169 push edx */
  push32((uint32_t)(EDX));
  /* 1221f16a call 0x1221ba10 */
  push32(0x1221f16fu); f_1221ba10();
  /* 1221f16f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f172 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221f176 jne 0x1221f183 */
  if (!C.zf) goto L_1221f183;
  /* 1221f178 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1221f17e mov dword ptr [0x122407e0], eax */
  w32((uint32_t)(0x122407e0), (EAX));
L_1221f183:;
  /* 1221f183 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221f187 jne 0x1221f195 */
  if (!C.zf) goto L_1221f195;
  /* 1221f189 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1221f18f mov dword ptr [0x122407e4], ecx */
  w32((uint32_t)(0x122407e4), (ECX));
L_1221f195:;
  /* 1221f195 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221f198 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221f19b call dword ptr [edx + 0x1223f4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x1223f4e0))), 0x1221f1a1u);
  /* 1221f1a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221f1a3 je 0x1221f1dc */
  if (C.zf) goto L_1221f1dc;
  /* 1221f1a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221f1a8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221f1ab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221f1ae mov dword ptr [eax + 0x1223f4dc], ecx */
  w32((uint32_t)(EAX + 0x1223f4dc), (ECX));
  /* 1221f1b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1221f1b6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221f1b9 push edx */
  push32((uint32_t)(EDX));
  /* 1221f1ba call 0x12215bc0 */
  push32(0x1221f1bfu); f_12215bc0();
  /* 1221f1bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f1c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221f1c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221f1c8 mov dword ptr [eax*4 + 0x122407c8], ecx */
  w32((uint32_t)(EAX*4 + 0x122407c8), (ECX));
  /* 1221f1cf mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1221f1d2 mov dword ptr [0x122407e0], edx */
  w32((uint32_t)(0x122407e0), (EDX));
  /* 1221f1d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221f1da jmp 0x1221f1ff */
  goto L_1221f1ff;
L_1221f1dc:;
  /* 1221f1dc cmp dword ptr [ebp - 0xc], 0x1223f3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1223f3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221f1e3 je 0x1221f1f3 */
  if (C.zf) goto L_1221f1f3;
  /* 1221f1e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1221f1e7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221f1ea push eax */
  push32((uint32_t)(EAX));
  /* 1221f1eb call 0x12215bc0 */
  push32(0x1221f1f0u); f_12215bc0();
  /* 1221f1f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1221f1f3:;
  /* 1221f1f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221f1f6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221f1f9 mov eax, dword ptr [ecx + 0x1223f4dc] */
  EAX = (r32((uint32_t)(ECX + 0x1223f4dc)));
L_1221f1ff:;
  /* 1221f1ff mov esp, ebp */
  ESP = (EBP);
  /* 1221f201 pop ebp */
  EBP = (pop32());
  /* 1221f202 ret  */
  ESPCHK(0x1221f070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f210 @ 0x1221f210 (256 bytes, 72 insns) */
void f_1221f210(void) {
  FTRACE(0x1221f210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221f210 push ebp */
  push32((uint32_t)(EBP));
  /* 1221f211 mov ebp, esp */
  EBP = (ESP);
  /* 1221f213 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221f216 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1221f21d cmp dword ptr [0x1223f4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1223f4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221f224 jne 0x1221f244 */
  if (!C.zf) goto L_1221f244;
  /* 1221f226 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1221f22b push 0x1223c280 */
  push32((uint32_t)(0x1223c280u));
  /* 1221f230 push 2 */
  push32((uint32_t)(0x2u));
  /* 1221f232 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 1221f237 call 0x12215130 */
  push32(0x1221f23cu); f_12215130();
  /* 1221f23c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f23f mov dword ptr [0x1223f4dc], eax */
  w32((uint32_t)(0x1223f4dc), (EAX));
L_1221f244:;
  /* 1221f244 mov eax, dword ptr [0x1223f4dc] */
  EAX = (r32((uint32_t)(0x1223f4dc)));
  /* 1221f249 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1221f24c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1221f253 jmp 0x1221f25e */
  goto L_1221f25e;
L_1221f255:;
  /* 1221f255 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221f258 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f25b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1221f25e:;
  /* 1221f25e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221f261 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221f264 mov eax, dword ptr [edx + 0x1223f4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1223f4dc)));
  /* 1221f26a push eax */
  push32((uint32_t)(EAX));
  /* 1221f26b push 0x1223c28c */
  push32((uint32_t)(0x1223c28cu));
  /* 1221f270 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221f273 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221f276 mov edx, dword ptr [ecx + 0x1223f4d8] */
  EDX = (r32((uint32_t)(ECX + 0x1223f4d8)));
  /* 1221f27c push edx */
  push32((uint32_t)(EDX));
  /* 1221f27d push 3 */
  push32((uint32_t)(0x3u));
  /* 1221f27f mov eax, dword ptr [0x1223f4dc] */
  EAX = (r32((uint32_t)(0x1223f4dc)));
  /* 1221f284 push eax */
  push32((uint32_t)(EAX));
  /* 1221f285 call 0x1221f4b0 */
  push32(0x1221f28au); f_1221f4b0();
  /* 1221f28a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f28d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221f291 jge 0x1221f2d9 */
  if ((C.sf==C.of)) goto L_1221f2d9;
  /* 1221f293 push 0x1223c278 */
  push32((uint32_t)(0x1223c278u));
  /* 1221f298 mov ecx, dword ptr [0x1223f4dc] */
  ECX = (r32((uint32_t)(0x1223f4dc)));
  /* 1221f29e push ecx */
  push32((uint32_t)(ECX));
  /* 1221f29f call 0x122180f0 */
  push32(0x1221f2a4u); f_122180f0();
  /* 1221f2a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f2a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221f2aa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f2ad imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221f2b0 mov eax, dword ptr [edx + 0x1223f4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1223f4dc)));
  /* 1221f2b6 push eax */
  push32((uint32_t)(EAX));
  /* 1221f2b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221f2ba imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221f2bd mov edx, dword ptr [ecx + 0x1223f4dc] */
  EDX = (r32((uint32_t)(ECX + 0x1223f4dc)));
  /* 1221f2c3 push edx */
  push32((uint32_t)(EDX));
  /* 1221f2c4 call 0x12220dc0 */
  push32(0x1221f2c9u); f_12220dc0();
  /* 1221f2c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f2cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221f2ce je 0x1221f2d7 */
  if (C.zf) goto L_1221f2d7;
  /* 1221f2d0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1221f2d7:;
  /* 1221f2d7 jmp 0x1221f307 */
  goto L_1221f307;
L_1221f2d9:;
  /* 1221f2d9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221f2dd jne 0x1221f2e6 */
  if (!C.zf) goto L_1221f2e6;
  /* 1221f2df mov eax, dword ptr [0x1223f4dc] */
  EAX = (r32((uint32_t)(0x1223f4dc)));
  /* 1221f2e4 jmp 0x1221f30c */
  goto L_1221f30c;
L_1221f2e6:;
  /* 1221f2e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1221f2e8 mov eax, dword ptr [0x1223f4dc] */
  EAX = (r32((uint32_t)(0x1223f4dc)));
  /* 1221f2ed push eax */
  push32((uint32_t)(EAX));
  /* 1221f2ee call 0x12215bc0 */
  push32(0x1221f2f3u); f_12215bc0();
  /* 1221f2f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f2f6 mov dword ptr [0x1223f4dc], 0 */
  w32((uint32_t)(0x1223f4dc), (0x0u));
  /* 1221f300 mov eax, dword ptr [0x1223f4f4] */
  EAX = (r32((uint32_t)(0x1223f4f4)));
  /* 1221f305 jmp 0x1221f30c */
  goto L_1221f30c;
L_1221f307:;
  /* 1221f307 jmp 0x1221f255 */
  goto L_1221f255;
L_1221f30c:;
  /* 1221f30c mov esp, ebp */
  ESP = (EBP);
  /* 1221f30e pop ebp */
  EBP = (pop32());
  /* 1221f30f ret  */
  ESPCHK(0x1221f210u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f310 @ 0x1221f310 (388 bytes, 115 insns) */
void f_1221f310(void) {
  FTRACE(0x1221f310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221f310 push ebp */
  push32((uint32_t)(EBP));
  /* 1221f311 mov ebp, esp */
  EBP = (ESP);
  /* 1221f313 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221f319 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221f31d jne 0x1221f326 */
  if (!C.zf) goto L_1221f326;
  /* 1221f31f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221f321 jmp 0x1221f490 */
  goto L_1221f490;
L_1221f326:;
  /* 1221f326 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221f329 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1221f32c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221f32f jne 0x1221f380 */
  if (!C.zf) goto L_1221f380;
  /* 1221f331 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221f334 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1221f338 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221f33a jne 0x1221f380 */
  if (!C.zf) goto L_1221f380;
  /* 1221f33c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221f33f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 1221f342 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221f345 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 1221f349 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221f34d je 0x1221f369 */
  if (C.zf) goto L_1221f369;
  /* 1221f34f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1221f352 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 1221f357 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1221f35a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 1221f360 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1221f363 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_1221f369:;
  /* 1221f369 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221f36d je 0x1221f378 */
  if (C.zf) goto L_1221f378;
  /* 1221f36f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1221f372 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1221f378:;
  /* 1221f378 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221f37b jmp 0x1221f490 */
  goto L_1221f490;
L_1221f380:;
  /* 1221f380 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221f383 push ecx */
  push32((uint32_t)(ECX));
  /* 1221f384 push 0x1223f450 */
  push32((uint32_t)(0x1223f450u));
  /* 1221f389 call 0x12220dc0 */
  push32(0x1221f38eu); f_12220dc0();
  /* 1221f38e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f391 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221f393 je 0x1221f448 */
  if (C.zf) goto L_1221f448;
  /* 1221f399 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221f39c push edx */
  push32((uint32_t)(EDX));
  /* 1221f39d push 0x1223f3cc */
  push32((uint32_t)(0x1223f3ccu));
  /* 1221f3a2 call 0x12220dc0 */
  push32(0x1221f3a7u); f_12220dc0();
  /* 1221f3a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f3aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221f3ac je 0x1221f448 */
  if (C.zf) goto L_1221f448;
  /* 1221f3b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221f3b5 push eax */
  push32((uint32_t)(EAX));
  /* 1221f3b6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1221f3bc push ecx */
  push32((uint32_t)(ECX));
  /* 1221f3bd call 0x1221f500 */
  push32(0x1221f3c2u); f_1221f500();
  /* 1221f3c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f3c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221f3c7 je 0x1221f3d0 */
  if (C.zf) goto L_1221f3d0;
  /* 1221f3c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221f3cb jmp 0x1221f490 */
  goto L_1221f490;
L_1221f3d0:;
  /* 1221f3d0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1221f3d6 push edx */
  push32((uint32_t)(EDX));
  /* 1221f3d7 push 0x122407f0 */
  push32((uint32_t)(0x122407f0u));
  /* 1221f3dc lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 1221f3e2 push eax */
  push32((uint32_t)(EAX));
  /* 1221f3e3 call 0x12220f10 */
  push32(0x1221f3e8u); f_12220f10();
  /* 1221f3e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f3eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221f3ed jne 0x1221f3f6 */
  if (!C.zf) goto L_1221f3f6;
  /* 1221f3ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221f3f1 jmp 0x1221f490 */
  goto L_1221f490;
L_1221f3f6:;
  /* 1221f3f6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1221f3f8 mov cx, word ptr [0x122407f4] */
  CX = (r16((uint32_t)(0x122407f4)));
  /* 1221f3ff mov dword ptr [0x122407f8], ecx */
  w32((uint32_t)(0x122407f8), (ECX));
  /* 1221f405 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1221f40b push edx */
  push32((uint32_t)(EDX));
  /* 1221f40c push 0x1223f450 */
  push32((uint32_t)(0x1223f450u));
  /* 1221f411 call 0x1221f660 */
  push32(0x1221f416u); f_1221f660();
  /* 1221f416 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f419 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221f41c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1221f41f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1221f421 je 0x1221f436 */
  if (C.zf) goto L_1221f436;
  /* 1221f423 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221f426 push edx */
  push32((uint32_t)(EDX));
  /* 1221f427 push 0x1223f3cc */
  push32((uint32_t)(0x1223f3ccu));
  /* 1221f42c call 0x122180e0 */
  push32(0x1221f431u); f_122180e0();
  /* 1221f431 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f434 jmp 0x1221f448 */
  goto L_1221f448;
L_1221f436:;
  /* 1221f436 push 0x1223f450 */
  push32((uint32_t)(0x1223f450u));
  /* 1221f43b push 0x1223f3cc */
  push32((uint32_t)(0x1223f3ccu));
  /* 1221f440 call 0x122180e0 */
  push32(0x1221f445u); f_122180e0();
  /* 1221f445 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1221f448:;
  /* 1221f448 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221f44c je 0x1221f461 */
  if (C.zf) goto L_1221f461;
  /* 1221f44e push 6 */
  push32((uint32_t)(0x6u));
  /* 1221f450 push 0x122407f0 */
  push32((uint32_t)(0x122407f0u));
  /* 1221f455 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1221f458 push eax */
  push32((uint32_t)(EAX));
  /* 1221f459 call 0x1221ba10 */
  push32(0x1221f45eu); f_1221ba10();
  /* 1221f45e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1221f461:;
  /* 1221f461 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221f465 je 0x1221f47a */
  if (C.zf) goto L_1221f47a;
  /* 1221f467 push 4 */
  push32((uint32_t)(0x4u));
  /* 1221f469 push 0x122407f8 */
  push32((uint32_t)(0x122407f8u));
  /* 1221f46e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1221f471 push ecx */
  push32((uint32_t)(ECX));
  /* 1221f472 call 0x1221ba10 */
  push32(0x1221f477u); f_1221ba10();
  /* 1221f477 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1221f47a:;
  /* 1221f47a push 0x1223f450 */
  push32((uint32_t)(0x1223f450u));
  /* 1221f47f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221f482 push edx */
  push32((uint32_t)(EDX));
  /* 1221f483 call 0x122180e0 */
  push32(0x1221f488u); f_122180e0();
  /* 1221f488 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f48b mov eax, 0x1223f450 */
  EAX = (0x1223f450u);
L_1221f490:;
  /* 1221f490 mov esp, ebp */
  ESP = (EBP);
  /* 1221f492 pop ebp */
  EBP = (pop32());
  /* 1221f493 ret  */
  ESPCHK(0x1221f310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f4a0 @ 0x1221f4a0 (7 bytes, 5 insns) */
void f_1221f4a0(void) {
  FTRACE(0x1221f4a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221f4a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1221f4a1 mov ebp, esp */
  EBP = (ESP);
  /* 1221f4a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221f4a5 pop ebp */
  EBP = (pop32());
  /* 1221f4a6 ret  */
  ESPCHK(0x1221f4a0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x1221f4b0 (79 bytes, 28 insns) */
void f_1221f4b0(void) {
  FTRACE(0x1221f4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221f4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1221f4b1 mov ebp, esp */
  EBP = (ESP);
  /* 1221f4b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221f4b6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1221f4b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1221f4bc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1221f4c3 jmp 0x1221f4ce */
  goto L_1221f4ce;
L_1221f4c5:;
  /* 1221f4c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221f4c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f4cb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1221f4ce:;
  /* 1221f4ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221f4d1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221f4d4 jge 0x1221f4f4 */
  if ((C.sf==C.of)) goto L_1221f4f4;
  /* 1221f4d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221f4d9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f4dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1221f4df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221f4e2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1221f4e5 push edx */
  push32((uint32_t)(EDX));
  /* 1221f4e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221f4e9 push eax */
  push32((uint32_t)(EAX));
  /* 1221f4ea call 0x122180f0 */
  push32(0x1221f4efu); f_122180f0();
  /* 1221f4ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f4f2 jmp 0x1221f4c5 */
  goto L_1221f4c5;
L_1221f4f4:;
  /* 1221f4f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1221f4fb mov esp, ebp */
  ESP = (EBP);
  /* 1221f4fd pop ebp */
  EBP = (pop32());
  /* 1221f4fe ret  */
  ESPCHK(0x1221f4b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f500 @ 0x1221f500 (349 bytes, 122 insns) */
void f_1221f500(void) {
  FTRACE(0x1221f500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221f500 push ebp */
  push32((uint32_t)(EBP));
  /* 1221f501 mov ebp, esp */
  EBP = (ESP);
  /* 1221f503 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221f506 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1221f50b push 0 */
  push32((uint32_t)(0x0u));
  /* 1221f50d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221f510 push eax */
  push32((uint32_t)(EAX));
  /* 1221f511 call 0x12218ea0 */
  push32(0x1221f516u); f_12218ea0();
  /* 1221f516 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f519 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221f51c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1221f51f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221f521 jne 0x1221f52a */
  if (!C.zf) goto L_1221f52a;
  /* 1221f523 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221f525 jmp 0x1221f659 */
  goto L_1221f659;
L_1221f52a:;
  /* 1221f52a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221f52d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1221f530 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221f533 jne 0x1221f560 */
  if (!C.zf) goto L_1221f560;
  /* 1221f535 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221f538 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1221f53c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221f53e je 0x1221f560 */
  if (C.zf) goto L_1221f560;
  /* 1221f540 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221f543 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f546 push ecx */
  push32((uint32_t)(ECX));
  /* 1221f547 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221f54a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f550 push edx */
  push32((uint32_t)(EDX));
  /* 1221f551 call 0x122180e0 */
  push32(0x1221f556u); f_122180e0();
  /* 1221f556 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f559 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221f55b jmp 0x1221f659 */
  goto L_1221f659;
L_1221f560:;
  /* 1221f560 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1221f567 jmp 0x1221f572 */
  goto L_1221f572;
L_1221f569:;
  /* 1221f569 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221f56c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f56f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1221f572:;
  /* 1221f572 push 0x1223c290 */
  push32((uint32_t)(0x1223c290u));
  /* 1221f577 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221f57a push ecx */
  push32((uint32_t)(ECX));
  /* 1221f57b call 0x12220e50 */
  push32(0x1221f580u); f_12220e50();
  /* 1221f580 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f583 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1221f586 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221f58a jne 0x1221f594 */
  if (!C.zf) goto L_1221f594;
  /* 1221f58c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1221f58f jmp 0x1221f659 */
  goto L_1221f659;
L_1221f594:;
  /* 1221f594 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221f597 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f59a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1221f59c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1221f59f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221f5a3 jne 0x1221f5ca */
  if (!C.zf) goto L_1221f5ca;
  /* 1221f5a5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221f5a9 jge 0x1221f5ca */
  if ((C.sf==C.of)) goto L_1221f5ca;
  /* 1221f5ab movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1221f5af cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221f5b2 je 0x1221f5ca */
  if (C.zf) goto L_1221f5ca;
  /* 1221f5b4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221f5b7 push edx */
  push32((uint32_t)(EDX));
  /* 1221f5b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221f5bb push eax */
  push32((uint32_t)(EAX));
  /* 1221f5bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221f5bf push ecx */
  push32((uint32_t)(ECX));
  /* 1221f5c0 call 0x12218950 */
  push32(0x1221f5c5u); f_12218950();
  /* 1221f5c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f5c8 jmp 0x1221f630 */
  goto L_1221f630;
L_1221f5ca:;
  /* 1221f5ca cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221f5ce jne 0x1221f5f8 */
  if (!C.zf) goto L_1221f5f8;
  /* 1221f5d0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221f5d4 jge 0x1221f5f8 */
  if ((C.sf==C.of)) goto L_1221f5f8;
  /* 1221f5d6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1221f5da cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221f5dd je 0x1221f5f8 */
  if (C.zf) goto L_1221f5f8;
  /* 1221f5df mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221f5e2 push eax */
  push32((uint32_t)(EAX));
  /* 1221f5e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221f5e6 push ecx */
  push32((uint32_t)(ECX));
  /* 1221f5e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221f5ea add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f5ed push edx */
  push32((uint32_t)(EDX));
  /* 1221f5ee call 0x12218950 */
  push32(0x1221f5f3u); f_12218950();
  /* 1221f5f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f5f6 jmp 0x1221f630 */
  goto L_1221f630;
L_1221f5f8:;
  /* 1221f5f8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221f5fc jne 0x1221f62b */
  if (!C.zf) goto L_1221f62b;
  /* 1221f5fe movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1221f602 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221f604 je 0x1221f60f */
  if (C.zf) goto L_1221f60f;
  /* 1221f606 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1221f60a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221f60d jne 0x1221f62b */
  if (!C.zf) goto L_1221f62b;
L_1221f60f:;
  /* 1221f60f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221f612 push edx */
  push32((uint32_t)(EDX));
  /* 1221f613 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221f616 push eax */
  push32((uint32_t)(EAX));
  /* 1221f617 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221f61a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f620 push ecx */
  push32((uint32_t)(ECX));
  /* 1221f621 call 0x12218950 */
  push32(0x1221f626u); f_12218950();
  /* 1221f626 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f629 jmp 0x1221f630 */
  goto L_1221f630;
L_1221f62b:;
  /* 1221f62b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1221f62e jmp 0x1221f659 */
  goto L_1221f659;
L_1221f630:;
  /* 1221f630 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1221f634 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221f637 jne 0x1221f63b */
  if (!C.zf) goto L_1221f63b;
  /* 1221f639 jmp 0x1221f657 */
  goto L_1221f657;
L_1221f63b:;
  /* 1221f63b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1221f63f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221f641 jne 0x1221f645 */
  if (!C.zf) goto L_1221f645;
  /* 1221f643 jmp 0x1221f657 */
  goto L_1221f657;
L_1221f645:;
  /* 1221f645 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221f648 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221f64b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 1221f64f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1221f652 jmp 0x1221f569 */
  goto L_1221f569;
L_1221f657:;
  /* 1221f657 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1221f659:;
  /* 1221f659 mov esp, ebp */
  ESP = (EBP);
  /* 1221f65b pop ebp */
  EBP = (pop32());
  /* 1221f65c ret  */
  ESPCHK(0x1221f500u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x1221f660 (101 bytes, 36 insns) */
void f_1221f660(void) {
  FTRACE(0x1221f660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221f660 push ebp */
  push32((uint32_t)(EBP));
  /* 1221f661 mov ebp, esp */
  EBP = (ESP);
  /* 1221f663 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221f666 push eax */
  push32((uint32_t)(EAX));
  /* 1221f667 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221f66a push ecx */
  push32((uint32_t)(ECX));
  /* 1221f66b call 0x122180e0 */
  push32(0x1221f670u); f_122180e0();
  /* 1221f670 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f673 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221f676 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 1221f67a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221f67c je 0x1221f698 */
  if (C.zf) goto L_1221f698;
  /* 1221f67e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221f681 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f684 push ecx */
  push32((uint32_t)(ECX));
  /* 1221f685 push 0x1223c298 */
  push32((uint32_t)(0x1223c298u));
  /* 1221f68a push 2 */
  push32((uint32_t)(0x2u));
  /* 1221f68c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221f68f push edx */
  push32((uint32_t)(EDX));
  /* 1221f690 call 0x1221f4b0 */
  push32(0x1221f695u); f_1221f4b0();
  /* 1221f695 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1221f698:;
  /* 1221f698 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221f69b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 1221f6a2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1221f6a4 je 0x1221f6c3 */
  if (C.zf) goto L_1221f6c3;
  /* 1221f6a6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1221f6a9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f6af push edx */
  push32((uint32_t)(EDX));
  /* 1221f6b0 push 0x1223c294 */
  push32((uint32_t)(0x1223c294u));
  /* 1221f6b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1221f6b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221f6ba push eax */
  push32((uint32_t)(EAX));
  /* 1221f6bb call 0x1221f4b0 */
  push32(0x1221f6c0u); f_1221f4b0();
  /* 1221f6c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1221f6c3:;
  /* 1221f6c3 pop ebp */
  EBP = (pop32());
  /* 1221f6c4 ret  */
  ESPCHK(0x1221f660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f6d0 @ 0x1221f6d0 (130 bytes, 50 insns) */
void f_1221f6d0(void) {
  FTRACE(0x1221f6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221f6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1221f6d1 mov ebp, esp */
  EBP = (ESP);
  /* 1221f6d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1221f6d4 push ebx */
  push32((uint32_t)(EBX));
  /* 1221f6d5 push esi */
  push32((uint32_t)(ESI));
  /* 1221f6d6 push edi */
  push32((uint32_t)(EDI));
  /* 1221f6d7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1221f6de:;
  /* 1221f6de cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221f6e2 jne 0x1221f702 */
  if (!C.zf) goto L_1221f702;
  /* 1221f6e4 push 0x1223c2a8 */
  push32((uint32_t)(0x1223c2a8u));
  /* 1221f6e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221f6eb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1221f6ed push 0x1223c29c */
  push32((uint32_t)(0x1223c29cu));
  /* 1221f6f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1221f6f4 call 0x122141f0 */
  push32(0x1221f6f9u); f_122141f0();
  /* 1221f6f9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f6fc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221f6ff jne 0x1221f702 */
  if (!C.zf) goto L_1221f702;
  /* 1221f701 int3  */
  x86_unimpl("int3 @ 0x1221f701");
L_1221f702:;
  /* 1221f702 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221f704 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221f706 jne 0x1221f6de */
  if (!C.zf) goto L_1221f6de;
  /* 1221f708 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221f70b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1221f70e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1221f711 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1221f713 je 0x1221f721 */
  if (C.zf) goto L_1221f721;
  /* 1221f715 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221f718 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1221f71f jmp 0x1221f748 */
  goto L_1221f748;
L_1221f721:;
  /* 1221f721 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221f724 push ecx */
  push32((uint32_t)(ECX));
  /* 1221f725 call 0x1221df40 */
  push32(0x1221f72au); f_1221df40();
  /* 1221f72a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f72d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221f730 push edx */
  push32((uint32_t)(EDX));
  /* 1221f731 call 0x1221f760 */
  push32(0x1221f736u); f_1221f760();
  /* 1221f736 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f739 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1221f73c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221f73f push eax */
  push32((uint32_t)(EAX));
  /* 1221f740 call 0x1221dfb0 */
  push32(0x1221f745u); f_1221dfb0();
  /* 1221f745 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1221f748:;
  /* 1221f748 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221f74b pop edi */
  EDI = (pop32());
  /* 1221f74c pop esi */
  ESI = (pop32());
  /* 1221f74d pop ebx */
  EBX = (pop32());
  /* 1221f74e mov esp, ebp */
  ESP = (EBP);
  /* 1221f750 pop ebp */
  EBP = (pop32());
  /* 1221f751 ret  */
  ESPCHK(0x1221f6d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f760 @ 0x1221f760 (190 bytes, 67 insns) */
void f_1221f760(void) {
  FTRACE(0x1221f760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221f760 push ebp */
  push32((uint32_t)(EBP));
  /* 1221f761 mov ebp, esp */
  EBP = (ESP);
  /* 1221f763 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221f766 push ebx */
  push32((uint32_t)(EBX));
  /* 1221f767 push esi */
  push32((uint32_t)(ESI));
  /* 1221f768 push edi */
  push32((uint32_t)(EDI));
  /* 1221f769 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1221f770 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221f773 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1221f776:;
  /* 1221f776 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221f77a jne 0x1221f79a */
  if (!C.zf) goto L_1221f79a;
  /* 1221f77c push 0x1223c148 */
  push32((uint32_t)(0x1223c148u));
  /* 1221f781 push 0 */
  push32((uint32_t)(0x0u));
  /* 1221f783 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 1221f785 push 0x1223c29c */
  push32((uint32_t)(0x1223c29cu));
  /* 1221f78a push 2 */
  push32((uint32_t)(0x2u));
  /* 1221f78c call 0x122141f0 */
  push32(0x1221f791u); f_122141f0();
  /* 1221f791 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f794 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221f797 jne 0x1221f79a */
  if (!C.zf) goto L_1221f79a;
  /* 1221f799 int3  */
  x86_unimpl("int3 @ 0x1221f799");
L_1221f79a:;
  /* 1221f79a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1221f79c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1221f79e jne 0x1221f776 */
  if (!C.zf) goto L_1221f776;
  /* 1221f7a0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221f7a3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1221f7a6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1221f7ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221f7ad je 0x1221f80a */
  if (C.zf) goto L_1221f80a;
  /* 1221f7af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221f7b2 push ecx */
  push32((uint32_t)(ECX));
  /* 1221f7b3 call 0x1221ea60 */
  push32(0x1221f7b8u); f_1221ea60();
  /* 1221f7b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f7bb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1221f7be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221f7c1 push edx */
  push32((uint32_t)(EDX));
  /* 1221f7c2 call 0x12221de0 */
  push32(0x1221f7c7u); f_12221de0();
  /* 1221f7c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f7ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221f7cd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1221f7d0 push ecx */
  push32((uint32_t)(ECX));
  /* 1221f7d1 call 0x12221cb0 */
  push32(0x1221f7d6u); f_12221cb0();
  /* 1221f7d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f7d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221f7db jge 0x1221f7e6 */
  if ((C.sf==C.of)) goto L_1221f7e6;
  /* 1221f7dd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1221f7e4 jmp 0x1221f80a */
  goto L_1221f80a;
L_1221f7e6:;
  /* 1221f7e6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221f7e9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221f7ed je 0x1221f80a */
  if (C.zf) goto L_1221f80a;
  /* 1221f7ef push 2 */
  push32((uint32_t)(0x2u));
  /* 1221f7f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221f7f4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1221f7f7 push ecx */
  push32((uint32_t)(ECX));
  /* 1221f7f8 call 0x12215bc0 */
  push32(0x1221f7fdu); f_12215bc0();
  /* 1221f7fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f800 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221f803 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_1221f80a:;
  /* 1221f80a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221f80d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1221f814 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221f817 pop edi */
  EDI = (pop32());
  /* 1221f818 pop esi */
  ESI = (pop32());
  /* 1221f819 pop ebx */
  EBX = (pop32());
  /* 1221f81a mov esp, ebp */
  ESP = (EBP);
  /* 1221f81c pop ebp */
  EBP = (pop32());
  /* 1221f81d ret  */
  ESPCHK(0x1221f760u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f820 @ 0x1221f820 (210 bytes, 63 insns) */
void f_1221f820(void) {
  FTRACE(0x1221f820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221f820 push ebp */
  push32((uint32_t)(EBP));
  /* 1221f821 mov ebp, esp */
  EBP = (ESP);
  /* 1221f823 push ecx */
  push32((uint32_t)(ECX));
  /* 1221f824 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221f827 cmp eax, dword ptr [0x122420dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122420dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221f82d jae 0x1221f851 */
  if (!C.cf) goto L_1221f851;
  /* 1221f82f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221f832 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1221f835 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221f838 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1221f83b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221f83e mov eax, dword ptr [ecx*4 + 0x12241fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12241fa0)));
  /* 1221f845 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1221f84a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1221f84d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1221f84f jne 0x1221f864 */
  if (!C.zf) goto L_1221f864;
L_1221f851:;
  /* 1221f851 call 0x1221d000 */
  push32(0x1221f856u); f_1221d000();
  /* 1221f856 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1221f85c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1221f85f jmp 0x1221f8ee */
  goto L_1221f8ee;
L_1221f864:;
  /* 1221f864 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221f867 push edx */
  push32((uint32_t)(EDX));
  /* 1221f868 call 0x1221e820 */
  push32(0x1221f86du); f_1221e820();
  /* 1221f86d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f870 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221f873 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1221f876 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221f879 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1221f87c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1221f87f mov edx, dword ptr [eax*4 + 0x12241fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12241fa0)));
  /* 1221f886 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1221f88b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1221f88e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221f890 je 0x1221f8cd */
  if (C.zf) goto L_1221f8cd;
  /* 1221f892 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221f895 push ecx */
  push32((uint32_t)(ECX));
  /* 1221f896 call 0x1221e6a0 */
  push32(0x1221f89bu); f_1221e6a0();
  /* 1221f89b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f89e push eax */
  push32((uint32_t)(EAX));
  /* 1221f89f call dword ptr [0x122432ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x122432ec))), 0x1221f8a5u);
  /* 1221f8a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221f8a7 jne 0x1221f8b4 */
  if (!C.zf) goto L_1221f8b4;
  /* 1221f8a9 call dword ptr [0x122433b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122433b4))), 0x1221f8afu);
  /* 1221f8af mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1221f8b2 jmp 0x1221f8bb */
  goto L_1221f8bb;
L_1221f8b4:;
  /* 1221f8b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1221f8bb:;
  /* 1221f8bb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221f8bf jne 0x1221f8c3 */
  if (!C.zf) goto L_1221f8c3;
  /* 1221f8c1 jmp 0x1221f8df */
  goto L_1221f8df;
L_1221f8c3:;
  /* 1221f8c3 call 0x1221d010 */
  push32(0x1221f8c8u); f_1221d010();
  /* 1221f8c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221f8cb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1221f8cd:;
  /* 1221f8cd call 0x1221d000 */
  push32(0x1221f8d2u); f_1221d000();
  /* 1221f8d2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1221f8d8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1221f8df:;
  /* 1221f8df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221f8e2 push eax */
  push32((uint32_t)(EAX));
  /* 1221f8e3 call 0x1221e8b0 */
  push32(0x1221f8e8u); f_1221e8b0();
  /* 1221f8e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f8eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1221f8ee:;
  /* 1221f8ee mov esp, ebp */
  ESP = (EBP);
  /* 1221f8f0 pop ebp */
  EBP = (pop32());
  /* 1221f8f1 ret  */
  ESPCHK(0x1221f820u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x1221f900 (219 bytes, 64 insns) */
void f_1221f900(void) {
  FTRACE(0x1221f900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221f900 push ebp */
  push32((uint32_t)(EBP));
  /* 1221f901 mov ebp, esp */
  EBP = (ESP);
  /* 1221f903 push ecx */
  push32((uint32_t)(ECX));
  /* 1221f904 cmp dword ptr [0x122407dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122407dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221f90b je 0x1221f9a1 */
  if (C.zf) goto L_1221f9a1;
  /* 1221f911 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1221f913 push 0x1223c2b8 */
  push32((uint32_t)(0x1223c2b8u));
  /* 1221f918 push 2 */
  push32((uint32_t)(0x2u));
  /* 1221f91a push 0xac */
  push32((uint32_t)(0xacu));
  /* 1221f91f push 1 */
  push32((uint32_t)(0x1u));
  /* 1221f921 call 0x12215540 */
  push32(0x1221f926u); f_12215540();
  /* 1221f926 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f929 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1221f92c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221f930 jne 0x1221f93c */
  if (!C.zf) goto L_1221f93c;
  /* 1221f932 mov eax, 1 */
  EAX = (0x1u);
  /* 1221f937 jmp 0x1221f9d7 */
  goto L_1221f9d7;
L_1221f93c:;
  /* 1221f93c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221f93f push eax */
  push32((uint32_t)(EAX));
  /* 1221f940 call 0x1221f9e0 */
  push32(0x1221f945u); f_1221f9e0();
  /* 1221f945 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f948 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1221f94a je 0x1221f96d */
  if (C.zf) goto L_1221f96d;
  /* 1221f94c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221f94f push ecx */
  push32((uint32_t)(ECX));
  /* 1221f950 call 0x1221ff70 */
  push32(0x1221f955u); f_1221ff70();
  /* 1221f955 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f958 push 2 */
  push32((uint32_t)(0x2u));
  /* 1221f95a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221f95d push edx */
  push32((uint32_t)(EDX));
  /* 1221f95e call 0x12215bc0 */
  push32(0x1221f963u); f_12215bc0();
  /* 1221f963 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f966 mov eax, 1 */
  EAX = (0x1u);
  /* 1221f96b jmp 0x1221f9d7 */
  goto L_1221f9d7;
L_1221f96d:;
  /* 1221f96d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221f970 mov dword ptr [0x1223fc98], eax */
  w32((uint32_t)(0x1223fc98), (EAX));
  /* 1221f975 mov ecx, dword ptr [0x122407fc] */
  ECX = (r32((uint32_t)(0x122407fc)));
  /* 1221f97b push ecx */
  push32((uint32_t)(ECX));
  /* 1221f97c call 0x1221ff70 */
  push32(0x1221f981u); f_1221ff70();
  /* 1221f981 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f984 push 2 */
  push32((uint32_t)(0x2u));
  /* 1221f986 mov edx, dword ptr [0x122407fc] */
  EDX = (r32((uint32_t)(0x122407fc)));
  /* 1221f98c push edx */
  push32((uint32_t)(EDX));
  /* 1221f98d call 0x12215bc0 */
  push32(0x1221f992u); f_12215bc0();
  /* 1221f992 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f995 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221f998 mov dword ptr [0x122407fc], eax */
  w32((uint32_t)(0x122407fc), (EAX));
  /* 1221f99d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221f99f jmp 0x1221f9d7 */
  goto L_1221f9d7;
L_1221f9a1:;
  /* 1221f9a1 mov dword ptr [0x1223fc98], 0x1223fca0 */
  w32((uint32_t)(0x1223fc98), (0x1223fca0u));
  /* 1221f9ab mov ecx, dword ptr [0x122407fc] */
  ECX = (r32((uint32_t)(0x122407fc)));
  /* 1221f9b1 push ecx */
  push32((uint32_t)(ECX));
  /* 1221f9b2 call 0x1221ff70 */
  push32(0x1221f9b7u); f_1221ff70();
  /* 1221f9b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f9ba push 2 */
  push32((uint32_t)(0x2u));
  /* 1221f9bc mov edx, dword ptr [0x122407fc] */
  EDX = (r32((uint32_t)(0x122407fc)));
  /* 1221f9c2 push edx */
  push32((uint32_t)(EDX));
  /* 1221f9c3 call 0x12215bc0 */
  push32(0x1221f9c8u); f_12215bc0();
  /* 1221f9c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221f9cb mov dword ptr [0x122407fc], 0 */
  w32((uint32_t)(0x122407fc), (0x0u));
  /* 1221f9d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1221f9d7:;
  /* 1221f9d7 mov esp, ebp */
  ESP = (EBP);
  /* 1221f9d9 pop ebp */
  EBP = (pop32());
  /* 1221f9da ret  */
  ESPCHK(0x1221f900u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f9e0 @ 0x1221f9e0 (1423 bytes, 533 insns) */
void f_1221f9e0(void) {
  FTRACE(0x1221f9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221f9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1221f9e1 mov ebp, esp */
  EBP = (ESP);
  /* 1221f9e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1221f9e6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1221f9ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1221f9ef mov ax, word ptr [0x12240836] */
  AX = (r16((uint32_t)(0x12240836)));
  /* 1221f9f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1221f9f8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1221f9fa mov cx, word ptr [0x12240838] */
  CX = (r16((uint32_t)(0x12240838)));
  /* 1221fa01 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1221fa04 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221fa08 jne 0x1221fa12 */
  if (!C.zf) goto L_1221fa12;
  /* 1221fa0a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1221fa0d jmp 0x1221ff6b */
  goto L_1221ff6b;
L_1221fa12:;
  /* 1221fa12 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221fa15 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fa18 push edx */
  push32((uint32_t)(EDX));
  /* 1221fa19 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 1221fa1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221fa1e push eax */
  push32((uint32_t)(EAX));
  /* 1221fa1f push 1 */
  push32((uint32_t)(0x1u));
  /* 1221fa21 call 0x122232f0 */
  push32(0x1221fa26u); f_122232f0();
  /* 1221fa26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fa29 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221fa2c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221fa2e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221fa31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221fa34 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fa37 push edx */
  push32((uint32_t)(EDX));
  /* 1221fa38 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1221fa3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221fa3d push eax */
  push32((uint32_t)(EAX));
  /* 1221fa3e push 1 */
  push32((uint32_t)(0x1u));
  /* 1221fa40 call 0x122232f0 */
  push32(0x1221fa45u); f_122232f0();
  /* 1221fa45 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fa48 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221fa4b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221fa4d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221fa50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221fa53 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fa56 push edx */
  push32((uint32_t)(EDX));
  /* 1221fa57 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 1221fa59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221fa5c push eax */
  push32((uint32_t)(EAX));
  /* 1221fa5d push 1 */
  push32((uint32_t)(0x1u));
  /* 1221fa5f call 0x122232f0 */
  push32(0x1221fa64u); f_122232f0();
  /* 1221fa64 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fa67 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221fa6a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221fa6c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221fa6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221fa72 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fa75 push edx */
  push32((uint32_t)(EDX));
  /* 1221fa76 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 1221fa78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221fa7b push eax */
  push32((uint32_t)(EAX));
  /* 1221fa7c push 1 */
  push32((uint32_t)(0x1u));
  /* 1221fa7e call 0x122232f0 */
  push32(0x1221fa83u); f_122232f0();
  /* 1221fa83 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fa86 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221fa89 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221fa8b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221fa8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221fa91 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fa94 push edx */
  push32((uint32_t)(EDX));
  /* 1221fa95 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 1221fa97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221fa9a push eax */
  push32((uint32_t)(EAX));
  /* 1221fa9b push 1 */
  push32((uint32_t)(0x1u));
  /* 1221fa9d call 0x122232f0 */
  push32(0x1221faa2u); f_122232f0();
  /* 1221faa2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221faa5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221faa8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221faaa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221faad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221fab0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fab3 push edx */
  push32((uint32_t)(EDX));
  /* 1221fab4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 1221fab6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221fab9 push eax */
  push32((uint32_t)(EAX));
  /* 1221faba push 1 */
  push32((uint32_t)(0x1u));
  /* 1221fabc call 0x122232f0 */
  push32(0x1221fac1u); f_122232f0();
  /* 1221fac1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fac4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221fac7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221fac9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221facc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221facf push edx */
  push32((uint32_t)(EDX));
  /* 1221fad0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1221fad2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221fad5 push eax */
  push32((uint32_t)(EAX));
  /* 1221fad6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1221fad8 call 0x122232f0 */
  push32(0x1221faddu); f_122232f0();
  /* 1221fadd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fae0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221fae3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221fae5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221fae8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221faeb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221faee push edx */
  push32((uint32_t)(EDX));
  /* 1221faef push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1221faf1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221faf4 push eax */
  push32((uint32_t)(EAX));
  /* 1221faf5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1221faf7 call 0x122232f0 */
  push32(0x1221fafcu); f_122232f0();
  /* 1221fafc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221faff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221fb02 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221fb04 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221fb07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221fb0a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fb0d push edx */
  push32((uint32_t)(EDX));
  /* 1221fb0e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 1221fb10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221fb13 push eax */
  push32((uint32_t)(EAX));
  /* 1221fb14 push 1 */
  push32((uint32_t)(0x1u));
  /* 1221fb16 call 0x122232f0 */
  push32(0x1221fb1bu); f_122232f0();
  /* 1221fb1b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fb1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221fb21 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221fb23 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221fb26 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221fb29 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fb2c push edx */
  push32((uint32_t)(EDX));
  /* 1221fb2d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1221fb2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221fb32 push eax */
  push32((uint32_t)(EAX));
  /* 1221fb33 push 1 */
  push32((uint32_t)(0x1u));
  /* 1221fb35 call 0x122232f0 */
  push32(0x1221fb3au); f_122232f0();
  /* 1221fb3a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fb3d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221fb40 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221fb42 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221fb45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221fb48 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fb4b push edx */
  push32((uint32_t)(EDX));
  /* 1221fb4c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1221fb4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221fb51 push eax */
  push32((uint32_t)(EAX));
  /* 1221fb52 push 1 */
  push32((uint32_t)(0x1u));
  /* 1221fb54 call 0x122232f0 */
  push32(0x1221fb59u); f_122232f0();
  /* 1221fb59 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fb5c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221fb5f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221fb61 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221fb64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221fb67 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fb6a push edx */
  push32((uint32_t)(EDX));
  /* 1221fb6b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1221fb6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221fb70 push eax */
  push32((uint32_t)(EAX));
  /* 1221fb71 push 1 */
  push32((uint32_t)(0x1u));
  /* 1221fb73 call 0x122232f0 */
  push32(0x1221fb78u); f_122232f0();
  /* 1221fb78 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fb7b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221fb7e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221fb80 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221fb83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221fb86 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fb89 push edx */
  push32((uint32_t)(EDX));
  /* 1221fb8a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1221fb8c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221fb8f push eax */
  push32((uint32_t)(EAX));
  /* 1221fb90 push 1 */
  push32((uint32_t)(0x1u));
  /* 1221fb92 call 0x122232f0 */
  push32(0x1221fb97u); f_122232f0();
  /* 1221fb97 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fb9a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221fb9d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221fb9f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221fba2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221fba5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fba8 push edx */
  push32((uint32_t)(EDX));
  /* 1221fba9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1221fbab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221fbae push eax */
  push32((uint32_t)(EAX));
  /* 1221fbaf push 1 */
  push32((uint32_t)(0x1u));
  /* 1221fbb1 call 0x122232f0 */
  push32(0x1221fbb6u); f_122232f0();
  /* 1221fbb6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fbb9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221fbbc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221fbbe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221fbc1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221fbc4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fbc7 push edx */
  push32((uint32_t)(EDX));
  /* 1221fbc8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1221fbca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221fbcd push eax */
  push32((uint32_t)(EAX));
  /* 1221fbce push 1 */
  push32((uint32_t)(0x1u));
  /* 1221fbd0 call 0x122232f0 */
  push32(0x1221fbd5u); f_122232f0();
  /* 1221fbd5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fbd8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221fbdb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221fbdd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221fbe0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221fbe3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fbe6 push edx */
  push32((uint32_t)(EDX));
  /* 1221fbe7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 1221fbe9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221fbec push eax */
  push32((uint32_t)(EAX));
  /* 1221fbed push 1 */
  push32((uint32_t)(0x1u));
  /* 1221fbef call 0x122232f0 */
  push32(0x1221fbf4u); f_122232f0();
  /* 1221fbf4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fbf7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221fbfa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221fbfc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221fbff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221fc02 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fc05 push edx */
  push32((uint32_t)(EDX));
  /* 1221fc06 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1221fc08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221fc0b push eax */
  push32((uint32_t)(EAX));
  /* 1221fc0c push 1 */
  push32((uint32_t)(0x1u));
  /* 1221fc0e call 0x122232f0 */
  push32(0x1221fc13u); f_122232f0();
  /* 1221fc13 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fc16 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221fc19 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221fc1b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221fc1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221fc21 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fc24 push edx */
  push32((uint32_t)(EDX));
  /* 1221fc25 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 1221fc27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221fc2a push eax */
  push32((uint32_t)(EAX));
  /* 1221fc2b push 1 */
  push32((uint32_t)(0x1u));
  /* 1221fc2d call 0x122232f0 */
  push32(0x1221fc32u); f_122232f0();
  /* 1221fc32 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fc35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221fc38 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221fc3a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221fc3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221fc40 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fc43 push edx */
  push32((uint32_t)(EDX));
  /* 1221fc44 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1221fc46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221fc49 push eax */
  push32((uint32_t)(EAX));
  /* 1221fc4a push 1 */
  push32((uint32_t)(0x1u));
  /* 1221fc4c call 0x122232f0 */
  push32(0x1221fc51u); f_122232f0();
  /* 1221fc51 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fc54 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221fc57 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221fc59 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221fc5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221fc5f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fc62 push edx */
  push32((uint32_t)(EDX));
  /* 1221fc63 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 1221fc65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221fc68 push eax */
  push32((uint32_t)(EAX));
  /* 1221fc69 push 1 */
  push32((uint32_t)(0x1u));
  /* 1221fc6b call 0x122232f0 */
  push32(0x1221fc70u); f_122232f0();
  /* 1221fc70 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fc73 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221fc76 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221fc78 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221fc7b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221fc7e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fc81 push edx */
  push32((uint32_t)(EDX));
  /* 1221fc82 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1221fc84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221fc87 push eax */
  push32((uint32_t)(EAX));
  /* 1221fc88 push 1 */
  push32((uint32_t)(0x1u));
  /* 1221fc8a call 0x122232f0 */
  push32(0x1221fc8fu); f_122232f0();
  /* 1221fc8f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fc92 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221fc95 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221fc97 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221fc9a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221fc9d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fca0 push edx */
  push32((uint32_t)(EDX));
  /* 1221fca1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 1221fca3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221fca6 push eax */
  push32((uint32_t)(EAX));
  /* 1221fca7 push 1 */
  push32((uint32_t)(0x1u));
  /* 1221fca9 call 0x122232f0 */
  push32(0x1221fcaeu); f_122232f0();
  /* 1221fcae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fcb1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221fcb4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221fcb6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221fcb9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221fcbc add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fcbf push edx */
  push32((uint32_t)(EDX));
  /* 1221fcc0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 1221fcc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221fcc5 push eax */
  push32((uint32_t)(EAX));
  /* 1221fcc6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1221fcc8 call 0x122232f0 */
  push32(0x1221fccdu); f_122232f0();
  /* 1221fccd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fcd0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221fcd3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221fcd5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221fcd8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221fcdb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fcde push edx */
  push32((uint32_t)(EDX));
  /* 1221fcdf push 0x4d */
  push32((uint32_t)(0x4du));
  /* 1221fce1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221fce4 push eax */
  push32((uint32_t)(EAX));
  /* 1221fce5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1221fce7 call 0x122232f0 */
  push32(0x1221fcecu); f_122232f0();
  /* 1221fcec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fcef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221fcf2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221fcf4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221fcf7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221fcfa add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fcfd push edx */
  push32((uint32_t)(EDX));
  /* 1221fcfe push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 1221fd00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221fd03 push eax */
  push32((uint32_t)(EAX));
  /* 1221fd04 push 1 */
  push32((uint32_t)(0x1u));
  /* 1221fd06 call 0x122232f0 */
  push32(0x1221fd0bu); f_122232f0();
  /* 1221fd0b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fd0e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221fd11 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221fd13 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221fd16 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221fd19 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fd1c push edx */
  push32((uint32_t)(EDX));
  /* 1221fd1d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1221fd1f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221fd22 push eax */
  push32((uint32_t)(EAX));
  /* 1221fd23 push 1 */
  push32((uint32_t)(0x1u));
  /* 1221fd25 call 0x122232f0 */
  push32(0x1221fd2au); f_122232f0();
  /* 1221fd2a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fd2d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221fd30 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221fd32 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221fd35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221fd38 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fd3b push edx */
  push32((uint32_t)(EDX));
  /* 1221fd3c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1221fd3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221fd41 push eax */
  push32((uint32_t)(EAX));
  /* 1221fd42 push 1 */
  push32((uint32_t)(0x1u));
  /* 1221fd44 call 0x122232f0 */
  push32(0x1221fd49u); f_122232f0();
  /* 1221fd49 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fd4c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221fd4f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221fd51 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221fd54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221fd57 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fd5a push edx */
  push32((uint32_t)(EDX));
  /* 1221fd5b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1221fd5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221fd60 push eax */
  push32((uint32_t)(EAX));
  /* 1221fd61 push 1 */
  push32((uint32_t)(0x1u));
  /* 1221fd63 call 0x122232f0 */
  push32(0x1221fd68u); f_122232f0();
  /* 1221fd68 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fd6b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221fd6e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221fd70 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221fd73 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221fd76 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fd79 push edx */
  push32((uint32_t)(EDX));
  /* 1221fd7a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1221fd7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221fd7f push eax */
  push32((uint32_t)(EAX));
  /* 1221fd80 push 1 */
  push32((uint32_t)(0x1u));
  /* 1221fd82 call 0x122232f0 */
  push32(0x1221fd87u); f_122232f0();
  /* 1221fd87 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fd8a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221fd8d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221fd8f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221fd92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221fd95 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fd98 push edx */
  push32((uint32_t)(EDX));
  /* 1221fd99 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1221fd9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221fd9e push eax */
  push32((uint32_t)(EAX));
  /* 1221fd9f push 1 */
  push32((uint32_t)(0x1u));
  /* 1221fda1 call 0x122232f0 */
  push32(0x1221fda6u); f_122232f0();
  /* 1221fda6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fda9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221fdac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221fdae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221fdb1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221fdb4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fdb7 push edx */
  push32((uint32_t)(EDX));
  /* 1221fdb8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1221fdba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221fdbd push eax */
  push32((uint32_t)(EAX));
  /* 1221fdbe push 1 */
  push32((uint32_t)(0x1u));
  /* 1221fdc0 call 0x122232f0 */
  push32(0x1221fdc5u); f_122232f0();
  /* 1221fdc5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fdc8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221fdcb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221fdcd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221fdd0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221fdd3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fdd6 push edx */
  push32((uint32_t)(EDX));
  /* 1221fdd7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1221fdd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221fddc push eax */
  push32((uint32_t)(EAX));
  /* 1221fddd push 1 */
  push32((uint32_t)(0x1u));
  /* 1221fddf call 0x122232f0 */
  push32(0x1221fde4u); f_122232f0();
  /* 1221fde4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fde7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221fdea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221fdec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221fdef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221fdf2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fdf8 push edx */
  push32((uint32_t)(EDX));
  /* 1221fdf9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 1221fdfb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221fdfe push eax */
  push32((uint32_t)(EAX));
  /* 1221fdff push 1 */
  push32((uint32_t)(0x1u));
  /* 1221fe01 call 0x122232f0 */
  push32(0x1221fe06u); f_122232f0();
  /* 1221fe06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fe09 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221fe0c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221fe0e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221fe11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221fe14 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fe1a push edx */
  push32((uint32_t)(EDX));
  /* 1221fe1b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1221fe1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221fe20 push eax */
  push32((uint32_t)(EAX));
  /* 1221fe21 push 1 */
  push32((uint32_t)(0x1u));
  /* 1221fe23 call 0x122232f0 */
  push32(0x1221fe28u); f_122232f0();
  /* 1221fe28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fe2b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221fe2e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221fe30 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221fe33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221fe36 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fe3c push edx */
  push32((uint32_t)(EDX));
  /* 1221fe3d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1221fe3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221fe42 push eax */
  push32((uint32_t)(EAX));
  /* 1221fe43 push 1 */
  push32((uint32_t)(0x1u));
  /* 1221fe45 call 0x122232f0 */
  push32(0x1221fe4au); f_122232f0();
  /* 1221fe4a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fe4d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221fe50 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221fe52 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221fe55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221fe58 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fe5e push edx */
  push32((uint32_t)(EDX));
  /* 1221fe5f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1221fe61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221fe64 push eax */
  push32((uint32_t)(EAX));
  /* 1221fe65 push 1 */
  push32((uint32_t)(0x1u));
  /* 1221fe67 call 0x122232f0 */
  push32(0x1221fe6cu); f_122232f0();
  /* 1221fe6c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fe6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221fe72 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221fe74 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221fe77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221fe7a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fe80 push edx */
  push32((uint32_t)(EDX));
  /* 1221fe81 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1221fe83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221fe86 push eax */
  push32((uint32_t)(EAX));
  /* 1221fe87 push 1 */
  push32((uint32_t)(0x1u));
  /* 1221fe89 call 0x122232f0 */
  push32(0x1221fe8eu); f_122232f0();
  /* 1221fe8e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fe91 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221fe94 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221fe96 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221fe99 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221fe9c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fea2 push edx */
  push32((uint32_t)(EDX));
  /* 1221fea3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1221fea5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221fea8 push eax */
  push32((uint32_t)(EAX));
  /* 1221fea9 push 1 */
  push32((uint32_t)(0x1u));
  /* 1221feab call 0x122232f0 */
  push32(0x1221feb0u); f_122232f0();
  /* 1221feb0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221feb3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221feb6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221feb8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221febb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221febe add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fec4 push edx */
  push32((uint32_t)(EDX));
  /* 1221fec5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1221fec7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221feca push eax */
  push32((uint32_t)(EAX));
  /* 1221fecb push 1 */
  push32((uint32_t)(0x1u));
  /* 1221fecd call 0x122232f0 */
  push32(0x1221fed2u); f_122232f0();
  /* 1221fed2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fed5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221fed8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221feda mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221fedd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221fee0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fee6 push edx */
  push32((uint32_t)(EDX));
  /* 1221fee7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 1221fee9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1221feec push eax */
  push32((uint32_t)(EAX));
  /* 1221feed push 1 */
  push32((uint32_t)(0x1u));
  /* 1221feef call 0x122232f0 */
  push32(0x1221fef4u); f_122232f0();
  /* 1221fef4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fef7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221fefa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221fefc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221feff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221ff02 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ff08 push edx */
  push32((uint32_t)(EDX));
  /* 1221ff09 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1221ff0b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221ff0e push eax */
  push32((uint32_t)(EAX));
  /* 1221ff0f push 1 */
  push32((uint32_t)(0x1u));
  /* 1221ff11 call 0x122232f0 */
  push32(0x1221ff16u); f_122232f0();
  /* 1221ff16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ff19 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221ff1c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221ff1e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221ff21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221ff24 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ff2a push edx */
  push32((uint32_t)(EDX));
  /* 1221ff2b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1221ff2d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221ff30 push eax */
  push32((uint32_t)(EAX));
  /* 1221ff31 push 1 */
  push32((uint32_t)(0x1u));
  /* 1221ff33 call 0x122232f0 */
  push32(0x1221ff38u); f_122232f0();
  /* 1221ff38 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ff3b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221ff3e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221ff40 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221ff43 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221ff46 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ff4c push edx */
  push32((uint32_t)(EDX));
  /* 1221ff4d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 1221ff52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1221ff55 push eax */
  push32((uint32_t)(EAX));
  /* 1221ff56 push 1 */
  push32((uint32_t)(0x1u));
  /* 1221ff58 call 0x122232f0 */
  push32(0x1221ff5du); f_122232f0();
  /* 1221ff5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ff60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1221ff63 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1221ff65 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1221ff68 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1221ff6b:;
  /* 1221ff6b mov esp, ebp */
  ESP = (EBP);
  /* 1221ff6d pop ebp */
  EBP = (pop32());
  /* 1221ff6e ret  */
  ESPCHK(0x1221f9e0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x1221ff70 (779 bytes, 265 insns) */
void f_1221ff70(void) {
  FTRACE(0x1221ff70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1221ff70 push ebp */
  push32((uint32_t)(EBP));
  /* 1221ff71 mov ebp, esp */
  EBP = (ESP);
  /* 1221ff73 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1221ff77 jne 0x1221ff7e */
  if (!C.zf) goto L_1221ff7e;
  /* 1221ff79 jmp 0x12220279 */
  goto L_12220279;
L_1221ff7e:;
  /* 1221ff7e push 2 */
  push32((uint32_t)(0x2u));
  /* 1221ff80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221ff83 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1221ff86 push ecx */
  push32((uint32_t)(ECX));
  /* 1221ff87 call 0x12215bc0 */
  push32(0x1221ff8cu); f_12215bc0();
  /* 1221ff8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ff8f push 2 */
  push32((uint32_t)(0x2u));
  /* 1221ff91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221ff94 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1221ff97 push eax */
  push32((uint32_t)(EAX));
  /* 1221ff98 call 0x12215bc0 */
  push32(0x1221ff9du); f_12215bc0();
  /* 1221ff9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ffa0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1221ffa2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221ffa5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1221ffa8 push edx */
  push32((uint32_t)(EDX));
  /* 1221ffa9 call 0x12215bc0 */
  push32(0x1221ffaeu); f_12215bc0();
  /* 1221ffae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ffb1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1221ffb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221ffb6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1221ffb9 push ecx */
  push32((uint32_t)(ECX));
  /* 1221ffba call 0x12215bc0 */
  push32(0x1221ffbfu); f_12215bc0();
  /* 1221ffbf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ffc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1221ffc4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221ffc7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1221ffca push eax */
  push32((uint32_t)(EAX));
  /* 1221ffcb call 0x12215bc0 */
  push32(0x1221ffd0u); f_12215bc0();
  /* 1221ffd0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ffd3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1221ffd5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221ffd8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1221ffdb push edx */
  push32((uint32_t)(EDX));
  /* 1221ffdc call 0x12215bc0 */
  push32(0x1221ffe1u); f_12215bc0();
  /* 1221ffe1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221ffe4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1221ffe6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221ffe9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1221ffeb push ecx */
  push32((uint32_t)(ECX));
  /* 1221ffec call 0x12215bc0 */
  push32(0x1221fff1u); f_12215bc0();
  /* 1221fff1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1221fff4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1221fff6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1221fff9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1221fffc push eax */
  push32((uint32_t)(EAX));
  /* 1221fffd call 0x12215bc0 */
  push32(0x12220002u); f_12215bc0();
  /* 12220002 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220005 push 2 */
  push32((uint32_t)(0x2u));
  /* 12220007 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222000a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1222000d push edx */
  push32((uint32_t)(EDX));
  /* 1222000e call 0x12215bc0 */
  push32(0x12220013u); f_12215bc0();
  /* 12220013 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220016 push 2 */
  push32((uint32_t)(0x2u));
  /* 12220018 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222001b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1222001e push ecx */
  push32((uint32_t)(ECX));
  /* 1222001f call 0x12215bc0 */
  push32(0x12220024u); f_12215bc0();
  /* 12220024 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220027 push 2 */
  push32((uint32_t)(0x2u));
  /* 12220029 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222002c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 1222002f push eax */
  push32((uint32_t)(EAX));
  /* 12220030 call 0x12215bc0 */
  push32(0x12220035u); f_12215bc0();
  /* 12220035 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220038 push 2 */
  push32((uint32_t)(0x2u));
  /* 1222003a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222003d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12220040 push edx */
  push32((uint32_t)(EDX));
  /* 12220041 call 0x12215bc0 */
  push32(0x12220046u); f_12215bc0();
  /* 12220046 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220049 push 2 */
  push32((uint32_t)(0x2u));
  /* 1222004b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222004e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 12220051 push ecx */
  push32((uint32_t)(ECX));
  /* 12220052 call 0x12215bc0 */
  push32(0x12220057u); f_12215bc0();
  /* 12220057 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222005a push 2 */
  push32((uint32_t)(0x2u));
  /* 1222005c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222005f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12220062 push eax */
  push32((uint32_t)(EAX));
  /* 12220063 call 0x12215bc0 */
  push32(0x12220068u); f_12215bc0();
  /* 12220068 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222006b push 2 */
  push32((uint32_t)(0x2u));
  /* 1222006d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12220070 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 12220073 push edx */
  push32((uint32_t)(EDX));
  /* 12220074 call 0x12215bc0 */
  push32(0x12220079u); f_12215bc0();
  /* 12220079 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222007c push 2 */
  push32((uint32_t)(0x2u));
  /* 1222007e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12220081 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 12220084 push ecx */
  push32((uint32_t)(ECX));
  /* 12220085 call 0x12215bc0 */
  push32(0x1222008au); f_12215bc0();
  /* 1222008a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222008d push 2 */
  push32((uint32_t)(0x2u));
  /* 1222008f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12220092 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12220095 push eax */
  push32((uint32_t)(EAX));
  /* 12220096 call 0x12215bc0 */
  push32(0x1222009bu); f_12215bc0();
  /* 1222009b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222009e push 2 */
  push32((uint32_t)(0x2u));
  /* 122200a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122200a3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 122200a6 push edx */
  push32((uint32_t)(EDX));
  /* 122200a7 call 0x12215bc0 */
  push32(0x122200acu); f_12215bc0();
  /* 122200ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122200af push 2 */
  push32((uint32_t)(0x2u));
  /* 122200b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122200b4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 122200b7 push ecx */
  push32((uint32_t)(ECX));
  /* 122200b8 call 0x12215bc0 */
  push32(0x122200bdu); f_12215bc0();
  /* 122200bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122200c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 122200c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122200c5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 122200c8 push eax */
  push32((uint32_t)(EAX));
  /* 122200c9 call 0x12215bc0 */
  push32(0x122200ceu); f_12215bc0();
  /* 122200ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122200d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 122200d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122200d6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 122200d9 push edx */
  push32((uint32_t)(EDX));
  /* 122200da call 0x12215bc0 */
  push32(0x122200dfu); f_12215bc0();
  /* 122200df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122200e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 122200e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122200e7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 122200ea push ecx */
  push32((uint32_t)(ECX));
  /* 122200eb call 0x12215bc0 */
  push32(0x122200f0u); f_12215bc0();
  /* 122200f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122200f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 122200f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122200f8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 122200fb push eax */
  push32((uint32_t)(EAX));
  /* 122200fc call 0x12215bc0 */
  push32(0x12220101u); f_12215bc0();
  /* 12220101 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220104 push 2 */
  push32((uint32_t)(0x2u));
  /* 12220106 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12220109 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 1222010c push edx */
  push32((uint32_t)(EDX));
  /* 1222010d call 0x12215bc0 */
  push32(0x12220112u); f_12215bc0();
  /* 12220112 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220115 push 2 */
  push32((uint32_t)(0x2u));
  /* 12220117 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222011a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 1222011d push ecx */
  push32((uint32_t)(ECX));
  /* 1222011e call 0x12215bc0 */
  push32(0x12220123u); f_12215bc0();
  /* 12220123 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220126 push 2 */
  push32((uint32_t)(0x2u));
  /* 12220128 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222012b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 1222012e push eax */
  push32((uint32_t)(EAX));
  /* 1222012f call 0x12215bc0 */
  push32(0x12220134u); f_12215bc0();
  /* 12220134 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220137 push 2 */
  push32((uint32_t)(0x2u));
  /* 12220139 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222013c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 1222013f push edx */
  push32((uint32_t)(EDX));
  /* 12220140 call 0x12215bc0 */
  push32(0x12220145u); f_12215bc0();
  /* 12220145 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220148 push 2 */
  push32((uint32_t)(0x2u));
  /* 1222014a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222014d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 12220150 push ecx */
  push32((uint32_t)(ECX));
  /* 12220151 call 0x12215bc0 */
  push32(0x12220156u); f_12215bc0();
  /* 12220156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220159 push 2 */
  push32((uint32_t)(0x2u));
  /* 1222015b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222015e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 12220161 push eax */
  push32((uint32_t)(EAX));
  /* 12220162 call 0x12215bc0 */
  push32(0x12220167u); f_12215bc0();
  /* 12220167 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222016a push 2 */
  push32((uint32_t)(0x2u));
  /* 1222016c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222016f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 12220172 push edx */
  push32((uint32_t)(EDX));
  /* 12220173 call 0x12215bc0 */
  push32(0x12220178u); f_12215bc0();
  /* 12220178 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222017b push 2 */
  push32((uint32_t)(0x2u));
  /* 1222017d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12220180 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 12220183 push ecx */
  push32((uint32_t)(ECX));
  /* 12220184 call 0x12215bc0 */
  push32(0x12220189u); f_12215bc0();
  /* 12220189 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222018c push 2 */
  push32((uint32_t)(0x2u));
  /* 1222018e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12220191 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 12220194 push eax */
  push32((uint32_t)(EAX));
  /* 12220195 call 0x12215bc0 */
  push32(0x1222019au); f_12215bc0();
  /* 1222019a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222019d push 2 */
  push32((uint32_t)(0x2u));
  /* 1222019f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122201a2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 122201a8 push edx */
  push32((uint32_t)(EDX));
  /* 122201a9 call 0x12215bc0 */
  push32(0x122201aeu); f_12215bc0();
  /* 122201ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122201b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 122201b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122201b6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 122201bc push ecx */
  push32((uint32_t)(ECX));
  /* 122201bd call 0x12215bc0 */
  push32(0x122201c2u); f_12215bc0();
  /* 122201c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122201c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 122201c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122201ca mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 122201d0 push eax */
  push32((uint32_t)(EAX));
  /* 122201d1 call 0x12215bc0 */
  push32(0x122201d6u); f_12215bc0();
  /* 122201d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122201d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 122201db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122201de mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 122201e4 push edx */
  push32((uint32_t)(EDX));
  /* 122201e5 call 0x12215bc0 */
  push32(0x122201eau); f_12215bc0();
  /* 122201ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122201ed push 2 */
  push32((uint32_t)(0x2u));
  /* 122201ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122201f2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 122201f8 push ecx */
  push32((uint32_t)(ECX));
  /* 122201f9 call 0x12215bc0 */
  push32(0x122201feu); f_12215bc0();
  /* 122201fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220201 push 2 */
  push32((uint32_t)(0x2u));
  /* 12220203 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12220206 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 1222020c push eax */
  push32((uint32_t)(EAX));
  /* 1222020d call 0x12215bc0 */
  push32(0x12220212u); f_12215bc0();
  /* 12220212 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220215 push 2 */
  push32((uint32_t)(0x2u));
  /* 12220217 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222021a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 12220220 push edx */
  push32((uint32_t)(EDX));
  /* 12220221 call 0x12215bc0 */
  push32(0x12220226u); f_12215bc0();
  /* 12220226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220229 push 2 */
  push32((uint32_t)(0x2u));
  /* 1222022b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222022e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12220234 push ecx */
  push32((uint32_t)(ECX));
  /* 12220235 call 0x12215bc0 */
  push32(0x1222023au); f_12215bc0();
  /* 1222023a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222023d push 2 */
  push32((uint32_t)(0x2u));
  /* 1222023f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12220242 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12220248 push eax */
  push32((uint32_t)(EAX));
  /* 12220249 call 0x12215bc0 */
  push32(0x1222024eu); f_12215bc0();
  /* 1222024e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220251 push 2 */
  push32((uint32_t)(0x2u));
  /* 12220253 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12220256 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1222025c push edx */
  push32((uint32_t)(EDX));
  /* 1222025d call 0x12215bc0 */
  push32(0x12220262u); f_12215bc0();
  /* 12220262 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220265 push 2 */
  push32((uint32_t)(0x2u));
  /* 12220267 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222026a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 12220270 push ecx */
  push32((uint32_t)(ECX));
  /* 12220271 call 0x12215bc0 */
  push32(0x12220276u); f_12215bc0();
  /* 12220276 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12220279:;
  /* 12220279 pop ebp */
  EBP = (pop32());
  /* 1222027a ret  */
  ESPCHK(0x1221ff70u, _esp0);
  ESP += 4; return;
}

/* FUN_10010280 @ 0x12220280 (678 bytes, 180 insns) */
void f_12220280(void) {
  FTRACE(0x12220280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12220280 push ebp */
  push32((uint32_t)(EBP));
  /* 12220281 mov ebp, esp */
  EBP = (ESP);
  /* 12220283 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12220286 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1222028d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1222028f mov ax, word ptr [0x12240832] */
  AX = (r16((uint32_t)(0x12240832)));
  /* 12220295 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12220298 cmp dword ptr [0x122407d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122407d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222029f je 0x122203fa */
  if (C.zf) goto L_122203fa;
  /* 122202a5 push 0x12240800 */
  push32((uint32_t)(0x12240800u));
  /* 122202aa push 0xe */
  push32((uint32_t)(0xeu));
  /* 122202ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122202af push ecx */
  push32((uint32_t)(ECX));
  /* 122202b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 122202b2 call 0x122232f0 */
  push32(0x122202b7u); f_122232f0();
  /* 122202b7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122202ba mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122202bd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 122202bf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 122202c2 push 0x12240804 */
  push32((uint32_t)(0x12240804u));
  /* 122202c7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 122202c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122202cc push eax */
  push32((uint32_t)(EAX));
  /* 122202cd push 1 */
  push32((uint32_t)(0x1u));
  /* 122202cf call 0x122232f0 */
  push32(0x122202d4u); f_122232f0();
  /* 122202d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122202d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122202da or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122202dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122202df push 0x12240808 */
  push32((uint32_t)(0x12240808u));
  /* 122202e4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 122202e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122202e9 push edx */
  push32((uint32_t)(EDX));
  /* 122202ea push 1 */
  push32((uint32_t)(0x1u));
  /* 122202ec call 0x122232f0 */
  push32(0x122202f1u); f_122232f0();
  /* 122202f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122202f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122202f7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122202f9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122202fc mov edx, dword ptr [0x12240808] */
  EDX = (r32((uint32_t)(0x12240808)));
  /* 12220302 push edx */
  push32((uint32_t)(EDX));
  /* 12220303 call 0x12220530 */
  push32(0x12220308u); f_12220530();
  /* 12220308 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222030b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222030f je 0x12220369 */
  if (C.zf) goto L_12220369;
  /* 12220311 push 2 */
  push32((uint32_t)(0x2u));
  /* 12220313 mov eax, dword ptr [0x12240800] */
  EAX = (r32((uint32_t)(0x12240800)));
  /* 12220318 push eax */
  push32((uint32_t)(EAX));
  /* 12220319 call 0x12215bc0 */
  push32(0x1222031eu); f_12215bc0();
  /* 1222031e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220321 push 2 */
  push32((uint32_t)(0x2u));
  /* 12220323 mov ecx, dword ptr [0x12240804] */
  ECX = (r32((uint32_t)(0x12240804)));
  /* 12220329 push ecx */
  push32((uint32_t)(ECX));
  /* 1222032a call 0x12215bc0 */
  push32(0x1222032fu); f_12215bc0();
  /* 1222032f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220332 push 2 */
  push32((uint32_t)(0x2u));
  /* 12220334 mov edx, dword ptr [0x12240808] */
  EDX = (r32((uint32_t)(0x12240808)));
  /* 1222033a push edx */
  push32((uint32_t)(EDX));
  /* 1222033b call 0x12215bc0 */
  push32(0x12220340u); f_12215bc0();
  /* 12220340 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220343 mov dword ptr [0x12240800], 0 */
  w32((uint32_t)(0x12240800), (0x0u));
  /* 1222034d mov dword ptr [0x12240804], 0 */
  w32((uint32_t)(0x12240804), (0x0u));
  /* 12220357 mov dword ptr [0x12240808], 0 */
  w32((uint32_t)(0x12240808), (0x0u));
  /* 12220361 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12220364 jmp 0x12220522 */
  goto L_12220522;
L_12220369:;
  /* 12220369 mov eax, dword ptr [0x1223fd88] */
  EAX = (r32((uint32_t)(0x1223fd88)));
  /* 1222036e cmp dword ptr [eax], 0x1223fd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1223fd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12220374 je 0x122203b0 */
  if (C.zf) goto L_122203b0;
  /* 12220376 push 2 */
  push32((uint32_t)(0x2u));
  /* 12220378 mov ecx, dword ptr [0x1223fd88] */
  ECX = (r32((uint32_t)(0x1223fd88)));
  /* 1222037e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12220380 push edx */
  push32((uint32_t)(EDX));
  /* 12220381 call 0x12215bc0 */
  push32(0x12220386u); f_12215bc0();
  /* 12220386 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220389 push 2 */
  push32((uint32_t)(0x2u));
  /* 1222038b mov eax, dword ptr [0x1223fd88] */
  EAX = (r32((uint32_t)(0x1223fd88)));
  /* 12220390 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12220393 push ecx */
  push32((uint32_t)(ECX));
  /* 12220394 call 0x12215bc0 */
  push32(0x12220399u); f_12215bc0();
  /* 12220399 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222039c push 2 */
  push32((uint32_t)(0x2u));
  /* 1222039e mov edx, dword ptr [0x1223fd88] */
  EDX = (r32((uint32_t)(0x1223fd88)));
  /* 122203a4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 122203a7 push eax */
  push32((uint32_t)(EAX));
  /* 122203a8 call 0x12215bc0 */
  push32(0x122203adu); f_12215bc0();
  /* 122203ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122203b0:;
  /* 122203b0 mov ecx, dword ptr [0x1223fd88] */
  ECX = (r32((uint32_t)(0x1223fd88)));
  /* 122203b6 mov edx, dword ptr [0x12240800] */
  EDX = (r32((uint32_t)(0x12240800)));
  /* 122203bc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 122203be mov eax, dword ptr [0x1223fd88] */
  EAX = (r32((uint32_t)(0x1223fd88)));
  /* 122203c3 mov ecx, dword ptr [0x12240804] */
  ECX = (r32((uint32_t)(0x12240804)));
  /* 122203c9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 122203cc mov edx, dword ptr [0x1223fd88] */
  EDX = (r32((uint32_t)(0x1223fd88)));
  /* 122203d2 mov eax, dword ptr [0x12240808] */
  EAX = (r32((uint32_t)(0x12240808)));
  /* 122203d7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 122203da mov ecx, dword ptr [0x1223fd88] */
  ECX = (r32((uint32_t)(0x1223fd88)));
  /* 122203e0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122203e2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122203e4 mov byte ptr [0x1223eea8], al */
  w8((uint32_t)(0x1223eea8), (AL));
  /* 122203e9 mov dword ptr [0x1223eeac], 1 */
  w32((uint32_t)(0x1223eeac), (0x1u));
  /* 122203f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122203f5 jmp 0x12220522 */
  goto L_12220522;
L_122203fa:;
  /* 122203fa push 2 */
  push32((uint32_t)(0x2u));
  /* 122203fc mov ecx, dword ptr [0x12240800] */
  ECX = (r32((uint32_t)(0x12240800)));
  /* 12220402 push ecx */
  push32((uint32_t)(ECX));
  /* 12220403 call 0x12215bc0 */
  push32(0x12220408u); f_12215bc0();
  /* 12220408 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222040b push 2 */
  push32((uint32_t)(0x2u));
  /* 1222040d mov edx, dword ptr [0x12240804] */
  EDX = (r32((uint32_t)(0x12240804)));
  /* 12220413 push edx */
  push32((uint32_t)(EDX));
  /* 12220414 call 0x12215bc0 */
  push32(0x12220419u); f_12215bc0();
  /* 12220419 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222041c push 2 */
  push32((uint32_t)(0x2u));
  /* 1222041e mov eax, dword ptr [0x12240808] */
  EAX = (r32((uint32_t)(0x12240808)));
  /* 12220423 push eax */
  push32((uint32_t)(EAX));
  /* 12220424 call 0x12215bc0 */
  push32(0x12220429u); f_12215bc0();
  /* 12220429 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222042c mov dword ptr [0x12240800], 0 */
  w32((uint32_t)(0x12240800), (0x0u));
  /* 12220436 mov dword ptr [0x12240804], 0 */
  w32((uint32_t)(0x12240804), (0x0u));
  /* 12220440 mov dword ptr [0x12240808], 0 */
  w32((uint32_t)(0x12240808), (0x0u));
  /* 1222044a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1222044f push 0x1223c2c4 */
  push32((uint32_t)(0x1223c2c4u));
  /* 12220454 push 2 */
  push32((uint32_t)(0x2u));
  /* 12220456 push 2 */
  push32((uint32_t)(0x2u));
  /* 12220458 call 0x12215130 */
  push32(0x1222045du); f_12215130();
  /* 1222045d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220460 mov ecx, dword ptr [0x1223fd88] */
  ECX = (r32((uint32_t)(0x1223fd88)));
  /* 12220466 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12220468 mov edx, dword ptr [0x1223fd88] */
  EDX = (r32((uint32_t)(0x1223fd88)));
  /* 1222046e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12220471 jne 0x1222047b */
  if (!C.zf) goto L_1222047b;
  /* 12220473 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12220476 jmp 0x12220522 */
  goto L_12220522;
L_1222047b:;
  /* 1222047b push 0x1223c294 */
  push32((uint32_t)(0x1223c294u));
  /* 12220480 mov eax, dword ptr [0x1223fd88] */
  EAX = (r32((uint32_t)(0x1223fd88)));
  /* 12220485 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12220487 push ecx */
  push32((uint32_t)(ECX));
  /* 12220488 call 0x122180e0 */
  push32(0x1222048du); f_122180e0();
  /* 1222048d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220490 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 12220495 push 0x1223c2c4 */
  push32((uint32_t)(0x1223c2c4u));
  /* 1222049a push 2 */
  push32((uint32_t)(0x2u));
  /* 1222049c push 2 */
  push32((uint32_t)(0x2u));
  /* 1222049e call 0x12215130 */
  push32(0x122204a3u); f_12215130();
  /* 122204a3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122204a6 mov edx, dword ptr [0x1223fd88] */
  EDX = (r32((uint32_t)(0x1223fd88)));
  /* 122204ac mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 122204af mov eax, dword ptr [0x1223fd88] */
  EAX = (r32((uint32_t)(0x1223fd88)));
  /* 122204b4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122204b8 jne 0x122204bf */
  if (!C.zf) goto L_122204bf;
  /* 122204ba or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122204bd jmp 0x12220522 */
  goto L_12220522;
L_122204bf:;
  /* 122204bf mov ecx, dword ptr [0x1223fd88] */
  ECX = (r32((uint32_t)(0x1223fd88)));
  /* 122204c5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 122204c8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 122204cb push 0x92 */
  push32((uint32_t)(0x92u));
  /* 122204d0 push 0x1223c2c4 */
  push32((uint32_t)(0x1223c2c4u));
  /* 122204d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 122204d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 122204d9 call 0x12215130 */
  push32(0x122204deu); f_12215130();
  /* 122204de add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122204e1 mov ecx, dword ptr [0x1223fd88] */
  ECX = (r32((uint32_t)(0x1223fd88)));
  /* 122204e7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 122204ea mov edx, dword ptr [0x1223fd88] */
  EDX = (r32((uint32_t)(0x1223fd88)));
  /* 122204f0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122204f4 jne 0x122204fb */
  if (!C.zf) goto L_122204fb;
  /* 122204f6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122204f9 jmp 0x12220522 */
  goto L_12220522;
L_122204fb:;
  /* 122204fb mov eax, dword ptr [0x1223fd88] */
  EAX = (r32((uint32_t)(0x1223fd88)));
  /* 12220500 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12220503 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12220506 mov edx, dword ptr [0x1223fd88] */
  EDX = (r32((uint32_t)(0x1223fd88)));
  /* 1222050c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1222050e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12220510 mov byte ptr [0x1223eea8], cl */
  w8((uint32_t)(0x1223eea8), (CL));
  /* 12220516 mov dword ptr [0x1223eeac], 1 */
  w32((uint32_t)(0x1223eeac), (0x1u));
  /* 12220520 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12220522:;
  /* 12220522 mov esp, ebp */
  ESP = (EBP);
  /* 12220524 pop ebp */
  EBP = (pop32());
  /* 12220525 ret  */
  ESPCHK(0x12220280u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12220530 (125 bytes, 49 insns) */
void f_12220530(void) {
  FTRACE(0x12220530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12220530 push ebp */
  push32((uint32_t)(EBP));
  /* 12220531 mov ebp, esp */
  EBP = (ESP);
  /* 12220533 push ecx */
  push32((uint32_t)(ECX));
L_12220534:;
  /* 12220534 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12220537 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1222053a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1222053c je 0x122205a9 */
  if (C.zf) goto L_122205a9;
  /* 1222053e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12220541 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12220544 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12220547 jl 0x1222056d */
  if ((C.sf!=C.of)) goto L_1222056d;
  /* 12220549 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222054c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1222054f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12220552 jg 0x1222056d */
  if ((!C.zf&&C.sf==C.of)) goto L_1222056d;
  /* 12220554 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12220557 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1222055a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1222055d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12220560 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12220562 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12220565 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12220568 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1222056b jmp 0x122205a7 */
  goto L_122205a7;
L_1222056d:;
  /* 1222056d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12220570 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12220573 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12220576 jne 0x1222059e */
  if (!C.zf) goto L_1222059e;
  /* 12220578 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222057b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1222057e:;
  /* 1222057e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12220581 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12220584 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12220587 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12220589 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1222058c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1222058f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12220592 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12220595 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12220598 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1222059a jne 0x1222057e */
  if (!C.zf) goto L_1222057e;
  /* 1222059c jmp 0x122205a7 */
  goto L_122205a7;
L_1222059e:;
  /* 1222059e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122205a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122205a4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_122205a7:;
  /* 122205a7 jmp 0x12220534 */
  goto L_12220534;
L_122205a9:;
  /* 122205a9 mov esp, ebp */
  ESP = (EBP);
  /* 122205ab pop ebp */
  EBP = (pop32());
  /* 122205ac ret  */
  ESPCHK(0x12220530u, _esp0);
  ESP += 4; return;
}

/* FUN_100105b0 @ 0x122205b0 (304 bytes, 85 insns) */
void f_122205b0(void) {
  FTRACE(0x122205b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122205b0 push ebp */
  push32((uint32_t)(EBP));
  /* 122205b1 mov ebp, esp */
  EBP = (ESP);
  /* 122205b3 push ecx */
  push32((uint32_t)(ECX));
  /* 122205b4 cmp dword ptr [0x122407d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122407d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122205bb je 0x1222067c */
  if (C.zf) goto L_1222067c;
  /* 122205c1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 122205c3 push 0x1223c2d0 */
  push32((uint32_t)(0x1223c2d0u));
  /* 122205c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 122205ca push 0x30 */
  push32((uint32_t)(0x30u));
  /* 122205cc push 1 */
  push32((uint32_t)(0x1u));
  /* 122205ce call 0x12215540 */
  push32(0x122205d3u); f_12215540();
  /* 122205d3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122205d6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122205d9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122205dd jne 0x122205e9 */
  if (!C.zf) goto L_122205e9;
  /* 122205df mov eax, 1 */
  EAX = (0x1u);
  /* 122205e4 jmp 0x122206dc */
  goto L_122206dc;
L_122205e9:;
  /* 122205e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122205ec push eax */
  push32((uint32_t)(EAX));
  /* 122205ed call 0x122206e0 */
  push32(0x122205f2u); f_122206e0();
  /* 122205f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122205f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122205f7 je 0x1222061d */
  if (C.zf) goto L_1222061d;
  /* 122205f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122205fc push ecx */
  push32((uint32_t)(ECX));
  /* 122205fd call 0x12220970 */
  push32(0x12220602u); f_12220970();
  /* 12220602 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220605 push 2 */
  push32((uint32_t)(0x2u));
  /* 12220607 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1222060a push edx */
  push32((uint32_t)(EDX));
  /* 1222060b call 0x12215bc0 */
  push32(0x12220610u); f_12215bc0();
  /* 12220610 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220613 mov eax, 1 */
  EAX = (0x1u);
  /* 12220618 jmp 0x122206dc */
  goto L_122206dc;
L_1222061d:;
  /* 1222061d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12220620 mov ecx, dword ptr [0x1223fd88] */
  ECX = (r32((uint32_t)(0x1223fd88)));
  /* 12220626 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12220628 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1222062a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1222062d mov ecx, dword ptr [0x1223fd88] */
  ECX = (r32((uint32_t)(0x1223fd88)));
  /* 12220633 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12220636 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12220639 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1222063c mov ecx, dword ptr [0x1223fd88] */
  ECX = (r32((uint32_t)(0x1223fd88)));
  /* 12220642 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12220645 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12220648 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1222064b mov dword ptr [0x1223fd88], eax */
  w32((uint32_t)(0x1223fd88), (EAX));
  /* 12220650 mov ecx, dword ptr [0x1224080c] */
  ECX = (r32((uint32_t)(0x1224080c)));
  /* 12220656 push ecx */
  push32((uint32_t)(ECX));
  /* 12220657 call 0x12220970 */
  push32(0x1222065cu); f_12220970();
  /* 1222065c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222065f push 2 */
  push32((uint32_t)(0x2u));
  /* 12220661 mov edx, dword ptr [0x1224080c] */
  EDX = (r32((uint32_t)(0x1224080c)));
  /* 12220667 push edx */
  push32((uint32_t)(EDX));
  /* 12220668 call 0x12215bc0 */
  push32(0x1222066du); f_12215bc0();
  /* 1222066d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220670 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12220673 mov dword ptr [0x1224080c], eax */
  w32((uint32_t)(0x1224080c), (EAX));
  /* 12220678 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1222067a jmp 0x122206dc */
  goto L_122206dc;
L_1222067c:;
  /* 1222067c mov ecx, dword ptr [0x1223fd88] */
  ECX = (r32((uint32_t)(0x1223fd88)));
  /* 12220682 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12220684 mov dword ptr [0x1223fd58], edx */
  w32((uint32_t)(0x1223fd58), (EDX));
  /* 1222068a mov eax, dword ptr [0x1223fd88] */
  EAX = (r32((uint32_t)(0x1223fd88)));
  /* 1222068f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12220692 mov dword ptr [0x1223fd5c], ecx */
  w32((uint32_t)(0x1223fd5c), (ECX));
  /* 12220698 mov edx, dword ptr [0x1223fd88] */
  EDX = (r32((uint32_t)(0x1223fd88)));
  /* 1222069e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 122206a1 mov dword ptr [0x1223fd60], eax */
  w32((uint32_t)(0x1223fd60), (EAX));
  /* 122206a6 mov dword ptr [0x1223fd88], 0x1223fd58 */
  w32((uint32_t)(0x1223fd88), (0x1223fd58u));
  /* 122206b0 mov ecx, dword ptr [0x1224080c] */
  ECX = (r32((uint32_t)(0x1224080c)));
  /* 122206b6 push ecx */
  push32((uint32_t)(ECX));
  /* 122206b7 call 0x12220970 */
  push32(0x122206bcu); f_12220970();
  /* 122206bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122206bf push 2 */
  push32((uint32_t)(0x2u));
  /* 122206c1 mov edx, dword ptr [0x1224080c] */
  EDX = (r32((uint32_t)(0x1224080c)));
  /* 122206c7 push edx */
  push32((uint32_t)(EDX));
  /* 122206c8 call 0x12215bc0 */
  push32(0x122206cdu); f_12215bc0();
  /* 122206cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122206d0 mov dword ptr [0x1224080c], 0 */
  w32((uint32_t)(0x1224080c), (0x0u));
  /* 122206da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122206dc:;
  /* 122206dc mov esp, ebp */
  ESP = (EBP);
  /* 122206de pop ebp */
  EBP = (pop32());
  /* 122206df ret  */
  ESPCHK(0x122205b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100106e0 @ 0x122206e0 (525 bytes, 200 insns) */
void f_122206e0(void) {
  FTRACE(0x122206e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122206e0 push ebp */
  push32((uint32_t)(EBP));
  /* 122206e1 mov ebp, esp */
  EBP = (ESP);
  /* 122206e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122206e6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 122206ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122206ef mov ax, word ptr [0x1224082c] */
  AX = (r16((uint32_t)(0x1224082c)));
  /* 122206f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122206f8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122206fc jne 0x12220706 */
  if (!C.zf) goto L_12220706;
  /* 122206fe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12220701 jmp 0x122208e9 */
  goto L_122208e9;
L_12220706:;
  /* 12220706 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12220709 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1222070c push ecx */
  push32((uint32_t)(ECX));
  /* 1222070d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1222070f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12220712 push edx */
  push32((uint32_t)(EDX));
  /* 12220713 push 1 */
  push32((uint32_t)(0x1u));
  /* 12220715 call 0x122232f0 */
  push32(0x1222071au); f_122232f0();
  /* 1222071a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222071d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12220720 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12220722 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12220725 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12220728 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1222072b push edx */
  push32((uint32_t)(EDX));
  /* 1222072c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1222072e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12220731 push eax */
  push32((uint32_t)(EAX));
  /* 12220732 push 1 */
  push32((uint32_t)(0x1u));
  /* 12220734 call 0x122232f0 */
  push32(0x12220739u); f_122232f0();
  /* 12220739 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222073c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1222073f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12220741 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12220744 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12220747 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1222074a push edx */
  push32((uint32_t)(EDX));
  /* 1222074b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1222074d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12220750 push eax */
  push32((uint32_t)(EAX));
  /* 12220751 push 1 */
  push32((uint32_t)(0x1u));
  /* 12220753 call 0x122232f0 */
  push32(0x12220758u); f_122232f0();
  /* 12220758 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222075b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1222075e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12220760 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12220763 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12220766 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12220769 push edx */
  push32((uint32_t)(EDX));
  /* 1222076a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1222076c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1222076f push eax */
  push32((uint32_t)(EAX));
  /* 12220770 push 1 */
  push32((uint32_t)(0x1u));
  /* 12220772 call 0x122232f0 */
  push32(0x12220777u); f_122232f0();
  /* 12220777 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222077a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1222077d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1222077f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12220782 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12220785 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12220788 push edx */
  push32((uint32_t)(EDX));
  /* 12220789 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1222078b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1222078e push eax */
  push32((uint32_t)(EAX));
  /* 1222078f push 1 */
  push32((uint32_t)(0x1u));
  /* 12220791 call 0x122232f0 */
  push32(0x12220796u); f_122232f0();
  /* 12220796 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220799 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1222079c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1222079e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122207a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122207a4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 122207a7 push eax */
  push32((uint32_t)(EAX));
  /* 122207a8 call 0x122208f0 */
  push32(0x122207adu); f_122208f0();
  /* 122207ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122207b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122207b3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122207b6 push ecx */
  push32((uint32_t)(ECX));
  /* 122207b7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 122207b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122207bc push edx */
  push32((uint32_t)(EDX));
  /* 122207bd push 1 */
  push32((uint32_t)(0x1u));
  /* 122207bf call 0x122232f0 */
  push32(0x122207c4u); f_122232f0();
  /* 122207c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122207c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122207ca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122207cc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122207cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122207d2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122207d5 push edx */
  push32((uint32_t)(EDX));
  /* 122207d6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 122207d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122207db push eax */
  push32((uint32_t)(EAX));
  /* 122207dc push 1 */
  push32((uint32_t)(0x1u));
  /* 122207de call 0x122232f0 */
  push32(0x122207e3u); f_122232f0();
  /* 122207e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122207e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122207e9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122207eb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122207ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122207f1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122207f4 push edx */
  push32((uint32_t)(EDX));
  /* 122207f5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 122207f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122207fa push eax */
  push32((uint32_t)(EAX));
  /* 122207fb push 0 */
  push32((uint32_t)(0x0u));
  /* 122207fd call 0x122232f0 */
  push32(0x12220802u); f_122232f0();
  /* 12220802 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220805 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12220808 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1222080a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1222080d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12220810 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12220813 push edx */
  push32((uint32_t)(EDX));
  /* 12220814 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12220816 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12220819 push eax */
  push32((uint32_t)(EAX));
  /* 1222081a push 0 */
  push32((uint32_t)(0x0u));
  /* 1222081c call 0x122232f0 */
  push32(0x12220821u); f_122232f0();
  /* 12220821 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220824 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12220827 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12220829 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1222082c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222082f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12220832 push edx */
  push32((uint32_t)(EDX));
  /* 12220833 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 12220835 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12220838 push eax */
  push32((uint32_t)(EAX));
  /* 12220839 push 0 */
  push32((uint32_t)(0x0u));
  /* 1222083b call 0x122232f0 */
  push32(0x12220840u); f_122232f0();
  /* 12220840 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220843 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12220846 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12220848 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1222084b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222084e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12220851 push edx */
  push32((uint32_t)(EDX));
  /* 12220852 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 12220854 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12220857 push eax */
  push32((uint32_t)(EAX));
  /* 12220858 push 0 */
  push32((uint32_t)(0x0u));
  /* 1222085a call 0x122232f0 */
  push32(0x1222085fu); f_122232f0();
  /* 1222085f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220862 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12220865 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12220867 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1222086a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222086d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12220870 push edx */
  push32((uint32_t)(EDX));
  /* 12220871 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 12220873 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12220876 push eax */
  push32((uint32_t)(EAX));
  /* 12220877 push 0 */
  push32((uint32_t)(0x0u));
  /* 12220879 call 0x122232f0 */
  push32(0x1222087eu); f_122232f0();
  /* 1222087e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220881 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12220884 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12220886 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12220889 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222088c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1222088f push edx */
  push32((uint32_t)(EDX));
  /* 12220890 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 12220892 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12220895 push eax */
  push32((uint32_t)(EAX));
  /* 12220896 push 0 */
  push32((uint32_t)(0x0u));
  /* 12220898 call 0x122232f0 */
  push32(0x1222089du); f_122232f0();
  /* 1222089d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122208a0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122208a3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122208a5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122208a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122208ab add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122208ae push edx */
  push32((uint32_t)(EDX));
  /* 122208af push 0x52 */
  push32((uint32_t)(0x52u));
  /* 122208b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122208b4 push eax */
  push32((uint32_t)(EAX));
  /* 122208b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 122208b7 call 0x122232f0 */
  push32(0x122208bcu); f_122232f0();
  /* 122208bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122208bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122208c2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122208c4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122208c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122208ca add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122208cd push edx */
  push32((uint32_t)(EDX));
  /* 122208ce push 0x53 */
  push32((uint32_t)(0x53u));
  /* 122208d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122208d3 push eax */
  push32((uint32_t)(EAX));
  /* 122208d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 122208d6 call 0x122232f0 */
  push32(0x122208dbu); f_122232f0();
  /* 122208db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122208de mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122208e1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122208e3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122208e6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_122208e9:;
  /* 122208e9 mov esp, ebp */
  ESP = (EBP);
  /* 122208eb pop ebp */
  EBP = (pop32());
  /* 122208ec ret  */
  ESPCHK(0x122206e0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x122208f0 (125 bytes, 49 insns) */
void f_122208f0(void) {
  FTRACE(0x122208f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122208f0 push ebp */
  push32((uint32_t)(EBP));
  /* 122208f1 mov ebp, esp */
  EBP = (ESP);
  /* 122208f3 push ecx */
  push32((uint32_t)(ECX));
L_122208f4:;
  /* 122208f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122208f7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122208fa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122208fc je 0x12220969 */
  if (C.zf) goto L_12220969;
  /* 122208fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12220901 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12220904 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12220907 jl 0x1222092d */
  if ((C.sf!=C.of)) goto L_1222092d;
  /* 12220909 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222090c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1222090f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12220912 jg 0x1222092d */
  if ((!C.zf&&C.sf==C.of)) goto L_1222092d;
  /* 12220914 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12220917 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1222091a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1222091d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12220920 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12220922 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12220925 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12220928 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1222092b jmp 0x12220967 */
  goto L_12220967;
L_1222092d:;
  /* 1222092d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12220930 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12220933 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12220936 jne 0x1222095e */
  if (!C.zf) goto L_1222095e;
  /* 12220938 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222093b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1222093e:;
  /* 1222093e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12220941 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12220944 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12220947 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12220949 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1222094c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1222094f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12220952 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12220955 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12220958 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1222095a jne 0x1222093e */
  if (!C.zf) goto L_1222093e;
  /* 1222095c jmp 0x12220967 */
  goto L_12220967;
L_1222095e:;
  /* 1222095e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12220961 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12220964 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12220967:;
  /* 12220967 jmp 0x122208f4 */
  goto L_122208f4;
L_12220969:;
  /* 12220969 mov esp, ebp */
  ESP = (EBP);
  /* 1222096b pop ebp */
  EBP = (pop32());
  /* 1222096c ret  */
  ESPCHK(0x122208f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010970 @ 0x12220970 (147 bytes, 52 insns) */
void f_12220970(void) {
  FTRACE(0x12220970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12220970 push ebp */
  push32((uint32_t)(EBP));
  /* 12220971 mov ebp, esp */
  EBP = (ESP);
  /* 12220973 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12220977 jne 0x1222097e */
  if (!C.zf) goto L_1222097e;
  /* 12220979 jmp 0x12220a01 */
  goto L_12220a01;
L_1222097e:;
  /* 1222097e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12220981 cmp dword ptr [eax + 0xc], 0x12240868 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x12240868u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12220988 je 0x12220a01 */
  if (C.zf) goto L_12220a01;
  /* 1222098a push 2 */
  push32((uint32_t)(0x2u));
  /* 1222098c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222098f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12220992 push edx */
  push32((uint32_t)(EDX));
  /* 12220993 call 0x12215bc0 */
  push32(0x12220998u); f_12215bc0();
  /* 12220998 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222099b push 2 */
  push32((uint32_t)(0x2u));
  /* 1222099d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122209a0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 122209a3 push ecx */
  push32((uint32_t)(ECX));
  /* 122209a4 call 0x12215bc0 */
  push32(0x122209a9u); f_12215bc0();
  /* 122209a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122209ac push 2 */
  push32((uint32_t)(0x2u));
  /* 122209ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122209b1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 122209b4 push eax */
  push32((uint32_t)(EAX));
  /* 122209b5 call 0x12215bc0 */
  push32(0x122209bau); f_12215bc0();
  /* 122209ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122209bd push 2 */
  push32((uint32_t)(0x2u));
  /* 122209bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122209c2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 122209c5 push edx */
  push32((uint32_t)(EDX));
  /* 122209c6 call 0x12215bc0 */
  push32(0x122209cbu); f_12215bc0();
  /* 122209cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122209ce push 2 */
  push32((uint32_t)(0x2u));
  /* 122209d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122209d3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 122209d6 push ecx */
  push32((uint32_t)(ECX));
  /* 122209d7 call 0x12215bc0 */
  push32(0x122209dcu); f_12215bc0();
  /* 122209dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122209df push 2 */
  push32((uint32_t)(0x2u));
  /* 122209e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122209e4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 122209e7 push eax */
  push32((uint32_t)(EAX));
  /* 122209e8 call 0x12215bc0 */
  push32(0x122209edu); f_12215bc0();
  /* 122209ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122209f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 122209f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122209f5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 122209f8 push edx */
  push32((uint32_t)(EDX));
  /* 122209f9 call 0x12215bc0 */
  push32(0x122209feu); f_12215bc0();
  /* 122209fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12220a01:;
  /* 12220a01 pop ebp */
  EBP = (pop32());
  /* 12220a02 ret  */
  ESPCHK(0x12220970u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a10 @ 0x12220a10 (928 bytes, 284 insns) */
void f_12220a10(void) {
  FTRACE(0x12220a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12220a10 push ebp */
  push32((uint32_t)(EBP));
  /* 12220a11 mov ebp, esp */
  EBP = (ESP);
  /* 12220a13 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12220a16 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12220a1d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12220a24 cmp dword ptr [0x122407d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122407d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12220a2b je 0x12220d61 */
  if (C.zf) goto L_12220d61;
  /* 12220a31 cmp dword ptr [0x122407e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122407e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12220a38 jne 0x12220a60 */
  if (!C.zf) goto L_12220a60;
  /* 12220a3a push 0x122407e0 */
  push32((uint32_t)(0x122407e0u));
  /* 12220a3f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12220a44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12220a46 mov ax, word ptr [0x12240824] */
  AX = (r16((uint32_t)(0x12240824)));
  /* 12220a4c push eax */
  push32((uint32_t)(EAX));
  /* 12220a4d push 0 */
  push32((uint32_t)(0x0u));
  /* 12220a4f call 0x122232f0 */
  push32(0x12220a54u); f_122232f0();
  /* 12220a54 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220a57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12220a59 je 0x12220a60 */
  if (C.zf) goto L_12220a60;
  /* 12220a5b jmp 0x12220d22 */
  goto L_12220d22;
L_12220a60:;
  /* 12220a60 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 12220a62 push 0x1223c2dc */
  push32((uint32_t)(0x1223c2dcu));
  /* 12220a67 push 2 */
  push32((uint32_t)(0x2u));
  /* 12220a69 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12220a6e call 0x12215130 */
  push32(0x12220a73u); f_12215130();
  /* 12220a73 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220a76 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12220a79 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12220a7b push 0x1223c2dc */
  push32((uint32_t)(0x1223c2dcu));
  /* 12220a80 push 2 */
  push32((uint32_t)(0x2u));
  /* 12220a82 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12220a87 call 0x12215130 */
  push32(0x12220a8cu); f_12215130();
  /* 12220a8c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220a8f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12220a92 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 12220a94 push 0x1223c2dc */
  push32((uint32_t)(0x1223c2dcu));
  /* 12220a99 push 2 */
  push32((uint32_t)(0x2u));
  /* 12220a9b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 12220aa0 call 0x12215130 */
  push32(0x12220aa5u); f_12215130();
  /* 12220aa5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220aa8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12220aab push 0x62 */
  push32((uint32_t)(0x62u));
  /* 12220aad push 0x1223c2dc */
  push32((uint32_t)(0x1223c2dcu));
  /* 12220ab2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12220ab4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12220ab9 call 0x12215130 */
  push32(0x12220abeu); f_12215130();
  /* 12220abe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220ac1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12220ac4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12220ac8 je 0x12220adc */
  if (C.zf) goto L_12220adc;
  /* 12220aca cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12220ace je 0x12220adc */
  if (C.zf) goto L_12220adc;
  /* 12220ad0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12220ad4 je 0x12220adc */
  if (C.zf) goto L_12220adc;
  /* 12220ad6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12220ada jne 0x12220ae1 */
  if (!C.zf) goto L_12220ae1;
L_12220adc:;
  /* 12220adc jmp 0x12220d22 */
  goto L_12220d22;
L_12220ae1:;
  /* 12220ae1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12220ae4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12220ae7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12220aee jmp 0x12220af9 */
  goto L_12220af9;
L_12220af0:;
  /* 12220af0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12220af3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12220af6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12220af9:;
  /* 12220af9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12220b00 jge 0x12220b15 */
  if ((C.sf==C.of)) goto L_12220b15;
  /* 12220b02 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12220b05 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 12220b08 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12220b0a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12220b0d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12220b10 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12220b13 jmp 0x12220af0 */
  goto L_12220af0;
L_12220b15:;
  /* 12220b15 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 12220b18 push eax */
  push32((uint32_t)(EAX));
  /* 12220b19 mov ecx, dword ptr [0x122407e0] */
  ECX = (r32((uint32_t)(0x122407e0)));
  /* 12220b1f push ecx */
  push32((uint32_t)(ECX));
  /* 12220b20 call dword ptr [0x1224331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224331c))), 0x12220b26u);
  /* 12220b26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12220b28 jne 0x12220b2f */
  if (!C.zf) goto L_12220b2f;
  /* 12220b2a jmp 0x12220d22 */
  goto L_12220d22;
L_12220b2f:;
  /* 12220b2f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12220b33 jbe 0x12220b3a */
  if ((C.cf||C.zf)) goto L_12220b3a;
  /* 12220b35 jmp 0x12220d22 */
  goto L_12220d22;
L_12220b3a:;
  /* 12220b3a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12220b3d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12220b43 mov dword ptr [0x1223eea4], edx */
  w32((uint32_t)(0x1223eea4), (EDX));
  /* 12220b49 cmp dword ptr [0x1223eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1223eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12220b50 jle 0x12220ba9 */
  if ((C.zf||C.sf!=C.of)) goto L_12220ba9;
  /* 12220b52 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 12220b55 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12220b58 jmp 0x12220b63 */
  goto L_12220b63;
L_12220b5a:;
  /* 12220b5a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12220b5d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12220b60 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12220b63:;
  /* 12220b63 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12220b66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12220b68 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12220b6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12220b6c je 0x12220ba9 */
  if (C.zf) goto L_12220ba9;
  /* 12220b6e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12220b71 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12220b73 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12220b76 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12220b78 je 0x12220ba9 */
  if (C.zf) goto L_12220ba9;
  /* 12220b7a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12220b7d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12220b7f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12220b81 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12220b84 jmp 0x12220b8f */
  goto L_12220b8f;
L_12220b86:;
  /* 12220b86 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12220b89 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12220b8c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12220b8f:;
  /* 12220b8f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12220b92 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12220b94 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12220b97 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12220b9a jg 0x12220ba7 */
  if ((!C.zf&&C.sf==C.of)) goto L_12220ba7;
  /* 12220b9c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12220b9f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12220ba2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12220ba5 jmp 0x12220b86 */
  goto L_12220b86;
L_12220ba7:;
  /* 12220ba7 jmp 0x12220b5a */
  goto L_12220b5a;
L_12220ba9:;
  /* 12220ba9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12220bab push 0 */
  push32((uint32_t)(0x0u));
  /* 12220bad push 0 */
  push32((uint32_t)(0x0u));
  /* 12220baf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12220bb2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12220bb5 push eax */
  push32((uint32_t)(EAX));
  /* 12220bb6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12220bbb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12220bbe push ecx */
  push32((uint32_t)(ECX));
  /* 12220bbf push 1 */
  push32((uint32_t)(0x1u));
  /* 12220bc1 call 0x1221d360 */
  push32(0x12220bc6u); f_1221d360();
  /* 12220bc6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220bc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12220bcb jne 0x12220bd2 */
  if (!C.zf) goto L_12220bd2;
  /* 12220bcd jmp 0x12220d22 */
  goto L_12220d22;
L_12220bd2:;
  /* 12220bd2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12220bd5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 12220bda mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12220bdd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12220be0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12220be7 jmp 0x12220bf2 */
  goto L_12220bf2;
L_12220be9:;
  /* 12220be9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12220bec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12220bef mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12220bf2:;
  /* 12220bf2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12220bf9 jge 0x12220c10 */
  if ((C.sf==C.of)) goto L_12220c10;
  /* 12220bfb mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12220bfe mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 12220c02 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 12220c05 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12220c08 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12220c0b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12220c0e jmp 0x12220be9 */
  goto L_12220be9;
L_12220c10:;
  /* 12220c10 push 0 */
  push32((uint32_t)(0x0u));
  /* 12220c12 push 0 */
  push32((uint32_t)(0x0u));
  /* 12220c14 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12220c17 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12220c1a push edx */
  push32((uint32_t)(EDX));
  /* 12220c1b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12220c20 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12220c23 push eax */
  push32((uint32_t)(EAX));
  /* 12220c24 push 1 */
  push32((uint32_t)(0x1u));
  /* 12220c26 call 0x12223590 */
  push32(0x12220c2bu); f_12223590();
  /* 12220c2b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220c2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12220c30 jne 0x12220c37 */
  if (!C.zf) goto L_12220c37;
  /* 12220c32 jmp 0x12220d22 */
  goto L_12220d22;
L_12220c37:;
  /* 12220c37 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12220c3a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 12220c3f cmp dword ptr [0x1223eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1223eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12220c46 jle 0x12220ca3 */
  if ((C.zf||C.sf!=C.of)) goto L_12220ca3;
  /* 12220c48 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 12220c4b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12220c4e jmp 0x12220c59 */
  goto L_12220c59;
L_12220c50:;
  /* 12220c50 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12220c53 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12220c56 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12220c59:;
  /* 12220c59 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12220c5c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12220c5e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12220c60 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12220c62 je 0x12220ca3 */
  if (C.zf) goto L_12220ca3;
  /* 12220c64 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12220c67 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12220c69 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12220c6c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12220c6e je 0x12220ca3 */
  if (C.zf) goto L_12220ca3;
  /* 12220c70 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12220c73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12220c75 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12220c77 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12220c7a jmp 0x12220c85 */
  goto L_12220c85;
L_12220c7c:;
  /* 12220c7c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12220c7f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12220c82 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12220c85:;
  /* 12220c85 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12220c88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12220c8a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12220c8d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12220c90 jg 0x12220ca1 */
  if ((!C.zf&&C.sf==C.of)) goto L_12220ca1;
  /* 12220c92 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12220c95 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12220c98 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 12220c9f jmp 0x12220c7c */
  goto L_12220c7c;
L_12220ca1:;
  /* 12220ca1 jmp 0x12220c50 */
  goto L_12220c50;
L_12220ca3:;
  /* 12220ca3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12220ca6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12220ca9 mov dword ptr [0x1223ec98], eax */
  w32((uint32_t)(0x1223ec98), (EAX));
  /* 12220cae mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12220cb1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12220cb4 mov dword ptr [0x1223ec9c], ecx */
  w32((uint32_t)(0x1223ec9c), (ECX));
  /* 12220cba cmp dword ptr [0x12240810], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12240810))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12220cc1 je 0x12220cd4 */
  if (C.zf) goto L_12220cd4;
  /* 12220cc3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12220cc5 mov edx, dword ptr [0x12240810] */
  EDX = (r32((uint32_t)(0x12240810)));
  /* 12220ccb push edx */
  push32((uint32_t)(EDX));
  /* 12220ccc call 0x12215bc0 */
  push32(0x12220cd1u); f_12215bc0();
  /* 12220cd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12220cd4:;
  /* 12220cd4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12220cd7 mov dword ptr [0x12240810], eax */
  w32((uint32_t)(0x12240810), (EAX));
  /* 12220cdc cmp dword ptr [0x12240814], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12240814))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12220ce3 je 0x12220cf6 */
  if (C.zf) goto L_12220cf6;
  /* 12220ce5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12220ce7 mov ecx, dword ptr [0x12240814] */
  ECX = (r32((uint32_t)(0x12240814)));
  /* 12220ced push ecx */
  push32((uint32_t)(ECX));
  /* 12220cee call 0x12215bc0 */
  push32(0x12220cf3u); f_12215bc0();
  /* 12220cf3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12220cf6:;
  /* 12220cf6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12220cf9 mov dword ptr [0x12240814], edx */
  w32((uint32_t)(0x12240814), (EDX));
  /* 12220cff push 2 */
  push32((uint32_t)(0x2u));
  /* 12220d01 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12220d04 push eax */
  push32((uint32_t)(EAX));
  /* 12220d05 call 0x12215bc0 */
  push32(0x12220d0au); f_12215bc0();
  /* 12220d0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220d0d push 2 */
  push32((uint32_t)(0x2u));
  /* 12220d0f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12220d12 push ecx */
  push32((uint32_t)(ECX));
  /* 12220d13 call 0x12215bc0 */
  push32(0x12220d18u); f_12215bc0();
  /* 12220d18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220d1b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12220d1d jmp 0x12220dac */
  goto L_12220dac;
L_12220d22:;
  /* 12220d22 push 2 */
  push32((uint32_t)(0x2u));
  /* 12220d24 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12220d27 push edx */
  push32((uint32_t)(EDX));
  /* 12220d28 call 0x12215bc0 */
  push32(0x12220d2du); f_12215bc0();
  /* 12220d2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220d30 push 2 */
  push32((uint32_t)(0x2u));
  /* 12220d32 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12220d35 push eax */
  push32((uint32_t)(EAX));
  /* 12220d36 call 0x12215bc0 */
  push32(0x12220d3bu); f_12215bc0();
  /* 12220d3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220d3e push 2 */
  push32((uint32_t)(0x2u));
  /* 12220d40 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12220d43 push ecx */
  push32((uint32_t)(ECX));
  /* 12220d44 call 0x12215bc0 */
  push32(0x12220d49u); f_12215bc0();
  /* 12220d49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220d4c push 2 */
  push32((uint32_t)(0x2u));
  /* 12220d4e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12220d51 push edx */
  push32((uint32_t)(EDX));
  /* 12220d52 call 0x12215bc0 */
  push32(0x12220d57u); f_12215bc0();
  /* 12220d57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220d5a mov eax, 1 */
  EAX = (0x1u);
  /* 12220d5f jmp 0x12220dac */
  goto L_12220dac;
L_12220d61:;
  /* 12220d61 mov dword ptr [0x1223ec98], 0x1223eca2 */
  w32((uint32_t)(0x1223ec98), (0x1223eca2u));
  /* 12220d6b mov dword ptr [0x1223ec9c], 0x1223eca2 */
  w32((uint32_t)(0x1223ec9c), (0x1223eca2u));
  /* 12220d75 push 2 */
  push32((uint32_t)(0x2u));
  /* 12220d77 mov eax, dword ptr [0x12240810] */
  EAX = (r32((uint32_t)(0x12240810)));
  /* 12220d7c push eax */
  push32((uint32_t)(EAX));
  /* 12220d7d call 0x12215bc0 */
  push32(0x12220d82u); f_12215bc0();
  /* 12220d82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220d85 push 2 */
  push32((uint32_t)(0x2u));
  /* 12220d87 mov ecx, dword ptr [0x12240814] */
  ECX = (r32((uint32_t)(0x12240814)));
  /* 12220d8d push ecx */
  push32((uint32_t)(ECX));
  /* 12220d8e call 0x12215bc0 */
  push32(0x12220d93u); f_12215bc0();
  /* 12220d93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220d96 mov dword ptr [0x12240810], 0 */
  w32((uint32_t)(0x12240810), (0x0u));
  /* 12220da0 mov dword ptr [0x12240814], 0 */
  w32((uint32_t)(0x12240814), (0x0u));
  /* 12220daa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12220dac:;
  /* 12220dac mov esp, ebp */
  ESP = (EBP);
  /* 12220dae pop ebp */
  EBP = (pop32());
  /* 12220daf ret  */
  ESPCHK(0x12220a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10010db0 @ 0x12220db0 (7 bytes, 5 insns) */
void f_12220db0(void) {
  FTRACE(0x12220db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12220db0 push ebp */
  push32((uint32_t)(EBP));
  /* 12220db1 mov ebp, esp */
  EBP = (ESP);
  /* 12220db3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12220db5 pop ebp */
  EBP = (pop32());
  /* 12220db6 ret  */
  ESPCHK(0x12220db0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x12220dc0 (129 bytes, 56 insns) */
void f_12220dc0(void) {
  FTRACE(0x12220dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12220dc0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 12220dc4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12220dc8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12220dce jne 0x12220e0c */
  if (!C.zf) goto L_12220e0c;
L_12220dd0:;
  /* 12220dd0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12220dd2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12220dd4 jne 0x12220e04 */
  if (!C.zf) goto L_12220e04;
  /* 12220dd6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12220dd8 je 0x12220e00 */
  if (C.zf) goto L_12220e00;
  /* 12220dda cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12220ddd jne 0x12220e04 */
  if (!C.zf) goto L_12220e04;
  /* 12220ddf or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12220de1 je 0x12220e00 */
  if (C.zf) goto L_12220e00;
  /* 12220de3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12220de6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12220de9 jne 0x12220e04 */
  if (!C.zf) goto L_12220e04;
  /* 12220deb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12220ded je 0x12220e00 */
  if (C.zf) goto L_12220e00;
  /* 12220def cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12220df2 jne 0x12220e04 */
  if (!C.zf) goto L_12220e04;
  /* 12220df4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12220df7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12220dfa or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12220dfc jne 0x12220dd0 */
  if (!C.zf) goto L_12220dd0;
  /* 12220dfe mov edi, edi */
  EDI = (EDI);
L_12220e00:;
  /* 12220e00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12220e02 ret  */
  ESPCHK(0x12220dc0u, _esp0);
  ESP += 4; return;
  /* 12220e03 nop  */
  /* nop */
L_12220e04:;
  /* 12220e04 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12220e06 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12220e08 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12220e09 ret  */
  ESPCHK(0x12220dc0u, _esp0);
  ESP += 4; return;
  /* 12220e0a mov edi, edi */
  EDI = (EDI);
L_12220e0c:;
  /* 12220e0c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 12220e12 je 0x12220e28 */
  if (C.zf) goto L_12220e28;
  /* 12220e14 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12220e16 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12220e17 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12220e19 jne 0x12220e04 */
  if (!C.zf) goto L_12220e04;
  /* 12220e1b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12220e1c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12220e1e je 0x12220e00 */
  if (C.zf) goto L_12220e00;
  /* 12220e20 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 12220e26 je 0x12220dd0 */
  if (C.zf) goto L_12220dd0;
L_12220e28:;
  /* 12220e28 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 12220e2b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12220e2e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12220e30 jne 0x12220e04 */
  if (!C.zf) goto L_12220e04;
  /* 12220e32 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12220e34 je 0x12220e00 */
  if (C.zf) goto L_12220e00;
  /* 12220e36 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12220e39 jne 0x12220e04 */
  if (!C.zf) goto L_12220e04;
  /* 12220e3b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12220e3d je 0x12220e00 */
  if (C.zf) goto L_12220e00;
  /* 12220e3f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12220e42 jmp 0x12220dd0 */
  goto L_12220dd0;
}

/* FUN_10010e50 @ 0x12220e50 (62 bytes, 35 insns) */
void f_12220e50(void) {
  FTRACE(0x12220e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12220e50 push ebp */
  push32((uint32_t)(EBP));
  /* 12220e51 mov ebp, esp */
  EBP = (ESP);
  /* 12220e53 push esi */
  push32((uint32_t)(ESI));
  /* 12220e54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12220e56 push eax */
  push32((uint32_t)(EAX));
  /* 12220e57 push eax */
  push32((uint32_t)(EAX));
  /* 12220e58 push eax */
  push32((uint32_t)(EAX));
  /* 12220e59 push eax */
  push32((uint32_t)(EAX));
  /* 12220e5a push eax */
  push32((uint32_t)(EAX));
  /* 12220e5b push eax */
  push32((uint32_t)(EAX));
  /* 12220e5c push eax */
  push32((uint32_t)(EAX));
  /* 12220e5d push eax */
  push32((uint32_t)(EAX));
  /* 12220e5e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12220e61 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12220e64:;
  /* 12220e64 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12220e66 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12220e68 je 0x12220e71 */
  if (C.zf) goto L_12220e71;
  /* 12220e6a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12220e6b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x12220e6b");
  /* 12220e6f jmp 0x12220e64 */
  goto L_12220e64;
L_12220e71:;
  /* 12220e71 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12220e74 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12220e77 nop  */
  /* nop */
L_12220e78:;
  /* 12220e78 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12220e79 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12220e7b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12220e7d je 0x12220e86 */
  if (C.zf) goto L_12220e86;
  /* 12220e7f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12220e80 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12220e80");
  /* 12220e84 jae 0x12220e78 */
  if (!C.cf) goto L_12220e78;
L_12220e86:;
  /* 12220e86 mov eax, ecx */
  EAX = (ECX);
  /* 12220e88 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220e8b pop esi */
  ESI = (pop32());
  /* 12220e8c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12220e8d ret  */
  ESPCHK(0x12220e50u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x12220e90 (56 bytes, 31 insns) */
void f_12220e90(void) {
  FTRACE(0x12220e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12220e90 push ebp */
  push32((uint32_t)(EBP));
  /* 12220e91 mov ebp, esp */
  EBP = (ESP);
  /* 12220e93 push edi */
  push32((uint32_t)(EDI));
  /* 12220e94 push esi */
  push32((uint32_t)(ESI));
  /* 12220e95 push ebx */
  push32((uint32_t)(EBX));
  /* 12220e96 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12220e99 jecxz 0x12220ec1 */
  x86_unimpl("jecxz @ 0x12220e99");
  /* 12220e9b mov ebx, ecx */
  EBX = (ECX);
  /* 12220e9d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12220ea0 mov esi, edi */
  ESI = (EDI);
  /* 12220ea2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12220ea4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 12220ea6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12220ea8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12220eaa mov edi, esi */
  EDI = (ESI);
  /* 12220eac mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12220eaf repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 12220eb1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 12220eb4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12220eb6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12220eb9 ja 0x12220ebf */
  if ((!C.cf&&!C.zf)) goto L_12220ebf;
  /* 12220ebb je 0x12220ec1 */
  if (C.zf) goto L_12220ec1;
  /* 12220ebd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12220ebe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_12220ebf:;
  /* 12220ebf not ecx */
  ECX = (~(ECX));
L_12220ec1:;
  /* 12220ec1 mov eax, ecx */
  EAX = (ECX);
  /* 12220ec3 pop ebx */
  EBX = (pop32());
  /* 12220ec4 pop esi */
  ESI = (pop32());
  /* 12220ec5 pop edi */
  EDI = (pop32());
  /* 12220ec6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12220ec7 ret  */
  ESPCHK(0x12220e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ed0 @ 0x12220ed0 (58 bytes, 32 insns) */
void f_12220ed0(void) {
  FTRACE(0x12220ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12220ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 12220ed1 mov ebp, esp */
  EBP = (ESP);
  /* 12220ed3 push esi */
  push32((uint32_t)(ESI));
  /* 12220ed4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12220ed6 push eax */
  push32((uint32_t)(EAX));
  /* 12220ed7 push eax */
  push32((uint32_t)(EAX));
  /* 12220ed8 push eax */
  push32((uint32_t)(EAX));
  /* 12220ed9 push eax */
  push32((uint32_t)(EAX));
  /* 12220eda push eax */
  push32((uint32_t)(EAX));
  /* 12220edb push eax */
  push32((uint32_t)(EAX));
  /* 12220edc push eax */
  push32((uint32_t)(EAX));
  /* 12220edd push eax */
  push32((uint32_t)(EAX));
  /* 12220ede mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12220ee1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12220ee4:;
  /* 12220ee4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12220ee6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12220ee8 je 0x12220ef1 */
  if (C.zf) goto L_12220ef1;
  /* 12220eea inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12220eeb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x12220eeb");
  /* 12220eef jmp 0x12220ee4 */
  goto L_12220ee4;
L_12220ef1:;
  /* 12220ef1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_12220ef4:;
  /* 12220ef4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12220ef6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12220ef8 je 0x12220f04 */
  if (C.zf) goto L_12220f04;
  /* 12220efa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12220efb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12220efb");
  /* 12220eff jae 0x12220ef4 */
  if (!C.cf) goto L_12220ef4;
  /* 12220f01 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_12220f04:;
  /* 12220f04 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12220f07 pop esi */
  ESI = (pop32());
  /* 12220f08 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12220f09 ret  */
  ESPCHK(0x12220ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f10 @ 0x12220f10 (512 bytes, 147 insns) */
void f_12220f10(void) {
  FTRACE(0x12220f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12220f10 push ebp */
  push32((uint32_t)(EBP));
  /* 12220f11 mov ebp, esp */
  EBP = (ESP);
  /* 12220f13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12220f16 cmp dword ptr [0x1224085c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1224085c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12220f1d jne 0x12220f42 */
  if (!C.zf) goto L_12220f42;
  /* 12220f1f call 0x122219e0 */
  push32(0x12220f24u); f_122219e0();
  /* 12220f24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12220f26 je 0x12220f32 */
  if (C.zf) goto L_12220f32;
  /* 12220f28 mov eax, dword ptr [0x122432e0] */
  EAX = (r32((uint32_t)(0x122432e0)));
  /* 12220f2d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12220f30 jmp 0x12220f39 */
  goto L_12220f39;
L_12220f32:;
  /* 12220f32 mov dword ptr [ebp - 8], 0x12221a30 */
  w32((uint32_t)(EBP + -0x8), (0x12221a30u));
L_12220f39:;
  /* 12220f39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12220f3c mov dword ptr [0x1224085c], ecx */
  w32((uint32_t)(0x1224085c), (ECX));
L_12220f42:;
  /* 12220f42 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12220f46 jne 0x12220f52 */
  if (!C.zf) goto L_12220f52;
  /* 12220f48 call 0x12221830 */
  push32(0x12220f4du); f_12221830();
  /* 12220f4d jmp 0x1222101e */
  goto L_1222101e;
L_12220f52:;
  /* 12220f52 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12220f55 mov dword ptr [0x1224084c], edx */
  w32((uint32_t)(0x1224084c), (EDX));
  /* 12220f5b cmp dword ptr [0x1224084c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1224084c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12220f62 je 0x12220f84 */
  if (C.zf) goto L_12220f84;
  /* 12220f64 mov eax, dword ptr [0x1224084c] */
  EAX = (r32((uint32_t)(0x1224084c)));
  /* 12220f69 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12220f6c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12220f6e je 0x12220f84 */
  if (C.zf) goto L_12220f84;
  /* 12220f70 push 0x1224084c */
  push32((uint32_t)(0x1224084cu));
  /* 12220f75 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12220f77 push 0x1223fa90 */
  push32((uint32_t)(0x1223fa90u));
  /* 12220f7c call 0x12221110 */
  push32(0x12220f81u); f_12221110();
  /* 12220f81 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12220f84:;
  /* 12220f84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12220f87 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12220f8a mov dword ptr [0x12240850], edx */
  w32((uint32_t)(0x12240850), (EDX));
  /* 12220f90 cmp dword ptr [0x12240850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12240850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12220f97 je 0x12220fb9 */
  if (C.zf) goto L_12220fb9;
  /* 12220f99 mov eax, dword ptr [0x12240850] */
  EAX = (r32((uint32_t)(0x12240850)));
  /* 12220f9e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12220fa1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12220fa3 je 0x12220fb9 */
  if (C.zf) goto L_12220fb9;
  /* 12220fa5 push 0x12240850 */
  push32((uint32_t)(0x12240850u));
  /* 12220faa push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12220fac push 0x1223f9d8 */
  push32((uint32_t)(0x1223f9d8u));
  /* 12220fb1 call 0x12221110 */
  push32(0x12220fb6u); f_12221110();
  /* 12220fb6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12220fb9:;
  /* 12220fb9 mov dword ptr [0x12240854], 0 */
  w32((uint32_t)(0x12240854), (0x0u));
  /* 12220fc3 cmp dword ptr [0x1224084c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1224084c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12220fca je 0x12220ffd */
  if (C.zf) goto L_12220ffd;
  /* 12220fcc mov edx, dword ptr [0x1224084c] */
  EDX = (r32((uint32_t)(0x1224084c)));
  /* 12220fd2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12220fd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12220fd7 je 0x12220ffd */
  if (C.zf) goto L_12220ffd;
  /* 12220fd9 cmp dword ptr [0x12240850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12240850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12220fe0 je 0x12220ff6 */
  if (C.zf) goto L_12220ff6;
  /* 12220fe2 mov ecx, dword ptr [0x12240850] */
  ECX = (r32((uint32_t)(0x12240850)));
  /* 12220fe8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12220feb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12220fed je 0x12220ff6 */
  if (C.zf) goto L_12220ff6;
  /* 12220fef call 0x122211a0 */
  push32(0x12220ff4u); f_122211a0();
  /* 12220ff4 jmp 0x12220ffb */
  goto L_12220ffb;
L_12220ff6:;
  /* 12220ff6 call 0x12221590 */
  push32(0x12220ffbu); f_12221590();
L_12220ffb:;
  /* 12220ffb jmp 0x1222101e */
  goto L_1222101e;
L_12220ffd:;
  /* 12220ffd cmp dword ptr [0x12240850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12240850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221004 je 0x12221019 */
  if (C.zf) goto L_12221019;
  /* 12221006 mov eax, dword ptr [0x12240850] */
  EAX = (r32((uint32_t)(0x12240850)));
  /* 1222100b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1222100e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12221010 je 0x12221019 */
  if (C.zf) goto L_12221019;
  /* 12221012 call 0x12221730 */
  push32(0x12221017u); f_12221730();
  /* 12221017 jmp 0x1222101e */
  goto L_1222101e;
L_12221019:;
  /* 12221019 call 0x12221830 */
  push32(0x1222101eu); f_12221830();
L_1222101e:;
  /* 1222101e cmp dword ptr [0x12240854], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12240854))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221025 jne 0x1222102e */
  if (!C.zf) goto L_1222102e;
  /* 12221027 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12221029 jmp 0x1222110c */
  goto L_1222110c;
L_1222102e:;
  /* 1222102e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12221031 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12221037 push edx */
  push32((uint32_t)(EDX));
  /* 12221038 call 0x12221860 */
  push32(0x1222103du); f_12221860();
  /* 1222103d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12221040 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12221043 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221047 je 0x1222105c */
  if (C.zf) goto L_1222105c;
  /* 12221049 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1222104c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12221051 push eax */
  push32((uint32_t)(EAX));
  /* 12221052 call dword ptr [0x122432e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122432e4))), 0x12221058u);
  /* 12221058 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1222105a jne 0x12221063 */
  if (!C.zf) goto L_12221063;
L_1222105c:;
  /* 1222105c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1222105e jmp 0x1222110c */
  goto L_1222110c;
L_12221063:;
  /* 12221063 push 1 */
  push32((uint32_t)(0x1u));
  /* 12221065 mov ecx, dword ptr [0x1224083c] */
  ECX = (r32((uint32_t)(0x1224083c)));
  /* 1222106b push ecx */
  push32((uint32_t)(ECX));
  /* 1222106c call dword ptr [0x122432f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122432f4))), 0x12221072u);
  /* 12221072 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12221074 jne 0x1222107d */
  if (!C.zf) goto L_1222107d;
  /* 12221076 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12221078 jmp 0x1222110c */
  goto L_1222110c;
L_1222107d:;
  /* 1222107d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221081 je 0x122210a8 */
  if (C.zf) goto L_122210a8;
  /* 12221083 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12221086 mov ax, word ptr [0x1224083c] */
  AX = (r16((uint32_t)(0x1224083c)));
  /* 1222108c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1222108f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12221092 mov dx, word ptr [0x12240858] */
  DX = (r16((uint32_t)(0x12240858)));
  /* 12221099 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 1222109d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122210a0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 122210a4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_122210a8:;
  /* 122210a8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122210ac je 0x12221107 */
  if (C.zf) goto L_12221107;
  /* 122210ae push 0x40 */
  push32((uint32_t)(0x40u));
  /* 122210b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122210b3 push edx */
  push32((uint32_t)(EDX));
  /* 122210b4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 122210b9 mov eax, dword ptr [0x1224083c] */
  EAX = (r32((uint32_t)(0x1224083c)));
  /* 122210be push eax */
  push32((uint32_t)(EAX));
  /* 122210bf call dword ptr [0x1224085c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224085c))), 0x122210c5u);
  /* 122210c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122210c7 jne 0x122210cd */
  if (!C.zf) goto L_122210cd;
  /* 122210c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122210cb jmp 0x1222110c */
  goto L_1222110c;
L_122210cd:;
  /* 122210cd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 122210cf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122210d2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122210d5 push ecx */
  push32((uint32_t)(ECX));
  /* 122210d6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 122210db mov edx, dword ptr [0x12240858] */
  EDX = (r32((uint32_t)(0x12240858)));
  /* 122210e1 push edx */
  push32((uint32_t)(EDX));
  /* 122210e2 call dword ptr [0x1224085c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224085c))), 0x122210e8u);
  /* 122210e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122210ea jne 0x122210f0 */
  if (!C.zf) goto L_122210f0;
  /* 122210ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122210ee jmp 0x1222110c */
  goto L_1222110c;
L_122210f0:;
  /* 122210f0 push 0xa */
  push32((uint32_t)(0xau));
  /* 122210f2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122210f5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122210fa push eax */
  push32((uint32_t)(EAX));
  /* 122210fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122210fe push ecx */
  push32((uint32_t)(ECX));
  /* 122210ff call 0x12217c70 */
  push32(0x12221104u); f_12217c70();
  /* 12221104 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12221107:;
  /* 12221107 mov eax, 1 */
  EAX = (0x1u);
L_1222110c:;
  /* 1222110c mov esp, ebp */
  ESP = (EBP);
  /* 1222110e pop ebp */
  EBP = (pop32());
  /* 1222110f ret  */
  ESPCHK(0x12220f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10011110 @ 0x12221110 (130 bytes, 47 insns) */
void f_12221110(void) {
  FTRACE(0x12221110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12221110 push ebp */
  push32((uint32_t)(EBP));
  /* 12221111 mov ebp, esp */
  EBP = (ESP);
  /* 12221113 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12221116 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1222111d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12221124:;
  /* 12221124 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12221127 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222112a jg 0x1222118e */
  if ((!C.zf&&C.sf==C.of)) goto L_1222118e;
  /* 1222112c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221130 je 0x1222118e */
  if (C.zf) goto L_1222118e;
  /* 12221132 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12221135 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12221138 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12221139 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1222113b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1222113d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12221140 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12221143 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12221146 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 12221149 push eax */
  push32((uint32_t)(EAX));
  /* 1222114a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1222114d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1222114f push edx */
  push32((uint32_t)(EDX));
  /* 12221150 call 0x12223800 */
  push32(0x12221155u); f_12223800();
  /* 12221155 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12221158 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1222115b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222115f jne 0x12221172 */
  if (!C.zf) goto L_12221172;
  /* 12221161 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12221164 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12221167 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 1222116b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1222116e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12221170 jmp 0x1222118c */
  goto L_1222118c;
L_12221172:;
  /* 12221172 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221176 jge 0x12221183 */
  if ((C.sf==C.of)) goto L_12221183;
  /* 12221178 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1222117b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1222117e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12221181 jmp 0x1222118c */
  goto L_1222118c;
L_12221183:;
  /* 12221183 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12221186 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12221189 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1222118c:;
  /* 1222118c jmp 0x12221124 */
  goto L_12221124;
L_1222118e:;
  /* 1222118e mov esp, ebp */
  ESP = (EBP);
  /* 12221190 pop ebp */
  EBP = (pop32());
  /* 12221191 ret  */
  ESPCHK(0x12221110u, _esp0);
  ESP += 4; return;
}

/* FUN_100111a0 @ 0x122211a0 (186 bytes, 50 insns) */
void f_122211a0(void) {
  FTRACE(0x122211a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122211a0 push ebp */
  push32((uint32_t)(EBP));
  /* 122211a1 mov ebp, esp */
  EBP = (ESP);
  /* 122211a3 push ecx */
  push32((uint32_t)(ECX));
  /* 122211a4 mov eax, dword ptr [0x1224084c] */
  EAX = (r32((uint32_t)(0x1224084c)));
  /* 122211a9 push eax */
  push32((uint32_t)(EAX));
  /* 122211aa call 0x12217f60 */
  push32(0x122211afu); f_12217f60();
  /* 122211af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122211b2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122211b4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122211b7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 122211ba mov dword ptr [0x12240848], ecx */
  w32((uint32_t)(0x12240848), (ECX));
  /* 122211c0 mov edx, dword ptr [0x12240850] */
  EDX = (r32((uint32_t)(0x12240850)));
  /* 122211c6 push edx */
  push32((uint32_t)(EDX));
  /* 122211c7 call 0x12217f60 */
  push32(0x122211ccu); f_12217f60();
  /* 122211cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122211cf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122211d1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122211d4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 122211d7 mov dword ptr [0x12240840], ecx */
  w32((uint32_t)(0x12240840), (ECX));
  /* 122211dd mov dword ptr [0x1224083c], 0 */
  w32((uint32_t)(0x1224083c), (0x0u));
  /* 122211e7 cmp dword ptr [0x12240848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12240848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122211ee je 0x122211f9 */
  if (C.zf) goto L_122211f9;
  /* 122211f0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 122211f7 jmp 0x1222120b */
  goto L_1222120b;
L_122211f9:;
  /* 122211f9 mov edx, dword ptr [0x1224084c] */
  EDX = (r32((uint32_t)(0x1224084c)));
  /* 122211ff push edx */
  push32((uint32_t)(EDX));
  /* 12221200 call 0x12221c40 */
  push32(0x12221205u); f_12221c40();
  /* 12221205 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12221208 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1222120b:;
  /* 1222120b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1222120e mov dword ptr [0x12240844], eax */
  w32((uint32_t)(0x12240844), (EAX));
  /* 12221213 push 1 */
  push32((uint32_t)(0x1u));
  /* 12221215 push 0x12221260 */
  push32((uint32_t)(0x12221260u));
  /* 1222121a call dword ptr [0x122432e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122432e8))), 0x12221220u);
  /* 12221220 mov ecx, dword ptr [0x12240854] */
  ECX = (r32((uint32_t)(0x12240854)));
  /* 12221226 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1222122c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1222122e je 0x1222124c */
  if (C.zf) goto L_1222124c;
  /* 12221230 mov edx, dword ptr [0x12240854] */
  EDX = (r32((uint32_t)(0x12240854)));
  /* 12221236 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 1222123c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1222123e je 0x1222124c */
  if (C.zf) goto L_1222124c;
  /* 12221240 mov eax, dword ptr [0x12240854] */
  EAX = (r32((uint32_t)(0x12240854)));
  /* 12221245 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 12221248 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1222124a jne 0x12221256 */
  if (!C.zf) goto L_12221256;
L_1222124c:;
  /* 1222124c mov dword ptr [0x12240854], 0 */
  w32((uint32_t)(0x12240854), (0x0u));
L_12221256:;
  /* 12221256 mov esp, ebp */
  ESP = (EBP);
  /* 12221258 pop ebp */
  EBP = (pop32());
  /* 12221259 ret  */
  ESPCHK(0x122211a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011260 @ 0x12221260 (804 bytes, 220 insns) */
void f_12221260(void) {
  FTRACE(0x12221260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12221260 push ebp */
  push32((uint32_t)(EBP));
  /* 12221261 mov ebp, esp */
  EBP = (ESP);
  /* 12221263 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12221266 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12221269 push eax */
  push32((uint32_t)(EAX));
  /* 1222126a call 0x12221bc0 */
  push32(0x1222126fu); f_12221bc0();
  /* 1222126f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12221272 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12221275 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12221277 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1222127a push ecx */
  push32((uint32_t)(ECX));
  /* 1222127b mov edx, dword ptr [0x12240840] */
  EDX = (r32((uint32_t)(0x12240840)));
  /* 12221281 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12221283 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12221285 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1222128b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12221291 push edx */
  push32((uint32_t)(EDX));
  /* 12221292 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12221295 push eax */
  push32((uint32_t)(EAX));
  /* 12221296 call dword ptr [0x1224085c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224085c))), 0x1222129cu);
  /* 1222129c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1222129e jne 0x122212b4 */
  if (!C.zf) goto L_122212b4;
  /* 122212a0 mov dword ptr [0x12240854], 0 */
  w32((uint32_t)(0x12240854), (0x0u));
  /* 122212aa mov eax, 1 */
  EAX = (0x1u);
  /* 122212af jmp 0x1222157e */
  goto L_1222157e;
L_122212b4:;
  /* 122212b4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 122212b7 push ecx */
  push32((uint32_t)(ECX));
  /* 122212b8 mov edx, dword ptr [0x12240850] */
  EDX = (r32((uint32_t)(0x12240850)));
  /* 122212be push edx */
  push32((uint32_t)(EDX));
  /* 122212bf call 0x12223800 */
  push32(0x122212c4u); f_12223800();
  /* 122212c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122212c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122212c9 jne 0x122213ef */
  if (!C.zf) goto L_122213ef;
  /* 122212cf push 0x78 */
  push32((uint32_t)(0x78u));
  /* 122212d1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 122212d4 push eax */
  push32((uint32_t)(EAX));
  /* 122212d5 mov ecx, dword ptr [0x12240848] */
  ECX = (r32((uint32_t)(0x12240848)));
  /* 122212db neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 122212dd sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122212df and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 122212e5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122212eb push ecx */
  push32((uint32_t)(ECX));
  /* 122212ec mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122212ef push edx */
  push32((uint32_t)(EDX));
  /* 122212f0 call dword ptr [0x1224085c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224085c))), 0x122212f6u);
  /* 122212f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122212f8 jne 0x1222130e */
  if (!C.zf) goto L_1222130e;
  /* 122212fa mov dword ptr [0x12240854], 0 */
  w32((uint32_t)(0x12240854), (0x0u));
  /* 12221304 mov eax, 1 */
  EAX = (0x1u);
  /* 12221309 jmp 0x1222157e */
  goto L_1222157e;
L_1222130e:;
  /* 1222130e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12221311 push eax */
  push32((uint32_t)(EAX));
  /* 12221312 mov ecx, dword ptr [0x1224084c] */
  ECX = (r32((uint32_t)(0x1224084c)));
  /* 12221318 push ecx */
  push32((uint32_t)(ECX));
  /* 12221319 call 0x12223800 */
  push32(0x1222131eu); f_12223800();
  /* 1222131e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12221321 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12221323 jne 0x12221350 */
  if (!C.zf) goto L_12221350;
  /* 12221325 mov edx, dword ptr [0x12240854] */
  EDX = (r32((uint32_t)(0x12240854)));
  /* 1222132b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 12221331 mov dword ptr [0x12240854], edx */
  w32((uint32_t)(0x12240854), (EDX));
  /* 12221337 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1222133a mov dword ptr [0x12240858], eax */
  w32((uint32_t)(0x12240858), (EAX));
  /* 1222133f mov ecx, dword ptr [0x12240858] */
  ECX = (r32((uint32_t)(0x12240858)));
  /* 12221345 mov dword ptr [0x1224083c], ecx */
  w32((uint32_t)(0x1224083c), (ECX));
  /* 1222134b jmp 0x122213ef */
  goto L_122213ef;
L_12221350:;
  /* 12221350 mov edx, dword ptr [0x12240854] */
  EDX = (r32((uint32_t)(0x12240854)));
  /* 12221356 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12221359 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1222135b jne 0x122213ef */
  if (!C.zf) goto L_122213ef;
  /* 12221361 cmp dword ptr [0x12240844], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12240844))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221368 je 0x122213bd */
  if (C.zf) goto L_122213bd;
  /* 1222136a mov eax, dword ptr [0x12240844] */
  EAX = (r32((uint32_t)(0x12240844)));
  /* 1222136f push eax */
  push32((uint32_t)(EAX));
  /* 12221370 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12221373 push ecx */
  push32((uint32_t)(ECX));
  /* 12221374 mov edx, dword ptr [0x1224084c] */
  EDX = (r32((uint32_t)(0x1224084c)));
  /* 1222137a push edx */
  push32((uint32_t)(EDX));
  /* 1222137b call 0x122238d0 */
  push32(0x12221380u); f_122238d0();
  /* 12221380 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12221383 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12221385 jne 0x122213bd */
  if (!C.zf) goto L_122213bd;
  /* 12221387 mov eax, dword ptr [0x12240854] */
  EAX = (r32((uint32_t)(0x12240854)));
  /* 1222138c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1222138e mov dword ptr [0x12240854], eax */
  w32((uint32_t)(0x12240854), (EAX));
  /* 12221393 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12221396 mov dword ptr [0x12240858], ecx */
  w32((uint32_t)(0x12240858), (ECX));
  /* 1222139c mov edx, dword ptr [0x1224084c] */
  EDX = (r32((uint32_t)(0x1224084c)));
  /* 122213a2 push edx */
  push32((uint32_t)(EDX));
  /* 122213a3 call 0x12217f60 */
  push32(0x122213a8u); f_12217f60();
  /* 122213a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122213ab cmp eax, dword ptr [0x12240844] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12240844))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122213b1 jne 0x122213bb */
  if (!C.zf) goto L_122213bb;
  /* 122213b3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122213b6 mov dword ptr [0x1224083c], eax */
  w32((uint32_t)(0x1224083c), (EAX));
L_122213bb:;
  /* 122213bb jmp 0x122213ef */
  goto L_122213ef;
L_122213bd:;
  /* 122213bd mov ecx, dword ptr [0x12240854] */
  ECX = (r32((uint32_t)(0x12240854)));
  /* 122213c3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 122213c6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122213c8 jne 0x122213ef */
  if (!C.zf) goto L_122213ef;
  /* 122213ca mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122213cd push edx */
  push32((uint32_t)(EDX));
  /* 122213ce call 0x12221900 */
  push32(0x122213d3u); f_12221900();
  /* 122213d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122213d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122213d8 je 0x122213ef */
  if (C.zf) goto L_122213ef;
  /* 122213da mov eax, dword ptr [0x12240854] */
  EAX = (r32((uint32_t)(0x12240854)));
  /* 122213df or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 122213e1 mov dword ptr [0x12240854], eax */
  w32((uint32_t)(0x12240854), (EAX));
  /* 122213e6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122213e9 mov dword ptr [0x12240858], ecx */
  w32((uint32_t)(0x12240858), (ECX));
L_122213ef:;
  /* 122213ef mov edx, dword ptr [0x12240854] */
  EDX = (r32((uint32_t)(0x12240854)));
  /* 122213f5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 122213fb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221401 je 0x12221571 */
  if (C.zf) goto L_12221571;
  /* 12221407 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12221409 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1222140c push eax */
  push32((uint32_t)(EAX));
  /* 1222140d mov ecx, dword ptr [0x12240848] */
  ECX = (r32((uint32_t)(0x12240848)));
  /* 12221413 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12221415 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12221417 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1222141d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12221423 push ecx */
  push32((uint32_t)(ECX));
  /* 12221424 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12221427 push edx */
  push32((uint32_t)(EDX));
  /* 12221428 call dword ptr [0x1224085c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224085c))), 0x1222142eu);
  /* 1222142e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12221430 jne 0x12221446 */
  if (!C.zf) goto L_12221446;
  /* 12221432 mov dword ptr [0x12240854], 0 */
  w32((uint32_t)(0x12240854), (0x0u));
  /* 1222143c mov eax, 1 */
  EAX = (0x1u);
  /* 12221441 jmp 0x1222157e */
  goto L_1222157e;
L_12221446:;
  /* 12221446 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12221449 push eax */
  push32((uint32_t)(EAX));
  /* 1222144a mov ecx, dword ptr [0x1224084c] */
  ECX = (r32((uint32_t)(0x1224084c)));
  /* 12221450 push ecx */
  push32((uint32_t)(ECX));
  /* 12221451 call 0x12223800 */
  push32(0x12221456u); f_12223800();
  /* 12221456 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12221459 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1222145b jne 0x12221510 */
  if (!C.zf) goto L_12221510;
  /* 12221461 mov edx, dword ptr [0x12240854] */
  EDX = (r32((uint32_t)(0x12240854)));
  /* 12221467 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1222146a mov dword ptr [0x12240854], edx */
  w32((uint32_t)(0x12240854), (EDX));
  /* 12221470 cmp dword ptr [0x12240848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12240848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221477 je 0x1222149a */
  if (C.zf) goto L_1222149a;
  /* 12221479 mov eax, dword ptr [0x12240854] */
  EAX = (r32((uint32_t)(0x12240854)));
  /* 1222147e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12221481 mov dword ptr [0x12240854], eax */
  w32((uint32_t)(0x12240854), (EAX));
  /* 12221486 cmp dword ptr [0x1224083c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1224083c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222148d jne 0x12221498 */
  if (!C.zf) goto L_12221498;
  /* 1222148f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12221492 mov dword ptr [0x1224083c], ecx */
  w32((uint32_t)(0x1224083c), (ECX));
L_12221498:;
  /* 12221498 jmp 0x1222150e */
  goto L_1222150e;
L_1222149a:;
  /* 1222149a cmp dword ptr [0x12240844], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12240844))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122214a1 je 0x122214ef */
  if (C.zf) goto L_122214ef;
  /* 122214a3 mov edx, dword ptr [0x1224084c] */
  EDX = (r32((uint32_t)(0x1224084c)));
  /* 122214a9 push edx */
  push32((uint32_t)(EDX));
  /* 122214aa call 0x12217f60 */
  push32(0x122214afu); f_12217f60();
  /* 122214af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122214b2 cmp eax, dword ptr [0x12240844] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12240844))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122214b8 jne 0x122214ef */
  if (!C.zf) goto L_122214ef;
  /* 122214ba push 1 */
  push32((uint32_t)(0x1u));
  /* 122214bc mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122214bf push eax */
  push32((uint32_t)(EAX));
  /* 122214c0 call 0x12221950 */
  push32(0x122214c5u); f_12221950();
  /* 122214c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122214c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122214ca je 0x122214ed */
  if (C.zf) goto L_122214ed;
  /* 122214cc mov ecx, dword ptr [0x12240854] */
  ECX = (r32((uint32_t)(0x12240854)));
  /* 122214d2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 122214d5 mov dword ptr [0x12240854], ecx */
  w32((uint32_t)(0x12240854), (ECX));
  /* 122214db cmp dword ptr [0x1224083c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1224083c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122214e2 jne 0x122214ed */
  if (!C.zf) goto L_122214ed;
  /* 122214e4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122214e7 mov dword ptr [0x1224083c], edx */
  w32((uint32_t)(0x1224083c), (EDX));
L_122214ed:;
  /* 122214ed jmp 0x1222150e */
  goto L_1222150e;
L_122214ef:;
  /* 122214ef mov eax, dword ptr [0x12240854] */
  EAX = (r32((uint32_t)(0x12240854)));
  /* 122214f4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 122214f7 mov dword ptr [0x12240854], eax */
  w32((uint32_t)(0x12240854), (EAX));
  /* 122214fc cmp dword ptr [0x1224083c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1224083c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221503 jne 0x1222150e */
  if (!C.zf) goto L_1222150e;
  /* 12221505 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12221508 mov dword ptr [0x1224083c], ecx */
  w32((uint32_t)(0x1224083c), (ECX));
L_1222150e:;
  /* 1222150e jmp 0x12221571 */
  goto L_12221571;
L_12221510:;
  /* 12221510 cmp dword ptr [0x12240848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12240848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221517 jne 0x12221571 */
  if (!C.zf) goto L_12221571;
  /* 12221519 cmp dword ptr [0x12240844], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12240844))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221520 je 0x12221571 */
  if (C.zf) goto L_12221571;
  /* 12221522 mov edx, dword ptr [0x12240844] */
  EDX = (r32((uint32_t)(0x12240844)));
  /* 12221528 push edx */
  push32((uint32_t)(EDX));
  /* 12221529 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1222152c push eax */
  push32((uint32_t)(EAX));
  /* 1222152d mov ecx, dword ptr [0x1224084c] */
  ECX = (r32((uint32_t)(0x1224084c)));
  /* 12221533 push ecx */
  push32((uint32_t)(ECX));
  /* 12221534 call 0x122238d0 */
  push32(0x12221539u); f_122238d0();
  /* 12221539 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222153c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1222153e jne 0x12221571 */
  if (!C.zf) goto L_12221571;
  /* 12221540 push 0 */
  push32((uint32_t)(0x0u));
  /* 12221542 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12221545 push edx */
  push32((uint32_t)(EDX));
  /* 12221546 call 0x12221950 */
  push32(0x1222154bu); f_12221950();
  /* 1222154b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222154e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12221550 je 0x12221571 */
  if (C.zf) goto L_12221571;
  /* 12221552 mov eax, dword ptr [0x12240854] */
  EAX = (r32((uint32_t)(0x12240854)));
  /* 12221557 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1222155a mov dword ptr [0x12240854], eax */
  w32((uint32_t)(0x12240854), (EAX));
  /* 1222155f cmp dword ptr [0x1224083c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1224083c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221566 jne 0x12221571 */
  if (!C.zf) goto L_12221571;
  /* 12221568 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1222156b mov dword ptr [0x1224083c], ecx */
  w32((uint32_t)(0x1224083c), (ECX));
L_12221571:;
  /* 12221571 mov eax, dword ptr [0x12240854] */
  EAX = (r32((uint32_t)(0x12240854)));
  /* 12221576 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12221579 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1222157b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1222157d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1222157e:;
  /* 1222157e mov esp, ebp */
  ESP = (EBP);
  /* 12221580 pop ebp */
  EBP = (pop32());
  /* 12221581 ret 4 */
  ESPCHK(0x12221260u, _esp0);
  ESP += 8; return;
}

/* FUN_10011590 @ 0x12221590 (116 bytes, 33 insns) */
void f_12221590(void) {
  FTRACE(0x12221590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12221590 push ebp */
  push32((uint32_t)(EBP));
  /* 12221591 mov ebp, esp */
  EBP = (ESP);
  /* 12221593 push ecx */
  push32((uint32_t)(ECX));
  /* 12221594 mov eax, dword ptr [0x1224084c] */
  EAX = (r32((uint32_t)(0x1224084c)));
  /* 12221599 push eax */
  push32((uint32_t)(EAX));
  /* 1222159a call 0x12217f60 */
  push32(0x1222159fu); f_12217f60();
  /* 1222159f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122215a2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122215a4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122215a7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 122215aa mov dword ptr [0x12240848], ecx */
  w32((uint32_t)(0x12240848), (ECX));
  /* 122215b0 cmp dword ptr [0x12240848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12240848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122215b7 je 0x122215c2 */
  if (C.zf) goto L_122215c2;
  /* 122215b9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 122215c0 jmp 0x122215d4 */
  goto L_122215d4;
L_122215c2:;
  /* 122215c2 mov edx, dword ptr [0x1224084c] */
  EDX = (r32((uint32_t)(0x1224084c)));
  /* 122215c8 push edx */
  push32((uint32_t)(EDX));
  /* 122215c9 call 0x12221c40 */
  push32(0x122215ceu); f_12221c40();
  /* 122215ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122215d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_122215d4:;
  /* 122215d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122215d7 mov dword ptr [0x12240844], eax */
  w32((uint32_t)(0x12240844), (EAX));
  /* 122215dc push 1 */
  push32((uint32_t)(0x1u));
  /* 122215de push 0x12221610 */
  push32((uint32_t)(0x12221610u));
  /* 122215e3 call dword ptr [0x122432e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122432e8))), 0x122215e9u);
  /* 122215e9 mov ecx, dword ptr [0x12240854] */
  ECX = (r32((uint32_t)(0x12240854)));
  /* 122215ef and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 122215f2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122215f4 jne 0x12221600 */
  if (!C.zf) goto L_12221600;
  /* 122215f6 mov dword ptr [0x12240854], 0 */
  w32((uint32_t)(0x12240854), (0x0u));
L_12221600:;
  /* 12221600 mov esp, ebp */
  ESP = (EBP);
  /* 12221602 pop ebp */
  EBP = (pop32());
  /* 12221603 ret  */
  ESPCHK(0x12221590u, _esp0);
  ESP += 4; return;
}

/* FUN_10011610 @ 0x12221610 (287 bytes, 86 insns) */
void f_12221610(void) {
  FTRACE(0x12221610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12221610 push ebp */
  push32((uint32_t)(EBP));
  /* 12221611 mov ebp, esp */
  EBP = (ESP);
  /* 12221613 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12221616 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12221619 push eax */
  push32((uint32_t)(EAX));
  /* 1222161a call 0x12221bc0 */
  push32(0x1222161fu); f_12221bc0();
  /* 1222161f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12221622 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12221625 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12221627 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1222162a push ecx */
  push32((uint32_t)(ECX));
  /* 1222162b mov edx, dword ptr [0x12240848] */
  EDX = (r32((uint32_t)(0x12240848)));
  /* 12221631 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12221633 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12221635 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 1222163b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12221641 push edx */
  push32((uint32_t)(EDX));
  /* 12221642 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12221645 push eax */
  push32((uint32_t)(EAX));
  /* 12221646 call dword ptr [0x1224085c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224085c))), 0x1222164cu);
  /* 1222164c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1222164e jne 0x12221664 */
  if (!C.zf) goto L_12221664;
  /* 12221650 mov dword ptr [0x12240854], 0 */
  w32((uint32_t)(0x12240854), (0x0u));
  /* 1222165a mov eax, 1 */
  EAX = (0x1u);
  /* 1222165f jmp 0x12221729 */
  goto L_12221729;
L_12221664:;
  /* 12221664 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12221667 push ecx */
  push32((uint32_t)(ECX));
  /* 12221668 mov edx, dword ptr [0x1224084c] */
  EDX = (r32((uint32_t)(0x1224084c)));
  /* 1222166e push edx */
  push32((uint32_t)(EDX));
  /* 1222166f call 0x12223800 */
  push32(0x12221674u); f_12223800();
  /* 12221674 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12221677 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12221679 jne 0x122216b9 */
  if (!C.zf) goto L_122216b9;
  /* 1222167b cmp dword ptr [0x12240848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12240848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221682 jne 0x12221696 */
  if (!C.zf) goto L_12221696;
  /* 12221684 push 1 */
  push32((uint32_t)(0x1u));
  /* 12221686 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12221689 push eax */
  push32((uint32_t)(EAX));
  /* 1222168a call 0x12221950 */
  push32(0x1222168fu); f_12221950();
  /* 1222168f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12221692 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12221694 je 0x122216b7 */
  if (C.zf) goto L_122216b7;
L_12221696:;
  /* 12221696 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12221699 mov dword ptr [0x12240858], ecx */
  w32((uint32_t)(0x12240858), (ECX));
  /* 1222169f mov edx, dword ptr [0x12240858] */
  EDX = (r32((uint32_t)(0x12240858)));
  /* 122216a5 mov dword ptr [0x1224083c], edx */
  w32((uint32_t)(0x1224083c), (EDX));
  /* 122216ab mov eax, dword ptr [0x12240854] */
  EAX = (r32((uint32_t)(0x12240854)));
  /* 122216b0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 122216b2 mov dword ptr [0x12240854], eax */
  w32((uint32_t)(0x12240854), (EAX));
L_122216b7:;
  /* 122216b7 jmp 0x1222171c */
  goto L_1222171c;
L_122216b9:;
  /* 122216b9 cmp dword ptr [0x12240848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12240848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122216c0 jne 0x1222171c */
  if (!C.zf) goto L_1222171c;
  /* 122216c2 cmp dword ptr [0x12240844], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12240844))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122216c9 je 0x1222171c */
  if (C.zf) goto L_1222171c;
  /* 122216cb mov ecx, dword ptr [0x12240844] */
  ECX = (r32((uint32_t)(0x12240844)));
  /* 122216d1 push ecx */
  push32((uint32_t)(ECX));
  /* 122216d2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 122216d5 push edx */
  push32((uint32_t)(EDX));
  /* 122216d6 mov eax, dword ptr [0x1224084c] */
  EAX = (r32((uint32_t)(0x1224084c)));
  /* 122216db push eax */
  push32((uint32_t)(EAX));
  /* 122216dc call 0x122238d0 */
  push32(0x122216e1u); f_122238d0();
  /* 122216e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122216e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122216e6 jne 0x1222171c */
  if (!C.zf) goto L_1222171c;
  /* 122216e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 122216ea mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122216ed push ecx */
  push32((uint32_t)(ECX));
  /* 122216ee call 0x12221950 */
  push32(0x122216f3u); f_12221950();
  /* 122216f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122216f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122216f8 je 0x1222171c */
  if (C.zf) goto L_1222171c;
  /* 122216fa mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122216fd mov dword ptr [0x12240858], edx */
  w32((uint32_t)(0x12240858), (EDX));
  /* 12221703 mov eax, dword ptr [0x12240858] */
  EAX = (r32((uint32_t)(0x12240858)));
  /* 12221708 mov dword ptr [0x1224083c], eax */
  w32((uint32_t)(0x1224083c), (EAX));
  /* 1222170d mov ecx, dword ptr [0x12240854] */
  ECX = (r32((uint32_t)(0x12240854)));
  /* 12221713 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12221716 mov dword ptr [0x12240854], ecx */
  w32((uint32_t)(0x12240854), (ECX));
L_1222171c:;
  /* 1222171c mov eax, dword ptr [0x12240854] */
  EAX = (r32((uint32_t)(0x12240854)));
  /* 12221721 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12221724 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12221726 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12221728 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12221729:;
  /* 12221729 mov esp, ebp */
  ESP = (EBP);
  /* 1222172b pop ebp */
  EBP = (pop32());
  /* 1222172c ret 4 */
  ESPCHK(0x12221610u, _esp0);
  ESP += 8; return;
}

/* FUN_10011730 @ 0x12221730 (69 bytes, 20 insns) */
void f_12221730(void) {
  FTRACE(0x12221730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12221730 push ebp */
  push32((uint32_t)(EBP));
  /* 12221731 mov ebp, esp */
  EBP = (ESP);
  /* 12221733 mov eax, dword ptr [0x12240850] */
  EAX = (r32((uint32_t)(0x12240850)));
  /* 12221738 push eax */
  push32((uint32_t)(EAX));
  /* 12221739 call 0x12217f60 */
  push32(0x1222173eu); f_12217f60();
  /* 1222173e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12221741 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12221743 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221746 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12221749 mov dword ptr [0x12240840], ecx */
  w32((uint32_t)(0x12240840), (ECX));
  /* 1222174f push 1 */
  push32((uint32_t)(0x1u));
  /* 12221751 push 0x12221780 */
  push32((uint32_t)(0x12221780u));
  /* 12221756 call dword ptr [0x122432e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122432e8))), 0x1222175cu);
  /* 1222175c mov edx, dword ptr [0x12240854] */
  EDX = (r32((uint32_t)(0x12240854)));
  /* 12221762 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12221765 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12221767 jne 0x12221773 */
  if (!C.zf) goto L_12221773;
  /* 12221769 mov dword ptr [0x12240854], 0 */
  w32((uint32_t)(0x12240854), (0x0u));
L_12221773:;
  /* 12221773 pop ebp */
  EBP = (pop32());
  /* 12221774 ret  */
  ESPCHK(0x12221730u, _esp0);
  ESP += 4; return;
}

/* FUN_10011780 @ 0x12221780 (172 bytes, 54 insns) */
void f_12221780(void) {
  FTRACE(0x12221780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12221780 push ebp */
  push32((uint32_t)(EBP));
  /* 12221781 mov ebp, esp */
  EBP = (ESP);
  /* 12221783 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12221786 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12221789 push eax */
  push32((uint32_t)(EAX));
  /* 1222178a call 0x12221bc0 */
  push32(0x1222178fu); f_12221bc0();
  /* 1222178f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12221792 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12221795 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12221797 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1222179a push ecx */
  push32((uint32_t)(ECX));
  /* 1222179b mov edx, dword ptr [0x12240840] */
  EDX = (r32((uint32_t)(0x12240840)));
  /* 122217a1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 122217a3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122217a5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 122217ab add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122217b1 push edx */
  push32((uint32_t)(EDX));
  /* 122217b2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122217b5 push eax */
  push32((uint32_t)(EAX));
  /* 122217b6 call dword ptr [0x1224085c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224085c))), 0x122217bcu);
  /* 122217bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122217be jne 0x122217d1 */
  if (!C.zf) goto L_122217d1;
  /* 122217c0 mov dword ptr [0x12240854], 0 */
  w32((uint32_t)(0x12240854), (0x0u));
  /* 122217ca mov eax, 1 */
  EAX = (0x1u);
  /* 122217cf jmp 0x12221826 */
  goto L_12221826;
L_122217d1:;
  /* 122217d1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 122217d4 push ecx */
  push32((uint32_t)(ECX));
  /* 122217d5 mov edx, dword ptr [0x12240850] */
  EDX = (r32((uint32_t)(0x12240850)));
  /* 122217db push edx */
  push32((uint32_t)(EDX));
  /* 122217dc call 0x12223800 */
  push32(0x122217e1u); f_12223800();
  /* 122217e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122217e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122217e6 jne 0x12221819 */
  if (!C.zf) goto L_12221819;
  /* 122217e8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122217eb push eax */
  push32((uint32_t)(EAX));
  /* 122217ec call 0x12221900 */
  push32(0x122217f1u); f_12221900();
  /* 122217f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122217f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122217f6 je 0x12221819 */
  if (C.zf) goto L_12221819;
  /* 122217f8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122217fb mov dword ptr [0x12240858], ecx */
  w32((uint32_t)(0x12240858), (ECX));
  /* 12221801 mov edx, dword ptr [0x12240858] */
  EDX = (r32((uint32_t)(0x12240858)));
  /* 12221807 mov dword ptr [0x1224083c], edx */
  w32((uint32_t)(0x1224083c), (EDX));
  /* 1222180d mov eax, dword ptr [0x12240854] */
  EAX = (r32((uint32_t)(0x12240854)));
  /* 12221812 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12221814 mov dword ptr [0x12240854], eax */
  w32((uint32_t)(0x12240854), (EAX));
L_12221819:;
  /* 12221819 mov eax, dword ptr [0x12240854] */
  EAX = (r32((uint32_t)(0x12240854)));
  /* 1222181e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12221821 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12221823 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12221825 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12221826:;
  /* 12221826 mov esp, ebp */
  ESP = (EBP);
  /* 12221828 pop ebp */
  EBP = (pop32());
  /* 12221829 ret 4 */
  ESPCHK(0x12221780u, _esp0);
  ESP += 8; return;
}

/* FUN_10011830 @ 0x12221830 (43 bytes, 11 insns) */
void f_12221830(void) {
  FTRACE(0x12221830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12221830 push ebp */
  push32((uint32_t)(EBP));
  /* 12221831 mov ebp, esp */
  EBP = (ESP);
  /* 12221833 mov eax, dword ptr [0x12240854] */
  EAX = (r32((uint32_t)(0x12240854)));
  /* 12221838 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 1222183d mov dword ptr [0x12240854], eax */
  w32((uint32_t)(0x12240854), (EAX));
  /* 12221842 call dword ptr [0x122432d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122432d8))), 0x12221848u);
  /* 12221848 mov dword ptr [0x12240858], eax */
  w32((uint32_t)(0x12240858), (EAX));
  /* 1222184d mov ecx, dword ptr [0x12240858] */
  ECX = (r32((uint32_t)(0x12240858)));
  /* 12221853 mov dword ptr [0x1224083c], ecx */
  w32((uint32_t)(0x1224083c), (ECX));
  /* 12221859 pop ebp */
  EBP = (pop32());
  /* 1222185a ret  */
  ESPCHK(0x12221830u, _esp0);
  ESP += 4; return;
}

/* FUN_10011860 @ 0x12221860 (155 bytes, 57 insns) */
void f_12221860(void) {
  FTRACE(0x12221860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12221860 push ebp */
  push32((uint32_t)(EBP));
  /* 12221861 mov ebp, esp */
  EBP = (ESP);
  /* 12221863 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12221866 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222186a je 0x1222188b */
  if (C.zf) goto L_1222188b;
  /* 1222186c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222186f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12221872 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12221874 je 0x1222188b */
  if (C.zf) goto L_1222188b;
  /* 12221876 push 0x1223c96c */
  push32((uint32_t)(0x1223c96cu));
  /* 1222187b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222187e push edx */
  push32((uint32_t)(EDX));
  /* 1222187f call 0x12220dc0 */
  push32(0x12221884u); f_12220dc0();
  /* 12221884 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12221887 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12221889 jne 0x122218b3 */
  if (!C.zf) goto L_122218b3;
L_1222188b:;
  /* 1222188b push 8 */
  push32((uint32_t)(0x8u));
  /* 1222188d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12221890 push eax */
  push32((uint32_t)(EAX));
  /* 12221891 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12221896 mov ecx, dword ptr [0x12240858] */
  ECX = (r32((uint32_t)(0x12240858)));
  /* 1222189c push ecx */
  push32((uint32_t)(ECX));
  /* 1222189d call dword ptr [0x1224085c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224085c))), 0x122218a3u);
  /* 122218a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122218a5 jne 0x122218ab */
  if (!C.zf) goto L_122218ab;
  /* 122218a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122218a9 jmp 0x122218f7 */
  goto L_122218f7;
L_122218ab:;
  /* 122218ab lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 122218ae mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 122218b1 jmp 0x122218eb */
  goto L_122218eb;
L_122218b3:;
  /* 122218b3 push 0x1223c968 */
  push32((uint32_t)(0x1223c968u));
  /* 122218b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122218bb push eax */
  push32((uint32_t)(EAX));
  /* 122218bc call 0x12220dc0 */
  push32(0x122218c1u); f_12220dc0();
  /* 122218c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122218c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122218c6 jne 0x122218eb */
  if (!C.zf) goto L_122218eb;
  /* 122218c8 push 8 */
  push32((uint32_t)(0x8u));
  /* 122218ca lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 122218cd push ecx */
  push32((uint32_t)(ECX));
  /* 122218ce push 0xb */
  push32((uint32_t)(0xbu));
  /* 122218d0 mov edx, dword ptr [0x12240858] */
  EDX = (r32((uint32_t)(0x12240858)));
  /* 122218d6 push edx */
  push32((uint32_t)(EDX));
  /* 122218d7 call dword ptr [0x1224085c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224085c))), 0x122218ddu);
  /* 122218dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122218df jne 0x122218e5 */
  if (!C.zf) goto L_122218e5;
  /* 122218e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122218e3 jmp 0x122218f7 */
  goto L_122218f7;
L_122218e5:;
  /* 122218e5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 122218e8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_122218eb:;
  /* 122218eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122218ee push ecx */
  push32((uint32_t)(ECX));
  /* 122218ef call 0x122239e0 */
  push32(0x122218f4u); f_122239e0();
  /* 122218f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122218f7:;
  /* 122218f7 mov esp, ebp */
  ESP = (EBP);
  /* 122218f9 pop ebp */
  EBP = (pop32());
  /* 122218fa ret  */
  ESPCHK(0x12221860u, _esp0);
  ESP += 4; return;
}

/* FUN_10011900 @ 0x12221900 (79 bytes, 26 insns) */
void f_12221900(void) {
  FTRACE(0x12221900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12221900 push ebp */
  push32((uint32_t)(EBP));
  /* 12221901 mov ebp, esp */
  EBP = (ESP);
  /* 12221903 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12221906 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 1222190a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 1222190e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12221915 jmp 0x12221920 */
  goto L_12221920;
L_12221917:;
  /* 12221917 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1222191a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1222191d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12221920:;
  /* 12221920 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221924 jae 0x12221946 */
  if (!C.cf) goto L_12221946;
  /* 12221926 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12221929 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1222192f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12221932 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12221934 mov cx, word ptr [eax*2 + 0x1223f9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x1223f9c4)));
  /* 1222193c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222193e jne 0x12221944 */
  if (!C.zf) goto L_12221944;
  /* 12221940 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12221942 jmp 0x1222194b */
  goto L_1222194b;
L_12221944:;
  /* 12221944 jmp 0x12221917 */
  goto L_12221917;
L_12221946:;
  /* 12221946 mov eax, 1 */
  EAX = (0x1u);
L_1222194b:;
  /* 1222194b mov esp, ebp */
  ESP = (EBP);
  /* 1222194d pop ebp */
  EBP = (pop32());
  /* 1222194e ret  */
  ESPCHK(0x12221900u, _esp0);
  ESP += 4; return;
}

/* FUN_10011950 @ 0x12221950 (135 bytes, 48 insns) */
void f_12221950(void) {
  FTRACE(0x12221950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12221950 push ebp */
  push32((uint32_t)(EBP));
  /* 12221951 mov ebp, esp */
  EBP = (ESP);
  /* 12221953 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12221956 push esi */
  push32((uint32_t)(ESI));
  /* 12221957 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1222195a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1222195f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 12221964 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12221969 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 1222196c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12221971 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12221974 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12221976 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 12221979 push ecx */
  push32((uint32_t)(ECX));
  /* 1222197a push 1 */
  push32((uint32_t)(0x1u));
  /* 1222197c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1222197f push edx */
  push32((uint32_t)(EDX));
  /* 12221980 call dword ptr [0x1224085c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1224085c))), 0x12221986u);
  /* 12221986 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12221988 jne 0x1222198e */
  if (!C.zf) goto L_1222198e;
  /* 1222198a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1222198c jmp 0x122219d2 */
  goto L_122219d2;
L_1222198e:;
  /* 1222198e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 12221991 push eax */
  push32((uint32_t)(EAX));
  /* 12221992 call 0x12221bc0 */
  push32(0x12221997u); f_12221bc0();
  /* 12221997 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222199a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222199d je 0x122219cd */
  if (C.zf) goto L_122219cd;
  /* 1222199f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122219a3 je 0x122219cd */
  if (C.zf) goto L_122219cd;
  /* 122219a5 mov ecx, dword ptr [0x1224084c] */
  ECX = (r32((uint32_t)(0x1224084c)));
  /* 122219ab push ecx */
  push32((uint32_t)(ECX));
  /* 122219ac call 0x12221c40 */
  push32(0x122219b1u); f_12221c40();
  /* 122219b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122219b4 mov esi, eax */
  ESI = (EAX);
  /* 122219b6 mov edx, dword ptr [0x1224084c] */
  EDX = (r32((uint32_t)(0x1224084c)));
  /* 122219bc push edx */
  push32((uint32_t)(EDX));
  /* 122219bd call 0x12217f60 */
  push32(0x122219c2u); f_12217f60();
  /* 122219c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122219c5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122219c7 jne 0x122219cd */
  if (!C.zf) goto L_122219cd;
  /* 122219c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122219cb jmp 0x122219d2 */
  goto L_122219d2;
L_122219cd:;
  /* 122219cd mov eax, 1 */
  EAX = (0x1u);
L_122219d2:;
  /* 122219d2 pop esi */
  ESI = (pop32());
  /* 122219d3 mov esp, ebp */
  ESP = (EBP);
  /* 122219d5 pop ebp */
  EBP = (pop32());
  /* 122219d6 ret  */
  ESPCHK(0x12221950u, _esp0);
  ESP += 4; return;
}

/* FUN_100119e0 @ 0x122219e0 (77 bytes, 18 insns) */
void f_122219e0(void) {
  FTRACE(0x122219e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122219e0 push ebp */
  push32((uint32_t)(EBP));
  /* 122219e1 mov ebp, esp */
  EBP = (ESP);
  /* 122219e3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122219e9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 122219f3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 122219f9 push eax */
  push32((uint32_t)(EAX));
  /* 122219fa call dword ptr [0x122432d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122432d4))), 0x12221a00u);
  /* 12221a00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12221a02 je 0x12221a19 */
  if (C.zf) goto L_12221a19;
  /* 12221a04 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221a0b jne 0x12221a19 */
  if (!C.zf) goto L_12221a19;
  /* 12221a0d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 12221a17 jmp 0x12221a23 */
  goto L_12221a23;
L_12221a19:;
  /* 12221a19 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_12221a23:;
  /* 12221a23 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12221a29 mov esp, ebp */
  ESP = (EBP);
  /* 12221a2b pop ebp */
  EBP = (pop32());
  /* 12221a2c ret  */
  ESPCHK(0x122219e0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x12221a30 (388 bytes, 118 insns) */
void f_12221a30(void) {
  FTRACE(0x12221a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12221a30 push ebp */
  push32((uint32_t)(EBP));
  /* 12221a31 mov ebp, esp */
  EBP = (ESP);
  /* 12221a33 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12221a36 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12221a3d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 12221a44 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12221a4b:;
  /* 12221a4b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12221a4e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221a51 jg 0x12221b98 */
  if ((!C.zf&&C.sf==C.of)) goto L_12221b98;
  /* 12221a57 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12221a5a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12221a5d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12221a5e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12221a60 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12221a62 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12221a65 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12221a68 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12221a6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12221a6e cmp edx, dword ptr [ecx + 0x1223f520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x1223f520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221a74 jne 0x12221b6e */
  if (!C.zf) goto L_12221b6e;
  /* 12221a7a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12221a7d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12221a80 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221a84 ja 0x12221aa7 */
  if ((!C.cf&&!C.zf)) goto L_12221aa7;
  /* 12221a86 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221a8a je 0x12221b19 */
  if (C.zf) goto L_12221b19;
  /* 12221a90 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221a94 je 0x12221ac4 */
  if (C.zf) goto L_12221ac4;
  /* 12221a96 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221a9a je 0x12221ae6 */
  if (C.zf) goto L_12221ae6;
  /* 12221a9c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221aa0 je 0x12221b08 */
  if (C.zf) goto L_12221b08;
  /* 12221aa2 jmp 0x12221b38 */
  goto L_12221b38;
L_12221aa7:;
  /* 12221aa7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221aae je 0x12221ad5 */
  if (C.zf) goto L_12221ad5;
  /* 12221ab0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221ab7 je 0x12221af7 */
  if (C.zf) goto L_12221af7;
  /* 12221ab9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221ac0 je 0x12221b2a */
  if (C.zf) goto L_12221b2a;
  /* 12221ac2 jmp 0x12221b38 */
  goto L_12221b38;
L_12221ac4:;
  /* 12221ac4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12221ac7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12221aca add ecx, 0x1223f524 */
  { uint32_t _a=(ECX),_b=(0x1223f524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12221ad0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12221ad3 jmp 0x12221b38 */
  goto L_12221b38;
L_12221ad5:;
  /* 12221ad5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12221ad8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12221adb mov eax, dword ptr [edx + 0x1223f52c] */
  EAX = (r32((uint32_t)(EDX + 0x1223f52c)));
  /* 12221ae1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12221ae4 jmp 0x12221b38 */
  goto L_12221b38;
L_12221ae6:;
  /* 12221ae6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12221ae9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12221aec add ecx, 0x1223f530 */
  { uint32_t _a=(ECX),_b=(0x1223f530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12221af2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12221af5 jmp 0x12221b38 */
  goto L_12221b38;
L_12221af7:;
  /* 12221af7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12221afa imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12221afd mov eax, dword ptr [edx + 0x1223f534] */
  EAX = (r32((uint32_t)(EDX + 0x1223f534)));
  /* 12221b03 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12221b06 jmp 0x12221b38 */
  goto L_12221b38;
L_12221b08:;
  /* 12221b08 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12221b0b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12221b0e add ecx, 0x1223f538 */
  { uint32_t _a=(ECX),_b=(0x1223f538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12221b14 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12221b17 jmp 0x12221b38 */
  goto L_12221b38;
L_12221b19:;
  /* 12221b19 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12221b1c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12221b1f add edx, 0x1223f53c */
  { uint32_t _a=(EDX),_b=(0x1223f53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12221b25 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12221b28 jmp 0x12221b38 */
  goto L_12221b38;
L_12221b2a:;
  /* 12221b2a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12221b2d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12221b30 add eax, 0x1223f544 */
  { uint32_t _a=(EAX),_b=(0x1223f544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12221b35 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12221b38:;
  /* 12221b38 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221b3c je 0x12221b44 */
  if (C.zf) goto L_12221b44;
  /* 12221b3e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221b42 jge 0x12221b46 */
  if ((C.sf==C.of)) goto L_12221b46;
L_12221b44:;
  /* 12221b44 jmp 0x12221b98 */
  goto L_12221b98;
L_12221b46:;
  /* 12221b46 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12221b49 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12221b4c push ecx */
  push32((uint32_t)(ECX));
  /* 12221b4d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12221b50 push edx */
  push32((uint32_t)(EDX));
  /* 12221b51 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12221b54 push eax */
  push32((uint32_t)(EAX));
  /* 12221b55 call 0x12218950 */
  push32(0x12221b5au); f_12218950();
  /* 12221b5a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12221b5d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12221b60 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12221b63 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 12221b67 mov eax, 1 */
  EAX = (0x1u);
  /* 12221b6c jmp 0x12221bae */
  goto L_12221bae;
L_12221b6e:;
  /* 12221b6e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12221b71 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12221b74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12221b77 cmp eax, dword ptr [edx + 0x1223f520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x1223f520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221b7d jae 0x12221b8a */
  if (!C.cf) goto L_12221b8a;
  /* 12221b7f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12221b82 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12221b85 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12221b88 jmp 0x12221b93 */
  goto L_12221b93;
L_12221b8a:;
  /* 12221b8a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12221b8d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12221b90 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12221b93:;
  /* 12221b93 jmp 0x12221a4b */
  goto L_12221a4b;
L_12221b98:;
  /* 12221b98 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12221b9b push eax */
  push32((uint32_t)(EAX));
  /* 12221b9c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12221b9f push ecx */
  push32((uint32_t)(ECX));
  /* 12221ba0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12221ba3 push edx */
  push32((uint32_t)(EDX));
  /* 12221ba4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12221ba7 push eax */
  push32((uint32_t)(EAX));
  /* 12221ba8 call dword ptr [0x122432e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122432e0))), 0x12221baeu);
L_12221bae:;
  /* 12221bae mov esp, ebp */
  ESP = (EBP);
  /* 12221bb0 pop ebp */
  EBP = (pop32());
  /* 12221bb1 ret 0x10 */
  ESPCHK(0x12221a30u, _esp0);
  ESP += 20; return;
}

/* FUN_10011bc0 @ 0x12221bc0 (118 bytes, 42 insns) */
void f_12221bc0(void) {
  FTRACE(0x12221bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12221bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12221bc1 mov ebp, esp */
  EBP = (ESP);
  /* 12221bc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12221bc6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12221bcd:;
  /* 12221bcd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12221bd0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12221bd2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12221bd5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12221bd9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12221bdc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12221bdf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12221be2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12221be4 je 0x12221c2f */
  if (C.zf) goto L_12221c2f;
  /* 12221be6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12221bea cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221bed jl 0x12221c02 */
  if ((C.sf!=C.of)) goto L_12221c02;
  /* 12221bef movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12221bf3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221bf6 jg 0x12221c02 */
  if ((!C.zf&&C.sf==C.of)) goto L_12221c02;
  /* 12221bf8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12221bfb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12221bfd mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12221c00 jmp 0x12221c1c */
  goto L_12221c1c;
L_12221c02:;
  /* 12221c02 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12221c06 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221c09 jl 0x12221c1c */
  if ((C.sf!=C.of)) goto L_12221c1c;
  /* 12221c0b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12221c0f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221c12 jg 0x12221c1c */
  if ((!C.zf&&C.sf==C.of)) goto L_12221c1c;
  /* 12221c14 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12221c17 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12221c19 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_12221c1c:;
  /* 12221c1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12221c1f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12221c22 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12221c26 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12221c2a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12221c2d jmp 0x12221bcd */
  goto L_12221bcd;
L_12221c2f:;
  /* 12221c2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12221c32 mov esp, ebp */
  ESP = (EBP);
  /* 12221c34 pop ebp */
  EBP = (pop32());
  /* 12221c35 ret  */
  ESPCHK(0x12221bc0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x12221c40 (101 bytes, 36 insns) */
void f_12221c40(void) {
  FTRACE(0x12221c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12221c40 push ebp */
  push32((uint32_t)(EBP));
  /* 12221c41 mov ebp, esp */
  EBP = (ESP);
  /* 12221c43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12221c46 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12221c4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12221c50 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12221c52 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 12221c55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12221c58 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12221c5b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12221c5e:;
  /* 12221c5e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12221c62 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221c65 jl 0x12221c70 */
  if ((C.sf!=C.of)) goto L_12221c70;
  /* 12221c67 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12221c6b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221c6e jle 0x12221c82 */
  if ((C.zf||C.sf!=C.of)) goto L_12221c82;
L_12221c70:;
  /* 12221c70 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12221c74 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221c77 jl 0x12221c9e */
  if ((C.sf!=C.of)) goto L_12221c9e;
  /* 12221c79 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12221c7d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221c80 jg 0x12221c9e */
  if ((!C.zf&&C.sf==C.of)) goto L_12221c9e;
L_12221c82:;
  /* 12221c82 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12221c85 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12221c88 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12221c8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12221c8e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12221c90 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 12221c93 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12221c96 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12221c99 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12221c9c jmp 0x12221c5e */
  goto L_12221c5e;
L_12221c9e:;
  /* 12221c9e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12221ca1 mov esp, ebp */
  ESP = (EBP);
  /* 12221ca3 pop ebp */
  EBP = (pop32());
  /* 12221ca4 ret  */
  ESPCHK(0x12221c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10011cb0 @ 0x12221cb0 (122 bytes, 39 insns) */
void f_12221cb0(void) {
  FTRACE(0x12221cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12221cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12221cb1 mov ebp, esp */
  EBP = (ESP);
  /* 12221cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12221cb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12221cb7 cmp eax, dword ptr [0x122420dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122420dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221cbd jae 0x12221ce1 */
  if (!C.cf) goto L_12221ce1;
  /* 12221cbf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12221cc2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12221cc5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12221cc8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12221ccb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12221cce mov eax, dword ptr [ecx*4 + 0x12241fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12241fa0)));
  /* 12221cd5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12221cda and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12221cdd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12221cdf jne 0x12221cfc */
  if (!C.zf) goto L_12221cfc;
L_12221ce1:;
  /* 12221ce1 call 0x1221d000 */
  push32(0x12221ce6u); f_1221d000();
  /* 12221ce6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12221cec call 0x1221d010 */
  push32(0x12221cf1u); f_1221d010();
  /* 12221cf1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12221cf7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12221cfa jmp 0x12221d26 */
  goto L_12221d26;
L_12221cfc:;
  /* 12221cfc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12221cff push edx */
  push32((uint32_t)(EDX));
  /* 12221d00 call 0x1221e820 */
  push32(0x12221d05u); f_1221e820();
  /* 12221d05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12221d08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12221d0b push eax */
  push32((uint32_t)(EAX));
  /* 12221d0c call 0x12221d30 */
  push32(0x12221d11u); f_12221d30();
  /* 12221d11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12221d14 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12221d17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12221d1a push ecx */
  push32((uint32_t)(ECX));
  /* 12221d1b call 0x1221e8b0 */
  push32(0x12221d20u); f_1221e8b0();
  /* 12221d20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12221d23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12221d26:;
  /* 12221d26 mov esp, ebp */
  ESP = (EBP);
  /* 12221d28 pop ebp */
  EBP = (pop32());
  /* 12221d29 ret  */
  ESPCHK(0x12221cb0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x12221d30 (170 bytes, 59 insns) */
void f_12221d30(void) {
  FTRACE(0x12221d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12221d30 push ebp */
  push32((uint32_t)(EBP));
  /* 12221d31 mov ebp, esp */
  EBP = (ESP);
  /* 12221d33 push ecx */
  push32((uint32_t)(ECX));
  /* 12221d34 push esi */
  push32((uint32_t)(ESI));
  /* 12221d35 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12221d38 push eax */
  push32((uint32_t)(EAX));
  /* 12221d39 call 0x1221e6a0 */
  push32(0x12221d3eu); f_1221e6a0();
  /* 12221d3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12221d41 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221d44 je 0x12221d83 */
  if (C.zf) goto L_12221d83;
  /* 12221d46 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221d4a je 0x12221d52 */
  if (C.zf) goto L_12221d52;
  /* 12221d4c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221d50 jne 0x12221d6c */
  if (!C.zf) goto L_12221d6c;
L_12221d52:;
  /* 12221d52 push 1 */
  push32((uint32_t)(0x1u));
  /* 12221d54 call 0x1221e6a0 */
  push32(0x12221d59u); f_1221e6a0();
  /* 12221d59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12221d5c mov esi, eax */
  ESI = (EAX);
  /* 12221d5e push 2 */
  push32((uint32_t)(0x2u));
  /* 12221d60 call 0x1221e6a0 */
  push32(0x12221d65u); f_1221e6a0();
  /* 12221d65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12221d68 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221d6a je 0x12221d83 */
  if (C.zf) goto L_12221d83;
L_12221d6c:;
  /* 12221d6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12221d6f push ecx */
  push32((uint32_t)(ECX));
  /* 12221d70 call 0x1221e6a0 */
  push32(0x12221d75u); f_1221e6a0();
  /* 12221d75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12221d78 push eax */
  push32((uint32_t)(EAX));
  /* 12221d79 call dword ptr [0x122432dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122432dc))), 0x12221d7fu);
  /* 12221d7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12221d81 je 0x12221d8c */
  if (C.zf) goto L_12221d8c;
L_12221d83:;
  /* 12221d83 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12221d8a jmp 0x12221d95 */
  goto L_12221d95;
L_12221d8c:;
  /* 12221d8c call dword ptr [0x122433b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122433b4))), 0x12221d92u);
  /* 12221d92 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12221d95:;
  /* 12221d95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12221d98 push edx */
  push32((uint32_t)(EDX));
  /* 12221d99 call 0x1221e5c0 */
  push32(0x12221d9eu); f_1221e5c0();
  /* 12221d9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12221da1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12221da4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12221da7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12221daa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12221dad imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12221db0 mov edx, dword ptr [eax*4 + 0x12241fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12241fa0)));
  /* 12221db7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 12221dbc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221dc0 je 0x12221dd3 */
  if (C.zf) goto L_12221dd3;
  /* 12221dc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12221dc5 push eax */
  push32((uint32_t)(EAX));
  /* 12221dc6 call 0x1221cf60 */
  push32(0x12221dcbu); f_1221cf60();
  /* 12221dcb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12221dce or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12221dd1 jmp 0x12221dd5 */
  goto L_12221dd5;
L_12221dd3:;
  /* 12221dd3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12221dd5:;
  /* 12221dd5 pop esi */
  ESI = (pop32());
  /* 12221dd6 mov esp, ebp */
  ESP = (EBP);
  /* 12221dd8 pop ebp */
  EBP = (pop32());
  /* 12221dd9 ret  */
  ESPCHK(0x12221d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10011de0 @ 0x12221de0 (146 bytes, 52 insns) */
void f_12221de0(void) {
  FTRACE(0x12221de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12221de0 push ebp */
  push32((uint32_t)(EBP));
  /* 12221de1 mov ebp, esp */
  EBP = (ESP);
  /* 12221de3 push ebx */
  push32((uint32_t)(EBX));
  /* 12221de4 push esi */
  push32((uint32_t)(ESI));
  /* 12221de5 push edi */
  push32((uint32_t)(EDI));
L_12221de6:;
  /* 12221de6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221dea jne 0x12221e0a */
  if (!C.zf) goto L_12221e0a;
  /* 12221dec push 0x1223c2a8 */
  push32((uint32_t)(0x1223c2a8u));
  /* 12221df1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12221df3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12221df5 push 0x1223c970 */
  push32((uint32_t)(0x1223c970u));
  /* 12221dfa push 2 */
  push32((uint32_t)(0x2u));
  /* 12221dfc call 0x122141f0 */
  push32(0x12221e01u); f_122141f0();
  /* 12221e01 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12221e04 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221e07 jne 0x12221e0a */
  if (!C.zf) goto L_12221e0a;
  /* 12221e09 int3  */
  x86_unimpl("int3 @ 0x12221e09");
L_12221e0a:;
  /* 12221e0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12221e0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12221e0e jne 0x12221de6 */
  if (!C.zf) goto L_12221de6;
  /* 12221e10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12221e13 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12221e16 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 12221e1c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12221e1e je 0x12221e6d */
  if (C.zf) goto L_12221e6d;
  /* 12221e20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12221e23 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12221e26 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12221e29 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12221e2b je 0x12221e6d */
  if (C.zf) goto L_12221e6d;
  /* 12221e2d push 2 */
  push32((uint32_t)(0x2u));
  /* 12221e2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12221e32 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12221e35 push eax */
  push32((uint32_t)(EAX));
  /* 12221e36 call 0x12215bc0 */
  push32(0x12221e3bu); f_12215bc0();
  /* 12221e3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12221e3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12221e41 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12221e44 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 12221e4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12221e4d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12221e50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12221e53 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12221e59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12221e5c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12221e63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12221e66 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_12221e6d:;
  /* 12221e6d pop edi */
  EDI = (pop32());
  /* 12221e6e pop esi */
  ESI = (pop32());
  /* 12221e6f pop ebx */
  EBX = (pop32());
  /* 12221e70 pop ebp */
  EBP = (pop32());
  /* 12221e71 ret  */
  ESPCHK(0x12221de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e80 @ 0x12221e80 (289 bytes, 97 insns) */
void f_12221e80(void) {
  FTRACE(0x12221e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12221e80 push ebp */
  push32((uint32_t)(EBP));
  /* 12221e81 mov ebp, esp */
  EBP = (ESP);
  /* 12221e83 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12221e86 push esi */
  push32((uint32_t)(ESI));
  /* 12221e87 mov eax, dword ptr [0x1223fc98] */
  EAX = (r32((uint32_t)(0x1223fc98)));
  /* 12221e8c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12221e8f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12221e96 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12221e9d jmp 0x12221ea8 */
  goto L_12221ea8;
L_12221e9f:;
  /* 12221e9f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12221ea2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12221ea5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12221ea8:;
  /* 12221ea8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221eac jae 0x12221ee1 */
  if (!C.cf) goto L_12221ee1;
  /* 12221eae mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12221eb1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12221eb4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12221eb7 push ecx */
  push32((uint32_t)(ECX));
  /* 12221eb8 call 0x12217f60 */
  push32(0x12221ebdu); f_12217f60();
  /* 12221ebd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12221ec0 mov esi, eax */
  ESI = (EAX);
  /* 12221ec2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12221ec5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12221ec8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 12221ecc push ecx */
  push32((uint32_t)(ECX));
  /* 12221ecd call 0x12217f60 */
  push32(0x12221ed2u); f_12217f60();
  /* 12221ed2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12221ed5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12221ed8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12221edc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12221edf jmp 0x12221e9f */
  goto L_12221e9f;
L_12221ee1:;
  /* 12221ee1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12221ee4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12221ee7 push eax */
  push32((uint32_t)(EAX));
  /* 12221ee8 call 0x12215110 */
  push32(0x12221eedu); f_12215110();
  /* 12221eed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12221ef0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12221ef3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221ef7 je 0x12221f99 */
  if (C.zf) goto L_12221f99;
  /* 12221efd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12221f00 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12221f03 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12221f0a jmp 0x12221f15 */
  goto L_12221f15;
L_12221f0c:;
  /* 12221f0c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12221f0f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12221f12 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12221f15:;
  /* 12221f15 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221f19 jae 0x12221f8a */
  if (!C.cf) goto L_12221f8a;
  /* 12221f1b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12221f1e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12221f21 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12221f24 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12221f27 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12221f2a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12221f2d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12221f30 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12221f33 push ecx */
  push32((uint32_t)(ECX));
  /* 12221f34 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12221f37 push edx */
  push32((uint32_t)(EDX));
  /* 12221f38 call 0x122180e0 */
  push32(0x12221f3du); f_122180e0();
  /* 12221f3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12221f40 push eax */
  push32((uint32_t)(EAX));
  /* 12221f41 call 0x12217f60 */
  push32(0x12221f46u); f_12217f60();
  /* 12221f46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12221f49 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12221f4c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12221f4e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12221f51 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12221f54 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12221f57 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12221f5a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12221f5d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12221f60 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12221f63 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12221f66 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 12221f6a push eax */
  push32((uint32_t)(EAX));
  /* 12221f6b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12221f6e push ecx */
  push32((uint32_t)(ECX));
  /* 12221f6f call 0x122180e0 */
  push32(0x12221f74u); f_122180e0();
  /* 12221f74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12221f77 push eax */
  push32((uint32_t)(EAX));
  /* 12221f78 call 0x12217f60 */
  push32(0x12221f7du); f_12217f60();
  /* 12221f7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12221f80 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12221f83 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12221f85 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12221f88 jmp 0x12221f0c */
  goto L_12221f0c;
L_12221f8a:;
  /* 12221f8a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12221f8d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12221f90 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12221f93 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12221f96 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12221f99:;
  /* 12221f99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12221f9c pop esi */
  ESI = (pop32());
  /* 12221f9d mov esp, ebp */
  ESP = (EBP);
  /* 12221f9f pop ebp */
  EBP = (pop32());
  /* 12221fa0 ret  */
  ESPCHK(0x12221e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10011fb0 @ 0x12221fb0 (291 bytes, 97 insns) */
void f_12221fb0(void) {
  FTRACE(0x12221fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12221fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12221fb1 mov ebp, esp */
  EBP = (ESP);
  /* 12221fb3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12221fb6 push esi */
  push32((uint32_t)(ESI));
  /* 12221fb7 mov eax, dword ptr [0x1223fc98] */
  EAX = (r32((uint32_t)(0x1223fc98)));
  /* 12221fbc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12221fbf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12221fc6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12221fcd jmp 0x12221fd8 */
  goto L_12221fd8;
L_12221fcf:;
  /* 12221fcf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12221fd2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12221fd5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12221fd8:;
  /* 12221fd8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12221fdc jae 0x12222012 */
  if (!C.cf) goto L_12222012;
  /* 12221fde mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12221fe1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12221fe4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12221fe8 push ecx */
  push32((uint32_t)(ECX));
  /* 12221fe9 call 0x12217f60 */
  push32(0x12221feeu); f_12217f60();
  /* 12221fee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12221ff1 mov esi, eax */
  ESI = (EAX);
  /* 12221ff3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12221ff6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12221ff9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 12221ffd push ecx */
  push32((uint32_t)(ECX));
  /* 12221ffe call 0x12217f60 */
  push32(0x12222003u); f_12217f60();
  /* 12222003 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12222006 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12222009 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1222200d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12222010 jmp 0x12221fcf */
  goto L_12221fcf;
L_12222012:;
  /* 12222012 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12222015 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12222018 push eax */
  push32((uint32_t)(EAX));
  /* 12222019 call 0x12215110 */
  push32(0x1222201eu); f_12215110();
  /* 1222201e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12222021 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12222024 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12222028 je 0x122220cb */
  if (C.zf) goto L_122220cb;
  /* 1222202e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12222031 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12222034 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1222203b jmp 0x12222046 */
  goto L_12222046;
L_1222203d:;
  /* 1222203d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12222040 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12222043 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12222046:;
  /* 12222046 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222204a jae 0x122220bc */
  if (!C.cf) goto L_122220bc;
  /* 1222204c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1222204f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12222052 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12222055 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12222058 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1222205b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1222205e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12222061 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12222065 push ecx */
  push32((uint32_t)(ECX));
  /* 12222066 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12222069 push edx */
  push32((uint32_t)(EDX));
  /* 1222206a call 0x122180e0 */
  push32(0x1222206fu); f_122180e0();
  /* 1222206f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12222072 push eax */
  push32((uint32_t)(EAX));
  /* 12222073 call 0x12217f60 */
  push32(0x12222078u); f_12217f60();
  /* 12222078 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222207b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1222207e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12222080 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12222083 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12222086 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12222089 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1222208c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1222208f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12222092 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12222095 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12222098 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1222209c push eax */
  push32((uint32_t)(EAX));
  /* 1222209d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122220a0 push ecx */
  push32((uint32_t)(ECX));
  /* 122220a1 call 0x122180e0 */
  push32(0x122220a6u); f_122180e0();
  /* 122220a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122220a9 push eax */
  push32((uint32_t)(EAX));
  /* 122220aa call 0x12217f60 */
  push32(0x122220afu); f_12217f60();
  /* 122220af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122220b2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122220b5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122220b7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 122220ba jmp 0x1222203d */
  goto L_1222203d;
L_122220bc:;
  /* 122220bc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 122220bf mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 122220c2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122220c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122220c8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_122220cb:;
  /* 122220cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122220ce pop esi */
  ESI = (pop32());
  /* 122220cf mov esp, ebp */
  ESP = (EBP);
  /* 122220d1 pop ebp */
  EBP = (pop32());
  /* 122220d2 ret  */
  ESPCHK(0x12221fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_100120e0 @ 0x122220e0 (878 bytes, 273 insns) */
void f_122220e0(void) {
  FTRACE(0x122220e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122220e0 push ebp */
  push32((uint32_t)(EBP));
  /* 122220e1 mov ebp, esp */
  EBP = (ESP);
  /* 122220e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122220e6 push esi */
  push32((uint32_t)(ESI));
  /* 122220e7 mov eax, dword ptr [0x1223fc98] */
  EAX = (r32((uint32_t)(0x1223fc98)));
  /* 122220ec mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122220ef mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 122220f6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 122220fd jmp 0x12222108 */
  goto L_12222108;
L_122220ff:;
  /* 122220ff mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12222102 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12222105 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12222108:;
  /* 12222108 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222210c jae 0x12222141 */
  if (!C.cf) goto L_12222141;
  /* 1222210e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12222111 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12222114 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12222117 push ecx */
  push32((uint32_t)(ECX));
  /* 12222118 call 0x12217f60 */
  push32(0x1222211du); f_12217f60();
  /* 1222211d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12222120 mov esi, eax */
  ESI = (EAX);
  /* 12222122 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12222125 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12222128 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1222212c push ecx */
  push32((uint32_t)(ECX));
  /* 1222212d call 0x12217f60 */
  push32(0x12222132u); f_12217f60();
  /* 12222132 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12222135 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12222138 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1222213c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1222213f jmp 0x122220ff */
  goto L_122220ff;
L_12222141:;
  /* 12222141 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12222148 jmp 0x12222153 */
  goto L_12222153;
L_1222214a:;
  /* 1222214a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1222214d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12222150 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12222153:;
  /* 12222153 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12222157 jae 0x1222218d */
  if (!C.cf) goto L_1222218d;
  /* 12222159 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1222215c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1222215f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12222163 push eax */
  push32((uint32_t)(EAX));
  /* 12222164 call 0x12217f60 */
  push32(0x12222169u); f_12217f60();
  /* 12222169 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222216c mov esi, eax */
  ESI = (EAX);
  /* 1222216e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12222171 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12222174 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12222178 push eax */
  push32((uint32_t)(EAX));
  /* 12222179 call 0x12217f60 */
  push32(0x1222217eu); f_12217f60();
  /* 1222217e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12222181 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12222184 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12222188 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1222218b jmp 0x1222214a */
  goto L_1222214a;
L_1222218d:;
  /* 1222218d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12222190 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12222196 push eax */
  push32((uint32_t)(EAX));
  /* 12222197 call 0x12217f60 */
  push32(0x1222219cu); f_12217f60();
  /* 1222219c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222219f mov esi, eax */
  ESI = (EAX);
  /* 122221a1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122221a4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 122221aa push edx */
  push32((uint32_t)(EDX));
  /* 122221ab call 0x12217f60 */
  push32(0x122221b0u); f_12217f60();
  /* 122221b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122221b3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122221b6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 122221ba mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122221bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122221c0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 122221c6 push edx */
  push32((uint32_t)(EDX));
  /* 122221c7 call 0x12217f60 */
  push32(0x122221ccu); f_12217f60();
  /* 122221cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122221cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122221d2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 122221d6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 122221d9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122221dc mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 122221e2 push ecx */
  push32((uint32_t)(ECX));
  /* 122221e3 call 0x12217f60 */
  push32(0x122221e8u); f_12217f60();
  /* 122221e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122221eb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122221ee lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 122221f2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122221f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122221f8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 122221fe push edx */
  push32((uint32_t)(EDX));
  /* 122221ff call 0x12217f60 */
  push32(0x12222204u); f_12217f60();
  /* 12222204 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12222207 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1222220a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1222220e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12222211 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12222214 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12222219 push eax */
  push32((uint32_t)(EAX));
  /* 1222221a call 0x12215110 */
  push32(0x1222221fu); f_12215110();
  /* 1222221f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12222222 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12222225 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12222229 je 0x12222446 */
  if (C.zf) goto L_12222446;
  /* 1222222f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12222232 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12222235 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12222238 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1222223e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12222241 push 0xac */
  push32((uint32_t)(0xacu));
  /* 12222246 mov eax, dword ptr [0x1223fc98] */
  EAX = (r32((uint32_t)(0x1223fc98)));
  /* 1222224b push eax */
  push32((uint32_t)(EAX));
  /* 1222224c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1222224f push ecx */
  push32((uint32_t)(ECX));
  /* 12222250 call 0x1221ba10 */
  push32(0x12222255u); f_1221ba10();
  /* 12222255 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12222258 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1222225f jmp 0x1222226a */
  goto L_1222226a;
L_12222261:;
  /* 12222261 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12222264 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12222267 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1222226a:;
  /* 1222226a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1222226e jae 0x122222de */
  if (!C.cf) goto L_122222de;
  /* 12222270 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12222273 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12222276 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12222279 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1222227c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1222227f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12222282 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12222285 push edx */
  push32((uint32_t)(EDX));
  /* 12222286 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12222289 push eax */
  push32((uint32_t)(EAX));
  /* 1222228a call 0x122180e0 */
  push32(0x1222228fu); f_122180e0();
  /* 1222228f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12222292 push eax */
  push32((uint32_t)(EAX));
  /* 12222293 call 0x12217f60 */
  push32(0x12222298u); f_12217f60();
  /* 12222298 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222229b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1222229e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 122222a2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 122222a5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122222a8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122222ab mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122222ae mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 122222b2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122222b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122222b8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 122222bc push edx */
  push32((uint32_t)(EDX));
  /* 122222bd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 122222c0 push eax */
  push32((uint32_t)(EAX));
  /* 122222c1 call 0x122180e0 */
  push32(0x122222c6u); f_122180e0();
  /* 122222c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122222c9 push eax */
  push32((uint32_t)(EAX));
  /* 122222ca call 0x12217f60 */
  push32(0x122222cfu); f_12217f60();
  /* 122222cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122222d2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122222d5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 122222d9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 122222dc jmp 0x12222261 */
  goto L_12222261;
L_122222de:;
  /* 122222de mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 122222e5 jmp 0x122222f0 */
  goto L_122222f0;
L_122222e7:;
  /* 122222e7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122222ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122222ed mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_122222f0:;
  /* 122222f0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122222f4 jae 0x12222366 */
  if (!C.cf) goto L_12222366;
  /* 122222f6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122222f9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 122222fc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 122222ff mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 12222303 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12222306 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12222309 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1222230d push eax */
  push32((uint32_t)(EAX));
  /* 1222230e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12222311 push ecx */
  push32((uint32_t)(ECX));
  /* 12222312 call 0x122180e0 */
  push32(0x12222317u); f_122180e0();
  /* 12222317 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222231a push eax */
  push32((uint32_t)(EAX));
  /* 1222231b call 0x12217f60 */
  push32(0x12222320u); f_12217f60();
  /* 12222320 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12222323 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12222326 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1222232a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1222232d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12222330 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12222333 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12222336 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 1222233a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1222233d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12222340 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12222344 push eax */
  push32((uint32_t)(EAX));
  /* 12222345 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12222348 push ecx */
  push32((uint32_t)(ECX));
  /* 12222349 call 0x122180e0 */
  push32(0x1222234eu); f_122180e0();
  /* 1222234e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12222351 push eax */
  push32((uint32_t)(EAX));
  /* 12222352 call 0x12217f60 */
  push32(0x12222357u); f_12217f60();
  /* 12222357 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222235a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1222235d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12222361 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12222364 jmp 0x122222e7 */
  goto L_122222e7;
L_12222366:;
  /* 12222366 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12222369 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1222236c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 12222372 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12222375 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1222237b push ecx */
  push32((uint32_t)(ECX));
  /* 1222237c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1222237f push edx */
  push32((uint32_t)(EDX));
  /* 12222380 call 0x122180e0 */
  push32(0x12222385u); f_122180e0();
  /* 12222385 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12222388 push eax */
  push32((uint32_t)(EAX));
  /* 12222389 call 0x12217f60 */
  push32(0x1222238eu); f_12217f60();
  /* 1222238e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12222391 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12222394 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12222398 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1222239b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1222239e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122223a1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 122223a7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122223aa mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 122223b0 push eax */
  push32((uint32_t)(EAX));
  /* 122223b1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122223b4 push ecx */
  push32((uint32_t)(ECX));
  /* 122223b5 call 0x122180e0 */
  push32(0x122223bau); f_122180e0();
  /* 122223ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122223bd push eax */
  push32((uint32_t)(EAX));
  /* 122223be call 0x12217f60 */
  push32(0x122223c3u); f_12217f60();
  /* 122223c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122223c6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122223c9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 122223cd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 122223d0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122223d3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122223d6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 122223dc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122223df mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 122223e5 push ecx */
  push32((uint32_t)(ECX));
  /* 122223e6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122223e9 push edx */
  push32((uint32_t)(EDX));
  /* 122223ea call 0x122180e0 */
  push32(0x122223efu); f_122180e0();
  /* 122223ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122223f2 push eax */
  push32((uint32_t)(EAX));
  /* 122223f3 call 0x12217f60 */
  push32(0x122223f8u); f_12217f60();
  /* 122223f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122223fb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122223fe lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12222402 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12222405 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12222408 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1222240b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 12222411 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12222414 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 1222241a push eax */
  push32((uint32_t)(EAX));
  /* 1222241b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1222241e push ecx */
  push32((uint32_t)(ECX));
  /* 1222241f call 0x122180e0 */
  push32(0x12222424u); f_122180e0();
  /* 12222424 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12222427 push eax */
  push32((uint32_t)(EAX));
  /* 12222428 call 0x12217f60 */
  push32(0x1222242du); f_12217f60();
  /* 1222242d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12222430 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12222433 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12222437 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1222243a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1222243d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12222440 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_12222446:;
  /* 12222446 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12222449 pop esi */
  ESI = (pop32());
  /* 1222244a mov esp, ebp */
  ESP = (EBP);
  /* 1222244c pop ebp */
  EBP = (pop32());
  /* 1222244d ret  */
  ESPCHK(0x122220e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012450 @ 0x12222450 (31 bytes, 15 insns) */
void f_12222450(void) {
  FTRACE(0x12222450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12222450 push ebp */
  push32((uint32_t)(EBP));
  /* 12222451 mov ebp, esp */
  EBP = (ESP);
  /* 12222453 push 0 */
  push32((uint32_t)(0x0u));
  /* 12222455 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12222458 push eax */
  push32((uint32_t)(EAX));
  /* 12222459 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1222245c push ecx */
  push32((uint32_t)(ECX));
  /* 1222245d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12222460 push edx */
  push32((uint32_t)(EDX));
  /* 12222461 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12222464 push eax */
  push32((uint32_t)(EAX));
  /* 12222465 call 0x12222470 */
  push32(0x1222246au); f_12222470();
  /* 1222246a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1222246d pop ebp */
  EBP = (pop32());
  /* 1222246e ret  */
  ESPCHK(0x12222450u, _esp0);
  ESP += 4; return;
}

