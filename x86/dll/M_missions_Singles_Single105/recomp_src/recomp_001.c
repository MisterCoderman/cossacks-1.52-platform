#include "recomp.h"

/* FUN_100093a0 @ 0x110193a0 (10 bytes, 5 insns) */
void f_110193a0(void) {
  FTRACE(0x110193a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110193a0 push ebp */
  push32((uint32_t)(EBP));
  /* 110193a1 mov ebp, esp */
  EBP = (ESP);
  /* 110193a3 mov eax, dword ptr [0x1103ec94] */
  EAX = (r32((uint32_t)(0x1103ec94)));
  /* 110193a8 pop ebp */
  EBP = (pop32());
  /* 110193a9 ret  */
  ESPCHK(0x110193a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100093b0 @ 0x110193b0 (31 bytes, 11 insns) */
void f_110193b0(void) {
  FTRACE(0x110193b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110193b0 push ebp */
  push32((uint32_t)(EBP));
  /* 110193b1 mov ebp, esp */
  EBP = (ESP);
  /* 110193b3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110193ba jbe 0x110193c0 */
  if ((C.cf||C.zf)) goto L_110193c0;
  /* 110193bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110193be jmp 0x110193cd */
  goto L_110193cd;
L_110193c0:;
  /* 110193c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110193c3 mov dword ptr [0x1103ec94], eax */
  w32((uint32_t)(0x1103ec94), (EAX));
  /* 110193c8 mov eax, 1 */
  EAX = (0x1u);
L_110193cd:;
  /* 110193cd pop ebp */
  EBP = (pop32());
  /* 110193ce ret  */
  ESPCHK(0x110193b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100093d0 @ 0x110193d0 (89 bytes, 20 insns) */
void f_110193d0(void) {
  FTRACE(0x110193d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110193d0 push ebp */
  push32((uint32_t)(EBP));
  /* 110193d1 mov ebp, esp */
  EBP = (ESP);
  /* 110193d3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 110193d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 110193da mov eax, dword ptr [0x11041f6c] */
  EAX = (r32((uint32_t)(0x11041f6c)));
  /* 110193df push eax */
  push32((uint32_t)(EAX));
  /* 110193e0 call dword ptr [0x11043328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043328))), 0x110193e6u);
  /* 110193e6 mov dword ptr [0x11041f68], eax */
  w32((uint32_t)(0x11041f68), (EAX));
  /* 110193eb cmp dword ptr [0x11041f68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11041f68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110193f2 jne 0x110193f8 */
  if (!C.zf) goto L_110193f8;
  /* 110193f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110193f6 jmp 0x11019427 */
  goto L_11019427;
L_110193f8:;
  /* 110193f8 mov ecx, dword ptr [0x11041f68] */
  ECX = (r32((uint32_t)(0x11041f68)));
  /* 110193fe mov dword ptr [0x11041f5c], ecx */
  w32((uint32_t)(0x11041f5c), (ECX));
  /* 11019404 mov dword ptr [0x11041f60], 0 */
  w32((uint32_t)(0x11041f60), (0x0u));
  /* 1101940e mov dword ptr [0x11041f64], 0 */
  w32((uint32_t)(0x11041f64), (0x0u));
  /* 11019418 mov dword ptr [0x11041f48], 0x10 */
  w32((uint32_t)(0x11041f48), (0x10u));
  /* 11019422 mov eax, 1 */
  EAX = (0x1u);
L_11019427:;
  /* 11019427 pop ebp */
  EBP = (pop32());
  /* 11019428 ret  */
  ESPCHK(0x110193d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009430 @ 0x11019430 (85 bytes, 29 insns) */
void f_11019430(void) {
  FTRACE(0x11019430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11019430 push ebp */
  push32((uint32_t)(EBP));
  /* 11019431 mov ebp, esp */
  EBP = (ESP);
  /* 11019433 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11019436 mov eax, dword ptr [0x11041f64] */
  EAX = (r32((uint32_t)(0x11041f64)));
  /* 1101943b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101943e mov ecx, dword ptr [0x11041f68] */
  ECX = (r32((uint32_t)(0x11041f68)));
  /* 11019444 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11019446 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11019449 mov edx, dword ptr [0x11041f68] */
  EDX = (r32((uint32_t)(0x11041f68)));
  /* 1101944f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11019452:;
  /* 11019452 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11019455 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11019458 jae 0x1101947f */
  if (!C.cf) goto L_1101947f;
  /* 1101945a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101945d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11019460 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11019463 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11019466 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101946d jae 0x11019474 */
  if (!C.cf) goto L_11019474;
  /* 1101946f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11019472 jmp 0x11019481 */
  goto L_11019481;
L_11019474:;
  /* 11019474 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11019477 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101947a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1101947d jmp 0x11019452 */
  goto L_11019452;
L_1101947f:;
  /* 1101947f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11019481:;
  /* 11019481 mov esp, ebp */
  ESP = (EBP);
  /* 11019483 pop ebp */
  EBP = (pop32());
  /* 11019484 ret  */
  ESPCHK(0x11019430u, _esp0);
  ESP += 4; return;
}

/* FUN_10009490 @ 0x11019490 (95 bytes, 33 insns) */
void f_11019490(void) {
  FTRACE(0x11019490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11019490 push ebp */
  push32((uint32_t)(EBP));
  /* 11019491 mov ebp, esp */
  EBP = (ESP);
  /* 11019493 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11019496 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11019499 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101949c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101949f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 110194a2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110194a5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 110194a8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 110194ab mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 110194b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110194b3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 110194b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110194b8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 110194bb and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 110194bd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110194bf jne 0x110194e1 */
  if (!C.zf) goto L_110194e1;
  /* 110194c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110194c4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 110194c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110194c9 jne 0x110194e1 */
  if (!C.zf) goto L_110194e1;
  /* 110194cb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110194ce and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 110194d4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110194d6 je 0x110194e1 */
  if (C.zf) goto L_110194e1;
  /* 110194d8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 110194df jmp 0x110194e8 */
  goto L_110194e8;
L_110194e1:;
  /* 110194e1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_110194e8:;
  /* 110194e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110194eb mov esp, ebp */
  ESP = (EBP);
  /* 110194ed pop ebp */
  EBP = (pop32());
  /* 110194ee ret  */
  ESPCHK(0x11019490u, _esp0);
  ESP += 4; return;
}

/* FUN_100094f0 @ 0x110194f0 (1485 bytes, 453 insns) */
void f_110194f0(void) {
  FTRACE(0x110194f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110194f0 push ebp */
  push32((uint32_t)(EBP));
  /* 110194f1 mov ebp, esp */
  EBP = (ESP);
  /* 110194f3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110194f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110194f9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 110194fc mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 110194ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11019502 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11019505 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11019508 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1101950b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101950e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11019511 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11019514 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11019517 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101951d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11019520 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 11019527 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1101952a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101952d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11019530 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11019533 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11019536 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11019538 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101953b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1101953e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11019541 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11019544 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 11019547 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1101954a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1101954c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1101954f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11019552 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11019555 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11019558 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1101955b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1101955e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11019560 jne 0x11019688 */
  if (!C.zf) goto L_11019688;
  /* 11019566 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11019569 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1101956c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101956f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11019572 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11019576 jbe 0x1101957f */
  if ((C.cf||C.zf)) goto L_1101957f;
  /* 11019578 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1101957f:;
  /* 1101957f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11019582 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11019585 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11019588 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101958b jne 0x11019661 */
  if (!C.zf) goto L_11019661;
  /* 11019591 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11019595 jae 0x110195f6 */
  if (!C.cf) goto L_110195f6;
  /* 11019597 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1101959c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101959f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 110195a1 not eax */
  EAX = (~(EAX));
  /* 110195a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110195a6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 110195a9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 110195ad and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 110195af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110195b2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 110195b5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 110195b9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 110195bc add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110195bf mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 110195c2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 110195c5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 110195c8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110195cb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 110195ce mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 110195d1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110195d4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 110195d8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110195da jne 0x110195f4 */
  if (!C.zf) goto L_110195f4;
  /* 110195dc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 110195e1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 110195e4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 110195e6 not eax */
  EAX = (~(EAX));
  /* 110195e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110195eb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 110195ed and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 110195ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110195f2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_110195f4:;
  /* 110195f4 jmp 0x11019661 */
  goto L_11019661;
L_110195f6:;
  /* 110195f6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 110195f9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110195fc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11019601 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11019603 not edx */
  EDX = (~(EDX));
  /* 11019605 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11019608 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1101960b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11019612 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11019614 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11019617 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1101961a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 11019621 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11019624 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11019627 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1101962a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1101962d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11019630 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11019633 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11019636 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11019639 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101963c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11019640 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11019642 jne 0x11019661 */
  if (!C.zf) goto L_11019661;
  /* 11019644 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11019647 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101964a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1101964f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11019651 not edx */
  EDX = (~(EDX));
  /* 11019653 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11019656 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11019659 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1101965b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101965e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11019661:;
  /* 11019661 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11019664 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11019667 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1101966a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1101966d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11019670 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11019673 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11019676 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11019679 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1101967c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1101967f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11019682 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11019685 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_11019688:;
  /* 11019688 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101968b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1101968e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11019691 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11019694 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11019698 jbe 0x110196a1 */
  if ((C.cf||C.zf)) goto L_110196a1;
  /* 1101969a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_110196a1:;
  /* 110196a1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110196a4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 110196a7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110196a9 jne 0x11019805 */
  if (!C.zf) goto L_11019805;
  /* 110196af mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 110196b2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110196b5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 110196b8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110196bb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 110196be sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110196c1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 110196c4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110196c8 jbe 0x110196d1 */
  if ((C.cf||C.zf)) goto L_110196d1;
  /* 110196ca mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_110196d1:;
  /* 110196d1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 110196d4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110196d7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 110196da mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 110196dd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 110196e0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110196e3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 110196e6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110196ea jbe 0x110196f3 */
  if ((C.cf||C.zf)) goto L_110196f3;
  /* 110196ec mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_110196f3:;
  /* 110196f3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 110196f6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110196f9 je 0x110197ff */
  if (C.zf) goto L_110197ff;
  /* 110196ff mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11019702 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11019705 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11019708 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101970b jne 0x110197e1 */
  if (!C.zf) goto L_110197e1;
  /* 11019711 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11019715 jae 0x11019776 */
  if (!C.cf) goto L_11019776;
  /* 11019717 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1101971c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1101971f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11019721 not edx */
  EDX = (~(EDX));
  /* 11019723 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11019726 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11019729 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1101972d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1101972f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11019732 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11019735 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11019739 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1101973c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101973f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11019742 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11019745 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11019748 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101974b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1101974e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11019751 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11019754 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11019758 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1101975a jne 0x11019774 */
  if (!C.zf) goto L_11019774;
  /* 1101975c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11019761 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11019764 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11019766 not edx */
  EDX = (~(EDX));
  /* 11019768 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101976b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1101976d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1101976f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11019772 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11019774:;
  /* 11019774 jmp 0x110197e1 */
  goto L_110197e1;
L_11019776:;
  /* 11019776 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11019779 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101977c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11019781 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11019783 not eax */
  EAX = (~(EAX));
  /* 11019785 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11019788 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1101978b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11019792 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11019794 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11019797 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1101979a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 110197a1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 110197a4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110197a7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 110197aa sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 110197ad mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 110197b0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110197b3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 110197b6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 110197b9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110197bc movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 110197c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110197c2 jne 0x110197e1 */
  if (!C.zf) goto L_110197e1;
  /* 110197c4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 110197c7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110197ca mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 110197cf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 110197d1 not eax */
  EAX = (~(EAX));
  /* 110197d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110197d6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 110197d9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 110197db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110197de mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_110197e1:;
  /* 110197e1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 110197e4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 110197e7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 110197ea mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 110197ed mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 110197f0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 110197f3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 110197f6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 110197f9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 110197fc mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_110197ff:;
  /* 110197ff mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11019802 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_11019805:;
  /* 11019805 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11019808 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1101980b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1101980d jne 0x1101981b */
  if (!C.zf) goto L_1101981b;
  /* 1101980f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11019812 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11019815 je 0x1101992b */
  if (C.zf) goto L_1101992b;
L_1101981b:;
  /* 1101981b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1101981e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11019821 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 11019824 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11019827 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1101982a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1101982d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11019830 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11019833 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11019836 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11019839 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1101983c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1101983f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11019842 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11019845 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11019848 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1101984b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1101984e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11019851 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11019854 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11019857 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1101985a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101985d jne 0x1101992b */
  if (!C.zf) goto L_1101992b;
  /* 11019863 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11019867 jae 0x110198c4 */
  if (!C.cf) goto L_110198c4;
  /* 11019869 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1101986c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101986f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11019873 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11019876 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11019879 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1101987c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1101987f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11019882 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11019885 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11019888 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101988a jne 0x110198a2 */
  if (!C.zf) goto L_110198a2;
  /* 1101988c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11019891 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11019894 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11019896 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11019899 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1101989b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1101989d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110198a0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_110198a2:;
  /* 110198a2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 110198a7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 110198aa shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 110198ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110198af mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 110198b2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 110198b6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 110198b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110198bb mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 110198be mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 110198c2 jmp 0x1101992b */
  goto L_1101992b;
L_110198c4:;
  /* 110198c4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 110198c7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110198ca movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 110198ce mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 110198d1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110198d4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 110198d7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 110198da mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 110198dd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110198e0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 110198e3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110198e5 jne 0x11019902 */
  if (!C.zf) goto L_11019902;
  /* 110198e7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 110198ea sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110198ed mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 110198f2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 110198f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110198f7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 110198fa or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 110198fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110198ff mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11019902:;
  /* 11019902 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11019905 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11019908 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1101990d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1101990f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11019912 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11019915 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1101991c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101991e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11019921 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11019924 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1101992b:;
  /* 1101992b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1101992e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11019931 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11019933 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11019936 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11019939 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101993c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1101993f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11019942 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11019944 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11019947 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101994a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1101994c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101994f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11019952 jne 0x11019ab9 */
  if (!C.zf) goto L_11019ab9;
  /* 11019958 cmp dword ptr [0x11041f60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11041f60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101995f je 0x11019aa8 */
  if (C.zf) goto L_11019aa8;
  /* 11019965 mov eax, dword ptr [0x11041f58] */
  EAX = (r32((uint32_t)(0x11041f58)));
  /* 1101996a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1101996d mov ecx, dword ptr [0x11041f60] */
  ECX = (r32((uint32_t)(0x11041f60)));
  /* 11019973 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11019976 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11019978 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1101997b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11019980 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11019985 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11019988 push eax */
  push32((uint32_t)(EAX));
  /* 11019989 call dword ptr [0x11043344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043344))), 0x1101998fu);
  /* 1101998f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11019994 mov ecx, dword ptr [0x11041f58] */
  ECX = (r32((uint32_t)(0x11041f58)));
  /* 1101999a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1101999c mov eax, dword ptr [0x11041f60] */
  EAX = (r32((uint32_t)(0x11041f60)));
  /* 110199a1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 110199a4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 110199a6 mov edx, dword ptr [0x11041f60] */
  EDX = (r32((uint32_t)(0x11041f60)));
  /* 110199ac mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 110199af mov eax, dword ptr [0x11041f60] */
  EAX = (r32((uint32_t)(0x11041f60)));
  /* 110199b4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 110199b7 mov edx, dword ptr [0x11041f58] */
  EDX = (r32((uint32_t)(0x11041f58)));
  /* 110199bd mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 110199c8 mov eax, dword ptr [0x11041f60] */
  EAX = (r32((uint32_t)(0x11041f60)));
  /* 110199cd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 110199d0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 110199d3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 110199d6 mov eax, dword ptr [0x11041f60] */
  EAX = (r32((uint32_t)(0x11041f60)));
  /* 110199db mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 110199de mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 110199e1 mov edx, dword ptr [0x11041f60] */
  EDX = (r32((uint32_t)(0x11041f60)));
  /* 110199e7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 110199ea movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 110199ee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110199f0 jne 0x11019a06 */
  if (!C.zf) goto L_11019a06;
  /* 110199f2 mov edx, dword ptr [0x11041f60] */
  EDX = (r32((uint32_t)(0x11041f60)));
  /* 110199f8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 110199fb and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 110199fd mov ecx, dword ptr [0x11041f60] */
  ECX = (r32((uint32_t)(0x11041f60)));
  /* 11019a03 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11019a06:;
  /* 11019a06 mov edx, dword ptr [0x11041f60] */
  EDX = (r32((uint32_t)(0x11041f60)));
  /* 11019a0c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11019a10 jne 0x11019aa8 */
  if (!C.zf) goto L_11019aa8;
  /* 11019a16 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11019a1b push 0 */
  push32((uint32_t)(0x0u));
  /* 11019a1d mov eax, dword ptr [0x11041f60] */
  EAX = (r32((uint32_t)(0x11041f60)));
  /* 11019a22 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11019a25 push ecx */
  push32((uint32_t)(ECX));
  /* 11019a26 call dword ptr [0x11043344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043344))), 0x11019a2cu);
  /* 11019a2c mov edx, dword ptr [0x11041f60] */
  EDX = (r32((uint32_t)(0x11041f60)));
  /* 11019a32 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11019a35 push eax */
  push32((uint32_t)(EAX));
  /* 11019a36 push 0 */
  push32((uint32_t)(0x0u));
  /* 11019a38 mov ecx, dword ptr [0x11041f6c] */
  ECX = (r32((uint32_t)(0x11041f6c)));
  /* 11019a3e push ecx */
  push32((uint32_t)(ECX));
  /* 11019a3f call dword ptr [0x11043354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043354))), 0x11019a45u);
  /* 11019a45 mov edx, dword ptr [0x11041f64] */
  EDX = (r32((uint32_t)(0x11041f64)));
  /* 11019a4b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11019a4e mov eax, dword ptr [0x11041f68] */
  EAX = (r32((uint32_t)(0x11041f68)));
  /* 11019a53 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11019a55 mov ecx, dword ptr [0x11041f60] */
  ECX = (r32((uint32_t)(0x11041f60)));
  /* 11019a5b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11019a5e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11019a60 push eax */
  push32((uint32_t)(EAX));
  /* 11019a61 mov edx, dword ptr [0x11041f60] */
  EDX = (r32((uint32_t)(0x11041f60)));
  /* 11019a67 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11019a6a push edx */
  push32((uint32_t)(EDX));
  /* 11019a6b mov eax, dword ptr [0x11041f60] */
  EAX = (r32((uint32_t)(0x11041f60)));
  /* 11019a70 push eax */
  push32((uint32_t)(EAX));
  /* 11019a71 call 0x1101d020 */
  push32(0x11019a76u); f_1101d020();
  /* 11019a76 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11019a79 mov ecx, dword ptr [0x11041f64] */
  ECX = (r32((uint32_t)(0x11041f64)));
  /* 11019a7f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11019a82 mov dword ptr [0x11041f64], ecx */
  w32((uint32_t)(0x11041f64), (ECX));
  /* 11019a88 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11019a8b cmp edx, dword ptr [0x11041f60] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11041f60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11019a91 jbe 0x11019a9c */
  if ((C.cf||C.zf)) goto L_11019a9c;
  /* 11019a93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11019a96 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11019a99 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11019a9c:;
  /* 11019a9c mov ecx, dword ptr [0x11041f68] */
  ECX = (r32((uint32_t)(0x11041f68)));
  /* 11019aa2 mov dword ptr [0x11041f5c], ecx */
  w32((uint32_t)(0x11041f5c), (ECX));
L_11019aa8:;
  /* 11019aa8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11019aab mov dword ptr [0x11041f60], edx */
  w32((uint32_t)(0x11041f60), (EDX));
  /* 11019ab1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11019ab4 mov dword ptr [0x11041f58], eax */
  w32((uint32_t)(0x11041f58), (EAX));
L_11019ab9:;
  /* 11019ab9 mov esp, ebp */
  ESP = (EBP);
  /* 11019abb pop ebp */
  EBP = (pop32());
  /* 11019abc ret  */
  ESPCHK(0x110194f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ac0 @ 0x11019ac0 (1334 bytes, 427 insns) */
void f_11019ac0(void) {
  FTRACE(0x11019ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11019ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 11019ac1 mov ebp, esp */
  EBP = (ESP);
  /* 11019ac3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11019ac6 push esi */
  push32((uint32_t)(ESI));
  /* 11019ac7 mov eax, dword ptr [0x11041f64] */
  EAX = (r32((uint32_t)(0x11041f64)));
  /* 11019acc imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11019acf mov ecx, dword ptr [0x11041f68] */
  ECX = (r32((uint32_t)(0x11041f68)));
  /* 11019ad5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11019ad7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11019ada mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11019add add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11019ae0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11019ae3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11019ae6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11019ae9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11019aec sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11019aef mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11019af2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11019af6 jge 0x11019b0c */
  if ((C.sf==C.of)) goto L_11019b0c;
  /* 11019af8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11019afb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11019afe shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11019b00 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11019b03 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 11019b0a jmp 0x11019b21 */
  goto L_11019b21;
L_11019b0c:;
  /* 11019b0c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11019b13 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11019b16 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11019b19 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11019b1c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11019b1e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_11019b21:;
  /* 11019b21 mov ecx, dword ptr [0x11041f5c] */
  ECX = (r32((uint32_t)(0x11041f5c)));
  /* 11019b27 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11019b2a:;
  /* 11019b2a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11019b2d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11019b30 jae 0x11019b56 */
  if (!C.cf) goto L_11019b56;
  /* 11019b32 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11019b35 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11019b38 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 11019b3a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11019b3d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11019b40 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 11019b43 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11019b45 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11019b47 je 0x11019b4b */
  if (C.zf) goto L_11019b4b;
  /* 11019b49 jmp 0x11019b56 */
  goto L_11019b56;
L_11019b4b:;
  /* 11019b4b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11019b4e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11019b51 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11019b54 jmp 0x11019b2a */
  goto L_11019b2a;
L_11019b56:;
  /* 11019b56 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11019b59 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11019b5c jne 0x11019c3d */
  if (!C.zf) goto L_11019c3d;
  /* 11019b62 mov eax, dword ptr [0x11041f68] */
  EAX = (r32((uint32_t)(0x11041f68)));
  /* 11019b67 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11019b6a:;
  /* 11019b6a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11019b6d cmp ecx, dword ptr [0x11041f5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11041f5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11019b73 jae 0x11019b99 */
  if (!C.cf) goto L_11019b99;
  /* 11019b75 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11019b78 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11019b7b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 11019b7d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11019b80 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11019b83 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11019b86 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11019b88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11019b8a je 0x11019b8e */
  if (C.zf) goto L_11019b8e;
  /* 11019b8c jmp 0x11019b99 */
  goto L_11019b99;
L_11019b8e:;
  /* 11019b8e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11019b91 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11019b94 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11019b97 jmp 0x11019b6a */
  goto L_11019b6a;
L_11019b99:;
  /* 11019b99 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11019b9c cmp ecx, dword ptr [0x11041f5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11041f5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11019ba2 jne 0x11019c3d */
  if (!C.zf) goto L_11019c3d;
L_11019ba8:;
  /* 11019ba8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11019bab cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11019bae jae 0x11019bc6 */
  if (!C.cf) goto L_11019bc6;
  /* 11019bb0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11019bb3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11019bb7 je 0x11019bbb */
  if (C.zf) goto L_11019bbb;
  /* 11019bb9 jmp 0x11019bc6 */
  goto L_11019bc6;
L_11019bbb:;
  /* 11019bbb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11019bbe add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11019bc1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11019bc4 jmp 0x11019ba8 */
  goto L_11019ba8;
L_11019bc6:;
  /* 11019bc6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11019bc9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11019bcc jne 0x11019c17 */
  if (!C.zf) goto L_11019c17;
  /* 11019bce mov eax, dword ptr [0x11041f68] */
  EAX = (r32((uint32_t)(0x11041f68)));
  /* 11019bd3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11019bd6:;
  /* 11019bd6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11019bd9 cmp ecx, dword ptr [0x11041f5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11041f5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11019bdf jae 0x11019bf7 */
  if (!C.cf) goto L_11019bf7;
  /* 11019be1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11019be4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11019be8 je 0x11019bec */
  if (C.zf) goto L_11019bec;
  /* 11019bea jmp 0x11019bf7 */
  goto L_11019bf7;
L_11019bec:;
  /* 11019bec mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11019bef add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11019bf2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11019bf5 jmp 0x11019bd6 */
  goto L_11019bd6;
L_11019bf7:;
  /* 11019bf7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11019bfa cmp ecx, dword ptr [0x11041f5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11041f5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11019c00 jne 0x11019c17 */
  if (!C.zf) goto L_11019c17;
  /* 11019c02 call 0x1101a000 */
  push32(0x11019c07u); f_1101a000();
  /* 11019c07 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11019c0a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11019c0e jne 0x11019c17 */
  if (!C.zf) goto L_11019c17;
  /* 11019c10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11019c12 jmp 0x11019ff1 */
  goto L_11019ff1;
L_11019c17:;
  /* 11019c17 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11019c1a push edx */
  push32((uint32_t)(EDX));
  /* 11019c1b call 0x1101a110 */
  push32(0x11019c20u); f_1101a110();
  /* 11019c20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11019c23 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11019c26 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11019c29 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11019c2b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11019c2e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11019c31 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11019c34 jne 0x11019c3d */
  if (!C.zf) goto L_11019c3d;
  /* 11019c36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11019c38 jmp 0x11019ff1 */
  goto L_11019ff1;
L_11019c3d:;
  /* 11019c3d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11019c40 mov dword ptr [0x11041f5c], edx */
  w32((uint32_t)(0x11041f5c), (EDX));
  /* 11019c46 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11019c49 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11019c4c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 11019c4f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11019c52 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11019c54 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11019c57 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11019c5b je 0x11019c80 */
  if (C.zf) goto L_11019c80;
  /* 11019c5d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11019c60 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11019c63 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11019c66 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 11019c6a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11019c6d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11019c70 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 11019c73 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 11019c7a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11019c7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11019c7e jne 0x11019cb5 */
  if (!C.zf) goto L_11019cb5;
L_11019c80:;
  /* 11019c80 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_11019c87:;
  /* 11019c87 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11019c8a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11019c8d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11019c90 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 11019c94 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11019c97 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11019c9a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 11019c9d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 11019ca4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11019ca6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11019ca8 jne 0x11019cb5 */
  if (!C.zf) goto L_11019cb5;
  /* 11019caa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11019cad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11019cb0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11019cb3 jmp 0x11019c87 */
  goto L_11019c87;
L_11019cb5:;
  /* 11019cb5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11019cb8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11019cbe mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11019cc1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11019cc8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11019ccb mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11019cd2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11019cd5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11019cd8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11019cdb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 11019cdf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11019ce2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11019ce6 jne 0x11019d02 */
  if (!C.zf) goto L_11019d02;
  /* 11019ce8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 11019cef mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11019cf2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11019cf5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11019cf8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 11019cff mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_11019d02:;
  /* 11019d02 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11019d06 jl 0x11019d1b */
  if ((C.sf!=C.of)) goto L_11019d1b;
  /* 11019d08 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11019d0b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11019d0d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11019d10 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11019d13 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11019d16 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11019d19 jmp 0x11019d02 */
  goto L_11019d02;
L_11019d1b:;
  /* 11019d1b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11019d1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11019d21 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 11019d25 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11019d28 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11019d2b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11019d2d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11019d30 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11019d33 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11019d36 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11019d39 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11019d3c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11019d3f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11019d43 jle 0x11019d4c */
  if ((C.zf||C.sf!=C.of)) goto L_11019d4c;
  /* 11019d45 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_11019d4c:;
  /* 11019d4c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11019d4f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11019d52 je 0x11019f70 */
  if (C.zf) goto L_11019f70;
  /* 11019d58 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11019d5b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11019d5e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11019d61 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11019d64 jne 0x11019e3a */
  if (!C.zf) goto L_11019e3a;
  /* 11019d6a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11019d6e jge 0x11019dcf */
  if ((C.sf==C.of)) goto L_11019dcf;
  /* 11019d70 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11019d75 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11019d78 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11019d7a not eax */
  EAX = (~(EAX));
  /* 11019d7c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11019d7f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11019d82 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11019d86 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11019d88 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11019d8b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11019d8e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11019d92 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11019d95 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11019d98 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11019d9b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11019d9e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11019da1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11019da4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11019da7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11019daa add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11019dad movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11019db1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11019db3 jne 0x11019dcd */
  if (!C.zf) goto L_11019dcd;
  /* 11019db5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11019dba mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11019dbd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11019dbf not eax */
  EAX = (~(EAX));
  /* 11019dc1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11019dc4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11019dc6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11019dc8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11019dcb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11019dcd:;
  /* 11019dcd jmp 0x11019e3a */
  goto L_11019e3a;
L_11019dcf:;
  /* 11019dcf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11019dd2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11019dd5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11019dda shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11019ddc not edx */
  EDX = (~(EDX));
  /* 11019dde mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11019de1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11019de4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11019deb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11019ded mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11019df0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11019df3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 11019dfa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11019dfd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11019e00 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11019e03 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11019e06 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11019e09 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11019e0c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11019e0f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11019e12 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11019e15 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11019e19 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11019e1b jne 0x11019e3a */
  if (!C.zf) goto L_11019e3a;
  /* 11019e1d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11019e20 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11019e23 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11019e28 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11019e2a not edx */
  EDX = (~(EDX));
  /* 11019e2c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11019e2f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11019e32 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11019e34 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11019e37 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11019e3a:;
  /* 11019e3a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11019e3d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11019e40 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11019e43 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11019e46 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11019e49 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11019e4c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11019e4f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11019e52 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11019e55 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11019e58 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11019e5c je 0x11019f70 */
  if (C.zf) goto L_11019f70;
  /* 11019e62 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11019e65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11019e68 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 11019e6b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11019e6e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11019e71 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11019e74 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11019e77 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11019e7a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11019e7d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11019e80 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11019e83 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11019e86 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11019e89 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11019e8c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11019e8f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11019e92 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11019e95 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11019e98 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11019e9b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11019e9e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11019ea1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11019ea4 jne 0x11019f70 */
  if (!C.zf) goto L_11019f70;
  /* 11019eaa cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11019eae jge 0x11019f0a */
  if ((C.sf==C.of)) goto L_11019f0a;
  /* 11019eb0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11019eb3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11019eb6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11019eba mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11019ebd add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11019ec0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11019ec3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11019ec5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11019ec8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11019ecb mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11019ece test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11019ed0 jne 0x11019ee8 */
  if (!C.zf) goto L_11019ee8;
  /* 11019ed2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11019ed7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11019eda shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11019edc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11019edf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11019ee1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11019ee3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11019ee6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11019ee8:;
  /* 11019ee8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11019eed mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11019ef0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11019ef2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11019ef5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11019ef8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11019efc or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11019efe mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11019f01 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11019f04 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11019f08 jmp 0x11019f70 */
  goto L_11019f70;
L_11019f0a:;
  /* 11019f0a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11019f0d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11019f10 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11019f14 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11019f17 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11019f1a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11019f1d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11019f1f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11019f22 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11019f25 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11019f28 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11019f2a jne 0x11019f47 */
  if (!C.zf) goto L_11019f47;
  /* 11019f2c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11019f2f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11019f32 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11019f37 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11019f39 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11019f3c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11019f3f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11019f41 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11019f44 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11019f47:;
  /* 11019f47 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11019f4a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11019f4d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11019f52 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11019f54 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11019f57 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11019f5a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11019f61 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11019f63 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11019f66 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11019f69 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_11019f70:;
  /* 11019f70 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11019f74 je 0x11019f8a */
  if (C.zf) goto L_11019f8a;
  /* 11019f76 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11019f79 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11019f7c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11019f7e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11019f81 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11019f84 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11019f87 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_11019f8a:;
  /* 11019f8a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11019f8d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11019f90 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11019f93 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11019f96 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11019f99 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11019f9c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11019f9e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11019fa1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11019fa4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11019fa7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11019faa mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 11019fad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11019fb0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11019fb2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11019fb5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11019fb7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11019fba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11019fbd mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11019fbf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11019fc1 jne 0x11019fe3 */
  if (!C.zf) goto L_11019fe3;
  /* 11019fc3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11019fc6 cmp eax, dword ptr [0x11041f60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11041f60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11019fcc jne 0x11019fe3 */
  if (!C.zf) goto L_11019fe3;
  /* 11019fce mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11019fd1 cmp ecx, dword ptr [0x11041f58] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11041f58))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11019fd7 jne 0x11019fe3 */
  if (!C.zf) goto L_11019fe3;
  /* 11019fd9 mov dword ptr [0x11041f60], 0 */
  w32((uint32_t)(0x11041f60), (0x0u));
L_11019fe3:;
  /* 11019fe3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11019fe6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11019fe9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11019feb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11019fee add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11019ff1:;
  /* 11019ff1 pop esi */
  ESI = (pop32());
  /* 11019ff2 mov esp, ebp */
  ESP = (EBP);
  /* 11019ff4 pop ebp */
  EBP = (pop32());
  /* 11019ff5 ret  */
  ESPCHK(0x11019ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a000 @ 0x1101a000 (271 bytes, 78 insns) */
void f_1101a000(void) {
  FTRACE(0x1101a000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101a000 push ebp */
  push32((uint32_t)(EBP));
  /* 1101a001 mov ebp, esp */
  EBP = (ESP);
  /* 1101a003 push ecx */
  push32((uint32_t)(ECX));
  /* 1101a004 mov eax, dword ptr [0x11041f64] */
  EAX = (r32((uint32_t)(0x11041f64)));
  /* 1101a009 cmp eax, dword ptr [0x11041f48] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11041f48))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101a00f jne 0x1101a05b */
  if (!C.zf) goto L_1101a05b;
  /* 1101a011 mov ecx, dword ptr [0x11041f48] */
  ECX = (r32((uint32_t)(0x11041f48)));
  /* 1101a017 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a01a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101a01d push ecx */
  push32((uint32_t)(ECX));
  /* 1101a01e mov edx, dword ptr [0x11041f68] */
  EDX = (r32((uint32_t)(0x11041f68)));
  /* 1101a024 push edx */
  push32((uint32_t)(EDX));
  /* 1101a025 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101a027 mov eax, dword ptr [0x11041f6c] */
  EAX = (r32((uint32_t)(0x11041f6c)));
  /* 1101a02c push eax */
  push32((uint32_t)(EAX));
  /* 1101a02d call dword ptr [0x11043330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043330))), 0x1101a033u);
  /* 1101a033 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1101a036 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101a03a jne 0x1101a043 */
  if (!C.zf) goto L_1101a043;
  /* 1101a03c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101a03e jmp 0x1101a10b */
  goto L_1101a10b;
L_1101a043:;
  /* 1101a043 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101a046 mov dword ptr [0x11041f68], ecx */
  w32((uint32_t)(0x11041f68), (ECX));
  /* 1101a04c mov edx, dword ptr [0x11041f48] */
  EDX = (r32((uint32_t)(0x11041f48)));
  /* 1101a052 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a055 mov dword ptr [0x11041f48], edx */
  w32((uint32_t)(0x11041f48), (EDX));
L_1101a05b:;
  /* 1101a05b mov eax, dword ptr [0x11041f64] */
  EAX = (r32((uint32_t)(0x11041f64)));
  /* 1101a060 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101a063 mov ecx, dword ptr [0x11041f68] */
  ECX = (r32((uint32_t)(0x11041f68)));
  /* 1101a069 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a06b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1101a06e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1101a073 push 8 */
  push32((uint32_t)(0x8u));
  /* 1101a075 mov edx, dword ptr [0x11041f6c] */
  EDX = (r32((uint32_t)(0x11041f6c)));
  /* 1101a07b push edx */
  push32((uint32_t)(EDX));
  /* 1101a07c call dword ptr [0x11043328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043328))), 0x1101a082u);
  /* 1101a082 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101a085 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 1101a088 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101a08b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101a08f jne 0x1101a095 */
  if (!C.zf) goto L_1101a095;
  /* 1101a091 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101a093 jmp 0x1101a10b */
  goto L_1101a10b;
L_1101a095:;
  /* 1101a095 push 4 */
  push32((uint32_t)(0x4u));
  /* 1101a097 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1101a09c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1101a0a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101a0a3 call dword ptr [0x11043320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043320))), 0x1101a0a9u);
  /* 1101a0a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101a0ac mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1101a0af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101a0b2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101a0b6 jne 0x1101a0d2 */
  if (!C.zf) goto L_1101a0d2;
  /* 1101a0b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101a0bb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1101a0be push ecx */
  push32((uint32_t)(ECX));
  /* 1101a0bf push 0 */
  push32((uint32_t)(0x0u));
  /* 1101a0c1 mov edx, dword ptr [0x11041f6c] */
  EDX = (r32((uint32_t)(0x11041f6c)));
  /* 1101a0c7 push edx */
  push32((uint32_t)(EDX));
  /* 1101a0c8 call dword ptr [0x11043354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043354))), 0x1101a0ceu);
  /* 1101a0ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101a0d0 jmp 0x1101a10b */
  goto L_1101a10b;
L_1101a0d2:;
  /* 1101a0d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101a0d5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1101a0db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101a0de mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1101a0e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101a0e8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1101a0ef mov eax, dword ptr [0x11041f64] */
  EAX = (r32((uint32_t)(0x11041f64)));
  /* 1101a0f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a0f7 mov dword ptr [0x11041f64], eax */
  w32((uint32_t)(0x11041f64), (EAX));
  /* 1101a0fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101a0ff mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1101a102 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 1101a108 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1101a10b:;
  /* 1101a10b mov esp, ebp */
  ESP = (EBP);
  /* 1101a10d pop ebp */
  EBP = (pop32());
  /* 1101a10e ret  */
  ESPCHK(0x1101a000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a110 @ 0x1101a110 (494 bytes, 149 insns) */
void f_1101a110(void) {
  FTRACE(0x1101a110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101a110 push ebp */
  push32((uint32_t)(EBP));
  /* 1101a111 mov ebp, esp */
  EBP = (ESP);
  /* 1101a113 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101a116 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101a119 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1101a11c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1101a11f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101a122 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1101a125 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1101a128 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_1101a12f:;
  /* 1101a12f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101a133 jl 0x1101a148 */
  if ((C.sf!=C.of)) goto L_1101a148;
  /* 1101a135 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101a138 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1101a13a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1101a13d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1101a140 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a143 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1101a146 jmp 0x1101a12f */
  goto L_1101a12f;
L_1101a148:;
  /* 1101a148 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1101a14b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101a151 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1101a154 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1101a15b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1101a15e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1101a165 jmp 0x1101a170 */
  goto L_1101a170;
L_1101a167:;
  /* 1101a167 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1101a16a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a16d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1101a170:;
  /* 1101a170 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101a174 jge 0x1101a196 */
  if ((C.sf==C.of)) goto L_1101a196;
  /* 1101a176 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1101a179 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101a17c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 1101a17f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1101a182 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1101a185 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1101a188 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1101a18b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1101a18e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1101a191 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1101a194 jmp 0x1101a167 */
  goto L_1101a167;
L_1101a196:;
  /* 1101a196 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1101a199 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1101a19c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101a19f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1101a1a2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a1a4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1101a1a7 push 4 */
  push32((uint32_t)(0x4u));
  /* 1101a1a9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1101a1ae push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1101a1b3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101a1b6 push edx */
  push32((uint32_t)(EDX));
  /* 1101a1b7 call dword ptr [0x11043320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043320))), 0x1101a1bdu);
  /* 1101a1bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101a1bf jne 0x1101a1c9 */
  if (!C.zf) goto L_1101a1c9;
  /* 1101a1c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1101a1c4 jmp 0x1101a2fa */
  goto L_1101a2fa;
L_1101a1c9:;
  /* 1101a1c9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101a1cc add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a1d1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1101a1d4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101a1d7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1101a1da jmp 0x1101a1e8 */
  goto L_1101a1e8;
L_1101a1dc:;
  /* 1101a1dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101a1df add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a1e5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1101a1e8:;
  /* 1101a1e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101a1eb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101a1ee ja 0x1101a24d */
  if ((!C.cf&&!C.zf)) goto L_1101a24d;
  /* 1101a1f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101a1f3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1101a1fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101a1fd mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 1101a207 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101a20a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a20d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1101a210 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1101a213 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1101a219 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1101a21c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a222 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1101a225 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1101a228 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1101a22b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101a231 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1101a234 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1101a237 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1101a23a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a23f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1101a242 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101a245 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1101a24b jmp 0x1101a1dc */
  goto L_1101a1dc;
L_1101a24d:;
  /* 1101a24d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101a250 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a256 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1101a259 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101a25c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a25f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1101a262 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1101a265 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1101a268 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1101a26b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1101a26e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1101a271 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1101a274 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1101a277 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1101a27a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a27d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1101a280 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1101a283 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1101a286 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1101a289 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1101a28c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1101a28f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1101a292 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1101a295 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1101a298 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1101a29b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 1101a2a3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1101a2a6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1101a2a9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 1101a2b4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1101a2b7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 1101a2bb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1101a2be mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 1101a2c1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1101a2c4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1101a2c7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 1101a2ca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101a2cc jne 0x1101a2dd */
  if (!C.zf) goto L_1101a2dd;
  /* 1101a2ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101a2d1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1101a2d4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1101a2d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101a2da mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1101a2dd:;
  /* 1101a2dd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1101a2e2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1101a2e5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1101a2e7 not edx */
  EDX = (~(EDX));
  /* 1101a2e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101a2ec mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1101a2ef and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1101a2f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101a2f4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1101a2f7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1101a2fa:;
  /* 1101a2fa mov esp, ebp */
  ESP = (EBP);
  /* 1101a2fc pop ebp */
  EBP = (pop32());
  /* 1101a2fd ret  */
  ESPCHK(0x1101a110u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a300 @ 0x1101a300 (1515 bytes, 489 insns) */
void f_1101a300(void) {
  FTRACE(0x1101a300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101a300 push ebp */
  push32((uint32_t)(EBP));
  /* 1101a301 mov ebp, esp */
  EBP = (ESP);
  /* 1101a303 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101a306 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1101a309 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a30c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1101a30e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1101a311 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101a314 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1101a317 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1101a31a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101a31d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101a320 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101a323 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101a326 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101a329 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1101a32c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1101a32f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101a332 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101a338 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101a33b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1101a342 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1101a345 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101a348 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101a34b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1101a34e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1101a351 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1101a353 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101a356 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1101a359 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1101a35c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a35f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1101a362 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1101a365 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1101a367 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1101a36a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1101a36d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101a370 jle 0x1101a626 */
  if ((C.zf||C.sf!=C.of)) goto L_1101a626;
  /* 1101a376 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101a379 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1101a37c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1101a37e jne 0x1101a38b */
  if (!C.zf) goto L_1101a38b;
  /* 1101a380 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1101a383 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a386 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101a389 jle 0x1101a392 */
  if ((C.zf||C.sf!=C.of)) goto L_1101a392;
L_1101a38b:;
  /* 1101a38b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101a38d jmp 0x1101a8e7 */
  goto L_1101a8e7;
L_1101a392:;
  /* 1101a392 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101a395 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1101a398 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101a39b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1101a39e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101a3a2 jbe 0x1101a3ab */
  if ((C.cf||C.zf)) goto L_1101a3ab;
  /* 1101a3a4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1101a3ab:;
  /* 1101a3ab mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1101a3ae mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1101a3b1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1101a3b4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101a3b7 jne 0x1101a48d */
  if (!C.zf) goto L_1101a48d;
  /* 1101a3bd cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101a3c1 jae 0x1101a422 */
  if (!C.cf) goto L_1101a422;
  /* 1101a3c3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1101a3c8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1101a3cb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1101a3cd not edx */
  EDX = (~(EDX));
  /* 1101a3cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101a3d2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101a3d5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1101a3d9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1101a3db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101a3de mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101a3e1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1101a3e5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101a3e8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a3eb mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1101a3ee sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1101a3f1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101a3f4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a3f7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1101a3fa mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101a3fd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a400 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1101a404 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1101a406 jne 0x1101a420 */
  if (!C.zf) goto L_1101a420;
  /* 1101a408 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1101a40d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1101a410 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1101a412 not edx */
  EDX = (~(EDX));
  /* 1101a414 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101a417 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1101a419 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1101a41b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101a41e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1101a420:;
  /* 1101a420 jmp 0x1101a48d */
  goto L_1101a48d;
L_1101a422:;
  /* 1101a422 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1101a425 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101a428 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1101a42d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1101a42f not eax */
  EAX = (~(EAX));
  /* 1101a431 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101a434 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101a437 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1101a43e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101a440 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101a443 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101a446 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1101a44d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101a450 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a453 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1101a456 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1101a459 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101a45c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a45f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1101a462 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101a465 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a468 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1101a46c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101a46e jne 0x1101a48d */
  if (!C.zf) goto L_1101a48d;
  /* 1101a470 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1101a473 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101a476 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1101a47b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1101a47d not eax */
  EAX = (~(EAX));
  /* 1101a47f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101a482 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1101a485 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1101a487 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101a48a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1101a48d:;
  /* 1101a48d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1101a490 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1101a493 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1101a496 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1101a499 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1101a49c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1101a49f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1101a4a2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1101a4a5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1101a4a8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1101a4ab mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1101a4ae add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a4b1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101a4b4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1101a4b7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101a4bb jle 0x1101a607 */
  if ((C.zf||C.sf!=C.of)) goto L_1101a607;
  /* 1101a4c1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1101a4c4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a4c7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1101a4ca mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101a4cd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1101a4d0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101a4d3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1101a4d6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101a4da jbe 0x1101a4e3 */
  if ((C.cf||C.zf)) goto L_1101a4e3;
  /* 1101a4dc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1101a4e3:;
  /* 1101a4e3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1101a4e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101a4e9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1101a4ec mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1101a4ef mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1101a4f2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1101a4f5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1101a4f8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1101a4fb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1101a4fe mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1101a501 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1101a504 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1101a507 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1101a50a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1101a50d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1101a510 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1101a513 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1101a516 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1101a519 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1101a51c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1101a51f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1101a522 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101a525 jne 0x1101a5f3 */
  if (!C.zf) goto L_1101a5f3;
  /* 1101a52b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101a52f jae 0x1101a58c */
  if (!C.cf) goto L_1101a58c;
  /* 1101a531 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101a534 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a537 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1101a53b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101a53e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a541 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1101a544 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1101a547 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101a54a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a54d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1101a550 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101a552 jne 0x1101a56a */
  if (!C.zf) goto L_1101a56a;
  /* 1101a554 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1101a559 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1101a55c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1101a55e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101a561 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1101a563 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1101a565 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101a568 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1101a56a:;
  /* 1101a56a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1101a56f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1101a572 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1101a574 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101a577 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101a57a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1101a57e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101a580 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101a583 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101a586 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1101a58a jmp 0x1101a5f3 */
  goto L_1101a5f3;
L_1101a58c:;
  /* 1101a58c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101a58f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a592 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1101a596 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101a599 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a59c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1101a59f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1101a5a2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101a5a5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a5a8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1101a5ab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101a5ad jne 0x1101a5ca */
  if (!C.zf) goto L_1101a5ca;
  /* 1101a5af mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1101a5b2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101a5b5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1101a5ba shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1101a5bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101a5bf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1101a5c2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1101a5c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101a5c7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1101a5ca:;
  /* 1101a5ca mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1101a5cd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101a5d0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1101a5d5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1101a5d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101a5da mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101a5dd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1101a5e4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101a5e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101a5e9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101a5ec mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1101a5f3:;
  /* 1101a5f3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1101a5f6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101a5f9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1101a5fb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1101a5fe add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a601 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101a604 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_1101a607:;
  /* 1101a607 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1101a60a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a60d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1101a610 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1101a612 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1101a615 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a618 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1101a61b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a61e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1101a621 jmp 0x1101a8e2 */
  goto L_1101a8e2;
L_1101a626:;
  /* 1101a626 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1101a629 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101a62c jge 0x1101a8e2 */
  if ((C.sf==C.of)) goto L_1101a8e2;
  /* 1101a632 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1101a635 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a638 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1101a63b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1101a63d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1101a640 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a643 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1101a646 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a649 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1101a64c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1101a64f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a652 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1101a655 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1101a658 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101a65b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1101a65e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1101a661 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1101a664 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101a667 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1101a66a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101a66e jbe 0x1101a677 */
  if ((C.cf||C.zf)) goto L_1101a677;
  /* 1101a670 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1101a677:;
  /* 1101a677 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101a67a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1101a67d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101a67f jne 0x1101a7c0 */
  if (!C.zf) goto L_1101a7c0;
  /* 1101a685 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101a688 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1101a68b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101a68e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1101a691 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101a695 jbe 0x1101a69e */
  if ((C.cf||C.zf)) goto L_1101a69e;
  /* 1101a697 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1101a69e:;
  /* 1101a69e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1101a6a1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1101a6a4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1101a6a7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101a6aa jne 0x1101a780 */
  if (!C.zf) goto L_1101a780;
  /* 1101a6b0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101a6b4 jae 0x1101a715 */
  if (!C.cf) goto L_1101a715;
  /* 1101a6b6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1101a6bb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1101a6be shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1101a6c0 not edx */
  EDX = (~(EDX));
  /* 1101a6c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101a6c5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101a6c8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1101a6cc and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1101a6ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101a6d1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101a6d4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1101a6d8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101a6db add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a6de mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1101a6e1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1101a6e4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101a6e7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a6ea mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1101a6ed mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101a6f0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a6f3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1101a6f7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1101a6f9 jne 0x1101a713 */
  if (!C.zf) goto L_1101a713;
  /* 1101a6fb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1101a700 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1101a703 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1101a705 not edx */
  EDX = (~(EDX));
  /* 1101a707 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101a70a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1101a70c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1101a70e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101a711 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1101a713:;
  /* 1101a713 jmp 0x1101a780 */
  goto L_1101a780;
L_1101a715:;
  /* 1101a715 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1101a718 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101a71b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1101a720 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1101a722 not eax */
  EAX = (~(EAX));
  /* 1101a724 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101a727 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101a72a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1101a731 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101a733 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101a736 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101a739 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1101a740 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101a743 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a746 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1101a749 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1101a74c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101a74f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a752 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1101a755 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101a758 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a75b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1101a75f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101a761 jne 0x1101a780 */
  if (!C.zf) goto L_1101a780;
  /* 1101a763 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1101a766 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101a769 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1101a76e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1101a770 not eax */
  EAX = (~(EAX));
  /* 1101a772 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101a775 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1101a778 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1101a77a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101a77d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1101a780:;
  /* 1101a780 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1101a783 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1101a786 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1101a789 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1101a78c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1101a78f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1101a792 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1101a795 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1101a798 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1101a79b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1101a79e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1101a7a1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a7a4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1101a7a7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1101a7aa sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1101a7ad sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101a7b0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1101a7b3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101a7b7 jbe 0x1101a7c0 */
  if ((C.cf||C.zf)) goto L_1101a7c0;
  /* 1101a7b9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1101a7c0:;
  /* 1101a7c0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101a7c3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101a7c6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1101a7c9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1101a7cc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1101a7cf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1101a7d2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1101a7d5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1101a7d8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1101a7db mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1101a7de mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1101a7e1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1101a7e4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1101a7e7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1101a7ea mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1101a7ed mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1101a7f0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1101a7f3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1101a7f6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1101a7f9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1101a7fc mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1101a7ff cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101a802 jne 0x1101a8ce */
  if (!C.zf) goto L_1101a8ce;
  /* 1101a808 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101a80c jae 0x1101a868 */
  if (!C.cf) goto L_1101a868;
  /* 1101a80e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101a811 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a814 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1101a818 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101a81b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a81e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1101a821 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1101a823 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101a826 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a829 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1101a82c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1101a82e jne 0x1101a846 */
  if (!C.zf) goto L_1101a846;
  /* 1101a830 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1101a835 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101a838 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1101a83a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101a83d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1101a83f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1101a841 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101a844 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1101a846:;
  /* 1101a846 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1101a84b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101a84e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1101a850 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101a853 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101a856 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1101a85a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1101a85c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101a85f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101a862 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1101a866 jmp 0x1101a8ce */
  goto L_1101a8ce;
L_1101a868:;
  /* 1101a868 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101a86b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a86e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1101a872 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101a875 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a878 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1101a87b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1101a87d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101a880 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a883 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1101a886 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1101a888 jne 0x1101a8a5 */
  if (!C.zf) goto L_1101a8a5;
  /* 1101a88a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101a88d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101a890 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1101a895 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1101a897 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101a89a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1101a89d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1101a89f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101a8a2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1101a8a5:;
  /* 1101a8a5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101a8a8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101a8ab mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1101a8b0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1101a8b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101a8b5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101a8b8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1101a8bf or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1101a8c1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101a8c4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101a8c7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1101a8ce:;
  /* 1101a8ce mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1101a8d1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1101a8d4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1101a8d6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1101a8d9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a8dc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1101a8df mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1101a8e2:;
  /* 1101a8e2 mov eax, 1 */
  EAX = (0x1u);
L_1101a8e7:;
  /* 1101a8e7 mov esp, ebp */
  ESP = (EBP);
  /* 1101a8e9 pop ebp */
  EBP = (pop32());
  /* 1101a8ea ret  */
  ESPCHK(0x1101a300u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a8f0 @ 0x1101a8f0 (304 bytes, 79 insns) */
void f_1101a8f0(void) {
  FTRACE(0x1101a8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101a8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1101a8f1 mov ebp, esp */
  EBP = (ESP);
  /* 1101a8f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1101a8f4 cmp dword ptr [0x11041f60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11041f60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101a8fb je 0x1101aa1c */
  if (C.zf) goto L_1101aa1c;
  /* 1101a901 mov eax, dword ptr [0x11041f58] */
  EAX = (r32((uint32_t)(0x11041f58)));
  /* 1101a906 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1101a909 mov ecx, dword ptr [0x11041f60] */
  ECX = (r32((uint32_t)(0x11041f60)));
  /* 1101a90f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1101a912 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a914 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1101a917 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1101a91c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1101a921 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101a924 push eax */
  push32((uint32_t)(EAX));
  /* 1101a925 call dword ptr [0x11043344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043344))), 0x1101a92bu);
  /* 1101a92b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1101a930 mov ecx, dword ptr [0x11041f58] */
  ECX = (r32((uint32_t)(0x11041f58)));
  /* 1101a936 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1101a938 mov eax, dword ptr [0x11041f60] */
  EAX = (r32((uint32_t)(0x11041f60)));
  /* 1101a93d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1101a940 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1101a942 mov edx, dword ptr [0x11041f60] */
  EDX = (r32((uint32_t)(0x11041f60)));
  /* 1101a948 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1101a94b mov eax, dword ptr [0x11041f60] */
  EAX = (r32((uint32_t)(0x11041f60)));
  /* 1101a950 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1101a953 mov edx, dword ptr [0x11041f58] */
  EDX = (r32((uint32_t)(0x11041f58)));
  /* 1101a959 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1101a964 mov eax, dword ptr [0x11041f60] */
  EAX = (r32((uint32_t)(0x11041f60)));
  /* 1101a969 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1101a96c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1101a96f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1101a972 mov eax, dword ptr [0x11041f60] */
  EAX = (r32((uint32_t)(0x11041f60)));
  /* 1101a977 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1101a97a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1101a97d mov edx, dword ptr [0x11041f60] */
  EDX = (r32((uint32_t)(0x11041f60)));
  /* 1101a983 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1101a986 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1101a98a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1101a98c jne 0x1101a9a2 */
  if (!C.zf) goto L_1101a9a2;
  /* 1101a98e mov edx, dword ptr [0x11041f60] */
  EDX = (r32((uint32_t)(0x11041f60)));
  /* 1101a994 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1101a997 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1101a999 mov ecx, dword ptr [0x11041f60] */
  ECX = (r32((uint32_t)(0x11041f60)));
  /* 1101a99f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1101a9a2:;
  /* 1101a9a2 mov edx, dword ptr [0x11041f60] */
  EDX = (r32((uint32_t)(0x11041f60)));
  /* 1101a9a8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101a9ac jne 0x1101aa12 */
  if (!C.zf) goto L_1101aa12;
  /* 1101a9ae cmp dword ptr [0x11041f64], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11041f64))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101a9b5 jle 0x1101aa12 */
  if ((C.zf||C.sf!=C.of)) goto L_1101aa12;
  /* 1101a9b7 mov eax, dword ptr [0x11041f60] */
  EAX = (r32((uint32_t)(0x11041f60)));
  /* 1101a9bc mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1101a9bf push ecx */
  push32((uint32_t)(ECX));
  /* 1101a9c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101a9c2 mov edx, dword ptr [0x11041f6c] */
  EDX = (r32((uint32_t)(0x11041f6c)));
  /* 1101a9c8 push edx */
  push32((uint32_t)(EDX));
  /* 1101a9c9 call dword ptr [0x11043354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043354))), 0x1101a9cfu);
  /* 1101a9cf mov eax, dword ptr [0x11041f64] */
  EAX = (r32((uint32_t)(0x11041f64)));
  /* 1101a9d4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101a9d7 mov ecx, dword ptr [0x11041f68] */
  ECX = (r32((uint32_t)(0x11041f68)));
  /* 1101a9dd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a9df mov edx, dword ptr [0x11041f60] */
  EDX = (r32((uint32_t)(0x11041f60)));
  /* 1101a9e5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a9e8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101a9ea push ecx */
  push32((uint32_t)(ECX));
  /* 1101a9eb mov eax, dword ptr [0x11041f60] */
  EAX = (r32((uint32_t)(0x11041f60)));
  /* 1101a9f0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101a9f3 push eax */
  push32((uint32_t)(EAX));
  /* 1101a9f4 mov ecx, dword ptr [0x11041f60] */
  ECX = (r32((uint32_t)(0x11041f60)));
  /* 1101a9fa push ecx */
  push32((uint32_t)(ECX));
  /* 1101a9fb call 0x1101d020 */
  push32(0x1101aa00u); f_1101d020();
  /* 1101aa00 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101aa03 mov edx, dword ptr [0x11041f64] */
  EDX = (r32((uint32_t)(0x11041f64)));
  /* 1101aa09 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101aa0c mov dword ptr [0x11041f64], edx */
  w32((uint32_t)(0x11041f64), (EDX));
L_1101aa12:;
  /* 1101aa12 mov dword ptr [0x11041f60], 0 */
  w32((uint32_t)(0x11041f60), (0x0u));
L_1101aa1c:;
  /* 1101aa1c mov esp, ebp */
  ESP = (EBP);
  /* 1101aa1e pop ebp */
  EBP = (pop32());
  /* 1101aa1f ret  */
  ESPCHK(0x1101a8f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa20 @ 0x1101aa20 (1565 bytes, 343 insns) */
void f_1101aa20(void) {
  FTRACE(0x1101aa20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101aa20 push ebp */
  push32((uint32_t)(EBP));
  /* 1101aa21 mov ebp, esp */
  EBP = (ESP);
  /* 1101aa23 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101aa29 mov eax, dword ptr [0x11041f64] */
  EAX = (r32((uint32_t)(0x11041f64)));
  /* 1101aa2e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101aa31 push eax */
  push32((uint32_t)(EAX));
  /* 1101aa32 mov ecx, dword ptr [0x11041f68] */
  ECX = (r32((uint32_t)(0x11041f68)));
  /* 1101aa38 push ecx */
  push32((uint32_t)(ECX));
  /* 1101aa39 call dword ptr [0x110433bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110433bc))), 0x1101aa3fu);
  /* 1101aa3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101aa41 je 0x1101aa4b */
  if (C.zf) goto L_1101aa4b;
  /* 1101aa43 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1101aa46 jmp 0x1101b039 */
  goto L_1101b039;
L_1101aa4b:;
  /* 1101aa4b mov edx, dword ptr [0x11041f68] */
  EDX = (r32((uint32_t)(0x11041f68)));
  /* 1101aa51 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 1101aa57 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 1101aa61 jmp 0x1101aa72 */
  goto L_1101aa72;
L_1101aa63:;
  /* 1101aa63 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 1101aa69 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101aa6c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_1101aa72:;
  /* 1101aa72 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 1101aa78 cmp ecx, dword ptr [0x11041f64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11041f64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101aa7e jge 0x1101b037 */
  if ((C.sf==C.of)) goto L_1101b037;
  /* 1101aa84 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1101aa8a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1101aa8d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 1101aa93 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1101aa98 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1101aa9e push ecx */
  push32((uint32_t)(ECX));
  /* 1101aa9f call dword ptr [0x110433bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110433bc))), 0x1101aaa5u);
  /* 1101aaa5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101aaa7 je 0x1101aab3 */
  if (C.zf) goto L_1101aab3;
  /* 1101aaa9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1101aaae jmp 0x1101b039 */
  goto L_1101b039;
L_1101aab3:;
  /* 1101aab3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1101aab9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1101aabc mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 1101aac2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1101aac8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101aace mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1101aad1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1101aad7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1101aada mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1101aadd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 1101aae7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 1101aaf1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1101aaf8 jmp 0x1101ab03 */
  goto L_1101ab03;
L_1101aafa:;
  /* 1101aafa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101aafd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ab00 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1101ab03:;
  /* 1101ab03 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ab07 jge 0x1101affb */
  if ((C.sf==C.of)) goto L_1101affb;
  /* 1101ab0d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 1101ab17 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 1101ab21 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1101ab2b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 1101ab35 jmp 0x1101ab46 */
  goto L_1101ab46;
L_1101ab37:;
  /* 1101ab37 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1101ab3d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ab40 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_1101ab46:;
  /* 1101ab46 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ab4d jge 0x1101ab62 */
  if ((C.sf==C.of)) goto L_1101ab62;
  /* 1101ab4f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1101ab55 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 1101ab60 jmp 0x1101ab37 */
  goto L_1101ab37;
L_1101ab62:;
  /* 1101ab62 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ab66 jl 0x1101af9d */
  if ((C.sf!=C.of)) goto L_1101af9d;
  /* 1101ab6c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1101ab71 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 1101ab77 push ecx */
  push32((uint32_t)(ECX));
  /* 1101ab78 call dword ptr [0x110433bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110433bc))), 0x1101ab7eu);
  /* 1101ab7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101ab80 je 0x1101ab8c */
  if (C.zf) goto L_1101ab8c;
  /* 1101ab82 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 1101ab87 jmp 0x1101b039 */
  goto L_1101b039;
L_1101ab8c:;
  /* 1101ab8c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1101ab92 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1101ab95 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1101ab9f jmp 0x1101abb0 */
  goto L_1101abb0;
L_1101aba1:;
  /* 1101aba1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 1101aba7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101abaa mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_1101abb0:;
  /* 1101abb0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101abb7 jge 0x1101ad34 */
  if ((C.sf==C.of)) goto L_1101ad34;
  /* 1101abbd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101abc0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101abc3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 1101abc9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1101abcf add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101abd5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 1101abdb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1101abe1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101abe5 jne 0x1101abf2 */
  if (!C.zf) goto L_1101abf2;
  /* 1101abe7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1101abed cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101abf0 je 0x1101abfc */
  if (C.zf) goto L_1101abfc;
L_1101abf2:;
  /* 1101abf2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 1101abf7 jmp 0x1101b039 */
  goto L_1101b039;
L_1101abfc:;
  /* 1101abfc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1101ac02 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1101ac04 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1101ac0a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 1101ac10 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 1101ac16 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1101ac1c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1101ac1f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101ac21 je 0x1101ac59 */
  if (C.zf) goto L_1101ac59;
  /* 1101ac23 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1101ac29 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101ac2c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1101ac32 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ac3c jle 0x1101ac48 */
  if ((C.zf||C.sf!=C.of)) goto L_1101ac48;
  /* 1101ac3e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 1101ac43 jmp 0x1101b039 */
  goto L_1101b039;
L_1101ac48:;
  /* 1101ac48 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1101ac4e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ac51 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 1101ac57 jmp 0x1101ac9b */
  goto L_1101ac9b;
L_1101ac59:;
  /* 1101ac59 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1101ac5f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1101ac62 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101ac65 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1101ac6b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ac72 jle 0x1101ac7e */
  if ((C.zf||C.sf!=C.of)) goto L_1101ac7e;
  /* 1101ac74 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1101ac7e:;
  /* 1101ac7e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1101ac84 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1101ac8b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ac8e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1101ac94 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1101ac9b:;
  /* 1101ac9b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101aca2 jl 0x1101acbd */
  if ((C.sf!=C.of)) goto L_1101acbd;
  /* 1101aca4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1101acaa and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1101acad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101acaf jne 0x1101acbd */
  if (!C.zf) goto L_1101acbd;
  /* 1101acb1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101acbb jle 0x1101acc7 */
  if ((C.zf||C.sf!=C.of)) goto L_1101acc7;
L_1101acbd:;
  /* 1101acbd mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 1101acc2 jmp 0x1101b039 */
  goto L_1101b039;
L_1101acc7:;
  /* 1101acc7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1101accd add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101acd3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1101acd6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101acdc je 0x1101ace8 */
  if (C.zf) goto L_1101ace8;
  /* 1101acde mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1101ace3 jmp 0x1101b039 */
  goto L_1101b039;
L_1101ace8:;
  /* 1101ace8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1101acee add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101acf4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1101acfa mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1101ad00 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ad06 jb 0x1101abfc */
  if (C.cf) goto L_1101abfc;
  /* 1101ad0c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1101ad12 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ad18 je 0x1101ad24 */
  if (C.zf) goto L_1101ad24;
  /* 1101ad1a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1101ad1f jmp 0x1101b039 */
  goto L_1101b039;
L_1101ad24:;
  /* 1101ad24 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101ad27 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ad2c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1101ad2f jmp 0x1101aba1 */
  goto L_1101aba1;
L_1101ad34:;
  /* 1101ad34 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1101ad37 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1101ad39 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ad3f je 0x1101ad4b */
  if (C.zf) goto L_1101ad4b;
  /* 1101ad41 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 1101ad46 jmp 0x1101b039 */
  goto L_1101b039;
L_1101ad4b:;
  /* 1101ad4b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1101ad4e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 1101ad54 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1101ad5b jmp 0x1101ad66 */
  goto L_1101ad66;
L_1101ad5d:;
  /* 1101ad5d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1101ad60 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ad63 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1101ad66:;
  /* 1101ad66 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ad6a jge 0x1101af9d */
  if ((C.sf==C.of)) goto L_1101af9d;
  /* 1101ad70 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1101ad7a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1101ad80 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_1101ad86:;
  /* 1101ad86 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1101ad8c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1101ad8f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 1101ad95 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1101ad9b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ada1 je 0x1101aeca */
  if (C.zf) goto L_1101aeca;
  /* 1101ada7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1101adaa mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1101adb0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101adb7 je 0x1101aeca */
  if (C.zf) goto L_1101aeca;
  /* 1101adbd mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1101adc3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101adc9 jb 0x1101adde */
  if (C.cf) goto L_1101adde;
  /* 1101adcb mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 1101add1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101add6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101addc jb 0x1101ade8 */
  if (C.cf) goto L_1101ade8;
L_1101adde:;
  /* 1101adde mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 1101ade3 jmp 0x1101b039 */
  goto L_1101b039;
L_1101ade8:;
  /* 1101ade8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1101adee and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 1101adf4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1101adfa mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 1101ae00 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ae03 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1101ae06 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101ae09 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ae0e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_1101ae14:;
  /* 1101ae14 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101ae17 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ae1d je 0x1101ae3e */
  if (C.zf) goto L_1101ae3e;
  /* 1101ae1f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101ae22 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ae28 jne 0x1101ae2c */
  if (!C.zf) goto L_1101ae2c;
  /* 1101ae2a jmp 0x1101ae3e */
  goto L_1101ae3e;
L_1101ae2c:;
  /* 1101ae2c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101ae2f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1101ae31 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 1101ae34 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101ae37 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ae39 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1101ae3c jmp 0x1101ae14 */
  goto L_1101ae14;
L_1101ae3e:;
  /* 1101ae3e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101ae41 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ae47 jne 0x1101ae53 */
  if (!C.zf) goto L_1101ae53;
  /* 1101ae49 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1101ae4e jmp 0x1101b039 */
  goto L_1101b039;
L_1101ae53:;
  /* 1101ae53 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1101ae59 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1101ae5b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1101ae5e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101ae61 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1101ae67 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ae6e jle 0x1101ae7a */
  if ((C.zf||C.sf!=C.of)) goto L_1101ae7a;
  /* 1101ae70 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1101ae7a:;
  /* 1101ae7a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1101ae80 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ae83 je 0x1101ae8f */
  if (C.zf) goto L_1101ae8f;
  /* 1101ae85 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1101ae8a jmp 0x1101b039 */
  goto L_1101b039;
L_1101ae8f:;
  /* 1101ae8f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1101ae95 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1101ae98 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ae9e je 0x1101aeaa */
  if (C.zf) goto L_1101aeaa;
  /* 1101aea0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 1101aea5 jmp 0x1101b039 */
  goto L_1101b039;
L_1101aeaa:;
  /* 1101aeaa mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1101aeb0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1101aeb6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1101aebc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101aebf mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 1101aec5 jmp 0x1101ad86 */
  goto L_1101ad86;
L_1101aeca:;
  /* 1101aeca cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101aed1 je 0x1101af41 */
  if (C.zf) goto L_1101af41;
  /* 1101aed3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101aed7 jge 0x1101af0b */
  if ((C.sf==C.of)) goto L_1101af0b;
  /* 1101aed9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1101aede mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1101aee1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1101aee3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1101aee9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1101aeeb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 1101aef1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1101aef6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1101aef9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1101aefb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1101af01 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1101af03 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 1101af09 jmp 0x1101af41 */
  goto L_1101af41;
L_1101af0b:;
  /* 1101af0b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1101af0e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101af11 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1101af16 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1101af18 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1101af1e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1101af20 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 1101af26 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1101af29 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101af2c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1101af31 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1101af33 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 1101af39 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1101af3b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_1101af41:;
  /* 1101af41 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1101af47 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1101af4a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101af50 jne 0x1101af64 */
  if (!C.zf) goto L_1101af64;
  /* 1101af52 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1101af55 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1101af5b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101af62 je 0x1101af6e */
  if (C.zf) goto L_1101af6e;
L_1101af64:;
  /* 1101af64 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 1101af69 jmp 0x1101b039 */
  goto L_1101b039;
L_1101af6e:;
  /* 1101af6e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1101af74 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1101af77 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101af7d je 0x1101af89 */
  if (C.zf) goto L_1101af89;
  /* 1101af7f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 1101af84 jmp 0x1101b039 */
  goto L_1101b039;
L_1101af89:;
  /* 1101af89 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1101af8f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101af92 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 1101af98 jmp 0x1101ad5d */
  goto L_1101ad5d;
L_1101af9d:;
  /* 1101af9d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101afa0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1101afa6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1101afac cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101afb0 jne 0x1101afca */
  if (!C.zf) goto L_1101afca;
  /* 1101afb2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101afb5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1101afbb mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 1101afc1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101afc8 je 0x1101afd1 */
  if (C.zf) goto L_1101afd1;
L_1101afca:;
  /* 1101afca mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1101afcf jmp 0x1101b039 */
  goto L_1101b039;
L_1101afd1:;
  /* 1101afd1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1101afd7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101afdd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 1101afe3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1101afe6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101afeb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1101afee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101aff1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1101aff3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1101aff6 jmp 0x1101aafa */
  goto L_1101aafa;
L_1101affb:;
  /* 1101affb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1101b001 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1101b007 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101b009 jne 0x1101b01c */
  if (!C.zf) goto L_1101b01c;
  /* 1101b00b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1101b011 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 1101b017 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101b01a je 0x1101b023 */
  if (C.zf) goto L_1101b023;
L_1101b01c:;
  /* 1101b01c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 1101b021 jmp 0x1101b039 */
  goto L_1101b039;
L_1101b023:;
  /* 1101b023 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1101b029 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101b02c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 1101b032 jmp 0x1101aa63 */
  goto L_1101aa63;
L_1101b037:;
  /* 1101b037 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1101b039:;
  /* 1101b039 mov esp, ebp */
  ESP = (EBP);
  /* 1101b03b pop ebp */
  EBP = (pop32());
  /* 1101b03c ret  */
  ESPCHK(0x1101aa20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b040 @ 0x1101b040 (250 bytes, 92 insns) */
void f_1101b040(void) {
  FTRACE(0x1101b040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101b040 push ebp */
  push32((uint32_t)(EBP));
  /* 1101b041 mov ebp, esp */
  EBP = (ESP);
  /* 1101b043 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101b046 push ebx */
  push32((uint32_t)(EBX));
  /* 1101b047 push esi */
  push32((uint32_t)(ESI));
  /* 1101b048 push edi */
  push32((uint32_t)(EDI));
  /* 1101b049 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1101b04c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1101b04f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1101b052 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1101b055:;
  /* 1101b055 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101b059 jne 0x1101b079 */
  if (!C.zf) goto L_1101b079;
  /* 1101b05b push 0x1103c09c */
  push32((uint32_t)(0x1103c09cu));
  /* 1101b060 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101b062 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1101b064 push 0x1103c090 */
  push32((uint32_t)(0x1103c090u));
  /* 1101b069 push 2 */
  push32((uint32_t)(0x2u));
  /* 1101b06b call 0x110141f0 */
  push32(0x1101b070u); f_110141f0();
  /* 1101b070 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101b073 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101b076 jne 0x1101b079 */
  if (!C.zf) goto L_1101b079;
  /* 1101b078 int3  */
  x86_unimpl("int3 @ 0x1101b078");
L_1101b079:;
  /* 1101b079 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1101b07b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101b07d jne 0x1101b055 */
  if (!C.zf) goto L_1101b055;
L_1101b07f:;
  /* 1101b07f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101b083 jne 0x1101b0a3 */
  if (!C.zf) goto L_1101b0a3;
  /* 1101b085 push 0x1103c080 */
  push32((uint32_t)(0x1103c080u));
  /* 1101b08a push 0 */
  push32((uint32_t)(0x0u));
  /* 1101b08c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1101b08e push 0x1103c090 */
  push32((uint32_t)(0x1103c090u));
  /* 1101b093 push 2 */
  push32((uint32_t)(0x2u));
  /* 1101b095 call 0x110141f0 */
  push32(0x1101b09au); f_110141f0();
  /* 1101b09a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101b09d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101b0a0 jne 0x1101b0a3 */
  if (!C.zf) goto L_1101b0a3;
  /* 1101b0a2 int3  */
  x86_unimpl("int3 @ 0x1101b0a2");
L_1101b0a3:;
  /* 1101b0a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101b0a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101b0a7 jne 0x1101b07f */
  if (!C.zf) goto L_1101b07f;
  /* 1101b0a9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101b0ac mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1101b0b3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101b0b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101b0b9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1101b0bc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101b0bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101b0c2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1101b0c4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101b0c7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1101b0ce mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1101b0d1 push ecx */
  push32((uint32_t)(ECX));
  /* 1101b0d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101b0d5 push edx */
  push32((uint32_t)(EDX));
  /* 1101b0d6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101b0d9 push eax */
  push32((uint32_t)(EAX));
  /* 1101b0da call 0x1101c0c0 */
  push32(0x1101b0dfu); f_1101c0c0();
  /* 1101b0df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101b0e2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1101b0e5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101b0e8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1101b0eb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101b0ee mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101b0f1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1101b0f4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101b0f7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101b0fb jl 0x1101b11f */
  if ((C.sf!=C.of)) goto L_1101b11f;
  /* 1101b0fd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101b100 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1101b102 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1101b105 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1101b107 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1101b10d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1101b110 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101b113 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1101b115 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101b118 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101b11b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1101b11d jmp 0x1101b130 */
  goto L_1101b130;
L_1101b11f:;
  /* 1101b11f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101b122 push edx */
  push32((uint32_t)(EDX));
  /* 1101b123 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101b125 call 0x1101be40 */
  push32(0x1101b12au); f_1101be40();
  /* 1101b12a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101b12d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1101b130:;
  /* 1101b130 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1101b133 pop edi */
  EDI = (pop32());
  /* 1101b134 pop esi */
  ESI = (pop32());
  /* 1101b135 pop ebx */
  EBX = (pop32());
  /* 1101b136 mov esp, ebp */
  ESP = (EBP);
  /* 1101b138 pop ebp */
  EBP = (pop32());
  /* 1101b139 ret  */
  ESPCHK(0x1101b040u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b140 @ 0x1101b140 (183 bytes, 58 insns) */
void f_1101b140(void) {
  FTRACE(0x1101b140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101b140 push ebp */
  push32((uint32_t)(EBP));
  /* 1101b141 mov ebp, esp */
  EBP = (ESP);
  /* 1101b143 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101b146 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101b149 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101b14c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101b151 ja 0x1101b16a */
  if ((!C.cf&&!C.zf)) goto L_1101b16a;
  /* 1101b153 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101b156 mov edx, dword ptr [0x1103ec98] */
  EDX = (r32((uint32_t)(0x1103ec98)));
  /* 1101b15c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101b15e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1101b162 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1101b165 jmp 0x1101b1f3 */
  goto L_1101b1f3;
L_1101b16a:;
  /* 1101b16a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101b16d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1101b170 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1101b176 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1101b17c mov edx, dword ptr [0x1103ec98] */
  EDX = (r32((uint32_t)(0x1103ec98)));
  /* 1101b182 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101b184 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1101b188 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1101b18d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101b18f je 0x1101b1b3 */
  if (C.zf) goto L_1101b1b3;
  /* 1101b191 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101b194 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1101b197 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1101b19d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1101b1a0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 1101b1a3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 1101b1a6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1101b1aa mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 1101b1b1 jmp 0x1101b1c4 */
  goto L_1101b1c4;
L_1101b1b3:;
  /* 1101b1b3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1101b1b6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1101b1b9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1101b1bd mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1101b1c4:;
  /* 1101b1c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1101b1c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101b1c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101b1ca lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1101b1cd push ecx */
  push32((uint32_t)(ECX));
  /* 1101b1ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101b1d1 push edx */
  push32((uint32_t)(EDX));
  /* 1101b1d2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1101b1d5 push eax */
  push32((uint32_t)(EAX));
  /* 1101b1d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1101b1d8 call 0x1101d360 */
  push32(0x1101b1ddu); f_1101d360();
  /* 1101b1dd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101b1e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101b1e2 jne 0x1101b1e8 */
  if (!C.zf) goto L_1101b1e8;
  /* 1101b1e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101b1e6 jmp 0x1101b1f3 */
  goto L_1101b1f3;
L_1101b1e8:;
  /* 1101b1e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101b1eb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1101b1f0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_1101b1f3:;
  /* 1101b1f3 mov esp, ebp */
  ESP = (EBP);
  /* 1101b1f5 pop ebp */
  EBP = (pop32());
  /* 1101b1f6 ret  */
  ESPCHK(0x1101b140u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b200 @ 0x1101b200 (836 bytes, 238 insns) */
void f_1101b200(void) {
  FTRACE(0x1101b200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101b200 push ebp */
  push32((uint32_t)(EBP));
  /* 1101b201 mov ebp, esp */
  EBP = (ESP);
  /* 1101b203 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101b206 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1101b208 call 0x11018b30 */
  push32(0x1101b20du); f_11018b30();
  /* 1101b20d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101b210 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101b213 push eax */
  push32((uint32_t)(EAX));
  /* 1101b214 call 0x1101b550 */
  push32(0x1101b219u); f_1101b550();
  /* 1101b219 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101b21c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1101b21f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101b222 cmp ecx, dword ptr [0x11041ca4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11041ca4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101b228 jne 0x1101b23b */
  if (!C.zf) goto L_1101b23b;
  /* 1101b22a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1101b22c call 0x11018bd0 */
  push32(0x1101b231u); f_11018bd0();
  /* 1101b231 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101b234 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101b236 jmp 0x1101b540 */
  goto L_1101b540;
L_1101b23b:;
  /* 1101b23b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101b23f jne 0x1101b25c */
  if (!C.zf) goto L_1101b25c;
  /* 1101b241 call 0x1101b630 */
  push32(0x1101b246u); f_1101b630();
  /* 1101b246 call 0x1101b6b0 */
  push32(0x1101b24bu); f_1101b6b0();
  /* 1101b24b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1101b24d call 0x11018bd0 */
  push32(0x1101b252u); f_11018bd0();
  /* 1101b252 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101b255 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101b257 jmp 0x1101b540 */
  goto L_1101b540;
L_1101b25c:;
  /* 1101b25c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1101b263 jmp 0x1101b26e */
  goto L_1101b26e;
L_1101b265:;
  /* 1101b265 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101b268 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101b26b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1101b26e:;
  /* 1101b26e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101b272 jae 0x1101b3bf */
  if (!C.cf) goto L_1101b3bf;
  /* 1101b278 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101b27b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101b27e mov ecx, dword ptr [eax + 0x1103eeb8] */
  ECX = (r32((uint32_t)(EAX + 0x1103eeb8)));
  /* 1101b284 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101b287 jne 0x1101b3ba */
  if (!C.zf) goto L_1101b3ba;
  /* 1101b28d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1101b294 jmp 0x1101b29f */
  goto L_1101b29f;
L_1101b296:;
  /* 1101b296 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101b299 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101b29c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1101b29f:;
  /* 1101b29f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101b2a6 jae 0x1101b2b4 */
  if (!C.cf) goto L_1101b2b4;
  /* 1101b2a8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101b2ab mov byte ptr [eax + 0x11041e40], 0 */
  w8((uint32_t)(EAX + 0x11041e40), (0x0u));
  /* 1101b2b2 jmp 0x1101b296 */
  goto L_1101b296;
L_1101b2b4:;
  /* 1101b2b4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1101b2bb jmp 0x1101b2c6 */
  goto L_1101b2c6;
L_1101b2bd:;
  /* 1101b2bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101b2c0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101b2c3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1101b2c6:;
  /* 1101b2c6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101b2ca jae 0x1101b347 */
  if (!C.cf) goto L_1101b347;
  /* 1101b2cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101b2cf imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101b2d2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101b2d5 lea ecx, [edx + eax*8 + 0x1103eec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x1103eec8));
  /* 1101b2dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1101b2df jmp 0x1101b2ea */
  goto L_1101b2ea;
L_1101b2e1:;
  /* 1101b2e1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101b2e4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101b2e7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1101b2ea:;
  /* 1101b2ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101b2ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1101b2ef mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1101b2f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1101b2f3 je 0x1101b342 */
  if (C.zf) goto L_1101b342;
  /* 1101b2f5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101b2f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101b2fa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1101b2fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101b2ff je 0x1101b342 */
  if (C.zf) goto L_1101b342;
  /* 1101b301 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101b304 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1101b306 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1101b308 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1101b30b jmp 0x1101b316 */
  goto L_1101b316;
L_1101b30d:;
  /* 1101b30d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101b310 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101b313 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1101b316:;
  /* 1101b316 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101b319 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1101b31b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1101b31e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101b321 ja 0x1101b340 */
  if ((!C.cf&&!C.zf)) goto L_1101b340;
  /* 1101b323 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101b326 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101b329 mov dl, byte ptr [eax + 0x11041e41] */
  DL = (r8((uint32_t)(EAX + 0x11041e41)));
  /* 1101b32f or dl, byte ptr [ecx + 0x1103eeb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x1103eeb0))); DL = (_r); fl_logic(_r,8); }
  /* 1101b335 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101b338 mov byte ptr [eax + 0x11041e41], dl */
  w8((uint32_t)(EAX + 0x11041e41), (DL));
  /* 1101b33e jmp 0x1101b30d */
  goto L_1101b30d;
L_1101b340:;
  /* 1101b340 jmp 0x1101b2e1 */
  goto L_1101b2e1;
L_1101b342:;
  /* 1101b342 jmp 0x1101b2bd */
  goto L_1101b2bd;
L_1101b347:;
  /* 1101b347 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101b34a mov dword ptr [0x11041ca4], ecx */
  w32((uint32_t)(0x11041ca4), (ECX));
  /* 1101b350 mov dword ptr [0x11041d2c], 1 */
  w32((uint32_t)(0x11041d2c), (0x1u));
  /* 1101b35a mov edx, dword ptr [0x11041ca4] */
  EDX = (r32((uint32_t)(0x11041ca4)));
  /* 1101b360 push edx */
  push32((uint32_t)(EDX));
  /* 1101b361 call 0x1101b5b0 */
  push32(0x1101b366u); f_1101b5b0();
  /* 1101b366 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101b369 mov dword ptr [0x11041f44], eax */
  w32((uint32_t)(0x11041f44), (EAX));
  /* 1101b36e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1101b375 jmp 0x1101b380 */
  goto L_1101b380;
L_1101b377:;
  /* 1101b377 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101b37a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101b37d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1101b380:;
  /* 1101b380 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101b384 jae 0x1101b3a4 */
  if (!C.cf) goto L_1101b3a4;
  /* 1101b386 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101b389 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101b38c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101b38f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101b392 mov cx, word ptr [ecx + eax*2 + 0x1103eebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x1103eebc)));
  /* 1101b39a mov word ptr [edx*2 + 0x11041d20], cx */
  w16((uint32_t)(EDX*2 + 0x11041d20), (CX));
  /* 1101b3a2 jmp 0x1101b377 */
  goto L_1101b377;
L_1101b3a4:;
  /* 1101b3a4 call 0x1101b6b0 */
  push32(0x1101b3a9u); f_1101b6b0();
  /* 1101b3a9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1101b3ab call 0x11018bd0 */
  push32(0x1101b3b0u); f_11018bd0();
  /* 1101b3b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101b3b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101b3b5 jmp 0x1101b540 */
  goto L_1101b540;
L_1101b3ba:;
  /* 1101b3ba jmp 0x1101b265 */
  goto L_1101b265;
L_1101b3bf:;
  /* 1101b3bf lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 1101b3c2 push edx */
  push32((uint32_t)(EDX));
  /* 1101b3c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101b3c6 push eax */
  push32((uint32_t)(EAX));
  /* 1101b3c7 call dword ptr [0x1104331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104331c))), 0x1101b3cdu);
  /* 1101b3cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101b3d0 jne 0x1101b512 */
  if (!C.zf) goto L_1101b512;
  /* 1101b3d6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1101b3dd jmp 0x1101b3e8 */
  goto L_1101b3e8;
L_1101b3df:;
  /* 1101b3df mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101b3e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101b3e5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1101b3e8:;
  /* 1101b3e8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101b3ef jae 0x1101b3fd */
  if (!C.cf) goto L_1101b3fd;
  /* 1101b3f1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101b3f4 mov byte ptr [edx + 0x11041e40], 0 */
  w8((uint32_t)(EDX + 0x11041e40), (0x0u));
  /* 1101b3fb jmp 0x1101b3df */
  goto L_1101b3df;
L_1101b3fd:;
  /* 1101b3fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101b400 mov dword ptr [0x11041ca4], eax */
  w32((uint32_t)(0x11041ca4), (EAX));
  /* 1101b405 mov dword ptr [0x11041f44], 0 */
  w32((uint32_t)(0x11041f44), (0x0u));
  /* 1101b40f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101b413 jbe 0x1101b4ce */
  if ((C.cf||C.zf)) goto L_1101b4ce;
  /* 1101b419 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1101b41c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1101b41f jmp 0x1101b42a */
  goto L_1101b42a;
L_1101b421:;
  /* 1101b421 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1101b424 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101b427 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1101b42a:;
  /* 1101b42a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1101b42d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1101b42f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1101b431 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1101b433 je 0x1101b47c */
  if (C.zf) goto L_1101b47c;
  /* 1101b435 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1101b438 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101b43a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1101b43d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101b43f je 0x1101b47c */
  if (C.zf) goto L_1101b47c;
  /* 1101b441 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1101b444 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1101b446 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1101b448 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1101b44b jmp 0x1101b456 */
  goto L_1101b456;
L_1101b44d:;
  /* 1101b44d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101b450 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101b453 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1101b456:;
  /* 1101b456 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1101b459 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1101b45b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1101b45e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101b461 ja 0x1101b47a */
  if ((!C.cf&&!C.zf)) goto L_1101b47a;
  /* 1101b463 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101b466 mov cl, byte ptr [eax + 0x11041e41] */
  CL = (r8((uint32_t)(EAX + 0x11041e41)));
  /* 1101b46c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1101b46f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101b472 mov byte ptr [edx + 0x11041e41], cl */
  w8((uint32_t)(EDX + 0x11041e41), (CL));
  /* 1101b478 jmp 0x1101b44d */
  goto L_1101b44d;
L_1101b47a:;
  /* 1101b47a jmp 0x1101b421 */
  goto L_1101b421;
L_1101b47c:;
  /* 1101b47c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1101b483 jmp 0x1101b48e */
  goto L_1101b48e;
L_1101b485:;
  /* 1101b485 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101b488 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101b48b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1101b48e:;
  /* 1101b48e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101b495 jae 0x1101b4ae */
  if (!C.cf) goto L_1101b4ae;
  /* 1101b497 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101b49a mov dl, byte ptr [ecx + 0x11041e41] */
  DL = (r8((uint32_t)(ECX + 0x11041e41)));
  /* 1101b4a0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1101b4a3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101b4a6 mov byte ptr [eax + 0x11041e41], dl */
  w8((uint32_t)(EAX + 0x11041e41), (DL));
  /* 1101b4ac jmp 0x1101b485 */
  goto L_1101b485;
L_1101b4ae:;
  /* 1101b4ae mov ecx, dword ptr [0x11041ca4] */
  ECX = (r32((uint32_t)(0x11041ca4)));
  /* 1101b4b4 push ecx */
  push32((uint32_t)(ECX));
  /* 1101b4b5 call 0x1101b5b0 */
  push32(0x1101b4bau); f_1101b5b0();
  /* 1101b4ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101b4bd mov dword ptr [0x11041f44], eax */
  w32((uint32_t)(0x11041f44), (EAX));
  /* 1101b4c2 mov dword ptr [0x11041d2c], 1 */
  w32((uint32_t)(0x11041d2c), (0x1u));
  /* 1101b4cc jmp 0x1101b4d8 */
  goto L_1101b4d8;
L_1101b4ce:;
  /* 1101b4ce mov dword ptr [0x11041d2c], 0 */
  w32((uint32_t)(0x11041d2c), (0x0u));
L_1101b4d8:;
  /* 1101b4d8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1101b4df jmp 0x1101b4ea */
  goto L_1101b4ea;
L_1101b4e1:;
  /* 1101b4e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101b4e4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101b4e7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1101b4ea:;
  /* 1101b4ea cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101b4ee jae 0x1101b4ff */
  if (!C.cf) goto L_1101b4ff;
  /* 1101b4f0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101b4f3 mov word ptr [eax*2 + 0x11041d20], 0 */
  w16((uint32_t)(EAX*2 + 0x11041d20), (0x0u));
  /* 1101b4fd jmp 0x1101b4e1 */
  goto L_1101b4e1;
L_1101b4ff:;
  /* 1101b4ff call 0x1101b6b0 */
  push32(0x1101b504u); f_1101b6b0();
  /* 1101b504 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1101b506 call 0x11018bd0 */
  push32(0x1101b50bu); f_11018bd0();
  /* 1101b50b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101b50e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101b510 jmp 0x1101b540 */
  goto L_1101b540;
L_1101b512:;
  /* 1101b512 cmp dword ptr [0x110407c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110407c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101b519 je 0x1101b533 */
  if (C.zf) goto L_1101b533;
  /* 1101b51b call 0x1101b630 */
  push32(0x1101b520u); f_1101b630();
  /* 1101b520 call 0x1101b6b0 */
  push32(0x1101b525u); f_1101b6b0();
  /* 1101b525 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1101b527 call 0x11018bd0 */
  push32(0x1101b52cu); f_11018bd0();
  /* 1101b52c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101b52f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101b531 jmp 0x1101b540 */
  goto L_1101b540;
L_1101b533:;
  /* 1101b533 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1101b535 call 0x11018bd0 */
  push32(0x1101b53au); f_11018bd0();
  /* 1101b53a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101b53d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1101b540:;
  /* 1101b540 mov esp, ebp */
  ESP = (EBP);
  /* 1101b542 pop ebp */
  EBP = (pop32());
  /* 1101b543 ret  */
  ESPCHK(0x1101b200u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x1101b550 (89 bytes, 21 insns) */
void f_1101b550(void) {
  FTRACE(0x1101b550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101b550 push ebp */
  push32((uint32_t)(EBP));
  /* 1101b551 mov ebp, esp */
  EBP = (ESP);
  /* 1101b553 mov dword ptr [0x110407c0], 0 */
  w32((uint32_t)(0x110407c0), (0x0u));
  /* 1101b55d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101b561 jne 0x1101b575 */
  if (!C.zf) goto L_1101b575;
  /* 1101b563 mov dword ptr [0x110407c0], 1 */
  w32((uint32_t)(0x110407c0), (0x1u));
  /* 1101b56d call dword ptr [0x11043314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043314))), 0x1101b573u);
  /* 1101b573 jmp 0x1101b5a7 */
  goto L_1101b5a7;
L_1101b575:;
  /* 1101b575 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101b579 jne 0x1101b58d */
  if (!C.zf) goto L_1101b58d;
  /* 1101b57b mov dword ptr [0x110407c0], 1 */
  w32((uint32_t)(0x110407c0), (0x1u));
  /* 1101b585 call dword ptr [0x11043324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043324))), 0x1101b58bu);
  /* 1101b58b jmp 0x1101b5a7 */
  goto L_1101b5a7;
L_1101b58d:;
  /* 1101b58d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101b591 jne 0x1101b5a4 */
  if (!C.zf) goto L_1101b5a4;
  /* 1101b593 mov dword ptr [0x110407c0], 1 */
  w32((uint32_t)(0x110407c0), (0x1u));
  /* 1101b59d mov eax, dword ptr [0x110407e0] */
  EAX = (r32((uint32_t)(0x110407e0)));
  /* 1101b5a2 jmp 0x1101b5a7 */
  goto L_1101b5a7;
L_1101b5a4:;
  /* 1101b5a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1101b5a7:;
  /* 1101b5a7 pop ebp */
  EBP = (pop32());
  /* 1101b5a8 ret  */
  ESPCHK(0x1101b550u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5b0 @ 0x1101b5b0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_1101b5b0(void) {
  FTRACE(0x1101b5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101b5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1101b5b1 mov ebp, esp */
  EBP = (ESP);
  /* 1101b5b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1101b5b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101b5b7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1101b5ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101b5bd sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101b5c3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1101b5c6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101b5ca ja 0x1101b5fa */
  if ((!C.cf&&!C.zf)) goto L_1101b5fa;
  /* 1101b5cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101b5cf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1101b5d1 mov dl, byte ptr [eax + 0x1101b614] */
  DL = (r8((uint32_t)(EAX + 0x1101b614)));
  /* 1101b5d7 jmp dword ptr [edx*4 + 0x1101b600] */
  switch (EDX) {
    case 0: goto L_1101b5de;
    case 1: goto L_1101b5e5;
    case 2: goto L_1101b5ec;
    case 3: goto L_1101b5f3;
    case 4: goto L_1101b5fa;
    default: x86_unimpl("switch@0x1101b5d7 out of table"); return;
  }
L_1101b5de:;
  /* 1101b5de mov eax, 0x411 */
  EAX = (0x411u);
  /* 1101b5e3 jmp 0x1101b5fc */
  goto L_1101b5fc;
L_1101b5e5:;
  /* 1101b5e5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1101b5ea jmp 0x1101b5fc */
  goto L_1101b5fc;
L_1101b5ec:;
  /* 1101b5ec mov eax, 0x412 */
  EAX = (0x412u);
  /* 1101b5f1 jmp 0x1101b5fc */
  goto L_1101b5fc;
L_1101b5f3:;
  /* 1101b5f3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 1101b5f8 jmp 0x1101b5fc */
  goto L_1101b5fc;
L_1101b5fa:;
  /* 1101b5fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1101b5fc:;
  /* 1101b5fc mov esp, ebp */
  ESP = (EBP);
  /* 1101b5fe pop ebp */
  EBP = (pop32());
  /* 1101b5ff ret  */
  ESPCHK(0x1101b5b0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x1101b630 (116 bytes, 29 insns) */
void f_1101b630(void) {
  FTRACE(0x1101b630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101b630 push ebp */
  push32((uint32_t)(EBP));
  /* 1101b631 mov ebp, esp */
  EBP = (ESP);
  /* 1101b633 push ecx */
  push32((uint32_t)(ECX));
  /* 1101b634 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1101b63b jmp 0x1101b646 */
  goto L_1101b646;
L_1101b63d:;
  /* 1101b63d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101b640 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101b643 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1101b646:;
  /* 1101b646 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101b64d jge 0x1101b65b */
  if ((C.sf==C.of)) goto L_1101b65b;
  /* 1101b64f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101b652 mov byte ptr [ecx + 0x11041e40], 0 */
  w8((uint32_t)(ECX + 0x11041e40), (0x0u));
  /* 1101b659 jmp 0x1101b63d */
  goto L_1101b63d;
L_1101b65b:;
  /* 1101b65b mov dword ptr [0x11041ca4], 0 */
  w32((uint32_t)(0x11041ca4), (0x0u));
  /* 1101b665 mov dword ptr [0x11041d2c], 0 */
  w32((uint32_t)(0x11041d2c), (0x0u));
  /* 1101b66f mov dword ptr [0x11041f44], 0 */
  w32((uint32_t)(0x11041f44), (0x0u));
  /* 1101b679 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1101b680 jmp 0x1101b68b */
  goto L_1101b68b;
L_1101b682:;
  /* 1101b682 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101b685 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101b688 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1101b68b:;
  /* 1101b68b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101b68f jge 0x1101b6a0 */
  if ((C.sf==C.of)) goto L_1101b6a0;
  /* 1101b691 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101b694 mov word ptr [eax*2 + 0x11041d20], 0 */
  w16((uint32_t)(EAX*2 + 0x11041d20), (0x0u));
  /* 1101b69e jmp 0x1101b682 */
  goto L_1101b682;
L_1101b6a0:;
  /* 1101b6a0 mov esp, ebp */
  ESP = (EBP);
  /* 1101b6a2 pop ebp */
  EBP = (pop32());
  /* 1101b6a3 ret  */
  ESPCHK(0x1101b630u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6b0 @ 0x1101b6b0 (770 bytes, 175 insns) */
void f_1101b6b0(void) {
  FTRACE(0x1101b6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101b6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1101b6b1 mov ebp, esp */
  EBP = (ESP);
  /* 1101b6b3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101b6b9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1101b6bf push eax */
  push32((uint32_t)(EAX));
  /* 1101b6c0 mov ecx, dword ptr [0x11041ca4] */
  ECX = (r32((uint32_t)(0x11041ca4)));
  /* 1101b6c6 push ecx */
  push32((uint32_t)(ECX));
  /* 1101b6c7 call dword ptr [0x1104331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104331c))), 0x1101b6cdu);
  /* 1101b6cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101b6d0 jne 0x1101b8e9 */
  if (!C.zf) goto L_1101b8e9;
  /* 1101b6d6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1101b6e0 jmp 0x1101b6f1 */
  goto L_1101b6f1;
L_1101b6e2:;
  /* 1101b6e2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1101b6e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101b6eb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1101b6f1:;
  /* 1101b6f1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101b6fb jae 0x1101b712 */
  if (!C.cf) goto L_1101b712;
  /* 1101b6fd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1101b703 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 1101b709 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 1101b710 jmp 0x1101b6e2 */
  goto L_1101b6e2;
L_1101b712:;
  /* 1101b712 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 1101b719 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1101b71f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1101b722 jmp 0x1101b72d */
  goto L_1101b72d;
L_1101b724:;
  /* 1101b724 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101b727 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101b72a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1101b72d:;
  /* 1101b72d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101b730 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1101b732 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1101b734 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101b736 je 0x1101b778 */
  if (C.zf) goto L_1101b778;
  /* 1101b738 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101b73b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1101b73d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1101b73f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 1101b745 jmp 0x1101b756 */
  goto L_1101b756;
L_1101b747:;
  /* 1101b747 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1101b74d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101b750 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1101b756:;
  /* 1101b756 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101b759 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1101b75b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1101b75e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101b764 ja 0x1101b776 */
  if ((!C.cf&&!C.zf)) goto L_1101b776;
  /* 1101b766 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1101b76c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 1101b774 jmp 0x1101b747 */
  goto L_1101b747;
L_1101b776:;
  /* 1101b776 jmp 0x1101b724 */
  goto L_1101b724;
L_1101b778:;
  /* 1101b778 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101b77a mov eax, dword ptr [0x11041f44] */
  EAX = (r32((uint32_t)(0x11041f44)));
  /* 1101b77f push eax */
  push32((uint32_t)(EAX));
  /* 1101b780 mov ecx, dword ptr [0x11041ca4] */
  ECX = (r32((uint32_t)(0x11041ca4)));
  /* 1101b786 push ecx */
  push32((uint32_t)(ECX));
  /* 1101b787 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1101b78d push edx */
  push32((uint32_t)(EDX));
  /* 1101b78e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1101b793 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1101b799 push eax */
  push32((uint32_t)(EAX));
  /* 1101b79a push 1 */
  push32((uint32_t)(0x1u));
  /* 1101b79c call 0x1101d360 */
  push32(0x1101b7a1u); f_1101d360();
  /* 1101b7a1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101b7a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101b7a6 mov ecx, dword ptr [0x11041ca4] */
  ECX = (r32((uint32_t)(0x11041ca4)));
  /* 1101b7ac push ecx */
  push32((uint32_t)(ECX));
  /* 1101b7ad push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1101b7b2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1101b7b8 push edx */
  push32((uint32_t)(EDX));
  /* 1101b7b9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1101b7be lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1101b7c4 push eax */
  push32((uint32_t)(EAX));
  /* 1101b7c5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1101b7ca mov ecx, dword ptr [0x11041f44] */
  ECX = (r32((uint32_t)(0x11041f44)));
  /* 1101b7d0 push ecx */
  push32((uint32_t)(ECX));
  /* 1101b7d1 call 0x1101d520 */
  push32(0x1101b7d6u); f_1101d520();
  /* 1101b7d6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101b7d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101b7db mov edx, dword ptr [0x11041ca4] */
  EDX = (r32((uint32_t)(0x11041ca4)));
  /* 1101b7e1 push edx */
  push32((uint32_t)(EDX));
  /* 1101b7e2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1101b7e7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1101b7ed push eax */
  push32((uint32_t)(EAX));
  /* 1101b7ee push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1101b7f3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 1101b7f9 push ecx */
  push32((uint32_t)(ECX));
  /* 1101b7fa push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1101b7ff mov edx, dword ptr [0x11041f44] */
  EDX = (r32((uint32_t)(0x11041f44)));
  /* 1101b805 push edx */
  push32((uint32_t)(EDX));
  /* 1101b806 call 0x1101d520 */
  push32(0x1101b80bu); f_1101d520();
  /* 1101b80b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101b80e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1101b818 jmp 0x1101b829 */
  goto L_1101b829;
L_1101b81a:;
  /* 1101b81a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1101b820 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101b823 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1101b829:;
  /* 1101b829 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101b833 jae 0x1101b8e4 */
  if (!C.cf) goto L_1101b8e4;
  /* 1101b839 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1101b83f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1101b841 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 1101b849 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1101b84c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101b84e je 0x1101b886 */
  if (C.zf) goto L_1101b886;
  /* 1101b850 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1101b856 mov cl, byte ptr [eax + 0x11041e41] */
  CL = (r8((uint32_t)(EAX + 0x11041e41)));
  /* 1101b85c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1101b85f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1101b865 mov byte ptr [edx + 0x11041e41], cl */
  w8((uint32_t)(EDX + 0x11041e41), (CL));
  /* 1101b86b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1101b871 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1101b877 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1101b87e mov byte ptr [eax + 0x11041d40], dl */
  w8((uint32_t)(EAX + 0x11041d40), (DL));
  /* 1101b884 jmp 0x1101b8df */
  goto L_1101b8df;
L_1101b886:;
  /* 1101b886 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1101b88c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1101b88e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 1101b896 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1101b899 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1101b89b je 0x1101b8d2 */
  if (C.zf) goto L_1101b8d2;
  /* 1101b89d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1101b8a3 mov al, byte ptr [edx + 0x11041e41] */
  AL = (r8((uint32_t)(EDX + 0x11041e41)));
  /* 1101b8a9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1101b8ab mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1101b8b1 mov byte ptr [ecx + 0x11041e41], al */
  w8((uint32_t)(ECX + 0x11041e41), (AL));
  /* 1101b8b7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1101b8bd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1101b8c3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1101b8ca mov byte ptr [edx + 0x11041d40], cl */
  w8((uint32_t)(EDX + 0x11041d40), (CL));
  /* 1101b8d0 jmp 0x1101b8df */
  goto L_1101b8df;
L_1101b8d2:;
  /* 1101b8d2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1101b8d8 mov byte ptr [edx + 0x11041d40], 0 */
  w8((uint32_t)(EDX + 0x11041d40), (0x0u));
L_1101b8df:;
  /* 1101b8df jmp 0x1101b81a */
  goto L_1101b81a;
L_1101b8e4:;
  /* 1101b8e4 jmp 0x1101b9ae */
  goto L_1101b9ae;
L_1101b8e9:;
  /* 1101b8e9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1101b8f3 jmp 0x1101b904 */
  goto L_1101b904;
L_1101b8f5:;
  /* 1101b8f5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1101b8fb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101b8fe mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1101b904:;
  /* 1101b904 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101b90e jae 0x1101b9ae */
  if (!C.cf) goto L_1101b9ae;
  /* 1101b914 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101b91b jb 0x1101b958 */
  if (C.cf) goto L_1101b958;
  /* 1101b91d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101b924 ja 0x1101b958 */
  if ((!C.cf&&!C.zf)) goto L_1101b958;
  /* 1101b926 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1101b92c mov dl, byte ptr [ecx + 0x11041e41] */
  DL = (r8((uint32_t)(ECX + 0x11041e41)));
  /* 1101b932 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1101b935 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1101b93b mov byte ptr [eax + 0x11041e41], dl */
  w8((uint32_t)(EAX + 0x11041e41), (DL));
  /* 1101b941 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1101b947 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101b94a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1101b950 mov byte ptr [edx + 0x11041d40], cl */
  w8((uint32_t)(EDX + 0x11041d40), (CL));
  /* 1101b956 jmp 0x1101b9a9 */
  goto L_1101b9a9;
L_1101b958:;
  /* 1101b958 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101b95f jb 0x1101b99c */
  if (C.cf) goto L_1101b99c;
  /* 1101b961 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101b968 ja 0x1101b99c */
  if ((!C.cf&&!C.zf)) goto L_1101b99c;
  /* 1101b96a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1101b970 mov cl, byte ptr [eax + 0x11041e41] */
  CL = (r8((uint32_t)(EAX + 0x11041e41)));
  /* 1101b976 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1101b979 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1101b97f mov byte ptr [edx + 0x11041e41], cl */
  w8((uint32_t)(EDX + 0x11041e41), (CL));
  /* 1101b985 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1101b98b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101b98e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1101b994 mov byte ptr [ecx + 0x11041d40], al */
  w8((uint32_t)(ECX + 0x11041d40), (AL));
  /* 1101b99a jmp 0x1101b9a9 */
  goto L_1101b9a9;
L_1101b99c:;
  /* 1101b99c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1101b9a2 mov byte ptr [edx + 0x11041d40], 0 */
  w8((uint32_t)(EDX + 0x11041d40), (0x0u));
L_1101b9a9:;
  /* 1101b9a9 jmp 0x1101b8f5 */
  goto L_1101b8f5;
L_1101b9ae:;
  /* 1101b9ae mov esp, ebp */
  ESP = (EBP);
  /* 1101b9b0 pop ebp */
  EBP = (pop32());
  /* 1101b9b1 ret  */
  ESPCHK(0x1101b6b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9c0 @ 0x1101b9c0 (23 bytes, 9 insns) */
void f_1101b9c0(void) {
  FTRACE(0x1101b9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101b9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1101b9c1 mov ebp, esp */
  EBP = (ESP);
  /* 1101b9c3 cmp dword ptr [0x11041d2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11041d2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101b9ca je 0x1101b9d3 */
  if (C.zf) goto L_1101b9d3;
  /* 1101b9cc mov eax, dword ptr [0x11041ca4] */
  EAX = (r32((uint32_t)(0x11041ca4)));
  /* 1101b9d1 jmp 0x1101b9d5 */
  goto L_1101b9d5;
L_1101b9d3:;
  /* 1101b9d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1101b9d5:;
  /* 1101b9d5 pop ebp */
  EBP = (pop32());
  /* 1101b9d6 ret  */
  ESPCHK(0x1101b9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9e0 @ 0x1101b9e0 (34 bytes, 10 insns) */
void f_1101b9e0(void) {
  FTRACE(0x1101b9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101b9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1101b9e1 mov ebp, esp */
  EBP = (ESP);
  /* 1101b9e3 cmp dword ptr [0x110420f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110420f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101b9ea jne 0x1101ba00 */
  if (!C.zf) goto L_1101ba00;
  /* 1101b9ec push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1101b9ee call 0x1101b200 */
  push32(0x1101b9f3u); f_1101b200();
  /* 1101b9f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101b9f6 mov dword ptr [0x110420f0], 1 */
  w32((uint32_t)(0x110420f0), (0x1u));
L_1101ba00:;
  /* 1101ba00 pop ebp */
  EBP = (pop32());
  /* 1101ba01 ret  */
  ESPCHK(0x1101b9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba10 @ 0x1101ba10 (664 bytes, 261 insns) [15 switch table(s)] */
void f_1101ba10(void) {
  FTRACE(0x1101ba10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101ba10 push ebp */
  push32((uint32_t)(EBP));
  /* 1101ba11 mov ebp, esp */
  EBP = (ESP);
  /* 1101ba13 push edi */
  push32((uint32_t)(EDI));
  /* 1101ba14 push esi */
  push32((uint32_t)(ESI));
  /* 1101ba15 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1101ba18 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1101ba1b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1101ba1e mov eax, ecx */
  EAX = (ECX);
  /* 1101ba20 mov edx, ecx */
  EDX = (ECX);
  /* 1101ba22 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ba24 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ba26 jbe 0x1101ba30 */
  if ((C.cf||C.zf)) goto L_1101ba30;
  /* 1101ba28 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ba2a jb 0x1101bba8 */
  if (C.cf) goto L_1101bba8;
L_1101ba30:;
  /* 1101ba30 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1101ba36 jne 0x1101ba4c */
  if (!C.zf) goto L_1101ba4c;
  /* 1101ba38 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1101ba3b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1101ba3e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ba41 jb 0x1101ba6c */
  if (C.cf) goto L_1101ba6c;
  /* 1101ba43 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1101ba45 jmp dword ptr [edx*4 + 0x1101bb58] */
  switch (EDX) {
    case 0: goto L_1101bb68;
    case 1: goto L_1101bb70;
    case 2: goto L_1101bb7c;
    case 3: goto L_1101bb90;
    default: x86_unimpl("switch@0x1101ba45 out of table"); return;
  }
L_1101ba4c:;
  /* 1101ba4c mov eax, edi */
  EAX = (EDI);
  /* 1101ba4e mov edx, 3 */
  EDX = (0x3u);
  /* 1101ba53 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101ba56 jb 0x1101ba64 */
  if (C.cf) goto L_1101ba64;
  /* 1101ba58 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1101ba5b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ba5d jmp dword ptr [eax*4 + 0x1101ba70] */
  switch (EAX) {
    case 1: goto L_1101ba80;
    case 2: goto L_1101baac;
    case 3: goto L_1101bad0;
    default: x86_unimpl("switch@0x1101ba5d out of table"); return;
  }
L_1101ba64:;
  /* 1101ba64 jmp dword ptr [ecx*4 + 0x1101bb68] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1101bb68)))); return;
  /* 1101ba6b nop  */
  /* nop */
L_1101ba6c:;
  /* 1101ba6c jmp dword ptr [ecx*4 + 0x1101baec] */
  switch (ECX) {
    case 0: goto L_1101bb4f;
    case 1: goto L_1101bb3c;
    case 2: goto L_1101bb34;
    case 3: goto L_1101bb2c;
    case 4: goto L_1101bb24;
    case 5: goto L_1101bb1c;
    case 6: goto L_1101bb14;
    case 7: goto L_1101bb0c;
    default: x86_unimpl("switch@0x1101ba6c out of table"); return;
  }
  /* 1101ba73 nop  */
  /* nop */
L_1101ba80:;
  /* 1101ba80 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1101ba82 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1101ba84 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1101ba86 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1101ba89 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1101ba8c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1101ba8f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1101ba92 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1101ba95 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ba98 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ba9b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ba9e jb 0x1101ba6c */
  if (C.cf) goto L_1101ba6c;
  /* 1101baa0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1101baa2 jmp dword ptr [edx*4 + 0x1101bb58] */
  switch (EDX) {
    case 0: goto L_1101bb68;
    case 1: goto L_1101bb70;
    case 2: goto L_1101bb7c;
    case 3: goto L_1101bb90;
    default: x86_unimpl("switch@0x1101baa2 out of table"); return;
  }
  /* 1101baa9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1101baac:;
  /* 1101baac and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1101baae mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1101bab0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1101bab2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1101bab5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1101bab8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1101babb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1101babe add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1101bac1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101bac4 jb 0x1101ba6c */
  if (C.cf) goto L_1101ba6c;
  /* 1101bac6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1101bac8 jmp dword ptr [edx*4 + 0x1101bb58] */
  switch (EDX) {
    case 0: goto L_1101bb68;
    case 1: goto L_1101bb70;
    case 2: goto L_1101bb7c;
    case 3: goto L_1101bb90;
    default: x86_unimpl("switch@0x1101bac8 out of table"); return;
  }
  /* 1101bacf nop  */
  /* nop */
L_1101bad0:;
  /* 1101bad0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1101bad2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1101bad4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1101bad6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1101bad7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1101bada inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1101badb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101bade jb 0x1101ba6c */
  if (C.cf) goto L_1101ba6c;
  /* 1101bae0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1101bae2 jmp dword ptr [edx*4 + 0x1101bb58] */
  switch (EDX) {
    case 0: goto L_1101bb68;
    case 1: goto L_1101bb70;
    case 2: goto L_1101bb7c;
    case 3: goto L_1101bb90;
    default: x86_unimpl("switch@0x1101bae2 out of table"); return;
  }
  /* 1101bae9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1101bb0c:;
  /* 1101bb0c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1101bb10 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1101bb14:;
  /* 1101bb14 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1101bb18 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1101bb1c:;
  /* 1101bb1c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1101bb20 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1101bb24:;
  /* 1101bb24 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1101bb28 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1101bb2c:;
  /* 1101bb2c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1101bb30 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1101bb34:;
  /* 1101bb34 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1101bb38 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1101bb3c:;
  /* 1101bb3c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1101bb40 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1101bb44 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1101bb4b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1101bb4d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1101bb4f:;
  /* 1101bb4f jmp dword ptr [edx*4 + 0x1101bb58] */
  switch (EDX) {
    case 0: goto L_1101bb68;
    case 1: goto L_1101bb70;
    case 2: goto L_1101bb7c;
    case 3: goto L_1101bb90;
    default: x86_unimpl("switch@0x1101bb4f out of table"); return;
  }
  /* 1101bb56 mov edi, edi */
  EDI = (EDI);
L_1101bb68:;
  /* 1101bb68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101bb6b pop esi */
  ESI = (pop32());
  /* 1101bb6c pop edi */
  EDI = (pop32());
  /* 1101bb6d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1101bb6e ret  */
  ESPCHK(0x1101ba10u, _esp0);
  ESP += 4; return;
  /* 1101bb6f nop  */
  /* nop */
L_1101bb70:;
  /* 1101bb70 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1101bb72 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1101bb74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101bb77 pop esi */
  ESI = (pop32());
  /* 1101bb78 pop edi */
  EDI = (pop32());
  /* 1101bb79 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1101bb7a ret  */
  ESPCHK(0x1101ba10u, _esp0);
  ESP += 4; return;
  /* 1101bb7b nop  */
  /* nop */
L_1101bb7c:;
  /* 1101bb7c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1101bb7e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1101bb80 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1101bb83 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1101bb86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101bb89 pop esi */
  ESI = (pop32());
  /* 1101bb8a pop edi */
  EDI = (pop32());
  /* 1101bb8b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1101bb8c ret  */
  ESPCHK(0x1101ba10u, _esp0);
  ESP += 4; return;
  /* 1101bb8d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1101bb90:;
  /* 1101bb90 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1101bb92 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1101bb94 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1101bb97 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1101bb9a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1101bb9d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1101bba0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101bba3 pop esi */
  ESI = (pop32());
  /* 1101bba4 pop edi */
  EDI = (pop32());
  /* 1101bba5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1101bba6 ret  */
  ESPCHK(0x1101ba10u, _esp0);
  ESP += 4; return;
  /* 1101bba7 nop  */
  /* nop */
L_1101bba8:;
  /* 1101bba8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1101bbac lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1101bbb0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1101bbb6 jne 0x1101bbdc */
  if (!C.zf) goto L_1101bbdc;
  /* 1101bbb8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1101bbbb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1101bbbe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101bbc1 jb 0x1101bbd0 */
  if (C.cf) goto L_1101bbd0;
  /* 1101bbc3 std  */
  C.df=1;
  /* 1101bbc4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1101bbc6 cld  */
  C.df=0;
  /* 1101bbc7 jmp dword ptr [edx*4 + 0x1101bcf0] */
  switch (EDX) {
    case 0: goto L_1101bd00;
    case 1: goto L_1101bd08;
    case 2: goto L_1101bd18;
    case 3: goto L_1101bd2c;
    default: x86_unimpl("switch@0x1101bbc7 out of table"); return;
  }
  /* 1101bbce mov edi, edi */
  EDI = (EDI);
L_1101bbd0:;
  /* 1101bbd0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1101bbd2 jmp dword ptr [ecx*4 + 0x1101bca0] */
  switch (ECX) {
    case 0: goto L_1101bce7;
    default: x86_unimpl("switch@0x1101bbd2 out of table"); return;
  }
  /* 1101bbd9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1101bbdc:;
  /* 1101bbdc mov eax, edi */
  EAX = (EDI);
  /* 1101bbde mov edx, 3 */
  EDX = (0x3u);
  /* 1101bbe3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101bbe6 jb 0x1101bbf4 */
  if (C.cf) goto L_1101bbf4;
  /* 1101bbe8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1101bbeb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101bbed jmp dword ptr [eax*4 + 0x1101bbf8] */
  switch (EAX) {
    case 1: goto L_1101bc08;
    case 2: goto L_1101bc28;
    case 3: goto L_1101bc50;
    default: x86_unimpl("switch@0x1101bbed out of table"); return;
  }
L_1101bbf4:;
  /* 1101bbf4 jmp dword ptr [ecx*4 + 0x1101bcf0] */
  switch (ECX) {
    case 0: goto L_1101bd00;
    case 1: goto L_1101bd08;
    case 2: goto L_1101bd18;
    case 3: goto L_1101bd2c;
    default: x86_unimpl("switch@0x1101bbf4 out of table"); return;
  }
  /* 1101bbfb nop  */
  /* nop */
L_1101bc08:;
  /* 1101bc08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1101bc0b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1101bc0d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1101bc10 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1101bc11 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1101bc14 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1101bc15 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101bc18 jb 0x1101bbd0 */
  if (C.cf) goto L_1101bbd0;
  /* 1101bc1a std  */
  C.df=1;
  /* 1101bc1b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1101bc1d cld  */
  C.df=0;
  /* 1101bc1e jmp dword ptr [edx*4 + 0x1101bcf0] */
  switch (EDX) {
    case 0: goto L_1101bd00;
    case 1: goto L_1101bd08;
    case 2: goto L_1101bd18;
    case 3: goto L_1101bd2c;
    default: x86_unimpl("switch@0x1101bc1e out of table"); return;
  }
  /* 1101bc25 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1101bc28:;
  /* 1101bc28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1101bc2b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1101bc2d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1101bc30 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1101bc33 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1101bc36 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1101bc39 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101bc3c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101bc3f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101bc42 jb 0x1101bbd0 */
  if (C.cf) goto L_1101bbd0;
  /* 1101bc44 std  */
  C.df=1;
  /* 1101bc45 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1101bc47 cld  */
  C.df=0;
  /* 1101bc48 jmp dword ptr [edx*4 + 0x1101bcf0] */
  switch (EDX) {
    case 0: goto L_1101bd00;
    case 1: goto L_1101bd08;
    case 2: goto L_1101bd18;
    case 3: goto L_1101bd2c;
    default: x86_unimpl("switch@0x1101bc48 out of table"); return;
  }
  /* 1101bc4f nop  */
  /* nop */
L_1101bc50:;
  /* 1101bc50 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1101bc53 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1101bc55 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1101bc58 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1101bc5b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1101bc5e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1101bc61 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1101bc64 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1101bc67 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101bc6a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101bc6d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101bc70 jb 0x1101bbd0 */
  if (C.cf) goto L_1101bbd0;
  /* 1101bc76 std  */
  C.df=1;
  /* 1101bc77 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1101bc79 cld  */
  C.df=0;
  /* 1101bc7a jmp dword ptr [edx*4 + 0x1101bcf0] */
  switch (EDX) {
    case 0: goto L_1101bd00;
    case 1: goto L_1101bd08;
    case 2: goto L_1101bd18;
    case 3: goto L_1101bd2c;
    default: x86_unimpl("switch@0x1101bc7a out of table"); return;
  }
  /* 1101bc81 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1101bc84 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 1101bc85 mov esp, 0xbcac1101 */
  ESP = (0xbcac1101u);
  /* 1101bc8a add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1101bc8c mov ah, 0xbc */
  AH = (0xbcu);
  /* 1101bc8e add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1101bc90 mov esp, 0xc41101bc */
  ESP = (0xc41101bcu);
  /* 1101bc95 mov esp, 0xbccc1101 */
  ESP = (0xbccc1101u);
  /* 1101bc9a add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1101bc9c aam 0xbc */
  x86_unimpl("aam @ 0x1101bc9c");
  /* 1101bc9e add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1101bca4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1101bca8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1101bcac mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1101bcb0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1101bcb4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1101bcb8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1101bcbc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1101bcc0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1101bcc4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1101bcc8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1101bccc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1101bcd0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1101bcd4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1101bcd8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1101bcdc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1101bce3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1101bce5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1101bce7:;
  /* 1101bce7 jmp dword ptr [edx*4 + 0x1101bcf0] */
  switch (EDX) {
    case 0: goto L_1101bd00;
    case 1: goto L_1101bd08;
    case 2: goto L_1101bd18;
    case 3: goto L_1101bd2c;
    default: x86_unimpl("switch@0x1101bce7 out of table"); return;
  }
  /* 1101bcee mov edi, edi */
  EDI = (EDI);
L_1101bd00:;
  /* 1101bd00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101bd03 pop esi */
  ESI = (pop32());
  /* 1101bd04 pop edi */
  EDI = (pop32());
  /* 1101bd05 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1101bd06 ret  */
  ESPCHK(0x1101ba10u, _esp0);
  ESP += 4; return;
  /* 1101bd07 nop  */
  /* nop */
L_1101bd08:;
  /* 1101bd08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1101bd0b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1101bd0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101bd11 pop esi */
  ESI = (pop32());
  /* 1101bd12 pop edi */
  EDI = (pop32());
  /* 1101bd13 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1101bd14 ret  */
  ESPCHK(0x1101ba10u, _esp0);
  ESP += 4; return;
  /* 1101bd15 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1101bd18:;
  /* 1101bd18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1101bd1b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1101bd1e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1101bd21 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1101bd24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101bd27 pop esi */
  ESI = (pop32());
  /* 1101bd28 pop edi */
  EDI = (pop32());
  /* 1101bd29 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1101bd2a ret  */
  ESPCHK(0x1101ba10u, _esp0);
  ESP += 4; return;
  /* 1101bd2b nop  */
  /* nop */
L_1101bd2c:;
  /* 1101bd2c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1101bd2f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1101bd32 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1101bd35 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1101bd38 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1101bd3b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1101bd3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101bd41 pop esi */
  ESI = (pop32());
  /* 1101bd42 pop edi */
  EDI = (pop32());
  /* 1101bd43 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1101bd44 ret  */
  ESPCHK(0x1101ba10u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x1101bd50 (104 bytes, 43 insns) */
void f_1101bd50(void) {
  FTRACE(0x1101bd50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101bd50 push ebx */
  push32((uint32_t)(EBX));
  /* 1101bd51 push esi */
  push32((uint32_t)(ESI));
  /* 1101bd52 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1101bd56 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101bd58 jne 0x1101bd72 */
  if (!C.zf) goto L_1101bd72;
  /* 1101bd5a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1101bd5e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1101bd62 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1101bd64 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1101bd66 mov ebx, eax */
  EBX = (EAX);
  /* 1101bd68 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1101bd6c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1101bd6e mov edx, ebx */
  EDX = (EBX);
  /* 1101bd70 jmp 0x1101bdb3 */
  goto L_1101bdb3;
L_1101bd72:;
  /* 1101bd72 mov ecx, eax */
  ECX = (EAX);
  /* 1101bd74 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1101bd78 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1101bd7c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1101bd80:;
  /* 1101bd80 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1101bd82 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1101bd84 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1101bd86 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1101bd88 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1101bd8a jne 0x1101bd80 */
  if (!C.zf) goto L_1101bd80;
  /* 1101bd8c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1101bd8e mov esi, eax */
  ESI = (EAX);
  /* 1101bd90 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1101bd94 mov ecx, eax */
  ECX = (EAX);
  /* 1101bd96 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1101bd9a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1101bd9c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101bd9e jb 0x1101bdae */
  if (C.cf) goto L_1101bdae;
  /* 1101bda0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101bda4 ja 0x1101bdae */
  if ((!C.cf&&!C.zf)) goto L_1101bdae;
  /* 1101bda6 jb 0x1101bdaf */
  if (C.cf) goto L_1101bdaf;
  /* 1101bda8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101bdac jbe 0x1101bdaf */
  if ((C.cf||C.zf)) goto L_1101bdaf;
L_1101bdae:;
  /* 1101bdae dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1101bdaf:;
  /* 1101bdaf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1101bdb1 mov eax, esi */
  EAX = (ESI);
L_1101bdb3:;
  /* 1101bdb3 pop esi */
  ESI = (pop32());
  /* 1101bdb4 pop ebx */
  EBX = (pop32());
  /* 1101bdb5 ret 0x10 */
  ESPCHK(0x1101bd50u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1101bdc0 (117 bytes, 44 insns) */
void f_1101bdc0(void) {
  FTRACE(0x1101bdc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101bdc0 push ebx */
  push32((uint32_t)(EBX));
  /* 1101bdc1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1101bdc5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101bdc7 jne 0x1101bde1 */
  if (!C.zf) goto L_1101bde1;
  /* 1101bdc9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1101bdcd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1101bdd1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1101bdd3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1101bdd5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1101bdd9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1101bddb mov eax, edx */
  EAX = (EDX);
  /* 1101bddd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1101bddf jmp 0x1101be31 */
  goto L_1101be31;
L_1101bde1:;
  /* 1101bde1 mov ecx, eax */
  ECX = (EAX);
  /* 1101bde3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1101bde7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1101bdeb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1101bdef:;
  /* 1101bdef shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1101bdf1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1101bdf3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1101bdf5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1101bdf7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1101bdf9 jne 0x1101bdef */
  if (!C.zf) goto L_1101bdef;
  /* 1101bdfb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1101bdfd mov ecx, eax */
  ECX = (EAX);
  /* 1101bdff mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1101be03 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1101be04 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1101be08 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101be0a jb 0x1101be1a */
  if (C.cf) goto L_1101be1a;
  /* 1101be0c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101be10 ja 0x1101be1a */
  if ((!C.cf&&!C.zf)) goto L_1101be1a;
  /* 1101be12 jb 0x1101be22 */
  if (C.cf) goto L_1101be22;
  /* 1101be14 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101be18 jbe 0x1101be22 */
  if ((C.cf||C.zf)) goto L_1101be22;
L_1101be1a:;
  /* 1101be1a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101be1e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1101be22:;
  /* 1101be22 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101be26 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101be2a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1101be2c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1101be2e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1101be31:;
  /* 1101be31 pop ebx */
  EBX = (pop32());
  /* 1101be32 ret 0x10 */
  ESPCHK(0x1101bdc0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000be40 @ 0x1101be40 (628 bytes, 214 insns) */
void f_1101be40(void) {
  FTRACE(0x1101be40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101be40 push ebp */
  push32((uint32_t)(EBP));
  /* 1101be41 mov ebp, esp */
  EBP = (ESP);
  /* 1101be43 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101be46 push ebx */
  push32((uint32_t)(EBX));
  /* 1101be47 push esi */
  push32((uint32_t)(ESI));
  /* 1101be48 push edi */
  push32((uint32_t)(EDI));
L_1101be49:;
  /* 1101be49 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101be4d jne 0x1101be6d */
  if (!C.zf) goto L_1101be6d;
  /* 1101be4f push 0x1103c148 */
  push32((uint32_t)(0x1103c148u));
  /* 1101be54 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101be56 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1101be58 push 0x1103c13c */
  push32((uint32_t)(0x1103c13cu));
  /* 1101be5d push 2 */
  push32((uint32_t)(0x2u));
  /* 1101be5f call 0x110141f0 */
  push32(0x1101be64u); f_110141f0();
  /* 1101be64 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101be67 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101be6a jne 0x1101be6d */
  if (!C.zf) goto L_1101be6d;
  /* 1101be6c int3  */
  x86_unimpl("int3 @ 0x1101be6c");
L_1101be6d:;
  /* 1101be6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101be6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101be71 jne 0x1101be49 */
  if (!C.zf) goto L_1101be49;
  /* 1101be73 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101be76 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1101be79 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101be7c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1101be7f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1101be82 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101be85 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1101be88 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1101be8e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101be90 je 0x1101be9f */
  if (C.zf) goto L_1101be9f;
  /* 1101be92 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101be95 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1101be98 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1101be9b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1101be9d je 0x1101beb5 */
  if (C.zf) goto L_1101beb5;
L_1101be9f:;
  /* 1101be9f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101bea2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1101bea5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1101bea7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101beaa mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1101bead or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1101beb0 jmp 0x1101c0ad */
  goto L_1101c0ad;
L_1101beb5:;
  /* 1101beb5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101beb8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1101bebb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1101bebe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101bec0 je 0x1101bf0c */
  if (C.zf) goto L_1101bf0c;
  /* 1101bec2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101bec5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1101becc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101becf mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1101bed2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1101bed5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101bed7 je 0x1101bef5 */
  if (C.zf) goto L_1101bef5;
  /* 1101bed9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101bedc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101bedf mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1101bee2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1101bee4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101bee7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1101beea and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1101beed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101bef0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1101bef3 jmp 0x1101bf0c */
  goto L_1101bf0c;
L_1101bef5:;
  /* 1101bef5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101bef8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1101befb or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1101befe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101bf01 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1101bf04 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1101bf07 jmp 0x1101c0ad */
  goto L_1101c0ad;
L_1101bf0c:;
  /* 1101bf0c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101bf0f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1101bf12 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1101bf15 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101bf18 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1101bf1b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101bf1e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1101bf21 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1101bf24 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101bf27 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1101bf2a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101bf2d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1101bf34 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1101bf3b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101bf3e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1101bf41 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101bf44 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1101bf47 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1101bf4d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1101bf4f jne 0x1101bf7f */
  if (!C.zf) goto L_1101bf7f;
  /* 1101bf51 cmp dword ptr [ebp - 8], 0x1103f140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1103f140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101bf58 je 0x1101bf63 */
  if (C.zf) goto L_1101bf63;
  /* 1101bf5a cmp dword ptr [ebp - 8], 0x1103f160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1103f160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101bf61 jne 0x1101bf73 */
  if (!C.zf) goto L_1101bf73;
L_1101bf63:;
  /* 1101bf63 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101bf66 push edx */
  push32((uint32_t)(EDX));
  /* 1101bf67 call 0x1101ddb0 */
  push32(0x1101bf6cu); f_1101ddb0();
  /* 1101bf6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101bf6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101bf71 jne 0x1101bf7f */
  if (!C.zf) goto L_1101bf7f;
L_1101bf73:;
  /* 1101bf73 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101bf76 push eax */
  push32((uint32_t)(EAX));
  /* 1101bf77 call 0x1101dce0 */
  push32(0x1101bf7cu); f_1101dce0();
  /* 1101bf7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1101bf7f:;
  /* 1101bf7f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101bf82 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1101bf85 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1101bf8b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101bf8d je 0x1101c06b */
  if (C.zf) goto L_1101c06b;
L_1101bf93:;
  /* 1101bf93 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101bf96 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101bf99 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1101bf9b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101bf9e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101bfa0 jge 0x1101bfc3 */
  if ((C.sf==C.of)) goto L_1101bfc3;
  /* 1101bfa2 push 0x1103c0fc */
  push32((uint32_t)(0x1103c0fcu));
  /* 1101bfa7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101bfa9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1101bfae push 0x1103c13c */
  push32((uint32_t)(0x1103c13cu));
  /* 1101bfb3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1101bfb5 call 0x110141f0 */
  push32(0x1101bfbau); f_110141f0();
  /* 1101bfba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101bfbd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101bfc0 jne 0x1101bfc3 */
  if (!C.zf) goto L_1101bfc3;
  /* 1101bfc2 int3  */
  x86_unimpl("int3 @ 0x1101bfc2");
L_1101bfc3:;
  /* 1101bfc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101bfc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101bfc7 jne 0x1101bf93 */
  if (!C.zf) goto L_1101bf93;
  /* 1101bfc9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101bfcc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101bfcf mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1101bfd1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101bfd4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1101bfd7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101bfda mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1101bfdd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101bfe0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101bfe3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1101bfe5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101bfe8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1101bfeb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101bfee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101bff1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1101bff4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101bff8 jle 0x1101c016 */
  if ((C.zf||C.sf!=C.of)) goto L_1101c016;
  /* 1101bffa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101bffd push ecx */
  push32((uint32_t)(ECX));
  /* 1101bffe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101c001 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1101c004 push eax */
  push32((uint32_t)(EAX));
  /* 1101c005 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101c008 push ecx */
  push32((uint32_t)(ECX));
  /* 1101c009 call 0x1101d9d0 */
  push32(0x1101c00eu); f_1101d9d0();
  /* 1101c00e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101c011 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1101c014 jmp 0x1101c05e */
  goto L_1101c05e;
L_1101c016:;
  /* 1101c016 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101c01a je 0x1101c039 */
  if (C.zf) goto L_1101c039;
  /* 1101c01c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101c01f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1101c022 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101c025 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1101c028 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101c02b mov ecx, dword ptr [edx*4 + 0x11041fa0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11041fa0)));
  /* 1101c032 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101c034 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1101c037 jmp 0x1101c040 */
  goto L_1101c040;
L_1101c039:;
  /* 1101c039 mov dword ptr [ebp - 0x14], 0x1103ea60 */
  w32((uint32_t)(EBP + -0x14), (0x1103ea60u));
L_1101c040:;
  /* 1101c040 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1101c043 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1101c047 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1101c04a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101c04c je 0x1101c05e */
  if (C.zf) goto L_1101c05e;
  /* 1101c04e push 2 */
  push32((uint32_t)(0x2u));
  /* 1101c050 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101c052 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101c055 push ecx */
  push32((uint32_t)(ECX));
  /* 1101c056 call 0x1101d880 */
  push32(0x1101c05bu); f_1101d880();
  /* 1101c05b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1101c05e:;
  /* 1101c05e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101c061 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1101c064 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1101c067 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1101c069 jmp 0x1101c089 */
  goto L_1101c089;
L_1101c06b:;
  /* 1101c06b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1101c072 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101c075 push edx */
  push32((uint32_t)(EDX));
  /* 1101c076 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1101c079 push eax */
  push32((uint32_t)(EAX));
  /* 1101c07a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101c07d push ecx */
  push32((uint32_t)(ECX));
  /* 1101c07e call 0x1101d9d0 */
  push32(0x1101c083u); f_1101d9d0();
  /* 1101c083 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101c086 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1101c089:;
  /* 1101c089 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101c08c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101c08f je 0x1101c0a5 */
  if (C.zf) goto L_1101c0a5;
  /* 1101c091 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101c094 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1101c097 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1101c09a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101c09d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1101c0a0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1101c0a3 jmp 0x1101c0ad */
  goto L_1101c0ad;
L_1101c0a5:;
  /* 1101c0a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101c0a8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1101c0ad:;
  /* 1101c0ad pop edi */
  EDI = (pop32());
  /* 1101c0ae pop esi */
  ESI = (pop32());
  /* 1101c0af pop ebx */
  EBX = (pop32());
  /* 1101c0b0 mov esp, ebp */
  ESP = (EBP);
  /* 1101c0b2 pop ebp */
  EBP = (pop32());
  /* 1101c0b3 ret  */
  ESPCHK(0x1101be40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0c0 @ 0x1101c0c0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1101c0c0(void) {
  FTRACE(0x1101c0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101c0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1101c0c1 mov ebp, esp */
  EBP = (ESP);
  /* 1101c0c3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101c0c9 push ebx */
  push32((uint32_t)(EBX));
  /* 1101c0ca push esi */
  push32((uint32_t)(ESI));
  /* 1101c0cb push edi */
  push32((uint32_t)(EDI));
  /* 1101c0cc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1101c0d3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1101c0dd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1101c0e4:;
  /* 1101c0e4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101c0e7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1101c0e9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1101c0ec movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1101c0f0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101c0f3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101c0f6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1101c0f9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101c0fb je 0x1101ccd7 */
  if (C.zf) goto L_1101ccd7;
  /* 1101c101 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101c108 jl 0x1101ccd7 */
  if ((C.sf!=C.of)) goto L_1101ccd7;
  /* 1101c10e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1101c112 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101c115 jl 0x1101c136 */
  if ((C.sf!=C.of)) goto L_1101c136;
  /* 1101c117 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1101c11b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101c11e jg 0x1101c136 */
  if ((!C.zf&&C.sf==C.of)) goto L_1101c136;
  /* 1101c120 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1101c124 movsx ecx, byte ptr [eax + 0x1103c134] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x1103c134))));
  /* 1101c12b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1101c12e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1101c134 jmp 0x1101c140 */
  goto L_1101c140;
L_1101c136:;
  /* 1101c136 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1101c140:;
  /* 1101c140 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1101c146 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1101c149 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101c14c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1101c14f movsx edx, byte ptr [ecx + eax*8 + 0x1103c154] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x1103c154))));
  /* 1101c157 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1101c15a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1101c15d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1101c160 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1101c166 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101c16d ja 0x1101ccd2 */
  if ((!C.cf&&!C.zf)) goto L_1101ccd2;
  /* 1101c173 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1101c179 jmp dword ptr [ecx*4 + 0x1101cce4] */
  switch (ECX) {
    case 0: goto L_1101c180;
    case 1: goto L_1101c21a;
    case 2: goto L_1101c25c;
    case 3: goto L_1101c2cb;
    case 4: goto L_1101c323;
    case 5: goto L_1101c332;
    case 6: goto L_1101c37e;
    case 7: goto L_1101c411;
    case 8: goto L_1101c2a8;
    case 9: goto L_1101c2b3;
    case 10: goto L_1101c29e;
    case 11: goto L_1101c293;
    case 12: goto L_1101c2be;
    case 13: goto L_1101c2c6;
    default: x86_unimpl("switch@0x1101c179 out of table"); return;
  }
L_1101c180:;
  /* 1101c180 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1101c187 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1101c18a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1101c190 mov eax, dword ptr [0x1103ec98] */
  EAX = (r32((uint32_t)(0x1103ec98)));
  /* 1101c195 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1101c197 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1101c19b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1101c1a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1101c1a3 je 0x1101c1fd */
  if (C.zf) goto L_1101c1fd;
  /* 1101c1a5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1101c1ab push edx */
  push32((uint32_t)(EDX));
  /* 1101c1ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101c1af push eax */
  push32((uint32_t)(EAX));
  /* 1101c1b0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1101c1b4 push ecx */
  push32((uint32_t)(ECX));
  /* 1101c1b5 call 0x1101cdf0 */
  push32(0x1101c1bau); f_1101cdf0();
  /* 1101c1ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101c1bd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101c1c0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1101c1c2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1101c1c5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101c1c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101c1cb mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1101c1ce:;
  /* 1101c1ce movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1101c1d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101c1d4 jne 0x1101c1f7 */
  if (!C.zf) goto L_1101c1f7;
  /* 1101c1d6 push 0x1103c1d4 */
  push32((uint32_t)(0x1103c1d4u));
  /* 1101c1db push 0 */
  push32((uint32_t)(0x0u));
  /* 1101c1dd push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1101c1e2 push 0x1103c1c8 */
  push32((uint32_t)(0x1103c1c8u));
  /* 1101c1e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1101c1e9 call 0x110141f0 */
  push32(0x1101c1eeu); f_110141f0();
  /* 1101c1ee add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101c1f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101c1f4 jne 0x1101c1f7 */
  if (!C.zf) goto L_1101c1f7;
  /* 1101c1f6 int3  */
  x86_unimpl("int3 @ 0x1101c1f6");
L_1101c1f7:;
  /* 1101c1f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101c1f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101c1fb jne 0x1101c1ce */
  if (!C.zf) goto L_1101c1ce;
L_1101c1fd:;
  /* 1101c1fd lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1101c203 push ecx */
  push32((uint32_t)(ECX));
  /* 1101c204 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101c207 push edx */
  push32((uint32_t)(EDX));
  /* 1101c208 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1101c20c push eax */
  push32((uint32_t)(EAX));
  /* 1101c20d call 0x1101cdf0 */
  push32(0x1101c212u); f_1101cdf0();
  /* 1101c212 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101c215 jmp 0x1101ccd2 */
  goto L_1101ccd2;
L_1101c21a:;
  /* 1101c21a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1101c221 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101c224 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1101c22a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1101c230 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1101c236 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1101c23c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1101c23f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1101c246 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1101c250 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1101c257 jmp 0x1101ccd2 */
  goto L_1101ccd2;
L_1101c25c:;
  /* 1101c25c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1101c260 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1101c266 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1101c26c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101c26f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1101c275 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101c27c ja 0x1101c2c6 */
  if ((!C.cf&&!C.zf)) goto L_1101c2c6;
  /* 1101c27e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1101c284 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101c286 mov al, byte ptr [ecx + 0x1101cd1c] */
  AL = (r8((uint32_t)(ECX + 0x1101cd1c)));
  /* 1101c28c jmp dword ptr [eax*4 + 0x1101cd04] */
  switch (EAX) {
    case 0: goto L_1101c2a8;
    case 1: goto L_1101c2b3;
    case 2: goto L_1101c29e;
    case 3: goto L_1101c293;
    case 4: goto L_1101c2be;
    case 5: goto L_1101c2c6;
    default: x86_unimpl("switch@0x1101c28c out of table"); return;
  }
L_1101c293:;
  /* 1101c293 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101c296 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1101c299 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1101c29c jmp 0x1101c2c6 */
  goto L_1101c2c6;
L_1101c29e:;
  /* 1101c29e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101c2a1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1101c2a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1101c2a6 jmp 0x1101c2c6 */
  goto L_1101c2c6;
L_1101c2a8:;
  /* 1101c2a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101c2ab or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1101c2ae mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1101c2b1 jmp 0x1101c2c6 */
  goto L_1101c2c6;
L_1101c2b3:;
  /* 1101c2b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101c2b6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1101c2b9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1101c2bc jmp 0x1101c2c6 */
  goto L_1101c2c6;
L_1101c2be:;
  /* 1101c2be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101c2c1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1101c2c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1101c2c6:;
  /* 1101c2c6 jmp 0x1101ccd2 */
  goto L_1101ccd2;
L_1101c2cb:;
  /* 1101c2cb movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1101c2cf cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101c2d2 jne 0x1101c307 */
  if (!C.zf) goto L_1101c307;
  /* 1101c2d4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1101c2d7 push edx */
  push32((uint32_t)(EDX));
  /* 1101c2d8 call 0x1101cf00 */
  push32(0x1101c2ddu); f_1101cf00();
  /* 1101c2dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101c2e0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1101c2e6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101c2ed jge 0x1101c305 */
  if ((C.sf==C.of)) goto L_1101c305;
  /* 1101c2ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101c2f2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1101c2f4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1101c2f7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1101c2fd neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1101c2ff mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1101c305:;
  /* 1101c305 jmp 0x1101c31e */
  goto L_1101c31e;
L_1101c307:;
  /* 1101c307 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1101c30d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101c310 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1101c314 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1101c318 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1101c31e:;
  /* 1101c31e jmp 0x1101ccd2 */
  goto L_1101ccd2;
L_1101c323:;
  /* 1101c323 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1101c32d jmp 0x1101ccd2 */
  goto L_1101ccd2;
L_1101c332:;
  /* 1101c332 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1101c336 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101c339 jne 0x1101c362 */
  if (!C.zf) goto L_1101c362;
  /* 1101c33b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1101c33e push eax */
  push32((uint32_t)(EAX));
  /* 1101c33f call 0x1101cf00 */
  push32(0x1101c344u); f_1101cf00();
  /* 1101c344 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101c347 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1101c34d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101c354 jge 0x1101c360 */
  if ((C.sf==C.of)) goto L_1101c360;
  /* 1101c356 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1101c360:;
  /* 1101c360 jmp 0x1101c379 */
  goto L_1101c379;
L_1101c362:;
  /* 1101c362 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1101c368 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101c36b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1101c36f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1101c373 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1101c379:;
  /* 1101c379 jmp 0x1101ccd2 */
  goto L_1101ccd2;
L_1101c37e:;
  /* 1101c37e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1101c382 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1101c388 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1101c38e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101c391 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1101c397 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101c39e ja 0x1101c40c */
  if ((!C.cf&&!C.zf)) goto L_1101c40c;
  /* 1101c3a0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1101c3a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101c3a8 mov al, byte ptr [ecx + 0x1101cd41] */
  AL = (r8((uint32_t)(ECX + 0x1101cd41)));
  /* 1101c3ae jmp dword ptr [eax*4 + 0x1101cd2d] */
  switch (EAX) {
    case 0: goto L_1101c3c0;
    case 1: goto L_1101c3f9;
    case 2: goto L_1101c3b5;
    case 3: goto L_1101c403;
    case 4: goto L_1101c40c;
    default: x86_unimpl("switch@0x1101c3ae out of table"); return;
  }
L_1101c3b5:;
  /* 1101c3b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101c3b8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1101c3bb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1101c3be jmp 0x1101c40c */
  goto L_1101c40c;
L_1101c3c0:;
  /* 1101c3c0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101c3c3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1101c3c6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101c3c9 jne 0x1101c3eb */
  if (!C.zf) goto L_1101c3eb;
  /* 1101c3cb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101c3ce movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1101c3d2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101c3d5 jne 0x1101c3eb */
  if (!C.zf) goto L_1101c3eb;
  /* 1101c3d7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101c3da add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101c3dd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1101c3e0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101c3e3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1101c3e6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1101c3e9 jmp 0x1101c3f7 */
  goto L_1101c3f7;
L_1101c3eb:;
  /* 1101c3eb mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1101c3f2 jmp 0x1101c180 */
  goto L_1101c180;
L_1101c3f7:;
  /* 1101c3f7 jmp 0x1101c40c */
  goto L_1101c40c;
L_1101c3f9:;
  /* 1101c3f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101c3fc or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1101c3fe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1101c401 jmp 0x1101c40c */
  goto L_1101c40c;
L_1101c403:;
  /* 1101c403 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101c406 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1101c409 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1101c40c:;
  /* 1101c40c jmp 0x1101ccd2 */
  goto L_1101ccd2;
L_1101c411:;
  /* 1101c411 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1101c415 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1101c41b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1101c421 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101c424 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1101c42a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101c431 ja 0x1101caf7 */
  if ((!C.cf&&!C.zf)) goto L_1101caf7;
  /* 1101c437 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1101c43d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1101c43f mov cl, byte ptr [edx + 0x1101cdac] */
  CL = (r8((uint32_t)(EDX + 0x1101cdac)));
  /* 1101c445 jmp dword ptr [ecx*4 + 0x1101cd70] */
  switch (ECX) {
    case 0: goto L_1101c44c;
    case 1: goto L_1101c6e0;
    case 2: goto L_1101c570;
    case 3: goto L_1101c819;
    case 4: goto L_1101c4db;
    case 5: goto L_1101c461;
    case 6: goto L_1101c7eb;
    case 7: goto L_1101c6f0;
    case 8: goto L_1101c695;
    case 9: goto L_1101c865;
    case 10: goto L_1101c80f;
    case 11: goto L_1101c586;
    case 12: goto L_1101c803;
    case 13: goto L_1101c825;
    case 14: goto L_1101caf7;
    default: x86_unimpl("switch@0x1101c445 out of table"); return;
  }
L_1101c44c:;
  /* 1101c44c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101c44f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1101c454 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101c456 jne 0x1101c461 */
  if (!C.zf) goto L_1101c461;
  /* 1101c458 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101c45b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1101c45e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1101c461:;
  /* 1101c461 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101c464 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1101c46a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101c46c je 0x1101c4a7 */
  if (C.zf) goto L_1101c4a7;
  /* 1101c46e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1101c471 push eax */
  push32((uint32_t)(EAX));
  /* 1101c472 call 0x1101cf40 */
  push32(0x1101c477u); f_1101cf40();
  /* 1101c477 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101c47a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1101c47e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1101c482 push ecx */
  push32((uint32_t)(ECX));
  /* 1101c483 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1101c489 push edx */
  push32((uint32_t)(EDX));
  /* 1101c48a call 0x1101e020 */
  push32(0x1101c48fu); f_1101e020();
  /* 1101c48f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101c492 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1101c495 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101c499 jge 0x1101c4a5 */
  if ((C.sf==C.of)) goto L_1101c4a5;
  /* 1101c49b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1101c4a5:;
  /* 1101c4a5 jmp 0x1101c4cd */
  goto L_1101c4cd;
L_1101c4a7:;
  /* 1101c4a7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1101c4aa push eax */
  push32((uint32_t)(EAX));
  /* 1101c4ab call 0x1101cf00 */
  push32(0x1101c4b0u); f_1101cf00();
  /* 1101c4b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101c4b3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1101c4ba mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1101c4c0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1101c4c6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1101c4cd:;
  /* 1101c4cd lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1101c4d3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1101c4d6 jmp 0x1101caf7 */
  goto L_1101caf7;
L_1101c4db:;
  /* 1101c4db lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1101c4de push eax */
  push32((uint32_t)(EAX));
  /* 1101c4df call 0x1101cf00 */
  push32(0x1101c4e4u); f_1101cf00();
  /* 1101c4e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101c4e7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1101c4ed cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101c4f4 je 0x1101c502 */
  if (C.zf) goto L_1101c502;
  /* 1101c4f6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1101c4fc cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101c500 jne 0x1101c51c */
  if (!C.zf) goto L_1101c51c;
L_1101c502:;
  /* 1101c502 mov edx, dword ptr [0x1103efb0] */
  EDX = (r32((uint32_t)(0x1103efb0)));
  /* 1101c508 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1101c50b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1101c50e push eax */
  push32((uint32_t)(EAX));
  /* 1101c50f call 0x11017f60 */
  push32(0x1101c514u); f_11017f60();
  /* 1101c514 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101c517 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1101c51a jmp 0x1101c56b */
  goto L_1101c56b;
L_1101c51c:;
  /* 1101c51c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101c51f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1101c525 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1101c527 je 0x1101c54c */
  if (C.zf) goto L_1101c54c;
  /* 1101c529 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1101c52f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1101c532 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1101c535 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1101c53b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1101c53e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1101c540 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1101c543 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1101c54a jmp 0x1101c56b */
  goto L_1101c56b;
L_1101c54c:;
  /* 1101c54c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1101c553 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1101c559 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1101c55c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1101c55f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1101c565 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1101c568 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1101c56b:;
  /* 1101c56b jmp 0x1101caf7 */
  goto L_1101caf7;
L_1101c570:;
  /* 1101c570 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101c573 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1101c579 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1101c57b jne 0x1101c586 */
  if (!C.zf) goto L_1101c586;
  /* 1101c57d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101c580 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1101c583 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1101c586:;
  /* 1101c586 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101c58d jne 0x1101c59b */
  if (!C.zf) goto L_1101c59b;
  /* 1101c58f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1101c599 jmp 0x1101c5a7 */
  goto L_1101c5a7;
L_1101c59b:;
  /* 1101c59b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1101c5a1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1101c5a7:;
  /* 1101c5a7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1101c5ad mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1101c5b3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1101c5b6 push edx */
  push32((uint32_t)(EDX));
  /* 1101c5b7 call 0x1101cf00 */
  push32(0x1101c5bcu); f_1101cf00();
  /* 1101c5bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101c5bf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1101c5c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101c5c5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1101c5ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101c5cc je 0x1101c636 */
  if (C.zf) goto L_1101c636;
  /* 1101c5ce cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101c5d2 jne 0x1101c5dd */
  if (!C.zf) goto L_1101c5dd;
  /* 1101c5d4 mov ecx, dword ptr [0x1103efb4] */
  ECX = (r32((uint32_t)(0x1103efb4)));
  /* 1101c5da mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1101c5dd:;
  /* 1101c5dd mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1101c5e4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1101c5e7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1101c5ed:;
  /* 1101c5ed mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1101c5f3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1101c5f9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101c5fc mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1101c602 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101c604 je 0x1101c626 */
  if (C.zf) goto L_1101c626;
  /* 1101c606 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1101c60c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101c60e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1101c611 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101c613 je 0x1101c626 */
  if (C.zf) goto L_1101c626;
  /* 1101c615 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1101c61b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101c61e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1101c624 jmp 0x1101c5ed */
  goto L_1101c5ed;
L_1101c626:;
  /* 1101c626 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1101c62c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101c62f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1101c631 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1101c634 jmp 0x1101c690 */
  goto L_1101c690;
L_1101c636:;
  /* 1101c636 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101c63a jne 0x1101c644 */
  if (!C.zf) goto L_1101c644;
  /* 1101c63c mov eax, dword ptr [0x1103efb0] */
  EAX = (r32((uint32_t)(0x1103efb0)));
  /* 1101c641 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1101c644:;
  /* 1101c644 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1101c647 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1101c64d:;
  /* 1101c64d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1101c653 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1101c659 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101c65c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1101c662 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101c664 je 0x1101c684 */
  if (C.zf) goto L_1101c684;
  /* 1101c666 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1101c66c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1101c66f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101c671 je 0x1101c684 */
  if (C.zf) goto L_1101c684;
  /* 1101c673 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1101c679 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101c67c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1101c682 jmp 0x1101c64d */
  goto L_1101c64d;
L_1101c684:;
  /* 1101c684 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1101c68a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101c68d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1101c690:;
  /* 1101c690 jmp 0x1101caf7 */
  goto L_1101caf7;
L_1101c695:;
  /* 1101c695 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1101c698 push edx */
  push32((uint32_t)(EDX));
  /* 1101c699 call 0x1101cf00 */
  push32(0x1101c69eu); f_1101cf00();
  /* 1101c69e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101c6a1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1101c6a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101c6aa and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1101c6ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101c6af je 0x1101c6c3 */
  if (C.zf) goto L_1101c6c3;
  /* 1101c6b1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1101c6b7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1101c6be mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1101c6c1 jmp 0x1101c6d1 */
  goto L_1101c6d1;
L_1101c6c3:;
  /* 1101c6c3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1101c6c9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1101c6cf mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1101c6d1:;
  /* 1101c6d1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1101c6db jmp 0x1101caf7 */
  goto L_1101caf7;
L_1101c6e0:;
  /* 1101c6e0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1101c6e7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1101c6ea add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1101c6ed mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1101c6f0:;
  /* 1101c6f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101c6f3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1101c6f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1101c6f8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1101c6fe mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1101c701 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101c708 jge 0x1101c716 */
  if ((C.sf==C.of)) goto L_1101c716;
  /* 1101c70a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1101c714 jmp 0x1101c732 */
  goto L_1101c732;
L_1101c716:;
  /* 1101c716 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101c71d jne 0x1101c732 */
  if (!C.zf) goto L_1101c732;
  /* 1101c71f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1101c723 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101c726 jne 0x1101c732 */
  if (!C.zf) goto L_1101c732;
  /* 1101c728 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1101c732:;
  /* 1101c732 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1101c735 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101c738 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1101c73b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1101c73e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101c741 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1101c743 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1101c746 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1101c74c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1101c752 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101c755 push ecx */
  push32((uint32_t)(ECX));
  /* 1101c756 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1101c75c push edx */
  push32((uint32_t)(EDX));
  /* 1101c75d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1101c761 push eax */
  push32((uint32_t)(EAX));
  /* 1101c762 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1101c765 push ecx */
  push32((uint32_t)(ECX));
  /* 1101c766 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1101c76c push edx */
  push32((uint32_t)(EDX));
  /* 1101c76d call dword ptr [0x1103f3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1103f3a0))), 0x1101c773u);
  /* 1101c773 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101c776 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101c779 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1101c77e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101c780 je 0x1101c798 */
  if (C.zf) goto L_1101c798;
  /* 1101c782 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101c789 jne 0x1101c798 */
  if (!C.zf) goto L_1101c798;
  /* 1101c78b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1101c78e push ecx */
  push32((uint32_t)(ECX));
  /* 1101c78f call dword ptr [0x1103f3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1103f3ac))), 0x1101c795u);
  /* 1101c795 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1101c798:;
  /* 1101c798 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1101c79c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101c79f jne 0x1101c7ba */
  if (!C.zf) goto L_1101c7ba;
  /* 1101c7a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101c7a4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1101c7a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101c7ab jne 0x1101c7ba */
  if (!C.zf) goto L_1101c7ba;
  /* 1101c7ad mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1101c7b0 push ecx */
  push32((uint32_t)(ECX));
  /* 1101c7b1 call dword ptr [0x1103f3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1103f3a4))), 0x1101c7b7u);
  /* 1101c7b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1101c7ba:;
  /* 1101c7ba mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1101c7bd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1101c7c0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101c7c3 jne 0x1101c7d7 */
  if (!C.zf) goto L_1101c7d7;
  /* 1101c7c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101c7c8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1101c7cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1101c7ce mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1101c7d1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101c7d4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1101c7d7:;
  /* 1101c7d7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1101c7da push eax */
  push32((uint32_t)(EAX));
  /* 1101c7db call 0x11017f60 */
  push32(0x1101c7e0u); f_11017f60();
  /* 1101c7e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101c7e3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1101c7e6 jmp 0x1101caf7 */
  goto L_1101caf7;
L_1101c7eb:;
  /* 1101c7eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101c7ee or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1101c7f1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1101c7f4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1101c7fe jmp 0x1101c885 */
  goto L_1101c885;
L_1101c803:;
  /* 1101c803 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1101c80d jmp 0x1101c885 */
  goto L_1101c885;
L_1101c80f:;
  /* 1101c80f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1101c819:;
  /* 1101c819 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1101c823 jmp 0x1101c82f */
  goto L_1101c82f;
L_1101c825:;
  /* 1101c825 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1101c82f:;
  /* 1101c82f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1101c839 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101c83c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1101c842 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101c844 je 0x1101c863 */
  if (C.zf) goto L_1101c863;
  /* 1101c846 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1101c84d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1101c853 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101c856 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1101c85c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1101c863:;
  /* 1101c863 jmp 0x1101c885 */
  goto L_1101c885;
L_1101c865:;
  /* 1101c865 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1101c86f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101c872 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1101c878 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1101c87a je 0x1101c885 */
  if (C.zf) goto L_1101c885;
  /* 1101c87c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101c87f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1101c882 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1101c885:;
  /* 1101c885 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101c888 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1101c88d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101c88f je 0x1101c8ae */
  if (C.zf) goto L_1101c8ae;
  /* 1101c891 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1101c894 push ecx */
  push32((uint32_t)(ECX));
  /* 1101c895 call 0x1101cf20 */
  push32(0x1101c89au); f_1101cf20();
  /* 1101c89a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101c89d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1101c8a3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1101c8a9 jmp 0x1101c93f */
  goto L_1101c93f;
L_1101c8ae:;
  /* 1101c8ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101c8b1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1101c8b4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101c8b6 je 0x1101c900 */
  if (C.zf) goto L_1101c900;
  /* 1101c8b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101c8bb and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1101c8be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101c8c0 je 0x1101c8e0 */
  if (C.zf) goto L_1101c8e0;
  /* 1101c8c2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1101c8c5 push ecx */
  push32((uint32_t)(ECX));
  /* 1101c8c6 call 0x1101cf00 */
  push32(0x1101c8cbu); f_1101cf00();
  /* 1101c8cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101c8ce movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1101c8d1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1101c8d2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1101c8d8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1101c8de jmp 0x1101c8fe */
  goto L_1101c8fe;
L_1101c8e0:;
  /* 1101c8e0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1101c8e3 push edx */
  push32((uint32_t)(EDX));
  /* 1101c8e4 call 0x1101cf00 */
  push32(0x1101c8e9u); f_1101cf00();
  /* 1101c8e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101c8ec and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1101c8f1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1101c8f2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1101c8f8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1101c8fe:;
  /* 1101c8fe jmp 0x1101c93f */
  goto L_1101c93f;
L_1101c900:;
  /* 1101c900 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101c903 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1101c906 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101c908 je 0x1101c925 */
  if (C.zf) goto L_1101c925;
  /* 1101c90a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1101c90d push ecx */
  push32((uint32_t)(ECX));
  /* 1101c90e call 0x1101cf00 */
  push32(0x1101c913u); f_1101cf00();
  /* 1101c913 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101c916 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1101c917 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1101c91d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1101c923 jmp 0x1101c93f */
  goto L_1101c93f;
L_1101c925:;
  /* 1101c925 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1101c928 push edx */
  push32((uint32_t)(EDX));
  /* 1101c929 call 0x1101cf00 */
  push32(0x1101c92eu); f_1101cf00();
  /* 1101c92e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101c931 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1101c933 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1101c939 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1101c93f:;
  /* 1101c93f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101c942 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1101c945 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101c947 je 0x1101c987 */
  if (C.zf) goto L_1101c987;
  /* 1101c949 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101c950 jg 0x1101c987 */
  if ((!C.zf&&C.sf==C.of)) goto L_1101c987;
  /* 1101c952 jl 0x1101c95d */
  if ((C.sf!=C.of)) goto L_1101c95d;
  /* 1101c954 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101c95b jae 0x1101c987 */
  if (!C.cf) goto L_1101c987;
L_1101c95d:;
  /* 1101c95d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1101c963 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1101c965 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1101c96b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101c96e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1101c970 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1101c976 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1101c97c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101c97f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1101c982 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1101c985 jmp 0x1101c99f */
  goto L_1101c99f;
L_1101c987:;
  /* 1101c987 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1101c98d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1101c993 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1101c999 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1101c99f:;
  /* 1101c99f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101c9a2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1101c9a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101c9aa jne 0x1101c9c7 */
  if (!C.zf) goto L_1101c9c7;
  /* 1101c9ac mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1101c9b2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1101c9b8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1101c9bb mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1101c9c1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1101c9c7:;
  /* 1101c9c7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101c9ce jge 0x1101c9dc */
  if ((C.sf==C.of)) goto L_1101c9dc;
  /* 1101c9d0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1101c9da jmp 0x1101c9e5 */
  goto L_1101c9e5;
L_1101c9dc:;
  /* 1101c9dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101c9df and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1101c9e2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1101c9e5:;
  /* 1101c9e5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1101c9eb or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1101c9f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101c9f3 jne 0x1101c9fc */
  if (!C.zf) goto L_1101c9fc;
  /* 1101c9f5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1101c9fc:;
  /* 1101c9fc lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1101c9ff mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1101ca02:;
  /* 1101ca02 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1101ca08 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1101ca0e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101ca11 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1101ca17 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101ca19 jg 0x1101ca2f */
  if ((!C.zf&&C.sf==C.of)) goto L_1101ca2f;
  /* 1101ca1b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1101ca21 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1101ca27 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1101ca29 je 0x1101cab0 */
  if (C.zf) goto L_1101cab0;
L_1101ca2f:;
  /* 1101ca2f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1101ca35 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1101ca36 push edx */
  push32((uint32_t)(EDX));
  /* 1101ca37 push eax */
  push32((uint32_t)(EAX));
  /* 1101ca38 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1101ca3e push edx */
  push32((uint32_t)(EDX));
  /* 1101ca3f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1101ca45 push eax */
  push32((uint32_t)(EAX));
  /* 1101ca46 call 0x1101bdc0 */
  push32(0x1101ca4bu); f_1101bdc0();
  /* 1101ca4b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ca4e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1101ca54 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1101ca5a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1101ca5b push edx */
  push32((uint32_t)(EDX));
  /* 1101ca5c push eax */
  push32((uint32_t)(EAX));
  /* 1101ca5d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1101ca63 push ecx */
  push32((uint32_t)(ECX));
  /* 1101ca64 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1101ca6a push edx */
  push32((uint32_t)(EDX));
  /* 1101ca6b call 0x1101bd50 */
  push32(0x1101ca70u); f_1101bd50();
  /* 1101ca70 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1101ca76 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1101ca7c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ca83 jle 0x1101ca97 */
  if ((C.zf||C.sf!=C.of)) goto L_1101ca97;
  /* 1101ca85 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1101ca8b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ca91 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1101ca97:;
  /* 1101ca97 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1101ca9a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1101caa0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1101caa2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1101caa5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101caa8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1101caab jmp 0x1101ca02 */
  goto L_1101ca02;
L_1101cab0:;
  /* 1101cab0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1101cab3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101cab6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1101cab9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1101cabc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101cabf mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1101cac2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101cac5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1101caca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101cacc je 0x1101caf7 */
  if (C.zf) goto L_1101caf7;
  /* 1101cace mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1101cad1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1101cad4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101cad7 jne 0x1101cadf */
  if (!C.zf) goto L_1101cadf;
  /* 1101cad9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101cadd jne 0x1101caf7 */
  if (!C.zf) goto L_1101caf7;
L_1101cadf:;
  /* 1101cadf mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1101cae2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101cae5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1101cae8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1101caeb mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1101caee mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101caf1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101caf4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1101caf7:;
  /* 1101caf7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101cafe jne 0x1101ccd2 */
  if (!C.zf) goto L_1101ccd2;
  /* 1101cb04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101cb07 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1101cb0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101cb0c je 0x1101cb5d */
  if (C.zf) goto L_1101cb5d;
  /* 1101cb0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101cb11 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1101cb17 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1101cb19 je 0x1101cb2b */
  if (C.zf) goto L_1101cb2b;
  /* 1101cb1b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1101cb22 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1101cb29 jmp 0x1101cb5d */
  goto L_1101cb5d;
L_1101cb2b:;
  /* 1101cb2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101cb2e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1101cb31 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101cb33 je 0x1101cb45 */
  if (C.zf) goto L_1101cb45;
  /* 1101cb35 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1101cb3c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1101cb43 jmp 0x1101cb5d */
  goto L_1101cb5d;
L_1101cb45:;
  /* 1101cb45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101cb48 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1101cb4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101cb4d je 0x1101cb5d */
  if (C.zf) goto L_1101cb5d;
  /* 1101cb4f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1101cb56 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1101cb5d:;
  /* 1101cb5d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1101cb63 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101cb66 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101cb69 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1101cb6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101cb72 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1101cb75 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101cb77 jne 0x1101cb95 */
  if (!C.zf) goto L_1101cb95;
  /* 1101cb79 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1101cb7f push eax */
  push32((uint32_t)(EAX));
  /* 1101cb80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101cb83 push ecx */
  push32((uint32_t)(ECX));
  /* 1101cb84 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1101cb8a push edx */
  push32((uint32_t)(EDX));
  /* 1101cb8b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1101cb8d call 0x1101ce70 */
  push32(0x1101cb92u); f_1101ce70();
  /* 1101cb92 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1101cb95:;
  /* 1101cb95 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1101cb9b push eax */
  push32((uint32_t)(EAX));
  /* 1101cb9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101cb9f push ecx */
  push32((uint32_t)(ECX));
  /* 1101cba0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101cba3 push edx */
  push32((uint32_t)(EDX));
  /* 1101cba4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1101cbaa push eax */
  push32((uint32_t)(EAX));
  /* 1101cbab call 0x1101ceb0 */
  push32(0x1101cbb0u); f_1101ceb0();
  /* 1101cbb0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101cbb3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101cbb6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1101cbb9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1101cbbb je 0x1101cbe3 */
  if (C.zf) goto L_1101cbe3;
  /* 1101cbbd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101cbc0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1101cbc3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101cbc5 jne 0x1101cbe3 */
  if (!C.zf) goto L_1101cbe3;
  /* 1101cbc7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1101cbcd push eax */
  push32((uint32_t)(EAX));
  /* 1101cbce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101cbd1 push ecx */
  push32((uint32_t)(ECX));
  /* 1101cbd2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1101cbd8 push edx */
  push32((uint32_t)(EDX));
  /* 1101cbd9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1101cbdb call 0x1101ce70 */
  push32(0x1101cbe0u); f_1101ce70();
  /* 1101cbe0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1101cbe3:;
  /* 1101cbe3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101cbe7 je 0x1101cc91 */
  if (C.zf) goto L_1101cc91;
  /* 1101cbed cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101cbf1 jle 0x1101cc91 */
  if ((C.zf||C.sf!=C.of)) goto L_1101cc91;
  /* 1101cbf7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1101cbfa mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1101cc00 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101cc03 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1101cc09:;
  /* 1101cc09 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1101cc0f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1101cc15 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101cc18 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1101cc1e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101cc20 je 0x1101cc8f */
  if (C.zf) goto L_1101cc8f;
  /* 1101cc22 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1101cc28 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1101cc2b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1101cc32 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1101cc39 push eax */
  push32((uint32_t)(EAX));
  /* 1101cc3a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1101cc40 push ecx */
  push32((uint32_t)(ECX));
  /* 1101cc41 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1101cc47 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101cc4a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1101cc50 call 0x1101e020 */
  push32(0x1101cc55u); f_1101e020();
  /* 1101cc55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101cc58 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1101cc5e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101cc65 jg 0x1101cc69 */
  if ((!C.zf&&C.sf==C.of)) goto L_1101cc69;
  /* 1101cc67 jmp 0x1101cc8f */
  goto L_1101cc8f;
L_1101cc69:;
  /* 1101cc69 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1101cc6f push eax */
  push32((uint32_t)(EAX));
  /* 1101cc70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101cc73 push ecx */
  push32((uint32_t)(ECX));
  /* 1101cc74 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1101cc7a push edx */
  push32((uint32_t)(EDX));
  /* 1101cc7b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1101cc81 push eax */
  push32((uint32_t)(EAX));
  /* 1101cc82 call 0x1101ceb0 */
  push32(0x1101cc87u); f_1101ceb0();
  /* 1101cc87 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101cc8a jmp 0x1101cc09 */
  goto L_1101cc09;
L_1101cc8f:;
  /* 1101cc8f jmp 0x1101ccac */
  goto L_1101ccac;
L_1101cc91:;
  /* 1101cc91 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1101cc97 push ecx */
  push32((uint32_t)(ECX));
  /* 1101cc98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101cc9b push edx */
  push32((uint32_t)(EDX));
  /* 1101cc9c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101cc9f push eax */
  push32((uint32_t)(EAX));
  /* 1101cca0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1101cca3 push ecx */
  push32((uint32_t)(ECX));
  /* 1101cca4 call 0x1101ceb0 */
  push32(0x1101cca9u); f_1101ceb0();
  /* 1101cca9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1101ccac:;
  /* 1101ccac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101ccaf and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1101ccb2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101ccb4 je 0x1101ccd2 */
  if (C.zf) goto L_1101ccd2;
  /* 1101ccb6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1101ccbc push eax */
  push32((uint32_t)(EAX));
  /* 1101ccbd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101ccc0 push ecx */
  push32((uint32_t)(ECX));
  /* 1101ccc1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1101ccc7 push edx */
  push32((uint32_t)(EDX));
  /* 1101ccc8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1101ccca call 0x1101ce70 */
  push32(0x1101cccfu); f_1101ce70();
  /* 1101cccf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1101ccd2:;
  /* 1101ccd2 jmp 0x1101c0e4 */
  goto L_1101c0e4;
L_1101ccd7:;
  /* 1101ccd7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1101ccdd pop edi */
  EDI = (pop32());
  /* 1101ccde pop esi */
  ESI = (pop32());
  /* 1101ccdf pop ebx */
  EBX = (pop32());
  /* 1101cce0 mov esp, ebp */
  ESP = (EBP);
  /* 1101cce2 pop ebp */
  EBP = (pop32());
  /* 1101cce3 ret  */
  ESPCHK(0x1101c0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cdf0 @ 0x1101cdf0 (119 bytes, 44 insns) */
void f_1101cdf0(void) {
  FTRACE(0x1101cdf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101cdf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1101cdf1 mov ebp, esp */
  EBP = (ESP);
  /* 1101cdf3 push ecx */
  push32((uint32_t)(ECX));
  /* 1101cdf4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101cdf7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1101cdfa sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101cdfd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101ce00 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1101ce03 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101ce06 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ce0a jl 0x1101ce32 */
  if ((C.sf!=C.of)) goto L_1101ce32;
  /* 1101ce0c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101ce0f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1101ce11 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1101ce14 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1101ce16 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1101ce1a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1101ce20 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1101ce23 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101ce26 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1101ce28 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ce2b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101ce2e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1101ce30 jmp 0x1101ce45 */
  goto L_1101ce45;
L_1101ce32:;
  /* 1101ce32 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101ce35 push edx */
  push32((uint32_t)(EDX));
  /* 1101ce36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101ce39 push eax */
  push32((uint32_t)(EAX));
  /* 1101ce3a call 0x1101be40 */
  push32(0x1101ce3fu); f_1101be40();
  /* 1101ce3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ce42 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1101ce45:;
  /* 1101ce45 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ce49 jne 0x1101ce56 */
  if (!C.zf) goto L_1101ce56;
  /* 1101ce4b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1101ce4e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1101ce54 jmp 0x1101ce63 */
  goto L_1101ce63;
L_1101ce56:;
  /* 1101ce56 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1101ce59 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1101ce5b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ce5e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1101ce61 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1101ce63:;
  /* 1101ce63 mov esp, ebp */
  ESP = (EBP);
  /* 1101ce65 pop ebp */
  EBP = (pop32());
  /* 1101ce66 ret  */
  ESPCHK(0x1101cdf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce70 @ 0x1101ce70 (53 bytes, 23 insns) */
void f_1101ce70(void) {
  FTRACE(0x1101ce70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101ce70 push ebp */
  push32((uint32_t)(EBP));
  /* 1101ce71 mov ebp, esp */
  EBP = (ESP);
L_1101ce73:;
  /* 1101ce73 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101ce76 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101ce79 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101ce7c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1101ce7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101ce81 jle 0x1101cea3 */
  if ((C.zf||C.sf!=C.of)) goto L_1101cea3;
  /* 1101ce83 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1101ce86 push edx */
  push32((uint32_t)(EDX));
  /* 1101ce87 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1101ce8a push eax */
  push32((uint32_t)(EAX));
  /* 1101ce8b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101ce8e push ecx */
  push32((uint32_t)(ECX));
  /* 1101ce8f call 0x1101cdf0 */
  push32(0x1101ce94u); f_1101cdf0();
  /* 1101ce94 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ce97 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1101ce9a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ce9d jne 0x1101cea1 */
  if (!C.zf) goto L_1101cea1;
  /* 1101ce9f jmp 0x1101cea3 */
  goto L_1101cea3;
L_1101cea1:;
  /* 1101cea1 jmp 0x1101ce73 */
  goto L_1101ce73;
L_1101cea3:;
  /* 1101cea3 pop ebp */
  EBP = (pop32());
  /* 1101cea4 ret  */
  ESPCHK(0x1101ce70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ceb0 @ 0x1101ceb0 (74 bytes, 31 insns) */
void f_1101ceb0(void) {
  FTRACE(0x1101ceb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101ceb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1101ceb1 mov ebp, esp */
  EBP = (ESP);
  /* 1101ceb3 push ecx */
  push32((uint32_t)(ECX));
L_1101ceb4:;
  /* 1101ceb4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101ceb7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101ceba sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101cebd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1101cec0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101cec2 jle 0x1101cef6 */
  if ((C.zf||C.sf!=C.of)) goto L_1101cef6;
  /* 1101cec4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1101cec7 push edx */
  push32((uint32_t)(EDX));
  /* 1101cec8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1101cecb push eax */
  push32((uint32_t)(EAX));
  /* 1101cecc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101cecf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1101ced2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1101ced5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101ced8 push eax */
  push32((uint32_t)(EAX));
  /* 1101ced9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101cedc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101cedf mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1101cee2 call 0x1101cdf0 */
  push32(0x1101cee7u); f_1101cdf0();
  /* 1101cee7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ceea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1101ceed cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101cef0 jne 0x1101cef4 */
  if (!C.zf) goto L_1101cef4;
  /* 1101cef2 jmp 0x1101cef6 */
  goto L_1101cef6;
L_1101cef4:;
  /* 1101cef4 jmp 0x1101ceb4 */
  goto L_1101ceb4;
L_1101cef6:;
  /* 1101cef6 mov esp, ebp */
  ESP = (EBP);
  /* 1101cef8 pop ebp */
  EBP = (pop32());
  /* 1101cef9 ret  */
  ESPCHK(0x1101ceb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf00 @ 0x1101cf00 (26 bytes, 12 insns) */
void f_1101cf00(void) {
  FTRACE(0x1101cf00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101cf00 push ebp */
  push32((uint32_t)(EBP));
  /* 1101cf01 mov ebp, esp */
  EBP = (ESP);
  /* 1101cf03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101cf06 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1101cf08 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101cf0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101cf0e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1101cf10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101cf13 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1101cf15 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1101cf18 pop ebp */
  EBP = (pop32());
  /* 1101cf19 ret  */
  ESPCHK(0x1101cf00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf20 @ 0x1101cf20 (31 bytes, 14 insns) */
void f_1101cf20(void) {
  FTRACE(0x1101cf20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101cf20 push ebp */
  push32((uint32_t)(EBP));
  /* 1101cf21 mov ebp, esp */
  EBP = (ESP);
  /* 1101cf23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101cf26 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1101cf28 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101cf2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101cf2e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1101cf30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101cf33 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1101cf35 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101cf38 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1101cf3a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1101cf3d pop ebp */
  EBP = (pop32());
  /* 1101cf3e ret  */
  ESPCHK(0x1101cf20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf40 @ 0x1101cf40 (27 bytes, 12 insns) */
void f_1101cf40(void) {
  FTRACE(0x1101cf40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101cf40 push ebp */
  push32((uint32_t)(EBP));
  /* 1101cf41 mov ebp, esp */
  EBP = (ESP);
  /* 1101cf43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101cf46 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1101cf48 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101cf4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101cf4e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1101cf50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101cf53 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1101cf55 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1101cf59 pop ebp */
  EBP = (pop32());
  /* 1101cf5a ret  */
  ESPCHK(0x1101cf40u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1101cf60 (145 bytes, 42 insns) */
void f_1101cf60(void) {
  FTRACE(0x1101cf60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101cf60 push ebp */
  push32((uint32_t)(EBP));
  /* 1101cf61 mov ebp, esp */
  EBP = (ESP);
  /* 1101cf63 push ecx */
  push32((uint32_t)(ECX));
  /* 1101cf64 call 0x1101d010 */
  push32(0x1101cf69u); f_1101d010();
  /* 1101cf69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101cf6c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1101cf6e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1101cf75 jmp 0x1101cf80 */
  goto L_1101cf80;
L_1101cf77:;
  /* 1101cf77 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101cf7a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101cf7d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1101cf80:;
  /* 1101cf80 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101cf84 jae 0x1101cfaa */
  if (!C.cf) goto L_1101cfaa;
  /* 1101cf86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101cf89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101cf8c cmp ecx, dword ptr [eax*8 + 0x1103efb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1103efb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101cf93 jne 0x1101cfa8 */
  if (!C.zf) goto L_1101cfa8;
  /* 1101cf95 call 0x1101d000 */
  push32(0x1101cf9au); f_1101d000();
  /* 1101cf9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101cf9d mov ecx, dword ptr [edx*8 + 0x1103efbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x1103efbc)));
  /* 1101cfa4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1101cfa6 jmp 0x1101cfed */
  goto L_1101cfed;
L_1101cfa8:;
  /* 1101cfa8 jmp 0x1101cf77 */
  goto L_1101cf77;
L_1101cfaa:;
  /* 1101cfaa cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101cfae jb 0x1101cfc3 */
  if (C.cf) goto L_1101cfc3;
  /* 1101cfb0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101cfb4 ja 0x1101cfc3 */
  if ((!C.cf&&!C.zf)) goto L_1101cfc3;
  /* 1101cfb6 call 0x1101d000 */
  push32(0x1101cfbbu); f_1101d000();
  /* 1101cfbb mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1101cfc1 jmp 0x1101cfed */
  goto L_1101cfed;
L_1101cfc3:;
  /* 1101cfc3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101cfca jb 0x1101cfe2 */
  if (C.cf) goto L_1101cfe2;
  /* 1101cfcc cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101cfd3 ja 0x1101cfe2 */
  if ((!C.cf&&!C.zf)) goto L_1101cfe2;
  /* 1101cfd5 call 0x1101d000 */
  push32(0x1101cfdau); f_1101d000();
  /* 1101cfda mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1101cfe0 jmp 0x1101cfed */
  goto L_1101cfed;
L_1101cfe2:;
  /* 1101cfe2 call 0x1101d000 */
  push32(0x1101cfe7u); f_1101d000();
  /* 1101cfe7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1101cfed:;
  /* 1101cfed mov esp, ebp */
  ESP = (EBP);
  /* 1101cfef pop ebp */
  EBP = (pop32());
  /* 1101cff0 ret  */
  ESPCHK(0x1101cf60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d000 @ 0x1101d000 (13 bytes, 6 insns) */
void f_1101d000(void) {
  FTRACE(0x1101d000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101d000 push ebp */
  push32((uint32_t)(EBP));
  /* 1101d001 mov ebp, esp */
  EBP = (ESP);
  /* 1101d003 call 0x11014b70 */
  push32(0x1101d008u); f_11014b70();
  /* 1101d008 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101d00b pop ebp */
  EBP = (pop32());
  /* 1101d00c ret  */
  ESPCHK(0x1101d000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d010 @ 0x1101d010 (13 bytes, 6 insns) */
void f_1101d010(void) {
  FTRACE(0x1101d010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101d010 push ebp */
  push32((uint32_t)(EBP));
  /* 1101d011 mov ebp, esp */
  EBP = (ESP);
  /* 1101d013 call 0x11014b70 */
  push32(0x1101d018u); f_11014b70();
  /* 1101d018 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101d01b pop ebp */
  EBP = (pop32());
  /* 1101d01c ret  */
  ESPCHK(0x1101d010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d020 @ 0x1101d020 (664 bytes, 263 insns) [15 switch table(s)] */
void f_1101d020(void) {
  FTRACE(0x1101d020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101d020 push ebp */
  push32((uint32_t)(EBP));
  /* 1101d021 mov ebp, esp */
  EBP = (ESP);
  /* 1101d023 push edi */
  push32((uint32_t)(EDI));
  /* 1101d024 push esi */
  push32((uint32_t)(ESI));
  /* 1101d025 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1101d028 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1101d02b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1101d02e mov eax, ecx */
  EAX = (ECX);
  /* 1101d030 mov edx, ecx */
  EDX = (ECX);
  /* 1101d032 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101d034 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101d036 jbe 0x1101d040 */
  if ((C.cf||C.zf)) goto L_1101d040;
  /* 1101d038 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101d03a jb 0x1101d1b8 */
  if (C.cf) goto L_1101d1b8;
L_1101d040:;
  /* 1101d040 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1101d046 jne 0x1101d05c */
  if (!C.zf) goto L_1101d05c;
  /* 1101d048 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1101d04b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1101d04e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101d051 jb 0x1101d07c */
  if (C.cf) goto L_1101d07c;
  /* 1101d053 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1101d055 jmp dword ptr [edx*4 + 0x1101d168] */
  switch (EDX) {
    case 0: goto L_1101d178;
    case 1: goto L_1101d180;
    case 2: goto L_1101d18c;
    case 3: goto L_1101d1a0;
    default: x86_unimpl("switch@0x1101d055 out of table"); return;
  }
L_1101d05c:;
  /* 1101d05c mov eax, edi */
  EAX = (EDI);
  /* 1101d05e mov edx, 3 */
  EDX = (0x3u);
  /* 1101d063 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101d066 jb 0x1101d074 */
  if (C.cf) goto L_1101d074;
  /* 1101d068 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1101d06b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101d06d jmp dword ptr [eax*4 + 0x1101d080] */
  switch (EAX) {
    case 1: goto L_1101d090;
    case 2: goto L_1101d0bc;
    case 3: goto L_1101d0e0;
    default: x86_unimpl("switch@0x1101d06d out of table"); return;
  }
L_1101d074:;
  /* 1101d074 jmp dword ptr [ecx*4 + 0x1101d178] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1101d178)))); return;
  /* 1101d07b nop  */
  /* nop */
L_1101d07c:;
  /* 1101d07c jmp dword ptr [ecx*4 + 0x1101d0fc] */
  switch (ECX) {
    case 0: goto L_1101d15f;
    case 1: goto L_1101d14c;
    case 2: goto L_1101d144;
    case 3: goto L_1101d13c;
    case 4: goto L_1101d134;
    case 5: goto L_1101d12c;
    case 6: goto L_1101d124;
    case 7: goto L_1101d11c;
    default: x86_unimpl("switch@0x1101d07c out of table"); return;
  }
  /* 1101d083 nop  */
  /* nop */
L_1101d090:;
  /* 1101d090 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1101d092 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1101d094 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1101d096 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1101d099 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1101d09c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1101d09f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1101d0a2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1101d0a5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1101d0a8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1101d0ab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101d0ae jb 0x1101d07c */
  if (C.cf) goto L_1101d07c;
  /* 1101d0b0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1101d0b2 jmp dword ptr [edx*4 + 0x1101d168] */
  switch (EDX) {
    case 0: goto L_1101d178;
    case 1: goto L_1101d180;
    case 2: goto L_1101d18c;
    case 3: goto L_1101d1a0;
    default: x86_unimpl("switch@0x1101d0b2 out of table"); return;
  }
  /* 1101d0b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1101d0bc:;
  /* 1101d0bc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1101d0be mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1101d0c0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1101d0c2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1101d0c5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1101d0c8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1101d0cb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1101d0ce add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1101d0d1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101d0d4 jb 0x1101d07c */
  if (C.cf) goto L_1101d07c;
  /* 1101d0d6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1101d0d8 jmp dword ptr [edx*4 + 0x1101d168] */
  switch (EDX) {
    case 0: goto L_1101d178;
    case 1: goto L_1101d180;
    case 2: goto L_1101d18c;
    case 3: goto L_1101d1a0;
    default: x86_unimpl("switch@0x1101d0d8 out of table"); return;
  }
  /* 1101d0df nop  */
  /* nop */
L_1101d0e0:;
  /* 1101d0e0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1101d0e2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1101d0e4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1101d0e6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1101d0e7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1101d0ea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1101d0eb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101d0ee jb 0x1101d07c */
  if (C.cf) goto L_1101d07c;
  /* 1101d0f0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1101d0f2 jmp dword ptr [edx*4 + 0x1101d168] */
  switch (EDX) {
    case 0: goto L_1101d178;
    case 1: goto L_1101d180;
    case 2: goto L_1101d18c;
    case 3: goto L_1101d1a0;
    default: x86_unimpl("switch@0x1101d0f2 out of table"); return;
  }
  /* 1101d0f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1101d11c:;
  /* 1101d11c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1101d120 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1101d124:;
  /* 1101d124 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1101d128 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1101d12c:;
  /* 1101d12c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1101d130 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1101d134:;
  /* 1101d134 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1101d138 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1101d13c:;
  /* 1101d13c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1101d140 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1101d144:;
  /* 1101d144 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1101d148 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1101d14c:;
  /* 1101d14c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1101d150 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1101d154 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1101d15b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1101d15d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1101d15f:;
  /* 1101d15f jmp dword ptr [edx*4 + 0x1101d168] */
  switch (EDX) {
    case 0: goto L_1101d178;
    case 1: goto L_1101d180;
    case 2: goto L_1101d18c;
    case 3: goto L_1101d1a0;
    default: x86_unimpl("switch@0x1101d15f out of table"); return;
  }
  /* 1101d166 mov edi, edi */
  EDI = (EDI);
L_1101d178:;
  /* 1101d178 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101d17b pop esi */
  ESI = (pop32());
  /* 1101d17c pop edi */
  EDI = (pop32());
  /* 1101d17d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1101d17e ret  */
  ESPCHK(0x1101d020u, _esp0);
  ESP += 4; return;
  /* 1101d17f nop  */
  /* nop */
L_1101d180:;
  /* 1101d180 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1101d182 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1101d184 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101d187 pop esi */
  ESI = (pop32());
  /* 1101d188 pop edi */
  EDI = (pop32());
  /* 1101d189 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1101d18a ret  */
  ESPCHK(0x1101d020u, _esp0);
  ESP += 4; return;
  /* 1101d18b nop  */
  /* nop */
L_1101d18c:;
  /* 1101d18c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1101d18e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1101d190 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1101d193 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1101d196 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101d199 pop esi */
  ESI = (pop32());
  /* 1101d19a pop edi */
  EDI = (pop32());
  /* 1101d19b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1101d19c ret  */
  ESPCHK(0x1101d020u, _esp0);
  ESP += 4; return;
  /* 1101d19d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1101d1a0:;
  /* 1101d1a0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1101d1a2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1101d1a4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1101d1a7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1101d1aa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1101d1ad mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1101d1b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101d1b3 pop esi */
  ESI = (pop32());
  /* 1101d1b4 pop edi */
  EDI = (pop32());
  /* 1101d1b5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1101d1b6 ret  */
  ESPCHK(0x1101d020u, _esp0);
  ESP += 4; return;
  /* 1101d1b7 nop  */
  /* nop */
L_1101d1b8:;
  /* 1101d1b8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1101d1bc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1101d1c0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1101d1c6 jne 0x1101d1ec */
  if (!C.zf) goto L_1101d1ec;
  /* 1101d1c8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1101d1cb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1101d1ce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101d1d1 jb 0x1101d1e0 */
  if (C.cf) goto L_1101d1e0;
  /* 1101d1d3 std  */
  C.df=1;
  /* 1101d1d4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1101d1d6 cld  */
  C.df=0;
  /* 1101d1d7 jmp dword ptr [edx*4 + 0x1101d300] */
  switch (EDX) {
    case 0: goto L_1101d310;
    case 1: goto L_1101d318;
    case 2: goto L_1101d328;
    case 3: goto L_1101d33c;
    default: x86_unimpl("switch@0x1101d1d7 out of table"); return;
  }
  /* 1101d1de mov edi, edi */
  EDI = (EDI);
L_1101d1e0:;
  /* 1101d1e0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1101d1e2 jmp dword ptr [ecx*4 + 0x1101d2b0] */
  switch (ECX) {
    case 0: goto L_1101d2f7;
    default: x86_unimpl("switch@0x1101d1e2 out of table"); return;
  }
  /* 1101d1e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1101d1ec:;
  /* 1101d1ec mov eax, edi */
  EAX = (EDI);
  /* 1101d1ee mov edx, 3 */
  EDX = (0x3u);
  /* 1101d1f3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101d1f6 jb 0x1101d204 */
  if (C.cf) goto L_1101d204;
  /* 1101d1f8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1101d1fb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101d1fd jmp dword ptr [eax*4 + 0x1101d208] */
  switch (EAX) {
    case 1: goto L_1101d218;
    case 2: goto L_1101d238;
    case 3: goto L_1101d260;
    default: x86_unimpl("switch@0x1101d1fd out of table"); return;
  }
L_1101d204:;
  /* 1101d204 jmp dword ptr [ecx*4 + 0x1101d300] */
  switch (ECX) {
    case 0: goto L_1101d310;
    case 1: goto L_1101d318;
    case 2: goto L_1101d328;
    case 3: goto L_1101d33c;
    default: x86_unimpl("switch@0x1101d204 out of table"); return;
  }
  /* 1101d20b nop  */
  /* nop */
L_1101d218:;
  /* 1101d218 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1101d21b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1101d21d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1101d220 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1101d221 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1101d224 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1101d225 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101d228 jb 0x1101d1e0 */
  if (C.cf) goto L_1101d1e0;
  /* 1101d22a std  */
  C.df=1;
  /* 1101d22b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1101d22d cld  */
  C.df=0;
  /* 1101d22e jmp dword ptr [edx*4 + 0x1101d300] */
  switch (EDX) {
    case 0: goto L_1101d310;
    case 1: goto L_1101d318;
    case 2: goto L_1101d328;
    case 3: goto L_1101d33c;
    default: x86_unimpl("switch@0x1101d22e out of table"); return;
  }
  /* 1101d235 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1101d238:;
  /* 1101d238 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1101d23b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1101d23d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1101d240 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1101d243 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1101d246 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1101d249 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101d24c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101d24f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101d252 jb 0x1101d1e0 */
  if (C.cf) goto L_1101d1e0;
  /* 1101d254 std  */
  C.df=1;
  /* 1101d255 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1101d257 cld  */
  C.df=0;
  /* 1101d258 jmp dword ptr [edx*4 + 0x1101d300] */
  switch (EDX) {
    case 0: goto L_1101d310;
    case 1: goto L_1101d318;
    case 2: goto L_1101d328;
    case 3: goto L_1101d33c;
    default: x86_unimpl("switch@0x1101d258 out of table"); return;
  }
  /* 1101d25f nop  */
  /* nop */
L_1101d260:;
  /* 1101d260 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1101d263 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1101d265 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1101d268 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1101d26b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1101d26e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1101d271 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1101d274 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1101d277 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101d27a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101d27d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101d280 jb 0x1101d1e0 */
  if (C.cf) goto L_1101d1e0;
  /* 1101d286 std  */
  C.df=1;
  /* 1101d287 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1101d289 cld  */
  C.df=0;
  /* 1101d28a jmp dword ptr [edx*4 + 0x1101d300] */
  switch (EDX) {
    case 0: goto L_1101d310;
    case 1: goto L_1101d318;
    case 2: goto L_1101d328;
    case 3: goto L_1101d33c;
    default: x86_unimpl("switch@0x1101d28a out of table"); return;
  }
  /* 1101d291 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1101d294 mov ah, 0xd2 */
  AH = (0xd2u);
  /* 1101d296 add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1101d298 mov esp, 0xc41101d2 */
  ESP = (0xc41101d2u);
  /* 1101d29d rol byte ptr [ecx], cl */
  { uint32_t _n=CL&0x7; if(_n){ uint32_t _r=(uint32_t)((uint8_t)(((uint8_t)(r8((uint32_t)(ECX)))<<((CL)&7))|((uint8_t)(r8((uint32_t)(ECX)))>>((8-((CL)&7))&7)))); w8((uint32_t)(ECX), (_r)); C.cf=_r&1; C.of=((_r>>7)&1)^(C.cf); } }
  /* 1101d29f adc esp, ecx */
  { uint32_t _a=(ESP),_b=(ECX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101d2a1 rol byte ptr [ecx], cl */
  { uint32_t _n=CL&0x7; if(_n){ uint32_t _r=(uint32_t)((uint8_t)(((uint8_t)(r8((uint32_t)(ECX)))<<((CL)&7))|((uint8_t)(r8((uint32_t)(ECX)))>>((8-((CL)&7))&7)))); w8((uint32_t)(ECX), (_r)); C.cf=_r&1; C.of=((_r>>7)&1)^(C.cf); } }
  /* 1101d2a3 adc esp, edx */
  { uint32_t _a=(ESP),_b=(EDX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101d2a5 rol byte ptr [ecx], cl */
  { uint32_t _n=CL&0x7; if(_n){ uint32_t _r=(uint32_t)((uint8_t)(((uint8_t)(r8((uint32_t)(ECX)))<<((CL)&7))|((uint8_t)(r8((uint32_t)(ECX)))>>((8-((CL)&7))&7)))); w8((uint32_t)(ECX), (_r)); C.cf=_r&1; C.of=((_r>>7)&1)^(C.cf); } }
  /* 1101d2a7 adc esp, ebx */
  { uint32_t _a=(ESP),_b=(EBX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101d2a9 rol byte ptr [ecx], cl */
  { uint32_t _n=CL&0x7; if(_n){ uint32_t _r=(uint32_t)((uint8_t)(((uint8_t)(r8((uint32_t)(ECX)))<<((CL)&7))|((uint8_t)(r8((uint32_t)(ECX)))>>((8-((CL)&7))&7)))); w8((uint32_t)(ECX), (_r)); C.cf=_r&1; C.of=((_r>>7)&1)^(C.cf); } }
  /* 1101d2ab adc esp, esp */
  { uint32_t _a=(ESP),_b=(ESP),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101d2ad rol byte ptr [ecx], cl */
  { uint32_t _n=CL&0x7; if(_n){ uint32_t _r=(uint32_t)((uint8_t)(((uint8_t)(r8((uint32_t)(ECX)))<<((CL)&7))|((uint8_t)(r8((uint32_t)(ECX)))>>((8-((CL)&7))&7)))); w8((uint32_t)(ECX), (_r)); C.cf=_r&1; C.of=((_r>>7)&1)^(C.cf); } }
  /* 1101d2b4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1101d2b8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1101d2bc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1101d2c0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1101d2c4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1101d2c8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1101d2cc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1101d2d0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1101d2d4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1101d2d8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1101d2dc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1101d2e0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1101d2e4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1101d2e8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1101d2ec lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1101d2f3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1101d2f5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1101d2f7:;
  /* 1101d2f7 jmp dword ptr [edx*4 + 0x1101d300] */
  switch (EDX) {
    case 0: goto L_1101d310;
    case 1: goto L_1101d318;
    case 2: goto L_1101d328;
    case 3: goto L_1101d33c;
    default: x86_unimpl("switch@0x1101d2f7 out of table"); return;
  }
  /* 1101d2fe mov edi, edi */
  EDI = (EDI);
L_1101d310:;
  /* 1101d310 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101d313 pop esi */
  ESI = (pop32());
  /* 1101d314 pop edi */
  EDI = (pop32());
  /* 1101d315 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1101d316 ret  */
  ESPCHK(0x1101d020u, _esp0);
  ESP += 4; return;
  /* 1101d317 nop  */
  /* nop */
L_1101d318:;
  /* 1101d318 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1101d31b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1101d31e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101d321 pop esi */
  ESI = (pop32());
  /* 1101d322 pop edi */
  EDI = (pop32());
  /* 1101d323 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1101d324 ret  */
  ESPCHK(0x1101d020u, _esp0);
  ESP += 4; return;
  /* 1101d325 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1101d328:;
  /* 1101d328 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1101d32b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1101d32e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1101d331 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1101d334 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101d337 pop esi */
  ESI = (pop32());
  /* 1101d338 pop edi */
  EDI = (pop32());
  /* 1101d339 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1101d33a ret  */
  ESPCHK(0x1101d020u, _esp0);
  ESP += 4; return;
  /* 1101d33b nop  */
  /* nop */
L_1101d33c:;
  /* 1101d33c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1101d33f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1101d342 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1101d345 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1101d348 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1101d34b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1101d34e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101d351 pop esi */
  ESI = (pop32());
  /* 1101d352 pop edi */
  EDI = (pop32());
  /* 1101d353 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1101d354 ret  */
  ESPCHK(0x1101d020u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d360 @ 0x1101d360 (421 bytes, 148 insns) */
void f_1101d360(void) {
  FTRACE(0x1101d360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101d360 push ebp */
  push32((uint32_t)(EBP));
  /* 1101d361 mov ebp, esp */
  EBP = (ESP);
  /* 1101d363 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1101d365 push 0x1103c1f0 */
  push32((uint32_t)(0x1103c1f0u));
  /* 1101d36a push 0x1101e238 */
  push32((uint32_t)(0x1101e238u));
  /* 1101d36f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1101d375 push eax */
  push32((uint32_t)(EAX));
  /* 1101d376 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1101d37d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101d380 push ebx */
  push32((uint32_t)(EBX));
  /* 1101d381 push esi */
  push32((uint32_t)(ESI));
  /* 1101d382 push edi */
  push32((uint32_t)(EDI));
  /* 1101d383 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1101d386 cmp dword ptr [0x110407c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110407c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101d38d jne 0x1101d3de */
  if (!C.zf) goto L_1101d3de;
  /* 1101d38f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1101d392 push eax */
  push32((uint32_t)(EAX));
  /* 1101d393 push 1 */
  push32((uint32_t)(0x1u));
  /* 1101d395 push 0x1103c1e8 */
  push32((uint32_t)(0x1103c1e8u));
  /* 1101d39a push 1 */
  push32((uint32_t)(0x1u));
  /* 1101d39c call dword ptr [0x11043308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043308))), 0x1101d3a2u);
  /* 1101d3a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101d3a4 je 0x1101d3b2 */
  if (C.zf) goto L_1101d3b2;
  /* 1101d3a6 mov dword ptr [0x110407c4], 1 */
  w32((uint32_t)(0x110407c4), (0x1u));
  /* 1101d3b0 jmp 0x1101d3de */
  goto L_1101d3de;
L_1101d3b2:;
  /* 1101d3b2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1101d3b5 push ecx */
  push32((uint32_t)(ECX));
  /* 1101d3b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1101d3b8 push 0x1103c1e4 */
  push32((uint32_t)(0x1103c1e4u));
  /* 1101d3bd push 1 */
  push32((uint32_t)(0x1u));
  /* 1101d3bf push 0 */
  push32((uint32_t)(0x0u));
  /* 1101d3c1 call dword ptr [0x11043318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043318))), 0x1101d3c7u);
  /* 1101d3c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101d3c9 je 0x1101d3d7 */
  if (C.zf) goto L_1101d3d7;
  /* 1101d3cb mov dword ptr [0x110407c4], 2 */
  w32((uint32_t)(0x110407c4), (0x2u));
  /* 1101d3d5 jmp 0x1101d3de */
  goto L_1101d3de;
L_1101d3d7:;
  /* 1101d3d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101d3d9 jmp 0x1101d508 */
  goto L_1101d508;
L_1101d3de:;
  /* 1101d3de cmp dword ptr [0x110407c4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x110407c4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101d3e5 jne 0x1101d415 */
  if (!C.zf) goto L_1101d415;
  /* 1101d3e7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101d3eb jne 0x1101d3f6 */
  if (!C.zf) goto L_1101d3f6;
  /* 1101d3ed mov edx, dword ptr [0x110407d0] */
  EDX = (r32((uint32_t)(0x110407d0)));
  /* 1101d3f3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1101d3f6:;
  /* 1101d3f6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1101d3f9 push eax */
  push32((uint32_t)(EAX));
  /* 1101d3fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1101d3fd push ecx */
  push32((uint32_t)(ECX));
  /* 1101d3fe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101d401 push edx */
  push32((uint32_t)(EDX));
  /* 1101d402 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101d405 push eax */
  push32((uint32_t)(EAX));
  /* 1101d406 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1101d409 push ecx */
  push32((uint32_t)(ECX));
  /* 1101d40a call dword ptr [0x11043318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043318))), 0x1101d410u);
  /* 1101d410 jmp 0x1101d508 */
  goto L_1101d508;
L_1101d415:;
  /* 1101d415 cmp dword ptr [0x110407c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110407c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101d41c jne 0x1101d506 */
  if (!C.zf) goto L_1101d506;
  /* 1101d422 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101d426 jne 0x1101d431 */
  if (!C.zf) goto L_1101d431;
  /* 1101d428 mov edx, dword ptr [0x110407e0] */
  EDX = (r32((uint32_t)(0x110407e0)));
  /* 1101d42e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1101d431:;
  /* 1101d431 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101d433 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101d435 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1101d438 push eax */
  push32((uint32_t)(EAX));
  /* 1101d439 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101d43c push ecx */
  push32((uint32_t)(ECX));
  /* 1101d43d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1101d440 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1101d442 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101d444 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1101d447 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101d44a push edx */
  push32((uint32_t)(EDX));
  /* 1101d44b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1101d44e push eax */
  push32((uint32_t)(EAX));
  /* 1101d44f call dword ptr [0x11043310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043310))), 0x1101d455u);
  /* 1101d455 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1101d458 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101d45c jne 0x1101d465 */
  if (!C.zf) goto L_1101d465;
  /* 1101d45e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101d460 jmp 0x1101d508 */
  goto L_1101d508;
L_1101d465:;
  /* 1101d465 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1101d46c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1101d46f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1101d471 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101d474 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1101d476 call 0x110182d0 */
  push32(0x1101d47bu); f_110182d0();
  /* 1101d47b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1101d47e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1101d481 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1101d484 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1101d487 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1101d48a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1101d48c push edx */
  push32((uint32_t)(EDX));
  /* 1101d48d push 0 */
  push32((uint32_t)(0x0u));
  /* 1101d48f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101d492 push eax */
  push32((uint32_t)(EAX));
  /* 1101d493 call 0x11018ea0 */
  push32(0x1101d498u); f_11018ea0();
  /* 1101d498 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101d49b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1101d4a2 jmp 0x1101d4bb */
  goto L_1101d4bb;
  /* 1101d4a4 mov eax, 1 */
  EAX = (0x1u);
  /* 1101d4a9 ret  */
  ESPCHK(0x1101d360u, _esp0);
  ESP += 4; return;
  /* 1101d4aa mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1101d4ad mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1101d4b4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1101d4bb:;
  /* 1101d4bb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101d4bf jne 0x1101d4c5 */
  if (!C.zf) goto L_1101d4c5;
  /* 1101d4c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101d4c3 jmp 0x1101d508 */
  goto L_1101d508;
L_1101d4c5:;
  /* 1101d4c5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1101d4c8 push ecx */
  push32((uint32_t)(ECX));
  /* 1101d4c9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101d4cc push edx */
  push32((uint32_t)(EDX));
  /* 1101d4cd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1101d4d0 push eax */
  push32((uint32_t)(EAX));
  /* 1101d4d1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101d4d4 push ecx */
  push32((uint32_t)(ECX));
  /* 1101d4d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1101d4d7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1101d4da push edx */
  push32((uint32_t)(EDX));
  /* 1101d4db call dword ptr [0x11043310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043310))), 0x1101d4e1u);
  /* 1101d4e1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1101d4e4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101d4e8 jne 0x1101d4ee */
  if (!C.zf) goto L_1101d4ee;
  /* 1101d4ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101d4ec jmp 0x1101d508 */
  goto L_1101d508;
L_1101d4ee:;
  /* 1101d4ee mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1101d4f1 push eax */
  push32((uint32_t)(EAX));
  /* 1101d4f2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1101d4f5 push ecx */
  push32((uint32_t)(ECX));
  /* 1101d4f6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101d4f9 push edx */
  push32((uint32_t)(EDX));
  /* 1101d4fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101d4fd push eax */
  push32((uint32_t)(EAX));
  /* 1101d4fe call dword ptr [0x11043308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043308))), 0x1101d504u);
  /* 1101d504 jmp 0x1101d508 */
  goto L_1101d508;
L_1101d506:;
  /* 1101d506 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1101d508:;
  /* 1101d508 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1101d50b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101d50e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1101d515 pop edi */
  EDI = (pop32());
  /* 1101d516 pop esi */
  ESI = (pop32());
  /* 1101d517 pop ebx */
  EBX = (pop32());
  /* 1101d518 mov esp, ebp */
  ESP = (EBP);
  /* 1101d51a pop ebp */
  EBP = (pop32());
  /* 1101d51b ret  */
  ESPCHK(0x1101d360u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d520 @ 0x1101d520 (727 bytes, 263 insns) */
void f_1101d520(void) {
  FTRACE(0x1101d520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101d520 push ebp */
  push32((uint32_t)(EBP));
  /* 1101d521 mov ebp, esp */
  EBP = (ESP);
  /* 1101d523 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1101d525 push 0x1103c200 */
  push32((uint32_t)(0x1103c200u));
  /* 1101d52a push 0x1101e238 */
  push32((uint32_t)(0x1101e238u));
  /* 1101d52f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1101d535 push eax */
  push32((uint32_t)(EAX));
  /* 1101d536 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1101d53d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101d540 push ebx */
  push32((uint32_t)(EBX));
  /* 1101d541 push esi */
  push32((uint32_t)(ESI));
  /* 1101d542 push edi */
  push32((uint32_t)(EDI));
  /* 1101d543 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1101d546 cmp dword ptr [0x110407e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110407e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101d54d jne 0x1101d5a6 */
  if (!C.zf) goto L_1101d5a6;
  /* 1101d54f push 0 */
  push32((uint32_t)(0x0u));
  /* 1101d551 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101d553 push 1 */
  push32((uint32_t)(0x1u));
  /* 1101d555 push 0x1103c1e8 */
  push32((uint32_t)(0x1103c1e8u));
  /* 1101d55a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1101d55f push 0 */
  push32((uint32_t)(0x0u));
  /* 1101d561 call dword ptr [0x1104330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104330c))), 0x1101d567u);
  /* 1101d567 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101d569 je 0x1101d577 */
  if (C.zf) goto L_1101d577;
  /* 1101d56b mov dword ptr [0x110407e8], 1 */
  w32((uint32_t)(0x110407e8), (0x1u));
  /* 1101d575 jmp 0x1101d5a6 */
  goto L_1101d5a6;
L_1101d577:;
  /* 1101d577 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101d579 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101d57b push 1 */
  push32((uint32_t)(0x1u));
  /* 1101d57d push 0x1103c1e4 */
  push32((uint32_t)(0x1103c1e4u));
  /* 1101d582 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1101d587 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101d589 call dword ptr [0x11043304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043304))), 0x1101d58fu);
  /* 1101d58f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101d591 je 0x1101d59f */
  if (C.zf) goto L_1101d59f;
  /* 1101d593 mov dword ptr [0x110407e8], 2 */
  w32((uint32_t)(0x110407e8), (0x2u));
  /* 1101d59d jmp 0x1101d5a6 */
  goto L_1101d5a6;
L_1101d59f:;
  /* 1101d59f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101d5a1 jmp 0x1101d811 */
  goto L_1101d811;
L_1101d5a6:;
  /* 1101d5a6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101d5aa jle 0x1101d5bf */
  if ((C.zf||C.sf!=C.of)) goto L_1101d5bf;
  /* 1101d5ac mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1101d5af push eax */
  push32((uint32_t)(EAX));
  /* 1101d5b0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1101d5b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1101d5b4 call 0x1101d830 */
  push32(0x1101d5b9u); f_1101d830();
  /* 1101d5b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101d5bc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1101d5bf:;
  /* 1101d5bf cmp dword ptr [0x110407e8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x110407e8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101d5c6 jne 0x1101d5eb */
  if (!C.zf) goto L_1101d5eb;
  /* 1101d5c8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1101d5cb push edx */
  push32((uint32_t)(EDX));
  /* 1101d5cc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1101d5cf push eax */
  push32((uint32_t)(EAX));
  /* 1101d5d0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1101d5d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1101d5d4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1101d5d7 push edx */
  push32((uint32_t)(EDX));
  /* 1101d5d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101d5db push eax */
  push32((uint32_t)(EAX));
  /* 1101d5dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101d5df push ecx */
  push32((uint32_t)(ECX));
  /* 1101d5e0 call dword ptr [0x11043304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043304))), 0x1101d5e6u);
  /* 1101d5e6 jmp 0x1101d811 */
  goto L_1101d811;
L_1101d5eb:;
  /* 1101d5eb cmp dword ptr [0x110407e8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110407e8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101d5f2 jne 0x1101d80f */
  if (!C.zf) goto L_1101d80f;
  /* 1101d5f8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101d5fc jne 0x1101d607 */
  if (!C.zf) goto L_1101d607;
  /* 1101d5fe mov edx, dword ptr [0x110407e0] */
  EDX = (r32((uint32_t)(0x110407e0)));
  /* 1101d604 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1101d607:;
  /* 1101d607 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101d609 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101d60b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1101d60e push eax */
  push32((uint32_t)(EAX));
  /* 1101d60f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1101d612 push ecx */
  push32((uint32_t)(ECX));
  /* 1101d613 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1101d616 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1101d618 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101d61a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1101d61d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101d620 push edx */
  push32((uint32_t)(EDX));
  /* 1101d621 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1101d624 push eax */
  push32((uint32_t)(EAX));
  /* 1101d625 call dword ptr [0x11043310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043310))), 0x1101d62bu);
  /* 1101d62b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1101d62e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101d632 jne 0x1101d63b */
  if (!C.zf) goto L_1101d63b;
  /* 1101d634 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101d636 jmp 0x1101d811 */
  goto L_1101d811;
L_1101d63b:;
  /* 1101d63b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1101d642 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1101d645 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1101d647 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101d64a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1101d64c call 0x110182d0 */
  push32(0x1101d651u); f_110182d0();
  /* 1101d651 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1101d654 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1101d657 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1101d65a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1101d65d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1101d664 jmp 0x1101d67d */
  goto L_1101d67d;
  /* 1101d666 mov eax, 1 */
  EAX = (0x1u);
  /* 1101d66b ret  */
  ESPCHK(0x1101d520u, _esp0);
  ESP += 4; return;
  /* 1101d66c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1101d66f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1101d676 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1101d67d:;
  /* 1101d67d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101d681 jne 0x1101d68a */
  if (!C.zf) goto L_1101d68a;
  /* 1101d683 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101d685 jmp 0x1101d811 */
  goto L_1101d811;
L_1101d68a:;
  /* 1101d68a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1101d68d push edx */
  push32((uint32_t)(EDX));
  /* 1101d68e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101d691 push eax */
  push32((uint32_t)(EAX));
  /* 1101d692 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1101d695 push ecx */
  push32((uint32_t)(ECX));
  /* 1101d696 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1101d699 push edx */
  push32((uint32_t)(EDX));
  /* 1101d69a push 1 */
  push32((uint32_t)(0x1u));
  /* 1101d69c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1101d69f push eax */
  push32((uint32_t)(EAX));
  /* 1101d6a0 call dword ptr [0x11043310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043310))), 0x1101d6a6u);
  /* 1101d6a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101d6a8 jne 0x1101d6b1 */
  if (!C.zf) goto L_1101d6b1;
  /* 1101d6aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101d6ac jmp 0x1101d811 */
  goto L_1101d811;
L_1101d6b1:;
  /* 1101d6b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101d6b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101d6b5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1101d6b8 push ecx */
  push32((uint32_t)(ECX));
  /* 1101d6b9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101d6bc push edx */
  push32((uint32_t)(EDX));
  /* 1101d6bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101d6c0 push eax */
  push32((uint32_t)(EAX));
  /* 1101d6c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101d6c4 push ecx */
  push32((uint32_t)(ECX));
  /* 1101d6c5 call dword ptr [0x1104330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104330c))), 0x1101d6cbu);
  /* 1101d6cb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1101d6ce cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101d6d2 jne 0x1101d6db */
  if (!C.zf) goto L_1101d6db;
  /* 1101d6d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101d6d6 jmp 0x1101d811 */
  goto L_1101d811;
L_1101d6db:;
  /* 1101d6db mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101d6de and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1101d6e4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101d6e6 je 0x1101d72b */
  if (C.zf) goto L_1101d72b;
  /* 1101d6e8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101d6ec je 0x1101d726 */
  if (C.zf) goto L_1101d726;
  /* 1101d6ee mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1101d6f1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101d6f4 jle 0x1101d6fd */
  if ((C.zf||C.sf!=C.of)) goto L_1101d6fd;
  /* 1101d6f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101d6f8 jmp 0x1101d811 */
  goto L_1101d811;
L_1101d6fd:;
  /* 1101d6fd mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1101d700 push ecx */
  push32((uint32_t)(ECX));
  /* 1101d701 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1101d704 push edx */
  push32((uint32_t)(EDX));
  /* 1101d705 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1101d708 push eax */
  push32((uint32_t)(EAX));
  /* 1101d709 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101d70c push ecx */
  push32((uint32_t)(ECX));
  /* 1101d70d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101d710 push edx */
  push32((uint32_t)(EDX));
  /* 1101d711 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101d714 push eax */
  push32((uint32_t)(EAX));
  /* 1101d715 call dword ptr [0x1104330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104330c))), 0x1101d71bu);
  /* 1101d71b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101d71d jne 0x1101d726 */
  if (!C.zf) goto L_1101d726;
  /* 1101d71f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101d721 jmp 0x1101d811 */
  goto L_1101d811;
L_1101d726:;
  /* 1101d726 jmp 0x1101d80a */
  goto L_1101d80a;
L_1101d72b:;
  /* 1101d72b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1101d72e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1101d731 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1101d738 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1101d73b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1101d73d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101d740 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1101d742 call 0x110182d0 */
  push32(0x1101d747u); f_110182d0();
  /* 1101d747 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1101d74a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1101d74d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1101d750 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1101d753 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1101d75a jmp 0x1101d773 */
  goto L_1101d773;
  /* 1101d75c mov eax, 1 */
  EAX = (0x1u);
  /* 1101d761 ret  */
  ESPCHK(0x1101d520u, _esp0);
  ESP += 4; return;
  /* 1101d762 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1101d765 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1101d76c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1101d773:;
  /* 1101d773 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101d777 jne 0x1101d780 */
  if (!C.zf) goto L_1101d780;
  /* 1101d779 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101d77b jmp 0x1101d811 */
  goto L_1101d811;
L_1101d780:;
  /* 1101d780 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1101d783 push eax */
  push32((uint32_t)(EAX));
  /* 1101d784 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1101d787 push ecx */
  push32((uint32_t)(ECX));
  /* 1101d788 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1101d78b push edx */
  push32((uint32_t)(EDX));
  /* 1101d78c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101d78f push eax */
  push32((uint32_t)(EAX));
  /* 1101d790 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101d793 push ecx */
  push32((uint32_t)(ECX));
  /* 1101d794 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101d797 push edx */
  push32((uint32_t)(EDX));
  /* 1101d798 call dword ptr [0x1104330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104330c))), 0x1101d79eu);
  /* 1101d79e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101d7a0 jne 0x1101d7a6 */
  if (!C.zf) goto L_1101d7a6;
  /* 1101d7a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101d7a4 jmp 0x1101d811 */
  goto L_1101d811;
L_1101d7a6:;
  /* 1101d7a6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101d7aa jne 0x1101d7da */
  if (!C.zf) goto L_1101d7da;
  /* 1101d7ac push 0 */
  push32((uint32_t)(0x0u));
  /* 1101d7ae push 0 */
  push32((uint32_t)(0x0u));
  /* 1101d7b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101d7b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101d7b4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1101d7b7 push eax */
  push32((uint32_t)(EAX));
  /* 1101d7b8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1101d7bb push ecx */
  push32((uint32_t)(ECX));
  /* 1101d7bc push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1101d7c1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1101d7c4 push edx */
  push32((uint32_t)(EDX));
  /* 1101d7c5 call dword ptr [0x1104335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104335c))), 0x1101d7cbu);
  /* 1101d7cb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1101d7ce cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101d7d2 jne 0x1101d7d8 */
  if (!C.zf) goto L_1101d7d8;
  /* 1101d7d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101d7d6 jmp 0x1101d811 */
  goto L_1101d811;
L_1101d7d8:;
  /* 1101d7d8 jmp 0x1101d80a */
  goto L_1101d80a;
L_1101d7da:;
  /* 1101d7da push 0 */
  push32((uint32_t)(0x0u));
  /* 1101d7dc push 0 */
  push32((uint32_t)(0x0u));
  /* 1101d7de mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1101d7e1 push eax */
  push32((uint32_t)(EAX));
  /* 1101d7e2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1101d7e5 push ecx */
  push32((uint32_t)(ECX));
  /* 1101d7e6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1101d7e9 push edx */
  push32((uint32_t)(EDX));
  /* 1101d7ea mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1101d7ed push eax */
  push32((uint32_t)(EAX));
  /* 1101d7ee push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1101d7f3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1101d7f6 push ecx */
  push32((uint32_t)(ECX));
  /* 1101d7f7 call dword ptr [0x1104335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104335c))), 0x1101d7fdu);
  /* 1101d7fd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1101d800 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101d804 jne 0x1101d80a */
  if (!C.zf) goto L_1101d80a;
  /* 1101d806 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101d808 jmp 0x1101d811 */
  goto L_1101d811;
L_1101d80a:;
  /* 1101d80a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1101d80d jmp 0x1101d811 */
  goto L_1101d811;
L_1101d80f:;
  /* 1101d80f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1101d811:;
  /* 1101d811 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1101d814 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101d817 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1101d81e pop edi */
  EDI = (pop32());
  /* 1101d81f pop esi */
  ESI = (pop32());
  /* 1101d820 pop ebx */
  EBX = (pop32());
  /* 1101d821 mov esp, ebp */
  ESP = (EBP);
  /* 1101d823 pop ebp */
  EBP = (pop32());
  /* 1101d824 ret  */
  ESPCHK(0x1101d520u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d830 @ 0x1101d830 (80 bytes, 32 insns) */
void f_1101d830(void) {
  FTRACE(0x1101d830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101d830 push ebp */
  push32((uint32_t)(EBP));
  /* 1101d831 mov ebp, esp */
  EBP = (ESP);
  /* 1101d833 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101d836 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101d839 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1101d83c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101d83f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1101d842:;
  /* 1101d842 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101d845 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101d848 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101d84b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1101d84e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101d850 je 0x1101d867 */
  if (C.zf) goto L_1101d867;
  /* 1101d852 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101d855 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1101d858 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101d85a je 0x1101d867 */
  if (C.zf) goto L_1101d867;
  /* 1101d85c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101d85f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101d862 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1101d865 jmp 0x1101d842 */
  goto L_1101d842;
L_1101d867:;
  /* 1101d867 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101d86a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1101d86d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101d86f jne 0x1101d879 */
  if (!C.zf) goto L_1101d879;
  /* 1101d871 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101d874 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101d877 jmp 0x1101d87c */
  goto L_1101d87c;
L_1101d879:;
  /* 1101d879 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1101d87c:;
  /* 1101d87c mov esp, ebp */
  ESP = (EBP);
  /* 1101d87e pop ebp */
  EBP = (pop32());
  /* 1101d87f ret  */
  ESPCHK(0x1101d830u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d880 @ 0x1101d880 (130 bytes, 43 insns) */
void f_1101d880(void) {
  FTRACE(0x1101d880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101d880 push ebp */
  push32((uint32_t)(EBP));
  /* 1101d881 mov ebp, esp */
  EBP = (ESP);
  /* 1101d883 push ecx */
  push32((uint32_t)(ECX));
  /* 1101d884 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101d887 cmp eax, dword ptr [0x110420dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110420dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101d88d jae 0x1101d8b1 */
  if (!C.cf) goto L_1101d8b1;
  /* 1101d88f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101d892 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1101d895 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101d898 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1101d89b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101d89e mov eax, dword ptr [ecx*4 + 0x11041fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11041fa0)));
  /* 1101d8a5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1101d8aa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1101d8ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1101d8af jne 0x1101d8cc */
  if (!C.zf) goto L_1101d8cc;
L_1101d8b1:;
  /* 1101d8b1 call 0x1101d000 */
  push32(0x1101d8b6u); f_1101d000();
  /* 1101d8b6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1101d8bc call 0x1101d010 */
  push32(0x1101d8c1u); f_1101d010();
  /* 1101d8c1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1101d8c7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1101d8ca jmp 0x1101d8fe */
  goto L_1101d8fe;
L_1101d8cc:;
  /* 1101d8cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101d8cf push edx */
  push32((uint32_t)(EDX));
  /* 1101d8d0 call 0x1101e820 */
  push32(0x1101d8d5u); f_1101e820();
  /* 1101d8d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101d8d8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1101d8db push eax */
  push32((uint32_t)(EAX));
  /* 1101d8dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101d8df push ecx */
  push32((uint32_t)(ECX));
  /* 1101d8e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101d8e3 push edx */
  push32((uint32_t)(EDX));
  /* 1101d8e4 call 0x1101d910 */
  push32(0x1101d8e9u); f_1101d910();
  /* 1101d8e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101d8ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1101d8ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101d8f2 push eax */
  push32((uint32_t)(EAX));
  /* 1101d8f3 call 0x1101e8b0 */
  push32(0x1101d8f8u); f_1101e8b0();
  /* 1101d8f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101d8fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1101d8fe:;
  /* 1101d8fe mov esp, ebp */
  ESP = (EBP);
  /* 1101d900 pop ebp */
  EBP = (pop32());
  /* 1101d901 ret  */
  ESPCHK(0x1101d880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d910 @ 0x1101d910 (178 bytes, 56 insns) */
void f_1101d910(void) {
  FTRACE(0x1101d910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101d910 push ebp */
  push32((uint32_t)(EBP));
  /* 1101d911 mov ebp, esp */
  EBP = (ESP);
  /* 1101d913 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101d916 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101d919 push eax */
  push32((uint32_t)(EAX));
  /* 1101d91a call 0x1101e6a0 */
  push32(0x1101d91fu); f_1101e6a0();
  /* 1101d91f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101d922 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1101d925 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101d929 jne 0x1101d93e */
  if (!C.zf) goto L_1101d93e;
  /* 1101d92b call 0x1101d000 */
  push32(0x1101d930u); f_1101d000();
  /* 1101d930 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1101d936 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1101d939 jmp 0x1101d9be */
  goto L_1101d9be;
L_1101d93e:;
  /* 1101d93e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1101d941 push ecx */
  push32((uint32_t)(ECX));
  /* 1101d942 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101d944 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101d947 push edx */
  push32((uint32_t)(EDX));
  /* 1101d948 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101d94b push eax */
  push32((uint32_t)(EAX));
  /* 1101d94c call dword ptr [0x110432fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110432fc))), 0x1101d952u);
  /* 1101d952 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1101d955 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101d959 jne 0x1101d966 */
  if (!C.zf) goto L_1101d966;
  /* 1101d95b call dword ptr [0x110433b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110433b4))), 0x1101d961u);
  /* 1101d961 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1101d964 jmp 0x1101d96d */
  goto L_1101d96d;
L_1101d966:;
  /* 1101d966 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1101d96d:;
  /* 1101d96d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101d971 je 0x1101d984 */
  if (C.zf) goto L_1101d984;
  /* 1101d973 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101d976 push ecx */
  push32((uint32_t)(ECX));
  /* 1101d977 call 0x1101cf60 */
  push32(0x1101d97cu); f_1101cf60();
  /* 1101d97c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101d97f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1101d982 jmp 0x1101d9be */
  goto L_1101d9be;
L_1101d984:;
  /* 1101d984 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101d987 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1101d98a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101d98d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1101d990 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101d993 mov ecx, dword ptr [edx*4 + 0x11041fa0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11041fa0)));
  /* 1101d99a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1101d99e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1101d9a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101d9a4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1101d9a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101d9aa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1101d9ad imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101d9b0 mov eax, dword ptr [eax*4 + 0x11041fa0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11041fa0)));
  /* 1101d9b7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1101d9bb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1101d9be:;
  /* 1101d9be mov esp, ebp */
  ESP = (EBP);
  /* 1101d9c0 pop ebp */
  EBP = (pop32());
  /* 1101d9c1 ret  */
  ESPCHK(0x1101d910u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d9d0 @ 0x1101d9d0 (130 bytes, 43 insns) */
void f_1101d9d0(void) {
  FTRACE(0x1101d9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101d9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1101d9d1 mov ebp, esp */
  EBP = (ESP);
  /* 1101d9d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1101d9d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101d9d7 cmp eax, dword ptr [0x110420dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110420dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101d9dd jae 0x1101da01 */
  if (!C.cf) goto L_1101da01;
  /* 1101d9df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101d9e2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1101d9e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101d9e8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1101d9eb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101d9ee mov eax, dword ptr [ecx*4 + 0x11041fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11041fa0)));
  /* 1101d9f5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1101d9fa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1101d9fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1101d9ff jne 0x1101da1c */
  if (!C.zf) goto L_1101da1c;
L_1101da01:;
  /* 1101da01 call 0x1101d000 */
  push32(0x1101da06u); f_1101d000();
  /* 1101da06 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1101da0c call 0x1101d010 */
  push32(0x1101da11u); f_1101d010();
  /* 1101da11 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1101da17 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1101da1a jmp 0x1101da4e */
  goto L_1101da4e;
L_1101da1c:;
  /* 1101da1c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101da1f push edx */
  push32((uint32_t)(EDX));
  /* 1101da20 call 0x1101e820 */
  push32(0x1101da25u); f_1101e820();
  /* 1101da25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101da28 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1101da2b push eax */
  push32((uint32_t)(EAX));
  /* 1101da2c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101da2f push ecx */
  push32((uint32_t)(ECX));
  /* 1101da30 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101da33 push edx */
  push32((uint32_t)(EDX));
  /* 1101da34 call 0x1101da60 */
  push32(0x1101da39u); f_1101da60();
  /* 1101da39 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101da3c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1101da3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101da42 push eax */
  push32((uint32_t)(EAX));
  /* 1101da43 call 0x1101e8b0 */
  push32(0x1101da48u); f_1101e8b0();
  /* 1101da48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101da4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1101da4e:;
  /* 1101da4e mov esp, ebp */
  ESP = (EBP);
  /* 1101da50 pop ebp */
  EBP = (pop32());
  /* 1101da51 ret  */
  ESPCHK(0x1101d9d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da60 @ 0x1101da60 (627 bytes, 182 insns) */
void f_1101da60(void) {
  FTRACE(0x1101da60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101da60 push ebp */
  push32((uint32_t)(EBP));
  /* 1101da61 mov ebp, esp */
  EBP = (ESP);
  /* 1101da63 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101da69 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1101da70 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101da73 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1101da79 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101da7d jne 0x1101da86 */
  if (!C.zf) goto L_1101da86;
  /* 1101da7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101da81 jmp 0x1101dccf */
  goto L_1101dccf;
L_1101da86:;
  /* 1101da86 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101da89 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1101da8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101da8f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1101da92 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101da95 mov eax, dword ptr [ecx*4 + 0x11041fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11041fa0)));
  /* 1101da9c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1101daa1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1101daa4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1101daa6 je 0x1101dab8 */
  if (C.zf) goto L_1101dab8;
  /* 1101daa8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1101daaa push 0 */
  push32((uint32_t)(0x0u));
  /* 1101daac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101daaf push edx */
  push32((uint32_t)(EDX));
  /* 1101dab0 call 0x1101d910 */
  push32(0x1101dab5u); f_1101d910();
  /* 1101dab5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1101dab8:;
  /* 1101dab8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101dabb sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1101dabe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101dac1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1101dac4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101dac7 mov edx, dword ptr [eax*4 + 0x11041fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11041fa0)));
  /* 1101dace movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1101dad3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1101dad8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101dada je 0x1101dbec */
  if (C.zf) goto L_1101dbec;
  /* 1101dae0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101dae3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1101dae6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1101daed:;
  /* 1101daed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101daf0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101daf3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101daf6 jae 0x1101dbea */
  if (!C.cf) goto L_1101dbea;
  /* 1101dafc lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1101db02 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1101db05:;
  /* 1101db05 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101db08 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1101db0e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101db10 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101db16 jge 0x1101db77 */
  if ((C.sf==C.of)) goto L_1101db77;
  /* 1101db18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101db1b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101db1e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101db21 jae 0x1101db77 */
  if (!C.cf) goto L_1101db77;
  /* 1101db23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101db26 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1101db28 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1101db2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101db31 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101db34 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1101db37 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1101db3e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101db41 jne 0x1101db61 */
  if (!C.zf) goto L_1101db61;
  /* 1101db43 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1101db49 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101db4c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1101db52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101db55 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1101db58 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101db5b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101db5e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1101db61:;
  /* 1101db61 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101db64 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1101db6a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1101db6c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101db6f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101db72 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1101db75 jmp 0x1101db05 */
  goto L_1101db05;
L_1101db77:;
  /* 1101db77 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101db79 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1101db7f push edx */
  push32((uint32_t)(EDX));
  /* 1101db80 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101db83 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1101db89 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101db8b push eax */
  push32((uint32_t)(EAX));
  /* 1101db8c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1101db92 push edx */
  push32((uint32_t)(EDX));
  /* 1101db93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101db96 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1101db99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101db9c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1101db9f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101dba2 mov edx, dword ptr [eax*4 + 0x11041fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11041fa0)));
  /* 1101dba9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1101dbac push eax */
  push32((uint32_t)(EAX));
  /* 1101dbad call dword ptr [0x11043374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043374))), 0x1101dbb3u);
  /* 1101dbb3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101dbb5 je 0x1101dbda */
  if (C.zf) goto L_1101dbda;
  /* 1101dbb7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101dbba add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101dbc0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1101dbc3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101dbc6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1101dbcc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101dbce cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101dbd4 jge 0x1101dbd8 */
  if ((C.sf==C.of)) goto L_1101dbd8;
  /* 1101dbd6 jmp 0x1101dbea */
  goto L_1101dbea;
L_1101dbd8:;
  /* 1101dbd8 jmp 0x1101dbe5 */
  goto L_1101dbe5;
L_1101dbda:;
  /* 1101dbda call dword ptr [0x110433b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110433b4))), 0x1101dbe0u);
  /* 1101dbe0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1101dbe3 jmp 0x1101dbea */
  goto L_1101dbea;
L_1101dbe5:;
  /* 1101dbe5 jmp 0x1101daed */
  goto L_1101daed;
L_1101dbea:;
  /* 1101dbea jmp 0x1101dc3c */
  goto L_1101dc3c;
L_1101dbec:;
  /* 1101dbec push 0 */
  push32((uint32_t)(0x0u));
  /* 1101dbee lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 1101dbf4 push ecx */
  push32((uint32_t)(ECX));
  /* 1101dbf5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1101dbf8 push edx */
  push32((uint32_t)(EDX));
  /* 1101dbf9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101dbfc push eax */
  push32((uint32_t)(EAX));
  /* 1101dbfd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101dc00 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1101dc03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101dc06 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1101dc09 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101dc0c mov eax, dword ptr [ecx*4 + 0x11041fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11041fa0)));
  /* 1101dc13 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1101dc16 push ecx */
  push32((uint32_t)(ECX));
  /* 1101dc17 call dword ptr [0x11043374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043374))), 0x1101dc1du);
  /* 1101dc1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101dc1f je 0x1101dc33 */
  if (C.zf) goto L_1101dc33;
  /* 1101dc21 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1101dc28 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1101dc2e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1101dc31 jmp 0x1101dc3c */
  goto L_1101dc3c;
L_1101dc33:;
  /* 1101dc33 call dword ptr [0x110433b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110433b4))), 0x1101dc39u);
  /* 1101dc39 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1101dc3c:;
  /* 1101dc3c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101dc40 jne 0x1101dcc6 */
  if (!C.zf) goto L_1101dcc6;
  /* 1101dc46 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101dc4a je 0x1101dc7a */
  if (C.zf) goto L_1101dc7a;
  /* 1101dc4c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101dc50 jne 0x1101dc69 */
  if (!C.zf) goto L_1101dc69;
  /* 1101dc52 call 0x1101d000 */
  push32(0x1101dc57u); f_1101d000();
  /* 1101dc57 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1101dc5d call 0x1101d010 */
  push32(0x1101dc62u); f_1101d010();
  /* 1101dc62 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101dc65 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1101dc67 jmp 0x1101dc75 */
  goto L_1101dc75;
L_1101dc69:;
  /* 1101dc69 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101dc6c push edx */
  push32((uint32_t)(EDX));
  /* 1101dc6d call 0x1101cf60 */
  push32(0x1101dc72u); f_1101cf60();
  /* 1101dc72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1101dc75:;
  /* 1101dc75 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1101dc78 jmp 0x1101dccf */
  goto L_1101dccf;
L_1101dc7a:;
  /* 1101dc7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101dc7d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1101dc80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101dc83 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1101dc86 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101dc89 mov edx, dword ptr [eax*4 + 0x11041fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11041fa0)));
  /* 1101dc90 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1101dc95 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1101dc98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101dc9a je 0x1101dcab */
  if (C.zf) goto L_1101dcab;
  /* 1101dc9c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101dc9f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1101dca2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101dca5 jne 0x1101dcab */
  if (!C.zf) goto L_1101dcab;
  /* 1101dca7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101dca9 jmp 0x1101dccf */
  goto L_1101dccf;
L_1101dcab:;
  /* 1101dcab call 0x1101d000 */
  push32(0x1101dcb0u); f_1101d000();
  /* 1101dcb0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 1101dcb6 call 0x1101d010 */
  push32(0x1101dcbbu); f_1101d010();
  /* 1101dcbb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1101dcc1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1101dcc4 jmp 0x1101dccf */
  goto L_1101dccf;
L_1101dcc6:;
  /* 1101dcc6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101dcc9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1101dccf:;
  /* 1101dccf mov esp, ebp */
  ESP = (EBP);
  /* 1101dcd1 pop ebp */
  EBP = (pop32());
  /* 1101dcd2 ret  */
  ESPCHK(0x1101da60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dce0 @ 0x1101dce0 (199 bytes, 68 insns) */
void f_1101dce0(void) {
  FTRACE(0x1101dce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101dce0 push ebp */
  push32((uint32_t)(EBP));
  /* 1101dce1 mov ebp, esp */
  EBP = (ESP);
  /* 1101dce3 push ecx */
  push32((uint32_t)(ECX));
  /* 1101dce4 push ebx */
  push32((uint32_t)(EBX));
  /* 1101dce5 push esi */
  push32((uint32_t)(ESI));
  /* 1101dce6 push edi */
  push32((uint32_t)(EDI));
L_1101dce7:;
  /* 1101dce7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101dceb jne 0x1101dd0b */
  if (!C.zf) goto L_1101dd0b;
  /* 1101dced push 0x1103c148 */
  push32((uint32_t)(0x1103c148u));
  /* 1101dcf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101dcf4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1101dcf6 push 0x1103c218 */
  push32((uint32_t)(0x1103c218u));
  /* 1101dcfb push 2 */
  push32((uint32_t)(0x2u));
  /* 1101dcfd call 0x110141f0 */
  push32(0x1101dd02u); f_110141f0();
  /* 1101dd02 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101dd05 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101dd08 jne 0x1101dd0b */
  if (!C.zf) goto L_1101dd0b;
  /* 1101dd0a int3  */
  x86_unimpl("int3 @ 0x1101dd0a");
L_1101dd0b:;
  /* 1101dd0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101dd0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101dd0f jne 0x1101dce7 */
  if (!C.zf) goto L_1101dce7;
  /* 1101dd11 mov ecx, dword ptr [0x110407ec] */
  ECX = (r32((uint32_t)(0x110407ec)));
  /* 1101dd17 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101dd1a mov dword ptr [0x110407ec], ecx */
  w32((uint32_t)(0x110407ec), (ECX));
  /* 1101dd20 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101dd23 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1101dd26 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1101dd28 push 0x1103c218 */
  push32((uint32_t)(0x1103c218u));
  /* 1101dd2d push 2 */
  push32((uint32_t)(0x2u));
  /* 1101dd2f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1101dd34 call 0x11015130 */
  push32(0x1101dd39u); f_11015130();
  /* 1101dd39 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101dd3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101dd3f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1101dd42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101dd45 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101dd49 je 0x1101dd66 */
  if (C.zf) goto L_1101dd66;
  /* 1101dd4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101dd4e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1101dd51 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1101dd54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101dd57 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1101dd5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101dd5d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 1101dd64 jmp 0x1101dd8b */
  goto L_1101dd8b;
L_1101dd66:;
  /* 1101dd66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101dd69 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1101dd6c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1101dd6f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101dd72 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1101dd75 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101dd78 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101dd7b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101dd7e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1101dd81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101dd84 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1101dd8b:;
  /* 1101dd8b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101dd8e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101dd91 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1101dd94 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1101dd96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101dd99 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1101dda0 pop edi */
  EDI = (pop32());
  /* 1101dda1 pop esi */
  ESI = (pop32());
  /* 1101dda2 pop ebx */
  EBX = (pop32());
  /* 1101dda3 mov esp, ebp */
  ESP = (EBP);
  /* 1101dda5 pop ebp */
  EBP = (pop32());
  /* 1101dda6 ret  */
  ESPCHK(0x1101dce0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x1101ddb0 (50 bytes, 17 insns) */
void f_1101ddb0(void) {
  FTRACE(0x1101ddb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101ddb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1101ddb1 mov ebp, esp */
  EBP = (ESP);
  /* 1101ddb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101ddb6 cmp eax, dword ptr [0x110420dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110420dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ddbc jb 0x1101ddc2 */
  if (C.cf) goto L_1101ddc2;
  /* 1101ddbe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101ddc0 jmp 0x1101dde0 */
  goto L_1101dde0;
L_1101ddc2:;
  /* 1101ddc2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101ddc5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1101ddc8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101ddcb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1101ddce imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101ddd1 mov eax, dword ptr [ecx*4 + 0x11041fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11041fa0)));
  /* 1101ddd8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1101dddd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_1101dde0:;
  /* 1101dde0 pop ebp */
  EBP = (pop32());
  /* 1101dde1 ret  */
  ESPCHK(0x1101ddb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ddf0 @ 0x1101ddf0 (300 bytes, 80 insns) */
void f_1101ddf0(void) {
  FTRACE(0x1101ddf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101ddf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1101ddf1 mov ebp, esp */
  EBP = (ESP);
  /* 1101ddf3 push ecx */
  push32((uint32_t)(ECX));
  /* 1101ddf4 cmp dword ptr [0x11041ca0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11041ca0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ddfb jne 0x1101de09 */
  if (!C.zf) goto L_1101de09;
  /* 1101ddfd mov dword ptr [0x11041ca0], 0x200 */
  w32((uint32_t)(0x11041ca0), (0x200u));
  /* 1101de07 jmp 0x1101de1c */
  goto L_1101de1c;
L_1101de09:;
  /* 1101de09 cmp dword ptr [0x11041ca0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x11041ca0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101de10 jge 0x1101de1c */
  if ((C.sf==C.of)) goto L_1101de1c;
  /* 1101de12 mov dword ptr [0x11041ca0], 0x14 */
  w32((uint32_t)(0x11041ca0), (0x14u));
L_1101de1c:;
  /* 1101de1c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 1101de21 push 0x1103c224 */
  push32((uint32_t)(0x1103c224u));
  /* 1101de26 push 2 */
  push32((uint32_t)(0x2u));
  /* 1101de28 push 4 */
  push32((uint32_t)(0x4u));
  /* 1101de2a mov eax, dword ptr [0x11041ca0] */
  EAX = (r32((uint32_t)(0x11041ca0)));
  /* 1101de2f push eax */
  push32((uint32_t)(EAX));
  /* 1101de30 call 0x11015540 */
  push32(0x1101de35u); f_11015540();
  /* 1101de35 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101de38 mov dword ptr [0x11040960], eax */
  w32((uint32_t)(0x11040960), (EAX));
  /* 1101de3d cmp dword ptr [0x11040960], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11040960))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101de44 jne 0x1101de85 */
  if (!C.zf) goto L_1101de85;
  /* 1101de46 mov dword ptr [0x11041ca0], 0x14 */
  w32((uint32_t)(0x11041ca0), (0x14u));
  /* 1101de50 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 1101de55 push 0x1103c224 */
  push32((uint32_t)(0x1103c224u));
  /* 1101de5a push 2 */
  push32((uint32_t)(0x2u));
  /* 1101de5c push 4 */
  push32((uint32_t)(0x4u));
  /* 1101de5e mov ecx, dword ptr [0x11041ca0] */
  ECX = (r32((uint32_t)(0x11041ca0)));
  /* 1101de64 push ecx */
  push32((uint32_t)(ECX));
  /* 1101de65 call 0x11015540 */
  push32(0x1101de6au); f_11015540();
  /* 1101de6a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101de6d mov dword ptr [0x11040960], eax */
  w32((uint32_t)(0x11040960), (EAX));
  /* 1101de72 cmp dword ptr [0x11040960], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11040960))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101de79 jne 0x1101de85 */
  if (!C.zf) goto L_1101de85;
  /* 1101de7b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1101de7d call 0x110140a0 */
  push32(0x1101de82u); f_110140a0();
  /* 1101de82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1101de85:;
  /* 1101de85 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1101de8c jmp 0x1101de97 */
  goto L_1101de97;
L_1101de8e:;
  /* 1101de8e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101de91 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101de94 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1101de97:;
  /* 1101de97 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101de9b jge 0x1101deb6 */
  if ((C.sf==C.of)) goto L_1101deb6;
  /* 1101de9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101dea0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1101dea3 add eax, 0x1103f120 */
  { uint32_t _a=(EAX),_b=(0x1103f120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101dea8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101deab mov edx, dword ptr [0x11040960] */
  EDX = (r32((uint32_t)(0x11040960)));
  /* 1101deb1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1101deb4 jmp 0x1101de8e */
  goto L_1101de8e;
L_1101deb6:;
  /* 1101deb6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1101debd jmp 0x1101dec8 */
  goto L_1101dec8;
L_1101debf:;
  /* 1101debf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101dec2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101dec5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1101dec8:;
  /* 1101dec8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101decc jge 0x1101df18 */
  if ((C.sf==C.of)) goto L_1101df18;
  /* 1101dece mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101ded1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1101ded4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101ded7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1101deda imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101dedd mov eax, dword ptr [ecx*4 + 0x11041fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11041fa0)));
  /* 1101dee4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101dee8 je 0x1101df06 */
  if (C.zf) goto L_1101df06;
  /* 1101deea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101deed sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1101def0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101def3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1101def6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101def9 mov eax, dword ptr [ecx*4 + 0x11041fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11041fa0)));
  /* 1101df00 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101df04 jne 0x1101df16 */
  if (!C.zf) goto L_1101df16;
L_1101df06:;
  /* 1101df06 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101df09 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1101df0c mov dword ptr [ecx + 0x1103f130], 0xffffffff */
  w32((uint32_t)(ECX + 0x1103f130), (0xffffffffu));
L_1101df16:;
  /* 1101df16 jmp 0x1101debf */
  goto L_1101debf;
L_1101df18:;
  /* 1101df18 mov esp, ebp */
  ESP = (EBP);
  /* 1101df1a pop ebp */
  EBP = (pop32());
  /* 1101df1b ret  */
  ESPCHK(0x1101ddf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df20 @ 0x1101df20 (26 bytes, 9 insns) */
void f_1101df20(void) {
  FTRACE(0x1101df20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101df20 push ebp */
  push32((uint32_t)(EBP));
  /* 1101df21 mov ebp, esp */
  EBP = (ESP);
  /* 1101df23 call 0x1101eb20 */
  push32(0x1101df28u); f_1101eb20();
  /* 1101df28 movsx eax, byte ptr [0x11040604] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11040604))));
  /* 1101df2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101df31 je 0x1101df38 */
  if (C.zf) goto L_1101df38;
  /* 1101df33 call 0x1101e8e0 */
  push32(0x1101df38u); f_1101e8e0();
L_1101df38:;
  /* 1101df38 pop ebp */
  EBP = (pop32());
  /* 1101df39 ret  */
  ESPCHK(0x1101df20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df40 @ 0x1101df40 (61 bytes, 20 insns) */
void f_1101df40(void) {
  FTRACE(0x1101df40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101df40 push ebp */
  push32((uint32_t)(EBP));
  /* 1101df41 mov ebp, esp */
  EBP = (ESP);
  /* 1101df43 cmp dword ptr [ebp + 8], 0x1103f120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1103f120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101df4a jb 0x1101df6e */
  if (C.cf) goto L_1101df6e;
  /* 1101df4c cmp dword ptr [ebp + 8], 0x1103f380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1103f380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101df53 ja 0x1101df6e */
  if ((!C.cf&&!C.zf)) goto L_1101df6e;
  /* 1101df55 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101df58 sub eax, 0x1103f120 */
  { uint32_t _a=(EAX),_b=(0x1103f120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101df5d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1101df60 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101df63 push eax */
  push32((uint32_t)(EAX));
  /* 1101df64 call 0x11018b30 */
  push32(0x1101df69u); f_11018b30();
  /* 1101df69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101df6c jmp 0x1101df7b */
  goto L_1101df7b;
L_1101df6e:;
  /* 1101df6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101df71 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101df74 push ecx */
  push32((uint32_t)(ECX));
  /* 1101df75 call dword ptr [0x11043338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043338))), 0x1101df7bu);
L_1101df7b:;
  /* 1101df7b pop ebp */
  EBP = (pop32());
  /* 1101df7c ret  */
  ESPCHK(0x1101df40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df80 @ 0x1101df80 (41 bytes, 16 insns) */
void f_1101df80(void) {
  FTRACE(0x1101df80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101df80 push ebp */
  push32((uint32_t)(EBP));
  /* 1101df81 mov ebp, esp */
  EBP = (ESP);
  /* 1101df83 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101df87 jge 0x1101df9a */
  if ((C.sf==C.of)) goto L_1101df9a;
  /* 1101df89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101df8c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101df8f push eax */
  push32((uint32_t)(EAX));
  /* 1101df90 call 0x11018b30 */
  push32(0x1101df95u); f_11018b30();
  /* 1101df95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101df98 jmp 0x1101dfa7 */
  goto L_1101dfa7;
L_1101df9a:;
  /* 1101df9a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101df9d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101dfa0 push ecx */
  push32((uint32_t)(ECX));
  /* 1101dfa1 call dword ptr [0x11043338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043338))), 0x1101dfa7u);
L_1101dfa7:;
  /* 1101dfa7 pop ebp */
  EBP = (pop32());
  /* 1101dfa8 ret  */
  ESPCHK(0x1101df80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dfb0 @ 0x1101dfb0 (61 bytes, 20 insns) */
void f_1101dfb0(void) {
  FTRACE(0x1101dfb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101dfb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1101dfb1 mov ebp, esp */
  EBP = (ESP);
  /* 1101dfb3 cmp dword ptr [ebp + 8], 0x1103f120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1103f120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101dfba jb 0x1101dfde */
  if (C.cf) goto L_1101dfde;
  /* 1101dfbc cmp dword ptr [ebp + 8], 0x1103f380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1103f380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101dfc3 ja 0x1101dfde */
  if ((!C.cf&&!C.zf)) goto L_1101dfde;
  /* 1101dfc5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101dfc8 sub eax, 0x1103f120 */
  { uint32_t _a=(EAX),_b=(0x1103f120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101dfcd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1101dfd0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101dfd3 push eax */
  push32((uint32_t)(EAX));
  /* 1101dfd4 call 0x11018bd0 */
  push32(0x1101dfd9u); f_11018bd0();
  /* 1101dfd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101dfdc jmp 0x1101dfeb */
  goto L_1101dfeb;
L_1101dfde:;
  /* 1101dfde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101dfe1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101dfe4 push ecx */
  push32((uint32_t)(ECX));
  /* 1101dfe5 call dword ptr [0x11043334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043334))), 0x1101dfebu);
L_1101dfeb:;
  /* 1101dfeb pop ebp */
  EBP = (pop32());
  /* 1101dfec ret  */
  ESPCHK(0x1101dfb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dff0 @ 0x1101dff0 (41 bytes, 16 insns) */
void f_1101dff0(void) {
  FTRACE(0x1101dff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101dff0 push ebp */
  push32((uint32_t)(EBP));
  /* 1101dff1 mov ebp, esp */
  EBP = (ESP);
  /* 1101dff3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101dff7 jge 0x1101e00a */
  if ((C.sf==C.of)) goto L_1101e00a;
  /* 1101dff9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101dffc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101dfff push eax */
  push32((uint32_t)(EAX));
  /* 1101e000 call 0x11018bd0 */
  push32(0x1101e005u); f_11018bd0();
  /* 1101e005 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101e008 jmp 0x1101e017 */
  goto L_1101e017;
L_1101e00a:;
  /* 1101e00a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101e00d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101e010 push ecx */
  push32((uint32_t)(ECX));
  /* 1101e011 call dword ptr [0x11043334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043334))), 0x1101e017u);
L_1101e017:;
  /* 1101e017 pop ebp */
  EBP = (pop32());
  /* 1101e018 ret  */
  ESPCHK(0x1101dff0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e020 @ 0x1101e020 (119 bytes, 34 insns) */
void f_1101e020(void) {
  FTRACE(0x1101e020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101e020 push ebp */
  push32((uint32_t)(EBP));
  /* 1101e021 mov ebp, esp */
  EBP = (ESP);
  /* 1101e023 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101e026 push 0x1104095c */
  push32((uint32_t)(0x1104095cu));
  /* 1101e02b call dword ptr [0x11043388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043388))), 0x1101e031u);
  /* 1101e031 cmp dword ptr [0x1104094c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1104094c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101e038 je 0x1101e058 */
  if (C.zf) goto L_1101e058;
  /* 1101e03a push 0x1104095c */
  push32((uint32_t)(0x1104095cu));
  /* 1101e03f call dword ptr [0x11043378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043378))), 0x1101e045u);
  /* 1101e045 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1101e047 call 0x11018b30 */
  push32(0x1101e04cu); f_11018b30();
  /* 1101e04c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101e04f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1101e056 jmp 0x1101e05f */
  goto L_1101e05f;
L_1101e058:;
  /* 1101e058 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1101e05f:;
  /* 1101e05f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 1101e063 push eax */
  push32((uint32_t)(EAX));
  /* 1101e064 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101e067 push ecx */
  push32((uint32_t)(ECX));
  /* 1101e068 call 0x1101e0a0 */
  push32(0x1101e06du); f_1101e0a0();
  /* 1101e06d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101e070 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1101e073 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101e077 je 0x1101e085 */
  if (C.zf) goto L_1101e085;
  /* 1101e079 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1101e07b call 0x11018bd0 */
  push32(0x1101e080u); f_11018bd0();
  /* 1101e080 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101e083 jmp 0x1101e090 */
  goto L_1101e090;
L_1101e085:;
  /* 1101e085 push 0x1104095c */
  push32((uint32_t)(0x1104095cu));
  /* 1101e08a call dword ptr [0x11043378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043378))), 0x1101e090u);
L_1101e090:;
  /* 1101e090 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101e093 mov esp, ebp */
  ESP = (EBP);
  /* 1101e095 pop ebp */
  EBP = (pop32());
  /* 1101e096 ret  */
  ESPCHK(0x1101e020u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0a0 @ 0x1101e0a0 (160 bytes, 50 insns) */
void f_1101e0a0(void) {
  FTRACE(0x1101e0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101e0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1101e0a1 mov ebp, esp */
  EBP = (ESP);
  /* 1101e0a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101e0a6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101e0aa jne 0x1101e0b3 */
  if (!C.zf) goto L_1101e0b3;
  /* 1101e0ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101e0ae jmp 0x1101e13c */
  goto L_1101e13c;
L_1101e0b3:;
  /* 1101e0b3 cmp dword ptr [0x110407d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110407d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101e0ba jne 0x1101e0ea */
  if (!C.zf) goto L_1101e0ea;
  /* 1101e0bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101e0bf and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1101e0c4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101e0c9 jle 0x1101e0db */
  if ((C.zf||C.sf!=C.of)) goto L_1101e0db;
  /* 1101e0cb call 0x1101d000 */
  push32(0x1101e0d0u); f_1101d000();
  /* 1101e0d0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1101e0d6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1101e0d9 jmp 0x1101e13c */
  goto L_1101e13c;
L_1101e0db:;
  /* 1101e0db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101e0de mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 1101e0e1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1101e0e3 mov eax, 1 */
  EAX = (0x1u);
  /* 1101e0e8 jmp 0x1101e13c */
  goto L_1101e13c;
L_1101e0ea:;
  /* 1101e0ea mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1101e0f1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1101e0f4 push eax */
  push32((uint32_t)(EAX));
  /* 1101e0f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101e0f7 mov ecx, dword ptr [0x1103eea4] */
  ECX = (r32((uint32_t)(0x1103eea4)));
  /* 1101e0fd push ecx */
  push32((uint32_t)(ECX));
  /* 1101e0fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101e101 push edx */
  push32((uint32_t)(EDX));
  /* 1101e102 push 1 */
  push32((uint32_t)(0x1u));
  /* 1101e104 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1101e107 push eax */
  push32((uint32_t)(EAX));
  /* 1101e108 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1101e10d mov ecx, dword ptr [0x110407e0] */
  ECX = (r32((uint32_t)(0x110407e0)));
  /* 1101e113 push ecx */
  push32((uint32_t)(ECX));
  /* 1101e114 call dword ptr [0x1104335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104335c))), 0x1101e11au);
  /* 1101e11a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1101e11d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101e121 je 0x1101e129 */
  if (C.zf) goto L_1101e129;
  /* 1101e123 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101e127 je 0x1101e139 */
  if (C.zf) goto L_1101e139;
L_1101e129:;
  /* 1101e129 call 0x1101d000 */
  push32(0x1101e12eu); f_1101d000();
  /* 1101e12e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1101e134 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1101e137 jmp 0x1101e13c */
  goto L_1101e13c;
L_1101e139:;
  /* 1101e139 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1101e13c:;
  /* 1101e13c mov esp, ebp */
  ESP = (EBP);
  /* 1101e13e pop ebp */
  EBP = (pop32());
  /* 1101e13f ret  */
  ESPCHK(0x1101e0a0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1101e140 (32 bytes, 18 insns) */
void f_1101e140(void) {
  FTRACE(0x1101e140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101e140 push ebp */
  push32((uint32_t)(EBP));
  /* 1101e141 mov ebp, esp */
  EBP = (ESP);
  /* 1101e143 push ebx */
  push32((uint32_t)(EBX));
  /* 1101e144 push esi */
  push32((uint32_t)(ESI));
  /* 1101e145 push edi */
  push32((uint32_t)(EDI));
  /* 1101e146 push ebp */
  push32((uint32_t)(EBP));
  /* 1101e147 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101e149 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101e14b push 0x1101e158 */
  push32((uint32_t)(0x1101e158u));
  /* 1101e150 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1101e153 call 0x1102588c */
  push32(0x1101e158u); f_1102588c();
  /* 1101e158 pop ebp */
  EBP = (pop32());
  /* 1101e159 pop edi */
  EDI = (pop32());
  /* 1101e15a pop esi */
  ESI = (pop32());
  /* 1101e15b pop ebx */
  EBX = (pop32());
  /* 1101e15c mov esp, ebp */
  ESP = (EBP);
  /* 1101e15e pop ebp */
  EBP = (pop32());
  /* 1101e15f ret  */
  ESPCHK(0x1101e140u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1101e182 (104 bytes, 33 insns) */
void f_1101e182(void) {
  FTRACE(0x1101e182u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101e182 push ebx */
  push32((uint32_t)(EBX));
  /* 1101e183 push esi */
  push32((uint32_t)(ESI));
  /* 1101e184 push edi */
  push32((uint32_t)(EDI));
  /* 1101e185 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1101e189 push eax */
  push32((uint32_t)(EAX));
  /* 1101e18a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1101e18c push 0x1101e160 */
  push32((uint32_t)(0x1101e160u));
  /* 1101e191 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1101e198 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1101e19f:;
  /* 1101e19f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1101e1a3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1101e1a6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1101e1a9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101e1ac je 0x1101e1dc */
  if (C.zf) goto L_1101e1dc;
  /* 1101e1ae cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101e1b2 je 0x1101e1dc */
  if (C.zf) goto L_1101e1dc;
  /* 1101e1b4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1101e1b7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1101e1ba mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1101e1be mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1101e1c1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101e1c6 jne 0x1101e1da */
  if (!C.zf) goto L_1101e1da;
  /* 1101e1c8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1101e1cd mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1101e1d1 call 0x1101e216 */
  push32(0x1101e1d6u); f_1101e216();
  /* 1101e1d6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1101e1dau);
L_1101e1da:;
  /* 1101e1da jmp 0x1101e19f */
  goto L_1101e19f;
L_1101e1dc:;
  /* 1101e1dc pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1101e1e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101e1e6 pop edi */
  EDI = (pop32());
  /* 1101e1e7 pop esi */
  ESI = (pop32());
  /* 1101e1e8 pop ebx */
  EBX = (pop32());
  /* 1101e1e9 ret  */
  ESPCHK(0x1101e182u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e216 @ 0x1101e216 (24 bytes, 10 insns) */
void f_1101e216(void) {
  FTRACE(0x1101e216u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101e216 push ebx */
  push32((uint32_t)(EBX));
  /* 1101e217 push ecx */
  push32((uint32_t)(ECX));
  /* 1101e218 mov ebx, 0x1103f3b8 */
  EBX = (0x1103f3b8u);
  /* 1101e21d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101e220 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1101e223 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1101e226 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1101e229 pop ecx */
  ECX = (pop32());
  /* 1101e22a pop ebx */
  EBX = (pop32());
  /* 1101e22b ret 4 */
  ESPCHK(0x1101e216u, _esp0);
  ESP += 8; return;
}

/* FUN_1000e2f5 @ 0x1101e2f5 (27 bytes, 11 insns) */
void f_1101e2f5(void) {
  FTRACE(0x1101e2f5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101e2f5 push ebp */
  push32((uint32_t)(EBP));
  /* 1101e2f6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1101e2fa mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1101e2fc mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1101e2ff push eax */
  push32((uint32_t)(EAX));
  /* 1101e300 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1101e303 push eax */
  push32((uint32_t)(EAX));
  /* 1101e304 call 0x1101e182 */
  push32(0x1101e309u); f_1101e182();
  /* 1101e309 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101e30c pop ebp */
  EBP = (pop32());
  /* 1101e30d ret 4 */
  ESPCHK(0x1101e2f5u, _esp0);
  ESP += 8; return;
}

/* FUN_1000e310 @ 0x1101e310 (482 bytes, 138 insns) */
void f_1101e310(void) {
  FTRACE(0x1101e310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101e310 push ebp */
  push32((uint32_t)(EBP));
  /* 1101e311 mov ebp, esp */
  EBP = (ESP);
  /* 1101e313 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101e316 push esi */
  push32((uint32_t)(ESI));
  /* 1101e317 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1101e31e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1101e320 call 0x11018b30 */
  push32(0x1101e325u); f_11018b30();
  /* 1101e325 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101e328 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1101e32f jmp 0x1101e33a */
  goto L_1101e33a;
L_1101e331:;
  /* 1101e331 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101e334 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101e337 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1101e33a:;
  /* 1101e33a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101e33e jge 0x1101e4e0 */
  if ((C.sf==C.of)) goto L_1101e4e0;
  /* 1101e344 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101e347 cmp dword ptr [ecx*4 + 0x11041fa0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11041fa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101e34f je 0x1101e446 */
  if (C.zf) goto L_1101e446;
  /* 1101e355 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101e358 mov eax, dword ptr [edx*4 + 0x11041fa0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11041fa0)));
  /* 1101e35f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1101e362 jmp 0x1101e36d */
  goto L_1101e36d;
L_1101e364:;
  /* 1101e364 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101e367 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101e36a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1101e36d:;
  /* 1101e36d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101e370 mov eax, dword ptr [edx*4 + 0x11041fa0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11041fa0)));
  /* 1101e377 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101e37c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101e37f jae 0x1101e436 */
  if (!C.cf) goto L_1101e436;
  /* 1101e385 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101e388 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1101e38c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1101e38f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101e391 jne 0x1101e431 */
  if (!C.zf) goto L_1101e431;
  /* 1101e397 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101e39a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101e39e jne 0x1101e3d9 */
  if (!C.zf) goto L_1101e3d9;
  /* 1101e3a0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1101e3a2 call 0x11018b30 */
  push32(0x1101e3a7u); f_11018b30();
  /* 1101e3a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101e3aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101e3ad cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101e3b1 jne 0x1101e3cf */
  if (!C.zf) goto L_1101e3cf;
  /* 1101e3b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101e3b6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101e3b9 push edx */
  push32((uint32_t)(EDX));
  /* 1101e3ba call dword ptr [0x11043348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043348))), 0x1101e3c0u);
  /* 1101e3c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101e3c3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1101e3c6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101e3c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101e3cc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1101e3cf:;
  /* 1101e3cf push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1101e3d1 call 0x11018bd0 */
  push32(0x1101e3d6u); f_11018bd0();
  /* 1101e3d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1101e3d9:;
  /* 1101e3d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101e3dc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101e3df push eax */
  push32((uint32_t)(EAX));
  /* 1101e3e0 call dword ptr [0x11043338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043338))), 0x1101e3e6u);
  /* 1101e3e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101e3e9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1101e3ed and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1101e3f0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101e3f2 je 0x1101e406 */
  if (C.zf) goto L_1101e406;
  /* 1101e3f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101e3f7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101e3fa push eax */
  push32((uint32_t)(EAX));
  /* 1101e3fb call dword ptr [0x11043334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043334))), 0x1101e401u);
  /* 1101e401 jmp 0x1101e364 */
  goto L_1101e364;
L_1101e406:;
  /* 1101e406 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101e409 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1101e40f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101e412 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1101e415 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101e418 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101e41b sub eax, dword ptr [edx*4 + 0x11041fa0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x11041fa0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101e422 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1101e423 mov esi, 0x24 */
  ESI = (0x24u);
  /* 1101e428 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1101e42a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101e42c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1101e42f jmp 0x1101e436 */
  goto L_1101e436;
L_1101e431:;
  /* 1101e431 jmp 0x1101e364 */
  goto L_1101e364;
L_1101e436:;
  /* 1101e436 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101e43a je 0x1101e441 */
  if (C.zf) goto L_1101e441;
  /* 1101e43c jmp 0x1101e4e0 */
  goto L_1101e4e0;
L_1101e441:;
  /* 1101e441 jmp 0x1101e4db */
  goto L_1101e4db;
L_1101e446:;
  /* 1101e446 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1101e448 push 0x1103c22c */
  push32((uint32_t)(0x1103c22cu));
  /* 1101e44d push 2 */
  push32((uint32_t)(0x2u));
  /* 1101e44f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1101e454 call 0x11015130 */
  push32(0x1101e459u); f_11015130();
  /* 1101e459 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101e45c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1101e45f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101e463 je 0x1101e4d9 */
  if (C.zf) goto L_1101e4d9;
  /* 1101e465 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101e468 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101e46b mov dword ptr [eax*4 + 0x11041fa0], ecx */
  w32((uint32_t)(EAX*4 + 0x11041fa0), (ECX));
  /* 1101e472 mov edx, dword ptr [0x110420dc] */
  EDX = (r32((uint32_t)(0x110420dc)));
  /* 1101e478 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101e47b mov dword ptr [0x110420dc], edx */
  w32((uint32_t)(0x110420dc), (EDX));
  /* 1101e481 jmp 0x1101e48c */
  goto L_1101e48c;
L_1101e483:;
  /* 1101e483 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101e486 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101e489 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1101e48c:;
  /* 1101e48c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101e48f mov edx, dword ptr [ecx*4 + 0x11041fa0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11041fa0)));
  /* 1101e496 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101e49c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101e49f jae 0x1101e4c4 */
  if (!C.cf) goto L_1101e4c4;
  /* 1101e4a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101e4a4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1101e4a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101e4ab mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1101e4b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101e4b4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1101e4b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101e4bb mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1101e4c2 jmp 0x1101e483 */
  goto L_1101e483;
L_1101e4c4:;
  /* 1101e4c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101e4c7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1101e4ca mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1101e4cd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101e4d0 push edx */
  push32((uint32_t)(EDX));
  /* 1101e4d1 call 0x1101e820 */
  push32(0x1101e4d6u); f_1101e820();
  /* 1101e4d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1101e4d9:;
  /* 1101e4d9 jmp 0x1101e4e0 */
  goto L_1101e4e0;
L_1101e4db:;
  /* 1101e4db jmp 0x1101e331 */
  goto L_1101e331;
L_1101e4e0:;
  /* 1101e4e0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1101e4e2 call 0x11018bd0 */
  push32(0x1101e4e7u); f_11018bd0();
  /* 1101e4e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101e4ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101e4ed pop esi */
  ESI = (pop32());
  /* 1101e4ee mov esp, ebp */
  ESP = (EBP);
  /* 1101e4f0 pop ebp */
  EBP = (pop32());
  /* 1101e4f1 ret  */
  ESPCHK(0x1101e310u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x1101e500 (183 bytes, 57 insns) */
void f_1101e500(void) {
  FTRACE(0x1101e500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101e500 push ebp */
  push32((uint32_t)(EBP));
  /* 1101e501 mov ebp, esp */
  EBP = (ESP);
  /* 1101e503 push ecx */
  push32((uint32_t)(ECX));
  /* 1101e504 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101e507 cmp eax, dword ptr [0x110420dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110420dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101e50d jae 0x1101e59a */
  if (!C.cf) goto L_1101e59a;
  /* 1101e513 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101e516 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1101e519 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101e51c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1101e51f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101e522 mov eax, dword ptr [ecx*4 + 0x11041fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11041fa0)));
  /* 1101e529 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101e52d jne 0x1101e59a */
  if (!C.zf) goto L_1101e59a;
  /* 1101e52f cmp dword ptr [0x110405c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110405c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101e536 jne 0x1101e57a */
  if (!C.zf) goto L_1101e57a;
  /* 1101e538 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101e53b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1101e53e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101e542 je 0x1101e552 */
  if (C.zf) goto L_1101e552;
  /* 1101e544 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101e548 je 0x1101e560 */
  if (C.zf) goto L_1101e560;
  /* 1101e54a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101e54e je 0x1101e56e */
  if (C.zf) goto L_1101e56e;
  /* 1101e550 jmp 0x1101e57a */
  goto L_1101e57a;
L_1101e552:;
  /* 1101e552 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101e555 push edx */
  push32((uint32_t)(EDX));
  /* 1101e556 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1101e558 call dword ptr [0x11043300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043300))), 0x1101e55eu);
  /* 1101e55e jmp 0x1101e57a */
  goto L_1101e57a;
L_1101e560:;
  /* 1101e560 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101e563 push eax */
  push32((uint32_t)(EAX));
  /* 1101e564 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1101e566 call dword ptr [0x11043300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043300))), 0x1101e56cu);
  /* 1101e56c jmp 0x1101e57a */
  goto L_1101e57a;
L_1101e56e:;
  /* 1101e56e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101e571 push ecx */
  push32((uint32_t)(ECX));
  /* 1101e572 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1101e574 call dword ptr [0x11043300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043300))), 0x1101e57au);
L_1101e57a:;
  /* 1101e57a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101e57d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1101e580 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101e583 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1101e586 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101e589 mov ecx, dword ptr [edx*4 + 0x11041fa0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11041fa0)));
  /* 1101e590 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101e593 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 1101e596 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101e598 jmp 0x1101e5b3 */
  goto L_1101e5b3;
L_1101e59a:;
  /* 1101e59a call 0x1101d000 */
  push32(0x1101e59fu); f_1101d000();
  /* 1101e59f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1101e5a5 call 0x1101d010 */
  push32(0x1101e5aau); f_1101d010();
  /* 1101e5aa mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1101e5b0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1101e5b3:;
  /* 1101e5b3 mov esp, ebp */
  ESP = (EBP);
  /* 1101e5b5 pop ebp */
  EBP = (pop32());
  /* 1101e5b6 ret  */
  ESPCHK(0x1101e500u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5c0 @ 0x1101e5c0 (216 bytes, 63 insns) */
void f_1101e5c0(void) {
  FTRACE(0x1101e5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101e5c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1101e5c1 mov ebp, esp */
  EBP = (ESP);
  /* 1101e5c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1101e5c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101e5c7 cmp eax, dword ptr [0x110420dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110420dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101e5cd jae 0x1101e67b */
  if (!C.cf) goto L_1101e67b;
  /* 1101e5d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101e5d6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1101e5d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101e5dc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1101e5df imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101e5e2 mov eax, dword ptr [ecx*4 + 0x11041fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11041fa0)));
  /* 1101e5e9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1101e5ee and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1101e5f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1101e5f3 je 0x1101e67b */
  if (C.zf) goto L_1101e67b;
  /* 1101e5f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101e5fc sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1101e5ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101e602 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1101e605 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101e608 mov ecx, dword ptr [edx*4 + 0x11041fa0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11041fa0)));
  /* 1101e60f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101e613 je 0x1101e67b */
  if (C.zf) goto L_1101e67b;
  /* 1101e615 cmp dword ptr [0x110405c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110405c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101e61c jne 0x1101e65a */
  if (!C.zf) goto L_1101e65a;
  /* 1101e61e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101e621 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1101e624 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101e628 je 0x1101e638 */
  if (C.zf) goto L_1101e638;
  /* 1101e62a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101e62e je 0x1101e644 */
  if (C.zf) goto L_1101e644;
  /* 1101e630 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101e634 je 0x1101e650 */
  if (C.zf) goto L_1101e650;
  /* 1101e636 jmp 0x1101e65a */
  goto L_1101e65a;
L_1101e638:;
  /* 1101e638 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101e63a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1101e63c call dword ptr [0x11043300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043300))), 0x1101e642u);
  /* 1101e642 jmp 0x1101e65a */
  goto L_1101e65a;
L_1101e644:;
  /* 1101e644 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101e646 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1101e648 call dword ptr [0x11043300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043300))), 0x1101e64eu);
  /* 1101e64e jmp 0x1101e65a */
  goto L_1101e65a;
L_1101e650:;
  /* 1101e650 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101e652 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1101e654 call dword ptr [0x11043300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043300))), 0x1101e65au);
L_1101e65a:;
  /* 1101e65a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101e65d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1101e660 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101e663 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1101e666 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101e669 mov edx, dword ptr [eax*4 + 0x11041fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11041fa0)));
  /* 1101e670 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 1101e677 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101e679 jmp 0x1101e694 */
  goto L_1101e694;
L_1101e67b:;
  /* 1101e67b call 0x1101d000 */
  push32(0x1101e680u); f_1101d000();
  /* 1101e680 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1101e686 call 0x1101d010 */
  push32(0x1101e68bu); f_1101d010();
  /* 1101e68b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1101e691 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1101e694:;
  /* 1101e694 mov esp, ebp */
  ESP = (EBP);
  /* 1101e696 pop ebp */
  EBP = (pop32());
  /* 1101e697 ret  */
  ESPCHK(0x1101e5c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e6a0 @ 0x1101e6a0 (102 bytes, 30 insns) */
void f_1101e6a0(void) {
  FTRACE(0x1101e6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101e6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1101e6a1 mov ebp, esp */
  EBP = (ESP);
  /* 1101e6a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101e6a6 cmp eax, dword ptr [0x110420dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110420dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101e6ac jae 0x1101e6eb */
  if (!C.cf) goto L_1101e6eb;
  /* 1101e6ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101e6b1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1101e6b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101e6b7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1101e6ba imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101e6bd mov eax, dword ptr [ecx*4 + 0x11041fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11041fa0)));
  /* 1101e6c4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1101e6c9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1101e6cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1101e6ce je 0x1101e6eb */
  if (C.zf) goto L_1101e6eb;
  /* 1101e6d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101e6d3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1101e6d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101e6d9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1101e6dc imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101e6df mov ecx, dword ptr [edx*4 + 0x11041fa0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11041fa0)));
  /* 1101e6e6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 1101e6e9 jmp 0x1101e704 */
  goto L_1101e704;
L_1101e6eb:;
  /* 1101e6eb call 0x1101d000 */
  push32(0x1101e6f0u); f_1101d000();
  /* 1101e6f0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1101e6f6 call 0x1101d010 */
  push32(0x1101e6fbu); f_1101d010();
  /* 1101e6fb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1101e701 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1101e704:;
  /* 1101e704 pop ebp */
  EBP = (pop32());
  /* 1101e705 ret  */
  ESPCHK(0x1101e6a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e710 @ 0x1101e710 (260 bytes, 83 insns) */
void f_1101e710(void) {
  FTRACE(0x1101e710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101e710 push ebp */
  push32((uint32_t)(EBP));
  /* 1101e711 mov ebp, esp */
  EBP = (ESP);
  /* 1101e713 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101e716 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1101e71a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101e71d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1101e720 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101e722 je 0x1101e72d */
  if (C.zf) goto L_1101e72d;
  /* 1101e724 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1101e727 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1101e72a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1101e72d:;
  /* 1101e72d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101e730 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1101e736 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101e738 je 0x1101e742 */
  if (C.zf) goto L_1101e742;
  /* 1101e73a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1101e73d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1101e73f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_1101e742:;
  /* 1101e742 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101e745 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1101e74b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1101e74d je 0x1101e758 */
  if (C.zf) goto L_1101e758;
  /* 1101e74f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1101e752 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1101e755 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1101e758:;
  /* 1101e758 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101e75b push eax */
  push32((uint32_t)(EAX));
  /* 1101e75c call dword ptr [0x110433a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110433a0))), 0x1101e762u);
  /* 1101e762 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1101e765 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101e769 jne 0x1101e782 */
  if (!C.zf) goto L_1101e782;
  /* 1101e76b call dword ptr [0x110433b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110433b4))), 0x1101e771u);
  /* 1101e771 push eax */
  push32((uint32_t)(EAX));
  /* 1101e772 call 0x1101cf60 */
  push32(0x1101e777u); f_1101cf60();
  /* 1101e777 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101e77a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1101e77d jmp 0x1101e810 */
  goto L_1101e810;
L_1101e782:;
  /* 1101e782 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101e786 jne 0x1101e793 */
  if (!C.zf) goto L_1101e793;
  /* 1101e788 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1101e78b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1101e78e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1101e791 jmp 0x1101e7a2 */
  goto L_1101e7a2;
L_1101e793:;
  /* 1101e793 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101e797 jne 0x1101e7a2 */
  if (!C.zf) goto L_1101e7a2;
  /* 1101e799 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1101e79c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1101e79f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1101e7a2:;
  /* 1101e7a2 call 0x1101e310 */
  push32(0x1101e7a7u); f_1101e310();
  /* 1101e7a7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1101e7aa cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101e7ae jne 0x1101e7cb */
  if (!C.zf) goto L_1101e7cb;
  /* 1101e7b0 call 0x1101d000 */
  push32(0x1101e7b5u); f_1101d000();
  /* 1101e7b5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 1101e7bb call 0x1101d010 */
  push32(0x1101e7c0u); f_1101d010();
  /* 1101e7c0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1101e7c6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1101e7c9 jmp 0x1101e810 */
  goto L_1101e810;
L_1101e7cb:;
  /* 1101e7cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101e7ce push eax */
  push32((uint32_t)(EAX));
  /* 1101e7cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101e7d2 push ecx */
  push32((uint32_t)(ECX));
  /* 1101e7d3 call 0x1101e500 */
  push32(0x1101e7d8u); f_1101e500();
  /* 1101e7d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101e7db mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1101e7de or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 1101e7e1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1101e7e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101e7e7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1101e7ea mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101e7ed and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1101e7f0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101e7f3 mov edx, dword ptr [eax*4 + 0x11041fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11041fa0)));
  /* 1101e7fa mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1101e7fd mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 1101e801 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101e804 push ecx */
  push32((uint32_t)(ECX));
  /* 1101e805 call 0x1101e8b0 */
  push32(0x1101e80au); f_1101e8b0();
  /* 1101e80a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101e80d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1101e810:;
  /* 1101e810 mov esp, ebp */
  ESP = (EBP);
  /* 1101e812 pop ebp */
  EBP = (pop32());
  /* 1101e813 ret  */
  ESPCHK(0x1101e710u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e820 @ 0x1101e820 (134 bytes, 44 insns) */
void f_1101e820(void) {
  FTRACE(0x1101e820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101e820 push ebp */
  push32((uint32_t)(EBP));
  /* 1101e821 mov ebp, esp */
  EBP = (ESP);
  /* 1101e823 push ecx */
  push32((uint32_t)(ECX));
  /* 1101e824 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101e827 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1101e82a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101e82d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1101e830 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101e833 mov edx, dword ptr [eax*4 + 0x11041fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11041fa0)));
  /* 1101e83a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101e83c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1101e83f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101e842 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101e846 jne 0x1101e881 */
  if (!C.zf) goto L_1101e881;
  /* 1101e848 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1101e84a call 0x11018b30 */
  push32(0x1101e84fu); f_11018b30();
  /* 1101e84f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101e852 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101e855 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101e859 jne 0x1101e877 */
  if (!C.zf) goto L_1101e877;
  /* 1101e85b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101e85e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101e861 push edx */
  push32((uint32_t)(EDX));
  /* 1101e862 call dword ptr [0x11043348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043348))), 0x1101e868u);
  /* 1101e868 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101e86b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1101e86e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101e871 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101e874 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1101e877:;
  /* 1101e877 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1101e879 call 0x11018bd0 */
  push32(0x1101e87eu); f_11018bd0();
  /* 1101e87e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1101e881:;
  /* 1101e881 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101e884 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1101e887 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101e88a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1101e88d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101e890 mov edx, dword ptr [eax*4 + 0x11041fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11041fa0)));
  /* 1101e897 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1101e89b push eax */
  push32((uint32_t)(EAX));
  /* 1101e89c call dword ptr [0x11043338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043338))), 0x1101e8a2u);
  /* 1101e8a2 mov esp, ebp */
  ESP = (EBP);
  /* 1101e8a4 pop ebp */
  EBP = (pop32());
  /* 1101e8a5 ret  */
  ESPCHK(0x1101e820u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x1101e8b0 (38 bytes, 13 insns) */
void f_1101e8b0(void) {
  FTRACE(0x1101e8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101e8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1101e8b1 mov ebp, esp */
  EBP = (ESP);
  /* 1101e8b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101e8b6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1101e8b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101e8bc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1101e8bf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101e8c2 mov edx, dword ptr [eax*4 + 0x11041fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11041fa0)));
  /* 1101e8c9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1101e8cd push eax */
  push32((uint32_t)(EAX));
  /* 1101e8ce call dword ptr [0x11043334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043334))), 0x1101e8d4u);
  /* 1101e8d4 pop ebp */
  EBP = (pop32());
  /* 1101e8d5 ret  */
  ESPCHK(0x1101e8b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e8e0 @ 0x1101e8e0 (218 bytes, 63 insns) */
void f_1101e8e0(void) {
  FTRACE(0x1101e8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101e8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1101e8e1 mov ebp, esp */
  EBP = (ESP);
  /* 1101e8e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101e8e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1101e8ed push 2 */
  push32((uint32_t)(0x2u));
  /* 1101e8ef call 0x11018b30 */
  push32(0x1101e8f4u); f_11018b30();
  /* 1101e8f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101e8f7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1101e8fe jmp 0x1101e909 */
  goto L_1101e909;
L_1101e900:;
  /* 1101e900 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101e903 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101e906 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1101e909:;
  /* 1101e909 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101e90c cmp ecx, dword ptr [0x11041ca0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11041ca0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101e912 jge 0x1101e9a9 */
  if ((C.sf==C.of)) goto L_1101e9a9;
  /* 1101e918 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101e91b mov eax, dword ptr [0x11040960] */
  EAX = (r32((uint32_t)(0x11040960)));
  /* 1101e920 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101e924 je 0x1101e9a4 */
  if (C.zf) goto L_1101e9a4;
  /* 1101e926 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101e929 mov edx, dword ptr [0x11040960] */
  EDX = (r32((uint32_t)(0x11040960)));
  /* 1101e92f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1101e932 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1101e935 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1101e93b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1101e93d je 0x1101e961 */
  if (C.zf) goto L_1101e961;
  /* 1101e93f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101e942 mov eax, dword ptr [0x11040960] */
  EAX = (r32((uint32_t)(0x11040960)));
  /* 1101e947 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1101e94a push ecx */
  push32((uint32_t)(ECX));
  /* 1101e94b call 0x1101f6d0 */
  push32(0x1101e950u); f_1101f6d0();
  /* 1101e950 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101e953 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101e956 je 0x1101e961 */
  if (C.zf) goto L_1101e961;
  /* 1101e958 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101e95b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101e95e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1101e961:;
  /* 1101e961 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101e965 jl 0x1101e9a4 */
  if ((C.sf!=C.of)) goto L_1101e9a4;
  /* 1101e967 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101e96a mov ecx, dword ptr [0x11040960] */
  ECX = (r32((uint32_t)(0x11040960)));
  /* 1101e970 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1101e973 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101e976 push edx */
  push32((uint32_t)(EDX));
  /* 1101e977 call dword ptr [0x110433c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110433c4))), 0x1101e97du);
  /* 1101e97d push 2 */
  push32((uint32_t)(0x2u));
  /* 1101e97f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101e982 mov ecx, dword ptr [0x11040960] */
  ECX = (r32((uint32_t)(0x11040960)));
  /* 1101e988 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1101e98b push edx */
  push32((uint32_t)(EDX));
  /* 1101e98c call 0x11015bc0 */
  push32(0x1101e991u); f_11015bc0();
  /* 1101e991 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101e994 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101e997 mov ecx, dword ptr [0x11040960] */
  ECX = (r32((uint32_t)(0x11040960)));
  /* 1101e99d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_1101e9a4:;
  /* 1101e9a4 jmp 0x1101e900 */
  goto L_1101e900;
L_1101e9a9:;
  /* 1101e9a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1101e9ab call 0x11018bd0 */
  push32(0x1101e9b0u); f_11018bd0();
  /* 1101e9b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101e9b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101e9b6 mov esp, ebp */
  ESP = (EBP);
  /* 1101e9b8 pop ebp */
  EBP = (pop32());
  /* 1101e9b9 ret  */
  ESPCHK(0x1101e8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e9c0 @ 0x1101e9c0 (68 bytes, 26 insns) */
void f_1101e9c0(void) {
  FTRACE(0x1101e9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101e9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1101e9c1 mov ebp, esp */
  EBP = (ESP);
  /* 1101e9c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1101e9c4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101e9c8 jne 0x1101e9d6 */
  if (!C.zf) goto L_1101e9d6;
  /* 1101e9ca push 0 */
  push32((uint32_t)(0x0u));
  /* 1101e9cc call 0x1101eb30 */
  push32(0x1101e9d1u); f_1101eb30();
  /* 1101e9d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101e9d4 jmp 0x1101ea00 */
  goto L_1101ea00;
L_1101e9d6:;
  /* 1101e9d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101e9d9 push eax */
  push32((uint32_t)(EAX));
  /* 1101e9da call 0x1101df40 */
  push32(0x1101e9dfu); f_1101df40();
  /* 1101e9df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101e9e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101e9e5 push ecx */
  push32((uint32_t)(ECX));
  /* 1101e9e6 call 0x1101ea10 */
  push32(0x1101e9ebu); f_1101ea10();
  /* 1101e9eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101e9ee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1101e9f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101e9f4 push edx */
  push32((uint32_t)(EDX));
  /* 1101e9f5 call 0x1101dfb0 */
  push32(0x1101e9fau); f_1101dfb0();
  /* 1101e9fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101e9fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1101ea00:;
  /* 1101ea00 mov esp, ebp */
  ESP = (EBP);
  /* 1101ea02 pop ebp */
  EBP = (pop32());
  /* 1101ea03 ret  */
  ESPCHK(0x1101e9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea10 @ 0x1101ea10 (65 bytes, 26 insns) */
void f_1101ea10(void) {
  FTRACE(0x1101ea10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101ea10 push ebp */
  push32((uint32_t)(EBP));
  /* 1101ea11 mov ebp, esp */
  EBP = (ESP);
  /* 1101ea13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101ea16 push eax */
  push32((uint32_t)(EAX));
  /* 1101ea17 call 0x1101ea60 */
  push32(0x1101ea1cu); f_1101ea60();
  /* 1101ea1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ea1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101ea21 je 0x1101ea28 */
  if (C.zf) goto L_1101ea28;
  /* 1101ea23 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1101ea26 jmp 0x1101ea4f */
  goto L_1101ea4f;
L_1101ea28:;
  /* 1101ea28 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101ea2b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1101ea2e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1101ea34 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101ea36 je 0x1101ea4d */
  if (C.zf) goto L_1101ea4d;
  /* 1101ea38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101ea3b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1101ea3e push ecx */
  push32((uint32_t)(ECX));
  /* 1101ea3f call 0x1101f820 */
  push32(0x1101ea44u); f_1101f820();
  /* 1101ea44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ea47 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1101ea49 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101ea4b jmp 0x1101ea4f */
  goto L_1101ea4f;
L_1101ea4d:;
  /* 1101ea4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1101ea4f:;
  /* 1101ea4f pop ebp */
  EBP = (pop32());
  /* 1101ea50 ret  */
  ESPCHK(0x1101ea10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea60 @ 0x1101ea60 (183 bytes, 62 insns) */
void f_1101ea60(void) {
  FTRACE(0x1101ea60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101ea60 push ebp */
  push32((uint32_t)(EBP));
  /* 1101ea61 mov ebp, esp */
  EBP = (ESP);
  /* 1101ea63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101ea66 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1101ea6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101ea70 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1101ea73 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101ea76 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1101ea79 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1101ea7c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ea7f jne 0x1101eafb */
  if (!C.zf) goto L_1101eafb;
  /* 1101ea81 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101ea84 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1101ea87 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1101ea8d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1101ea8f je 0x1101eafb */
  if (C.zf) goto L_1101eafb;
  /* 1101ea91 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101ea94 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101ea97 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1101ea99 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101ea9c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101ea9f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101eaa3 jle 0x1101eafb */
  if ((C.zf||C.sf!=C.of)) goto L_1101eafb;
  /* 1101eaa5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101eaa8 push edx */
  push32((uint32_t)(EDX));
  /* 1101eaa9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101eaac mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1101eaaf push ecx */
  push32((uint32_t)(ECX));
  /* 1101eab0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101eab3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1101eab6 push eax */
  push32((uint32_t)(EAX));
  /* 1101eab7 call 0x1101d9d0 */
  push32(0x1101eabcu); f_1101d9d0();
  /* 1101eabc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101eabf cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101eac2 jne 0x1101eae5 */
  if (!C.zf) goto L_1101eae5;
  /* 1101eac4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101eac7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1101eaca and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1101ead0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101ead2 je 0x1101eae3 */
  if (C.zf) goto L_1101eae3;
  /* 1101ead4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101ead7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1101eada and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1101eadd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101eae0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_1101eae3:;
  /* 1101eae3 jmp 0x1101eafb */
  goto L_1101eafb;
L_1101eae5:;
  /* 1101eae5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101eae8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1101eaeb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1101eaee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101eaf1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1101eaf4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1101eafb:;
  /* 1101eafb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101eafe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101eb01 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1101eb04 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1101eb06 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101eb09 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1101eb10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101eb13 mov esp, ebp */
  ESP = (EBP);
  /* 1101eb15 pop ebp */
  EBP = (pop32());
  /* 1101eb16 ret  */
  ESPCHK(0x1101ea60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb20 @ 0x1101eb20 (15 bytes, 7 insns) */
void f_1101eb20(void) {
  FTRACE(0x1101eb20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101eb20 push ebp */
  push32((uint32_t)(EBP));
  /* 1101eb21 mov ebp, esp */
  EBP = (ESP);
  /* 1101eb23 push 1 */
  push32((uint32_t)(0x1u));
  /* 1101eb25 call 0x1101eb30 */
  push32(0x1101eb2au); f_1101eb30();
  /* 1101eb2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101eb2d pop ebp */
  EBP = (pop32());
  /* 1101eb2e ret  */
  ESPCHK(0x1101eb20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb30 @ 0x1101eb30 (319 bytes, 94 insns) */
void f_1101eb30(void) {
  FTRACE(0x1101eb30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101eb30 push ebp */
  push32((uint32_t)(EBP));
  /* 1101eb31 mov ebp, esp */
  EBP = (ESP);
  /* 1101eb33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101eb36 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1101eb3d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1101eb44 push 2 */
  push32((uint32_t)(0x2u));
  /* 1101eb46 call 0x11018b30 */
  push32(0x1101eb4bu); f_11018b30();
  /* 1101eb4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101eb4e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1101eb55 jmp 0x1101eb60 */
  goto L_1101eb60;
L_1101eb57:;
  /* 1101eb57 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101eb5a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101eb5d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1101eb60:;
  /* 1101eb60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101eb63 cmp ecx, dword ptr [0x11041ca0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11041ca0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101eb69 jge 0x1101ec53 */
  if ((C.sf==C.of)) goto L_1101ec53;
  /* 1101eb6f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101eb72 mov eax, dword ptr [0x11040960] */
  EAX = (r32((uint32_t)(0x11040960)));
  /* 1101eb77 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101eb7b je 0x1101ec4e */
  if (C.zf) goto L_1101ec4e;
  /* 1101eb81 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101eb84 mov edx, dword ptr [0x11040960] */
  EDX = (r32((uint32_t)(0x11040960)));
  /* 1101eb8a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1101eb8d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1101eb90 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1101eb96 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1101eb98 je 0x1101ec4e */
  if (C.zf) goto L_1101ec4e;
  /* 1101eb9e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101eba1 mov eax, dword ptr [0x11040960] */
  EAX = (r32((uint32_t)(0x11040960)));
  /* 1101eba6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1101eba9 push ecx */
  push32((uint32_t)(ECX));
  /* 1101ebaa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101ebad push edx */
  push32((uint32_t)(EDX));
  /* 1101ebae call 0x1101df80 */
  push32(0x1101ebb3u); f_1101df80();
  /* 1101ebb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ebb6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101ebb9 mov ecx, dword ptr [0x11040960] */
  ECX = (r32((uint32_t)(0x11040960)));
  /* 1101ebbf mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1101ebc2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1101ebc5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1101ebca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101ebcc je 0x1101ec35 */
  if (C.zf) goto L_1101ec35;
  /* 1101ebce cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ebd2 jne 0x1101ebf9 */
  if (!C.zf) goto L_1101ebf9;
  /* 1101ebd4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101ebd7 mov edx, dword ptr [0x11040960] */
  EDX = (r32((uint32_t)(0x11040960)));
  /* 1101ebdd mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1101ebe0 push eax */
  push32((uint32_t)(EAX));
  /* 1101ebe1 call 0x1101ea10 */
  push32(0x1101ebe6u); f_1101ea10();
  /* 1101ebe6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ebe9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ebec je 0x1101ebf7 */
  if (C.zf) goto L_1101ebf7;
  /* 1101ebee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101ebf1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ebf4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1101ebf7:;
  /* 1101ebf7 jmp 0x1101ec35 */
  goto L_1101ec35;
L_1101ebf9:;
  /* 1101ebf9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ebfd jne 0x1101ec35 */
  if (!C.zf) goto L_1101ec35;
  /* 1101ebff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101ec02 mov eax, dword ptr [0x11040960] */
  EAX = (r32((uint32_t)(0x11040960)));
  /* 1101ec07 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1101ec0a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1101ec0d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1101ec10 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101ec12 je 0x1101ec35 */
  if (C.zf) goto L_1101ec35;
  /* 1101ec14 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101ec17 mov ecx, dword ptr [0x11040960] */
  ECX = (r32((uint32_t)(0x11040960)));
  /* 1101ec1d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1101ec20 push edx */
  push32((uint32_t)(EDX));
  /* 1101ec21 call 0x1101ea10 */
  push32(0x1101ec26u); f_1101ea10();
  /* 1101ec26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ec29 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ec2c jne 0x1101ec35 */
  if (!C.zf) goto L_1101ec35;
  /* 1101ec2e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_1101ec35:;
  /* 1101ec35 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101ec38 mov ecx, dword ptr [0x11040960] */
  ECX = (r32((uint32_t)(0x11040960)));
  /* 1101ec3e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1101ec41 push edx */
  push32((uint32_t)(EDX));
  /* 1101ec42 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101ec45 push eax */
  push32((uint32_t)(EAX));
  /* 1101ec46 call 0x1101dff0 */
  push32(0x1101ec4bu); f_1101dff0();
  /* 1101ec4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1101ec4e:;
  /* 1101ec4e jmp 0x1101eb57 */
  goto L_1101eb57;
L_1101ec53:;
  /* 1101ec53 push 2 */
  push32((uint32_t)(0x2u));
  /* 1101ec55 call 0x11018bd0 */
  push32(0x1101ec5au); f_11018bd0();
  /* 1101ec5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ec5d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ec61 jne 0x1101ec68 */
  if (!C.zf) goto L_1101ec68;
  /* 1101ec63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101ec66 jmp 0x1101ec6b */
  goto L_1101ec6b;
L_1101ec68:;
  /* 1101ec68 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1101ec6b:;
  /* 1101ec6b mov esp, ebp */
  ESP = (EBP);
  /* 1101ec6d pop ebp */
  EBP = (pop32());
  /* 1101ec6e ret  */
  ESPCHK(0x1101eb30u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x1101ec70 (15 bytes, 7 insns) */
void f_1101ec70(void) {
  FTRACE(0x1101ec70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101ec70 push ebp */
  push32((uint32_t)(EBP));
  /* 1101ec71 mov ebp, esp */
  EBP = (ESP);
  /* 1101ec73 push 2 */
  push32((uint32_t)(0x2u));
  /* 1101ec75 call 0x110140a0 */
  push32(0x1101ec7au); f_110140a0();
  /* 1101ec7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ec7d pop ebp */
  EBP = (pop32());
  /* 1101ec7e ret  */
  ESPCHK(0x1101ec70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec80 @ 0x1101ec80 (1007 bytes, 269 insns) */
void f_1101ec80(void) {
  FTRACE(0x1101ec80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101ec80 push ebp */
  push32((uint32_t)(EBP));
  /* 1101ec81 mov ebp, esp */
  EBP = (ESP);
  /* 1101ec83 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101ec89 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ec8d jl 0x1101ec95 */
  if ((C.sf!=C.of)) goto L_1101ec95;
  /* 1101ec8f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ec93 jle 0x1101ec9c */
  if ((C.zf||C.sf!=C.of)) goto L_1101ec9c;
L_1101ec95:;
  /* 1101ec95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101ec97 jmp 0x1101f06b */
  goto L_1101f06b;
L_1101ec9c:;
  /* 1101ec9c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1101ec9e call 0x11018b30 */
  push32(0x1101eca3u); f_11018b30();
  /* 1101eca3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101eca6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1101ecad mov eax, dword ptr [0x1104094c] */
  EAX = (r32((uint32_t)(0x1104094c)));
  /* 1101ecb2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ecb5 mov dword ptr [0x1104094c], eax */
  w32((uint32_t)(0x1104094c), (EAX));
L_1101ecba:;
  /* 1101ecba cmp dword ptr [0x1104095c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1104095c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ecc1 je 0x1101eccd */
  if (C.zf) goto L_1101eccd;
  /* 1101ecc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1101ecc5 call dword ptr [0x110432f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110432f0))), 0x1101eccbu);
  /* 1101eccb jmp 0x1101ecba */
  goto L_1101ecba;
L_1101eccd:;
  /* 1101eccd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ecd1 je 0x1101ed11 */
  if (C.zf) goto L_1101ed11;
  /* 1101ecd3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ecd7 je 0x1101ecf1 */
  if (C.zf) goto L_1101ecf1;
  /* 1101ecd9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101ecdc push ecx */
  push32((uint32_t)(ECX));
  /* 1101ecdd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101ece0 push edx */
  push32((uint32_t)(EDX));
  /* 1101ece1 call 0x1101f070 */
  push32(0x1101ece6u); f_1101f070();
  /* 1101ece6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ece9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1101ecef jmp 0x1101ed03 */
  goto L_1101ed03;
L_1101ecf1:;
  /* 1101ecf1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101ecf4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101ecf7 mov ecx, dword ptr [eax + 0x1103f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1103f4dc)));
  /* 1101ecfd mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_1101ed03:;
  /* 1101ed03 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1101ed09 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1101ed0c jmp 0x1101f04b */
  goto L_1101f04b;
L_1101ed11:;
  /* 1101ed11 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 1101ed18 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1101ed1f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ed23 je 0x1101f043 */
  if (C.zf) goto L_1101f043;
  /* 1101ed29 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101ed2c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1101ed2f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ed32 jne 0x1101ef54 */
  if (!C.zf) goto L_1101ef54;
  /* 1101ed38 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101ed3b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1101ed3f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ed42 jne 0x1101ef54 */
  if (!C.zf) goto L_1101ef54;
  /* 1101ed48 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101ed4b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1101ed4f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ed52 jne 0x1101ef54 */
  if (!C.zf) goto L_1101ef54;
  /* 1101ed58 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101ed5b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_1101ed61:;
  /* 1101ed61 push 0x1103c27c */
  push32((uint32_t)(0x1103c27cu));
  /* 1101ed66 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1101ed6c push ecx */
  push32((uint32_t)(ECX));
  /* 1101ed6d call 0x11020ed0 */
  push32(0x1101ed72u); f_11020ed0();
  /* 1101ed72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ed75 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1101ed7b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ed82 je 0x1101edad */
  if (C.zf) goto L_1101edad;
  /* 1101ed84 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1101ed8a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101ed90 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 1101ed96 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ed9d je 0x1101edad */
  if (C.zf) goto L_1101edad;
  /* 1101ed9f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1101eda5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1101eda8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101edab jne 0x1101edd3 */
  if (!C.zf) goto L_1101edd3;
L_1101edad:;
  /* 1101edad cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101edb1 je 0x1101edcc */
  if (C.zf) goto L_1101edcc;
  /* 1101edb3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1101edb5 call 0x11018bd0 */
  push32(0x1101edbau); f_11018bd0();
  /* 1101edba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101edbd mov edx, dword ptr [0x1104094c] */
  EDX = (r32((uint32_t)(0x1104094c)));
  /* 1101edc3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101edc6 mov dword ptr [0x1104094c], edx */
  w32((uint32_t)(0x1104094c), (EDX));
L_1101edcc:;
  /* 1101edcc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101edce jmp 0x1101f06b */
  goto L_1101f06b;
L_1101edd3:;
  /* 1101edd3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1101edda jmp 0x1101ede5 */
  goto L_1101ede5;
L_1101eddc:;
  /* 1101eddc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101eddf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ede2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1101ede5:;
  /* 1101ede5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ede9 jg 0x1101ee33 */
  if ((!C.zf&&C.sf==C.of)) goto L_1101ee33;
  /* 1101edeb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1101edf1 push ecx */
  push32((uint32_t)(ECX));
  /* 1101edf2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1101edf8 push edx */
  push32((uint32_t)(EDX));
  /* 1101edf9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101edfc imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101edff mov ecx, dword ptr [eax + 0x1103f4d8] */
  ECX = (r32((uint32_t)(EAX + 0x1103f4d8)));
  /* 1101ee05 push ecx */
  push32((uint32_t)(ECX));
  /* 1101ee06 call 0x11020e90 */
  push32(0x1101ee0bu); f_11020e90();
  /* 1101ee0b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ee0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101ee10 jne 0x1101ee31 */
  if (!C.zf) goto L_1101ee31;
  /* 1101ee12 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101ee15 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101ee18 mov eax, dword ptr [edx + 0x1103f4d8] */
  EAX = (r32((uint32_t)(EDX + 0x1103f4d8)));
  /* 1101ee1e push eax */
  push32((uint32_t)(EAX));
  /* 1101ee1f call 0x11017f60 */
  push32(0x1101ee24u); f_11017f60();
  /* 1101ee24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ee27 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ee2d jne 0x1101ee31 */
  if (!C.zf) goto L_1101ee31;
  /* 1101ee2f jmp 0x1101ee33 */
  goto L_1101ee33;
L_1101ee31:;
  /* 1101ee31 jmp 0x1101eddc */
  goto L_1101eddc;
L_1101ee33:;
  /* 1101ee33 push 0x1103c278 */
  push32((uint32_t)(0x1103c278u));
  /* 1101ee38 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1101ee3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ee41 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 1101ee47 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1101ee4d push edx */
  push32((uint32_t)(EDX));
  /* 1101ee4e call 0x11020e50 */
  push32(0x1101ee53u); f_11020e50();
  /* 1101ee53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ee56 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1101ee5c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ee63 jne 0x1101ee99 */
  if (!C.zf) goto L_1101ee99;
  /* 1101ee65 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1101ee6b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1101ee6e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ee71 je 0x1101ee99 */
  if (C.zf) goto L_1101ee99;
  /* 1101ee73 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ee77 je 0x1101ee92 */
  if (C.zf) goto L_1101ee92;
  /* 1101ee79 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1101ee7b call 0x11018bd0 */
  push32(0x1101ee80u); f_11018bd0();
  /* 1101ee80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ee83 mov edx, dword ptr [0x1104094c] */
  EDX = (r32((uint32_t)(0x1104094c)));
  /* 1101ee89 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101ee8c mov dword ptr [0x1104094c], edx */
  w32((uint32_t)(0x1104094c), (EDX));
L_1101ee92:;
  /* 1101ee92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101ee94 jmp 0x1101f06b */
  goto L_1101f06b;
L_1101ee99:;
  /* 1101ee99 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ee9d jg 0x1101eeea */
  if ((!C.zf&&C.sf==C.of)) goto L_1101eeea;
  /* 1101ee9f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1101eea5 push eax */
  push32((uint32_t)(EAX));
  /* 1101eea6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1101eeac push ecx */
  push32((uint32_t)(ECX));
  /* 1101eead lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1101eeb3 push edx */
  push32((uint32_t)(EDX));
  /* 1101eeb4 call 0x11018950 */
  push32(0x1101eeb9u); f_11018950();
  /* 1101eeb9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101eebc mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1101eec2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1101eeca lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 1101eed0 push ecx */
  push32((uint32_t)(ECX));
  /* 1101eed1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101eed4 push edx */
  push32((uint32_t)(EDX));
  /* 1101eed5 call 0x1101f070 */
  push32(0x1101eedau); f_1101f070();
  /* 1101eeda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101eedd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101eedf je 0x1101eeea */
  if (C.zf) goto L_1101eeea;
  /* 1101eee1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101eee4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101eee7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1101eeea:;
  /* 1101eeea mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1101eef0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101eef6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1101eefc mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1101ef02 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1101ef05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101ef07 je 0x1101ef18 */
  if (C.zf) goto L_1101ef18;
  /* 1101ef09 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1101ef0f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ef12 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_1101ef18:;
  /* 1101ef18 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1101ef1e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1101ef21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101ef23 jne 0x1101ed61 */
  if (!C.zf) goto L_1101ed61;
  /* 1101ef29 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ef2d je 0x1101ef3c */
  if (C.zf) goto L_1101ef3c;
  /* 1101ef2f call 0x1101f210 */
  push32(0x1101ef34u); f_1101f210();
  /* 1101ef34 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1101ef3a jmp 0x1101ef46 */
  goto L_1101ef46;
L_1101ef3c:;
  /* 1101ef3c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_1101ef46:;
  /* 1101ef46 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1101ef4c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1101ef4f jmp 0x1101f041 */
  goto L_1101f041;
L_1101ef54:;
  /* 1101ef54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101ef57 push edx */
  push32((uint32_t)(EDX));
  /* 1101ef58 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101ef5a push 0 */
  push32((uint32_t)(0x0u));
  /* 1101ef5c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1101ef62 push eax */
  push32((uint32_t)(EAX));
  /* 1101ef63 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101ef66 push ecx */
  push32((uint32_t)(ECX));
  /* 1101ef67 call 0x1101f310 */
  push32(0x1101ef6cu); f_1101f310();
  /* 1101ef6c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ef6f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1101ef72 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ef76 je 0x1101f041 */
  if (C.zf) goto L_1101f041;
  /* 1101ef7c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1101ef83 jmp 0x1101ef8e */
  goto L_1101ef8e;
L_1101ef85:;
  /* 1101ef85 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101ef88 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ef8b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1101ef8e:;
  /* 1101ef8e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ef92 jg 0x1101eff0 */
  if ((!C.zf&&C.sf==C.of)) goto L_1101eff0;
  /* 1101ef94 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ef98 je 0x1101efee */
  if (C.zf) goto L_1101efee;
  /* 1101ef9a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101ef9d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101efa0 mov ecx, dword ptr [eax + 0x1103f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1103f4dc)));
  /* 1101efa6 push ecx */
  push32((uint32_t)(ECX));
  /* 1101efa7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1101efad push edx */
  push32((uint32_t)(EDX));
  /* 1101efae call 0x11020dc0 */
  push32(0x1101efb3u); f_11020dc0();
  /* 1101efb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101efb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101efb8 je 0x1101efe5 */
  if (C.zf) goto L_1101efe5;
  /* 1101efba lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1101efc0 push eax */
  push32((uint32_t)(EAX));
  /* 1101efc1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101efc4 push ecx */
  push32((uint32_t)(ECX));
  /* 1101efc5 call 0x1101f070 */
  push32(0x1101efcau); f_1101f070();
  /* 1101efca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101efcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101efcf je 0x1101efdc */
  if (C.zf) goto L_1101efdc;
  /* 1101efd1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101efd4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101efd7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1101efda jmp 0x1101efe3 */
  goto L_1101efe3;
L_1101efdc:;
  /* 1101efdc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_1101efe3:;
  /* 1101efe3 jmp 0x1101efee */
  goto L_1101efee;
L_1101efe5:;
  /* 1101efe5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101efe8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101efeb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1101efee:;
  /* 1101efee jmp 0x1101ef85 */
  goto L_1101ef85;
L_1101eff0:;
  /* 1101eff0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101eff4 je 0x1101f01b */
  if (C.zf) goto L_1101f01b;
  /* 1101eff6 call 0x1101f210 */
  push32(0x1101effbu); f_1101f210();
  /* 1101effb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1101effe push 2 */
  push32((uint32_t)(0x2u));
  /* 1101f000 mov ecx, dword ptr [0x1103f4dc] */
  ECX = (r32((uint32_t)(0x1103f4dc)));
  /* 1101f006 push ecx */
  push32((uint32_t)(ECX));
  /* 1101f007 call 0x11015bc0 */
  push32(0x1101f00cu); f_11015bc0();
  /* 1101f00c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f00f mov dword ptr [0x1103f4dc], 0 */
  w32((uint32_t)(0x1103f4dc), (0x0u));
  /* 1101f019 jmp 0x1101f041 */
  goto L_1101f041;
L_1101f01b:;
  /* 1101f01b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101f01f je 0x1101f02e */
  if (C.zf) goto L_1101f02e;
  /* 1101f021 call 0x1101f210 */
  push32(0x1101f026u); f_1101f210();
  /* 1101f026 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1101f02c jmp 0x1101f038 */
  goto L_1101f038;
L_1101f02e:;
  /* 1101f02e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_1101f038:;
  /* 1101f038 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1101f03e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1101f041:;
  /* 1101f041 jmp 0x1101f04b */
  goto L_1101f04b;
L_1101f043:;
  /* 1101f043 call 0x1101f210 */
  push32(0x1101f048u); f_1101f210();
  /* 1101f048 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1101f04b:;
  /* 1101f04b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101f04f je 0x1101f068 */
  if (C.zf) goto L_1101f068;
  /* 1101f051 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1101f053 call 0x11018bd0 */
  push32(0x1101f058u); f_11018bd0();
  /* 1101f058 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f05b mov eax, dword ptr [0x1104094c] */
  EAX = (r32((uint32_t)(0x1104094c)));
  /* 1101f060 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101f063 mov dword ptr [0x1104094c], eax */
  w32((uint32_t)(0x1104094c), (EAX));
L_1101f068:;
  /* 1101f068 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1101f06b:;
  /* 1101f06b mov esp, ebp */
  ESP = (EBP);
  /* 1101f06d pop ebp */
  EBP = (pop32());
  /* 1101f06e ret  */
  ESPCHK(0x1101ec80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f070 @ 0x1101f070 (403 bytes, 117 insns) */
void f_1101f070(void) {
  FTRACE(0x1101f070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101f070 push ebp */
  push32((uint32_t)(EBP));
  /* 1101f071 mov ebp, esp */
  EBP = (ESP);
  /* 1101f073 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101f079 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101f07c push eax */
  push32((uint32_t)(EAX));
  /* 1101f07d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 1101f083 push ecx */
  push32((uint32_t)(ECX));
  /* 1101f084 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1101f08a push edx */
  push32((uint32_t)(EDX));
  /* 1101f08b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 1101f091 push eax */
  push32((uint32_t)(EAX));
  /* 1101f092 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101f095 push ecx */
  push32((uint32_t)(ECX));
  /* 1101f096 call 0x1101f310 */
  push32(0x1101f09bu); f_1101f310();
  /* 1101f09b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f09e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101f0a0 jne 0x1101f0a9 */
  if (!C.zf) goto L_1101f0a9;
  /* 1101f0a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101f0a4 jmp 0x1101f1ff */
  goto L_1101f1ff;
L_1101f0a9:;
  /* 1101f0a9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1101f0ae push 0x1103c280 */
  push32((uint32_t)(0x1103c280u));
  /* 1101f0b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1101f0b5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1101f0bb push edx */
  push32((uint32_t)(EDX));
  /* 1101f0bc call 0x11017f60 */
  push32(0x1101f0c1u); f_11017f60();
  /* 1101f0c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f0c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f0c7 push eax */
  push32((uint32_t)(EAX));
  /* 1101f0c8 call 0x11015130 */
  push32(0x1101f0cdu); f_11015130();
  /* 1101f0cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f0d0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1101f0d3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101f0d7 jne 0x1101f0e0 */
  if (!C.zf) goto L_1101f0e0;
  /* 1101f0d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101f0db jmp 0x1101f1ff */
  goto L_1101f1ff;
L_1101f0e0:;
  /* 1101f0e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101f0e3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101f0e6 mov ecx, dword ptr [eax + 0x1103f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1103f4dc)));
  /* 1101f0ec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101f0ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101f0f2 mov eax, dword ptr [edx*4 + 0x110407c8] */
  EAX = (r32((uint32_t)(EDX*4 + 0x110407c8)));
  /* 1101f0f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1101f0fc push 6 */
  push32((uint32_t)(0x6u));
  /* 1101f0fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101f101 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101f104 add ecx, 0x11040818 */
  { uint32_t _a=(ECX),_b=(0x11040818u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f10a push ecx */
  push32((uint32_t)(ECX));
  /* 1101f10b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1101f10e push edx */
  push32((uint32_t)(EDX));
  /* 1101f10f call 0x1101ba10 */
  push32(0x1101f114u); f_1101ba10();
  /* 1101f114 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f117 mov eax, dword ptr [0x110407e0] */
  EAX = (r32((uint32_t)(0x110407e0)));
  /* 1101f11c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1101f11f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 1101f125 push ecx */
  push32((uint32_t)(ECX));
  /* 1101f126 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101f129 push edx */
  push32((uint32_t)(EDX));
  /* 1101f12a call 0x110180e0 */
  push32(0x1101f12fu); f_110180e0();
  /* 1101f12f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f132 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101f135 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101f138 mov dword ptr [ecx + 0x1103f4dc], eax */
  w32((uint32_t)(ECX + 0x1103f4dc), (EAX));
  /* 1101f13e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1101f144 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1101f14a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101f14d mov dword ptr [eax*4 + 0x110407c8], edx */
  w32((uint32_t)(EAX*4 + 0x110407c8), (EDX));
  /* 1101f154 push 6 */
  push32((uint32_t)(0x6u));
  /* 1101f156 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1101f15c push ecx */
  push32((uint32_t)(ECX));
  /* 1101f15d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101f160 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101f163 add edx, 0x11040818 */
  { uint32_t _a=(EDX),_b=(0x11040818u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f169 push edx */
  push32((uint32_t)(EDX));
  /* 1101f16a call 0x1101ba10 */
  push32(0x1101f16fu); f_1101ba10();
  /* 1101f16f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f172 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101f176 jne 0x1101f183 */
  if (!C.zf) goto L_1101f183;
  /* 1101f178 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1101f17e mov dword ptr [0x110407e0], eax */
  w32((uint32_t)(0x110407e0), (EAX));
L_1101f183:;
  /* 1101f183 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101f187 jne 0x1101f195 */
  if (!C.zf) goto L_1101f195;
  /* 1101f189 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1101f18f mov dword ptr [0x110407e4], ecx */
  w32((uint32_t)(0x110407e4), (ECX));
L_1101f195:;
  /* 1101f195 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101f198 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101f19b call dword ptr [edx + 0x1103f4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x1103f4e0))), 0x1101f1a1u);
  /* 1101f1a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101f1a3 je 0x1101f1dc */
  if (C.zf) goto L_1101f1dc;
  /* 1101f1a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101f1a8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101f1ab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101f1ae mov dword ptr [eax + 0x1103f4dc], ecx */
  w32((uint32_t)(EAX + 0x1103f4dc), (ECX));
  /* 1101f1b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1101f1b6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101f1b9 push edx */
  push32((uint32_t)(EDX));
  /* 1101f1ba call 0x11015bc0 */
  push32(0x1101f1bfu); f_11015bc0();
  /* 1101f1bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f1c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101f1c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101f1c8 mov dword ptr [eax*4 + 0x110407c8], ecx */
  w32((uint32_t)(EAX*4 + 0x110407c8), (ECX));
  /* 1101f1cf mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1101f1d2 mov dword ptr [0x110407e0], edx */
  w32((uint32_t)(0x110407e0), (EDX));
  /* 1101f1d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101f1da jmp 0x1101f1ff */
  goto L_1101f1ff;
L_1101f1dc:;
  /* 1101f1dc cmp dword ptr [ebp - 0xc], 0x1103f3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1103f3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101f1e3 je 0x1101f1f3 */
  if (C.zf) goto L_1101f1f3;
  /* 1101f1e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1101f1e7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101f1ea push eax */
  push32((uint32_t)(EAX));
  /* 1101f1eb call 0x11015bc0 */
  push32(0x1101f1f0u); f_11015bc0();
  /* 1101f1f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1101f1f3:;
  /* 1101f1f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101f1f6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101f1f9 mov eax, dword ptr [ecx + 0x1103f4dc] */
  EAX = (r32((uint32_t)(ECX + 0x1103f4dc)));
L_1101f1ff:;
  /* 1101f1ff mov esp, ebp */
  ESP = (EBP);
  /* 1101f201 pop ebp */
  EBP = (pop32());
  /* 1101f202 ret  */
  ESPCHK(0x1101f070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f210 @ 0x1101f210 (256 bytes, 72 insns) */
void f_1101f210(void) {
  FTRACE(0x1101f210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101f210 push ebp */
  push32((uint32_t)(EBP));
  /* 1101f211 mov ebp, esp */
  EBP = (ESP);
  /* 1101f213 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101f216 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1101f21d cmp dword ptr [0x1103f4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1103f4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101f224 jne 0x1101f244 */
  if (!C.zf) goto L_1101f244;
  /* 1101f226 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1101f22b push 0x1103c280 */
  push32((uint32_t)(0x1103c280u));
  /* 1101f230 push 2 */
  push32((uint32_t)(0x2u));
  /* 1101f232 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 1101f237 call 0x11015130 */
  push32(0x1101f23cu); f_11015130();
  /* 1101f23c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f23f mov dword ptr [0x1103f4dc], eax */
  w32((uint32_t)(0x1103f4dc), (EAX));
L_1101f244:;
  /* 1101f244 mov eax, dword ptr [0x1103f4dc] */
  EAX = (r32((uint32_t)(0x1103f4dc)));
  /* 1101f249 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1101f24c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1101f253 jmp 0x1101f25e */
  goto L_1101f25e;
L_1101f255:;
  /* 1101f255 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101f258 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f25b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1101f25e:;
  /* 1101f25e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101f261 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101f264 mov eax, dword ptr [edx + 0x1103f4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1103f4dc)));
  /* 1101f26a push eax */
  push32((uint32_t)(EAX));
  /* 1101f26b push 0x1103c28c */
  push32((uint32_t)(0x1103c28cu));
  /* 1101f270 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101f273 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101f276 mov edx, dword ptr [ecx + 0x1103f4d8] */
  EDX = (r32((uint32_t)(ECX + 0x1103f4d8)));
  /* 1101f27c push edx */
  push32((uint32_t)(EDX));
  /* 1101f27d push 3 */
  push32((uint32_t)(0x3u));
  /* 1101f27f mov eax, dword ptr [0x1103f4dc] */
  EAX = (r32((uint32_t)(0x1103f4dc)));
  /* 1101f284 push eax */
  push32((uint32_t)(EAX));
  /* 1101f285 call 0x1101f4b0 */
  push32(0x1101f28au); f_1101f4b0();
  /* 1101f28a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f28d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101f291 jge 0x1101f2d9 */
  if ((C.sf==C.of)) goto L_1101f2d9;
  /* 1101f293 push 0x1103c278 */
  push32((uint32_t)(0x1103c278u));
  /* 1101f298 mov ecx, dword ptr [0x1103f4dc] */
  ECX = (r32((uint32_t)(0x1103f4dc)));
  /* 1101f29e push ecx */
  push32((uint32_t)(ECX));
  /* 1101f29f call 0x110180f0 */
  push32(0x1101f2a4u); f_110180f0();
  /* 1101f2a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f2a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101f2aa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f2ad imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101f2b0 mov eax, dword ptr [edx + 0x1103f4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1103f4dc)));
  /* 1101f2b6 push eax */
  push32((uint32_t)(EAX));
  /* 1101f2b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101f2ba imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101f2bd mov edx, dword ptr [ecx + 0x1103f4dc] */
  EDX = (r32((uint32_t)(ECX + 0x1103f4dc)));
  /* 1101f2c3 push edx */
  push32((uint32_t)(EDX));
  /* 1101f2c4 call 0x11020dc0 */
  push32(0x1101f2c9u); f_11020dc0();
  /* 1101f2c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f2cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101f2ce je 0x1101f2d7 */
  if (C.zf) goto L_1101f2d7;
  /* 1101f2d0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1101f2d7:;
  /* 1101f2d7 jmp 0x1101f307 */
  goto L_1101f307;
L_1101f2d9:;
  /* 1101f2d9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101f2dd jne 0x1101f2e6 */
  if (!C.zf) goto L_1101f2e6;
  /* 1101f2df mov eax, dword ptr [0x1103f4dc] */
  EAX = (r32((uint32_t)(0x1103f4dc)));
  /* 1101f2e4 jmp 0x1101f30c */
  goto L_1101f30c;
L_1101f2e6:;
  /* 1101f2e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1101f2e8 mov eax, dword ptr [0x1103f4dc] */
  EAX = (r32((uint32_t)(0x1103f4dc)));
  /* 1101f2ed push eax */
  push32((uint32_t)(EAX));
  /* 1101f2ee call 0x11015bc0 */
  push32(0x1101f2f3u); f_11015bc0();
  /* 1101f2f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f2f6 mov dword ptr [0x1103f4dc], 0 */
  w32((uint32_t)(0x1103f4dc), (0x0u));
  /* 1101f300 mov eax, dword ptr [0x1103f4f4] */
  EAX = (r32((uint32_t)(0x1103f4f4)));
  /* 1101f305 jmp 0x1101f30c */
  goto L_1101f30c;
L_1101f307:;
  /* 1101f307 jmp 0x1101f255 */
  goto L_1101f255;
L_1101f30c:;
  /* 1101f30c mov esp, ebp */
  ESP = (EBP);
  /* 1101f30e pop ebp */
  EBP = (pop32());
  /* 1101f30f ret  */
  ESPCHK(0x1101f210u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f310 @ 0x1101f310 (388 bytes, 115 insns) */
void f_1101f310(void) {
  FTRACE(0x1101f310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101f310 push ebp */
  push32((uint32_t)(EBP));
  /* 1101f311 mov ebp, esp */
  EBP = (ESP);
  /* 1101f313 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101f319 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101f31d jne 0x1101f326 */
  if (!C.zf) goto L_1101f326;
  /* 1101f31f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101f321 jmp 0x1101f490 */
  goto L_1101f490;
L_1101f326:;
  /* 1101f326 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101f329 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1101f32c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101f32f jne 0x1101f380 */
  if (!C.zf) goto L_1101f380;
  /* 1101f331 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101f334 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1101f338 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101f33a jne 0x1101f380 */
  if (!C.zf) goto L_1101f380;
  /* 1101f33c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101f33f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 1101f342 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101f345 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 1101f349 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101f34d je 0x1101f369 */
  if (C.zf) goto L_1101f369;
  /* 1101f34f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1101f352 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 1101f357 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1101f35a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 1101f360 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1101f363 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_1101f369:;
  /* 1101f369 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101f36d je 0x1101f378 */
  if (C.zf) goto L_1101f378;
  /* 1101f36f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1101f372 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1101f378:;
  /* 1101f378 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101f37b jmp 0x1101f490 */
  goto L_1101f490;
L_1101f380:;
  /* 1101f380 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101f383 push ecx */
  push32((uint32_t)(ECX));
  /* 1101f384 push 0x1103f450 */
  push32((uint32_t)(0x1103f450u));
  /* 1101f389 call 0x11020dc0 */
  push32(0x1101f38eu); f_11020dc0();
  /* 1101f38e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f391 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101f393 je 0x1101f448 */
  if (C.zf) goto L_1101f448;
  /* 1101f399 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101f39c push edx */
  push32((uint32_t)(EDX));
  /* 1101f39d push 0x1103f3cc */
  push32((uint32_t)(0x1103f3ccu));
  /* 1101f3a2 call 0x11020dc0 */
  push32(0x1101f3a7u); f_11020dc0();
  /* 1101f3a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f3aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101f3ac je 0x1101f448 */
  if (C.zf) goto L_1101f448;
  /* 1101f3b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101f3b5 push eax */
  push32((uint32_t)(EAX));
  /* 1101f3b6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1101f3bc push ecx */
  push32((uint32_t)(ECX));
  /* 1101f3bd call 0x1101f500 */
  push32(0x1101f3c2u); f_1101f500();
  /* 1101f3c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f3c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101f3c7 je 0x1101f3d0 */
  if (C.zf) goto L_1101f3d0;
  /* 1101f3c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101f3cb jmp 0x1101f490 */
  goto L_1101f490;
L_1101f3d0:;
  /* 1101f3d0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1101f3d6 push edx */
  push32((uint32_t)(EDX));
  /* 1101f3d7 push 0x110407f0 */
  push32((uint32_t)(0x110407f0u));
  /* 1101f3dc lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 1101f3e2 push eax */
  push32((uint32_t)(EAX));
  /* 1101f3e3 call 0x11020f10 */
  push32(0x1101f3e8u); f_11020f10();
  /* 1101f3e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f3eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101f3ed jne 0x1101f3f6 */
  if (!C.zf) goto L_1101f3f6;
  /* 1101f3ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101f3f1 jmp 0x1101f490 */
  goto L_1101f490;
L_1101f3f6:;
  /* 1101f3f6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1101f3f8 mov cx, word ptr [0x110407f4] */
  CX = (r16((uint32_t)(0x110407f4)));
  /* 1101f3ff mov dword ptr [0x110407f8], ecx */
  w32((uint32_t)(0x110407f8), (ECX));
  /* 1101f405 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1101f40b push edx */
  push32((uint32_t)(EDX));
  /* 1101f40c push 0x1103f450 */
  push32((uint32_t)(0x1103f450u));
  /* 1101f411 call 0x1101f660 */
  push32(0x1101f416u); f_1101f660();
  /* 1101f416 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f419 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101f41c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1101f41f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1101f421 je 0x1101f436 */
  if (C.zf) goto L_1101f436;
  /* 1101f423 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101f426 push edx */
  push32((uint32_t)(EDX));
  /* 1101f427 push 0x1103f3cc */
  push32((uint32_t)(0x1103f3ccu));
  /* 1101f42c call 0x110180e0 */
  push32(0x1101f431u); f_110180e0();
  /* 1101f431 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f434 jmp 0x1101f448 */
  goto L_1101f448;
L_1101f436:;
  /* 1101f436 push 0x1103f450 */
  push32((uint32_t)(0x1103f450u));
  /* 1101f43b push 0x1103f3cc */
  push32((uint32_t)(0x1103f3ccu));
  /* 1101f440 call 0x110180e0 */
  push32(0x1101f445u); f_110180e0();
  /* 1101f445 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1101f448:;
  /* 1101f448 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101f44c je 0x1101f461 */
  if (C.zf) goto L_1101f461;
  /* 1101f44e push 6 */
  push32((uint32_t)(0x6u));
  /* 1101f450 push 0x110407f0 */
  push32((uint32_t)(0x110407f0u));
  /* 1101f455 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1101f458 push eax */
  push32((uint32_t)(EAX));
  /* 1101f459 call 0x1101ba10 */
  push32(0x1101f45eu); f_1101ba10();
  /* 1101f45e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1101f461:;
  /* 1101f461 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101f465 je 0x1101f47a */
  if (C.zf) goto L_1101f47a;
  /* 1101f467 push 4 */
  push32((uint32_t)(0x4u));
  /* 1101f469 push 0x110407f8 */
  push32((uint32_t)(0x110407f8u));
  /* 1101f46e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1101f471 push ecx */
  push32((uint32_t)(ECX));
  /* 1101f472 call 0x1101ba10 */
  push32(0x1101f477u); f_1101ba10();
  /* 1101f477 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1101f47a:;
  /* 1101f47a push 0x1103f450 */
  push32((uint32_t)(0x1103f450u));
  /* 1101f47f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101f482 push edx */
  push32((uint32_t)(EDX));
  /* 1101f483 call 0x110180e0 */
  push32(0x1101f488u); f_110180e0();
  /* 1101f488 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f48b mov eax, 0x1103f450 */
  EAX = (0x1103f450u);
L_1101f490:;
  /* 1101f490 mov esp, ebp */
  ESP = (EBP);
  /* 1101f492 pop ebp */
  EBP = (pop32());
  /* 1101f493 ret  */
  ESPCHK(0x1101f310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f4a0 @ 0x1101f4a0 (7 bytes, 5 insns) */
void f_1101f4a0(void) {
  FTRACE(0x1101f4a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101f4a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1101f4a1 mov ebp, esp */
  EBP = (ESP);
  /* 1101f4a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101f4a5 pop ebp */
  EBP = (pop32());
  /* 1101f4a6 ret  */
  ESPCHK(0x1101f4a0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x1101f4b0 (79 bytes, 28 insns) */
void f_1101f4b0(void) {
  FTRACE(0x1101f4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101f4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1101f4b1 mov ebp, esp */
  EBP = (ESP);
  /* 1101f4b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101f4b6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1101f4b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1101f4bc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1101f4c3 jmp 0x1101f4ce */
  goto L_1101f4ce;
L_1101f4c5:;
  /* 1101f4c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101f4c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f4cb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1101f4ce:;
  /* 1101f4ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101f4d1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101f4d4 jge 0x1101f4f4 */
  if ((C.sf==C.of)) goto L_1101f4f4;
  /* 1101f4d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101f4d9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f4dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1101f4df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101f4e2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1101f4e5 push edx */
  push32((uint32_t)(EDX));
  /* 1101f4e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101f4e9 push eax */
  push32((uint32_t)(EAX));
  /* 1101f4ea call 0x110180f0 */
  push32(0x1101f4efu); f_110180f0();
  /* 1101f4ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f4f2 jmp 0x1101f4c5 */
  goto L_1101f4c5;
L_1101f4f4:;
  /* 1101f4f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1101f4fb mov esp, ebp */
  ESP = (EBP);
  /* 1101f4fd pop ebp */
  EBP = (pop32());
  /* 1101f4fe ret  */
  ESPCHK(0x1101f4b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f500 @ 0x1101f500 (349 bytes, 122 insns) */
void f_1101f500(void) {
  FTRACE(0x1101f500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101f500 push ebp */
  push32((uint32_t)(EBP));
  /* 1101f501 mov ebp, esp */
  EBP = (ESP);
  /* 1101f503 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101f506 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1101f50b push 0 */
  push32((uint32_t)(0x0u));
  /* 1101f50d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101f510 push eax */
  push32((uint32_t)(EAX));
  /* 1101f511 call 0x11018ea0 */
  push32(0x1101f516u); f_11018ea0();
  /* 1101f516 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f519 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101f51c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1101f51f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101f521 jne 0x1101f52a */
  if (!C.zf) goto L_1101f52a;
  /* 1101f523 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101f525 jmp 0x1101f659 */
  goto L_1101f659;
L_1101f52a:;
  /* 1101f52a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101f52d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1101f530 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101f533 jne 0x1101f560 */
  if (!C.zf) goto L_1101f560;
  /* 1101f535 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101f538 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1101f53c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101f53e je 0x1101f560 */
  if (C.zf) goto L_1101f560;
  /* 1101f540 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101f543 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f546 push ecx */
  push32((uint32_t)(ECX));
  /* 1101f547 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101f54a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f550 push edx */
  push32((uint32_t)(EDX));
  /* 1101f551 call 0x110180e0 */
  push32(0x1101f556u); f_110180e0();
  /* 1101f556 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f559 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101f55b jmp 0x1101f659 */
  goto L_1101f659;
L_1101f560:;
  /* 1101f560 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1101f567 jmp 0x1101f572 */
  goto L_1101f572;
L_1101f569:;
  /* 1101f569 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101f56c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f56f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1101f572:;
  /* 1101f572 push 0x1103c290 */
  push32((uint32_t)(0x1103c290u));
  /* 1101f577 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101f57a push ecx */
  push32((uint32_t)(ECX));
  /* 1101f57b call 0x11020e50 */
  push32(0x1101f580u); f_11020e50();
  /* 1101f580 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f583 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1101f586 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101f58a jne 0x1101f594 */
  if (!C.zf) goto L_1101f594;
  /* 1101f58c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1101f58f jmp 0x1101f659 */
  goto L_1101f659;
L_1101f594:;
  /* 1101f594 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101f597 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f59a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1101f59c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1101f59f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101f5a3 jne 0x1101f5ca */
  if (!C.zf) goto L_1101f5ca;
  /* 1101f5a5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101f5a9 jge 0x1101f5ca */
  if ((C.sf==C.of)) goto L_1101f5ca;
  /* 1101f5ab movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1101f5af cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101f5b2 je 0x1101f5ca */
  if (C.zf) goto L_1101f5ca;
  /* 1101f5b4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101f5b7 push edx */
  push32((uint32_t)(EDX));
  /* 1101f5b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101f5bb push eax */
  push32((uint32_t)(EAX));
  /* 1101f5bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101f5bf push ecx */
  push32((uint32_t)(ECX));
  /* 1101f5c0 call 0x11018950 */
  push32(0x1101f5c5u); f_11018950();
  /* 1101f5c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f5c8 jmp 0x1101f630 */
  goto L_1101f630;
L_1101f5ca:;
  /* 1101f5ca cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101f5ce jne 0x1101f5f8 */
  if (!C.zf) goto L_1101f5f8;
  /* 1101f5d0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101f5d4 jge 0x1101f5f8 */
  if ((C.sf==C.of)) goto L_1101f5f8;
  /* 1101f5d6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1101f5da cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101f5dd je 0x1101f5f8 */
  if (C.zf) goto L_1101f5f8;
  /* 1101f5df mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101f5e2 push eax */
  push32((uint32_t)(EAX));
  /* 1101f5e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101f5e6 push ecx */
  push32((uint32_t)(ECX));
  /* 1101f5e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101f5ea add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f5ed push edx */
  push32((uint32_t)(EDX));
  /* 1101f5ee call 0x11018950 */
  push32(0x1101f5f3u); f_11018950();
  /* 1101f5f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f5f6 jmp 0x1101f630 */
  goto L_1101f630;
L_1101f5f8:;
  /* 1101f5f8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101f5fc jne 0x1101f62b */
  if (!C.zf) goto L_1101f62b;
  /* 1101f5fe movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1101f602 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101f604 je 0x1101f60f */
  if (C.zf) goto L_1101f60f;
  /* 1101f606 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1101f60a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101f60d jne 0x1101f62b */
  if (!C.zf) goto L_1101f62b;
L_1101f60f:;
  /* 1101f60f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101f612 push edx */
  push32((uint32_t)(EDX));
  /* 1101f613 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101f616 push eax */
  push32((uint32_t)(EAX));
  /* 1101f617 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101f61a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f620 push ecx */
  push32((uint32_t)(ECX));
  /* 1101f621 call 0x11018950 */
  push32(0x1101f626u); f_11018950();
  /* 1101f626 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f629 jmp 0x1101f630 */
  goto L_1101f630;
L_1101f62b:;
  /* 1101f62b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1101f62e jmp 0x1101f659 */
  goto L_1101f659;
L_1101f630:;
  /* 1101f630 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1101f634 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101f637 jne 0x1101f63b */
  if (!C.zf) goto L_1101f63b;
  /* 1101f639 jmp 0x1101f657 */
  goto L_1101f657;
L_1101f63b:;
  /* 1101f63b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1101f63f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101f641 jne 0x1101f645 */
  if (!C.zf) goto L_1101f645;
  /* 1101f643 jmp 0x1101f657 */
  goto L_1101f657;
L_1101f645:;
  /* 1101f645 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101f648 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101f64b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 1101f64f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1101f652 jmp 0x1101f569 */
  goto L_1101f569;
L_1101f657:;
  /* 1101f657 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1101f659:;
  /* 1101f659 mov esp, ebp */
  ESP = (EBP);
  /* 1101f65b pop ebp */
  EBP = (pop32());
  /* 1101f65c ret  */
  ESPCHK(0x1101f500u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x1101f660 (101 bytes, 36 insns) */
void f_1101f660(void) {
  FTRACE(0x1101f660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101f660 push ebp */
  push32((uint32_t)(EBP));
  /* 1101f661 mov ebp, esp */
  EBP = (ESP);
  /* 1101f663 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101f666 push eax */
  push32((uint32_t)(EAX));
  /* 1101f667 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101f66a push ecx */
  push32((uint32_t)(ECX));
  /* 1101f66b call 0x110180e0 */
  push32(0x1101f670u); f_110180e0();
  /* 1101f670 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f673 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101f676 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 1101f67a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101f67c je 0x1101f698 */
  if (C.zf) goto L_1101f698;
  /* 1101f67e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101f681 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f684 push ecx */
  push32((uint32_t)(ECX));
  /* 1101f685 push 0x1103c298 */
  push32((uint32_t)(0x1103c298u));
  /* 1101f68a push 2 */
  push32((uint32_t)(0x2u));
  /* 1101f68c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101f68f push edx */
  push32((uint32_t)(EDX));
  /* 1101f690 call 0x1101f4b0 */
  push32(0x1101f695u); f_1101f4b0();
  /* 1101f695 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1101f698:;
  /* 1101f698 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101f69b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 1101f6a2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1101f6a4 je 0x1101f6c3 */
  if (C.zf) goto L_1101f6c3;
  /* 1101f6a6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101f6a9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f6af push edx */
  push32((uint32_t)(EDX));
  /* 1101f6b0 push 0x1103c294 */
  push32((uint32_t)(0x1103c294u));
  /* 1101f6b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1101f6b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101f6ba push eax */
  push32((uint32_t)(EAX));
  /* 1101f6bb call 0x1101f4b0 */
  push32(0x1101f6c0u); f_1101f4b0();
  /* 1101f6c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1101f6c3:;
  /* 1101f6c3 pop ebp */
  EBP = (pop32());
  /* 1101f6c4 ret  */
  ESPCHK(0x1101f660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f6d0 @ 0x1101f6d0 (130 bytes, 50 insns) */
void f_1101f6d0(void) {
  FTRACE(0x1101f6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101f6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1101f6d1 mov ebp, esp */
  EBP = (ESP);
  /* 1101f6d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1101f6d4 push ebx */
  push32((uint32_t)(EBX));
  /* 1101f6d5 push esi */
  push32((uint32_t)(ESI));
  /* 1101f6d6 push edi */
  push32((uint32_t)(EDI));
  /* 1101f6d7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1101f6de:;
  /* 1101f6de cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101f6e2 jne 0x1101f702 */
  if (!C.zf) goto L_1101f702;
  /* 1101f6e4 push 0x1103c2a8 */
  push32((uint32_t)(0x1103c2a8u));
  /* 1101f6e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101f6eb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1101f6ed push 0x1103c29c */
  push32((uint32_t)(0x1103c29cu));
  /* 1101f6f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1101f6f4 call 0x110141f0 */
  push32(0x1101f6f9u); f_110141f0();
  /* 1101f6f9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f6fc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101f6ff jne 0x1101f702 */
  if (!C.zf) goto L_1101f702;
  /* 1101f701 int3  */
  x86_unimpl("int3 @ 0x1101f701");
L_1101f702:;
  /* 1101f702 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101f704 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101f706 jne 0x1101f6de */
  if (!C.zf) goto L_1101f6de;
  /* 1101f708 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101f70b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1101f70e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1101f711 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101f713 je 0x1101f721 */
  if (C.zf) goto L_1101f721;
  /* 1101f715 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101f718 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1101f71f jmp 0x1101f748 */
  goto L_1101f748;
L_1101f721:;
  /* 1101f721 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101f724 push ecx */
  push32((uint32_t)(ECX));
  /* 1101f725 call 0x1101df40 */
  push32(0x1101f72au); f_1101df40();
  /* 1101f72a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f72d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101f730 push edx */
  push32((uint32_t)(EDX));
  /* 1101f731 call 0x1101f760 */
  push32(0x1101f736u); f_1101f760();
  /* 1101f736 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f739 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1101f73c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101f73f push eax */
  push32((uint32_t)(EAX));
  /* 1101f740 call 0x1101dfb0 */
  push32(0x1101f745u); f_1101dfb0();
  /* 1101f745 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1101f748:;
  /* 1101f748 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101f74b pop edi */
  EDI = (pop32());
  /* 1101f74c pop esi */
  ESI = (pop32());
  /* 1101f74d pop ebx */
  EBX = (pop32());
  /* 1101f74e mov esp, ebp */
  ESP = (EBP);
  /* 1101f750 pop ebp */
  EBP = (pop32());
  /* 1101f751 ret  */
  ESPCHK(0x1101f6d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f760 @ 0x1101f760 (190 bytes, 67 insns) */
void f_1101f760(void) {
  FTRACE(0x1101f760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101f760 push ebp */
  push32((uint32_t)(EBP));
  /* 1101f761 mov ebp, esp */
  EBP = (ESP);
  /* 1101f763 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101f766 push ebx */
  push32((uint32_t)(EBX));
  /* 1101f767 push esi */
  push32((uint32_t)(ESI));
  /* 1101f768 push edi */
  push32((uint32_t)(EDI));
  /* 1101f769 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1101f770 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101f773 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1101f776:;
  /* 1101f776 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101f77a jne 0x1101f79a */
  if (!C.zf) goto L_1101f79a;
  /* 1101f77c push 0x1103c148 */
  push32((uint32_t)(0x1103c148u));
  /* 1101f781 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101f783 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 1101f785 push 0x1103c29c */
  push32((uint32_t)(0x1103c29cu));
  /* 1101f78a push 2 */
  push32((uint32_t)(0x2u));
  /* 1101f78c call 0x110141f0 */
  push32(0x1101f791u); f_110141f0();
  /* 1101f791 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f794 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101f797 jne 0x1101f79a */
  if (!C.zf) goto L_1101f79a;
  /* 1101f799 int3  */
  x86_unimpl("int3 @ 0x1101f799");
L_1101f79a:;
  /* 1101f79a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1101f79c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1101f79e jne 0x1101f776 */
  if (!C.zf) goto L_1101f776;
  /* 1101f7a0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101f7a3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1101f7a6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1101f7ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101f7ad je 0x1101f80a */
  if (C.zf) goto L_1101f80a;
  /* 1101f7af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101f7b2 push ecx */
  push32((uint32_t)(ECX));
  /* 1101f7b3 call 0x1101ea60 */
  push32(0x1101f7b8u); f_1101ea60();
  /* 1101f7b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f7bb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1101f7be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101f7c1 push edx */
  push32((uint32_t)(EDX));
  /* 1101f7c2 call 0x11021de0 */
  push32(0x1101f7c7u); f_11021de0();
  /* 1101f7c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f7ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101f7cd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1101f7d0 push ecx */
  push32((uint32_t)(ECX));
  /* 1101f7d1 call 0x11021cb0 */
  push32(0x1101f7d6u); f_11021cb0();
  /* 1101f7d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f7d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101f7db jge 0x1101f7e6 */
  if ((C.sf==C.of)) goto L_1101f7e6;
  /* 1101f7dd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1101f7e4 jmp 0x1101f80a */
  goto L_1101f80a;
L_1101f7e6:;
  /* 1101f7e6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101f7e9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101f7ed je 0x1101f80a */
  if (C.zf) goto L_1101f80a;
  /* 1101f7ef push 2 */
  push32((uint32_t)(0x2u));
  /* 1101f7f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101f7f4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1101f7f7 push ecx */
  push32((uint32_t)(ECX));
  /* 1101f7f8 call 0x11015bc0 */
  push32(0x1101f7fdu); f_11015bc0();
  /* 1101f7fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f800 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101f803 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_1101f80a:;
  /* 1101f80a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101f80d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1101f814 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101f817 pop edi */
  EDI = (pop32());
  /* 1101f818 pop esi */
  ESI = (pop32());
  /* 1101f819 pop ebx */
  EBX = (pop32());
  /* 1101f81a mov esp, ebp */
  ESP = (EBP);
  /* 1101f81c pop ebp */
  EBP = (pop32());
  /* 1101f81d ret  */
  ESPCHK(0x1101f760u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f820 @ 0x1101f820 (210 bytes, 63 insns) */
void f_1101f820(void) {
  FTRACE(0x1101f820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101f820 push ebp */
  push32((uint32_t)(EBP));
  /* 1101f821 mov ebp, esp */
  EBP = (ESP);
  /* 1101f823 push ecx */
  push32((uint32_t)(ECX));
  /* 1101f824 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101f827 cmp eax, dword ptr [0x110420dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110420dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101f82d jae 0x1101f851 */
  if (!C.cf) goto L_1101f851;
  /* 1101f82f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101f832 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1101f835 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101f838 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1101f83b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101f83e mov eax, dword ptr [ecx*4 + 0x11041fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11041fa0)));
  /* 1101f845 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1101f84a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1101f84d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1101f84f jne 0x1101f864 */
  if (!C.zf) goto L_1101f864;
L_1101f851:;
  /* 1101f851 call 0x1101d000 */
  push32(0x1101f856u); f_1101d000();
  /* 1101f856 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1101f85c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1101f85f jmp 0x1101f8ee */
  goto L_1101f8ee;
L_1101f864:;
  /* 1101f864 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101f867 push edx */
  push32((uint32_t)(EDX));
  /* 1101f868 call 0x1101e820 */
  push32(0x1101f86du); f_1101e820();
  /* 1101f86d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f870 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101f873 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1101f876 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101f879 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1101f87c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101f87f mov edx, dword ptr [eax*4 + 0x11041fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11041fa0)));
  /* 1101f886 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1101f88b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1101f88e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101f890 je 0x1101f8cd */
  if (C.zf) goto L_1101f8cd;
  /* 1101f892 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101f895 push ecx */
  push32((uint32_t)(ECX));
  /* 1101f896 call 0x1101e6a0 */
  push32(0x1101f89bu); f_1101e6a0();
  /* 1101f89b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f89e push eax */
  push32((uint32_t)(EAX));
  /* 1101f89f call dword ptr [0x110432ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x110432ec))), 0x1101f8a5u);
  /* 1101f8a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101f8a7 jne 0x1101f8b4 */
  if (!C.zf) goto L_1101f8b4;
  /* 1101f8a9 call dword ptr [0x110433b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110433b4))), 0x1101f8afu);
  /* 1101f8af mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1101f8b2 jmp 0x1101f8bb */
  goto L_1101f8bb;
L_1101f8b4:;
  /* 1101f8b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1101f8bb:;
  /* 1101f8bb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101f8bf jne 0x1101f8c3 */
  if (!C.zf) goto L_1101f8c3;
  /* 1101f8c1 jmp 0x1101f8df */
  goto L_1101f8df;
L_1101f8c3:;
  /* 1101f8c3 call 0x1101d010 */
  push32(0x1101f8c8u); f_1101d010();
  /* 1101f8c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101f8cb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1101f8cd:;
  /* 1101f8cd call 0x1101d000 */
  push32(0x1101f8d2u); f_1101d000();
  /* 1101f8d2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1101f8d8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1101f8df:;
  /* 1101f8df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101f8e2 push eax */
  push32((uint32_t)(EAX));
  /* 1101f8e3 call 0x1101e8b0 */
  push32(0x1101f8e8u); f_1101e8b0();
  /* 1101f8e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f8eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1101f8ee:;
  /* 1101f8ee mov esp, ebp */
  ESP = (EBP);
  /* 1101f8f0 pop ebp */
  EBP = (pop32());
  /* 1101f8f1 ret  */
  ESPCHK(0x1101f820u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x1101f900 (219 bytes, 64 insns) */
void f_1101f900(void) {
  FTRACE(0x1101f900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101f900 push ebp */
  push32((uint32_t)(EBP));
  /* 1101f901 mov ebp, esp */
  EBP = (ESP);
  /* 1101f903 push ecx */
  push32((uint32_t)(ECX));
  /* 1101f904 cmp dword ptr [0x110407dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110407dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101f90b je 0x1101f9a1 */
  if (C.zf) goto L_1101f9a1;
  /* 1101f911 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1101f913 push 0x1103c2b8 */
  push32((uint32_t)(0x1103c2b8u));
  /* 1101f918 push 2 */
  push32((uint32_t)(0x2u));
  /* 1101f91a push 0xac */
  push32((uint32_t)(0xacu));
  /* 1101f91f push 1 */
  push32((uint32_t)(0x1u));
  /* 1101f921 call 0x11015540 */
  push32(0x1101f926u); f_11015540();
  /* 1101f926 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f929 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1101f92c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101f930 jne 0x1101f93c */
  if (!C.zf) goto L_1101f93c;
  /* 1101f932 mov eax, 1 */
  EAX = (0x1u);
  /* 1101f937 jmp 0x1101f9d7 */
  goto L_1101f9d7;
L_1101f93c:;
  /* 1101f93c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101f93f push eax */
  push32((uint32_t)(EAX));
  /* 1101f940 call 0x1101f9e0 */
  push32(0x1101f945u); f_1101f9e0();
  /* 1101f945 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f948 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101f94a je 0x1101f96d */
  if (C.zf) goto L_1101f96d;
  /* 1101f94c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101f94f push ecx */
  push32((uint32_t)(ECX));
  /* 1101f950 call 0x1101ff70 */
  push32(0x1101f955u); f_1101ff70();
  /* 1101f955 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f958 push 2 */
  push32((uint32_t)(0x2u));
  /* 1101f95a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101f95d push edx */
  push32((uint32_t)(EDX));
  /* 1101f95e call 0x11015bc0 */
  push32(0x1101f963u); f_11015bc0();
  /* 1101f963 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f966 mov eax, 1 */
  EAX = (0x1u);
  /* 1101f96b jmp 0x1101f9d7 */
  goto L_1101f9d7;
L_1101f96d:;
  /* 1101f96d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101f970 mov dword ptr [0x1103fc98], eax */
  w32((uint32_t)(0x1103fc98), (EAX));
  /* 1101f975 mov ecx, dword ptr [0x110407fc] */
  ECX = (r32((uint32_t)(0x110407fc)));
  /* 1101f97b push ecx */
  push32((uint32_t)(ECX));
  /* 1101f97c call 0x1101ff70 */
  push32(0x1101f981u); f_1101ff70();
  /* 1101f981 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f984 push 2 */
  push32((uint32_t)(0x2u));
  /* 1101f986 mov edx, dword ptr [0x110407fc] */
  EDX = (r32((uint32_t)(0x110407fc)));
  /* 1101f98c push edx */
  push32((uint32_t)(EDX));
  /* 1101f98d call 0x11015bc0 */
  push32(0x1101f992u); f_11015bc0();
  /* 1101f992 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f995 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101f998 mov dword ptr [0x110407fc], eax */
  w32((uint32_t)(0x110407fc), (EAX));
  /* 1101f99d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101f99f jmp 0x1101f9d7 */
  goto L_1101f9d7;
L_1101f9a1:;
  /* 1101f9a1 mov dword ptr [0x1103fc98], 0x1103fca0 */
  w32((uint32_t)(0x1103fc98), (0x1103fca0u));
  /* 1101f9ab mov ecx, dword ptr [0x110407fc] */
  ECX = (r32((uint32_t)(0x110407fc)));
  /* 1101f9b1 push ecx */
  push32((uint32_t)(ECX));
  /* 1101f9b2 call 0x1101ff70 */
  push32(0x1101f9b7u); f_1101ff70();
  /* 1101f9b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f9ba push 2 */
  push32((uint32_t)(0x2u));
  /* 1101f9bc mov edx, dword ptr [0x110407fc] */
  EDX = (r32((uint32_t)(0x110407fc)));
  /* 1101f9c2 push edx */
  push32((uint32_t)(EDX));
  /* 1101f9c3 call 0x11015bc0 */
  push32(0x1101f9c8u); f_11015bc0();
  /* 1101f9c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101f9cb mov dword ptr [0x110407fc], 0 */
  w32((uint32_t)(0x110407fc), (0x0u));
  /* 1101f9d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1101f9d7:;
  /* 1101f9d7 mov esp, ebp */
  ESP = (EBP);
  /* 1101f9d9 pop ebp */
  EBP = (pop32());
  /* 1101f9da ret  */
  ESPCHK(0x1101f900u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f9e0 @ 0x1101f9e0 (1423 bytes, 533 insns) */
void f_1101f9e0(void) {
  FTRACE(0x1101f9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101f9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1101f9e1 mov ebp, esp */
  EBP = (ESP);
  /* 1101f9e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101f9e6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1101f9ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101f9ef mov ax, word ptr [0x11040836] */
  AX = (r16((uint32_t)(0x11040836)));
  /* 1101f9f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1101f9f8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1101f9fa mov cx, word ptr [0x11040838] */
  CX = (r16((uint32_t)(0x11040838)));
  /* 1101fa01 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1101fa04 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101fa08 jne 0x1101fa12 */
  if (!C.zf) goto L_1101fa12;
  /* 1101fa0a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1101fa0d jmp 0x1101ff6b */
  goto L_1101ff6b;
L_1101fa12:;
  /* 1101fa12 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101fa15 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fa18 push edx */
  push32((uint32_t)(EDX));
  /* 1101fa19 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 1101fa1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101fa1e push eax */
  push32((uint32_t)(EAX));
  /* 1101fa1f push 1 */
  push32((uint32_t)(0x1u));
  /* 1101fa21 call 0x110232f0 */
  push32(0x1101fa26u); f_110232f0();
  /* 1101fa26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fa29 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101fa2c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101fa2e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101fa31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101fa34 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fa37 push edx */
  push32((uint32_t)(EDX));
  /* 1101fa38 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1101fa3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101fa3d push eax */
  push32((uint32_t)(EAX));
  /* 1101fa3e push 1 */
  push32((uint32_t)(0x1u));
  /* 1101fa40 call 0x110232f0 */
  push32(0x1101fa45u); f_110232f0();
  /* 1101fa45 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fa48 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101fa4b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101fa4d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101fa50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101fa53 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fa56 push edx */
  push32((uint32_t)(EDX));
  /* 1101fa57 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 1101fa59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101fa5c push eax */
  push32((uint32_t)(EAX));
  /* 1101fa5d push 1 */
  push32((uint32_t)(0x1u));
  /* 1101fa5f call 0x110232f0 */
  push32(0x1101fa64u); f_110232f0();
  /* 1101fa64 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fa67 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101fa6a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101fa6c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101fa6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101fa72 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fa75 push edx */
  push32((uint32_t)(EDX));
  /* 1101fa76 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 1101fa78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101fa7b push eax */
  push32((uint32_t)(EAX));
  /* 1101fa7c push 1 */
  push32((uint32_t)(0x1u));
  /* 1101fa7e call 0x110232f0 */
  push32(0x1101fa83u); f_110232f0();
  /* 1101fa83 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fa86 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101fa89 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101fa8b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101fa8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101fa91 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fa94 push edx */
  push32((uint32_t)(EDX));
  /* 1101fa95 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 1101fa97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101fa9a push eax */
  push32((uint32_t)(EAX));
  /* 1101fa9b push 1 */
  push32((uint32_t)(0x1u));
  /* 1101fa9d call 0x110232f0 */
  push32(0x1101faa2u); f_110232f0();
  /* 1101faa2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101faa5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101faa8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101faaa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101faad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101fab0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fab3 push edx */
  push32((uint32_t)(EDX));
  /* 1101fab4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 1101fab6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101fab9 push eax */
  push32((uint32_t)(EAX));
  /* 1101faba push 1 */
  push32((uint32_t)(0x1u));
  /* 1101fabc call 0x110232f0 */
  push32(0x1101fac1u); f_110232f0();
  /* 1101fac1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fac4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101fac7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101fac9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101facc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101facf push edx */
  push32((uint32_t)(EDX));
  /* 1101fad0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1101fad2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101fad5 push eax */
  push32((uint32_t)(EAX));
  /* 1101fad6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1101fad8 call 0x110232f0 */
  push32(0x1101faddu); f_110232f0();
  /* 1101fadd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fae0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101fae3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101fae5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101fae8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101faeb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101faee push edx */
  push32((uint32_t)(EDX));
  /* 1101faef push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1101faf1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101faf4 push eax */
  push32((uint32_t)(EAX));
  /* 1101faf5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1101faf7 call 0x110232f0 */
  push32(0x1101fafcu); f_110232f0();
  /* 1101fafc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101faff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101fb02 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101fb04 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101fb07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101fb0a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fb0d push edx */
  push32((uint32_t)(EDX));
  /* 1101fb0e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 1101fb10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101fb13 push eax */
  push32((uint32_t)(EAX));
  /* 1101fb14 push 1 */
  push32((uint32_t)(0x1u));
  /* 1101fb16 call 0x110232f0 */
  push32(0x1101fb1bu); f_110232f0();
  /* 1101fb1b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fb1e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101fb21 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101fb23 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101fb26 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101fb29 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fb2c push edx */
  push32((uint32_t)(EDX));
  /* 1101fb2d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1101fb2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101fb32 push eax */
  push32((uint32_t)(EAX));
  /* 1101fb33 push 1 */
  push32((uint32_t)(0x1u));
  /* 1101fb35 call 0x110232f0 */
  push32(0x1101fb3au); f_110232f0();
  /* 1101fb3a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fb3d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101fb40 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101fb42 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101fb45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101fb48 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fb4b push edx */
  push32((uint32_t)(EDX));
  /* 1101fb4c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1101fb4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101fb51 push eax */
  push32((uint32_t)(EAX));
  /* 1101fb52 push 1 */
  push32((uint32_t)(0x1u));
  /* 1101fb54 call 0x110232f0 */
  push32(0x1101fb59u); f_110232f0();
  /* 1101fb59 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fb5c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101fb5f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101fb61 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101fb64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101fb67 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fb6a push edx */
  push32((uint32_t)(EDX));
  /* 1101fb6b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1101fb6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101fb70 push eax */
  push32((uint32_t)(EAX));
  /* 1101fb71 push 1 */
  push32((uint32_t)(0x1u));
  /* 1101fb73 call 0x110232f0 */
  push32(0x1101fb78u); f_110232f0();
  /* 1101fb78 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fb7b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101fb7e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101fb80 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101fb83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101fb86 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fb89 push edx */
  push32((uint32_t)(EDX));
  /* 1101fb8a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1101fb8c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101fb8f push eax */
  push32((uint32_t)(EAX));
  /* 1101fb90 push 1 */
  push32((uint32_t)(0x1u));
  /* 1101fb92 call 0x110232f0 */
  push32(0x1101fb97u); f_110232f0();
  /* 1101fb97 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fb9a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101fb9d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101fb9f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101fba2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101fba5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fba8 push edx */
  push32((uint32_t)(EDX));
  /* 1101fba9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1101fbab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101fbae push eax */
  push32((uint32_t)(EAX));
  /* 1101fbaf push 1 */
  push32((uint32_t)(0x1u));
  /* 1101fbb1 call 0x110232f0 */
  push32(0x1101fbb6u); f_110232f0();
  /* 1101fbb6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fbb9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101fbbc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101fbbe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101fbc1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101fbc4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fbc7 push edx */
  push32((uint32_t)(EDX));
  /* 1101fbc8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1101fbca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101fbcd push eax */
  push32((uint32_t)(EAX));
  /* 1101fbce push 1 */
  push32((uint32_t)(0x1u));
  /* 1101fbd0 call 0x110232f0 */
  push32(0x1101fbd5u); f_110232f0();
  /* 1101fbd5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fbd8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101fbdb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101fbdd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101fbe0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101fbe3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fbe6 push edx */
  push32((uint32_t)(EDX));
  /* 1101fbe7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 1101fbe9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101fbec push eax */
  push32((uint32_t)(EAX));
  /* 1101fbed push 1 */
  push32((uint32_t)(0x1u));
  /* 1101fbef call 0x110232f0 */
  push32(0x1101fbf4u); f_110232f0();
  /* 1101fbf4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fbf7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101fbfa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101fbfc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101fbff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101fc02 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fc05 push edx */
  push32((uint32_t)(EDX));
  /* 1101fc06 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1101fc08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101fc0b push eax */
  push32((uint32_t)(EAX));
  /* 1101fc0c push 1 */
  push32((uint32_t)(0x1u));
  /* 1101fc0e call 0x110232f0 */
  push32(0x1101fc13u); f_110232f0();
  /* 1101fc13 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fc16 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101fc19 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101fc1b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101fc1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101fc21 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fc24 push edx */
  push32((uint32_t)(EDX));
  /* 1101fc25 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 1101fc27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101fc2a push eax */
  push32((uint32_t)(EAX));
  /* 1101fc2b push 1 */
  push32((uint32_t)(0x1u));
  /* 1101fc2d call 0x110232f0 */
  push32(0x1101fc32u); f_110232f0();
  /* 1101fc32 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fc35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101fc38 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101fc3a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101fc3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101fc40 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fc43 push edx */
  push32((uint32_t)(EDX));
  /* 1101fc44 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1101fc46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101fc49 push eax */
  push32((uint32_t)(EAX));
  /* 1101fc4a push 1 */
  push32((uint32_t)(0x1u));
  /* 1101fc4c call 0x110232f0 */
  push32(0x1101fc51u); f_110232f0();
  /* 1101fc51 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fc54 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101fc57 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101fc59 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101fc5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101fc5f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fc62 push edx */
  push32((uint32_t)(EDX));
  /* 1101fc63 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 1101fc65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101fc68 push eax */
  push32((uint32_t)(EAX));
  /* 1101fc69 push 1 */
  push32((uint32_t)(0x1u));
  /* 1101fc6b call 0x110232f0 */
  push32(0x1101fc70u); f_110232f0();
  /* 1101fc70 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fc73 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101fc76 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101fc78 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101fc7b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101fc7e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fc81 push edx */
  push32((uint32_t)(EDX));
  /* 1101fc82 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1101fc84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101fc87 push eax */
  push32((uint32_t)(EAX));
  /* 1101fc88 push 1 */
  push32((uint32_t)(0x1u));
  /* 1101fc8a call 0x110232f0 */
  push32(0x1101fc8fu); f_110232f0();
  /* 1101fc8f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fc92 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101fc95 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101fc97 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101fc9a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101fc9d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fca0 push edx */
  push32((uint32_t)(EDX));
  /* 1101fca1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 1101fca3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101fca6 push eax */
  push32((uint32_t)(EAX));
  /* 1101fca7 push 1 */
  push32((uint32_t)(0x1u));
  /* 1101fca9 call 0x110232f0 */
  push32(0x1101fcaeu); f_110232f0();
  /* 1101fcae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fcb1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101fcb4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101fcb6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101fcb9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101fcbc add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fcbf push edx */
  push32((uint32_t)(EDX));
  /* 1101fcc0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 1101fcc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101fcc5 push eax */
  push32((uint32_t)(EAX));
  /* 1101fcc6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1101fcc8 call 0x110232f0 */
  push32(0x1101fccdu); f_110232f0();
  /* 1101fccd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fcd0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101fcd3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101fcd5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101fcd8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101fcdb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fcde push edx */
  push32((uint32_t)(EDX));
  /* 1101fcdf push 0x4d */
  push32((uint32_t)(0x4du));
  /* 1101fce1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101fce4 push eax */
  push32((uint32_t)(EAX));
  /* 1101fce5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1101fce7 call 0x110232f0 */
  push32(0x1101fcecu); f_110232f0();
  /* 1101fcec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fcef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101fcf2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101fcf4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101fcf7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101fcfa add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fcfd push edx */
  push32((uint32_t)(EDX));
  /* 1101fcfe push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 1101fd00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101fd03 push eax */
  push32((uint32_t)(EAX));
  /* 1101fd04 push 1 */
  push32((uint32_t)(0x1u));
  /* 1101fd06 call 0x110232f0 */
  push32(0x1101fd0bu); f_110232f0();
  /* 1101fd0b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fd0e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101fd11 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101fd13 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101fd16 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101fd19 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fd1c push edx */
  push32((uint32_t)(EDX));
  /* 1101fd1d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1101fd1f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101fd22 push eax */
  push32((uint32_t)(EAX));
  /* 1101fd23 push 1 */
  push32((uint32_t)(0x1u));
  /* 1101fd25 call 0x110232f0 */
  push32(0x1101fd2au); f_110232f0();
  /* 1101fd2a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fd2d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101fd30 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101fd32 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101fd35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101fd38 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fd3b push edx */
  push32((uint32_t)(EDX));
  /* 1101fd3c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1101fd3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101fd41 push eax */
  push32((uint32_t)(EAX));
  /* 1101fd42 push 1 */
  push32((uint32_t)(0x1u));
  /* 1101fd44 call 0x110232f0 */
  push32(0x1101fd49u); f_110232f0();
  /* 1101fd49 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fd4c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101fd4f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101fd51 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101fd54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101fd57 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fd5a push edx */
  push32((uint32_t)(EDX));
  /* 1101fd5b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1101fd5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101fd60 push eax */
  push32((uint32_t)(EAX));
  /* 1101fd61 push 1 */
  push32((uint32_t)(0x1u));
  /* 1101fd63 call 0x110232f0 */
  push32(0x1101fd68u); f_110232f0();
  /* 1101fd68 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fd6b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101fd6e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101fd70 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101fd73 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101fd76 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fd79 push edx */
  push32((uint32_t)(EDX));
  /* 1101fd7a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1101fd7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101fd7f push eax */
  push32((uint32_t)(EAX));
  /* 1101fd80 push 1 */
  push32((uint32_t)(0x1u));
  /* 1101fd82 call 0x110232f0 */
  push32(0x1101fd87u); f_110232f0();
  /* 1101fd87 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fd8a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101fd8d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101fd8f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101fd92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101fd95 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fd98 push edx */
  push32((uint32_t)(EDX));
  /* 1101fd99 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1101fd9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101fd9e push eax */
  push32((uint32_t)(EAX));
  /* 1101fd9f push 1 */
  push32((uint32_t)(0x1u));
  /* 1101fda1 call 0x110232f0 */
  push32(0x1101fda6u); f_110232f0();
  /* 1101fda6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fda9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101fdac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101fdae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101fdb1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101fdb4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fdb7 push edx */
  push32((uint32_t)(EDX));
  /* 1101fdb8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1101fdba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101fdbd push eax */
  push32((uint32_t)(EAX));
  /* 1101fdbe push 1 */
  push32((uint32_t)(0x1u));
  /* 1101fdc0 call 0x110232f0 */
  push32(0x1101fdc5u); f_110232f0();
  /* 1101fdc5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fdc8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101fdcb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101fdcd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101fdd0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101fdd3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fdd6 push edx */
  push32((uint32_t)(EDX));
  /* 1101fdd7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1101fdd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101fddc push eax */
  push32((uint32_t)(EAX));
  /* 1101fddd push 1 */
  push32((uint32_t)(0x1u));
  /* 1101fddf call 0x110232f0 */
  push32(0x1101fde4u); f_110232f0();
  /* 1101fde4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fde7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101fdea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101fdec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101fdef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101fdf2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fdf8 push edx */
  push32((uint32_t)(EDX));
  /* 1101fdf9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 1101fdfb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101fdfe push eax */
  push32((uint32_t)(EAX));
  /* 1101fdff push 1 */
  push32((uint32_t)(0x1u));
  /* 1101fe01 call 0x110232f0 */
  push32(0x1101fe06u); f_110232f0();
  /* 1101fe06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fe09 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101fe0c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101fe0e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101fe11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101fe14 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fe1a push edx */
  push32((uint32_t)(EDX));
  /* 1101fe1b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1101fe1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101fe20 push eax */
  push32((uint32_t)(EAX));
  /* 1101fe21 push 1 */
  push32((uint32_t)(0x1u));
  /* 1101fe23 call 0x110232f0 */
  push32(0x1101fe28u); f_110232f0();
  /* 1101fe28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fe2b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101fe2e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101fe30 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101fe33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101fe36 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fe3c push edx */
  push32((uint32_t)(EDX));
  /* 1101fe3d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1101fe3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101fe42 push eax */
  push32((uint32_t)(EAX));
  /* 1101fe43 push 1 */
  push32((uint32_t)(0x1u));
  /* 1101fe45 call 0x110232f0 */
  push32(0x1101fe4au); f_110232f0();
  /* 1101fe4a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fe4d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101fe50 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101fe52 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101fe55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101fe58 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fe5e push edx */
  push32((uint32_t)(EDX));
  /* 1101fe5f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1101fe61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101fe64 push eax */
  push32((uint32_t)(EAX));
  /* 1101fe65 push 1 */
  push32((uint32_t)(0x1u));
  /* 1101fe67 call 0x110232f0 */
  push32(0x1101fe6cu); f_110232f0();
  /* 1101fe6c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fe6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101fe72 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101fe74 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101fe77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101fe7a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fe80 push edx */
  push32((uint32_t)(EDX));
  /* 1101fe81 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1101fe83 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101fe86 push eax */
  push32((uint32_t)(EAX));
  /* 1101fe87 push 1 */
  push32((uint32_t)(0x1u));
  /* 1101fe89 call 0x110232f0 */
  push32(0x1101fe8eu); f_110232f0();
  /* 1101fe8e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fe91 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101fe94 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101fe96 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101fe99 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101fe9c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fea2 push edx */
  push32((uint32_t)(EDX));
  /* 1101fea3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1101fea5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101fea8 push eax */
  push32((uint32_t)(EAX));
  /* 1101fea9 push 1 */
  push32((uint32_t)(0x1u));
  /* 1101feab call 0x110232f0 */
  push32(0x1101feb0u); f_110232f0();
  /* 1101feb0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101feb3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101feb6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101feb8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101febb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101febe add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fec4 push edx */
  push32((uint32_t)(EDX));
  /* 1101fec5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1101fec7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101feca push eax */
  push32((uint32_t)(EAX));
  /* 1101fecb push 1 */
  push32((uint32_t)(0x1u));
  /* 1101fecd call 0x110232f0 */
  push32(0x1101fed2u); f_110232f0();
  /* 1101fed2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fed5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101fed8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101feda mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101fedd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101fee0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fee6 push edx */
  push32((uint32_t)(EDX));
  /* 1101fee7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 1101fee9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101feec push eax */
  push32((uint32_t)(EAX));
  /* 1101feed push 1 */
  push32((uint32_t)(0x1u));
  /* 1101feef call 0x110232f0 */
  push32(0x1101fef4u); f_110232f0();
  /* 1101fef4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fef7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101fefa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101fefc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101feff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101ff02 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ff08 push edx */
  push32((uint32_t)(EDX));
  /* 1101ff09 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1101ff0b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101ff0e push eax */
  push32((uint32_t)(EAX));
  /* 1101ff0f push 1 */
  push32((uint32_t)(0x1u));
  /* 1101ff11 call 0x110232f0 */
  push32(0x1101ff16u); f_110232f0();
  /* 1101ff16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ff19 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101ff1c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101ff1e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101ff21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101ff24 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ff2a push edx */
  push32((uint32_t)(EDX));
  /* 1101ff2b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1101ff2d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101ff30 push eax */
  push32((uint32_t)(EAX));
  /* 1101ff31 push 1 */
  push32((uint32_t)(0x1u));
  /* 1101ff33 call 0x110232f0 */
  push32(0x1101ff38u); f_110232f0();
  /* 1101ff38 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ff3b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101ff3e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101ff40 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101ff43 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101ff46 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ff4c push edx */
  push32((uint32_t)(EDX));
  /* 1101ff4d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 1101ff52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101ff55 push eax */
  push32((uint32_t)(EAX));
  /* 1101ff56 push 1 */
  push32((uint32_t)(0x1u));
  /* 1101ff58 call 0x110232f0 */
  push32(0x1101ff5du); f_110232f0();
  /* 1101ff5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ff60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101ff63 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1101ff65 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1101ff68 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1101ff6b:;
  /* 1101ff6b mov esp, ebp */
  ESP = (EBP);
  /* 1101ff6d pop ebp */
  EBP = (pop32());
  /* 1101ff6e ret  */
  ESPCHK(0x1101f9e0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x1101ff70 (779 bytes, 265 insns) */
void f_1101ff70(void) {
  FTRACE(0x1101ff70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101ff70 push ebp */
  push32((uint32_t)(EBP));
  /* 1101ff71 mov ebp, esp */
  EBP = (ESP);
  /* 1101ff73 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101ff77 jne 0x1101ff7e */
  if (!C.zf) goto L_1101ff7e;
  /* 1101ff79 jmp 0x11020279 */
  goto L_11020279;
L_1101ff7e:;
  /* 1101ff7e push 2 */
  push32((uint32_t)(0x2u));
  /* 1101ff80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101ff83 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1101ff86 push ecx */
  push32((uint32_t)(ECX));
  /* 1101ff87 call 0x11015bc0 */
  push32(0x1101ff8cu); f_11015bc0();
  /* 1101ff8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ff8f push 2 */
  push32((uint32_t)(0x2u));
  /* 1101ff91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101ff94 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1101ff97 push eax */
  push32((uint32_t)(EAX));
  /* 1101ff98 call 0x11015bc0 */
  push32(0x1101ff9du); f_11015bc0();
  /* 1101ff9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ffa0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1101ffa2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101ffa5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1101ffa8 push edx */
  push32((uint32_t)(EDX));
  /* 1101ffa9 call 0x11015bc0 */
  push32(0x1101ffaeu); f_11015bc0();
  /* 1101ffae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ffb1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1101ffb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101ffb6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1101ffb9 push ecx */
  push32((uint32_t)(ECX));
  /* 1101ffba call 0x11015bc0 */
  push32(0x1101ffbfu); f_11015bc0();
  /* 1101ffbf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ffc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1101ffc4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101ffc7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1101ffca push eax */
  push32((uint32_t)(EAX));
  /* 1101ffcb call 0x11015bc0 */
  push32(0x1101ffd0u); f_11015bc0();
  /* 1101ffd0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ffd3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1101ffd5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101ffd8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1101ffdb push edx */
  push32((uint32_t)(EDX));
  /* 1101ffdc call 0x11015bc0 */
  push32(0x1101ffe1u); f_11015bc0();
  /* 1101ffe1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101ffe4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1101ffe6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101ffe9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1101ffeb push ecx */
  push32((uint32_t)(ECX));
  /* 1101ffec call 0x11015bc0 */
  push32(0x1101fff1u); f_11015bc0();
  /* 1101fff1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101fff4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1101fff6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101fff9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1101fffc push eax */
  push32((uint32_t)(EAX));
  /* 1101fffd call 0x11015bc0 */
  push32(0x11020002u); f_11015bc0();
  /* 11020002 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020005 push 2 */
  push32((uint32_t)(0x2u));
  /* 11020007 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102000a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1102000d push edx */
  push32((uint32_t)(EDX));
  /* 1102000e call 0x11015bc0 */
  push32(0x11020013u); f_11015bc0();
  /* 11020013 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020016 push 2 */
  push32((uint32_t)(0x2u));
  /* 11020018 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102001b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1102001e push ecx */
  push32((uint32_t)(ECX));
  /* 1102001f call 0x11015bc0 */
  push32(0x11020024u); f_11015bc0();
  /* 11020024 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020027 push 2 */
  push32((uint32_t)(0x2u));
  /* 11020029 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102002c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 1102002f push eax */
  push32((uint32_t)(EAX));
  /* 11020030 call 0x11015bc0 */
  push32(0x11020035u); f_11015bc0();
  /* 11020035 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020038 push 2 */
  push32((uint32_t)(0x2u));
  /* 1102003a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102003d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 11020040 push edx */
  push32((uint32_t)(EDX));
  /* 11020041 call 0x11015bc0 */
  push32(0x11020046u); f_11015bc0();
  /* 11020046 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020049 push 2 */
  push32((uint32_t)(0x2u));
  /* 1102004b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102004e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 11020051 push ecx */
  push32((uint32_t)(ECX));
  /* 11020052 call 0x11015bc0 */
  push32(0x11020057u); f_11015bc0();
  /* 11020057 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102005a push 2 */
  push32((uint32_t)(0x2u));
  /* 1102005c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102005f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11020062 push eax */
  push32((uint32_t)(EAX));
  /* 11020063 call 0x11015bc0 */
  push32(0x11020068u); f_11015bc0();
  /* 11020068 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102006b push 2 */
  push32((uint32_t)(0x2u));
  /* 1102006d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11020070 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 11020073 push edx */
  push32((uint32_t)(EDX));
  /* 11020074 call 0x11015bc0 */
  push32(0x11020079u); f_11015bc0();
  /* 11020079 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102007c push 2 */
  push32((uint32_t)(0x2u));
  /* 1102007e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11020081 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 11020084 push ecx */
  push32((uint32_t)(ECX));
  /* 11020085 call 0x11015bc0 */
  push32(0x1102008au); f_11015bc0();
  /* 1102008a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102008d push 2 */
  push32((uint32_t)(0x2u));
  /* 1102008f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11020092 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11020095 push eax */
  push32((uint32_t)(EAX));
  /* 11020096 call 0x11015bc0 */
  push32(0x1102009bu); f_11015bc0();
  /* 1102009b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102009e push 2 */
  push32((uint32_t)(0x2u));
  /* 110200a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110200a3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 110200a6 push edx */
  push32((uint32_t)(EDX));
  /* 110200a7 call 0x11015bc0 */
  push32(0x110200acu); f_11015bc0();
  /* 110200ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110200af push 2 */
  push32((uint32_t)(0x2u));
  /* 110200b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110200b4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 110200b7 push ecx */
  push32((uint32_t)(ECX));
  /* 110200b8 call 0x11015bc0 */
  push32(0x110200bdu); f_11015bc0();
  /* 110200bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110200c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 110200c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110200c5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 110200c8 push eax */
  push32((uint32_t)(EAX));
  /* 110200c9 call 0x11015bc0 */
  push32(0x110200ceu); f_11015bc0();
  /* 110200ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110200d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 110200d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110200d6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 110200d9 push edx */
  push32((uint32_t)(EDX));
  /* 110200da call 0x11015bc0 */
  push32(0x110200dfu); f_11015bc0();
  /* 110200df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110200e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 110200e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110200e7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 110200ea push ecx */
  push32((uint32_t)(ECX));
  /* 110200eb call 0x11015bc0 */
  push32(0x110200f0u); f_11015bc0();
  /* 110200f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110200f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 110200f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110200f8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 110200fb push eax */
  push32((uint32_t)(EAX));
  /* 110200fc call 0x11015bc0 */
  push32(0x11020101u); f_11015bc0();
  /* 11020101 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020104 push 2 */
  push32((uint32_t)(0x2u));
  /* 11020106 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11020109 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 1102010c push edx */
  push32((uint32_t)(EDX));
  /* 1102010d call 0x11015bc0 */
  push32(0x11020112u); f_11015bc0();
  /* 11020112 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020115 push 2 */
  push32((uint32_t)(0x2u));
  /* 11020117 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102011a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 1102011d push ecx */
  push32((uint32_t)(ECX));
  /* 1102011e call 0x11015bc0 */
  push32(0x11020123u); f_11015bc0();
  /* 11020123 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020126 push 2 */
  push32((uint32_t)(0x2u));
  /* 11020128 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102012b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 1102012e push eax */
  push32((uint32_t)(EAX));
  /* 1102012f call 0x11015bc0 */
  push32(0x11020134u); f_11015bc0();
  /* 11020134 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020137 push 2 */
  push32((uint32_t)(0x2u));
  /* 11020139 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102013c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 1102013f push edx */
  push32((uint32_t)(EDX));
  /* 11020140 call 0x11015bc0 */
  push32(0x11020145u); f_11015bc0();
  /* 11020145 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020148 push 2 */
  push32((uint32_t)(0x2u));
  /* 1102014a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102014d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 11020150 push ecx */
  push32((uint32_t)(ECX));
  /* 11020151 call 0x11015bc0 */
  push32(0x11020156u); f_11015bc0();
  /* 11020156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020159 push 2 */
  push32((uint32_t)(0x2u));
  /* 1102015b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102015e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 11020161 push eax */
  push32((uint32_t)(EAX));
  /* 11020162 call 0x11015bc0 */
  push32(0x11020167u); f_11015bc0();
  /* 11020167 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102016a push 2 */
  push32((uint32_t)(0x2u));
  /* 1102016c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102016f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 11020172 push edx */
  push32((uint32_t)(EDX));
  /* 11020173 call 0x11015bc0 */
  push32(0x11020178u); f_11015bc0();
  /* 11020178 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102017b push 2 */
  push32((uint32_t)(0x2u));
  /* 1102017d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11020180 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 11020183 push ecx */
  push32((uint32_t)(ECX));
  /* 11020184 call 0x11015bc0 */
  push32(0x11020189u); f_11015bc0();
  /* 11020189 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102018c push 2 */
  push32((uint32_t)(0x2u));
  /* 1102018e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11020191 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 11020194 push eax */
  push32((uint32_t)(EAX));
  /* 11020195 call 0x11015bc0 */
  push32(0x1102019au); f_11015bc0();
  /* 1102019a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102019d push 2 */
  push32((uint32_t)(0x2u));
  /* 1102019f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110201a2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 110201a8 push edx */
  push32((uint32_t)(EDX));
  /* 110201a9 call 0x11015bc0 */
  push32(0x110201aeu); f_11015bc0();
  /* 110201ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110201b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 110201b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110201b6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 110201bc push ecx */
  push32((uint32_t)(ECX));
  /* 110201bd call 0x11015bc0 */
  push32(0x110201c2u); f_11015bc0();
  /* 110201c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110201c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 110201c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110201ca mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 110201d0 push eax */
  push32((uint32_t)(EAX));
  /* 110201d1 call 0x11015bc0 */
  push32(0x110201d6u); f_11015bc0();
  /* 110201d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110201d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 110201db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110201de mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 110201e4 push edx */
  push32((uint32_t)(EDX));
  /* 110201e5 call 0x11015bc0 */
  push32(0x110201eau); f_11015bc0();
  /* 110201ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110201ed push 2 */
  push32((uint32_t)(0x2u));
  /* 110201ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110201f2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 110201f8 push ecx */
  push32((uint32_t)(ECX));
  /* 110201f9 call 0x11015bc0 */
  push32(0x110201feu); f_11015bc0();
  /* 110201fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020201 push 2 */
  push32((uint32_t)(0x2u));
  /* 11020203 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11020206 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 1102020c push eax */
  push32((uint32_t)(EAX));
  /* 1102020d call 0x11015bc0 */
  push32(0x11020212u); f_11015bc0();
  /* 11020212 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020215 push 2 */
  push32((uint32_t)(0x2u));
  /* 11020217 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102021a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 11020220 push edx */
  push32((uint32_t)(EDX));
  /* 11020221 call 0x11015bc0 */
  push32(0x11020226u); f_11015bc0();
  /* 11020226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020229 push 2 */
  push32((uint32_t)(0x2u));
  /* 1102022b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102022e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11020234 push ecx */
  push32((uint32_t)(ECX));
  /* 11020235 call 0x11015bc0 */
  push32(0x1102023au); f_11015bc0();
  /* 1102023a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102023d push 2 */
  push32((uint32_t)(0x2u));
  /* 1102023f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11020242 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11020248 push eax */
  push32((uint32_t)(EAX));
  /* 11020249 call 0x11015bc0 */
  push32(0x1102024eu); f_11015bc0();
  /* 1102024e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020251 push 2 */
  push32((uint32_t)(0x2u));
  /* 11020253 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11020256 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1102025c push edx */
  push32((uint32_t)(EDX));
  /* 1102025d call 0x11015bc0 */
  push32(0x11020262u); f_11015bc0();
  /* 11020262 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020265 push 2 */
  push32((uint32_t)(0x2u));
  /* 11020267 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102026a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 11020270 push ecx */
  push32((uint32_t)(ECX));
  /* 11020271 call 0x11015bc0 */
  push32(0x11020276u); f_11015bc0();
  /* 11020276 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11020279:;
  /* 11020279 pop ebp */
  EBP = (pop32());
  /* 1102027a ret  */
  ESPCHK(0x1101ff70u, _esp0);
  ESP += 4; return;
}

/* FUN_10010280 @ 0x11020280 (678 bytes, 180 insns) */
void f_11020280(void) {
  FTRACE(0x11020280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11020280 push ebp */
  push32((uint32_t)(EBP));
  /* 11020281 mov ebp, esp */
  EBP = (ESP);
  /* 11020283 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11020286 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1102028d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1102028f mov ax, word ptr [0x11040832] */
  AX = (r16((uint32_t)(0x11040832)));
  /* 11020295 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11020298 cmp dword ptr [0x110407d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110407d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102029f je 0x110203fa */
  if (C.zf) goto L_110203fa;
  /* 110202a5 push 0x11040800 */
  push32((uint32_t)(0x11040800u));
  /* 110202aa push 0xe */
  push32((uint32_t)(0xeu));
  /* 110202ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110202af push ecx */
  push32((uint32_t)(ECX));
  /* 110202b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 110202b2 call 0x110232f0 */
  push32(0x110202b7u); f_110232f0();
  /* 110202b7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110202ba mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110202bd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 110202bf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 110202c2 push 0x11040804 */
  push32((uint32_t)(0x11040804u));
  /* 110202c7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 110202c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110202cc push eax */
  push32((uint32_t)(EAX));
  /* 110202cd push 1 */
  push32((uint32_t)(0x1u));
  /* 110202cf call 0x110232f0 */
  push32(0x110202d4u); f_110232f0();
  /* 110202d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110202d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110202da or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 110202dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 110202df push 0x11040808 */
  push32((uint32_t)(0x11040808u));
  /* 110202e4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 110202e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110202e9 push edx */
  push32((uint32_t)(EDX));
  /* 110202ea push 1 */
  push32((uint32_t)(0x1u));
  /* 110202ec call 0x110232f0 */
  push32(0x110202f1u); f_110232f0();
  /* 110202f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110202f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110202f7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 110202f9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 110202fc mov edx, dword ptr [0x11040808] */
  EDX = (r32((uint32_t)(0x11040808)));
  /* 11020302 push edx */
  push32((uint32_t)(EDX));
  /* 11020303 call 0x11020530 */
  push32(0x11020308u); f_11020530();
  /* 11020308 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102030b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102030f je 0x11020369 */
  if (C.zf) goto L_11020369;
  /* 11020311 push 2 */
  push32((uint32_t)(0x2u));
  /* 11020313 mov eax, dword ptr [0x11040800] */
  EAX = (r32((uint32_t)(0x11040800)));
  /* 11020318 push eax */
  push32((uint32_t)(EAX));
  /* 11020319 call 0x11015bc0 */
  push32(0x1102031eu); f_11015bc0();
  /* 1102031e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020321 push 2 */
  push32((uint32_t)(0x2u));
  /* 11020323 mov ecx, dword ptr [0x11040804] */
  ECX = (r32((uint32_t)(0x11040804)));
  /* 11020329 push ecx */
  push32((uint32_t)(ECX));
  /* 1102032a call 0x11015bc0 */
  push32(0x1102032fu); f_11015bc0();
  /* 1102032f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020332 push 2 */
  push32((uint32_t)(0x2u));
  /* 11020334 mov edx, dword ptr [0x11040808] */
  EDX = (r32((uint32_t)(0x11040808)));
  /* 1102033a push edx */
  push32((uint32_t)(EDX));
  /* 1102033b call 0x11015bc0 */
  push32(0x11020340u); f_11015bc0();
  /* 11020340 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020343 mov dword ptr [0x11040800], 0 */
  w32((uint32_t)(0x11040800), (0x0u));
  /* 1102034d mov dword ptr [0x11040804], 0 */
  w32((uint32_t)(0x11040804), (0x0u));
  /* 11020357 mov dword ptr [0x11040808], 0 */
  w32((uint32_t)(0x11040808), (0x0u));
  /* 11020361 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11020364 jmp 0x11020522 */
  goto L_11020522;
L_11020369:;
  /* 11020369 mov eax, dword ptr [0x1103fd88] */
  EAX = (r32((uint32_t)(0x1103fd88)));
  /* 1102036e cmp dword ptr [eax], 0x1103fd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1103fd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11020374 je 0x110203b0 */
  if (C.zf) goto L_110203b0;
  /* 11020376 push 2 */
  push32((uint32_t)(0x2u));
  /* 11020378 mov ecx, dword ptr [0x1103fd88] */
  ECX = (r32((uint32_t)(0x1103fd88)));
  /* 1102037e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11020380 push edx */
  push32((uint32_t)(EDX));
  /* 11020381 call 0x11015bc0 */
  push32(0x11020386u); f_11015bc0();
  /* 11020386 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020389 push 2 */
  push32((uint32_t)(0x2u));
  /* 1102038b mov eax, dword ptr [0x1103fd88] */
  EAX = (r32((uint32_t)(0x1103fd88)));
  /* 11020390 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11020393 push ecx */
  push32((uint32_t)(ECX));
  /* 11020394 call 0x11015bc0 */
  push32(0x11020399u); f_11015bc0();
  /* 11020399 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102039c push 2 */
  push32((uint32_t)(0x2u));
  /* 1102039e mov edx, dword ptr [0x1103fd88] */
  EDX = (r32((uint32_t)(0x1103fd88)));
  /* 110203a4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 110203a7 push eax */
  push32((uint32_t)(EAX));
  /* 110203a8 call 0x11015bc0 */
  push32(0x110203adu); f_11015bc0();
  /* 110203ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110203b0:;
  /* 110203b0 mov ecx, dword ptr [0x1103fd88] */
  ECX = (r32((uint32_t)(0x1103fd88)));
  /* 110203b6 mov edx, dword ptr [0x11040800] */
  EDX = (r32((uint32_t)(0x11040800)));
  /* 110203bc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 110203be mov eax, dword ptr [0x1103fd88] */
  EAX = (r32((uint32_t)(0x1103fd88)));
  /* 110203c3 mov ecx, dword ptr [0x11040804] */
  ECX = (r32((uint32_t)(0x11040804)));
  /* 110203c9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 110203cc mov edx, dword ptr [0x1103fd88] */
  EDX = (r32((uint32_t)(0x1103fd88)));
  /* 110203d2 mov eax, dword ptr [0x11040808] */
  EAX = (r32((uint32_t)(0x11040808)));
  /* 110203d7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 110203da mov ecx, dword ptr [0x1103fd88] */
  ECX = (r32((uint32_t)(0x1103fd88)));
  /* 110203e0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 110203e2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 110203e4 mov byte ptr [0x1103eea8], al */
  w8((uint32_t)(0x1103eea8), (AL));
  /* 110203e9 mov dword ptr [0x1103eeac], 1 */
  w32((uint32_t)(0x1103eeac), (0x1u));
  /* 110203f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110203f5 jmp 0x11020522 */
  goto L_11020522;
L_110203fa:;
  /* 110203fa push 2 */
  push32((uint32_t)(0x2u));
  /* 110203fc mov ecx, dword ptr [0x11040800] */
  ECX = (r32((uint32_t)(0x11040800)));
  /* 11020402 push ecx */
  push32((uint32_t)(ECX));
  /* 11020403 call 0x11015bc0 */
  push32(0x11020408u); f_11015bc0();
  /* 11020408 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102040b push 2 */
  push32((uint32_t)(0x2u));
  /* 1102040d mov edx, dword ptr [0x11040804] */
  EDX = (r32((uint32_t)(0x11040804)));
  /* 11020413 push edx */
  push32((uint32_t)(EDX));
  /* 11020414 call 0x11015bc0 */
  push32(0x11020419u); f_11015bc0();
  /* 11020419 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102041c push 2 */
  push32((uint32_t)(0x2u));
  /* 1102041e mov eax, dword ptr [0x11040808] */
  EAX = (r32((uint32_t)(0x11040808)));
  /* 11020423 push eax */
  push32((uint32_t)(EAX));
  /* 11020424 call 0x11015bc0 */
  push32(0x11020429u); f_11015bc0();
  /* 11020429 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102042c mov dword ptr [0x11040800], 0 */
  w32((uint32_t)(0x11040800), (0x0u));
  /* 11020436 mov dword ptr [0x11040804], 0 */
  w32((uint32_t)(0x11040804), (0x0u));
  /* 11020440 mov dword ptr [0x11040808], 0 */
  w32((uint32_t)(0x11040808), (0x0u));
  /* 1102044a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1102044f push 0x1103c2c4 */
  push32((uint32_t)(0x1103c2c4u));
  /* 11020454 push 2 */
  push32((uint32_t)(0x2u));
  /* 11020456 push 2 */
  push32((uint32_t)(0x2u));
  /* 11020458 call 0x11015130 */
  push32(0x1102045du); f_11015130();
  /* 1102045d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020460 mov ecx, dword ptr [0x1103fd88] */
  ECX = (r32((uint32_t)(0x1103fd88)));
  /* 11020466 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11020468 mov edx, dword ptr [0x1103fd88] */
  EDX = (r32((uint32_t)(0x1103fd88)));
  /* 1102046e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11020471 jne 0x1102047b */
  if (!C.zf) goto L_1102047b;
  /* 11020473 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11020476 jmp 0x11020522 */
  goto L_11020522;
L_1102047b:;
  /* 1102047b push 0x1103c294 */
  push32((uint32_t)(0x1103c294u));
  /* 11020480 mov eax, dword ptr [0x1103fd88] */
  EAX = (r32((uint32_t)(0x1103fd88)));
  /* 11020485 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11020487 push ecx */
  push32((uint32_t)(ECX));
  /* 11020488 call 0x110180e0 */
  push32(0x1102048du); f_110180e0();
  /* 1102048d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020490 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 11020495 push 0x1103c2c4 */
  push32((uint32_t)(0x1103c2c4u));
  /* 1102049a push 2 */
  push32((uint32_t)(0x2u));
  /* 1102049c push 2 */
  push32((uint32_t)(0x2u));
  /* 1102049e call 0x11015130 */
  push32(0x110204a3u); f_11015130();
  /* 110204a3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110204a6 mov edx, dword ptr [0x1103fd88] */
  EDX = (r32((uint32_t)(0x1103fd88)));
  /* 110204ac mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 110204af mov eax, dword ptr [0x1103fd88] */
  EAX = (r32((uint32_t)(0x1103fd88)));
  /* 110204b4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110204b8 jne 0x110204bf */
  if (!C.zf) goto L_110204bf;
  /* 110204ba or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110204bd jmp 0x11020522 */
  goto L_11020522;
L_110204bf:;
  /* 110204bf mov ecx, dword ptr [0x1103fd88] */
  ECX = (r32((uint32_t)(0x1103fd88)));
  /* 110204c5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 110204c8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 110204cb push 0x92 */
  push32((uint32_t)(0x92u));
  /* 110204d0 push 0x1103c2c4 */
  push32((uint32_t)(0x1103c2c4u));
  /* 110204d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 110204d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 110204d9 call 0x11015130 */
  push32(0x110204deu); f_11015130();
  /* 110204de add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110204e1 mov ecx, dword ptr [0x1103fd88] */
  ECX = (r32((uint32_t)(0x1103fd88)));
  /* 110204e7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 110204ea mov edx, dword ptr [0x1103fd88] */
  EDX = (r32((uint32_t)(0x1103fd88)));
  /* 110204f0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110204f4 jne 0x110204fb */
  if (!C.zf) goto L_110204fb;
  /* 110204f6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110204f9 jmp 0x11020522 */
  goto L_11020522;
L_110204fb:;
  /* 110204fb mov eax, dword ptr [0x1103fd88] */
  EAX = (r32((uint32_t)(0x1103fd88)));
  /* 11020500 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11020503 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11020506 mov edx, dword ptr [0x1103fd88] */
  EDX = (r32((uint32_t)(0x1103fd88)));
  /* 1102050c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1102050e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11020510 mov byte ptr [0x1103eea8], cl */
  w8((uint32_t)(0x1103eea8), (CL));
  /* 11020516 mov dword ptr [0x1103eeac], 1 */
  w32((uint32_t)(0x1103eeac), (0x1u));
  /* 11020520 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11020522:;
  /* 11020522 mov esp, ebp */
  ESP = (EBP);
  /* 11020524 pop ebp */
  EBP = (pop32());
  /* 11020525 ret  */
  ESPCHK(0x11020280u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11020530 (125 bytes, 49 insns) */
void f_11020530(void) {
  FTRACE(0x11020530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11020530 push ebp */
  push32((uint32_t)(EBP));
  /* 11020531 mov ebp, esp */
  EBP = (ESP);
  /* 11020533 push ecx */
  push32((uint32_t)(ECX));
L_11020534:;
  /* 11020534 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11020537 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1102053a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1102053c je 0x110205a9 */
  if (C.zf) goto L_110205a9;
  /* 1102053e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11020541 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11020544 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11020547 jl 0x1102056d */
  if ((C.sf!=C.of)) goto L_1102056d;
  /* 11020549 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102054c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1102054f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11020552 jg 0x1102056d */
  if ((!C.zf&&C.sf==C.of)) goto L_1102056d;
  /* 11020554 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11020557 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1102055a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1102055d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11020560 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11020562 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11020565 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11020568 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1102056b jmp 0x110205a7 */
  goto L_110205a7;
L_1102056d:;
  /* 1102056d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11020570 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11020573 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11020576 jne 0x1102059e */
  if (!C.zf) goto L_1102059e;
  /* 11020578 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102057b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1102057e:;
  /* 1102057e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11020581 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11020584 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11020587 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11020589 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1102058c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1102058f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11020592 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11020595 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11020598 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1102059a jne 0x1102057e */
  if (!C.zf) goto L_1102057e;
  /* 1102059c jmp 0x110205a7 */
  goto L_110205a7;
L_1102059e:;
  /* 1102059e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110205a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110205a4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_110205a7:;
  /* 110205a7 jmp 0x11020534 */
  goto L_11020534;
L_110205a9:;
  /* 110205a9 mov esp, ebp */
  ESP = (EBP);
  /* 110205ab pop ebp */
  EBP = (pop32());
  /* 110205ac ret  */
  ESPCHK(0x11020530u, _esp0);
  ESP += 4; return;
}

/* FUN_100105b0 @ 0x110205b0 (304 bytes, 85 insns) */
void f_110205b0(void) {
  FTRACE(0x110205b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110205b0 push ebp */
  push32((uint32_t)(EBP));
  /* 110205b1 mov ebp, esp */
  EBP = (ESP);
  /* 110205b3 push ecx */
  push32((uint32_t)(ECX));
  /* 110205b4 cmp dword ptr [0x110407d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110407d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110205bb je 0x1102067c */
  if (C.zf) goto L_1102067c;
  /* 110205c1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 110205c3 push 0x1103c2d0 */
  push32((uint32_t)(0x1103c2d0u));
  /* 110205c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 110205ca push 0x30 */
  push32((uint32_t)(0x30u));
  /* 110205cc push 1 */
  push32((uint32_t)(0x1u));
  /* 110205ce call 0x11015540 */
  push32(0x110205d3u); f_11015540();
  /* 110205d3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110205d6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110205d9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110205dd jne 0x110205e9 */
  if (!C.zf) goto L_110205e9;
  /* 110205df mov eax, 1 */
  EAX = (0x1u);
  /* 110205e4 jmp 0x110206dc */
  goto L_110206dc;
L_110205e9:;
  /* 110205e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110205ec push eax */
  push32((uint32_t)(EAX));
  /* 110205ed call 0x110206e0 */
  push32(0x110205f2u); f_110206e0();
  /* 110205f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110205f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110205f7 je 0x1102061d */
  if (C.zf) goto L_1102061d;
  /* 110205f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110205fc push ecx */
  push32((uint32_t)(ECX));
  /* 110205fd call 0x11020970 */
  push32(0x11020602u); f_11020970();
  /* 11020602 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020605 push 2 */
  push32((uint32_t)(0x2u));
  /* 11020607 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1102060a push edx */
  push32((uint32_t)(EDX));
  /* 1102060b call 0x11015bc0 */
  push32(0x11020610u); f_11015bc0();
  /* 11020610 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020613 mov eax, 1 */
  EAX = (0x1u);
  /* 11020618 jmp 0x110206dc */
  goto L_110206dc;
L_1102061d:;
  /* 1102061d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11020620 mov ecx, dword ptr [0x1103fd88] */
  ECX = (r32((uint32_t)(0x1103fd88)));
  /* 11020626 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11020628 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1102062a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1102062d mov ecx, dword ptr [0x1103fd88] */
  ECX = (r32((uint32_t)(0x1103fd88)));
  /* 11020633 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11020636 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11020639 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1102063c mov ecx, dword ptr [0x1103fd88] */
  ECX = (r32((uint32_t)(0x1103fd88)));
  /* 11020642 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11020645 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11020648 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1102064b mov dword ptr [0x1103fd88], eax */
  w32((uint32_t)(0x1103fd88), (EAX));
  /* 11020650 mov ecx, dword ptr [0x1104080c] */
  ECX = (r32((uint32_t)(0x1104080c)));
  /* 11020656 push ecx */
  push32((uint32_t)(ECX));
  /* 11020657 call 0x11020970 */
  push32(0x1102065cu); f_11020970();
  /* 1102065c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102065f push 2 */
  push32((uint32_t)(0x2u));
  /* 11020661 mov edx, dword ptr [0x1104080c] */
  EDX = (r32((uint32_t)(0x1104080c)));
  /* 11020667 push edx */
  push32((uint32_t)(EDX));
  /* 11020668 call 0x11015bc0 */
  push32(0x1102066du); f_11015bc0();
  /* 1102066d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020670 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11020673 mov dword ptr [0x1104080c], eax */
  w32((uint32_t)(0x1104080c), (EAX));
  /* 11020678 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1102067a jmp 0x110206dc */
  goto L_110206dc;
L_1102067c:;
  /* 1102067c mov ecx, dword ptr [0x1103fd88] */
  ECX = (r32((uint32_t)(0x1103fd88)));
  /* 11020682 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11020684 mov dword ptr [0x1103fd58], edx */
  w32((uint32_t)(0x1103fd58), (EDX));
  /* 1102068a mov eax, dword ptr [0x1103fd88] */
  EAX = (r32((uint32_t)(0x1103fd88)));
  /* 1102068f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11020692 mov dword ptr [0x1103fd5c], ecx */
  w32((uint32_t)(0x1103fd5c), (ECX));
  /* 11020698 mov edx, dword ptr [0x1103fd88] */
  EDX = (r32((uint32_t)(0x1103fd88)));
  /* 1102069e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 110206a1 mov dword ptr [0x1103fd60], eax */
  w32((uint32_t)(0x1103fd60), (EAX));
  /* 110206a6 mov dword ptr [0x1103fd88], 0x1103fd58 */
  w32((uint32_t)(0x1103fd88), (0x1103fd58u));
  /* 110206b0 mov ecx, dword ptr [0x1104080c] */
  ECX = (r32((uint32_t)(0x1104080c)));
  /* 110206b6 push ecx */
  push32((uint32_t)(ECX));
  /* 110206b7 call 0x11020970 */
  push32(0x110206bcu); f_11020970();
  /* 110206bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110206bf push 2 */
  push32((uint32_t)(0x2u));
  /* 110206c1 mov edx, dword ptr [0x1104080c] */
  EDX = (r32((uint32_t)(0x1104080c)));
  /* 110206c7 push edx */
  push32((uint32_t)(EDX));
  /* 110206c8 call 0x11015bc0 */
  push32(0x110206cdu); f_11015bc0();
  /* 110206cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110206d0 mov dword ptr [0x1104080c], 0 */
  w32((uint32_t)(0x1104080c), (0x0u));
  /* 110206da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_110206dc:;
  /* 110206dc mov esp, ebp */
  ESP = (EBP);
  /* 110206de pop ebp */
  EBP = (pop32());
  /* 110206df ret  */
  ESPCHK(0x110205b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100106e0 @ 0x110206e0 (525 bytes, 200 insns) */
void f_110206e0(void) {
  FTRACE(0x110206e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110206e0 push ebp */
  push32((uint32_t)(EBP));
  /* 110206e1 mov ebp, esp */
  EBP = (ESP);
  /* 110206e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110206e6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 110206ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110206ef mov ax, word ptr [0x1104082c] */
  AX = (r16((uint32_t)(0x1104082c)));
  /* 110206f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110206f8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110206fc jne 0x11020706 */
  if (!C.zf) goto L_11020706;
  /* 110206fe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11020701 jmp 0x110208e9 */
  goto L_110208e9;
L_11020706:;
  /* 11020706 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11020709 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1102070c push ecx */
  push32((uint32_t)(ECX));
  /* 1102070d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1102070f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11020712 push edx */
  push32((uint32_t)(EDX));
  /* 11020713 push 1 */
  push32((uint32_t)(0x1u));
  /* 11020715 call 0x110232f0 */
  push32(0x1102071au); f_110232f0();
  /* 1102071a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102071d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11020720 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11020722 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11020725 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11020728 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1102072b push edx */
  push32((uint32_t)(EDX));
  /* 1102072c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1102072e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11020731 push eax */
  push32((uint32_t)(EAX));
  /* 11020732 push 1 */
  push32((uint32_t)(0x1u));
  /* 11020734 call 0x110232f0 */
  push32(0x11020739u); f_110232f0();
  /* 11020739 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102073c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1102073f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11020741 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11020744 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11020747 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1102074a push edx */
  push32((uint32_t)(EDX));
  /* 1102074b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1102074d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11020750 push eax */
  push32((uint32_t)(EAX));
  /* 11020751 push 1 */
  push32((uint32_t)(0x1u));
  /* 11020753 call 0x110232f0 */
  push32(0x11020758u); f_110232f0();
  /* 11020758 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102075b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1102075e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11020760 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11020763 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11020766 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11020769 push edx */
  push32((uint32_t)(EDX));
  /* 1102076a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1102076c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1102076f push eax */
  push32((uint32_t)(EAX));
  /* 11020770 push 1 */
  push32((uint32_t)(0x1u));
  /* 11020772 call 0x110232f0 */
  push32(0x11020777u); f_110232f0();
  /* 11020777 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102077a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1102077d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1102077f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11020782 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11020785 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11020788 push edx */
  push32((uint32_t)(EDX));
  /* 11020789 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1102078b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1102078e push eax */
  push32((uint32_t)(EAX));
  /* 1102078f push 1 */
  push32((uint32_t)(0x1u));
  /* 11020791 call 0x110232f0 */
  push32(0x11020796u); f_110232f0();
  /* 11020796 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020799 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1102079c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1102079e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 110207a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110207a4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 110207a7 push eax */
  push32((uint32_t)(EAX));
  /* 110207a8 call 0x110208f0 */
  push32(0x110207adu); f_110208f0();
  /* 110207ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110207b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110207b3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110207b6 push ecx */
  push32((uint32_t)(ECX));
  /* 110207b7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 110207b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110207bc push edx */
  push32((uint32_t)(EDX));
  /* 110207bd push 1 */
  push32((uint32_t)(0x1u));
  /* 110207bf call 0x110232f0 */
  push32(0x110207c4u); f_110232f0();
  /* 110207c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110207c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110207ca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 110207cc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 110207cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110207d2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110207d5 push edx */
  push32((uint32_t)(EDX));
  /* 110207d6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 110207d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110207db push eax */
  push32((uint32_t)(EAX));
  /* 110207dc push 1 */
  push32((uint32_t)(0x1u));
  /* 110207de call 0x110232f0 */
  push32(0x110207e3u); f_110232f0();
  /* 110207e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110207e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110207e9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 110207eb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 110207ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110207f1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110207f4 push edx */
  push32((uint32_t)(EDX));
  /* 110207f5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 110207f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110207fa push eax */
  push32((uint32_t)(EAX));
  /* 110207fb push 0 */
  push32((uint32_t)(0x0u));
  /* 110207fd call 0x110232f0 */
  push32(0x11020802u); f_110232f0();
  /* 11020802 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020805 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11020808 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1102080a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1102080d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11020810 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11020813 push edx */
  push32((uint32_t)(EDX));
  /* 11020814 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11020816 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11020819 push eax */
  push32((uint32_t)(EAX));
  /* 1102081a push 0 */
  push32((uint32_t)(0x0u));
  /* 1102081c call 0x110232f0 */
  push32(0x11020821u); f_110232f0();
  /* 11020821 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020824 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11020827 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11020829 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1102082c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102082f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11020832 push edx */
  push32((uint32_t)(EDX));
  /* 11020833 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 11020835 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11020838 push eax */
  push32((uint32_t)(EAX));
  /* 11020839 push 0 */
  push32((uint32_t)(0x0u));
  /* 1102083b call 0x110232f0 */
  push32(0x11020840u); f_110232f0();
  /* 11020840 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020843 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11020846 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11020848 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1102084b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102084e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11020851 push edx */
  push32((uint32_t)(EDX));
  /* 11020852 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 11020854 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11020857 push eax */
  push32((uint32_t)(EAX));
  /* 11020858 push 0 */
  push32((uint32_t)(0x0u));
  /* 1102085a call 0x110232f0 */
  push32(0x1102085fu); f_110232f0();
  /* 1102085f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020862 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11020865 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11020867 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1102086a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102086d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11020870 push edx */
  push32((uint32_t)(EDX));
  /* 11020871 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 11020873 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11020876 push eax */
  push32((uint32_t)(EAX));
  /* 11020877 push 0 */
  push32((uint32_t)(0x0u));
  /* 11020879 call 0x110232f0 */
  push32(0x1102087eu); f_110232f0();
  /* 1102087e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020881 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11020884 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11020886 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11020889 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102088c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1102088f push edx */
  push32((uint32_t)(EDX));
  /* 11020890 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 11020892 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11020895 push eax */
  push32((uint32_t)(EAX));
  /* 11020896 push 0 */
  push32((uint32_t)(0x0u));
  /* 11020898 call 0x110232f0 */
  push32(0x1102089du); f_110232f0();
  /* 1102089d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110208a0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110208a3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 110208a5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 110208a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110208ab add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110208ae push edx */
  push32((uint32_t)(EDX));
  /* 110208af push 0x52 */
  push32((uint32_t)(0x52u));
  /* 110208b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110208b4 push eax */
  push32((uint32_t)(EAX));
  /* 110208b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 110208b7 call 0x110232f0 */
  push32(0x110208bcu); f_110232f0();
  /* 110208bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110208bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110208c2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 110208c4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 110208c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110208ca add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110208cd push edx */
  push32((uint32_t)(EDX));
  /* 110208ce push 0x53 */
  push32((uint32_t)(0x53u));
  /* 110208d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110208d3 push eax */
  push32((uint32_t)(EAX));
  /* 110208d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 110208d6 call 0x110232f0 */
  push32(0x110208dbu); f_110232f0();
  /* 110208db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110208de mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110208e1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 110208e3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 110208e6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_110208e9:;
  /* 110208e9 mov esp, ebp */
  ESP = (EBP);
  /* 110208eb pop ebp */
  EBP = (pop32());
  /* 110208ec ret  */
  ESPCHK(0x110206e0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x110208f0 (125 bytes, 49 insns) */
void f_110208f0(void) {
  FTRACE(0x110208f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110208f0 push ebp */
  push32((uint32_t)(EBP));
  /* 110208f1 mov ebp, esp */
  EBP = (ESP);
  /* 110208f3 push ecx */
  push32((uint32_t)(ECX));
L_110208f4:;
  /* 110208f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110208f7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 110208fa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110208fc je 0x11020969 */
  if (C.zf) goto L_11020969;
  /* 110208fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11020901 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11020904 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11020907 jl 0x1102092d */
  if ((C.sf!=C.of)) goto L_1102092d;
  /* 11020909 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102090c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1102090f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11020912 jg 0x1102092d */
  if ((!C.zf&&C.sf==C.of)) goto L_1102092d;
  /* 11020914 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11020917 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1102091a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1102091d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11020920 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11020922 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11020925 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11020928 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1102092b jmp 0x11020967 */
  goto L_11020967;
L_1102092d:;
  /* 1102092d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11020930 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11020933 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11020936 jne 0x1102095e */
  if (!C.zf) goto L_1102095e;
  /* 11020938 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102093b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1102093e:;
  /* 1102093e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11020941 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11020944 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11020947 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11020949 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1102094c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1102094f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11020952 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11020955 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11020958 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1102095a jne 0x1102093e */
  if (!C.zf) goto L_1102093e;
  /* 1102095c jmp 0x11020967 */
  goto L_11020967;
L_1102095e:;
  /* 1102095e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11020961 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11020964 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11020967:;
  /* 11020967 jmp 0x110208f4 */
  goto L_110208f4;
L_11020969:;
  /* 11020969 mov esp, ebp */
  ESP = (EBP);
  /* 1102096b pop ebp */
  EBP = (pop32());
  /* 1102096c ret  */
  ESPCHK(0x110208f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010970 @ 0x11020970 (147 bytes, 52 insns) */
void f_11020970(void) {
  FTRACE(0x11020970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11020970 push ebp */
  push32((uint32_t)(EBP));
  /* 11020971 mov ebp, esp */
  EBP = (ESP);
  /* 11020973 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11020977 jne 0x1102097e */
  if (!C.zf) goto L_1102097e;
  /* 11020979 jmp 0x11020a01 */
  goto L_11020a01;
L_1102097e:;
  /* 1102097e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11020981 cmp dword ptr [eax + 0xc], 0x11040868 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x11040868u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11020988 je 0x11020a01 */
  if (C.zf) goto L_11020a01;
  /* 1102098a push 2 */
  push32((uint32_t)(0x2u));
  /* 1102098c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102098f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11020992 push edx */
  push32((uint32_t)(EDX));
  /* 11020993 call 0x11015bc0 */
  push32(0x11020998u); f_11015bc0();
  /* 11020998 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102099b push 2 */
  push32((uint32_t)(0x2u));
  /* 1102099d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110209a0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 110209a3 push ecx */
  push32((uint32_t)(ECX));
  /* 110209a4 call 0x11015bc0 */
  push32(0x110209a9u); f_11015bc0();
  /* 110209a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110209ac push 2 */
  push32((uint32_t)(0x2u));
  /* 110209ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110209b1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 110209b4 push eax */
  push32((uint32_t)(EAX));
  /* 110209b5 call 0x11015bc0 */
  push32(0x110209bau); f_11015bc0();
  /* 110209ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110209bd push 2 */
  push32((uint32_t)(0x2u));
  /* 110209bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110209c2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 110209c5 push edx */
  push32((uint32_t)(EDX));
  /* 110209c6 call 0x11015bc0 */
  push32(0x110209cbu); f_11015bc0();
  /* 110209cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110209ce push 2 */
  push32((uint32_t)(0x2u));
  /* 110209d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110209d3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 110209d6 push ecx */
  push32((uint32_t)(ECX));
  /* 110209d7 call 0x11015bc0 */
  push32(0x110209dcu); f_11015bc0();
  /* 110209dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110209df push 2 */
  push32((uint32_t)(0x2u));
  /* 110209e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110209e4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 110209e7 push eax */
  push32((uint32_t)(EAX));
  /* 110209e8 call 0x11015bc0 */
  push32(0x110209edu); f_11015bc0();
  /* 110209ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110209f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 110209f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110209f5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 110209f8 push edx */
  push32((uint32_t)(EDX));
  /* 110209f9 call 0x11015bc0 */
  push32(0x110209feu); f_11015bc0();
  /* 110209fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11020a01:;
  /* 11020a01 pop ebp */
  EBP = (pop32());
  /* 11020a02 ret  */
  ESPCHK(0x11020970u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a10 @ 0x11020a10 (928 bytes, 284 insns) */
void f_11020a10(void) {
  FTRACE(0x11020a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11020a10 push ebp */
  push32((uint32_t)(EBP));
  /* 11020a11 mov ebp, esp */
  EBP = (ESP);
  /* 11020a13 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11020a16 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11020a1d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11020a24 cmp dword ptr [0x110407d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110407d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11020a2b je 0x11020d61 */
  if (C.zf) goto L_11020d61;
  /* 11020a31 cmp dword ptr [0x110407e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110407e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11020a38 jne 0x11020a60 */
  if (!C.zf) goto L_11020a60;
  /* 11020a3a push 0x110407e0 */
  push32((uint32_t)(0x110407e0u));
  /* 11020a3f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11020a44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11020a46 mov ax, word ptr [0x11040824] */
  AX = (r16((uint32_t)(0x11040824)));
  /* 11020a4c push eax */
  push32((uint32_t)(EAX));
  /* 11020a4d push 0 */
  push32((uint32_t)(0x0u));
  /* 11020a4f call 0x110232f0 */
  push32(0x11020a54u); f_110232f0();
  /* 11020a54 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020a57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11020a59 je 0x11020a60 */
  if (C.zf) goto L_11020a60;
  /* 11020a5b jmp 0x11020d22 */
  goto L_11020d22;
L_11020a60:;
  /* 11020a60 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11020a62 push 0x1103c2dc */
  push32((uint32_t)(0x1103c2dcu));
  /* 11020a67 push 2 */
  push32((uint32_t)(0x2u));
  /* 11020a69 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11020a6e call 0x11015130 */
  push32(0x11020a73u); f_11015130();
  /* 11020a73 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020a76 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11020a79 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11020a7b push 0x1103c2dc */
  push32((uint32_t)(0x1103c2dcu));
  /* 11020a80 push 2 */
  push32((uint32_t)(0x2u));
  /* 11020a82 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11020a87 call 0x11015130 */
  push32(0x11020a8cu); f_11015130();
  /* 11020a8c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020a8f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11020a92 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11020a94 push 0x1103c2dc */
  push32((uint32_t)(0x1103c2dcu));
  /* 11020a99 push 2 */
  push32((uint32_t)(0x2u));
  /* 11020a9b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11020aa0 call 0x11015130 */
  push32(0x11020aa5u); f_11015130();
  /* 11020aa5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020aa8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11020aab push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11020aad push 0x1103c2dc */
  push32((uint32_t)(0x1103c2dcu));
  /* 11020ab2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11020ab4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11020ab9 call 0x11015130 */
  push32(0x11020abeu); f_11015130();
  /* 11020abe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020ac1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11020ac4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11020ac8 je 0x11020adc */
  if (C.zf) goto L_11020adc;
  /* 11020aca cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11020ace je 0x11020adc */
  if (C.zf) goto L_11020adc;
  /* 11020ad0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11020ad4 je 0x11020adc */
  if (C.zf) goto L_11020adc;
  /* 11020ad6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11020ada jne 0x11020ae1 */
  if (!C.zf) goto L_11020ae1;
L_11020adc:;
  /* 11020adc jmp 0x11020d22 */
  goto L_11020d22;
L_11020ae1:;
  /* 11020ae1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11020ae4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11020ae7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11020aee jmp 0x11020af9 */
  goto L_11020af9;
L_11020af0:;
  /* 11020af0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11020af3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11020af6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11020af9:;
  /* 11020af9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11020b00 jge 0x11020b15 */
  if ((C.sf==C.of)) goto L_11020b15;
  /* 11020b02 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11020b05 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 11020b08 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11020b0a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11020b0d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11020b10 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11020b13 jmp 0x11020af0 */
  goto L_11020af0;
L_11020b15:;
  /* 11020b15 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11020b18 push eax */
  push32((uint32_t)(EAX));
  /* 11020b19 mov ecx, dword ptr [0x110407e0] */
  ECX = (r32((uint32_t)(0x110407e0)));
  /* 11020b1f push ecx */
  push32((uint32_t)(ECX));
  /* 11020b20 call dword ptr [0x1104331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104331c))), 0x11020b26u);
  /* 11020b26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11020b28 jne 0x11020b2f */
  if (!C.zf) goto L_11020b2f;
  /* 11020b2a jmp 0x11020d22 */
  goto L_11020d22;
L_11020b2f:;
  /* 11020b2f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11020b33 jbe 0x11020b3a */
  if ((C.cf||C.zf)) goto L_11020b3a;
  /* 11020b35 jmp 0x11020d22 */
  goto L_11020d22;
L_11020b3a:;
  /* 11020b3a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11020b3d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11020b43 mov dword ptr [0x1103eea4], edx */
  w32((uint32_t)(0x1103eea4), (EDX));
  /* 11020b49 cmp dword ptr [0x1103eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1103eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11020b50 jle 0x11020ba9 */
  if ((C.zf||C.sf!=C.of)) goto L_11020ba9;
  /* 11020b52 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 11020b55 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11020b58 jmp 0x11020b63 */
  goto L_11020b63;
L_11020b5a:;
  /* 11020b5a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11020b5d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11020b60 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11020b63:;
  /* 11020b63 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11020b66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11020b68 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11020b6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11020b6c je 0x11020ba9 */
  if (C.zf) goto L_11020ba9;
  /* 11020b6e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11020b71 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11020b73 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11020b76 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11020b78 je 0x11020ba9 */
  if (C.zf) goto L_11020ba9;
  /* 11020b7a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11020b7d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11020b7f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11020b81 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11020b84 jmp 0x11020b8f */
  goto L_11020b8f;
L_11020b86:;
  /* 11020b86 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11020b89 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11020b8c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11020b8f:;
  /* 11020b8f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11020b92 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11020b94 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11020b97 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11020b9a jg 0x11020ba7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11020ba7;
  /* 11020b9c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11020b9f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11020ba2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11020ba5 jmp 0x11020b86 */
  goto L_11020b86;
L_11020ba7:;
  /* 11020ba7 jmp 0x11020b5a */
  goto L_11020b5a;
L_11020ba9:;
  /* 11020ba9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11020bab push 0 */
  push32((uint32_t)(0x0u));
  /* 11020bad push 0 */
  push32((uint32_t)(0x0u));
  /* 11020baf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11020bb2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11020bb5 push eax */
  push32((uint32_t)(EAX));
  /* 11020bb6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11020bbb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11020bbe push ecx */
  push32((uint32_t)(ECX));
  /* 11020bbf push 1 */
  push32((uint32_t)(0x1u));
  /* 11020bc1 call 0x1101d360 */
  push32(0x11020bc6u); f_1101d360();
  /* 11020bc6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020bc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11020bcb jne 0x11020bd2 */
  if (!C.zf) goto L_11020bd2;
  /* 11020bcd jmp 0x11020d22 */
  goto L_11020d22;
L_11020bd2:;
  /* 11020bd2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11020bd5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 11020bda mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11020bdd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11020be0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11020be7 jmp 0x11020bf2 */
  goto L_11020bf2;
L_11020be9:;
  /* 11020be9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11020bec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11020bef mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11020bf2:;
  /* 11020bf2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11020bf9 jge 0x11020c10 */
  if ((C.sf==C.of)) goto L_11020c10;
  /* 11020bfb mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11020bfe mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 11020c02 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11020c05 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11020c08 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11020c0b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11020c0e jmp 0x11020be9 */
  goto L_11020be9;
L_11020c10:;
  /* 11020c10 push 0 */
  push32((uint32_t)(0x0u));
  /* 11020c12 push 0 */
  push32((uint32_t)(0x0u));
  /* 11020c14 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11020c17 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11020c1a push edx */
  push32((uint32_t)(EDX));
  /* 11020c1b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11020c20 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11020c23 push eax */
  push32((uint32_t)(EAX));
  /* 11020c24 push 1 */
  push32((uint32_t)(0x1u));
  /* 11020c26 call 0x11023590 */
  push32(0x11020c2bu); f_11023590();
  /* 11020c2b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020c2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11020c30 jne 0x11020c37 */
  if (!C.zf) goto L_11020c37;
  /* 11020c32 jmp 0x11020d22 */
  goto L_11020d22;
L_11020c37:;
  /* 11020c37 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11020c3a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 11020c3f cmp dword ptr [0x1103eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1103eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11020c46 jle 0x11020ca3 */
  if ((C.zf||C.sf!=C.of)) goto L_11020ca3;
  /* 11020c48 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 11020c4b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11020c4e jmp 0x11020c59 */
  goto L_11020c59;
L_11020c50:;
  /* 11020c50 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11020c53 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11020c56 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11020c59:;
  /* 11020c59 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11020c5c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11020c5e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11020c60 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11020c62 je 0x11020ca3 */
  if (C.zf) goto L_11020ca3;
  /* 11020c64 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11020c67 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11020c69 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11020c6c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11020c6e je 0x11020ca3 */
  if (C.zf) goto L_11020ca3;
  /* 11020c70 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11020c73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11020c75 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11020c77 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11020c7a jmp 0x11020c85 */
  goto L_11020c85;
L_11020c7c:;
  /* 11020c7c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11020c7f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11020c82 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11020c85:;
  /* 11020c85 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11020c88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11020c8a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11020c8d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11020c90 jg 0x11020ca1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11020ca1;
  /* 11020c92 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11020c95 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11020c98 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 11020c9f jmp 0x11020c7c */
  goto L_11020c7c;
L_11020ca1:;
  /* 11020ca1 jmp 0x11020c50 */
  goto L_11020c50;
L_11020ca3:;
  /* 11020ca3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11020ca6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11020ca9 mov dword ptr [0x1103ec98], eax */
  w32((uint32_t)(0x1103ec98), (EAX));
  /* 11020cae mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11020cb1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11020cb4 mov dword ptr [0x1103ec9c], ecx */
  w32((uint32_t)(0x1103ec9c), (ECX));
  /* 11020cba cmp dword ptr [0x11040810], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11040810))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11020cc1 je 0x11020cd4 */
  if (C.zf) goto L_11020cd4;
  /* 11020cc3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11020cc5 mov edx, dword ptr [0x11040810] */
  EDX = (r32((uint32_t)(0x11040810)));
  /* 11020ccb push edx */
  push32((uint32_t)(EDX));
  /* 11020ccc call 0x11015bc0 */
  push32(0x11020cd1u); f_11015bc0();
  /* 11020cd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11020cd4:;
  /* 11020cd4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11020cd7 mov dword ptr [0x11040810], eax */
  w32((uint32_t)(0x11040810), (EAX));
  /* 11020cdc cmp dword ptr [0x11040814], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11040814))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11020ce3 je 0x11020cf6 */
  if (C.zf) goto L_11020cf6;
  /* 11020ce5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11020ce7 mov ecx, dword ptr [0x11040814] */
  ECX = (r32((uint32_t)(0x11040814)));
  /* 11020ced push ecx */
  push32((uint32_t)(ECX));
  /* 11020cee call 0x11015bc0 */
  push32(0x11020cf3u); f_11015bc0();
  /* 11020cf3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11020cf6:;
  /* 11020cf6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11020cf9 mov dword ptr [0x11040814], edx */
  w32((uint32_t)(0x11040814), (EDX));
  /* 11020cff push 2 */
  push32((uint32_t)(0x2u));
  /* 11020d01 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11020d04 push eax */
  push32((uint32_t)(EAX));
  /* 11020d05 call 0x11015bc0 */
  push32(0x11020d0au); f_11015bc0();
  /* 11020d0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020d0d push 2 */
  push32((uint32_t)(0x2u));
  /* 11020d0f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11020d12 push ecx */
  push32((uint32_t)(ECX));
  /* 11020d13 call 0x11015bc0 */
  push32(0x11020d18u); f_11015bc0();
  /* 11020d18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020d1b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11020d1d jmp 0x11020dac */
  goto L_11020dac;
L_11020d22:;
  /* 11020d22 push 2 */
  push32((uint32_t)(0x2u));
  /* 11020d24 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11020d27 push edx */
  push32((uint32_t)(EDX));
  /* 11020d28 call 0x11015bc0 */
  push32(0x11020d2du); f_11015bc0();
  /* 11020d2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020d30 push 2 */
  push32((uint32_t)(0x2u));
  /* 11020d32 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11020d35 push eax */
  push32((uint32_t)(EAX));
  /* 11020d36 call 0x11015bc0 */
  push32(0x11020d3bu); f_11015bc0();
  /* 11020d3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020d3e push 2 */
  push32((uint32_t)(0x2u));
  /* 11020d40 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11020d43 push ecx */
  push32((uint32_t)(ECX));
  /* 11020d44 call 0x11015bc0 */
  push32(0x11020d49u); f_11015bc0();
  /* 11020d49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020d4c push 2 */
  push32((uint32_t)(0x2u));
  /* 11020d4e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11020d51 push edx */
  push32((uint32_t)(EDX));
  /* 11020d52 call 0x11015bc0 */
  push32(0x11020d57u); f_11015bc0();
  /* 11020d57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020d5a mov eax, 1 */
  EAX = (0x1u);
  /* 11020d5f jmp 0x11020dac */
  goto L_11020dac;
L_11020d61:;
  /* 11020d61 mov dword ptr [0x1103ec98], 0x1103eca2 */
  w32((uint32_t)(0x1103ec98), (0x1103eca2u));
  /* 11020d6b mov dword ptr [0x1103ec9c], 0x1103eca2 */
  w32((uint32_t)(0x1103ec9c), (0x1103eca2u));
  /* 11020d75 push 2 */
  push32((uint32_t)(0x2u));
  /* 11020d77 mov eax, dword ptr [0x11040810] */
  EAX = (r32((uint32_t)(0x11040810)));
  /* 11020d7c push eax */
  push32((uint32_t)(EAX));
  /* 11020d7d call 0x11015bc0 */
  push32(0x11020d82u); f_11015bc0();
  /* 11020d82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020d85 push 2 */
  push32((uint32_t)(0x2u));
  /* 11020d87 mov ecx, dword ptr [0x11040814] */
  ECX = (r32((uint32_t)(0x11040814)));
  /* 11020d8d push ecx */
  push32((uint32_t)(ECX));
  /* 11020d8e call 0x11015bc0 */
  push32(0x11020d93u); f_11015bc0();
  /* 11020d93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020d96 mov dword ptr [0x11040810], 0 */
  w32((uint32_t)(0x11040810), (0x0u));
  /* 11020da0 mov dword ptr [0x11040814], 0 */
  w32((uint32_t)(0x11040814), (0x0u));
  /* 11020daa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11020dac:;
  /* 11020dac mov esp, ebp */
  ESP = (EBP);
  /* 11020dae pop ebp */
  EBP = (pop32());
  /* 11020daf ret  */
  ESPCHK(0x11020a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10010db0 @ 0x11020db0 (7 bytes, 5 insns) */
void f_11020db0(void) {
  FTRACE(0x11020db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11020db0 push ebp */
  push32((uint32_t)(EBP));
  /* 11020db1 mov ebp, esp */
  EBP = (ESP);
  /* 11020db3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11020db5 pop ebp */
  EBP = (pop32());
  /* 11020db6 ret  */
  ESPCHK(0x11020db0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x11020dc0 (129 bytes, 56 insns) */
void f_11020dc0(void) {
  FTRACE(0x11020dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11020dc0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11020dc4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11020dc8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11020dce jne 0x11020e0c */
  if (!C.zf) goto L_11020e0c;
L_11020dd0:;
  /* 11020dd0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11020dd2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11020dd4 jne 0x11020e04 */
  if (!C.zf) goto L_11020e04;
  /* 11020dd6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11020dd8 je 0x11020e00 */
  if (C.zf) goto L_11020e00;
  /* 11020dda cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11020ddd jne 0x11020e04 */
  if (!C.zf) goto L_11020e04;
  /* 11020ddf or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11020de1 je 0x11020e00 */
  if (C.zf) goto L_11020e00;
  /* 11020de3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11020de6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11020de9 jne 0x11020e04 */
  if (!C.zf) goto L_11020e04;
  /* 11020deb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11020ded je 0x11020e00 */
  if (C.zf) goto L_11020e00;
  /* 11020def cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11020df2 jne 0x11020e04 */
  if (!C.zf) goto L_11020e04;
  /* 11020df4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11020df7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11020dfa or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11020dfc jne 0x11020dd0 */
  if (!C.zf) goto L_11020dd0;
  /* 11020dfe mov edi, edi */
  EDI = (EDI);
L_11020e00:;
  /* 11020e00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11020e02 ret  */
  ESPCHK(0x11020dc0u, _esp0);
  ESP += 4; return;
  /* 11020e03 nop  */
  /* nop */
L_11020e04:;
  /* 11020e04 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11020e06 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11020e08 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11020e09 ret  */
  ESPCHK(0x11020dc0u, _esp0);
  ESP += 4; return;
  /* 11020e0a mov edi, edi */
  EDI = (EDI);
L_11020e0c:;
  /* 11020e0c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 11020e12 je 0x11020e28 */
  if (C.zf) goto L_11020e28;
  /* 11020e14 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11020e16 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11020e17 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11020e19 jne 0x11020e04 */
  if (!C.zf) goto L_11020e04;
  /* 11020e1b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11020e1c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11020e1e je 0x11020e00 */
  if (C.zf) goto L_11020e00;
  /* 11020e20 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 11020e26 je 0x11020dd0 */
  if (C.zf) goto L_11020dd0;
L_11020e28:;
  /* 11020e28 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11020e2b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11020e2e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11020e30 jne 0x11020e04 */
  if (!C.zf) goto L_11020e04;
  /* 11020e32 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11020e34 je 0x11020e00 */
  if (C.zf) goto L_11020e00;
  /* 11020e36 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11020e39 jne 0x11020e04 */
  if (!C.zf) goto L_11020e04;
  /* 11020e3b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11020e3d je 0x11020e00 */
  if (C.zf) goto L_11020e00;
  /* 11020e3f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11020e42 jmp 0x11020dd0 */
  goto L_11020dd0;
}

/* FUN_10010e50 @ 0x11020e50 (62 bytes, 35 insns) */
void f_11020e50(void) {
  FTRACE(0x11020e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11020e50 push ebp */
  push32((uint32_t)(EBP));
  /* 11020e51 mov ebp, esp */
  EBP = (ESP);
  /* 11020e53 push esi */
  push32((uint32_t)(ESI));
  /* 11020e54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11020e56 push eax */
  push32((uint32_t)(EAX));
  /* 11020e57 push eax */
  push32((uint32_t)(EAX));
  /* 11020e58 push eax */
  push32((uint32_t)(EAX));
  /* 11020e59 push eax */
  push32((uint32_t)(EAX));
  /* 11020e5a push eax */
  push32((uint32_t)(EAX));
  /* 11020e5b push eax */
  push32((uint32_t)(EAX));
  /* 11020e5c push eax */
  push32((uint32_t)(EAX));
  /* 11020e5d push eax */
  push32((uint32_t)(EAX));
  /* 11020e5e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11020e61 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11020e64:;
  /* 11020e64 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11020e66 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11020e68 je 0x11020e71 */
  if (C.zf) goto L_11020e71;
  /* 11020e6a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11020e6b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11020e6b");
  /* 11020e6f jmp 0x11020e64 */
  goto L_11020e64;
L_11020e71:;
  /* 11020e71 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11020e74 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11020e77 nop  */
  /* nop */
L_11020e78:;
  /* 11020e78 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11020e79 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11020e7b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11020e7d je 0x11020e86 */
  if (C.zf) goto L_11020e86;
  /* 11020e7f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11020e80 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11020e80");
  /* 11020e84 jae 0x11020e78 */
  if (!C.cf) goto L_11020e78;
L_11020e86:;
  /* 11020e86 mov eax, ecx */
  EAX = (ECX);
  /* 11020e88 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020e8b pop esi */
  ESI = (pop32());
  /* 11020e8c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11020e8d ret  */
  ESPCHK(0x11020e50u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11020e90 (56 bytes, 31 insns) */
void f_11020e90(void) {
  FTRACE(0x11020e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11020e90 push ebp */
  push32((uint32_t)(EBP));
  /* 11020e91 mov ebp, esp */
  EBP = (ESP);
  /* 11020e93 push edi */
  push32((uint32_t)(EDI));
  /* 11020e94 push esi */
  push32((uint32_t)(ESI));
  /* 11020e95 push ebx */
  push32((uint32_t)(EBX));
  /* 11020e96 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11020e99 jecxz 0x11020ec1 */
  x86_unimpl("jecxz @ 0x11020e99");
  /* 11020e9b mov ebx, ecx */
  EBX = (ECX);
  /* 11020e9d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11020ea0 mov esi, edi */
  ESI = (EDI);
  /* 11020ea2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11020ea4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11020ea6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11020ea8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11020eaa mov edi, esi */
  EDI = (ESI);
  /* 11020eac mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11020eaf repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11020eb1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11020eb4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11020eb6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11020eb9 ja 0x11020ebf */
  if ((!C.cf&&!C.zf)) goto L_11020ebf;
  /* 11020ebb je 0x11020ec1 */
  if (C.zf) goto L_11020ec1;
  /* 11020ebd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11020ebe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_11020ebf:;
  /* 11020ebf not ecx */
  ECX = (~(ECX));
L_11020ec1:;
  /* 11020ec1 mov eax, ecx */
  EAX = (ECX);
  /* 11020ec3 pop ebx */
  EBX = (pop32());
  /* 11020ec4 pop esi */
  ESI = (pop32());
  /* 11020ec5 pop edi */
  EDI = (pop32());
  /* 11020ec6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11020ec7 ret  */
  ESPCHK(0x11020e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ed0 @ 0x11020ed0 (58 bytes, 32 insns) */
void f_11020ed0(void) {
  FTRACE(0x11020ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11020ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 11020ed1 mov ebp, esp */
  EBP = (ESP);
  /* 11020ed3 push esi */
  push32((uint32_t)(ESI));
  /* 11020ed4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11020ed6 push eax */
  push32((uint32_t)(EAX));
  /* 11020ed7 push eax */
  push32((uint32_t)(EAX));
  /* 11020ed8 push eax */
  push32((uint32_t)(EAX));
  /* 11020ed9 push eax */
  push32((uint32_t)(EAX));
  /* 11020eda push eax */
  push32((uint32_t)(EAX));
  /* 11020edb push eax */
  push32((uint32_t)(EAX));
  /* 11020edc push eax */
  push32((uint32_t)(EAX));
  /* 11020edd push eax */
  push32((uint32_t)(EAX));
  /* 11020ede mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11020ee1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11020ee4:;
  /* 11020ee4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11020ee6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11020ee8 je 0x11020ef1 */
  if (C.zf) goto L_11020ef1;
  /* 11020eea inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11020eeb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11020eeb");
  /* 11020eef jmp 0x11020ee4 */
  goto L_11020ee4;
L_11020ef1:;
  /* 11020ef1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_11020ef4:;
  /* 11020ef4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11020ef6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11020ef8 je 0x11020f04 */
  if (C.zf) goto L_11020f04;
  /* 11020efa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11020efb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11020efb");
  /* 11020eff jae 0x11020ef4 */
  if (!C.cf) goto L_11020ef4;
  /* 11020f01 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_11020f04:;
  /* 11020f04 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11020f07 pop esi */
  ESI = (pop32());
  /* 11020f08 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11020f09 ret  */
  ESPCHK(0x11020ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f10 @ 0x11020f10 (512 bytes, 147 insns) */
void f_11020f10(void) {
  FTRACE(0x11020f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11020f10 push ebp */
  push32((uint32_t)(EBP));
  /* 11020f11 mov ebp, esp */
  EBP = (ESP);
  /* 11020f13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11020f16 cmp dword ptr [0x1104085c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1104085c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11020f1d jne 0x11020f42 */
  if (!C.zf) goto L_11020f42;
  /* 11020f1f call 0x110219e0 */
  push32(0x11020f24u); f_110219e0();
  /* 11020f24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11020f26 je 0x11020f32 */
  if (C.zf) goto L_11020f32;
  /* 11020f28 mov eax, dword ptr [0x110432e0] */
  EAX = (r32((uint32_t)(0x110432e0)));
  /* 11020f2d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11020f30 jmp 0x11020f39 */
  goto L_11020f39;
L_11020f32:;
  /* 11020f32 mov dword ptr [ebp - 8], 0x11021a30 */
  w32((uint32_t)(EBP + -0x8), (0x11021a30u));
L_11020f39:;
  /* 11020f39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11020f3c mov dword ptr [0x1104085c], ecx */
  w32((uint32_t)(0x1104085c), (ECX));
L_11020f42:;
  /* 11020f42 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11020f46 jne 0x11020f52 */
  if (!C.zf) goto L_11020f52;
  /* 11020f48 call 0x11021830 */
  push32(0x11020f4du); f_11021830();
  /* 11020f4d jmp 0x1102101e */
  goto L_1102101e;
L_11020f52:;
  /* 11020f52 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11020f55 mov dword ptr [0x1104084c], edx */
  w32((uint32_t)(0x1104084c), (EDX));
  /* 11020f5b cmp dword ptr [0x1104084c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1104084c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11020f62 je 0x11020f84 */
  if (C.zf) goto L_11020f84;
  /* 11020f64 mov eax, dword ptr [0x1104084c] */
  EAX = (r32((uint32_t)(0x1104084c)));
  /* 11020f69 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11020f6c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11020f6e je 0x11020f84 */
  if (C.zf) goto L_11020f84;
  /* 11020f70 push 0x1104084c */
  push32((uint32_t)(0x1104084cu));
  /* 11020f75 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11020f77 push 0x1103fa90 */
  push32((uint32_t)(0x1103fa90u));
  /* 11020f7c call 0x11021110 */
  push32(0x11020f81u); f_11021110();
  /* 11020f81 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11020f84:;
  /* 11020f84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11020f87 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11020f8a mov dword ptr [0x11040850], edx */
  w32((uint32_t)(0x11040850), (EDX));
  /* 11020f90 cmp dword ptr [0x11040850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11040850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11020f97 je 0x11020fb9 */
  if (C.zf) goto L_11020fb9;
  /* 11020f99 mov eax, dword ptr [0x11040850] */
  EAX = (r32((uint32_t)(0x11040850)));
  /* 11020f9e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11020fa1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11020fa3 je 0x11020fb9 */
  if (C.zf) goto L_11020fb9;
  /* 11020fa5 push 0x11040850 */
  push32((uint32_t)(0x11040850u));
  /* 11020faa push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11020fac push 0x1103f9d8 */
  push32((uint32_t)(0x1103f9d8u));
  /* 11020fb1 call 0x11021110 */
  push32(0x11020fb6u); f_11021110();
  /* 11020fb6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11020fb9:;
  /* 11020fb9 mov dword ptr [0x11040854], 0 */
  w32((uint32_t)(0x11040854), (0x0u));
  /* 11020fc3 cmp dword ptr [0x1104084c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1104084c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11020fca je 0x11020ffd */
  if (C.zf) goto L_11020ffd;
  /* 11020fcc mov edx, dword ptr [0x1104084c] */
  EDX = (r32((uint32_t)(0x1104084c)));
  /* 11020fd2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11020fd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11020fd7 je 0x11020ffd */
  if (C.zf) goto L_11020ffd;
  /* 11020fd9 cmp dword ptr [0x11040850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11040850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11020fe0 je 0x11020ff6 */
  if (C.zf) goto L_11020ff6;
  /* 11020fe2 mov ecx, dword ptr [0x11040850] */
  ECX = (r32((uint32_t)(0x11040850)));
  /* 11020fe8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11020feb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11020fed je 0x11020ff6 */
  if (C.zf) goto L_11020ff6;
  /* 11020fef call 0x110211a0 */
  push32(0x11020ff4u); f_110211a0();
  /* 11020ff4 jmp 0x11020ffb */
  goto L_11020ffb;
L_11020ff6:;
  /* 11020ff6 call 0x11021590 */
  push32(0x11020ffbu); f_11021590();
L_11020ffb:;
  /* 11020ffb jmp 0x1102101e */
  goto L_1102101e;
L_11020ffd:;
  /* 11020ffd cmp dword ptr [0x11040850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11040850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021004 je 0x11021019 */
  if (C.zf) goto L_11021019;
  /* 11021006 mov eax, dword ptr [0x11040850] */
  EAX = (r32((uint32_t)(0x11040850)));
  /* 1102100b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1102100e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11021010 je 0x11021019 */
  if (C.zf) goto L_11021019;
  /* 11021012 call 0x11021730 */
  push32(0x11021017u); f_11021730();
  /* 11021017 jmp 0x1102101e */
  goto L_1102101e;
L_11021019:;
  /* 11021019 call 0x11021830 */
  push32(0x1102101eu); f_11021830();
L_1102101e:;
  /* 1102101e cmp dword ptr [0x11040854], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11040854))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021025 jne 0x1102102e */
  if (!C.zf) goto L_1102102e;
  /* 11021027 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11021029 jmp 0x1102110c */
  goto L_1102110c;
L_1102102e:;
  /* 1102102e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11021031 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11021037 push edx */
  push32((uint32_t)(EDX));
  /* 11021038 call 0x11021860 */
  push32(0x1102103du); f_11021860();
  /* 1102103d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11021040 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11021043 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021047 je 0x1102105c */
  if (C.zf) goto L_1102105c;
  /* 11021049 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1102104c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11021051 push eax */
  push32((uint32_t)(EAX));
  /* 11021052 call dword ptr [0x110432e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110432e4))), 0x11021058u);
  /* 11021058 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1102105a jne 0x11021063 */
  if (!C.zf) goto L_11021063;
L_1102105c:;
  /* 1102105c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1102105e jmp 0x1102110c */
  goto L_1102110c;
L_11021063:;
  /* 11021063 push 1 */
  push32((uint32_t)(0x1u));
  /* 11021065 mov ecx, dword ptr [0x1104083c] */
  ECX = (r32((uint32_t)(0x1104083c)));
  /* 1102106b push ecx */
  push32((uint32_t)(ECX));
  /* 1102106c call dword ptr [0x110432f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110432f4))), 0x11021072u);
  /* 11021072 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11021074 jne 0x1102107d */
  if (!C.zf) goto L_1102107d;
  /* 11021076 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11021078 jmp 0x1102110c */
  goto L_1102110c;
L_1102107d:;
  /* 1102107d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021081 je 0x110210a8 */
  if (C.zf) goto L_110210a8;
  /* 11021083 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11021086 mov ax, word ptr [0x1104083c] */
  AX = (r16((uint32_t)(0x1104083c)));
  /* 1102108c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1102108f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11021092 mov dx, word ptr [0x11040858] */
  DX = (r16((uint32_t)(0x11040858)));
  /* 11021099 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 1102109d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110210a0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 110210a4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_110210a8:;
  /* 110210a8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110210ac je 0x11021107 */
  if (C.zf) goto L_11021107;
  /* 110210ae push 0x40 */
  push32((uint32_t)(0x40u));
  /* 110210b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110210b3 push edx */
  push32((uint32_t)(EDX));
  /* 110210b4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 110210b9 mov eax, dword ptr [0x1104083c] */
  EAX = (r32((uint32_t)(0x1104083c)));
  /* 110210be push eax */
  push32((uint32_t)(EAX));
  /* 110210bf call dword ptr [0x1104085c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104085c))), 0x110210c5u);
  /* 110210c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110210c7 jne 0x110210cd */
  if (!C.zf) goto L_110210cd;
  /* 110210c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110210cb jmp 0x1102110c */
  goto L_1102110c;
L_110210cd:;
  /* 110210cd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 110210cf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110210d2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110210d5 push ecx */
  push32((uint32_t)(ECX));
  /* 110210d6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 110210db mov edx, dword ptr [0x11040858] */
  EDX = (r32((uint32_t)(0x11040858)));
  /* 110210e1 push edx */
  push32((uint32_t)(EDX));
  /* 110210e2 call dword ptr [0x1104085c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104085c))), 0x110210e8u);
  /* 110210e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110210ea jne 0x110210f0 */
  if (!C.zf) goto L_110210f0;
  /* 110210ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110210ee jmp 0x1102110c */
  goto L_1102110c;
L_110210f0:;
  /* 110210f0 push 0xa */
  push32((uint32_t)(0xau));
  /* 110210f2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110210f5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110210fa push eax */
  push32((uint32_t)(EAX));
  /* 110210fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110210fe push ecx */
  push32((uint32_t)(ECX));
  /* 110210ff call 0x11017c70 */
  push32(0x11021104u); f_11017c70();
  /* 11021104 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11021107:;
  /* 11021107 mov eax, 1 */
  EAX = (0x1u);
L_1102110c:;
  /* 1102110c mov esp, ebp */
  ESP = (EBP);
  /* 1102110e pop ebp */
  EBP = (pop32());
  /* 1102110f ret  */
  ESPCHK(0x11020f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10011110 @ 0x11021110 (130 bytes, 47 insns) */
void f_11021110(void) {
  FTRACE(0x11021110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11021110 push ebp */
  push32((uint32_t)(EBP));
  /* 11021111 mov ebp, esp */
  EBP = (ESP);
  /* 11021113 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11021116 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1102111d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11021124:;
  /* 11021124 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11021127 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102112a jg 0x1102118e */
  if ((!C.zf&&C.sf==C.of)) goto L_1102118e;
  /* 1102112c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021130 je 0x1102118e */
  if (C.zf) goto L_1102118e;
  /* 11021132 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11021135 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11021138 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11021139 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1102113b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1102113d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11021140 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11021143 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11021146 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 11021149 push eax */
  push32((uint32_t)(EAX));
  /* 1102114a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1102114d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1102114f push edx */
  push32((uint32_t)(EDX));
  /* 11021150 call 0x11023800 */
  push32(0x11021155u); f_11023800();
  /* 11021155 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11021158 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1102115b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102115f jne 0x11021172 */
  if (!C.zf) goto L_11021172;
  /* 11021161 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11021164 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11021167 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 1102116b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1102116e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11021170 jmp 0x1102118c */
  goto L_1102118c;
L_11021172:;
  /* 11021172 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021176 jge 0x11021183 */
  if ((C.sf==C.of)) goto L_11021183;
  /* 11021178 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1102117b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1102117e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11021181 jmp 0x1102118c */
  goto L_1102118c;
L_11021183:;
  /* 11021183 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11021186 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11021189 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1102118c:;
  /* 1102118c jmp 0x11021124 */
  goto L_11021124;
L_1102118e:;
  /* 1102118e mov esp, ebp */
  ESP = (EBP);
  /* 11021190 pop ebp */
  EBP = (pop32());
  /* 11021191 ret  */
  ESPCHK(0x11021110u, _esp0);
  ESP += 4; return;
}

/* FUN_100111a0 @ 0x110211a0 (186 bytes, 50 insns) */
void f_110211a0(void) {
  FTRACE(0x110211a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110211a0 push ebp */
  push32((uint32_t)(EBP));
  /* 110211a1 mov ebp, esp */
  EBP = (ESP);
  /* 110211a3 push ecx */
  push32((uint32_t)(ECX));
  /* 110211a4 mov eax, dword ptr [0x1104084c] */
  EAX = (r32((uint32_t)(0x1104084c)));
  /* 110211a9 push eax */
  push32((uint32_t)(EAX));
  /* 110211aa call 0x11017f60 */
  push32(0x110211afu); f_11017f60();
  /* 110211af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110211b2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110211b4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110211b7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 110211ba mov dword ptr [0x11040848], ecx */
  w32((uint32_t)(0x11040848), (ECX));
  /* 110211c0 mov edx, dword ptr [0x11040850] */
  EDX = (r32((uint32_t)(0x11040850)));
  /* 110211c6 push edx */
  push32((uint32_t)(EDX));
  /* 110211c7 call 0x11017f60 */
  push32(0x110211ccu); f_11017f60();
  /* 110211cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110211cf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110211d1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110211d4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 110211d7 mov dword ptr [0x11040840], ecx */
  w32((uint32_t)(0x11040840), (ECX));
  /* 110211dd mov dword ptr [0x1104083c], 0 */
  w32((uint32_t)(0x1104083c), (0x0u));
  /* 110211e7 cmp dword ptr [0x11040848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11040848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110211ee je 0x110211f9 */
  if (C.zf) goto L_110211f9;
  /* 110211f0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 110211f7 jmp 0x1102120b */
  goto L_1102120b;
L_110211f9:;
  /* 110211f9 mov edx, dword ptr [0x1104084c] */
  EDX = (r32((uint32_t)(0x1104084c)));
  /* 110211ff push edx */
  push32((uint32_t)(EDX));
  /* 11021200 call 0x11021c40 */
  push32(0x11021205u); f_11021c40();
  /* 11021205 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11021208 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1102120b:;
  /* 1102120b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1102120e mov dword ptr [0x11040844], eax */
  w32((uint32_t)(0x11040844), (EAX));
  /* 11021213 push 1 */
  push32((uint32_t)(0x1u));
  /* 11021215 push 0x11021260 */
  push32((uint32_t)(0x11021260u));
  /* 1102121a call dword ptr [0x110432e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110432e8))), 0x11021220u);
  /* 11021220 mov ecx, dword ptr [0x11040854] */
  ECX = (r32((uint32_t)(0x11040854)));
  /* 11021226 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1102122c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1102122e je 0x1102124c */
  if (C.zf) goto L_1102124c;
  /* 11021230 mov edx, dword ptr [0x11040854] */
  EDX = (r32((uint32_t)(0x11040854)));
  /* 11021236 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 1102123c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1102123e je 0x1102124c */
  if (C.zf) goto L_1102124c;
  /* 11021240 mov eax, dword ptr [0x11040854] */
  EAX = (r32((uint32_t)(0x11040854)));
  /* 11021245 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 11021248 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1102124a jne 0x11021256 */
  if (!C.zf) goto L_11021256;
L_1102124c:;
  /* 1102124c mov dword ptr [0x11040854], 0 */
  w32((uint32_t)(0x11040854), (0x0u));
L_11021256:;
  /* 11021256 mov esp, ebp */
  ESP = (EBP);
  /* 11021258 pop ebp */
  EBP = (pop32());
  /* 11021259 ret  */
  ESPCHK(0x110211a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011260 @ 0x11021260 (804 bytes, 220 insns) */
void f_11021260(void) {
  FTRACE(0x11021260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11021260 push ebp */
  push32((uint32_t)(EBP));
  /* 11021261 mov ebp, esp */
  EBP = (ESP);
  /* 11021263 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11021266 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11021269 push eax */
  push32((uint32_t)(EAX));
  /* 1102126a call 0x11021bc0 */
  push32(0x1102126fu); f_11021bc0();
  /* 1102126f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11021272 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11021275 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11021277 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1102127a push ecx */
  push32((uint32_t)(ECX));
  /* 1102127b mov edx, dword ptr [0x11040840] */
  EDX = (r32((uint32_t)(0x11040840)));
  /* 11021281 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11021283 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11021285 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1102128b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11021291 push edx */
  push32((uint32_t)(EDX));
  /* 11021292 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11021295 push eax */
  push32((uint32_t)(EAX));
  /* 11021296 call dword ptr [0x1104085c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104085c))), 0x1102129cu);
  /* 1102129c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1102129e jne 0x110212b4 */
  if (!C.zf) goto L_110212b4;
  /* 110212a0 mov dword ptr [0x11040854], 0 */
  w32((uint32_t)(0x11040854), (0x0u));
  /* 110212aa mov eax, 1 */
  EAX = (0x1u);
  /* 110212af jmp 0x1102157e */
  goto L_1102157e;
L_110212b4:;
  /* 110212b4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 110212b7 push ecx */
  push32((uint32_t)(ECX));
  /* 110212b8 mov edx, dword ptr [0x11040850] */
  EDX = (r32((uint32_t)(0x11040850)));
  /* 110212be push edx */
  push32((uint32_t)(EDX));
  /* 110212bf call 0x11023800 */
  push32(0x110212c4u); f_11023800();
  /* 110212c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110212c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110212c9 jne 0x110213ef */
  if (!C.zf) goto L_110213ef;
  /* 110212cf push 0x78 */
  push32((uint32_t)(0x78u));
  /* 110212d1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 110212d4 push eax */
  push32((uint32_t)(EAX));
  /* 110212d5 mov ecx, dword ptr [0x11040848] */
  ECX = (r32((uint32_t)(0x11040848)));
  /* 110212db neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 110212dd sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110212df and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 110212e5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110212eb push ecx */
  push32((uint32_t)(ECX));
  /* 110212ec mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 110212ef push edx */
  push32((uint32_t)(EDX));
  /* 110212f0 call dword ptr [0x1104085c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104085c))), 0x110212f6u);
  /* 110212f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110212f8 jne 0x1102130e */
  if (!C.zf) goto L_1102130e;
  /* 110212fa mov dword ptr [0x11040854], 0 */
  w32((uint32_t)(0x11040854), (0x0u));
  /* 11021304 mov eax, 1 */
  EAX = (0x1u);
  /* 11021309 jmp 0x1102157e */
  goto L_1102157e;
L_1102130e:;
  /* 1102130e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11021311 push eax */
  push32((uint32_t)(EAX));
  /* 11021312 mov ecx, dword ptr [0x1104084c] */
  ECX = (r32((uint32_t)(0x1104084c)));
  /* 11021318 push ecx */
  push32((uint32_t)(ECX));
  /* 11021319 call 0x11023800 */
  push32(0x1102131eu); f_11023800();
  /* 1102131e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11021321 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11021323 jne 0x11021350 */
  if (!C.zf) goto L_11021350;
  /* 11021325 mov edx, dword ptr [0x11040854] */
  EDX = (r32((uint32_t)(0x11040854)));
  /* 1102132b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 11021331 mov dword ptr [0x11040854], edx */
  w32((uint32_t)(0x11040854), (EDX));
  /* 11021337 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1102133a mov dword ptr [0x11040858], eax */
  w32((uint32_t)(0x11040858), (EAX));
  /* 1102133f mov ecx, dword ptr [0x11040858] */
  ECX = (r32((uint32_t)(0x11040858)));
  /* 11021345 mov dword ptr [0x1104083c], ecx */
  w32((uint32_t)(0x1104083c), (ECX));
  /* 1102134b jmp 0x110213ef */
  goto L_110213ef;
L_11021350:;
  /* 11021350 mov edx, dword ptr [0x11040854] */
  EDX = (r32((uint32_t)(0x11040854)));
  /* 11021356 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11021359 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1102135b jne 0x110213ef */
  if (!C.zf) goto L_110213ef;
  /* 11021361 cmp dword ptr [0x11040844], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11040844))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021368 je 0x110213bd */
  if (C.zf) goto L_110213bd;
  /* 1102136a mov eax, dword ptr [0x11040844] */
  EAX = (r32((uint32_t)(0x11040844)));
  /* 1102136f push eax */
  push32((uint32_t)(EAX));
  /* 11021370 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11021373 push ecx */
  push32((uint32_t)(ECX));
  /* 11021374 mov edx, dword ptr [0x1104084c] */
  EDX = (r32((uint32_t)(0x1104084c)));
  /* 1102137a push edx */
  push32((uint32_t)(EDX));
  /* 1102137b call 0x110238d0 */
  push32(0x11021380u); f_110238d0();
  /* 11021380 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11021383 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11021385 jne 0x110213bd */
  if (!C.zf) goto L_110213bd;
  /* 11021387 mov eax, dword ptr [0x11040854] */
  EAX = (r32((uint32_t)(0x11040854)));
  /* 1102138c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1102138e mov dword ptr [0x11040854], eax */
  w32((uint32_t)(0x11040854), (EAX));
  /* 11021393 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11021396 mov dword ptr [0x11040858], ecx */
  w32((uint32_t)(0x11040858), (ECX));
  /* 1102139c mov edx, dword ptr [0x1104084c] */
  EDX = (r32((uint32_t)(0x1104084c)));
  /* 110213a2 push edx */
  push32((uint32_t)(EDX));
  /* 110213a3 call 0x11017f60 */
  push32(0x110213a8u); f_11017f60();
  /* 110213a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110213ab cmp eax, dword ptr [0x11040844] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11040844))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110213b1 jne 0x110213bb */
  if (!C.zf) goto L_110213bb;
  /* 110213b3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 110213b6 mov dword ptr [0x1104083c], eax */
  w32((uint32_t)(0x1104083c), (EAX));
L_110213bb:;
  /* 110213bb jmp 0x110213ef */
  goto L_110213ef;
L_110213bd:;
  /* 110213bd mov ecx, dword ptr [0x11040854] */
  ECX = (r32((uint32_t)(0x11040854)));
  /* 110213c3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 110213c6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110213c8 jne 0x110213ef */
  if (!C.zf) goto L_110213ef;
  /* 110213ca mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 110213cd push edx */
  push32((uint32_t)(EDX));
  /* 110213ce call 0x11021900 */
  push32(0x110213d3u); f_11021900();
  /* 110213d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110213d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110213d8 je 0x110213ef */
  if (C.zf) goto L_110213ef;
  /* 110213da mov eax, dword ptr [0x11040854] */
  EAX = (r32((uint32_t)(0x11040854)));
  /* 110213df or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 110213e1 mov dword ptr [0x11040854], eax */
  w32((uint32_t)(0x11040854), (EAX));
  /* 110213e6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 110213e9 mov dword ptr [0x11040858], ecx */
  w32((uint32_t)(0x11040858), (ECX));
L_110213ef:;
  /* 110213ef mov edx, dword ptr [0x11040854] */
  EDX = (r32((uint32_t)(0x11040854)));
  /* 110213f5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 110213fb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021401 je 0x11021571 */
  if (C.zf) goto L_11021571;
  /* 11021407 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11021409 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1102140c push eax */
  push32((uint32_t)(EAX));
  /* 1102140d mov ecx, dword ptr [0x11040848] */
  ECX = (r32((uint32_t)(0x11040848)));
  /* 11021413 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11021415 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11021417 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1102141d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11021423 push ecx */
  push32((uint32_t)(ECX));
  /* 11021424 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11021427 push edx */
  push32((uint32_t)(EDX));
  /* 11021428 call dword ptr [0x1104085c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104085c))), 0x1102142eu);
  /* 1102142e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11021430 jne 0x11021446 */
  if (!C.zf) goto L_11021446;
  /* 11021432 mov dword ptr [0x11040854], 0 */
  w32((uint32_t)(0x11040854), (0x0u));
  /* 1102143c mov eax, 1 */
  EAX = (0x1u);
  /* 11021441 jmp 0x1102157e */
  goto L_1102157e;
L_11021446:;
  /* 11021446 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11021449 push eax */
  push32((uint32_t)(EAX));
  /* 1102144a mov ecx, dword ptr [0x1104084c] */
  ECX = (r32((uint32_t)(0x1104084c)));
  /* 11021450 push ecx */
  push32((uint32_t)(ECX));
  /* 11021451 call 0x11023800 */
  push32(0x11021456u); f_11023800();
  /* 11021456 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11021459 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1102145b jne 0x11021510 */
  if (!C.zf) goto L_11021510;
  /* 11021461 mov edx, dword ptr [0x11040854] */
  EDX = (r32((uint32_t)(0x11040854)));
  /* 11021467 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1102146a mov dword ptr [0x11040854], edx */
  w32((uint32_t)(0x11040854), (EDX));
  /* 11021470 cmp dword ptr [0x11040848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11040848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021477 je 0x1102149a */
  if (C.zf) goto L_1102149a;
  /* 11021479 mov eax, dword ptr [0x11040854] */
  EAX = (r32((uint32_t)(0x11040854)));
  /* 1102147e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11021481 mov dword ptr [0x11040854], eax */
  w32((uint32_t)(0x11040854), (EAX));
  /* 11021486 cmp dword ptr [0x1104083c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1104083c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102148d jne 0x11021498 */
  if (!C.zf) goto L_11021498;
  /* 1102148f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11021492 mov dword ptr [0x1104083c], ecx */
  w32((uint32_t)(0x1104083c), (ECX));
L_11021498:;
  /* 11021498 jmp 0x1102150e */
  goto L_1102150e;
L_1102149a:;
  /* 1102149a cmp dword ptr [0x11040844], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11040844))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110214a1 je 0x110214ef */
  if (C.zf) goto L_110214ef;
  /* 110214a3 mov edx, dword ptr [0x1104084c] */
  EDX = (r32((uint32_t)(0x1104084c)));
  /* 110214a9 push edx */
  push32((uint32_t)(EDX));
  /* 110214aa call 0x11017f60 */
  push32(0x110214afu); f_11017f60();
  /* 110214af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110214b2 cmp eax, dword ptr [0x11040844] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11040844))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110214b8 jne 0x110214ef */
  if (!C.zf) goto L_110214ef;
  /* 110214ba push 1 */
  push32((uint32_t)(0x1u));
  /* 110214bc mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 110214bf push eax */
  push32((uint32_t)(EAX));
  /* 110214c0 call 0x11021950 */
  push32(0x110214c5u); f_11021950();
  /* 110214c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110214c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110214ca je 0x110214ed */
  if (C.zf) goto L_110214ed;
  /* 110214cc mov ecx, dword ptr [0x11040854] */
  ECX = (r32((uint32_t)(0x11040854)));
  /* 110214d2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 110214d5 mov dword ptr [0x11040854], ecx */
  w32((uint32_t)(0x11040854), (ECX));
  /* 110214db cmp dword ptr [0x1104083c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1104083c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110214e2 jne 0x110214ed */
  if (!C.zf) goto L_110214ed;
  /* 110214e4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 110214e7 mov dword ptr [0x1104083c], edx */
  w32((uint32_t)(0x1104083c), (EDX));
L_110214ed:;
  /* 110214ed jmp 0x1102150e */
  goto L_1102150e;
L_110214ef:;
  /* 110214ef mov eax, dword ptr [0x11040854] */
  EAX = (r32((uint32_t)(0x11040854)));
  /* 110214f4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 110214f7 mov dword ptr [0x11040854], eax */
  w32((uint32_t)(0x11040854), (EAX));
  /* 110214fc cmp dword ptr [0x1104083c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1104083c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021503 jne 0x1102150e */
  if (!C.zf) goto L_1102150e;
  /* 11021505 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11021508 mov dword ptr [0x1104083c], ecx */
  w32((uint32_t)(0x1104083c), (ECX));
L_1102150e:;
  /* 1102150e jmp 0x11021571 */
  goto L_11021571;
L_11021510:;
  /* 11021510 cmp dword ptr [0x11040848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11040848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021517 jne 0x11021571 */
  if (!C.zf) goto L_11021571;
  /* 11021519 cmp dword ptr [0x11040844], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11040844))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021520 je 0x11021571 */
  if (C.zf) goto L_11021571;
  /* 11021522 mov edx, dword ptr [0x11040844] */
  EDX = (r32((uint32_t)(0x11040844)));
  /* 11021528 push edx */
  push32((uint32_t)(EDX));
  /* 11021529 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1102152c push eax */
  push32((uint32_t)(EAX));
  /* 1102152d mov ecx, dword ptr [0x1104084c] */
  ECX = (r32((uint32_t)(0x1104084c)));
  /* 11021533 push ecx */
  push32((uint32_t)(ECX));
  /* 11021534 call 0x110238d0 */
  push32(0x11021539u); f_110238d0();
  /* 11021539 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102153c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1102153e jne 0x11021571 */
  if (!C.zf) goto L_11021571;
  /* 11021540 push 0 */
  push32((uint32_t)(0x0u));
  /* 11021542 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11021545 push edx */
  push32((uint32_t)(EDX));
  /* 11021546 call 0x11021950 */
  push32(0x1102154bu); f_11021950();
  /* 1102154b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102154e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11021550 je 0x11021571 */
  if (C.zf) goto L_11021571;
  /* 11021552 mov eax, dword ptr [0x11040854] */
  EAX = (r32((uint32_t)(0x11040854)));
  /* 11021557 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1102155a mov dword ptr [0x11040854], eax */
  w32((uint32_t)(0x11040854), (EAX));
  /* 1102155f cmp dword ptr [0x1104083c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1104083c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021566 jne 0x11021571 */
  if (!C.zf) goto L_11021571;
  /* 11021568 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1102156b mov dword ptr [0x1104083c], ecx */
  w32((uint32_t)(0x1104083c), (ECX));
L_11021571:;
  /* 11021571 mov eax, dword ptr [0x11040854] */
  EAX = (r32((uint32_t)(0x11040854)));
  /* 11021576 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11021579 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1102157b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1102157d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1102157e:;
  /* 1102157e mov esp, ebp */
  ESP = (EBP);
  /* 11021580 pop ebp */
  EBP = (pop32());
  /* 11021581 ret 4 */
  ESPCHK(0x11021260u, _esp0);
  ESP += 8; return;
}

/* FUN_10011590 @ 0x11021590 (116 bytes, 33 insns) */
void f_11021590(void) {
  FTRACE(0x11021590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11021590 push ebp */
  push32((uint32_t)(EBP));
  /* 11021591 mov ebp, esp */
  EBP = (ESP);
  /* 11021593 push ecx */
  push32((uint32_t)(ECX));
  /* 11021594 mov eax, dword ptr [0x1104084c] */
  EAX = (r32((uint32_t)(0x1104084c)));
  /* 11021599 push eax */
  push32((uint32_t)(EAX));
  /* 1102159a call 0x11017f60 */
  push32(0x1102159fu); f_11017f60();
  /* 1102159f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110215a2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110215a4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110215a7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 110215aa mov dword ptr [0x11040848], ecx */
  w32((uint32_t)(0x11040848), (ECX));
  /* 110215b0 cmp dword ptr [0x11040848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11040848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110215b7 je 0x110215c2 */
  if (C.zf) goto L_110215c2;
  /* 110215b9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 110215c0 jmp 0x110215d4 */
  goto L_110215d4;
L_110215c2:;
  /* 110215c2 mov edx, dword ptr [0x1104084c] */
  EDX = (r32((uint32_t)(0x1104084c)));
  /* 110215c8 push edx */
  push32((uint32_t)(EDX));
  /* 110215c9 call 0x11021c40 */
  push32(0x110215ceu); f_11021c40();
  /* 110215ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110215d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_110215d4:;
  /* 110215d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110215d7 mov dword ptr [0x11040844], eax */
  w32((uint32_t)(0x11040844), (EAX));
  /* 110215dc push 1 */
  push32((uint32_t)(0x1u));
  /* 110215de push 0x11021610 */
  push32((uint32_t)(0x11021610u));
  /* 110215e3 call dword ptr [0x110432e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110432e8))), 0x110215e9u);
  /* 110215e9 mov ecx, dword ptr [0x11040854] */
  ECX = (r32((uint32_t)(0x11040854)));
  /* 110215ef and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 110215f2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110215f4 jne 0x11021600 */
  if (!C.zf) goto L_11021600;
  /* 110215f6 mov dword ptr [0x11040854], 0 */
  w32((uint32_t)(0x11040854), (0x0u));
L_11021600:;
  /* 11021600 mov esp, ebp */
  ESP = (EBP);
  /* 11021602 pop ebp */
  EBP = (pop32());
  /* 11021603 ret  */
  ESPCHK(0x11021590u, _esp0);
  ESP += 4; return;
}

/* FUN_10011610 @ 0x11021610 (287 bytes, 86 insns) */
void f_11021610(void) {
  FTRACE(0x11021610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11021610 push ebp */
  push32((uint32_t)(EBP));
  /* 11021611 mov ebp, esp */
  EBP = (ESP);
  /* 11021613 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11021616 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11021619 push eax */
  push32((uint32_t)(EAX));
  /* 1102161a call 0x11021bc0 */
  push32(0x1102161fu); f_11021bc0();
  /* 1102161f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11021622 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11021625 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11021627 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1102162a push ecx */
  push32((uint32_t)(ECX));
  /* 1102162b mov edx, dword ptr [0x11040848] */
  EDX = (r32((uint32_t)(0x11040848)));
  /* 11021631 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11021633 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11021635 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 1102163b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11021641 push edx */
  push32((uint32_t)(EDX));
  /* 11021642 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11021645 push eax */
  push32((uint32_t)(EAX));
  /* 11021646 call dword ptr [0x1104085c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104085c))), 0x1102164cu);
  /* 1102164c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1102164e jne 0x11021664 */
  if (!C.zf) goto L_11021664;
  /* 11021650 mov dword ptr [0x11040854], 0 */
  w32((uint32_t)(0x11040854), (0x0u));
  /* 1102165a mov eax, 1 */
  EAX = (0x1u);
  /* 1102165f jmp 0x11021729 */
  goto L_11021729;
L_11021664:;
  /* 11021664 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11021667 push ecx */
  push32((uint32_t)(ECX));
  /* 11021668 mov edx, dword ptr [0x1104084c] */
  EDX = (r32((uint32_t)(0x1104084c)));
  /* 1102166e push edx */
  push32((uint32_t)(EDX));
  /* 1102166f call 0x11023800 */
  push32(0x11021674u); f_11023800();
  /* 11021674 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11021677 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11021679 jne 0x110216b9 */
  if (!C.zf) goto L_110216b9;
  /* 1102167b cmp dword ptr [0x11040848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11040848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021682 jne 0x11021696 */
  if (!C.zf) goto L_11021696;
  /* 11021684 push 1 */
  push32((uint32_t)(0x1u));
  /* 11021686 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11021689 push eax */
  push32((uint32_t)(EAX));
  /* 1102168a call 0x11021950 */
  push32(0x1102168fu); f_11021950();
  /* 1102168f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11021692 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11021694 je 0x110216b7 */
  if (C.zf) goto L_110216b7;
L_11021696:;
  /* 11021696 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11021699 mov dword ptr [0x11040858], ecx */
  w32((uint32_t)(0x11040858), (ECX));
  /* 1102169f mov edx, dword ptr [0x11040858] */
  EDX = (r32((uint32_t)(0x11040858)));
  /* 110216a5 mov dword ptr [0x1104083c], edx */
  w32((uint32_t)(0x1104083c), (EDX));
  /* 110216ab mov eax, dword ptr [0x11040854] */
  EAX = (r32((uint32_t)(0x11040854)));
  /* 110216b0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 110216b2 mov dword ptr [0x11040854], eax */
  w32((uint32_t)(0x11040854), (EAX));
L_110216b7:;
  /* 110216b7 jmp 0x1102171c */
  goto L_1102171c;
L_110216b9:;
  /* 110216b9 cmp dword ptr [0x11040848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11040848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110216c0 jne 0x1102171c */
  if (!C.zf) goto L_1102171c;
  /* 110216c2 cmp dword ptr [0x11040844], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11040844))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110216c9 je 0x1102171c */
  if (C.zf) goto L_1102171c;
  /* 110216cb mov ecx, dword ptr [0x11040844] */
  ECX = (r32((uint32_t)(0x11040844)));
  /* 110216d1 push ecx */
  push32((uint32_t)(ECX));
  /* 110216d2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 110216d5 push edx */
  push32((uint32_t)(EDX));
  /* 110216d6 mov eax, dword ptr [0x1104084c] */
  EAX = (r32((uint32_t)(0x1104084c)));
  /* 110216db push eax */
  push32((uint32_t)(EAX));
  /* 110216dc call 0x110238d0 */
  push32(0x110216e1u); f_110238d0();
  /* 110216e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110216e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110216e6 jne 0x1102171c */
  if (!C.zf) goto L_1102171c;
  /* 110216e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 110216ea mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 110216ed push ecx */
  push32((uint32_t)(ECX));
  /* 110216ee call 0x11021950 */
  push32(0x110216f3u); f_11021950();
  /* 110216f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110216f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110216f8 je 0x1102171c */
  if (C.zf) goto L_1102171c;
  /* 110216fa mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 110216fd mov dword ptr [0x11040858], edx */
  w32((uint32_t)(0x11040858), (EDX));
  /* 11021703 mov eax, dword ptr [0x11040858] */
  EAX = (r32((uint32_t)(0x11040858)));
  /* 11021708 mov dword ptr [0x1104083c], eax */
  w32((uint32_t)(0x1104083c), (EAX));
  /* 1102170d mov ecx, dword ptr [0x11040854] */
  ECX = (r32((uint32_t)(0x11040854)));
  /* 11021713 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11021716 mov dword ptr [0x11040854], ecx */
  w32((uint32_t)(0x11040854), (ECX));
L_1102171c:;
  /* 1102171c mov eax, dword ptr [0x11040854] */
  EAX = (r32((uint32_t)(0x11040854)));
  /* 11021721 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11021724 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11021726 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11021728 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11021729:;
  /* 11021729 mov esp, ebp */
  ESP = (EBP);
  /* 1102172b pop ebp */
  EBP = (pop32());
  /* 1102172c ret 4 */
  ESPCHK(0x11021610u, _esp0);
  ESP += 8; return;
}

/* FUN_10011730 @ 0x11021730 (69 bytes, 20 insns) */
void f_11021730(void) {
  FTRACE(0x11021730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11021730 push ebp */
  push32((uint32_t)(EBP));
  /* 11021731 mov ebp, esp */
  EBP = (ESP);
  /* 11021733 mov eax, dword ptr [0x11040850] */
  EAX = (r32((uint32_t)(0x11040850)));
  /* 11021738 push eax */
  push32((uint32_t)(EAX));
  /* 11021739 call 0x11017f60 */
  push32(0x1102173eu); f_11017f60();
  /* 1102173e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11021741 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11021743 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021746 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11021749 mov dword ptr [0x11040840], ecx */
  w32((uint32_t)(0x11040840), (ECX));
  /* 1102174f push 1 */
  push32((uint32_t)(0x1u));
  /* 11021751 push 0x11021780 */
  push32((uint32_t)(0x11021780u));
  /* 11021756 call dword ptr [0x110432e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110432e8))), 0x1102175cu);
  /* 1102175c mov edx, dword ptr [0x11040854] */
  EDX = (r32((uint32_t)(0x11040854)));
  /* 11021762 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11021765 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11021767 jne 0x11021773 */
  if (!C.zf) goto L_11021773;
  /* 11021769 mov dword ptr [0x11040854], 0 */
  w32((uint32_t)(0x11040854), (0x0u));
L_11021773:;
  /* 11021773 pop ebp */
  EBP = (pop32());
  /* 11021774 ret  */
  ESPCHK(0x11021730u, _esp0);
  ESP += 4; return;
}

/* FUN_10011780 @ 0x11021780 (172 bytes, 54 insns) */
void f_11021780(void) {
  FTRACE(0x11021780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11021780 push ebp */
  push32((uint32_t)(EBP));
  /* 11021781 mov ebp, esp */
  EBP = (ESP);
  /* 11021783 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11021786 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11021789 push eax */
  push32((uint32_t)(EAX));
  /* 1102178a call 0x11021bc0 */
  push32(0x1102178fu); f_11021bc0();
  /* 1102178f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11021792 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11021795 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11021797 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1102179a push ecx */
  push32((uint32_t)(ECX));
  /* 1102179b mov edx, dword ptr [0x11040840] */
  EDX = (r32((uint32_t)(0x11040840)));
  /* 110217a1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 110217a3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110217a5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 110217ab add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110217b1 push edx */
  push32((uint32_t)(EDX));
  /* 110217b2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 110217b5 push eax */
  push32((uint32_t)(EAX));
  /* 110217b6 call dword ptr [0x1104085c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104085c))), 0x110217bcu);
  /* 110217bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110217be jne 0x110217d1 */
  if (!C.zf) goto L_110217d1;
  /* 110217c0 mov dword ptr [0x11040854], 0 */
  w32((uint32_t)(0x11040854), (0x0u));
  /* 110217ca mov eax, 1 */
  EAX = (0x1u);
  /* 110217cf jmp 0x11021826 */
  goto L_11021826;
L_110217d1:;
  /* 110217d1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 110217d4 push ecx */
  push32((uint32_t)(ECX));
  /* 110217d5 mov edx, dword ptr [0x11040850] */
  EDX = (r32((uint32_t)(0x11040850)));
  /* 110217db push edx */
  push32((uint32_t)(EDX));
  /* 110217dc call 0x11023800 */
  push32(0x110217e1u); f_11023800();
  /* 110217e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110217e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110217e6 jne 0x11021819 */
  if (!C.zf) goto L_11021819;
  /* 110217e8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 110217eb push eax */
  push32((uint32_t)(EAX));
  /* 110217ec call 0x11021900 */
  push32(0x110217f1u); f_11021900();
  /* 110217f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110217f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110217f6 je 0x11021819 */
  if (C.zf) goto L_11021819;
  /* 110217f8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 110217fb mov dword ptr [0x11040858], ecx */
  w32((uint32_t)(0x11040858), (ECX));
  /* 11021801 mov edx, dword ptr [0x11040858] */
  EDX = (r32((uint32_t)(0x11040858)));
  /* 11021807 mov dword ptr [0x1104083c], edx */
  w32((uint32_t)(0x1104083c), (EDX));
  /* 1102180d mov eax, dword ptr [0x11040854] */
  EAX = (r32((uint32_t)(0x11040854)));
  /* 11021812 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11021814 mov dword ptr [0x11040854], eax */
  w32((uint32_t)(0x11040854), (EAX));
L_11021819:;
  /* 11021819 mov eax, dword ptr [0x11040854] */
  EAX = (r32((uint32_t)(0x11040854)));
  /* 1102181e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11021821 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11021823 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11021825 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11021826:;
  /* 11021826 mov esp, ebp */
  ESP = (EBP);
  /* 11021828 pop ebp */
  EBP = (pop32());
  /* 11021829 ret 4 */
  ESPCHK(0x11021780u, _esp0);
  ESP += 8; return;
}

/* FUN_10011830 @ 0x11021830 (43 bytes, 11 insns) */
void f_11021830(void) {
  FTRACE(0x11021830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11021830 push ebp */
  push32((uint32_t)(EBP));
  /* 11021831 mov ebp, esp */
  EBP = (ESP);
  /* 11021833 mov eax, dword ptr [0x11040854] */
  EAX = (r32((uint32_t)(0x11040854)));
  /* 11021838 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 1102183d mov dword ptr [0x11040854], eax */
  w32((uint32_t)(0x11040854), (EAX));
  /* 11021842 call dword ptr [0x110432d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110432d8))), 0x11021848u);
  /* 11021848 mov dword ptr [0x11040858], eax */
  w32((uint32_t)(0x11040858), (EAX));
  /* 1102184d mov ecx, dword ptr [0x11040858] */
  ECX = (r32((uint32_t)(0x11040858)));
  /* 11021853 mov dword ptr [0x1104083c], ecx */
  w32((uint32_t)(0x1104083c), (ECX));
  /* 11021859 pop ebp */
  EBP = (pop32());
  /* 1102185a ret  */
  ESPCHK(0x11021830u, _esp0);
  ESP += 4; return;
}

/* FUN_10011860 @ 0x11021860 (155 bytes, 57 insns) */
void f_11021860(void) {
  FTRACE(0x11021860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11021860 push ebp */
  push32((uint32_t)(EBP));
  /* 11021861 mov ebp, esp */
  EBP = (ESP);
  /* 11021863 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11021866 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102186a je 0x1102188b */
  if (C.zf) goto L_1102188b;
  /* 1102186c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102186f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11021872 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11021874 je 0x1102188b */
  if (C.zf) goto L_1102188b;
  /* 11021876 push 0x1103c96c */
  push32((uint32_t)(0x1103c96cu));
  /* 1102187b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102187e push edx */
  push32((uint32_t)(EDX));
  /* 1102187f call 0x11020dc0 */
  push32(0x11021884u); f_11020dc0();
  /* 11021884 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11021887 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11021889 jne 0x110218b3 */
  if (!C.zf) goto L_110218b3;
L_1102188b:;
  /* 1102188b push 8 */
  push32((uint32_t)(0x8u));
  /* 1102188d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11021890 push eax */
  push32((uint32_t)(EAX));
  /* 11021891 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11021896 mov ecx, dword ptr [0x11040858] */
  ECX = (r32((uint32_t)(0x11040858)));
  /* 1102189c push ecx */
  push32((uint32_t)(ECX));
  /* 1102189d call dword ptr [0x1104085c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104085c))), 0x110218a3u);
  /* 110218a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110218a5 jne 0x110218ab */
  if (!C.zf) goto L_110218ab;
  /* 110218a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110218a9 jmp 0x110218f7 */
  goto L_110218f7;
L_110218ab:;
  /* 110218ab lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 110218ae mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 110218b1 jmp 0x110218eb */
  goto L_110218eb;
L_110218b3:;
  /* 110218b3 push 0x1103c968 */
  push32((uint32_t)(0x1103c968u));
  /* 110218b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110218bb push eax */
  push32((uint32_t)(EAX));
  /* 110218bc call 0x11020dc0 */
  push32(0x110218c1u); f_11020dc0();
  /* 110218c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110218c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110218c6 jne 0x110218eb */
  if (!C.zf) goto L_110218eb;
  /* 110218c8 push 8 */
  push32((uint32_t)(0x8u));
  /* 110218ca lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 110218cd push ecx */
  push32((uint32_t)(ECX));
  /* 110218ce push 0xb */
  push32((uint32_t)(0xbu));
  /* 110218d0 mov edx, dword ptr [0x11040858] */
  EDX = (r32((uint32_t)(0x11040858)));
  /* 110218d6 push edx */
  push32((uint32_t)(EDX));
  /* 110218d7 call dword ptr [0x1104085c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104085c))), 0x110218ddu);
  /* 110218dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110218df jne 0x110218e5 */
  if (!C.zf) goto L_110218e5;
  /* 110218e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110218e3 jmp 0x110218f7 */
  goto L_110218f7;
L_110218e5:;
  /* 110218e5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 110218e8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_110218eb:;
  /* 110218eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110218ee push ecx */
  push32((uint32_t)(ECX));
  /* 110218ef call 0x110239e0 */
  push32(0x110218f4u); f_110239e0();
  /* 110218f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110218f7:;
  /* 110218f7 mov esp, ebp */
  ESP = (EBP);
  /* 110218f9 pop ebp */
  EBP = (pop32());
  /* 110218fa ret  */
  ESPCHK(0x11021860u, _esp0);
  ESP += 4; return;
}

/* FUN_10011900 @ 0x11021900 (79 bytes, 26 insns) */
void f_11021900(void) {
  FTRACE(0x11021900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11021900 push ebp */
  push32((uint32_t)(EBP));
  /* 11021901 mov ebp, esp */
  EBP = (ESP);
  /* 11021903 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11021906 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 1102190a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 1102190e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11021915 jmp 0x11021920 */
  goto L_11021920;
L_11021917:;
  /* 11021917 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1102191a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1102191d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11021920:;
  /* 11021920 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021924 jae 0x11021946 */
  if (!C.cf) goto L_11021946;
  /* 11021926 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11021929 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1102192f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11021932 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11021934 mov cx, word ptr [eax*2 + 0x1103f9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x1103f9c4)));
  /* 1102193c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102193e jne 0x11021944 */
  if (!C.zf) goto L_11021944;
  /* 11021940 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11021942 jmp 0x1102194b */
  goto L_1102194b;
L_11021944:;
  /* 11021944 jmp 0x11021917 */
  goto L_11021917;
L_11021946:;
  /* 11021946 mov eax, 1 */
  EAX = (0x1u);
L_1102194b:;
  /* 1102194b mov esp, ebp */
  ESP = (EBP);
  /* 1102194d pop ebp */
  EBP = (pop32());
  /* 1102194e ret  */
  ESPCHK(0x11021900u, _esp0);
  ESP += 4; return;
}

/* FUN_10011950 @ 0x11021950 (135 bytes, 48 insns) */
void f_11021950(void) {
  FTRACE(0x11021950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11021950 push ebp */
  push32((uint32_t)(EBP));
  /* 11021951 mov ebp, esp */
  EBP = (ESP);
  /* 11021953 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11021956 push esi */
  push32((uint32_t)(ESI));
  /* 11021957 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1102195a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1102195f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 11021964 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11021969 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 1102196c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11021971 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11021974 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11021976 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 11021979 push ecx */
  push32((uint32_t)(ECX));
  /* 1102197a push 1 */
  push32((uint32_t)(0x1u));
  /* 1102197c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1102197f push edx */
  push32((uint32_t)(EDX));
  /* 11021980 call dword ptr [0x1104085c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104085c))), 0x11021986u);
  /* 11021986 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11021988 jne 0x1102198e */
  if (!C.zf) goto L_1102198e;
  /* 1102198a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1102198c jmp 0x110219d2 */
  goto L_110219d2;
L_1102198e:;
  /* 1102198e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 11021991 push eax */
  push32((uint32_t)(EAX));
  /* 11021992 call 0x11021bc0 */
  push32(0x11021997u); f_11021bc0();
  /* 11021997 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102199a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102199d je 0x110219cd */
  if (C.zf) goto L_110219cd;
  /* 1102199f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110219a3 je 0x110219cd */
  if (C.zf) goto L_110219cd;
  /* 110219a5 mov ecx, dword ptr [0x1104084c] */
  ECX = (r32((uint32_t)(0x1104084c)));
  /* 110219ab push ecx */
  push32((uint32_t)(ECX));
  /* 110219ac call 0x11021c40 */
  push32(0x110219b1u); f_11021c40();
  /* 110219b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110219b4 mov esi, eax */
  ESI = (EAX);
  /* 110219b6 mov edx, dword ptr [0x1104084c] */
  EDX = (r32((uint32_t)(0x1104084c)));
  /* 110219bc push edx */
  push32((uint32_t)(EDX));
  /* 110219bd call 0x11017f60 */
  push32(0x110219c2u); f_11017f60();
  /* 110219c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110219c5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110219c7 jne 0x110219cd */
  if (!C.zf) goto L_110219cd;
  /* 110219c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110219cb jmp 0x110219d2 */
  goto L_110219d2;
L_110219cd:;
  /* 110219cd mov eax, 1 */
  EAX = (0x1u);
L_110219d2:;
  /* 110219d2 pop esi */
  ESI = (pop32());
  /* 110219d3 mov esp, ebp */
  ESP = (EBP);
  /* 110219d5 pop ebp */
  EBP = (pop32());
  /* 110219d6 ret  */
  ESPCHK(0x11021950u, _esp0);
  ESP += 4; return;
}

/* FUN_100119e0 @ 0x110219e0 (77 bytes, 18 insns) */
void f_110219e0(void) {
  FTRACE(0x110219e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110219e0 push ebp */
  push32((uint32_t)(EBP));
  /* 110219e1 mov ebp, esp */
  EBP = (ESP);
  /* 110219e3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110219e9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 110219f3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 110219f9 push eax */
  push32((uint32_t)(EAX));
  /* 110219fa call dword ptr [0x110432d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110432d4))), 0x11021a00u);
  /* 11021a00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11021a02 je 0x11021a19 */
  if (C.zf) goto L_11021a19;
  /* 11021a04 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021a0b jne 0x11021a19 */
  if (!C.zf) goto L_11021a19;
  /* 11021a0d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 11021a17 jmp 0x11021a23 */
  goto L_11021a23;
L_11021a19:;
  /* 11021a19 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_11021a23:;
  /* 11021a23 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11021a29 mov esp, ebp */
  ESP = (EBP);
  /* 11021a2b pop ebp */
  EBP = (pop32());
  /* 11021a2c ret  */
  ESPCHK(0x110219e0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x11021a30 (388 bytes, 118 insns) */
void f_11021a30(void) {
  FTRACE(0x11021a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11021a30 push ebp */
  push32((uint32_t)(EBP));
  /* 11021a31 mov ebp, esp */
  EBP = (ESP);
  /* 11021a33 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11021a36 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11021a3d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 11021a44 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11021a4b:;
  /* 11021a4b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11021a4e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021a51 jg 0x11021b98 */
  if ((!C.zf&&C.sf==C.of)) goto L_11021b98;
  /* 11021a57 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11021a5a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11021a5d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11021a5e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11021a60 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11021a62 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11021a65 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11021a68 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11021a6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11021a6e cmp edx, dword ptr [ecx + 0x1103f520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x1103f520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021a74 jne 0x11021b6e */
  if (!C.zf) goto L_11021b6e;
  /* 11021a7a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11021a7d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11021a80 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021a84 ja 0x11021aa7 */
  if ((!C.cf&&!C.zf)) goto L_11021aa7;
  /* 11021a86 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021a8a je 0x11021b19 */
  if (C.zf) goto L_11021b19;
  /* 11021a90 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021a94 je 0x11021ac4 */
  if (C.zf) goto L_11021ac4;
  /* 11021a96 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021a9a je 0x11021ae6 */
  if (C.zf) goto L_11021ae6;
  /* 11021a9c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021aa0 je 0x11021b08 */
  if (C.zf) goto L_11021b08;
  /* 11021aa2 jmp 0x11021b38 */
  goto L_11021b38;
L_11021aa7:;
  /* 11021aa7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021aae je 0x11021ad5 */
  if (C.zf) goto L_11021ad5;
  /* 11021ab0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021ab7 je 0x11021af7 */
  if (C.zf) goto L_11021af7;
  /* 11021ab9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021ac0 je 0x11021b2a */
  if (C.zf) goto L_11021b2a;
  /* 11021ac2 jmp 0x11021b38 */
  goto L_11021b38;
L_11021ac4:;
  /* 11021ac4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11021ac7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11021aca add ecx, 0x1103f524 */
  { uint32_t _a=(ECX),_b=(0x1103f524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11021ad0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11021ad3 jmp 0x11021b38 */
  goto L_11021b38;
L_11021ad5:;
  /* 11021ad5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11021ad8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11021adb mov eax, dword ptr [edx + 0x1103f52c] */
  EAX = (r32((uint32_t)(EDX + 0x1103f52c)));
  /* 11021ae1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11021ae4 jmp 0x11021b38 */
  goto L_11021b38;
L_11021ae6:;
  /* 11021ae6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11021ae9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11021aec add ecx, 0x1103f530 */
  { uint32_t _a=(ECX),_b=(0x1103f530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11021af2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11021af5 jmp 0x11021b38 */
  goto L_11021b38;
L_11021af7:;
  /* 11021af7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11021afa imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11021afd mov eax, dword ptr [edx + 0x1103f534] */
  EAX = (r32((uint32_t)(EDX + 0x1103f534)));
  /* 11021b03 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11021b06 jmp 0x11021b38 */
  goto L_11021b38;
L_11021b08:;
  /* 11021b08 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11021b0b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11021b0e add ecx, 0x1103f538 */
  { uint32_t _a=(ECX),_b=(0x1103f538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11021b14 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11021b17 jmp 0x11021b38 */
  goto L_11021b38;
L_11021b19:;
  /* 11021b19 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11021b1c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11021b1f add edx, 0x1103f53c */
  { uint32_t _a=(EDX),_b=(0x1103f53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11021b25 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11021b28 jmp 0x11021b38 */
  goto L_11021b38;
L_11021b2a:;
  /* 11021b2a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11021b2d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11021b30 add eax, 0x1103f544 */
  { uint32_t _a=(EAX),_b=(0x1103f544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11021b35 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11021b38:;
  /* 11021b38 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021b3c je 0x11021b44 */
  if (C.zf) goto L_11021b44;
  /* 11021b3e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021b42 jge 0x11021b46 */
  if ((C.sf==C.of)) goto L_11021b46;
L_11021b44:;
  /* 11021b44 jmp 0x11021b98 */
  goto L_11021b98;
L_11021b46:;
  /* 11021b46 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11021b49 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11021b4c push ecx */
  push32((uint32_t)(ECX));
  /* 11021b4d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11021b50 push edx */
  push32((uint32_t)(EDX));
  /* 11021b51 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11021b54 push eax */
  push32((uint32_t)(EAX));
  /* 11021b55 call 0x11018950 */
  push32(0x11021b5au); f_11018950();
  /* 11021b5a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11021b5d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11021b60 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11021b63 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 11021b67 mov eax, 1 */
  EAX = (0x1u);
  /* 11021b6c jmp 0x11021bae */
  goto L_11021bae;
L_11021b6e:;
  /* 11021b6e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11021b71 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11021b74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11021b77 cmp eax, dword ptr [edx + 0x1103f520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x1103f520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021b7d jae 0x11021b8a */
  if (!C.cf) goto L_11021b8a;
  /* 11021b7f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11021b82 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11021b85 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11021b88 jmp 0x11021b93 */
  goto L_11021b93;
L_11021b8a:;
  /* 11021b8a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11021b8d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11021b90 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11021b93:;
  /* 11021b93 jmp 0x11021a4b */
  goto L_11021a4b;
L_11021b98:;
  /* 11021b98 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11021b9b push eax */
  push32((uint32_t)(EAX));
  /* 11021b9c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11021b9f push ecx */
  push32((uint32_t)(ECX));
  /* 11021ba0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11021ba3 push edx */
  push32((uint32_t)(EDX));
  /* 11021ba4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11021ba7 push eax */
  push32((uint32_t)(EAX));
  /* 11021ba8 call dword ptr [0x110432e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110432e0))), 0x11021baeu);
L_11021bae:;
  /* 11021bae mov esp, ebp */
  ESP = (EBP);
  /* 11021bb0 pop ebp */
  EBP = (pop32());
  /* 11021bb1 ret 0x10 */
  ESPCHK(0x11021a30u, _esp0);
  ESP += 20; return;
}

/* FUN_10011bc0 @ 0x11021bc0 (118 bytes, 42 insns) */
void f_11021bc0(void) {
  FTRACE(0x11021bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11021bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11021bc1 mov ebp, esp */
  EBP = (ESP);
  /* 11021bc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11021bc6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11021bcd:;
  /* 11021bcd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11021bd0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11021bd2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11021bd5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11021bd9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11021bdc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11021bdf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11021be2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11021be4 je 0x11021c2f */
  if (C.zf) goto L_11021c2f;
  /* 11021be6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11021bea cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021bed jl 0x11021c02 */
  if ((C.sf!=C.of)) goto L_11021c02;
  /* 11021bef movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11021bf3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021bf6 jg 0x11021c02 */
  if ((!C.zf&&C.sf==C.of)) goto L_11021c02;
  /* 11021bf8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11021bfb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11021bfd mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11021c00 jmp 0x11021c1c */
  goto L_11021c1c;
L_11021c02:;
  /* 11021c02 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11021c06 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021c09 jl 0x11021c1c */
  if ((C.sf!=C.of)) goto L_11021c1c;
  /* 11021c0b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11021c0f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021c12 jg 0x11021c1c */
  if ((!C.zf&&C.sf==C.of)) goto L_11021c1c;
  /* 11021c14 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11021c17 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11021c19 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_11021c1c:;
  /* 11021c1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11021c1f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11021c22 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11021c26 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11021c2a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11021c2d jmp 0x11021bcd */
  goto L_11021bcd;
L_11021c2f:;
  /* 11021c2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11021c32 mov esp, ebp */
  ESP = (EBP);
  /* 11021c34 pop ebp */
  EBP = (pop32());
  /* 11021c35 ret  */
  ESPCHK(0x11021bc0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x11021c40 (101 bytes, 36 insns) */
void f_11021c40(void) {
  FTRACE(0x11021c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11021c40 push ebp */
  push32((uint32_t)(EBP));
  /* 11021c41 mov ebp, esp */
  EBP = (ESP);
  /* 11021c43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11021c46 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11021c4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11021c50 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11021c52 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11021c55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11021c58 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11021c5b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11021c5e:;
  /* 11021c5e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11021c62 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021c65 jl 0x11021c70 */
  if ((C.sf!=C.of)) goto L_11021c70;
  /* 11021c67 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11021c6b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021c6e jle 0x11021c82 */
  if ((C.zf||C.sf!=C.of)) goto L_11021c82;
L_11021c70:;
  /* 11021c70 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11021c74 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021c77 jl 0x11021c9e */
  if ((C.sf!=C.of)) goto L_11021c9e;
  /* 11021c79 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11021c7d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021c80 jg 0x11021c9e */
  if ((!C.zf&&C.sf==C.of)) goto L_11021c9e;
L_11021c82:;
  /* 11021c82 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11021c85 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11021c88 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11021c8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11021c8e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11021c90 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11021c93 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11021c96 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11021c99 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11021c9c jmp 0x11021c5e */
  goto L_11021c5e;
L_11021c9e:;
  /* 11021c9e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11021ca1 mov esp, ebp */
  ESP = (EBP);
  /* 11021ca3 pop ebp */
  EBP = (pop32());
  /* 11021ca4 ret  */
  ESPCHK(0x11021c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10011cb0 @ 0x11021cb0 (122 bytes, 39 insns) */
void f_11021cb0(void) {
  FTRACE(0x11021cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11021cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11021cb1 mov ebp, esp */
  EBP = (ESP);
  /* 11021cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11021cb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11021cb7 cmp eax, dword ptr [0x110420dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110420dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021cbd jae 0x11021ce1 */
  if (!C.cf) goto L_11021ce1;
  /* 11021cbf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11021cc2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11021cc5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11021cc8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11021ccb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11021cce mov eax, dword ptr [ecx*4 + 0x11041fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11041fa0)));
  /* 11021cd5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11021cda and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11021cdd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11021cdf jne 0x11021cfc */
  if (!C.zf) goto L_11021cfc;
L_11021ce1:;
  /* 11021ce1 call 0x1101d000 */
  push32(0x11021ce6u); f_1101d000();
  /* 11021ce6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11021cec call 0x1101d010 */
  push32(0x11021cf1u); f_1101d010();
  /* 11021cf1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11021cf7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11021cfa jmp 0x11021d26 */
  goto L_11021d26;
L_11021cfc:;
  /* 11021cfc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11021cff push edx */
  push32((uint32_t)(EDX));
  /* 11021d00 call 0x1101e820 */
  push32(0x11021d05u); f_1101e820();
  /* 11021d05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11021d08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11021d0b push eax */
  push32((uint32_t)(EAX));
  /* 11021d0c call 0x11021d30 */
  push32(0x11021d11u); f_11021d30();
  /* 11021d11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11021d14 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11021d17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11021d1a push ecx */
  push32((uint32_t)(ECX));
  /* 11021d1b call 0x1101e8b0 */
  push32(0x11021d20u); f_1101e8b0();
  /* 11021d20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11021d23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11021d26:;
  /* 11021d26 mov esp, ebp */
  ESP = (EBP);
  /* 11021d28 pop ebp */
  EBP = (pop32());
  /* 11021d29 ret  */
  ESPCHK(0x11021cb0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x11021d30 (170 bytes, 59 insns) */
void f_11021d30(void) {
  FTRACE(0x11021d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11021d30 push ebp */
  push32((uint32_t)(EBP));
  /* 11021d31 mov ebp, esp */
  EBP = (ESP);
  /* 11021d33 push ecx */
  push32((uint32_t)(ECX));
  /* 11021d34 push esi */
  push32((uint32_t)(ESI));
  /* 11021d35 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11021d38 push eax */
  push32((uint32_t)(EAX));
  /* 11021d39 call 0x1101e6a0 */
  push32(0x11021d3eu); f_1101e6a0();
  /* 11021d3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11021d41 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021d44 je 0x11021d83 */
  if (C.zf) goto L_11021d83;
  /* 11021d46 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021d4a je 0x11021d52 */
  if (C.zf) goto L_11021d52;
  /* 11021d4c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021d50 jne 0x11021d6c */
  if (!C.zf) goto L_11021d6c;
L_11021d52:;
  /* 11021d52 push 1 */
  push32((uint32_t)(0x1u));
  /* 11021d54 call 0x1101e6a0 */
  push32(0x11021d59u); f_1101e6a0();
  /* 11021d59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11021d5c mov esi, eax */
  ESI = (EAX);
  /* 11021d5e push 2 */
  push32((uint32_t)(0x2u));
  /* 11021d60 call 0x1101e6a0 */
  push32(0x11021d65u); f_1101e6a0();
  /* 11021d65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11021d68 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021d6a je 0x11021d83 */
  if (C.zf) goto L_11021d83;
L_11021d6c:;
  /* 11021d6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11021d6f push ecx */
  push32((uint32_t)(ECX));
  /* 11021d70 call 0x1101e6a0 */
  push32(0x11021d75u); f_1101e6a0();
  /* 11021d75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11021d78 push eax */
  push32((uint32_t)(EAX));
  /* 11021d79 call dword ptr [0x110432dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110432dc))), 0x11021d7fu);
  /* 11021d7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11021d81 je 0x11021d8c */
  if (C.zf) goto L_11021d8c;
L_11021d83:;
  /* 11021d83 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11021d8a jmp 0x11021d95 */
  goto L_11021d95;
L_11021d8c:;
  /* 11021d8c call dword ptr [0x110433b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110433b4))), 0x11021d92u);
  /* 11021d92 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11021d95:;
  /* 11021d95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11021d98 push edx */
  push32((uint32_t)(EDX));
  /* 11021d99 call 0x1101e5c0 */
  push32(0x11021d9eu); f_1101e5c0();
  /* 11021d9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11021da1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11021da4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11021da7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11021daa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11021dad imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11021db0 mov edx, dword ptr [eax*4 + 0x11041fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11041fa0)));
  /* 11021db7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 11021dbc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021dc0 je 0x11021dd3 */
  if (C.zf) goto L_11021dd3;
  /* 11021dc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11021dc5 push eax */
  push32((uint32_t)(EAX));
  /* 11021dc6 call 0x1101cf60 */
  push32(0x11021dcbu); f_1101cf60();
  /* 11021dcb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11021dce or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11021dd1 jmp 0x11021dd5 */
  goto L_11021dd5;
L_11021dd3:;
  /* 11021dd3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11021dd5:;
  /* 11021dd5 pop esi */
  ESI = (pop32());
  /* 11021dd6 mov esp, ebp */
  ESP = (EBP);
  /* 11021dd8 pop ebp */
  EBP = (pop32());
  /* 11021dd9 ret  */
  ESPCHK(0x11021d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10011de0 @ 0x11021de0 (146 bytes, 52 insns) */
void f_11021de0(void) {
  FTRACE(0x11021de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11021de0 push ebp */
  push32((uint32_t)(EBP));
  /* 11021de1 mov ebp, esp */
  EBP = (ESP);
  /* 11021de3 push ebx */
  push32((uint32_t)(EBX));
  /* 11021de4 push esi */
  push32((uint32_t)(ESI));
  /* 11021de5 push edi */
  push32((uint32_t)(EDI));
L_11021de6:;
  /* 11021de6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021dea jne 0x11021e0a */
  if (!C.zf) goto L_11021e0a;
  /* 11021dec push 0x1103c2a8 */
  push32((uint32_t)(0x1103c2a8u));
  /* 11021df1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11021df3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11021df5 push 0x1103c970 */
  push32((uint32_t)(0x1103c970u));
  /* 11021dfa push 2 */
  push32((uint32_t)(0x2u));
  /* 11021dfc call 0x110141f0 */
  push32(0x11021e01u); f_110141f0();
  /* 11021e01 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11021e04 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021e07 jne 0x11021e0a */
  if (!C.zf) goto L_11021e0a;
  /* 11021e09 int3  */
  x86_unimpl("int3 @ 0x11021e09");
L_11021e0a:;
  /* 11021e0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11021e0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11021e0e jne 0x11021de6 */
  if (!C.zf) goto L_11021de6;
  /* 11021e10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11021e13 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11021e16 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 11021e1c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11021e1e je 0x11021e6d */
  if (C.zf) goto L_11021e6d;
  /* 11021e20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11021e23 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11021e26 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11021e29 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11021e2b je 0x11021e6d */
  if (C.zf) goto L_11021e6d;
  /* 11021e2d push 2 */
  push32((uint32_t)(0x2u));
  /* 11021e2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11021e32 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11021e35 push eax */
  push32((uint32_t)(EAX));
  /* 11021e36 call 0x11015bc0 */
  push32(0x11021e3bu); f_11015bc0();
  /* 11021e3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11021e3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11021e41 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11021e44 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 11021e4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11021e4d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11021e50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11021e53 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11021e59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11021e5c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11021e63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11021e66 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_11021e6d:;
  /* 11021e6d pop edi */
  EDI = (pop32());
  /* 11021e6e pop esi */
  ESI = (pop32());
  /* 11021e6f pop ebx */
  EBX = (pop32());
  /* 11021e70 pop ebp */
  EBP = (pop32());
  /* 11021e71 ret  */
  ESPCHK(0x11021de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e80 @ 0x11021e80 (289 bytes, 97 insns) */
void f_11021e80(void) {
  FTRACE(0x11021e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11021e80 push ebp */
  push32((uint32_t)(EBP));
  /* 11021e81 mov ebp, esp */
  EBP = (ESP);
  /* 11021e83 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11021e86 push esi */
  push32((uint32_t)(ESI));
  /* 11021e87 mov eax, dword ptr [0x1103fc98] */
  EAX = (r32((uint32_t)(0x1103fc98)));
  /* 11021e8c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11021e8f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11021e96 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11021e9d jmp 0x11021ea8 */
  goto L_11021ea8;
L_11021e9f:;
  /* 11021e9f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11021ea2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11021ea5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11021ea8:;
  /* 11021ea8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021eac jae 0x11021ee1 */
  if (!C.cf) goto L_11021ee1;
  /* 11021eae mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11021eb1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11021eb4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11021eb7 push ecx */
  push32((uint32_t)(ECX));
  /* 11021eb8 call 0x11017f60 */
  push32(0x11021ebdu); f_11017f60();
  /* 11021ebd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11021ec0 mov esi, eax */
  ESI = (EAX);
  /* 11021ec2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11021ec5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11021ec8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 11021ecc push ecx */
  push32((uint32_t)(ECX));
  /* 11021ecd call 0x11017f60 */
  push32(0x11021ed2u); f_11017f60();
  /* 11021ed2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11021ed5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11021ed8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11021edc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11021edf jmp 0x11021e9f */
  goto L_11021e9f;
L_11021ee1:;
  /* 11021ee1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11021ee4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11021ee7 push eax */
  push32((uint32_t)(EAX));
  /* 11021ee8 call 0x11015110 */
  push32(0x11021eedu); f_11015110();
  /* 11021eed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11021ef0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11021ef3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021ef7 je 0x11021f99 */
  if (C.zf) goto L_11021f99;
  /* 11021efd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11021f00 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11021f03 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11021f0a jmp 0x11021f15 */
  goto L_11021f15;
L_11021f0c:;
  /* 11021f0c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11021f0f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11021f12 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11021f15:;
  /* 11021f15 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021f19 jae 0x11021f8a */
  if (!C.cf) goto L_11021f8a;
  /* 11021f1b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11021f1e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11021f21 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11021f24 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11021f27 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11021f2a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11021f2d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11021f30 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11021f33 push ecx */
  push32((uint32_t)(ECX));
  /* 11021f34 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11021f37 push edx */
  push32((uint32_t)(EDX));
  /* 11021f38 call 0x110180e0 */
  push32(0x11021f3du); f_110180e0();
  /* 11021f3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11021f40 push eax */
  push32((uint32_t)(EAX));
  /* 11021f41 call 0x11017f60 */
  push32(0x11021f46u); f_11017f60();
  /* 11021f46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11021f49 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11021f4c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11021f4e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11021f51 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11021f54 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11021f57 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11021f5a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11021f5d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11021f60 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11021f63 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11021f66 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 11021f6a push eax */
  push32((uint32_t)(EAX));
  /* 11021f6b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11021f6e push ecx */
  push32((uint32_t)(ECX));
  /* 11021f6f call 0x110180e0 */
  push32(0x11021f74u); f_110180e0();
  /* 11021f74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11021f77 push eax */
  push32((uint32_t)(EAX));
  /* 11021f78 call 0x11017f60 */
  push32(0x11021f7du); f_11017f60();
  /* 11021f7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11021f80 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11021f83 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11021f85 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11021f88 jmp 0x11021f0c */
  goto L_11021f0c;
L_11021f8a:;
  /* 11021f8a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11021f8d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11021f90 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11021f93 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11021f96 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11021f99:;
  /* 11021f99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11021f9c pop esi */
  ESI = (pop32());
  /* 11021f9d mov esp, ebp */
  ESP = (EBP);
  /* 11021f9f pop ebp */
  EBP = (pop32());
  /* 11021fa0 ret  */
  ESPCHK(0x11021e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10011fb0 @ 0x11021fb0 (291 bytes, 97 insns) */
void f_11021fb0(void) {
  FTRACE(0x11021fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11021fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11021fb1 mov ebp, esp */
  EBP = (ESP);
  /* 11021fb3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11021fb6 push esi */
  push32((uint32_t)(ESI));
  /* 11021fb7 mov eax, dword ptr [0x1103fc98] */
  EAX = (r32((uint32_t)(0x1103fc98)));
  /* 11021fbc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11021fbf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11021fc6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11021fcd jmp 0x11021fd8 */
  goto L_11021fd8;
L_11021fcf:;
  /* 11021fcf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11021fd2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11021fd5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11021fd8:;
  /* 11021fd8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11021fdc jae 0x11022012 */
  if (!C.cf) goto L_11022012;
  /* 11021fde mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11021fe1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11021fe4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11021fe8 push ecx */
  push32((uint32_t)(ECX));
  /* 11021fe9 call 0x11017f60 */
  push32(0x11021feeu); f_11017f60();
  /* 11021fee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11021ff1 mov esi, eax */
  ESI = (EAX);
  /* 11021ff3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11021ff6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11021ff9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 11021ffd push ecx */
  push32((uint32_t)(ECX));
  /* 11021ffe call 0x11017f60 */
  push32(0x11022003u); f_11017f60();
  /* 11022003 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11022006 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11022009 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1102200d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11022010 jmp 0x11021fcf */
  goto L_11021fcf;
L_11022012:;
  /* 11022012 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11022015 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11022018 push eax */
  push32((uint32_t)(EAX));
  /* 11022019 call 0x11015110 */
  push32(0x1102201eu); f_11015110();
  /* 1102201e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11022021 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11022024 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11022028 je 0x110220cb */
  if (C.zf) goto L_110220cb;
  /* 1102202e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11022031 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11022034 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1102203b jmp 0x11022046 */
  goto L_11022046;
L_1102203d:;
  /* 1102203d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11022040 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11022043 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11022046:;
  /* 11022046 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102204a jae 0x110220bc */
  if (!C.cf) goto L_110220bc;
  /* 1102204c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1102204f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11022052 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11022055 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11022058 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1102205b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1102205e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11022061 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11022065 push ecx */
  push32((uint32_t)(ECX));
  /* 11022066 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11022069 push edx */
  push32((uint32_t)(EDX));
  /* 1102206a call 0x110180e0 */
  push32(0x1102206fu); f_110180e0();
  /* 1102206f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11022072 push eax */
  push32((uint32_t)(EAX));
  /* 11022073 call 0x11017f60 */
  push32(0x11022078u); f_11017f60();
  /* 11022078 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102207b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1102207e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11022080 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11022083 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11022086 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11022089 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1102208c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1102208f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11022092 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11022095 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11022098 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1102209c push eax */
  push32((uint32_t)(EAX));
  /* 1102209d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110220a0 push ecx */
  push32((uint32_t)(ECX));
  /* 110220a1 call 0x110180e0 */
  push32(0x110220a6u); f_110180e0();
  /* 110220a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110220a9 push eax */
  push32((uint32_t)(EAX));
  /* 110220aa call 0x11017f60 */
  push32(0x110220afu); f_11017f60();
  /* 110220af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110220b2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 110220b5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110220b7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 110220ba jmp 0x1102203d */
  goto L_1102203d;
L_110220bc:;
  /* 110220bc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 110220bf mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 110220c2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110220c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110220c8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_110220cb:;
  /* 110220cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110220ce pop esi */
  ESI = (pop32());
  /* 110220cf mov esp, ebp */
  ESP = (EBP);
  /* 110220d1 pop ebp */
  EBP = (pop32());
  /* 110220d2 ret  */
  ESPCHK(0x11021fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_100120e0 @ 0x110220e0 (878 bytes, 273 insns) */
void f_110220e0(void) {
  FTRACE(0x110220e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110220e0 push ebp */
  push32((uint32_t)(EBP));
  /* 110220e1 mov ebp, esp */
  EBP = (ESP);
  /* 110220e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110220e6 push esi */
  push32((uint32_t)(ESI));
  /* 110220e7 mov eax, dword ptr [0x1103fc98] */
  EAX = (r32((uint32_t)(0x1103fc98)));
  /* 110220ec mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 110220ef mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 110220f6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 110220fd jmp 0x11022108 */
  goto L_11022108;
L_110220ff:;
  /* 110220ff mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11022102 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11022105 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11022108:;
  /* 11022108 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102210c jae 0x11022141 */
  if (!C.cf) goto L_11022141;
  /* 1102210e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11022111 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11022114 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11022117 push ecx */
  push32((uint32_t)(ECX));
  /* 11022118 call 0x11017f60 */
  push32(0x1102211du); f_11017f60();
  /* 1102211d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11022120 mov esi, eax */
  ESI = (EAX);
  /* 11022122 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11022125 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11022128 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1102212c push ecx */
  push32((uint32_t)(ECX));
  /* 1102212d call 0x11017f60 */
  push32(0x11022132u); f_11017f60();
  /* 11022132 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11022135 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11022138 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1102213c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1102213f jmp 0x110220ff */
  goto L_110220ff;
L_11022141:;
  /* 11022141 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11022148 jmp 0x11022153 */
  goto L_11022153;
L_1102214a:;
  /* 1102214a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1102214d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11022150 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11022153:;
  /* 11022153 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11022157 jae 0x1102218d */
  if (!C.cf) goto L_1102218d;
  /* 11022159 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1102215c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1102215f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11022163 push eax */
  push32((uint32_t)(EAX));
  /* 11022164 call 0x11017f60 */
  push32(0x11022169u); f_11017f60();
  /* 11022169 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102216c mov esi, eax */
  ESI = (EAX);
  /* 1102216e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11022171 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11022174 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11022178 push eax */
  push32((uint32_t)(EAX));
  /* 11022179 call 0x11017f60 */
  push32(0x1102217eu); f_11017f60();
  /* 1102217e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11022181 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11022184 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11022188 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1102218b jmp 0x1102214a */
  goto L_1102214a;
L_1102218d:;
  /* 1102218d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11022190 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11022196 push eax */
  push32((uint32_t)(EAX));
  /* 11022197 call 0x11017f60 */
  push32(0x1102219cu); f_11017f60();
  /* 1102219c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102219f mov esi, eax */
  ESI = (EAX);
  /* 110221a1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110221a4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 110221aa push edx */
  push32((uint32_t)(EDX));
  /* 110221ab call 0x11017f60 */
  push32(0x110221b0u); f_11017f60();
  /* 110221b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110221b3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110221b6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 110221ba mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 110221bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110221c0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 110221c6 push edx */
  push32((uint32_t)(EDX));
  /* 110221c7 call 0x11017f60 */
  push32(0x110221ccu); f_11017f60();
  /* 110221cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110221cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110221d2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 110221d6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 110221d9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110221dc mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 110221e2 push ecx */
  push32((uint32_t)(ECX));
  /* 110221e3 call 0x11017f60 */
  push32(0x110221e8u); f_11017f60();
  /* 110221e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110221eb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110221ee lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 110221f2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 110221f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110221f8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 110221fe push edx */
  push32((uint32_t)(EDX));
  /* 110221ff call 0x11017f60 */
  push32(0x11022204u); f_11017f60();
  /* 11022204 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11022207 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1102220a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1102220e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11022211 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11022214 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11022219 push eax */
  push32((uint32_t)(EAX));
  /* 1102221a call 0x11015110 */
  push32(0x1102221fu); f_11015110();
  /* 1102221f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11022222 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11022225 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11022229 je 0x11022446 */
  if (C.zf) goto L_11022446;
  /* 1102222f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11022232 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11022235 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11022238 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1102223e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11022241 push 0xac */
  push32((uint32_t)(0xacu));
  /* 11022246 mov eax, dword ptr [0x1103fc98] */
  EAX = (r32((uint32_t)(0x1103fc98)));
  /* 1102224b push eax */
  push32((uint32_t)(EAX));
  /* 1102224c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1102224f push ecx */
  push32((uint32_t)(ECX));
  /* 11022250 call 0x1101ba10 */
  push32(0x11022255u); f_1101ba10();
  /* 11022255 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11022258 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1102225f jmp 0x1102226a */
  goto L_1102226a;
L_11022261:;
  /* 11022261 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11022264 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11022267 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1102226a:;
  /* 1102226a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1102226e jae 0x110222de */
  if (!C.cf) goto L_110222de;
  /* 11022270 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11022273 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11022276 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11022279 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1102227c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1102227f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11022282 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11022285 push edx */
  push32((uint32_t)(EDX));
  /* 11022286 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11022289 push eax */
  push32((uint32_t)(EAX));
  /* 1102228a call 0x110180e0 */
  push32(0x1102228fu); f_110180e0();
  /* 1102228f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11022292 push eax */
  push32((uint32_t)(EAX));
  /* 11022293 call 0x11017f60 */
  push32(0x11022298u); f_11017f60();
  /* 11022298 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102229b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1102229e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 110222a2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 110222a5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 110222a8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 110222ab mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 110222ae mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 110222b2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 110222b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110222b8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 110222bc push edx */
  push32((uint32_t)(EDX));
  /* 110222bd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 110222c0 push eax */
  push32((uint32_t)(EAX));
  /* 110222c1 call 0x110180e0 */
  push32(0x110222c6u); f_110180e0();
  /* 110222c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110222c9 push eax */
  push32((uint32_t)(EAX));
  /* 110222ca call 0x11017f60 */
  push32(0x110222cfu); f_11017f60();
  /* 110222cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110222d2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110222d5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 110222d9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 110222dc jmp 0x11022261 */
  goto L_11022261;
L_110222de:;
  /* 110222de mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 110222e5 jmp 0x110222f0 */
  goto L_110222f0;
L_110222e7:;
  /* 110222e7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 110222ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110222ed mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_110222f0:;
  /* 110222f0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110222f4 jae 0x11022366 */
  if (!C.cf) goto L_11022366;
  /* 110222f6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110222f9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 110222fc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 110222ff mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 11022303 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11022306 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11022309 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1102230d push eax */
  push32((uint32_t)(EAX));
  /* 1102230e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11022311 push ecx */
  push32((uint32_t)(ECX));
  /* 11022312 call 0x110180e0 */
  push32(0x11022317u); f_110180e0();
  /* 11022317 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102231a push eax */
  push32((uint32_t)(EAX));
  /* 1102231b call 0x11017f60 */
  push32(0x11022320u); f_11017f60();
  /* 11022320 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11022323 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11022326 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1102232a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1102232d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11022330 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11022333 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11022336 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 1102233a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1102233d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11022340 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11022344 push eax */
  push32((uint32_t)(EAX));
  /* 11022345 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11022348 push ecx */
  push32((uint32_t)(ECX));
  /* 11022349 call 0x110180e0 */
  push32(0x1102234eu); f_110180e0();
  /* 1102234e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11022351 push eax */
  push32((uint32_t)(EAX));
  /* 11022352 call 0x11017f60 */
  push32(0x11022357u); f_11017f60();
  /* 11022357 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102235a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1102235d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11022361 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11022364 jmp 0x110222e7 */
  goto L_110222e7;
L_11022366:;
  /* 11022366 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11022369 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1102236c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 11022372 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11022375 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1102237b push ecx */
  push32((uint32_t)(ECX));
  /* 1102237c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1102237f push edx */
  push32((uint32_t)(EDX));
  /* 11022380 call 0x110180e0 */
  push32(0x11022385u); f_110180e0();
  /* 11022385 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11022388 push eax */
  push32((uint32_t)(EAX));
  /* 11022389 call 0x11017f60 */
  push32(0x1102238eu); f_11017f60();
  /* 1102238e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11022391 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11022394 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11022398 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1102239b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1102239e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110223a1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 110223a7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110223aa mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 110223b0 push eax */
  push32((uint32_t)(EAX));
  /* 110223b1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110223b4 push ecx */
  push32((uint32_t)(ECX));
  /* 110223b5 call 0x110180e0 */
  push32(0x110223bau); f_110180e0();
  /* 110223ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110223bd push eax */
  push32((uint32_t)(EAX));
  /* 110223be call 0x11017f60 */
  push32(0x110223c3u); f_11017f60();
  /* 110223c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110223c6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 110223c9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 110223cd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 110223d0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 110223d3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 110223d6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 110223dc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110223df mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 110223e5 push ecx */
  push32((uint32_t)(ECX));
  /* 110223e6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 110223e9 push edx */
  push32((uint32_t)(EDX));
  /* 110223ea call 0x110180e0 */
  push32(0x110223efu); f_110180e0();
  /* 110223ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110223f2 push eax */
  push32((uint32_t)(EAX));
  /* 110223f3 call 0x11017f60 */
  push32(0x110223f8u); f_11017f60();
  /* 110223f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110223fb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110223fe lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11022402 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11022405 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11022408 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1102240b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 11022411 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11022414 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 1102241a push eax */
  push32((uint32_t)(EAX));
  /* 1102241b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1102241e push ecx */
  push32((uint32_t)(ECX));
  /* 1102241f call 0x110180e0 */
  push32(0x11022424u); f_110180e0();
  /* 11022424 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11022427 push eax */
  push32((uint32_t)(EAX));
  /* 11022428 call 0x11017f60 */
  push32(0x1102242du); f_11017f60();
  /* 1102242d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11022430 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11022433 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11022437 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1102243a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1102243d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11022440 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_11022446:;
  /* 11022446 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11022449 pop esi */
  ESI = (pop32());
  /* 1102244a mov esp, ebp */
  ESP = (EBP);
  /* 1102244c pop ebp */
  EBP = (pop32());
  /* 1102244d ret  */
  ESPCHK(0x110220e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012450 @ 0x11022450 (31 bytes, 15 insns) */
void f_11022450(void) {
  FTRACE(0x11022450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11022450 push ebp */
  push32((uint32_t)(EBP));
  /* 11022451 mov ebp, esp */
  EBP = (ESP);
  /* 11022453 push 0 */
  push32((uint32_t)(0x0u));
  /* 11022455 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11022458 push eax */
  push32((uint32_t)(EAX));
  /* 11022459 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1102245c push ecx */
  push32((uint32_t)(ECX));
  /* 1102245d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11022460 push edx */
  push32((uint32_t)(EDX));
  /* 11022461 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11022464 push eax */
  push32((uint32_t)(EAX));
  /* 11022465 call 0x11022470 */
  push32(0x1102246au); f_11022470();
  /* 1102246a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1102246d pop ebp */
  EBP = (pop32());
  /* 1102246e ret  */
  ESPCHK(0x11022450u, _esp0);
  ESP += 4; return;
}

