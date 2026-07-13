#include "recomp.h"

/* FUN_1000f930 @ 0x12e7f930 (287 bytes, 86 insns) */
void f_12e7f930(void) {
  FTRACE(0x12e7f930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7f930 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7f931 mov ebp, esp */
  EBP = (ESP);
  /* 12e7f933 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7f936 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7f939 push eax */
  push32((uint32_t)(EAX));
  /* 12e7f93a call 0x12e7fee0 */
  push32(0x12e7f93fu); f_12e7fee0();
  /* 12e7f93f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f942 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12e7f945 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12e7f947 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12e7f94a push ecx */
  push32((uint32_t)(ECX));
  /* 12e7f94b mov edx, dword ptr [0x12e8f748] */
  EDX = (r32((uint32_t)(0x12e8f748)));
  /* 12e7f951 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e7f953 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7f955 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 12e7f95b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f961 push edx */
  push32((uint32_t)(EDX));
  /* 12e7f962 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e7f965 push eax */
  push32((uint32_t)(EAX));
  /* 12e7f966 call dword ptr [0x12e8f75c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e8f75c))), 0x12e7f96cu);
  /* 12e7f96c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7f96e jne 0x12e7f984 */
  if (!C.zf) goto L_12e7f984;
  /* 12e7f970 mov dword ptr [0x12e8f754], 0 */
  w32((uint32_t)(0x12e8f754), (0x0u));
  /* 12e7f97a mov eax, 1 */
  EAX = (0x1u);
  /* 12e7f97f jmp 0x12e7fa49 */
  goto L_12e7fa49;
L_12e7f984:;
  /* 12e7f984 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12e7f987 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7f988 mov edx, dword ptr [0x12e8f74c] */
  EDX = (r32((uint32_t)(0x12e8f74c)));
  /* 12e7f98e push edx */
  push32((uint32_t)(EDX));
  /* 12e7f98f call 0x12e81b20 */
  push32(0x12e7f994u); f_12e81b20();
  /* 12e7f994 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f997 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7f999 jne 0x12e7f9d9 */
  if (!C.zf) goto L_12e7f9d9;
  /* 12e7f99b cmp dword ptr [0x12e8f748], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f748))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7f9a2 jne 0x12e7f9b6 */
  if (!C.zf) goto L_12e7f9b6;
  /* 12e7f9a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7f9a6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e7f9a9 push eax */
  push32((uint32_t)(EAX));
  /* 12e7f9aa call 0x12e7fc70 */
  push32(0x12e7f9afu); f_12e7fc70();
  /* 12e7f9af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7f9b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7f9b4 je 0x12e7f9d7 */
  if (C.zf) goto L_12e7f9d7;
L_12e7f9b6:;
  /* 12e7f9b6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e7f9b9 mov dword ptr [0x12e8f758], ecx */
  w32((uint32_t)(0x12e8f758), (ECX));
  /* 12e7f9bf mov edx, dword ptr [0x12e8f758] */
  EDX = (r32((uint32_t)(0x12e8f758)));
  /* 12e7f9c5 mov dword ptr [0x12e8f73c], edx */
  w32((uint32_t)(0x12e8f73c), (EDX));
  /* 12e7f9cb mov eax, dword ptr [0x12e8f754] */
  EAX = (r32((uint32_t)(0x12e8f754)));
  /* 12e7f9d0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12e7f9d2 mov dword ptr [0x12e8f754], eax */
  w32((uint32_t)(0x12e8f754), (EAX));
L_12e7f9d7:;
  /* 12e7f9d7 jmp 0x12e7fa3c */
  goto L_12e7fa3c;
L_12e7f9d9:;
  /* 12e7f9d9 cmp dword ptr [0x12e8f748], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f748))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7f9e0 jne 0x12e7fa3c */
  if (!C.zf) goto L_12e7fa3c;
  /* 12e7f9e2 cmp dword ptr [0x12e8f744], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f744))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7f9e9 je 0x12e7fa3c */
  if (C.zf) goto L_12e7fa3c;
  /* 12e7f9eb mov ecx, dword ptr [0x12e8f744] */
  ECX = (r32((uint32_t)(0x12e8f744)));
  /* 12e7f9f1 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7f9f2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 12e7f9f5 push edx */
  push32((uint32_t)(EDX));
  /* 12e7f9f6 mov eax, dword ptr [0x12e8f74c] */
  EAX = (r32((uint32_t)(0x12e8f74c)));
  /* 12e7f9fb push eax */
  push32((uint32_t)(EAX));
  /* 12e7f9fc call 0x12e81bf0 */
  push32(0x12e7fa01u); f_12e81bf0();
  /* 12e7fa01 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7fa04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7fa06 jne 0x12e7fa3c */
  if (!C.zf) goto L_12e7fa3c;
  /* 12e7fa08 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e7fa0a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e7fa0d push ecx */
  push32((uint32_t)(ECX));
  /* 12e7fa0e call 0x12e7fc70 */
  push32(0x12e7fa13u); f_12e7fc70();
  /* 12e7fa13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7fa16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7fa18 je 0x12e7fa3c */
  if (C.zf) goto L_12e7fa3c;
  /* 12e7fa1a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e7fa1d mov dword ptr [0x12e8f758], edx */
  w32((uint32_t)(0x12e8f758), (EDX));
  /* 12e7fa23 mov eax, dword ptr [0x12e8f758] */
  EAX = (r32((uint32_t)(0x12e8f758)));
  /* 12e7fa28 mov dword ptr [0x12e8f73c], eax */
  w32((uint32_t)(0x12e8f73c), (EAX));
  /* 12e7fa2d mov ecx, dword ptr [0x12e8f754] */
  ECX = (r32((uint32_t)(0x12e8f754)));
  /* 12e7fa33 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12e7fa36 mov dword ptr [0x12e8f754], ecx */
  w32((uint32_t)(0x12e8f754), (ECX));
L_12e7fa3c:;
  /* 12e7fa3c mov eax, dword ptr [0x12e8f754] */
  EAX = (r32((uint32_t)(0x12e8f754)));
  /* 12e7fa41 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12e7fa44 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e7fa46 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7fa48 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12e7fa49:;
  /* 12e7fa49 mov esp, ebp */
  ESP = (EBP);
  /* 12e7fa4b pop ebp */
  EBP = (pop32());
  /* 12e7fa4c ret 4 */
  ESPCHK(0x12e7f930u, _esp0);
  ESP += 8; return;
}

/* FUN_1000fa50 @ 0x12e7fa50 (69 bytes, 20 insns) */
void f_12e7fa50(void) {
  FTRACE(0x12e7fa50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7fa50 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7fa51 mov ebp, esp */
  EBP = (ESP);
  /* 12e7fa53 mov eax, dword ptr [0x12e8f750] */
  EAX = (r32((uint32_t)(0x12e8f750)));
  /* 12e7fa58 push eax */
  push32((uint32_t)(EAX));
  /* 12e7fa59 call 0x12e76280 */
  push32(0x12e7fa5eu); f_12e76280();
  /* 12e7fa5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7fa61 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7fa63 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7fa66 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12e7fa69 mov dword ptr [0x12e8f740], ecx */
  w32((uint32_t)(0x12e8f740), (ECX));
  /* 12e7fa6f push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7fa71 push 0x12e7faa0 */
  push32((uint32_t)(0x12e7faa0u));
  /* 12e7fa76 call dword ptr [0x12e922ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922ac))), 0x12e7fa7cu);
  /* 12e7fa7c mov edx, dword ptr [0x12e8f754] */
  EDX = (r32((uint32_t)(0x12e8f754)));
  /* 12e7fa82 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12e7fa85 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7fa87 jne 0x12e7fa93 */
  if (!C.zf) goto L_12e7fa93;
  /* 12e7fa89 mov dword ptr [0x12e8f754], 0 */
  w32((uint32_t)(0x12e8f754), (0x0u));
L_12e7fa93:;
  /* 12e7fa93 pop ebp */
  EBP = (pop32());
  /* 12e7fa94 ret  */
  ESPCHK(0x12e7fa50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000faa0 @ 0x12e7faa0 (172 bytes, 54 insns) */
void f_12e7faa0(void) {
  FTRACE(0x12e7faa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7faa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7faa1 mov ebp, esp */
  EBP = (ESP);
  /* 12e7faa3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7faa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7faa9 push eax */
  push32((uint32_t)(EAX));
  /* 12e7faaa call 0x12e7fee0 */
  push32(0x12e7faafu); f_12e7fee0();
  /* 12e7faaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7fab2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12e7fab5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12e7fab7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12e7faba push ecx */
  push32((uint32_t)(ECX));
  /* 12e7fabb mov edx, dword ptr [0x12e8f740] */
  EDX = (r32((uint32_t)(0x12e8f740)));
  /* 12e7fac1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e7fac3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7fac5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 12e7facb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7fad1 push edx */
  push32((uint32_t)(EDX));
  /* 12e7fad2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e7fad5 push eax */
  push32((uint32_t)(EAX));
  /* 12e7fad6 call dword ptr [0x12e8f75c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e8f75c))), 0x12e7fadcu);
  /* 12e7fadc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7fade jne 0x12e7faf1 */
  if (!C.zf) goto L_12e7faf1;
  /* 12e7fae0 mov dword ptr [0x12e8f754], 0 */
  w32((uint32_t)(0x12e8f754), (0x0u));
  /* 12e7faea mov eax, 1 */
  EAX = (0x1u);
  /* 12e7faef jmp 0x12e7fb46 */
  goto L_12e7fb46;
L_12e7faf1:;
  /* 12e7faf1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12e7faf4 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7faf5 mov edx, dword ptr [0x12e8f750] */
  EDX = (r32((uint32_t)(0x12e8f750)));
  /* 12e7fafb push edx */
  push32((uint32_t)(EDX));
  /* 12e7fafc call 0x12e81b20 */
  push32(0x12e7fb01u); f_12e81b20();
  /* 12e7fb01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7fb04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7fb06 jne 0x12e7fb39 */
  if (!C.zf) goto L_12e7fb39;
  /* 12e7fb08 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e7fb0b push eax */
  push32((uint32_t)(EAX));
  /* 12e7fb0c call 0x12e7fc20 */
  push32(0x12e7fb11u); f_12e7fc20();
  /* 12e7fb11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7fb14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7fb16 je 0x12e7fb39 */
  if (C.zf) goto L_12e7fb39;
  /* 12e7fb18 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12e7fb1b mov dword ptr [0x12e8f758], ecx */
  w32((uint32_t)(0x12e8f758), (ECX));
  /* 12e7fb21 mov edx, dword ptr [0x12e8f758] */
  EDX = (r32((uint32_t)(0x12e8f758)));
  /* 12e7fb27 mov dword ptr [0x12e8f73c], edx */
  w32((uint32_t)(0x12e8f73c), (EDX));
  /* 12e7fb2d mov eax, dword ptr [0x12e8f754] */
  EAX = (r32((uint32_t)(0x12e8f754)));
  /* 12e7fb32 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12e7fb34 mov dword ptr [0x12e8f754], eax */
  w32((uint32_t)(0x12e8f754), (EAX));
L_12e7fb39:;
  /* 12e7fb39 mov eax, dword ptr [0x12e8f754] */
  EAX = (r32((uint32_t)(0x12e8f754)));
  /* 12e7fb3e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12e7fb41 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e7fb43 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7fb45 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12e7fb46:;
  /* 12e7fb46 mov esp, ebp */
  ESP = (EBP);
  /* 12e7fb48 pop ebp */
  EBP = (pop32());
  /* 12e7fb49 ret 4 */
  ESPCHK(0x12e7faa0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000fb50 @ 0x12e7fb50 (43 bytes, 11 insns) */
void f_12e7fb50(void) {
  FTRACE(0x12e7fb50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7fb50 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7fb51 mov ebp, esp */
  EBP = (ESP);
  /* 12e7fb53 mov eax, dword ptr [0x12e8f754] */
  EAX = (r32((uint32_t)(0x12e8f754)));
  /* 12e7fb58 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 12e7fb5d mov dword ptr [0x12e8f754], eax */
  w32((uint32_t)(0x12e8f754), (EAX));
  /* 12e7fb62 call dword ptr [0x12e922a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922a8))), 0x12e7fb68u);
  /* 12e7fb68 mov dword ptr [0x12e8f758], eax */
  w32((uint32_t)(0x12e8f758), (EAX));
  /* 12e7fb6d mov ecx, dword ptr [0x12e8f758] */
  ECX = (r32((uint32_t)(0x12e8f758)));
  /* 12e7fb73 mov dword ptr [0x12e8f73c], ecx */
  w32((uint32_t)(0x12e8f73c), (ECX));
  /* 12e7fb79 pop ebp */
  EBP = (pop32());
  /* 12e7fb7a ret  */
  ESPCHK(0x12e7fb50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb80 @ 0x12e7fb80 (155 bytes, 57 insns) */
void f_12e7fb80(void) {
  FTRACE(0x12e7fb80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7fb80 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7fb81 mov ebp, esp */
  EBP = (ESP);
  /* 12e7fb83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7fb86 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7fb8a je 0x12e7fbab */
  if (C.zf) goto L_12e7fbab;
  /* 12e7fb8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7fb8f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e7fb92 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e7fb94 je 0x12e7fbab */
  if (C.zf) goto L_12e7fbab;
  /* 12e7fb96 push 0x12e8b774 */
  push32((uint32_t)(0x12e8b774u));
  /* 12e7fb9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7fb9e push edx */
  push32((uint32_t)(EDX));
  /* 12e7fb9f call 0x12e7f0e0 */
  push32(0x12e7fba4u); f_12e7f0e0();
  /* 12e7fba4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7fba7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7fba9 jne 0x12e7fbd3 */
  if (!C.zf) goto L_12e7fbd3;
L_12e7fbab:;
  /* 12e7fbab push 8 */
  push32((uint32_t)(0x8u));
  /* 12e7fbad lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12e7fbb0 push eax */
  push32((uint32_t)(EAX));
  /* 12e7fbb1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12e7fbb6 mov ecx, dword ptr [0x12e8f758] */
  ECX = (r32((uint32_t)(0x12e8f758)));
  /* 12e7fbbc push ecx */
  push32((uint32_t)(ECX));
  /* 12e7fbbd call dword ptr [0x12e8f75c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e8f75c))), 0x12e7fbc3u);
  /* 12e7fbc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7fbc5 jne 0x12e7fbcb */
  if (!C.zf) goto L_12e7fbcb;
  /* 12e7fbc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7fbc9 jmp 0x12e7fc17 */
  goto L_12e7fc17;
L_12e7fbcb:;
  /* 12e7fbcb lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 12e7fbce mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12e7fbd1 jmp 0x12e7fc0b */
  goto L_12e7fc0b;
L_12e7fbd3:;
  /* 12e7fbd3 push 0x12e8b770 */
  push32((uint32_t)(0x12e8b770u));
  /* 12e7fbd8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7fbdb push eax */
  push32((uint32_t)(EAX));
  /* 12e7fbdc call 0x12e7f0e0 */
  push32(0x12e7fbe1u); f_12e7f0e0();
  /* 12e7fbe1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7fbe4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7fbe6 jne 0x12e7fc0b */
  if (!C.zf) goto L_12e7fc0b;
  /* 12e7fbe8 push 8 */
  push32((uint32_t)(0x8u));
  /* 12e7fbea lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12e7fbed push ecx */
  push32((uint32_t)(ECX));
  /* 12e7fbee push 0xb */
  push32((uint32_t)(0xbu));
  /* 12e7fbf0 mov edx, dword ptr [0x12e8f758] */
  EDX = (r32((uint32_t)(0x12e8f758)));
  /* 12e7fbf6 push edx */
  push32((uint32_t)(EDX));
  /* 12e7fbf7 call dword ptr [0x12e8f75c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e8f75c))), 0x12e7fbfdu);
  /* 12e7fbfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7fbff jne 0x12e7fc05 */
  if (!C.zf) goto L_12e7fc05;
  /* 12e7fc01 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7fc03 jmp 0x12e7fc17 */
  goto L_12e7fc17;
L_12e7fc05:;
  /* 12e7fc05 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12e7fc08 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12e7fc0b:;
  /* 12e7fc0b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7fc0e push ecx */
  push32((uint32_t)(ECX));
  /* 12e7fc0f call 0x12e81d00 */
  push32(0x12e7fc14u); f_12e81d00();
  /* 12e7fc14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e7fc17:;
  /* 12e7fc17 mov esp, ebp */
  ESP = (EBP);
  /* 12e7fc19 pop ebp */
  EBP = (pop32());
  /* 12e7fc1a ret  */
  ESPCHK(0x12e7fb80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc20 @ 0x12e7fc20 (79 bytes, 26 insns) */
void f_12e7fc20(void) {
  FTRACE(0x12e7fc20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7fc20 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7fc21 mov ebp, esp */
  EBP = (ESP);
  /* 12e7fc23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7fc26 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 12e7fc2a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 12e7fc2e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e7fc35 jmp 0x12e7fc40 */
  goto L_12e7fc40;
L_12e7fc37:;
  /* 12e7fc37 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7fc3a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7fc3d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12e7fc40:;
  /* 12e7fc40 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7fc44 jae 0x12e7fc66 */
  if (!C.cf) goto L_12e7fc66;
  /* 12e7fc46 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7fc49 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e7fc4f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7fc52 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e7fc54 mov cx, word ptr [eax*2 + 0x12e8e9e4] */
  CX = (r16((uint32_t)(EAX*2 + 0x12e8e9e4)));
  /* 12e7fc5c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7fc5e jne 0x12e7fc64 */
  if (!C.zf) goto L_12e7fc64;
  /* 12e7fc60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7fc62 jmp 0x12e7fc6b */
  goto L_12e7fc6b;
L_12e7fc64:;
  /* 12e7fc64 jmp 0x12e7fc37 */
  goto L_12e7fc37;
L_12e7fc66:;
  /* 12e7fc66 mov eax, 1 */
  EAX = (0x1u);
L_12e7fc6b:;
  /* 12e7fc6b mov esp, ebp */
  ESP = (EBP);
  /* 12e7fc6d pop ebp */
  EBP = (pop32());
  /* 12e7fc6e ret  */
  ESPCHK(0x12e7fc20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc70 @ 0x12e7fc70 (135 bytes, 48 insns) */
void f_12e7fc70(void) {
  FTRACE(0x12e7fc70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7fc70 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7fc71 mov ebp, esp */
  EBP = (ESP);
  /* 12e7fc73 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7fc76 push esi */
  push32((uint32_t)(ESI));
  /* 12e7fc77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7fc7a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e7fc7f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e7fc84 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e7fc89 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 12e7fc8c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e7fc91 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e7fc94 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12e7fc96 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 12e7fc99 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7fc9a push 1 */
  push32((uint32_t)(0x1u));
  /* 12e7fc9c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7fc9f push edx */
  push32((uint32_t)(EDX));
  /* 12e7fca0 call dword ptr [0x12e8f75c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e8f75c))), 0x12e7fca6u);
  /* 12e7fca6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7fca8 jne 0x12e7fcae */
  if (!C.zf) goto L_12e7fcae;
  /* 12e7fcaa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7fcac jmp 0x12e7fcf2 */
  goto L_12e7fcf2;
L_12e7fcae:;
  /* 12e7fcae lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 12e7fcb1 push eax */
  push32((uint32_t)(EAX));
  /* 12e7fcb2 call 0x12e7fee0 */
  push32(0x12e7fcb7u); f_12e7fee0();
  /* 12e7fcb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7fcba cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7fcbd je 0x12e7fced */
  if (C.zf) goto L_12e7fced;
  /* 12e7fcbf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7fcc3 je 0x12e7fced */
  if (C.zf) goto L_12e7fced;
  /* 12e7fcc5 mov ecx, dword ptr [0x12e8f74c] */
  ECX = (r32((uint32_t)(0x12e8f74c)));
  /* 12e7fccb push ecx */
  push32((uint32_t)(ECX));
  /* 12e7fccc call 0x12e7ff60 */
  push32(0x12e7fcd1u); f_12e7ff60();
  /* 12e7fcd1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7fcd4 mov esi, eax */
  ESI = (EAX);
  /* 12e7fcd6 mov edx, dword ptr [0x12e8f74c] */
  EDX = (r32((uint32_t)(0x12e8f74c)));
  /* 12e7fcdc push edx */
  push32((uint32_t)(EDX));
  /* 12e7fcdd call 0x12e76280 */
  push32(0x12e7fce2u); f_12e76280();
  /* 12e7fce2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7fce5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7fce7 jne 0x12e7fced */
  if (!C.zf) goto L_12e7fced;
  /* 12e7fce9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e7fceb jmp 0x12e7fcf2 */
  goto L_12e7fcf2;
L_12e7fced:;
  /* 12e7fced mov eax, 1 */
  EAX = (0x1u);
L_12e7fcf2:;
  /* 12e7fcf2 pop esi */
  ESI = (pop32());
  /* 12e7fcf3 mov esp, ebp */
  ESP = (EBP);
  /* 12e7fcf5 pop ebp */
  EBP = (pop32());
  /* 12e7fcf6 ret  */
  ESPCHK(0x12e7fc70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd00 @ 0x12e7fd00 (77 bytes, 18 insns) */
void f_12e7fd00(void) {
  FTRACE(0x12e7fd00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7fd00 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7fd01 mov ebp, esp */
  EBP = (ESP);
  /* 12e7fd03 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7fd09 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 12e7fd13 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 12e7fd19 push eax */
  push32((uint32_t)(EAX));
  /* 12e7fd1a call dword ptr [0x12e922a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922a4))), 0x12e7fd20u);
  /* 12e7fd20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e7fd22 je 0x12e7fd39 */
  if (C.zf) goto L_12e7fd39;
  /* 12e7fd24 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7fd2b jne 0x12e7fd39 */
  if (!C.zf) goto L_12e7fd39;
  /* 12e7fd2d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 12e7fd37 jmp 0x12e7fd43 */
  goto L_12e7fd43;
L_12e7fd39:;
  /* 12e7fd39 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_12e7fd43:;
  /* 12e7fd43 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12e7fd49 mov esp, ebp */
  ESP = (EBP);
  /* 12e7fd4b pop ebp */
  EBP = (pop32());
  /* 12e7fd4c ret  */
  ESPCHK(0x12e7fd00u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x12e7fd50 (388 bytes, 118 insns) */
void f_12e7fd50(void) {
  FTRACE(0x12e7fd50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7fd50 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7fd51 mov ebp, esp */
  EBP = (ESP);
  /* 12e7fd53 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7fd56 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12e7fd5d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 12e7fd64 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12e7fd6b:;
  /* 12e7fd6b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e7fd6e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7fd71 jg 0x12e7feb8 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e7feb8;
  /* 12e7fd77 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e7fd7a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7fd7d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e7fd7e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7fd80 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12e7fd82 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e7fd85 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7fd88 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7fd8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7fd8e cmp edx, dword ptr [ecx + 0x12e8e540] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x12e8e540))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7fd94 jne 0x12e7fe8e */
  if (!C.zf) goto L_12e7fe8e;
  /* 12e7fd9a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7fd9d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12e7fda0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7fda4 ja 0x12e7fdc7 */
  if ((!C.cf&&!C.zf)) goto L_12e7fdc7;
  /* 12e7fda6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7fdaa je 0x12e7fe39 */
  if (C.zf) goto L_12e7fe39;
  /* 12e7fdb0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7fdb4 je 0x12e7fde4 */
  if (C.zf) goto L_12e7fde4;
  /* 12e7fdb6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7fdba je 0x12e7fe06 */
  if (C.zf) goto L_12e7fe06;
  /* 12e7fdbc cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7fdc0 je 0x12e7fe28 */
  if (C.zf) goto L_12e7fe28;
  /* 12e7fdc2 jmp 0x12e7fe58 */
  goto L_12e7fe58;
L_12e7fdc7:;
  /* 12e7fdc7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7fdce je 0x12e7fdf5 */
  if (C.zf) goto L_12e7fdf5;
  /* 12e7fdd0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7fdd7 je 0x12e7fe17 */
  if (C.zf) goto L_12e7fe17;
  /* 12e7fdd9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7fde0 je 0x12e7fe4a */
  if (C.zf) goto L_12e7fe4a;
  /* 12e7fde2 jmp 0x12e7fe58 */
  goto L_12e7fe58;
L_12e7fde4:;
  /* 12e7fde4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7fde7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7fdea add ecx, 0x12e8e544 */
  { uint32_t _a=(ECX),_b=(0x12e8e544u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7fdf0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e7fdf3 jmp 0x12e7fe58 */
  goto L_12e7fe58;
L_12e7fdf5:;
  /* 12e7fdf5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7fdf8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7fdfb mov eax, dword ptr [edx + 0x12e8e54c] */
  EAX = (r32((uint32_t)(EDX + 0x12e8e54c)));
  /* 12e7fe01 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e7fe04 jmp 0x12e7fe58 */
  goto L_12e7fe58;
L_12e7fe06:;
  /* 12e7fe06 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7fe09 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7fe0c add ecx, 0x12e8e550 */
  { uint32_t _a=(ECX),_b=(0x12e8e550u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7fe12 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e7fe15 jmp 0x12e7fe58 */
  goto L_12e7fe58;
L_12e7fe17:;
  /* 12e7fe17 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7fe1a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7fe1d mov eax, dword ptr [edx + 0x12e8e554] */
  EAX = (r32((uint32_t)(EDX + 0x12e8e554)));
  /* 12e7fe23 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e7fe26 jmp 0x12e7fe58 */
  goto L_12e7fe58;
L_12e7fe28:;
  /* 12e7fe28 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7fe2b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7fe2e add ecx, 0x12e8e558 */
  { uint32_t _a=(ECX),_b=(0x12e8e558u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7fe34 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e7fe37 jmp 0x12e7fe58 */
  goto L_12e7fe58;
L_12e7fe39:;
  /* 12e7fe39 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7fe3c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7fe3f add edx, 0x12e8e55c */
  { uint32_t _a=(EDX),_b=(0x12e8e55cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7fe45 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12e7fe48 jmp 0x12e7fe58 */
  goto L_12e7fe58;
L_12e7fe4a:;
  /* 12e7fe4a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7fe4d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7fe50 add eax, 0x12e8e564 */
  { uint32_t _a=(EAX),_b=(0x12e8e564u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7fe55 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12e7fe58:;
  /* 12e7fe58 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7fe5c je 0x12e7fe64 */
  if (C.zf) goto L_12e7fe64;
  /* 12e7fe5e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7fe62 jge 0x12e7fe66 */
  if ((C.sf==C.of)) goto L_12e7fe66;
L_12e7fe64:;
  /* 12e7fe64 jmp 0x12e7feb8 */
  goto L_12e7feb8;
L_12e7fe66:;
  /* 12e7fe66 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e7fe69 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7fe6c push ecx */
  push32((uint32_t)(ECX));
  /* 12e7fe6d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7fe70 push edx */
  push32((uint32_t)(EDX));
  /* 12e7fe71 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7fe74 push eax */
  push32((uint32_t)(EAX));
  /* 12e7fe75 call 0x12e76c70 */
  push32(0x12e7fe7au); f_12e76c70();
  /* 12e7fe7a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7fe7d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7fe80 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7fe83 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 12e7fe87 mov eax, 1 */
  EAX = (0x1u);
  /* 12e7fe8c jmp 0x12e7fece */
  goto L_12e7fece;
L_12e7fe8e:;
  /* 12e7fe8e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7fe91 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7fe94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7fe97 cmp eax, dword ptr [edx + 0x12e8e540] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x12e8e540))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7fe9d jae 0x12e7feaa */
  if (!C.cf) goto L_12e7feaa;
  /* 12e7fe9f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7fea2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7fea5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e7fea8 jmp 0x12e7feb3 */
  goto L_12e7feb3;
L_12e7feaa:;
  /* 12e7feaa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e7fead add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7feb0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12e7feb3:;
  /* 12e7feb3 jmp 0x12e7fd6b */
  goto L_12e7fd6b;
L_12e7feb8:;
  /* 12e7feb8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e7febb push eax */
  push32((uint32_t)(EAX));
  /* 12e7febc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e7febf push ecx */
  push32((uint32_t)(ECX));
  /* 12e7fec0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e7fec3 push edx */
  push32((uint32_t)(EDX));
  /* 12e7fec4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7fec7 push eax */
  push32((uint32_t)(EAX));
  /* 12e7fec8 call dword ptr [0x12e922b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922b0))), 0x12e7feceu);
L_12e7fece:;
  /* 12e7fece mov esp, ebp */
  ESP = (EBP);
  /* 12e7fed0 pop ebp */
  EBP = (pop32());
  /* 12e7fed1 ret 0x10 */
  ESPCHK(0x12e7fd50u, _esp0);
  ESP += 20; return;
}

/* FUN_1000fee0 @ 0x12e7fee0 (118 bytes, 42 insns) */
void f_12e7fee0(void) {
  FTRACE(0x12e7fee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7fee0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7fee1 mov ebp, esp */
  EBP = (ESP);
  /* 12e7fee3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7fee6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12e7feed:;
  /* 12e7feed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7fef0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e7fef2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12e7fef5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12e7fef9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7fefc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7feff mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e7ff02 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e7ff04 je 0x12e7ff4f */
  if (C.zf) goto L_12e7ff4f;
  /* 12e7ff06 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12e7ff0a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7ff0d jl 0x12e7ff22 */
  if ((C.sf!=C.of)) goto L_12e7ff22;
  /* 12e7ff0f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12e7ff13 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7ff16 jg 0x12e7ff22 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e7ff22;
  /* 12e7ff18 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12e7ff1b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12e7ff1d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12e7ff20 jmp 0x12e7ff3c */
  goto L_12e7ff3c;
L_12e7ff22:;
  /* 12e7ff22 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12e7ff26 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7ff29 jl 0x12e7ff3c */
  if ((C.sf!=C.of)) goto L_12e7ff3c;
  /* 12e7ff2b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12e7ff2f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7ff32 jg 0x12e7ff3c */
  if ((!C.zf&&C.sf==C.of)) goto L_12e7ff3c;
  /* 12e7ff34 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12e7ff37 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12e7ff39 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_12e7ff3c:;
  /* 12e7ff3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7ff3f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12e7ff42 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12e7ff46 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12e7ff4a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e7ff4d jmp 0x12e7feed */
  goto L_12e7feed;
L_12e7ff4f:;
  /* 12e7ff4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e7ff52 mov esp, ebp */
  ESP = (EBP);
  /* 12e7ff54 pop ebp */
  EBP = (pop32());
  /* 12e7ff55 ret  */
  ESPCHK(0x12e7fee0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x12e7ff60 (101 bytes, 36 insns) */
void f_12e7ff60(void) {
  FTRACE(0x12e7ff60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7ff60 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7ff61 mov ebp, esp */
  EBP = (ESP);
  /* 12e7ff63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e7ff66 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e7ff6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7ff70 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e7ff72 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 12e7ff75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7ff78 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ff7b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12e7ff7e:;
  /* 12e7ff7e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12e7ff82 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7ff85 jl 0x12e7ff90 */
  if ((C.sf!=C.of)) goto L_12e7ff90;
  /* 12e7ff87 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12e7ff8b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7ff8e jle 0x12e7ffa2 */
  if ((C.zf||C.sf!=C.of)) goto L_12e7ffa2;
L_12e7ff90:;
  /* 12e7ff90 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12e7ff94 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7ff97 jl 0x12e7ffbe */
  if ((C.sf!=C.of)) goto L_12e7ffbe;
  /* 12e7ff99 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12e7ff9d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7ffa0 jg 0x12e7ffbe */
  if ((!C.zf&&C.sf==C.of)) goto L_12e7ffbe;
L_12e7ffa2:;
  /* 12e7ffa2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7ffa5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ffa8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e7ffab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7ffae mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e7ffb0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 12e7ffb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7ffb6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e7ffb9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12e7ffbc jmp 0x12e7ff7e */
  goto L_12e7ff7e;
L_12e7ffbe:;
  /* 12e7ffbe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e7ffc1 mov esp, ebp */
  ESP = (EBP);
  /* 12e7ffc3 pop ebp */
  EBP = (pop32());
  /* 12e7ffc4 ret  */
  ESPCHK(0x12e7ff60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ffd0 @ 0x12e7ffd0 (122 bytes, 39 insns) */
void f_12e7ffd0(void) {
  FTRACE(0x12e7ffd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e7ffd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e7ffd1 mov ebp, esp */
  EBP = (ESP);
  /* 12e7ffd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e7ffd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7ffd7 cmp eax, dword ptr [0x12e90fdc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e90fdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e7ffdd jae 0x12e80001 */
  if (!C.cf) goto L_12e80001;
  /* 12e7ffdf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7ffe2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12e7ffe5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e7ffe8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12e7ffeb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e7ffee mov eax, dword ptr [ecx*4 + 0x12e90ea0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12e90ea0)));
  /* 12e7fff5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12e7fffa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12e7fffd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e7ffff jne 0x12e8001c */
  if (!C.zf) goto L_12e8001c;
L_12e80001:;
  /* 12e80001 call 0x12e7b320 */
  push32(0x12e80006u); f_12e7b320();
  /* 12e80006 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12e8000c call 0x12e7b330 */
  push32(0x12e80011u); f_12e7b330();
  /* 12e80011 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12e80017 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e8001a jmp 0x12e80046 */
  goto L_12e80046;
L_12e8001c:;
  /* 12e8001c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e8001f push edx */
  push32((uint32_t)(EDX));
  /* 12e80020 call 0x12e7cb40 */
  push32(0x12e80025u); f_12e7cb40();
  /* 12e80025 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80028 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e8002b push eax */
  push32((uint32_t)(EAX));
  /* 12e8002c call 0x12e80050 */
  push32(0x12e80031u); f_12e80050();
  /* 12e80031 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80034 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e80037 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e8003a push ecx */
  push32((uint32_t)(ECX));
  /* 12e8003b call 0x12e7cbd0 */
  push32(0x12e80040u); f_12e7cbd0();
  /* 12e80040 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80043 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12e80046:;
  /* 12e80046 mov esp, ebp */
  ESP = (EBP);
  /* 12e80048 pop ebp */
  EBP = (pop32());
  /* 12e80049 ret  */
  ESPCHK(0x12e7ffd0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x12e80050 (170 bytes, 59 insns) */
void f_12e80050(void) {
  FTRACE(0x12e80050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e80050 push ebp */
  push32((uint32_t)(EBP));
  /* 12e80051 mov ebp, esp */
  EBP = (ESP);
  /* 12e80053 push ecx */
  push32((uint32_t)(ECX));
  /* 12e80054 push esi */
  push32((uint32_t)(ESI));
  /* 12e80055 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e80058 push eax */
  push32((uint32_t)(EAX));
  /* 12e80059 call 0x12e7c9c0 */
  push32(0x12e8005eu); f_12e7c9c0();
  /* 12e8005e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80061 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e80064 je 0x12e800a3 */
  if (C.zf) goto L_12e800a3;
  /* 12e80066 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8006a je 0x12e80072 */
  if (C.zf) goto L_12e80072;
  /* 12e8006c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e80070 jne 0x12e8008c */
  if (!C.zf) goto L_12e8008c;
L_12e80072:;
  /* 12e80072 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e80074 call 0x12e7c9c0 */
  push32(0x12e80079u); f_12e7c9c0();
  /* 12e80079 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e8007c mov esi, eax */
  ESI = (EAX);
  /* 12e8007e push 2 */
  push32((uint32_t)(0x2u));
  /* 12e80080 call 0x12e7c9c0 */
  push32(0x12e80085u); f_12e7c9c0();
  /* 12e80085 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80088 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8008a je 0x12e800a3 */
  if (C.zf) goto L_12e800a3;
L_12e8008c:;
  /* 12e8008c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e8008f push ecx */
  push32((uint32_t)(ECX));
  /* 12e80090 call 0x12e7c9c0 */
  push32(0x12e80095u); f_12e7c9c0();
  /* 12e80095 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80098 push eax */
  push32((uint32_t)(EAX));
  /* 12e80099 call dword ptr [0x12e922a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922a0))), 0x12e8009fu);
  /* 12e8009f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e800a1 je 0x12e800ac */
  if (C.zf) goto L_12e800ac;
L_12e800a3:;
  /* 12e800a3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e800aa jmp 0x12e800b5 */
  goto L_12e800b5;
L_12e800ac:;
  /* 12e800ac call dword ptr [0x12e92284] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92284))), 0x12e800b2u);
  /* 12e800b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e800b5:;
  /* 12e800b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e800b8 push edx */
  push32((uint32_t)(EDX));
  /* 12e800b9 call 0x12e7c8e0 */
  push32(0x12e800beu); f_12e7c8e0();
  /* 12e800be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e800c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e800c4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12e800c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e800ca and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12e800cd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e800d0 mov edx, dword ptr [eax*4 + 0x12e90ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12e90ea0)));
  /* 12e800d7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 12e800dc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e800e0 je 0x12e800f3 */
  if (C.zf) goto L_12e800f3;
  /* 12e800e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e800e5 push eax */
  push32((uint32_t)(EAX));
  /* 12e800e6 call 0x12e7b280 */
  push32(0x12e800ebu); f_12e7b280();
  /* 12e800eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e800ee or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e800f1 jmp 0x12e800f5 */
  goto L_12e800f5;
L_12e800f3:;
  /* 12e800f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e800f5:;
  /* 12e800f5 pop esi */
  ESI = (pop32());
  /* 12e800f6 mov esp, ebp */
  ESP = (EBP);
  /* 12e800f8 pop ebp */
  EBP = (pop32());
  /* 12e800f9 ret  */
  ESPCHK(0x12e80050u, _esp0);
  ESP += 4; return;
}

/* FUN_10010100 @ 0x12e80100 (146 bytes, 52 insns) */
void f_12e80100(void) {
  FTRACE(0x12e80100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e80100 push ebp */
  push32((uint32_t)(EBP));
  /* 12e80101 mov ebp, esp */
  EBP = (ESP);
  /* 12e80103 push ebx */
  push32((uint32_t)(EBX));
  /* 12e80104 push esi */
  push32((uint32_t)(ESI));
  /* 12e80105 push edi */
  push32((uint32_t)(EDI));
L_12e80106:;
  /* 12e80106 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8010a jne 0x12e8012a */
  if (!C.zf) goto L_12e8012a;
  /* 12e8010c push 0x12e8b0b0 */
  push32((uint32_t)(0x12e8b0b0u));
  /* 12e80111 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e80113 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12e80115 push 0x12e8b778 */
  push32((uint32_t)(0x12e8b778u));
  /* 12e8011a push 2 */
  push32((uint32_t)(0x2u));
  /* 12e8011c call 0x12e72510 */
  push32(0x12e80121u); f_12e72510();
  /* 12e80121 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80124 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e80127 jne 0x12e8012a */
  if (!C.zf) goto L_12e8012a;
  /* 12e80129 int3  */
  x86_unimpl("int3 @ 0x12e80129");
L_12e8012a:;
  /* 12e8012a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e8012c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e8012e jne 0x12e80106 */
  if (!C.zf) goto L_12e80106;
  /* 12e80130 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e80133 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12e80136 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 12e8013c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e8013e je 0x12e8018d */
  if (C.zf) goto L_12e8018d;
  /* 12e80140 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e80143 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12e80146 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12e80149 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e8014b je 0x12e8018d */
  if (C.zf) goto L_12e8018d;
  /* 12e8014d push 2 */
  push32((uint32_t)(0x2u));
  /* 12e8014f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e80152 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12e80155 push eax */
  push32((uint32_t)(EAX));
  /* 12e80156 call 0x12e73ee0 */
  push32(0x12e8015bu); f_12e73ee0();
  /* 12e8015b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e8015e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e80161 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12e80164 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 12e8016a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e8016d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12e80170 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e80173 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12e80179 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e8017c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12e80183 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e80186 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_12e8018d:;
  /* 12e8018d pop edi */
  EDI = (pop32());
  /* 12e8018e pop esi */
  ESI = (pop32());
  /* 12e8018f pop ebx */
  EBX = (pop32());
  /* 12e80190 pop ebp */
  EBP = (pop32());
  /* 12e80191 ret  */
  ESPCHK(0x12e80100u, _esp0);
  ESP += 4; return;
}

/* FUN_100101a0 @ 0x12e801a0 (289 bytes, 97 insns) */
void f_12e801a0(void) {
  FTRACE(0x12e801a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e801a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e801a1 mov ebp, esp */
  EBP = (ESP);
  /* 12e801a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e801a6 push esi */
  push32((uint32_t)(ESI));
  /* 12e801a7 mov eax, dword ptr [0x12e8ecb8] */
  EAX = (r32((uint32_t)(0x12e8ecb8)));
  /* 12e801ac mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e801af mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e801b6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12e801bd jmp 0x12e801c8 */
  goto L_12e801c8;
L_12e801bf:;
  /* 12e801bf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e801c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e801c5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12e801c8:;
  /* 12e801c8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e801cc jae 0x12e80201 */
  if (!C.cf) goto L_12e80201;
  /* 12e801ce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e801d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e801d4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12e801d7 push ecx */
  push32((uint32_t)(ECX));
  /* 12e801d8 call 0x12e76280 */
  push32(0x12e801ddu); f_12e76280();
  /* 12e801dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e801e0 mov esi, eax */
  ESI = (EAX);
  /* 12e801e2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e801e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e801e8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 12e801ec push ecx */
  push32((uint32_t)(ECX));
  /* 12e801ed call 0x12e76280 */
  push32(0x12e801f2u); f_12e76280();
  /* 12e801f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e801f5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e801f8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12e801fc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12e801ff jmp 0x12e801bf */
  goto L_12e801bf;
L_12e80201:;
  /* 12e80201 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e80204 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80207 push eax */
  push32((uint32_t)(EAX));
  /* 12e80208 call 0x12e73430 */
  push32(0x12e8020du); f_12e73430();
  /* 12e8020d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80210 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e80213 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e80217 je 0x12e802b9 */
  if (C.zf) goto L_12e802b9;
  /* 12e8021d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e80220 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12e80223 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12e8022a jmp 0x12e80235 */
  goto L_12e80235;
L_12e8022c:;
  /* 12e8022c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e8022f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80232 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12e80235:;
  /* 12e80235 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e80239 jae 0x12e802aa */
  if (!C.cf) goto L_12e802aa;
  /* 12e8023b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e8023e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12e80241 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e80244 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80247 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12e8024a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e8024d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e80250 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12e80253 push ecx */
  push32((uint32_t)(ECX));
  /* 12e80254 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e80257 push edx */
  push32((uint32_t)(EDX));
  /* 12e80258 call 0x12e76400 */
  push32(0x12e8025du); f_12e76400();
  /* 12e8025d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80260 push eax */
  push32((uint32_t)(EAX));
  /* 12e80261 call 0x12e76280 */
  push32(0x12e80266u); f_12e76280();
  /* 12e80266 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80269 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e8026c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e8026e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12e80271 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e80274 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12e80277 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e8027a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e8027d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12e80280 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e80283 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e80286 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 12e8028a push eax */
  push32((uint32_t)(EAX));
  /* 12e8028b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e8028e push ecx */
  push32((uint32_t)(ECX));
  /* 12e8028f call 0x12e76400 */
  push32(0x12e80294u); f_12e76400();
  /* 12e80294 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80297 push eax */
  push32((uint32_t)(EAX));
  /* 12e80298 call 0x12e76280 */
  push32(0x12e8029du); f_12e76280();
  /* 12e8029d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e802a0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e802a3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e802a5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12e802a8 jmp 0x12e8022c */
  goto L_12e8022c;
L_12e802aa:;
  /* 12e802aa mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e802ad mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12e802b0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e802b3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e802b6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12e802b9:;
  /* 12e802b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e802bc pop esi */
  ESI = (pop32());
  /* 12e802bd mov esp, ebp */
  ESP = (EBP);
  /* 12e802bf pop ebp */
  EBP = (pop32());
  /* 12e802c0 ret  */
  ESPCHK(0x12e801a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100102d0 @ 0x12e802d0 (291 bytes, 97 insns) */
void f_12e802d0(void) {
  FTRACE(0x12e802d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e802d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e802d1 mov ebp, esp */
  EBP = (ESP);
  /* 12e802d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e802d6 push esi */
  push32((uint32_t)(ESI));
  /* 12e802d7 mov eax, dword ptr [0x12e8ecb8] */
  EAX = (r32((uint32_t)(0x12e8ecb8)));
  /* 12e802dc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e802df mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e802e6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12e802ed jmp 0x12e802f8 */
  goto L_12e802f8;
L_12e802ef:;
  /* 12e802ef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e802f2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e802f5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12e802f8:;
  /* 12e802f8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e802fc jae 0x12e80332 */
  if (!C.cf) goto L_12e80332;
  /* 12e802fe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e80301 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e80304 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12e80308 push ecx */
  push32((uint32_t)(ECX));
  /* 12e80309 call 0x12e76280 */
  push32(0x12e8030eu); f_12e76280();
  /* 12e8030e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80311 mov esi, eax */
  ESI = (EAX);
  /* 12e80313 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e80316 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e80319 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 12e8031d push ecx */
  push32((uint32_t)(ECX));
  /* 12e8031e call 0x12e76280 */
  push32(0x12e80323u); f_12e76280();
  /* 12e80323 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80326 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80329 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12e8032d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12e80330 jmp 0x12e802ef */
  goto L_12e802ef;
L_12e80332:;
  /* 12e80332 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e80335 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80338 push eax */
  push32((uint32_t)(EAX));
  /* 12e80339 call 0x12e73430 */
  push32(0x12e8033eu); f_12e73430();
  /* 12e8033e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80341 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e80344 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e80348 je 0x12e803eb */
  if (C.zf) goto L_12e803eb;
  /* 12e8034e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e80351 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12e80354 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12e8035b jmp 0x12e80366 */
  goto L_12e80366;
L_12e8035d:;
  /* 12e8035d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e80360 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80363 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12e80366:;
  /* 12e80366 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8036a jae 0x12e803dc */
  if (!C.cf) goto L_12e803dc;
  /* 12e8036c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e8036f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12e80372 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e80375 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80378 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12e8037b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e8037e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e80381 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12e80385 push ecx */
  push32((uint32_t)(ECX));
  /* 12e80386 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e80389 push edx */
  push32((uint32_t)(EDX));
  /* 12e8038a call 0x12e76400 */
  push32(0x12e8038fu); f_12e76400();
  /* 12e8038f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80392 push eax */
  push32((uint32_t)(EAX));
  /* 12e80393 call 0x12e76280 */
  push32(0x12e80398u); f_12e76280();
  /* 12e80398 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e8039b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e8039e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e803a0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12e803a3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e803a6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12e803a9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e803ac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e803af mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12e803b2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e803b5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e803b8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12e803bc push eax */
  push32((uint32_t)(EAX));
  /* 12e803bd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e803c0 push ecx */
  push32((uint32_t)(ECX));
  /* 12e803c1 call 0x12e76400 */
  push32(0x12e803c6u); f_12e76400();
  /* 12e803c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e803c9 push eax */
  push32((uint32_t)(EAX));
  /* 12e803ca call 0x12e76280 */
  push32(0x12e803cfu); f_12e76280();
  /* 12e803cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e803d2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e803d5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e803d7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12e803da jmp 0x12e8035d */
  goto L_12e8035d;
L_12e803dc:;
  /* 12e803dc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e803df mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12e803e2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e803e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e803e8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12e803eb:;
  /* 12e803eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e803ee pop esi */
  ESI = (pop32());
  /* 12e803ef mov esp, ebp */
  ESP = (EBP);
  /* 12e803f1 pop ebp */
  EBP = (pop32());
  /* 12e803f2 ret  */
  ESPCHK(0x12e802d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010400 @ 0x12e80400 (878 bytes, 273 insns) */
void f_12e80400(void) {
  FTRACE(0x12e80400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e80400 push ebp */
  push32((uint32_t)(EBP));
  /* 12e80401 mov ebp, esp */
  EBP = (ESP);
  /* 12e80403 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e80406 push esi */
  push32((uint32_t)(ESI));
  /* 12e80407 mov eax, dword ptr [0x12e8ecb8] */
  EAX = (r32((uint32_t)(0x12e8ecb8)));
  /* 12e8040c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e8040f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e80416 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12e8041d jmp 0x12e80428 */
  goto L_12e80428;
L_12e8041f:;
  /* 12e8041f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e80422 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80425 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12e80428:;
  /* 12e80428 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8042c jae 0x12e80461 */
  if (!C.cf) goto L_12e80461;
  /* 12e8042e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e80431 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e80434 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12e80437 push ecx */
  push32((uint32_t)(ECX));
  /* 12e80438 call 0x12e76280 */
  push32(0x12e8043du); f_12e76280();
  /* 12e8043d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80440 mov esi, eax */
  ESI = (EAX);
  /* 12e80442 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e80445 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e80448 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 12e8044c push ecx */
  push32((uint32_t)(ECX));
  /* 12e8044d call 0x12e76280 */
  push32(0x12e80452u); f_12e76280();
  /* 12e80452 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80455 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80458 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12e8045c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12e8045f jmp 0x12e8041f */
  goto L_12e8041f;
L_12e80461:;
  /* 12e80461 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12e80468 jmp 0x12e80473 */
  goto L_12e80473;
L_12e8046a:;
  /* 12e8046a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e8046d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80470 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12e80473:;
  /* 12e80473 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e80477 jae 0x12e804ad */
  if (!C.cf) goto L_12e804ad;
  /* 12e80479 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e8047c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e8047f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12e80483 push eax */
  push32((uint32_t)(EAX));
  /* 12e80484 call 0x12e76280 */
  push32(0x12e80489u); f_12e76280();
  /* 12e80489 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e8048c mov esi, eax */
  ESI = (EAX);
  /* 12e8048e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e80491 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e80494 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12e80498 push eax */
  push32((uint32_t)(EAX));
  /* 12e80499 call 0x12e76280 */
  push32(0x12e8049eu); f_12e76280();
  /* 12e8049e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e804a1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e804a4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12e804a8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e804ab jmp 0x12e8046a */
  goto L_12e8046a;
L_12e804ad:;
  /* 12e804ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e804b0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12e804b6 push eax */
  push32((uint32_t)(EAX));
  /* 12e804b7 call 0x12e76280 */
  push32(0x12e804bcu); f_12e76280();
  /* 12e804bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e804bf mov esi, eax */
  ESI = (EAX);
  /* 12e804c1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e804c4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 12e804ca push edx */
  push32((uint32_t)(EDX));
  /* 12e804cb call 0x12e76280 */
  push32(0x12e804d0u); f_12e76280();
  /* 12e804d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e804d3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e804d6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12e804da mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e804dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e804e0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12e804e6 push edx */
  push32((uint32_t)(EDX));
  /* 12e804e7 call 0x12e76280 */
  push32(0x12e804ecu); f_12e76280();
  /* 12e804ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e804ef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e804f2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12e804f6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12e804f9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e804fc mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 12e80502 push ecx */
  push32((uint32_t)(ECX));
  /* 12e80503 call 0x12e76280 */
  push32(0x12e80508u); f_12e76280();
  /* 12e80508 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e8050b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e8050e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12e80512 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e80515 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e80518 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 12e8051e push edx */
  push32((uint32_t)(EDX));
  /* 12e8051f call 0x12e76280 */
  push32(0x12e80524u); f_12e76280();
  /* 12e80524 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80527 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e8052a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12e8052e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12e80531 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e80534 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80539 push eax */
  push32((uint32_t)(EAX));
  /* 12e8053a call 0x12e73430 */
  push32(0x12e8053fu); f_12e73430();
  /* 12e8053f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80542 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e80545 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e80549 je 0x12e80766 */
  if (C.zf) goto L_12e80766;
  /* 12e8054f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e80552 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12e80555 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e80558 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e8055e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12e80561 push 0xac */
  push32((uint32_t)(0xacu));
  /* 12e80566 mov eax, dword ptr [0x12e8ecb8] */
  EAX = (r32((uint32_t)(0x12e8ecb8)));
  /* 12e8056b push eax */
  push32((uint32_t)(EAX));
  /* 12e8056c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e8056f push ecx */
  push32((uint32_t)(ECX));
  /* 12e80570 call 0x12e79d30 */
  push32(0x12e80575u); f_12e79d30();
  /* 12e80575 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80578 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12e8057f jmp 0x12e8058a */
  goto L_12e8058a;
L_12e80581:;
  /* 12e80581 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e80584 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80587 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12e8058a:;
  /* 12e8058a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8058e jae 0x12e805fe */
  if (!C.cf) goto L_12e805fe;
  /* 12e80590 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e80593 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e80596 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e80599 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 12e8059c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e8059f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e805a2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12e805a5 push edx */
  push32((uint32_t)(EDX));
  /* 12e805a6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e805a9 push eax */
  push32((uint32_t)(EAX));
  /* 12e805aa call 0x12e76400 */
  push32(0x12e805afu); f_12e76400();
  /* 12e805af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e805b2 push eax */
  push32((uint32_t)(EAX));
  /* 12e805b3 call 0x12e76280 */
  push32(0x12e805b8u); f_12e76280();
  /* 12e805b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e805bb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e805be lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12e805c2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12e805c5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e805c8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e805cb mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e805ce mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 12e805d2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e805d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e805d8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 12e805dc push edx */
  push32((uint32_t)(EDX));
  /* 12e805dd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e805e0 push eax */
  push32((uint32_t)(EAX));
  /* 12e805e1 call 0x12e76400 */
  push32(0x12e805e6u); f_12e76400();
  /* 12e805e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e805e9 push eax */
  push32((uint32_t)(EAX));
  /* 12e805ea call 0x12e76280 */
  push32(0x12e805efu); f_12e76280();
  /* 12e805ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e805f2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e805f5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12e805f9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12e805fc jmp 0x12e80581 */
  goto L_12e80581;
L_12e805fe:;
  /* 12e805fe mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12e80605 jmp 0x12e80610 */
  goto L_12e80610;
L_12e80607:;
  /* 12e80607 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e8060a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e8060d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12e80610:;
  /* 12e80610 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e80614 jae 0x12e80686 */
  if (!C.cf) goto L_12e80686;
  /* 12e80616 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e80619 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e8061c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e8061f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 12e80623 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e80626 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e80629 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12e8062d push eax */
  push32((uint32_t)(EAX));
  /* 12e8062e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e80631 push ecx */
  push32((uint32_t)(ECX));
  /* 12e80632 call 0x12e76400 */
  push32(0x12e80637u); f_12e76400();
  /* 12e80637 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e8063a push eax */
  push32((uint32_t)(EAX));
  /* 12e8063b call 0x12e76280 */
  push32(0x12e80640u); f_12e76280();
  /* 12e80640 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80643 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e80646 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12e8064a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12e8064d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e80650 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e80653 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e80656 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 12e8065a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e8065d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e80660 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12e80664 push eax */
  push32((uint32_t)(EAX));
  /* 12e80665 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e80668 push ecx */
  push32((uint32_t)(ECX));
  /* 12e80669 call 0x12e76400 */
  push32(0x12e8066eu); f_12e76400();
  /* 12e8066e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80671 push eax */
  push32((uint32_t)(EAX));
  /* 12e80672 call 0x12e76280 */
  push32(0x12e80677u); f_12e76280();
  /* 12e80677 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e8067a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e8067d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12e80681 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12e80684 jmp 0x12e80607 */
  goto L_12e80607;
L_12e80686:;
  /* 12e80686 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e80689 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e8068c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 12e80692 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e80695 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 12e8069b push ecx */
  push32((uint32_t)(ECX));
  /* 12e8069c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e8069f push edx */
  push32((uint32_t)(EDX));
  /* 12e806a0 call 0x12e76400 */
  push32(0x12e806a5u); f_12e76400();
  /* 12e806a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e806a8 push eax */
  push32((uint32_t)(EAX));
  /* 12e806a9 call 0x12e76280 */
  push32(0x12e806aeu); f_12e76280();
  /* 12e806ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e806b1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e806b4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12e806b8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12e806bb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e806be mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e806c1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 12e806c7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e806ca mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12e806d0 push eax */
  push32((uint32_t)(EAX));
  /* 12e806d1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e806d4 push ecx */
  push32((uint32_t)(ECX));
  /* 12e806d5 call 0x12e76400 */
  push32(0x12e806dau); f_12e76400();
  /* 12e806da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e806dd push eax */
  push32((uint32_t)(EAX));
  /* 12e806de call 0x12e76280 */
  push32(0x12e806e3u); f_12e76280();
  /* 12e806e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e806e6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e806e9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12e806ed mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12e806f0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e806f3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e806f6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 12e806fc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e806ff mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 12e80705 push ecx */
  push32((uint32_t)(ECX));
  /* 12e80706 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e80709 push edx */
  push32((uint32_t)(EDX));
  /* 12e8070a call 0x12e76400 */
  push32(0x12e8070fu); f_12e76400();
  /* 12e8070f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80712 push eax */
  push32((uint32_t)(EAX));
  /* 12e80713 call 0x12e76280 */
  push32(0x12e80718u); f_12e76280();
  /* 12e80718 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e8071b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e8071e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12e80722 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12e80725 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e80728 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e8072b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 12e80731 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e80734 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 12e8073a push eax */
  push32((uint32_t)(EAX));
  /* 12e8073b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e8073e push ecx */
  push32((uint32_t)(ECX));
  /* 12e8073f call 0x12e76400 */
  push32(0x12e80744u); f_12e76400();
  /* 12e80744 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80747 push eax */
  push32((uint32_t)(EAX));
  /* 12e80748 call 0x12e76280 */
  push32(0x12e8074du); f_12e76280();
  /* 12e8074d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80750 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e80753 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12e80757 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12e8075a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e8075d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e80760 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_12e80766:;
  /* 12e80766 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e80769 pop esi */
  ESI = (pop32());
  /* 12e8076a mov esp, ebp */
  ESP = (EBP);
  /* 12e8076c pop ebp */
  EBP = (pop32());
  /* 12e8076d ret  */
  ESPCHK(0x12e80400u, _esp0);
  ESP += 4; return;
}

/* FUN_10010770 @ 0x12e80770 (31 bytes, 15 insns) */
void f_12e80770(void) {
  FTRACE(0x12e80770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e80770 push ebp */
  push32((uint32_t)(EBP));
  /* 12e80771 mov ebp, esp */
  EBP = (ESP);
  /* 12e80773 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e80775 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e80778 push eax */
  push32((uint32_t)(EAX));
  /* 12e80779 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e8077c push ecx */
  push32((uint32_t)(ECX));
  /* 12e8077d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e80780 push edx */
  push32((uint32_t)(EDX));
  /* 12e80781 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e80784 push eax */
  push32((uint32_t)(EAX));
  /* 12e80785 call 0x12e80790 */
  push32(0x12e8078au); f_12e80790();
  /* 12e8078a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e8078d pop ebp */
  EBP = (pop32());
  /* 12e8078e ret  */
  ESPCHK(0x12e80770u, _esp0);
  ESP += 4; return;
}

/* FUN_10010790 @ 0x12e80790 (394 bytes, 123 insns) */
void f_12e80790(void) {
  FTRACE(0x12e80790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e80790 push ebp */
  push32((uint32_t)(EBP));
  /* 12e80791 mov ebp, esp */
  EBP = (ESP);
  /* 12e80793 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e80796 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e80799 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e8079c push 0x12e8f85c */
  push32((uint32_t)(0x12e8f85cu));
  /* 12e807a1 call dword ptr [0x12e92328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92328))), 0x12e807a7u);
  /* 12e807a7 cmp dword ptr [0x12e8f84c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f84c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e807ae je 0x12e807ce */
  if (C.zf) goto L_12e807ce;
  /* 12e807b0 push 0x12e8f85c */
  push32((uint32_t)(0x12e8f85cu));
  /* 12e807b5 call dword ptr [0x12e92318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92318))), 0x12e807bbu);
  /* 12e807bb push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12e807bd call 0x12e76e50 */
  push32(0x12e807c2u); f_12e76e50();
  /* 12e807c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e807c5 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12e807cc jmp 0x12e807d5 */
  goto L_12e807d5;
L_12e807ce:;
  /* 12e807ce mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12e807d5:;
  /* 12e807d5 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e807d9 jne 0x12e807e6 */
  if (!C.zf) goto L_12e807e6;
  /* 12e807db mov ecx, dword ptr [0x12e8ecb8] */
  ECX = (r32((uint32_t)(0x12e8ecb8)));
  /* 12e807e1 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12e807e4 jmp 0x12e807ec */
  goto L_12e807ec;
L_12e807e6:;
  /* 12e807e6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e807e9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12e807ec:;
  /* 12e807ec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e807ef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e807f2:;
  /* 12e807f2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e807f6 jbe 0x12e808e3 */
  if ((C.cf||C.zf)) goto L_12e808e3;
  /* 12e807fc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e807ff mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e80801 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 12e80804 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e80808 je 0x12e80812 */
  if (C.zf) goto L_12e80812;
  /* 12e8080a cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e8080e je 0x12e80817 */
  if (C.zf) goto L_12e80817;
  /* 12e80810 jmp 0x12e80871 */
  goto L_12e80871;
L_12e80812:;
  /* 12e80812 jmp 0x12e808e3 */
  goto L_12e808e3;
L_12e80817:;
  /* 12e80817 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e8081a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e8081d mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12e80820 mov dword ptr [0x12e8f838], 0 */
  w32((uint32_t)(0x12e8f838), (0x0u));
  /* 12e8082a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e8082d movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e80830 cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e80833 jne 0x12e80848 */
  if (!C.zf) goto L_12e80848;
  /* 12e80835 mov dword ptr [0x12e8f838], 1 */
  w32((uint32_t)(0x12e8f838), (0x1u));
  /* 12e8083f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e80842 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80845 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12e80848:;
  /* 12e80848 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e8084b push ecx */
  push32((uint32_t)(ECX));
  /* 12e8084c lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12e8084f push edx */
  push32((uint32_t)(EDX));
  /* 12e80850 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12e80853 push eax */
  push32((uint32_t)(EAX));
  /* 12e80854 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e80857 push ecx */
  push32((uint32_t)(ECX));
  /* 12e80858 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e8085b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e8085d push eax */
  push32((uint32_t)(EAX));
  /* 12e8085e call 0x12e80920 */
  push32(0x12e80863u); f_12e80920();
  /* 12e80863 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80866 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e80869 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e8086c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12e8086f jmp 0x12e808de */
  goto L_12e808de;
L_12e80871:;
  /* 12e80871 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e80874 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e80876 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e80878 mov ecx, dword ptr [0x12e8dcb8] */
  ECX = (r32((uint32_t)(0x12e8dcb8)));
  /* 12e8087e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e80880 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12e80884 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12e8088a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e8088c je 0x12e808b9 */
  if (C.zf) goto L_12e808b9;
  /* 12e8088e cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e80892 jbe 0x12e808b9 */
  if ((C.cf||C.zf)) goto L_12e808b9;
  /* 12e80894 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e80897 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e8089a mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e8089c mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12e8089e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e808a1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e808a4 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e808a7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e808aa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e808ad mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12e808b0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e808b3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e808b6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12e808b9:;
  /* 12e808b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e808bc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e808bf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e808c1 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12e808c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e808c6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e808c9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e808cc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e808cf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e808d2 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12e808d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e808d8 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e808db mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12e808de:;
  /* 12e808de jmp 0x12e807f2 */
  goto L_12e807f2;
L_12e808e3:;
  /* 12e808e3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e808e7 je 0x12e808f5 */
  if (C.zf) goto L_12e808f5;
  /* 12e808e9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12e808eb call 0x12e76ef0 */
  push32(0x12e808f0u); f_12e76ef0();
  /* 12e808f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e808f3 jmp 0x12e80900 */
  goto L_12e80900;
L_12e808f5:;
  /* 12e808f5 push 0x12e8f85c */
  push32((uint32_t)(0x12e8f85cu));
  /* 12e808fa call dword ptr [0x12e92318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92318))), 0x12e80900u);
L_12e80900:;
  /* 12e80900 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e80904 jbe 0x12e80914 */
  if ((C.cf||C.zf)) goto L_12e80914;
  /* 12e80906 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e80909 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12e8090c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e8090f sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e80912 jmp 0x12e80916 */
  goto L_12e80916;
L_12e80914:;
  /* 12e80914 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e80916:;
  /* 12e80916 mov esp, ebp */
  ESP = (EBP);
  /* 12e80918 pop ebp */
  EBP = (pop32());
  /* 12e80919 ret  */
  ESPCHK(0x12e80790u, _esp0);
  ESP += 4; return;
}

/* FUN_10010920 @ 0x12e80920 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_12e80920(void) {
  FTRACE(0x12e80920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e80920 push ebp */
  push32((uint32_t)(EBP));
  /* 12e80921 mov ebp, esp */
  EBP = (ESP);
  /* 12e80923 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e80926 push esi */
  push32((uint32_t)(ESI));
  /* 12e80927 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 12e8092b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e8092e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e80931 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e80934 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e80937 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8093b ja 0x12e80e88 */
  if ((!C.cf&&!C.zf)) goto L_12e80e88;
  /* 12e80941 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e80944 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e80946 mov dl, byte ptr [eax + 0x12e80ee9] */
  DL = (r8((uint32_t)(EAX + 0x12e80ee9)));
  /* 12e8094c jmp dword ptr [edx*4 + 0x12e80e8d] */
  switch (EDX) {
    case 0: goto L_12e80e66;
    case 1: goto L_12e80975;
    case 2: goto L_12e809bb;
    case 3: goto L_12e80b08;
    case 4: goto L_12e80b30;
    case 5: goto L_12e80bcf;
    case 6: goto L_12e80c3b;
    case 7: goto L_12e80c64;
    case 8: goto L_12e80ca5;
    case 9: goto L_12e80d87;
    case 10: goto L_12e80dee;
    case 11: goto L_12e80e3b;
    case 12: goto L_12e80953;
    case 13: goto L_12e80998;
    case 14: goto L_12e809de;
    case 15: goto L_12e80ade;
    case 16: goto L_12e80b75;
    case 17: goto L_12e80ba2;
    case 18: goto L_12e80bf7;
    case 19: goto L_12e80c7b;
    case 20: goto L_12e80d29;
    case 21: goto L_12e80db8;
    case 22: goto L_12e80e88;
    default: x86_unimpl("switch@0x12e8094c out of table"); return;
  }
L_12e80953:;
  /* 12e80953 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e80956 push ecx */
  push32((uint32_t)(ECX));
  /* 12e80957 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e8095a push edx */
  push32((uint32_t)(EDX));
  /* 12e8095b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e8095e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12e80961 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e80964 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12e80967 push eax */
  push32((uint32_t)(EAX));
  /* 12e80968 call 0x12e80f40 */
  push32(0x12e8096du); f_12e80f40();
  /* 12e8096d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80970 jmp 0x12e80e88 */
  goto L_12e80e88;
L_12e80975:;
  /* 12e80975 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e80978 push ecx */
  push32((uint32_t)(ECX));
  /* 12e80979 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e8097c push edx */
  push32((uint32_t)(EDX));
  /* 12e8097d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e80980 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12e80983 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e80986 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 12e8098a push eax */
  push32((uint32_t)(EAX));
  /* 12e8098b call 0x12e80f40 */
  push32(0x12e80990u); f_12e80f40();
  /* 12e80990 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80993 jmp 0x12e80e88 */
  goto L_12e80e88;
L_12e80998:;
  /* 12e80998 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e8099b push ecx */
  push32((uint32_t)(ECX));
  /* 12e8099c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e8099f push edx */
  push32((uint32_t)(EDX));
  /* 12e809a0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e809a3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e809a6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e809a9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12e809ad push eax */
  push32((uint32_t)(EAX));
  /* 12e809ae call 0x12e80f40 */
  push32(0x12e809b3u); f_12e80f40();
  /* 12e809b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e809b6 jmp 0x12e80e88 */
  goto L_12e80e88;
L_12e809bb:;
  /* 12e809bb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e809be push ecx */
  push32((uint32_t)(ECX));
  /* 12e809bf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e809c2 push edx */
  push32((uint32_t)(EDX));
  /* 12e809c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e809c6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12e809c9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e809cc mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12e809d0 push eax */
  push32((uint32_t)(EAX));
  /* 12e809d1 call 0x12e80f40 */
  push32(0x12e809d6u); f_12e80f40();
  /* 12e809d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e809d9 jmp 0x12e80e88 */
  goto L_12e80e88;
L_12e809de:;
  /* 12e809de cmp dword ptr [0x12e8f838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e809e5 je 0x12e80a66 */
  if (C.zf) goto L_12e80a66;
  /* 12e809e7 mov dword ptr [0x12e8f838], 0 */
  w32((uint32_t)(0x12e8f838), (0x0u));
  /* 12e809f1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e809f4 push ecx */
  push32((uint32_t)(ECX));
  /* 12e809f5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e809f8 push edx */
  push32((uint32_t)(EDX));
  /* 12e809f9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e809fc push eax */
  push32((uint32_t)(EAX));
  /* 12e809fd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e80a00 push ecx */
  push32((uint32_t)(ECX));
  /* 12e80a01 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e80a04 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 12e80a0a push eax */
  push32((uint32_t)(EAX));
  /* 12e80a0b call 0x12e810f0 */
  push32(0x12e80a10u); f_12e810f0();
  /* 12e80a10 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80a13 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e80a16 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e80a19 jne 0x12e80a20 */
  if (!C.zf) goto L_12e80a20;
  /* 12e80a1b jmp 0x12e80e88 */
  goto L_12e80e88;
L_12e80a20:;
  /* 12e80a20 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e80a23 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e80a25 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12e80a28 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e80a2b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e80a2d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80a30 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e80a33 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e80a35 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e80a38 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e80a3a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e80a3d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e80a40 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e80a42 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e80a45 push ecx */
  push32((uint32_t)(ECX));
  /* 12e80a46 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e80a49 push edx */
  push32((uint32_t)(EDX));
  /* 12e80a4a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e80a4d push eax */
  push32((uint32_t)(EAX));
  /* 12e80a4e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e80a51 push ecx */
  push32((uint32_t)(ECX));
  /* 12e80a52 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e80a55 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12e80a5b push eax */
  push32((uint32_t)(EAX));
  /* 12e80a5c call 0x12e810f0 */
  push32(0x12e80a61u); f_12e810f0();
  /* 12e80a61 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80a64 jmp 0x12e80ad9 */
  goto L_12e80ad9;
L_12e80a66:;
  /* 12e80a66 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e80a69 push ecx */
  push32((uint32_t)(ECX));
  /* 12e80a6a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e80a6d push edx */
  push32((uint32_t)(EDX));
  /* 12e80a6e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e80a71 push eax */
  push32((uint32_t)(EAX));
  /* 12e80a72 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e80a75 push ecx */
  push32((uint32_t)(ECX));
  /* 12e80a76 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e80a79 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12e80a7f push eax */
  push32((uint32_t)(EAX));
  /* 12e80a80 call 0x12e810f0 */
  push32(0x12e80a85u); f_12e810f0();
  /* 12e80a85 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80a88 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e80a8b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e80a8e jne 0x12e80a95 */
  if (!C.zf) goto L_12e80a95;
  /* 12e80a90 jmp 0x12e80e88 */
  goto L_12e80e88;
L_12e80a95:;
  /* 12e80a95 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e80a98 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e80a9a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12e80a9d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e80aa0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e80aa2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80aa5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e80aa8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e80aaa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e80aad mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e80aaf sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e80ab2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e80ab5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e80ab7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e80aba push ecx */
  push32((uint32_t)(ECX));
  /* 12e80abb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e80abe push edx */
  push32((uint32_t)(EDX));
  /* 12e80abf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e80ac2 push eax */
  push32((uint32_t)(EAX));
  /* 12e80ac3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e80ac6 push ecx */
  push32((uint32_t)(ECX));
  /* 12e80ac7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e80aca mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12e80ad0 push eax */
  push32((uint32_t)(EAX));
  /* 12e80ad1 call 0x12e810f0 */
  push32(0x12e80ad6u); f_12e810f0();
  /* 12e80ad6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e80ad9:;
  /* 12e80ad9 jmp 0x12e80e88 */
  goto L_12e80e88;
L_12e80ade:;
  /* 12e80ade mov ecx, dword ptr [0x12e8f838] */
  ECX = (r32((uint32_t)(0x12e8f838)));
  /* 12e80ae4 mov dword ptr [0x12e8f848], ecx */
  w32((uint32_t)(0x12e8f848), (ECX));
  /* 12e80aea mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e80aed push edx */
  push32((uint32_t)(EDX));
  /* 12e80aee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e80af1 push eax */
  push32((uint32_t)(EAX));
  /* 12e80af2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e80af4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e80af7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12e80afa push edx */
  push32((uint32_t)(EDX));
  /* 12e80afb call 0x12e80f90 */
  push32(0x12e80b00u); f_12e80f90();
  /* 12e80b00 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80b03 jmp 0x12e80e88 */
  goto L_12e80e88;
L_12e80b08:;
  /* 12e80b08 mov eax, dword ptr [0x12e8f838] */
  EAX = (r32((uint32_t)(0x12e8f838)));
  /* 12e80b0d mov dword ptr [0x12e8f848], eax */
  w32((uint32_t)(0x12e8f848), (EAX));
  /* 12e80b12 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e80b15 push ecx */
  push32((uint32_t)(ECX));
  /* 12e80b16 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e80b19 push edx */
  push32((uint32_t)(EDX));
  /* 12e80b1a push 2 */
  push32((uint32_t)(0x2u));
  /* 12e80b1c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e80b1f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12e80b22 push ecx */
  push32((uint32_t)(ECX));
  /* 12e80b23 call 0x12e80f90 */
  push32(0x12e80b28u); f_12e80f90();
  /* 12e80b28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80b2b jmp 0x12e80e88 */
  goto L_12e80e88;
L_12e80b30:;
  /* 12e80b30 mov edx, dword ptr [0x12e8f838] */
  EDX = (r32((uint32_t)(0x12e8f838)));
  /* 12e80b36 mov dword ptr [0x12e8f848], edx */
  w32((uint32_t)(0x12e8f848), (EDX));
  /* 12e80b3c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e80b3f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 12e80b42 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e80b43 mov ecx, 0xc */
  ECX = (0xcu);
  /* 12e80b48 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e80b4a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e80b4d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e80b51 jne 0x12e80b5a */
  if (!C.zf) goto L_12e80b5a;
  /* 12e80b53 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_12e80b5a:;
  /* 12e80b5a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e80b5d push edx */
  push32((uint32_t)(EDX));
  /* 12e80b5e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e80b61 push eax */
  push32((uint32_t)(EAX));
  /* 12e80b62 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e80b64 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e80b67 push ecx */
  push32((uint32_t)(ECX));
  /* 12e80b68 call 0x12e80f90 */
  push32(0x12e80b6du); f_12e80f90();
  /* 12e80b6d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80b70 jmp 0x12e80e88 */
  goto L_12e80e88;
L_12e80b75:;
  /* 12e80b75 mov edx, dword ptr [0x12e8f838] */
  EDX = (r32((uint32_t)(0x12e8f838)));
  /* 12e80b7b mov dword ptr [0x12e8f848], edx */
  w32((uint32_t)(0x12e8f848), (EDX));
  /* 12e80b81 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e80b84 push eax */
  push32((uint32_t)(EAX));
  /* 12e80b85 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e80b88 push ecx */
  push32((uint32_t)(ECX));
  /* 12e80b89 push 3 */
  push32((uint32_t)(0x3u));
  /* 12e80b8b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e80b8e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12e80b91 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80b94 push eax */
  push32((uint32_t)(EAX));
  /* 12e80b95 call 0x12e80f90 */
  push32(0x12e80b9au); f_12e80f90();
  /* 12e80b9a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80b9d jmp 0x12e80e88 */
  goto L_12e80e88;
L_12e80ba2:;
  /* 12e80ba2 mov ecx, dword ptr [0x12e8f838] */
  ECX = (r32((uint32_t)(0x12e8f838)));
  /* 12e80ba8 mov dword ptr [0x12e8f848], ecx */
  w32((uint32_t)(0x12e8f848), (ECX));
  /* 12e80bae mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e80bb1 push edx */
  push32((uint32_t)(EDX));
  /* 12e80bb2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e80bb5 push eax */
  push32((uint32_t)(EAX));
  /* 12e80bb6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e80bb8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e80bbb mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12e80bbe add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80bc1 push edx */
  push32((uint32_t)(EDX));
  /* 12e80bc2 call 0x12e80f90 */
  push32(0x12e80bc7u); f_12e80f90();
  /* 12e80bc7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80bca jmp 0x12e80e88 */
  goto L_12e80e88;
L_12e80bcf:;
  /* 12e80bcf mov eax, dword ptr [0x12e8f838] */
  EAX = (r32((uint32_t)(0x12e8f838)));
  /* 12e80bd4 mov dword ptr [0x12e8f848], eax */
  w32((uint32_t)(0x12e8f848), (EAX));
  /* 12e80bd9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e80bdc push ecx */
  push32((uint32_t)(ECX));
  /* 12e80bdd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e80be0 push edx */
  push32((uint32_t)(EDX));
  /* 12e80be1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e80be3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e80be6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12e80be9 push ecx */
  push32((uint32_t)(ECX));
  /* 12e80bea call 0x12e80f90 */
  push32(0x12e80befu); f_12e80f90();
  /* 12e80bef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80bf2 jmp 0x12e80e88 */
  goto L_12e80e88;
L_12e80bf7:;
  /* 12e80bf7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e80bfa cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e80bfe jg 0x12e80c1c */
  if ((!C.zf&&C.sf==C.of)) goto L_12e80c1c;
  /* 12e80c00 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e80c03 push eax */
  push32((uint32_t)(EAX));
  /* 12e80c04 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e80c07 push ecx */
  push32((uint32_t)(ECX));
  /* 12e80c08 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e80c0b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12e80c11 push eax */
  push32((uint32_t)(EAX));
  /* 12e80c12 call 0x12e80f40 */
  push32(0x12e80c17u); f_12e80f40();
  /* 12e80c17 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80c1a jmp 0x12e80c36 */
  goto L_12e80c36;
L_12e80c1c:;
  /* 12e80c1c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e80c1f push ecx */
  push32((uint32_t)(ECX));
  /* 12e80c20 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e80c23 push edx */
  push32((uint32_t)(EDX));
  /* 12e80c24 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e80c27 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12e80c2d push ecx */
  push32((uint32_t)(ECX));
  /* 12e80c2e call 0x12e80f40 */
  push32(0x12e80c33u); f_12e80f40();
  /* 12e80c33 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e80c36:;
  /* 12e80c36 jmp 0x12e80e88 */
  goto L_12e80e88;
L_12e80c3b:;
  /* 12e80c3b mov edx, dword ptr [0x12e8f838] */
  EDX = (r32((uint32_t)(0x12e8f838)));
  /* 12e80c41 mov dword ptr [0x12e8f848], edx */
  w32((uint32_t)(0x12e8f848), (EDX));
  /* 12e80c47 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e80c4a push eax */
  push32((uint32_t)(EAX));
  /* 12e80c4b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e80c4e push ecx */
  push32((uint32_t)(ECX));
  /* 12e80c4f push 2 */
  push32((uint32_t)(0x2u));
  /* 12e80c51 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e80c54 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e80c56 push eax */
  push32((uint32_t)(EAX));
  /* 12e80c57 call 0x12e80f90 */
  push32(0x12e80c5cu); f_12e80f90();
  /* 12e80c5c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80c5f jmp 0x12e80e88 */
  goto L_12e80e88;
L_12e80c64:;
  /* 12e80c64 mov ecx, dword ptr [0x12e8f838] */
  ECX = (r32((uint32_t)(0x12e8f838)));
  /* 12e80c6a mov dword ptr [0x12e8f848], ecx */
  w32((uint32_t)(0x12e8f848), (ECX));
  /* 12e80c70 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e80c73 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12e80c76 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e80c79 jmp 0x12e80ccd */
  goto L_12e80ccd;
L_12e80c7b:;
  /* 12e80c7b mov ecx, dword ptr [0x12e8f838] */
  ECX = (r32((uint32_t)(0x12e8f838)));
  /* 12e80c81 mov dword ptr [0x12e8f848], ecx */
  w32((uint32_t)(0x12e8f848), (ECX));
  /* 12e80c87 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e80c8a push edx */
  push32((uint32_t)(EDX));
  /* 12e80c8b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e80c8e push eax */
  push32((uint32_t)(EAX));
  /* 12e80c8f push 1 */
  push32((uint32_t)(0x1u));
  /* 12e80c91 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e80c94 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12e80c97 push edx */
  push32((uint32_t)(EDX));
  /* 12e80c98 call 0x12e80f90 */
  push32(0x12e80c9du); f_12e80f90();
  /* 12e80c9d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80ca0 jmp 0x12e80e88 */
  goto L_12e80e88;
L_12e80ca5:;
  /* 12e80ca5 mov eax, dword ptr [0x12e8f838] */
  EAX = (r32((uint32_t)(0x12e8f838)));
  /* 12e80caa mov dword ptr [0x12e8f848], eax */
  w32((uint32_t)(0x12e8f848), (EAX));
  /* 12e80caf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e80cb2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e80cb6 jne 0x12e80cc1 */
  if (!C.zf) goto L_12e80cc1;
  /* 12e80cb8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 12e80cbf jmp 0x12e80ccd */
  goto L_12e80ccd;
L_12e80cc1:;
  /* 12e80cc1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e80cc4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12e80cc7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e80cca mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12e80ccd:;
  /* 12e80ccd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e80cd0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12e80cd3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e80cd6 jge 0x12e80ce1 */
  if ((C.sf==C.of)) goto L_12e80ce1;
  /* 12e80cd8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e80cdf jmp 0x12e80d0e */
  goto L_12e80d0e;
L_12e80ce1:;
  /* 12e80ce1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e80ce4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12e80ce7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e80ce8 mov ecx, 7 */
  ECX = (0x7u);
  /* 12e80ced idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e80cef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e80cf2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e80cf5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12e80cf8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e80cf9 mov ecx, 7 */
  ECX = (0x7u);
  /* 12e80cfe idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e80d00 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e80d03 jl 0x12e80d0e */
  if ((C.sf!=C.of)) goto L_12e80d0e;
  /* 12e80d05 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e80d08 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80d0b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12e80d0e:;
  /* 12e80d0e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e80d11 push eax */
  push32((uint32_t)(EAX));
  /* 12e80d12 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e80d15 push ecx */
  push32((uint32_t)(ECX));
  /* 12e80d16 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e80d18 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e80d1b push edx */
  push32((uint32_t)(EDX));
  /* 12e80d1c call 0x12e80f90 */
  push32(0x12e80d21u); f_12e80f90();
  /* 12e80d21 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80d24 jmp 0x12e80e88 */
  goto L_12e80e88;
L_12e80d29:;
  /* 12e80d29 cmp dword ptr [0x12e8f838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e80d30 je 0x12e80d60 */
  if (C.zf) goto L_12e80d60;
  /* 12e80d32 mov dword ptr [0x12e8f838], 0 */
  w32((uint32_t)(0x12e8f838), (0x0u));
  /* 12e80d3c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e80d3f push eax */
  push32((uint32_t)(EAX));
  /* 12e80d40 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e80d43 push ecx */
  push32((uint32_t)(ECX));
  /* 12e80d44 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e80d47 push edx */
  push32((uint32_t)(EDX));
  /* 12e80d48 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e80d4b push eax */
  push32((uint32_t)(EAX));
  /* 12e80d4c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e80d4f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12e80d55 push edx */
  push32((uint32_t)(EDX));
  /* 12e80d56 call 0x12e810f0 */
  push32(0x12e80d5bu); f_12e810f0();
  /* 12e80d5b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80d5e jmp 0x12e80d82 */
  goto L_12e80d82;
L_12e80d60:;
  /* 12e80d60 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e80d63 push eax */
  push32((uint32_t)(EAX));
  /* 12e80d64 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e80d67 push ecx */
  push32((uint32_t)(ECX));
  /* 12e80d68 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e80d6b push edx */
  push32((uint32_t)(EDX));
  /* 12e80d6c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e80d6f push eax */
  push32((uint32_t)(EAX));
  /* 12e80d70 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e80d73 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12e80d79 push edx */
  push32((uint32_t)(EDX));
  /* 12e80d7a call 0x12e810f0 */
  push32(0x12e80d7fu); f_12e810f0();
  /* 12e80d7f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e80d82:;
  /* 12e80d82 jmp 0x12e80e88 */
  goto L_12e80e88;
L_12e80d87:;
  /* 12e80d87 mov dword ptr [0x12e8f838], 0 */
  w32((uint32_t)(0x12e8f838), (0x0u));
  /* 12e80d91 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e80d94 push eax */
  push32((uint32_t)(EAX));
  /* 12e80d95 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e80d98 push ecx */
  push32((uint32_t)(ECX));
  /* 12e80d99 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e80d9c push edx */
  push32((uint32_t)(EDX));
  /* 12e80d9d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e80da0 push eax */
  push32((uint32_t)(EAX));
  /* 12e80da1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e80da4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 12e80daa push edx */
  push32((uint32_t)(EDX));
  /* 12e80dab call 0x12e810f0 */
  push32(0x12e80db0u); f_12e810f0();
  /* 12e80db0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80db3 jmp 0x12e80e88 */
  goto L_12e80e88;
L_12e80db8:;
  /* 12e80db8 mov eax, dword ptr [0x12e8f838] */
  EAX = (r32((uint32_t)(0x12e8f838)));
  /* 12e80dbd mov dword ptr [0x12e8f848], eax */
  w32((uint32_t)(0x12e8f848), (EAX));
  /* 12e80dc2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e80dc5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12e80dc8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e80dc9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12e80dce idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e80dd0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e80dd3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e80dd6 push edx */
  push32((uint32_t)(EDX));
  /* 12e80dd7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e80dda push eax */
  push32((uint32_t)(EAX));
  /* 12e80ddb push 2 */
  push32((uint32_t)(0x2u));
  /* 12e80ddd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e80de0 push ecx */
  push32((uint32_t)(ECX));
  /* 12e80de1 call 0x12e80f90 */
  push32(0x12e80de6u); f_12e80f90();
  /* 12e80de6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80de9 jmp 0x12e80e88 */
  goto L_12e80e88;
L_12e80dee:;
  /* 12e80dee mov edx, dword ptr [0x12e8f838] */
  EDX = (r32((uint32_t)(0x12e8f838)));
  /* 12e80df4 mov dword ptr [0x12e8f848], edx */
  w32((uint32_t)(0x12e8f848), (EDX));
  /* 12e80dfa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e80dfd mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 12e80e00 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e80e01 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12e80e06 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e80e08 mov ecx, eax */
  ECX = (EAX);
  /* 12e80e0a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80e0d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e80e10 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e80e13 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e80e16 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e80e17 mov esi, 0x64 */
  ESI = (0x64u);
  /* 12e80e1c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e80e1e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80e20 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e80e23 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e80e26 push eax */
  push32((uint32_t)(EAX));
  /* 12e80e27 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e80e2a push ecx */
  push32((uint32_t)(ECX));
  /* 12e80e2b push 4 */
  push32((uint32_t)(0x4u));
  /* 12e80e2d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e80e30 push edx */
  push32((uint32_t)(EDX));
  /* 12e80e31 call 0x12e80f90 */
  push32(0x12e80e36u); f_12e80f90();
  /* 12e80e36 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80e39 jmp 0x12e80e88 */
  goto L_12e80e88;
L_12e80e3b:;
  /* 12e80e3b call 0x12e81f50 */
  push32(0x12e80e40u); f_12e81f50();
  /* 12e80e40 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e80e43 push eax */
  push32((uint32_t)(EAX));
  /* 12e80e44 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e80e47 push ecx */
  push32((uint32_t)(ECX));
  /* 12e80e48 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e80e4b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e80e4d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e80e51 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 12e80e54 mov ecx, dword ptr [eax*4 + 0x12e8ee3c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12e8ee3c)));
  /* 12e80e5b push ecx */
  push32((uint32_t)(ECX));
  /* 12e80e5c call 0x12e80f40 */
  push32(0x12e80e61u); f_12e80f40();
  /* 12e80e61 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80e64 jmp 0x12e80e88 */
  goto L_12e80e88;
L_12e80e66:;
  /* 12e80e66 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e80e69 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e80e6b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 12e80e6e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e80e71 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e80e73 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80e76 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e80e79 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e80e7b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e80e7e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e80e80 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e80e83 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e80e86 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12e80e88:;
  /* 12e80e88 pop esi */
  ESI = (pop32());
  /* 12e80e89 mov esp, ebp */
  ESP = (EBP);
  /* 12e80e8b pop ebp */
  EBP = (pop32());
  /* 12e80e8c ret  */
  ESPCHK(0x12e80920u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x12e80f40 (72 bytes, 30 insns) */
void f_12e80f40(void) {
  FTRACE(0x12e80f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e80f40 push ebp */
  push32((uint32_t)(EBP));
  /* 12e80f41 mov ebp, esp */
  EBP = (ESP);
L_12e80f43:;
  /* 12e80f43 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e80f46 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e80f49 je 0x12e80f86 */
  if (C.zf) goto L_12e80f86;
  /* 12e80f4b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e80f4e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e80f51 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e80f53 je 0x12e80f86 */
  if (C.zf) goto L_12e80f86;
  /* 12e80f55 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e80f58 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e80f5a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e80f5d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e80f5f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12e80f61 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e80f64 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e80f66 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80f69 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e80f6c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e80f6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e80f71 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80f74 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12e80f77 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e80f7a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e80f7c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e80f7f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e80f82 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12e80f84 jmp 0x12e80f43 */
  goto L_12e80f43;
L_12e80f86:;
  /* 12e80f86 pop ebp */
  EBP = (pop32());
  /* 12e80f87 ret  */
  ESPCHK(0x12e80f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f90 @ 0x12e80f90 (173 bytes, 64 insns) */
void f_12e80f90(void) {
  FTRACE(0x12e80f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e80f90 push ebp */
  push32((uint32_t)(EBP));
  /* 12e80f91 mov ebp, esp */
  EBP = (ESP);
  /* 12e80f93 push ecx */
  push32((uint32_t)(ECX));
  /* 12e80f94 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e80f9b cmp dword ptr [0x12e8f848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e80fa2 je 0x12e80fba */
  if (C.zf) goto L_12e80fba;
  /* 12e80fa4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e80fa7 push eax */
  push32((uint32_t)(EAX));
  /* 12e80fa8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e80fab push ecx */
  push32((uint32_t)(ECX));
  /* 12e80fac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e80faf push edx */
  push32((uint32_t)(EDX));
  /* 12e80fb0 call 0x12e81040 */
  push32(0x12e80fb5u); f_12e81040();
  /* 12e80fb5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80fb8 jmp 0x12e81039 */
  goto L_12e81039;
L_12e80fba:;
  /* 12e80fba mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e80fbd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e80fc0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e80fc2 jae 0x12e81030 */
  if (!C.cf) goto L_12e81030;
  /* 12e80fc4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e80fc7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e80fca mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12e80fcd jmp 0x12e80fd8 */
  goto L_12e80fd8;
L_12e80fcf:;
  /* 12e80fcf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e80fd2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e80fd5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_12e80fd8:;
  /* 12e80fd8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e80fdb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80fde test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e80fe0 je 0x12e81014 */
  if (C.zf) goto L_12e81014;
  /* 12e80fe2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e80fe5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e80fe6 mov ecx, 0xa */
  ECX = (0xau);
  /* 12e80feb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e80fed add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e80ff0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e80ff3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e80ff5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e80ff8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 12e80ffb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e80ffe cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e80fff mov ecx, 0xa */
  ECX = (0xau);
  /* 12e81004 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e81006 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e81009 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e8100c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e8100f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e81012 jmp 0x12e80fcf */
  goto L_12e80fcf;
L_12e81014:;
  /* 12e81014 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e81017 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e81019 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e8101c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e8101f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12e81021 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e81024 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e81026 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e81029 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e8102c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12e8102e jmp 0x12e81039 */
  goto L_12e81039;
L_12e81030:;
  /* 12e81030 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e81033 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12e81039:;
  /* 12e81039 mov esp, ebp */
  ESP = (EBP);
  /* 12e8103b pop ebp */
  EBP = (pop32());
  /* 12e8103c ret  */
  ESPCHK(0x12e80f90u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x12e81040 (172 bytes, 65 insns) */
void f_12e81040(void) {
  FTRACE(0x12e81040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e81040 push ebp */
  push32((uint32_t)(EBP));
  /* 12e81041 mov ebp, esp */
  EBP = (ESP);
  /* 12e81043 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e81046 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e81049 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e8104b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e8104e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e81051 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81054 jbe 0x12e8109b */
  if ((C.cf||C.zf)) goto L_12e8109b;
L_12e81056:;
  /* 12e81056 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e81059 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e8105a mov ecx, 0xa */
  ECX = (0xau);
  /* 12e8105f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e81061 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e81064 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e81067 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12e81069 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e8106c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e8106f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e81072 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e81075 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e81077 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e8107a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e8107d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12e8107f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e81082 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e81083 mov ecx, 0xa */
  ECX = (0xau);
  /* 12e81088 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e8108a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e8108d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81091 jle 0x12e8109b */
  if ((C.zf||C.sf!=C.of)) goto L_12e8109b;
  /* 12e81093 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e81096 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81099 ja 0x12e81056 */
  if ((!C.cf&&!C.zf)) goto L_12e81056;
L_12e8109b:;
  /* 12e8109b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e8109e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e810a0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e810a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e810a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e810a9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12e810ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e810ae sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e810b1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12e810b4:;
  /* 12e810b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e810b7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e810b9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 12e810bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e810bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e810c2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e810c4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12e810c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e810c9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e810cc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e810cf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e810d2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12e810d5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12e810d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e810da add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e810dd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e810e0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e810e3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e810e6 jb 0x12e810b4 */
  if (C.cf) goto L_12e810b4;
  /* 12e810e8 mov esp, ebp */
  ESP = (EBP);
  /* 12e810ea pop ebp */
  EBP = (pop32());
  /* 12e810eb ret  */
  ESPCHK(0x12e81040u, _esp0);
  ESP += 4; return;
}

/* FUN_100110f0 @ 0x12e810f0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_12e810f0(void) {
  FTRACE(0x12e810f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e810f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e810f1 mov ebp, esp */
  EBP = (ESP);
  /* 12e810f3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12e810f6:;
  /* 12e810f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e810f9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e810fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e810fe je 0x12e8156c */
  if (C.zf) goto L_12e8156c;
  /* 12e81104 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e81107 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8110a je 0x12e8156c */
  if (C.zf) goto L_12e8156c;
  /* 12e81110 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 12e81114 mov dword ptr [0x12e8f848], 0 */
  w32((uint32_t)(0x12e8f848), (0x0u));
  /* 12e8111e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12e81125 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e81128 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e8112b jmp 0x12e81136 */
  goto L_12e81136;
L_12e8112d:;
  /* 12e8112d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e81130 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e81133 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12e81136:;
  /* 12e81136 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e81139 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e8113c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e8113f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e81142 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e81145 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e81148 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e8114b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8114d jne 0x12e81151 */
  if (!C.zf) goto L_12e81151;
  /* 12e8114f jmp 0x12e8112d */
  goto L_12e8112d;
L_12e81151:;
  /* 12e81151 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e81154 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e81157 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e8115a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e8115d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e81160 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12e81163 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e81166 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e81169 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12e8116c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81170 ja 0x12e814c0 */
  if ((!C.cf&&!C.zf)) goto L_12e814c0;
  /* 12e81176 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e81179 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e8117b mov al, byte ptr [ecx + 0x12e8159c] */
  AL = (r8((uint32_t)(ECX + 0x12e8159c)));
  /* 12e81181 jmp dword ptr [eax*4 + 0x12e81570] */
  switch (EAX) {
    case 0: goto L_12e813df;
    case 1: goto L_12e812c3;
    case 2: goto L_12e8124e;
    case 3: goto L_12e81188;
    case 4: goto L_12e811c6;
    case 5: goto L_12e81227;
    case 6: goto L_12e81275;
    case 7: goto L_12e8129c;
    case 8: goto L_12e8130a;
    case 9: goto L_12e81204;
    case 10: goto L_12e814c0;
    default: x86_unimpl("switch@0x12e81181 out of table"); return;
  }
L_12e81188:;
  /* 12e81188 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e8118b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12e8118e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e81191 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e81194 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12e81197 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8119b ja 0x12e811c1 */
  if ((!C.cf&&!C.zf)) goto L_12e811c1;
  /* 12e8119d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e811a0 jmp dword ptr [ecx*4 + 0x12e815ef] */
  switch (ECX) {
    case 0: goto L_12e811a7;
    case 1: goto L_12e811b1;
    case 2: goto L_12e811b7;
    case 3: goto L_12e811bd;
    case 4: goto L_12e811e5;
    case 5: goto L_12e811ef;
    case 6: goto L_12e811f5;
    case 7: goto L_12e811fb;
    default: x86_unimpl("switch@0x12e811a0 out of table"); return;
  }
L_12e811a7:;
  /* 12e811a7 mov dword ptr [0x12e8f848], 1 */
  w32((uint32_t)(0x12e8f848), (0x1u));
L_12e811b1:;
  /* 12e811b1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 12e811b5 jmp 0x12e811c1 */
  goto L_12e811c1;
L_12e811b7:;
  /* 12e811b7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 12e811bb jmp 0x12e811c1 */
  goto L_12e811c1;
L_12e811bd:;
  /* 12e811bd mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_12e811c1:;
  /* 12e811c1 jmp 0x12e814c0 */
  goto L_12e814c0;
L_12e811c6:;
  /* 12e811c6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e811c9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12e811cc mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e811cf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e811d2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12e811d5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e811d9 ja 0x12e811ff */
  if ((!C.cf&&!C.zf)) goto L_12e811ff;
  /* 12e811db mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e811de jmp dword ptr [ecx*4 + 0x12e815ff] */
  switch (ECX) {
    case 0: goto L_12e811e5;
    case 1: goto L_12e811ef;
    case 2: goto L_12e811f5;
    case 3: goto L_12e811fb;
    default: x86_unimpl("switch@0x12e811de out of table"); return;
  }
L_12e811e5:;
  /* 12e811e5 mov dword ptr [0x12e8f848], 1 */
  w32((uint32_t)(0x12e8f848), (0x1u));
L_12e811ef:;
  /* 12e811ef mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 12e811f3 jmp 0x12e811ff */
  goto L_12e811ff;
L_12e811f5:;
  /* 12e811f5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 12e811f9 jmp 0x12e811ff */
  goto L_12e811ff;
L_12e811fb:;
  /* 12e811fb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_12e811ff:;
  /* 12e811ff jmp 0x12e814c0 */
  goto L_12e814c0;
L_12e81204:;
  /* 12e81204 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e81207 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12e8120a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8120e je 0x12e81218 */
  if (C.zf) goto L_12e81218;
  /* 12e81210 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81214 je 0x12e8121e */
  if (C.zf) goto L_12e8121e;
  /* 12e81216 jmp 0x12e81222 */
  goto L_12e81222;
L_12e81218:;
  /* 12e81218 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 12e8121c jmp 0x12e81222 */
  goto L_12e81222;
L_12e8121e:;
  /* 12e8121e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_12e81222:;
  /* 12e81222 jmp 0x12e814c0 */
  goto L_12e814c0;
L_12e81227:;
  /* 12e81227 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e8122a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12e8122d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81231 je 0x12e8123b */
  if (C.zf) goto L_12e8123b;
  /* 12e81233 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81237 je 0x12e81245 */
  if (C.zf) goto L_12e81245;
  /* 12e81239 jmp 0x12e81249 */
  goto L_12e81249;
L_12e8123b:;
  /* 12e8123b mov dword ptr [0x12e8f848], 1 */
  w32((uint32_t)(0x12e8f848), (0x1u));
L_12e81245:;
  /* 12e81245 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_12e81249:;
  /* 12e81249 jmp 0x12e814c0 */
  goto L_12e814c0;
L_12e8124e:;
  /* 12e8124e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e81251 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12e81254 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81258 je 0x12e81262 */
  if (C.zf) goto L_12e81262;
  /* 12e8125a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8125e je 0x12e8126c */
  if (C.zf) goto L_12e8126c;
  /* 12e81260 jmp 0x12e81270 */
  goto L_12e81270;
L_12e81262:;
  /* 12e81262 mov dword ptr [0x12e8f848], 1 */
  w32((uint32_t)(0x12e8f848), (0x1u));
L_12e8126c:;
  /* 12e8126c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_12e81270:;
  /* 12e81270 jmp 0x12e814c0 */
  goto L_12e814c0;
L_12e81275:;
  /* 12e81275 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e81278 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 12e8127b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8127f je 0x12e81289 */
  if (C.zf) goto L_12e81289;
  /* 12e81281 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81285 je 0x12e81293 */
  if (C.zf) goto L_12e81293;
  /* 12e81287 jmp 0x12e81297 */
  goto L_12e81297;
L_12e81289:;
  /* 12e81289 mov dword ptr [0x12e8f848], 1 */
  w32((uint32_t)(0x12e8f848), (0x1u));
L_12e81293:;
  /* 12e81293 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_12e81297:;
  /* 12e81297 jmp 0x12e814c0 */
  goto L_12e814c0;
L_12e8129c:;
  /* 12e8129c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e8129f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12e812a2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e812a6 je 0x12e812b0 */
  if (C.zf) goto L_12e812b0;
  /* 12e812a8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e812ac je 0x12e812ba */
  if (C.zf) goto L_12e812ba;
  /* 12e812ae jmp 0x12e812be */
  goto L_12e812be;
L_12e812b0:;
  /* 12e812b0 mov dword ptr [0x12e8f848], 1 */
  w32((uint32_t)(0x12e8f848), (0x1u));
L_12e812ba:;
  /* 12e812ba mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_12e812be:;
  /* 12e812be jmp 0x12e814c0 */
  goto L_12e814c0;
L_12e812c3:;
  /* 12e812c3 push 0x12e8b8ac */
  push32((uint32_t)(0x12e8b8acu));
  /* 12e812c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e812cb push ecx */
  push32((uint32_t)(ECX));
  /* 12e812cc call 0x12e81b20 */
  push32(0x12e812d1u); f_12e81b20();
  /* 12e812d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e812d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e812d6 jne 0x12e812e3 */
  if (!C.zf) goto L_12e812e3;
  /* 12e812d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e812db add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e812de mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e812e1 jmp 0x12e81301 */
  goto L_12e81301;
L_12e812e3:;
  /* 12e812e3 push 0x12e8b8a8 */
  push32((uint32_t)(0x12e8b8a8u));
  /* 12e812e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e812eb push eax */
  push32((uint32_t)(EAX));
  /* 12e812ec call 0x12e81b20 */
  push32(0x12e812f1u); f_12e81b20();
  /* 12e812f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e812f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e812f6 jne 0x12e81301 */
  if (!C.zf) goto L_12e81301;
  /* 12e812f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e812fb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e812fe mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12e81301:;
  /* 12e81301 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 12e81305 jmp 0x12e814c0 */
  goto L_12e814c0;
L_12e8130a:;
  /* 12e8130a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e8130d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81311 jg 0x12e81321 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e81321;
  /* 12e81313 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e81316 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 12e8131c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12e8131f jmp 0x12e8132d */
  goto L_12e8132d;
L_12e81321:;
  /* 12e81321 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e81324 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12e8132a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12e8132d:;
  /* 12e8132d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81331 jle 0x12e813d4 */
  if ((C.zf||C.sf!=C.of)) goto L_12e813d4;
  /* 12e81337 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e8133a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8133d jbe 0x12e813d4 */
  if ((C.cf||C.zf)) goto L_12e813d4;
  /* 12e81343 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e81346 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e81348 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e8134a mov ecx, dword ptr [0x12e8dcb8] */
  ECX = (r32((uint32_t)(0x12e8dcb8)));
  /* 12e81350 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e81352 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12e81356 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12e8135c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e8135e je 0x12e81397 */
  if (C.zf) goto L_12e81397;
  /* 12e81360 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e81363 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81366 jbe 0x12e81397 */
  if ((C.cf||C.zf)) goto L_12e81397;
  /* 12e81368 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e8136b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e8136d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e81370 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e81372 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12e81374 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e81377 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e81379 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e8137c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e8137f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12e81381 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e81384 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e81387 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12e8138a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e8138d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e8138f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e81392 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e81395 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12e81397:;
  /* 12e81397 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e8139a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e8139c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e8139f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e813a1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12e813a3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e813a6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e813a8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e813ab mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e813ae mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e813b0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e813b3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e813b6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12e813b9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e813bc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e813be sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e813c1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e813c4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12e813c6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e813c9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e813cc mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12e813cf jmp 0x12e8132d */
  goto L_12e8132d;
L_12e813d4:;
  /* 12e813d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e813d7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e813da jmp 0x12e810f6 */
  goto L_12e810f6;
L_12e813df:;
  /* 12e813df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e813e2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12e813e5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e813e7 je 0x12e814b2 */
  if (C.zf) goto L_12e814b2;
  /* 12e813ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e813f0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e813f3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12e813f6:;
  /* 12e813f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e813f9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e813fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e813fe je 0x12e814b0 */
  if (C.zf) goto L_12e814b0;
  /* 12e81404 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e81407 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8140a je 0x12e814b0 */
  if (C.zf) goto L_12e814b0;
  /* 12e81410 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e81413 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e81416 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81419 jne 0x12e81429 */
  if (!C.zf) goto L_12e81429;
  /* 12e8141b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e8141e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e81421 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12e81424 jmp 0x12e814b0 */
  goto L_12e814b0;
L_12e81429:;
  /* 12e81429 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e8142c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e8142e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e81430 mov edx, dword ptr [0x12e8dcb8] */
  EDX = (r32((uint32_t)(0x12e8dcb8)));
  /* 12e81436 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e81438 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12e8143c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12e81441 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e81443 je 0x12e8147c */
  if (C.zf) goto L_12e8147c;
  /* 12e81445 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e81448 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8144b jbe 0x12e8147c */
  if ((C.cf||C.zf)) goto L_12e8147c;
  /* 12e8144d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e81450 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e81452 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e81455 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e81457 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12e81459 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e8145c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e8145e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e81461 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e81464 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12e81466 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e81469 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e8146c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e8146f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e81472 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e81474 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e81477 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e8147a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12e8147c:;
  /* 12e8147c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e8147f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e81481 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e81484 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e81486 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12e81488 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e8148b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e8148d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e81490 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e81493 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12e81495 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e81498 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e8149b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12e8149e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e814a1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e814a3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e814a6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e814a9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12e814ab jmp 0x12e813f6 */
  goto L_12e813f6;
L_12e814b0:;
  /* 12e814b0 jmp 0x12e814bb */
  goto L_12e814bb;
L_12e814b2:;
  /* 12e814b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e814b5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e814b8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12e814bb:;
  /* 12e814bb jmp 0x12e810f6 */
  goto L_12e810f6;
L_12e814c0:;
  /* 12e814c0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12e814c4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e814c6 je 0x12e814ec */
  if (C.zf) goto L_12e814ec;
  /* 12e814c8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e814cb push edx */
  push32((uint32_t)(EDX));
  /* 12e814cc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e814cf push eax */
  push32((uint32_t)(EAX));
  /* 12e814d0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e814d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e814d4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e814d7 push edx */
  push32((uint32_t)(EDX));
  /* 12e814d8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12e814db push eax */
  push32((uint32_t)(EAX));
  /* 12e814dc call 0x12e80920 */
  push32(0x12e814e1u); f_12e80920();
  /* 12e814e1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e814e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e814e7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12e814ea jmp 0x12e81567 */
  goto L_12e81567;
L_12e814ec:;
  /* 12e814ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e814ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e814f1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e814f3 mov ecx, dword ptr [0x12e8dcb8] */
  ECX = (r32((uint32_t)(0x12e8dcb8)));
  /* 12e814f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e814fb mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12e814ff and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12e81505 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e81507 je 0x12e81538 */
  if (C.zf) goto L_12e81538;
  /* 12e81509 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e8150c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e8150e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e81511 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e81513 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12e81515 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e81518 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e8151a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e8151d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e81520 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12e81522 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e81525 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e81528 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12e8152b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e8152e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e81530 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e81533 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e81536 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12e81538:;
  /* 12e81538 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e8153b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e8153d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e81540 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e81542 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12e81544 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e81547 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e81549 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e8154c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e8154f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12e81551 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e81554 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e81557 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e8155a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e8155d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e8155f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e81562 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e81565 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12e81567:;
  /* 12e81567 jmp 0x12e810f6 */
  goto L_12e810f6;
L_12e8156c:;
  /* 12e8156c mov esp, ebp */
  ESP = (EBP);
  /* 12e8156e pop ebp */
  EBP = (pop32());
  /* 12e8156f ret  */
  ESPCHK(0x12e810f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011610 @ 0x12e81610 (650 bytes, 178 insns) */
void f_12e81610(void) {
  FTRACE(0x12e81610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e81610 push ebp */
  push32((uint32_t)(EBP));
  /* 12e81611 mov ebp, esp */
  EBP = (ESP);
  /* 12e81613 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e81619 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8161d jne 0x12e81779 */
  if (!C.zf) goto L_12e81779;
  /* 12e81623 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e81626 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 12e8162c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 12e81632 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e81635 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e8163c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 12e81646 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e81648 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12e8164e push edx */
  push32((uint32_t)(EDX));
  /* 12e8164f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e81652 push eax */
  push32((uint32_t)(EAX));
  /* 12e81653 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e81656 push ecx */
  push32((uint32_t)(ECX));
  /* 12e81657 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e8165a push edx */
  push32((uint32_t)(EDX));
  /* 12e8165b call 0x12e82a30 */
  push32(0x12e81660u); f_12e82a30();
  /* 12e81660 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e81663 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e81666 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8166a jne 0x12e816ff */
  if (!C.zf) goto L_12e816ff;
  /* 12e81670 call dword ptr [0x12e92284] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92284))), 0x12e81676u);
  /* 12e81676 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81679 je 0x12e81680 */
  if (C.zf) goto L_12e81680;
  /* 12e8167b jmp 0x12e8175d */
  goto L_12e8175d;
L_12e81680:;
  /* 12e81680 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e81682 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e81684 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e81686 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e81689 push eax */
  push32((uint32_t)(EAX));
  /* 12e8168a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e8168d push ecx */
  push32((uint32_t)(ECX));
  /* 12e8168e call 0x12e82a30 */
  push32(0x12e81693u); f_12e82a30();
  /* 12e81693 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e81696 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 12e8169c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e816a3 jne 0x12e816aa */
  if (!C.zf) goto L_12e816aa;
  /* 12e816a5 jmp 0x12e8175d */
  goto L_12e8175d;
L_12e816aa:;
  /* 12e816aa push 0x58 */
  push32((uint32_t)(0x58u));
  /* 12e816ac push 0x12e8b8b4 */
  push32((uint32_t)(0x12e8b8b4u));
  /* 12e816b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e816b3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12e816b9 push edx */
  push32((uint32_t)(EDX));
  /* 12e816ba call 0x12e73450 */
  push32(0x12e816bfu); f_12e73450();
  /* 12e816bf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e816c2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e816c5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e816c9 jne 0x12e816d0 */
  if (!C.zf) goto L_12e816d0;
  /* 12e816cb jmp 0x12e8175d */
  goto L_12e8175d;
L_12e816d0:;
  /* 12e816d0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12e816d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e816d9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 12e816df push eax */
  push32((uint32_t)(EAX));
  /* 12e816e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e816e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e816e4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e816e7 push edx */
  push32((uint32_t)(EDX));
  /* 12e816e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e816eb push eax */
  push32((uint32_t)(EAX));
  /* 12e816ec call 0x12e82a30 */
  push32(0x12e816f1u); f_12e82a30();
  /* 12e816f1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e816f4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e816f7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e816fb jne 0x12e816ff */
  if (!C.zf) goto L_12e816ff;
  /* 12e816fd jmp 0x12e8175d */
  goto L_12e8175d;
L_12e816ff:;
  /* 12e816ff push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12e81701 push 0x12e8b8b4 */
  push32((uint32_t)(0x12e8b8b4u));
  /* 12e81706 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e81708 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e8170b push ecx */
  push32((uint32_t)(ECX));
  /* 12e8170c call 0x12e73450 */
  push32(0x12e81711u); f_12e73450();
  /* 12e81711 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e81714 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 12e8171a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12e8171c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12e81722 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81725 jne 0x12e81729 */
  if (!C.zf) goto L_12e81729;
  /* 12e81727 jmp 0x12e8175d */
  goto L_12e8175d;
L_12e81729:;
  /* 12e81729 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e8172c push ecx */
  push32((uint32_t)(ECX));
  /* 12e8172d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e81730 push edx */
  push32((uint32_t)(EDX));
  /* 12e81731 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12e81737 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e81739 push ecx */
  push32((uint32_t)(ECX));
  /* 12e8173a call 0x12e76c70 */
  push32(0x12e8173fu); f_12e76c70();
  /* 12e8173f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e81742 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81746 je 0x12e81756 */
  if (C.zf) goto L_12e81756;
  /* 12e81748 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e8174a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e8174d push edx */
  push32((uint32_t)(EDX));
  /* 12e8174e call 0x12e73ee0 */
  push32(0x12e81753u); f_12e73ee0();
  /* 12e81753 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e81756:;
  /* 12e81756 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e81758 jmp 0x12e81896 */
  goto L_12e81896;
L_12e8175d:;
  /* 12e8175d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81761 je 0x12e81771 */
  if (C.zf) goto L_12e81771;
  /* 12e81763 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e81765 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e81768 push eax */
  push32((uint32_t)(EAX));
  /* 12e81769 call 0x12e73ee0 */
  push32(0x12e8176eu); f_12e73ee0();
  /* 12e8176e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e81771:;
  /* 12e81771 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e81774 jmp 0x12e81896 */
  goto L_12e81896;
L_12e81779:;
  /* 12e81779 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8177d jne 0x12e81893 */
  if (!C.zf) goto L_12e81893;
  /* 12e81783 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 12e8178d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e81790 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12e81796 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e81798 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12e8179e push edx */
  push32((uint32_t)(EDX));
  /* 12e8179f push 0x12e8f760 */
  push32((uint32_t)(0x12e8f760u));
  /* 12e817a4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e817a7 push eax */
  push32((uint32_t)(EAX));
  /* 12e817a8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e817ab push ecx */
  push32((uint32_t)(ECX));
  /* 12e817ac call 0x12e82890 */
  push32(0x12e817b1u); f_12e82890();
  /* 12e817b1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e817b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e817b6 jne 0x12e817c0 */
  if (!C.zf) goto L_12e817c0;
  /* 12e817b8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e817bb jmp 0x12e81896 */
  goto L_12e81896;
L_12e817c0:;
  /* 12e817c0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12e817c6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12e817c9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 12e817d3 jmp 0x12e817e4 */
  goto L_12e817e4;
L_12e817d5:;
  /* 12e817d5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12e817db add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e817de mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_12e817e4:;
  /* 12e817e4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e817eb jge 0x12e8188f */
  if ((C.sf==C.of)) goto L_12e8188f;
  /* 12e817f1 cmp dword ptr [0x12e8dec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e8dec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e817f8 jle 0x12e8182b */
  if ((C.zf||C.sf!=C.of)) goto L_12e8182b;
  /* 12e817fa push 4 */
  push32((uint32_t)(0x4u));
  /* 12e817fc mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12e81802 mov dl, byte ptr [ecx*2 + 0x12e8f760] */
  DL = (r8((uint32_t)(ECX*2 + 0x12e8f760)));
  /* 12e81809 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12e8180f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12e81815 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e8181a push eax */
  push32((uint32_t)(EAX));
  /* 12e8181b call 0x12e79460 */
  push32(0x12e81820u); f_12e79460();
  /* 12e81820 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e81823 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12e81829 jmp 0x12e8185e */
  goto L_12e8185e;
L_12e8182b:;
  /* 12e8182b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12e81831 mov dl, byte ptr [ecx*2 + 0x12e8f760] */
  DL = (r8((uint32_t)(ECX*2 + 0x12e8f760)));
  /* 12e81838 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12e8183e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12e81844 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e81849 mov ecx, dword ptr [0x12e8dcb8] */
  ECX = (r32((uint32_t)(0x12e8dcb8)));
  /* 12e8184f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e81851 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12e81855 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12e81858 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_12e8185e:;
  /* 12e8185e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81865 je 0x12e81888 */
  if (C.zf) goto L_12e81888;
  /* 12e81867 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12e8186d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e81870 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e81873 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 12e8187a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12e8187e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12e81884 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12e81886 jmp 0x12e8188a */
  goto L_12e8188a;
L_12e81888:;
  /* 12e81888 jmp 0x12e8188f */
  goto L_12e8188f;
L_12e8188a:;
  /* 12e8188a jmp 0x12e817d5 */
  goto L_12e817d5;
L_12e8188f:;
  /* 12e8188f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e81891 jmp 0x12e81896 */
  goto L_12e81896;
L_12e81893:;
  /* 12e81893 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12e81896:;
  /* 12e81896 mov esp, ebp */
  ESP = (EBP);
  /* 12e81898 pop ebp */
  EBP = (pop32());
  /* 12e81899 ret  */
  ESPCHK(0x12e81610u, _esp0);
  ESP += 4; return;
}

/* FUN_100118a0 @ 0x12e818a0 (10 bytes, 5 insns) */
void f_12e818a0(void) {
  FTRACE(0x12e818a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e818a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e818a1 mov ebp, esp */
  EBP = (ESP);
  /* 12e818a3 mov eax, dword ptr [0x12e8eda8] */
  EAX = (r32((uint32_t)(0x12e8eda8)));
  /* 12e818a8 pop ebp */
  EBP = (pop32());
  /* 12e818a9 ret  */
  ESPCHK(0x12e818a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100118b0 @ 0x12e818b0 (575 bytes, 196 insns) */
void f_12e818b0(void) {
  FTRACE(0x12e818b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e818b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e818b1 mov ebp, esp */
  EBP = (ESP);
  /* 12e818b3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e818b5 push 0x12e8b8c0 */
  push32((uint32_t)(0x12e8b8c0u));
  /* 12e818ba push 0x12e7c558 */
  push32((uint32_t)(0x12e7c558u));
  /* 12e818bf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12e818c5 push eax */
  push32((uint32_t)(EAX));
  /* 12e818c6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12e818cd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e818d0 push ebx */
  push32((uint32_t)(EBX));
  /* 12e818d1 push esi */
  push32((uint32_t)(ESI));
  /* 12e818d2 push edi */
  push32((uint32_t)(EDI));
  /* 12e818d3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12e818d6 cmp dword ptr [0x12e8f76c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f76c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e818dd jne 0x12e8192e */
  if (!C.zf) goto L_12e8192e;
  /* 12e818df lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12e818e2 push eax */
  push32((uint32_t)(EAX));
  /* 12e818e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e818e5 push 0x12e8aff4 */
  push32((uint32_t)(0x12e8aff4u));
  /* 12e818ea push 1 */
  push32((uint32_t)(0x1u));
  /* 12e818ec call dword ptr [0x12e922d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922d8))), 0x12e818f2u);
  /* 12e818f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e818f4 je 0x12e81902 */
  if (C.zf) goto L_12e81902;
  /* 12e818f6 mov dword ptr [0x12e8f76c], 1 */
  w32((uint32_t)(0x12e8f76c), (0x1u));
  /* 12e81900 jmp 0x12e8192e */
  goto L_12e8192e;
L_12e81902:;
  /* 12e81902 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12e81905 push ecx */
  push32((uint32_t)(ECX));
  /* 12e81906 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e81908 push 0x12e8aff0 */
  push32((uint32_t)(0x12e8aff0u));
  /* 12e8190d push 1 */
  push32((uint32_t)(0x1u));
  /* 12e8190f push 0 */
  push32((uint32_t)(0x0u));
  /* 12e81911 call dword ptr [0x12e922dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922dc))), 0x12e81917u);
  /* 12e81917 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e81919 je 0x12e81927 */
  if (C.zf) goto L_12e81927;
  /* 12e8191b mov dword ptr [0x12e8f76c], 2 */
  w32((uint32_t)(0x12e8f76c), (0x2u));
  /* 12e81925 jmp 0x12e8192e */
  goto L_12e8192e;
L_12e81927:;
  /* 12e81927 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e81929 jmp 0x12e81b09 */
  goto L_12e81b09;
L_12e8192e:;
  /* 12e8192e cmp dword ptr [0x12e8f76c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f76c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81935 jne 0x12e81952 */
  if (!C.zf) goto L_12e81952;
  /* 12e81937 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e8193a push edx */
  push32((uint32_t)(EDX));
  /* 12e8193b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e8193e push eax */
  push32((uint32_t)(EAX));
  /* 12e8193f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e81942 push ecx */
  push32((uint32_t)(ECX));
  /* 12e81943 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e81946 push edx */
  push32((uint32_t)(EDX));
  /* 12e81947 call dword ptr [0x12e922d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922d8))), 0x12e8194du);
  /* 12e8194d jmp 0x12e81b09 */
  goto L_12e81b09;
L_12e81952:;
  /* 12e81952 cmp dword ptr [0x12e8f76c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f76c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81959 jne 0x12e81b07 */
  if (!C.zf) goto L_12e81b07;
  /* 12e8195f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81963 jne 0x12e8196d */
  if (!C.zf) goto L_12e8196d;
  /* 12e81965 mov eax, dword ptr [0x12e8f6e0] */
  EAX = (r32((uint32_t)(0x12e8f6e0)));
  /* 12e8196a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_12e8196d:;
  /* 12e8196d push 0 */
  push32((uint32_t)(0x0u));
  /* 12e8196f push 0 */
  push32((uint32_t)(0x0u));
  /* 12e81971 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e81973 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e81975 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e81978 push ecx */
  push32((uint32_t)(ECX));
  /* 12e81979 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e8197c push edx */
  push32((uint32_t)(EDX));
  /* 12e8197d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12e81982 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e81985 push eax */
  push32((uint32_t)(EAX));
  /* 12e81986 call dword ptr [0x12e92380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92380))), 0x12e8198cu);
  /* 12e8198c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12e8198f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81993 jne 0x12e8199c */
  if (!C.zf) goto L_12e8199c;
  /* 12e81995 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e81997 jmp 0x12e81b09 */
  goto L_12e81b09;
L_12e8199c:;
  /* 12e8199c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e819a3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e819a6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e819a9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12e819ab call 0x12e765f0 */
  push32(0x12e819b0u); f_12e765f0();
  /* 12e819b0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12e819b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12e819b6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12e819b9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12e819bc mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e819bf push edx */
  push32((uint32_t)(EDX));
  /* 12e819c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e819c2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e819c5 push eax */
  push32((uint32_t)(EAX));
  /* 12e819c6 call 0x12e771c0 */
  push32(0x12e819cbu); f_12e771c0();
  /* 12e819cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e819ce mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12e819d5 jmp 0x12e819ee */
  goto L_12e819ee;
  /* 12e819d7 mov eax, 1 */
  EAX = (0x1u);
  /* 12e819dc ret  */
  ESPCHK(0x12e818b0u, _esp0);
  ESP += 4; return;
  /* 12e819dd mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12e819e0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12e819e7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12e819ee:;
  /* 12e819ee cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e819f2 jne 0x12e819fb */
  if (!C.zf) goto L_12e819fb;
  /* 12e819f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e819f6 jmp 0x12e81b09 */
  goto L_12e81b09;
L_12e819fb:;
  /* 12e819fb push 0 */
  push32((uint32_t)(0x0u));
  /* 12e819fd push 0 */
  push32((uint32_t)(0x0u));
  /* 12e819ff mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e81a02 push ecx */
  push32((uint32_t)(ECX));
  /* 12e81a03 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e81a06 push edx */
  push32((uint32_t)(EDX));
  /* 12e81a07 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e81a0a push eax */
  push32((uint32_t)(EAX));
  /* 12e81a0b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e81a0e push ecx */
  push32((uint32_t)(ECX));
  /* 12e81a0f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12e81a14 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e81a17 push edx */
  push32((uint32_t)(EDX));
  /* 12e81a18 call dword ptr [0x12e92380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92380))), 0x12e81a1eu);
  /* 12e81a1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e81a20 jne 0x12e81a29 */
  if (!C.zf) goto L_12e81a29;
  /* 12e81a22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e81a24 jmp 0x12e81b09 */
  goto L_12e81b09;
L_12e81a29:;
  /* 12e81a29 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12e81a30 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e81a33 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 12e81a37 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e81a3a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12e81a3c call 0x12e765f0 */
  push32(0x12e81a41u); f_12e765f0();
  /* 12e81a41 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12e81a44 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12e81a47 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12e81a4a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12e81a4d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12e81a54 jmp 0x12e81a6d */
  goto L_12e81a6d;
  /* 12e81a56 mov eax, 1 */
  EAX = (0x1u);
  /* 12e81a5b ret  */
  ESPCHK(0x12e818b0u, _esp0);
  ESP += 4; return;
  /* 12e81a5c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12e81a5f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12e81a66 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12e81a6d:;
  /* 12e81a6d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81a71 jne 0x12e81a7a */
  if (!C.zf) goto L_12e81a7a;
  /* 12e81a73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e81a75 jmp 0x12e81b09 */
  goto L_12e81b09;
L_12e81a7a:;
  /* 12e81a7a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81a7e jne 0x12e81a89 */
  if (!C.zf) goto L_12e81a89;
  /* 12e81a80 mov edx, dword ptr [0x12e8f6d0] */
  EDX = (r32((uint32_t)(0x12e8f6d0)));
  /* 12e81a86 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12e81a89:;
  /* 12e81a89 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e81a8c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e81a8f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 12e81a95 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e81a98 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e81a9b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 12e81aa2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e81aa5 push ecx */
  push32((uint32_t)(ECX));
  /* 12e81aa6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e81aa9 push edx */
  push32((uint32_t)(EDX));
  /* 12e81aaa mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12e81aad push eax */
  push32((uint32_t)(EAX));
  /* 12e81aae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e81ab1 push ecx */
  push32((uint32_t)(ECX));
  /* 12e81ab2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12e81ab5 push edx */
  push32((uint32_t)(EDX));
  /* 12e81ab6 call dword ptr [0x12e922dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922dc))), 0x12e81abcu);
  /* 12e81abc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12e81abf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e81ac2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e81ac5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e81ac7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 12e81acc cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81ad2 je 0x12e81ae8 */
  if (C.zf) goto L_12e81ae8;
  /* 12e81ad4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e81ad7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e81ada xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e81adc mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12e81ae0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81ae6 je 0x12e81aec */
  if (C.zf) goto L_12e81aec;
L_12e81ae8:;
  /* 12e81ae8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e81aea jmp 0x12e81b09 */
  goto L_12e81b09;
L_12e81aec:;
  /* 12e81aec mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e81aef shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12e81af1 push eax */
  push32((uint32_t)(EAX));
  /* 12e81af2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e81af5 push ecx */
  push32((uint32_t)(ECX));
  /* 12e81af6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e81af9 push edx */
  push32((uint32_t)(EDX));
  /* 12e81afa call 0x12e7b340 */
  push32(0x12e81affu); f_12e7b340();
  /* 12e81aff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e81b02 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e81b05 jmp 0x12e81b09 */
  goto L_12e81b09;
L_12e81b07:;
  /* 12e81b07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e81b09:;
  /* 12e81b09 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12e81b0c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e81b0f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12e81b16 pop edi */
  EDI = (pop32());
  /* 12e81b17 pop esi */
  ESI = (pop32());
  /* 12e81b18 pop ebx */
  EBX = (pop32());
  /* 12e81b19 mov esp, ebp */
  ESP = (EBP);
  /* 12e81b1b pop ebp */
  EBP = (pop32());
  /* 12e81b1c ret  */
  ESPCHK(0x12e818b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b20 @ 0x12e81b20 (208 bytes, 85 insns) */
void f_12e81b20(void) {
  FTRACE(0x12e81b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e81b20 push ebp */
  push32((uint32_t)(EBP));
  /* 12e81b21 mov ebp, esp */
  EBP = (ESP);
  /* 12e81b23 push edi */
  push32((uint32_t)(EDI));
  /* 12e81b24 push esi */
  push32((uint32_t)(ESI));
  /* 12e81b25 push ebx */
  push32((uint32_t)(EBX));
  /* 12e81b26 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12e81b29 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12e81b2c lea eax, [0x12e8f6c8] */
  EAX = ((uint32_t)(0x12e8f6c8));
  /* 12e81b32 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81b36 jne 0x12e81b73 */
  if (!C.zf) goto L_12e81b73;
  /* 12e81b38 mov al, 0xff */
  AL = (0xffu);
  /* 12e81b3a mov edi, edi */
  EDI = (EDI);
L_12e81b3c:;
  /* 12e81b3c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12e81b3e je 0x12e81b6e */
  if (C.zf) goto L_12e81b6e;
  /* 12e81b40 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12e81b42 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12e81b43 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 12e81b45 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12e81b46 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e81b48 je 0x12e81b3c */
  if (C.zf) goto L_12e81b3c;
  /* 12e81b4a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12e81b4c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e81b4e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12e81b50 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12e81b53 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12e81b55 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12e81b57 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 12e81b59 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12e81b5b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e81b5d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12e81b5f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12e81b62 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12e81b64 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12e81b66 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e81b68 je 0x12e81b3c */
  if (C.zf) goto L_12e81b3c;
  /* 12e81b6a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12e81b6c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_12e81b6e:;
  /* 12e81b6e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 12e81b71 jmp 0x12e81beb */
  goto L_12e81beb;
L_12e81b73:;
  /* 12e81b73 lock inc dword ptr [0x12e8f85c] */
  x86_unimpl("lock inc @ 0x12e81b73");
  /* 12e81b7a cmp dword ptr [0x12e8f84c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f84c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81b81 jg 0x12e81b87 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e81b87;
  /* 12e81b83 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e81b85 jmp 0x12e81b9c */
  goto L_12e81b9c;
L_12e81b87:;
  /* 12e81b87 lock dec dword ptr [0x12e8f85c] */
  x86_unimpl("lock dec @ 0x12e81b87");
  /* 12e81b8e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12e81b90 call 0x12e76e50 */
  push32(0x12e81b95u); f_12e76e50();
  /* 12e81b95 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_12e81b9c:;
  /* 12e81b9c mov eax, 0xff */
  EAX = (0xffu);
  /* 12e81ba1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12e81ba3 nop  */
  /* nop */
L_12e81ba4:;
  /* 12e81ba4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12e81ba6 je 0x12e81bcf */
  if (C.zf) goto L_12e81bcf;
  /* 12e81ba8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12e81baa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12e81bab mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12e81bad inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12e81bae cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e81bb0 je 0x12e81ba4 */
  if (C.zf) goto L_12e81ba4;
  /* 12e81bb2 push eax */
  push32((uint32_t)(EAX));
  /* 12e81bb3 push ebx */
  push32((uint32_t)(EBX));
  /* 12e81bb4 call 0x12e82c90 */
  push32(0x12e81bb9u); f_12e82c90();
  /* 12e81bb9 mov ebx, eax */
  EBX = (EAX);
  /* 12e81bbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e81bbe call 0x12e82c90 */
  push32(0x12e81bc3u); f_12e82c90();
  /* 12e81bc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e81bc6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e81bc8 je 0x12e81ba4 */
  if (C.zf) goto L_12e81ba4;
  /* 12e81bca sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e81bcc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12e81bcf:;
  /* 12e81bcf mov ebx, eax */
  EBX = (EAX);
  /* 12e81bd1 pop eax */
  EAX = (pop32());
  /* 12e81bd2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e81bd4 jne 0x12e81bdf */
  if (!C.zf) goto L_12e81bdf;
  /* 12e81bd6 lock dec dword ptr [0x12e8f85c] */
  x86_unimpl("lock dec @ 0x12e81bd6");
  /* 12e81bdd jmp 0x12e81be9 */
  goto L_12e81be9;
L_12e81bdf:;
  /* 12e81bdf push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12e81be1 call 0x12e76ef0 */
  push32(0x12e81be6u); f_12e76ef0();
  /* 12e81be6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e81be9:;
  /* 12e81be9 mov eax, ebx */
  EAX = (EBX);
L_12e81beb:;
  /* 12e81beb pop ebx */
  EBX = (pop32());
  /* 12e81bec pop esi */
  ESI = (pop32());
  /* 12e81bed pop edi */
  EDI = (pop32());
  /* 12e81bee leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e81bef ret  */
  ESPCHK(0x12e81b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10011bf0 @ 0x12e81bf0 (257 bytes, 103 insns) */
void f_12e81bf0(void) {
  FTRACE(0x12e81bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e81bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e81bf1 mov ebp, esp */
  EBP = (ESP);
  /* 12e81bf3 push edi */
  push32((uint32_t)(EDI));
  /* 12e81bf4 push esi */
  push32((uint32_t)(ESI));
  /* 12e81bf5 push ebx */
  push32((uint32_t)(EBX));
  /* 12e81bf6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e81bf9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e81bfb je 0x12e81cea */
  if (C.zf) goto L_12e81cea;
  /* 12e81c01 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12e81c04 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 12e81c07 lea eax, [0x12e8f6c8] */
  EAX = ((uint32_t)(0x12e8f6c8));
  /* 12e81c0d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81c11 jne 0x12e81c61 */
  if (!C.zf) goto L_12e81c61;
  /* 12e81c13 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 12e81c15 mov bl, 0x5a */
  BL = (0x5au);
  /* 12e81c17 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 12e81c19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12e81c1c:;
  /* 12e81c1c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 12e81c1e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12e81c20 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 12e81c22 je 0x12e81c45 */
  if (C.zf) goto L_12e81c45;
  /* 12e81c24 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12e81c26 je 0x12e81c45 */
  if (C.zf) goto L_12e81c45;
  /* 12e81c28 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12e81c29 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12e81c2a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e81c2c jb 0x12e81c34 */
  if (C.cf) goto L_12e81c34;
  /* 12e81c2e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e81c30 ja 0x12e81c34 */
  if ((!C.cf&&!C.zf)) goto L_12e81c34;
  /* 12e81c32 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_12e81c34:;
  /* 12e81c34 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e81c36 jb 0x12e81c3e */
  if (C.cf) goto L_12e81c3e;
  /* 12e81c38 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e81c3a ja 0x12e81c3e */
  if ((!C.cf&&!C.zf)) goto L_12e81c3e;
  /* 12e81c3c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_12e81c3e:;
  /* 12e81c3e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e81c40 jne 0x12e81c4f */
  if (!C.zf) goto L_12e81c4f;
  /* 12e81c42 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12e81c43 jne 0x12e81c1c */
  if (!C.zf) goto L_12e81c1c;
L_12e81c45:;
  /* 12e81c45 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e81c47 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e81c49 je 0x12e81cea */
  if (C.zf) goto L_12e81cea;
L_12e81c4f:;
  /* 12e81c4f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12e81c54 jb 0x12e81cea */
  if (C.cf) goto L_12e81cea;
  /* 12e81c5a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e81c5c jmp 0x12e81cea */
  goto L_12e81cea;
L_12e81c61:;
  /* 12e81c61 lock inc dword ptr [0x12e8f85c] */
  x86_unimpl("lock inc @ 0x12e81c61");
  /* 12e81c68 cmp dword ptr [0x12e8f84c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f84c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81c6f jg 0x12e81c75 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e81c75;
  /* 12e81c71 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e81c73 jmp 0x12e81c8e */
  goto L_12e81c8e;
L_12e81c75:;
  /* 12e81c75 lock dec dword ptr [0x12e8f85c] */
  x86_unimpl("lock dec @ 0x12e81c75");
  /* 12e81c7c mov ebx, ecx */
  EBX = (ECX);
  /* 12e81c7e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12e81c80 call 0x12e76e50 */
  push32(0x12e81c85u); f_12e76e50();
  /* 12e81c85 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 12e81c8c mov ecx, ebx */
  ECX = (EBX);
L_12e81c8e:;
  /* 12e81c8e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e81c90 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12e81c92 mov edi, edi */
  EDI = (EDI);
L_12e81c94:;
  /* 12e81c94 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12e81c96 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e81c98 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12e81c9a je 0x12e81cbf */
  if (C.zf) goto L_12e81cbf;
  /* 12e81c9c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12e81c9e je 0x12e81cbf */
  if (C.zf) goto L_12e81cbf;
  /* 12e81ca0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12e81ca1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12e81ca2 push ecx */
  push32((uint32_t)(ECX));
  /* 12e81ca3 push eax */
  push32((uint32_t)(EAX));
  /* 12e81ca4 push ebx */
  push32((uint32_t)(EBX));
  /* 12e81ca5 call 0x12e82c90 */
  push32(0x12e81caau); f_12e82c90();
  /* 12e81caa mov ebx, eax */
  EBX = (EAX);
  /* 12e81cac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e81caf call 0x12e82c90 */
  push32(0x12e81cb4u); f_12e82c90();
  /* 12e81cb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e81cb7 pop ecx */
  ECX = (pop32());
  /* 12e81cb8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81cba jne 0x12e81cc5 */
  if (!C.zf) goto L_12e81cc5;
  /* 12e81cbc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12e81cbd jne 0x12e81c94 */
  if (!C.zf) goto L_12e81c94;
L_12e81cbf:;
  /* 12e81cbf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e81cc1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81cc3 je 0x12e81cce */
  if (C.zf) goto L_12e81cce;
L_12e81cc5:;
  /* 12e81cc5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12e81cca jb 0x12e81cce */
  if (C.cf) goto L_12e81cce;
  /* 12e81ccc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_12e81cce:;
  /* 12e81cce pop eax */
  EAX = (pop32());
  /* 12e81ccf or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e81cd1 jne 0x12e81cdc */
  if (!C.zf) goto L_12e81cdc;
  /* 12e81cd3 lock dec dword ptr [0x12e8f85c] */
  x86_unimpl("lock dec @ 0x12e81cd3");
  /* 12e81cda jmp 0x12e81cea */
  goto L_12e81cea;
L_12e81cdc:;
  /* 12e81cdc mov ebx, ecx */
  EBX = (ECX);
  /* 12e81cde push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12e81ce0 call 0x12e76ef0 */
  push32(0x12e81ce5u); f_12e76ef0();
  /* 12e81ce5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e81ce8 mov ecx, ebx */
  ECX = (EBX);
L_12e81cea:;
  /* 12e81cea mov eax, ecx */
  EAX = (ECX);
  /* 12e81cec pop ebx */
  EBX = (pop32());
  /* 12e81ced pop esi */
  ESI = (pop32());
  /* 12e81cee pop edi */
  EDI = (pop32());
  /* 12e81cef leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12e81cf0 ret  */
  ESPCHK(0x12e81bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d00 @ 0x12e81d00 (255 bytes, 88 insns) */
void f_12e81d00(void) {
  FTRACE(0x12e81d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e81d00 push ebp */
  push32((uint32_t)(EBP));
  /* 12e81d01 mov ebp, esp */
  EBP = (ESP);
  /* 12e81d03 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12e81d06:;
  /* 12e81d06 cmp dword ptr [0x12e8dec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e8dec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81d0d jle 0x12e81d26 */
  if ((C.zf||C.sf!=C.of)) goto L_12e81d26;
  /* 12e81d0f push 8 */
  push32((uint32_t)(0x8u));
  /* 12e81d11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e81d14 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e81d16 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e81d18 push ecx */
  push32((uint32_t)(ECX));
  /* 12e81d19 call 0x12e79460 */
  push32(0x12e81d1eu); f_12e79460();
  /* 12e81d1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e81d21 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12e81d24 jmp 0x12e81d3f */
  goto L_12e81d3f;
L_12e81d26:;
  /* 12e81d26 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e81d29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e81d2b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e81d2d mov ecx, dword ptr [0x12e8dcb8] */
  ECX = (r32((uint32_t)(0x12e8dcb8)));
  /* 12e81d33 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e81d35 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12e81d39 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12e81d3c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12e81d3f:;
  /* 12e81d3f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81d43 je 0x12e81d50 */
  if (C.zf) goto L_12e81d50;
  /* 12e81d45 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e81d48 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e81d4b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e81d4e jmp 0x12e81d06 */
  goto L_12e81d06;
L_12e81d50:;
  /* 12e81d50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e81d53 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e81d55 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e81d57 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e81d5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e81d5d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e81d60 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e81d63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e81d66 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e81d69 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81d6d je 0x12e81d75 */
  if (C.zf) goto L_12e81d75;
  /* 12e81d6f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81d73 jne 0x12e81d88 */
  if (!C.zf) goto L_12e81d88;
L_12e81d75:;
  /* 12e81d75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e81d78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e81d7a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e81d7c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e81d7f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e81d82 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e81d85 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12e81d88:;
  /* 12e81d88 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12e81d8f:;
  /* 12e81d8f cmp dword ptr [0x12e8dec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e8dec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81d96 jle 0x12e81dab */
  if ((C.zf||C.sf!=C.of)) goto L_12e81dab;
  /* 12e81d98 push 4 */
  push32((uint32_t)(0x4u));
  /* 12e81d9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e81d9d push edx */
  push32((uint32_t)(EDX));
  /* 12e81d9e call 0x12e79460 */
  push32(0x12e81da3u); f_12e79460();
  /* 12e81da3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e81da6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12e81da9 jmp 0x12e81dc0 */
  goto L_12e81dc0;
L_12e81dab:;
  /* 12e81dab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e81dae mov ecx, dword ptr [0x12e8dcb8] */
  ECX = (r32((uint32_t)(0x12e8dcb8)));
  /* 12e81db4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e81db6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12e81dba and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12e81dbd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12e81dc0:;
  /* 12e81dc0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81dc4 je 0x12e81deb */
  if (C.zf) goto L_12e81deb;
  /* 12e81dc6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e81dc9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e81dcc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e81dcf lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 12e81dd3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12e81dd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e81dd9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e81ddb mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e81ddd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e81de0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e81de3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e81de6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12e81de9 jmp 0x12e81d8f */
  goto L_12e81d8f;
L_12e81deb:;
  /* 12e81deb cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81def jne 0x12e81df8 */
  if (!C.zf) goto L_12e81df8;
  /* 12e81df1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e81df4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e81df6 jmp 0x12e81dfb */
  goto L_12e81dfb;
L_12e81df8:;
  /* 12e81df8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12e81dfb:;
  /* 12e81dfb mov esp, ebp */
  ESP = (EBP);
  /* 12e81dfd pop ebp */
  EBP = (pop32());
  /* 12e81dfe ret  */
  ESPCHK(0x12e81d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e00 @ 0x12e81e00 (17 bytes, 8 insns) */
void f_12e81e00(void) {
  FTRACE(0x12e81e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e81e00 push ebp */
  push32((uint32_t)(EBP));
  /* 12e81e01 mov ebp, esp */
  EBP = (ESP);
  /* 12e81e03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e81e06 push eax */
  push32((uint32_t)(EAX));
  /* 12e81e07 call 0x12e81d00 */
  push32(0x12e81e0cu); f_12e81d00();
  /* 12e81e0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e81e0f pop ebp */
  EBP = (pop32());
  /* 12e81e10 ret  */
  ESPCHK(0x12e81e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e20 @ 0x12e81e20 (297 bytes, 106 insns) */
void f_12e81e20(void) {
  FTRACE(0x12e81e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e81e20 push ebp */
  push32((uint32_t)(EBP));
  /* 12e81e21 mov ebp, esp */
  EBP = (ESP);
  /* 12e81e23 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e81e26 push esi */
  push32((uint32_t)(ESI));
L_12e81e27:;
  /* 12e81e27 cmp dword ptr [0x12e8dec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e8dec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81e2e jle 0x12e81e47 */
  if ((C.zf||C.sf!=C.of)) goto L_12e81e47;
  /* 12e81e30 push 8 */
  push32((uint32_t)(0x8u));
  /* 12e81e32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e81e35 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e81e37 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e81e39 push ecx */
  push32((uint32_t)(ECX));
  /* 12e81e3a call 0x12e79460 */
  push32(0x12e81e3fu); f_12e79460();
  /* 12e81e3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e81e42 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12e81e45 jmp 0x12e81e60 */
  goto L_12e81e60;
L_12e81e47:;
  /* 12e81e47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e81e4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e81e4c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e81e4e mov ecx, dword ptr [0x12e8dcb8] */
  ECX = (r32((uint32_t)(0x12e8dcb8)));
  /* 12e81e54 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e81e56 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12e81e5a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12e81e5d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12e81e60:;
  /* 12e81e60 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81e64 je 0x12e81e71 */
  if (C.zf) goto L_12e81e71;
  /* 12e81e66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e81e69 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e81e6c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e81e6f jmp 0x12e81e27 */
  goto L_12e81e27;
L_12e81e71:;
  /* 12e81e71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e81e74 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e81e76 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e81e78 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e81e7b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e81e7e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e81e81 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e81e84 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e81e87 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12e81e8a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81e8e je 0x12e81e96 */
  if (C.zf) goto L_12e81e96;
  /* 12e81e90 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81e94 jne 0x12e81ea9 */
  if (!C.zf) goto L_12e81ea9;
L_12e81e96:;
  /* 12e81e96 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e81e99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e81e9b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e81e9d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e81ea0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e81ea3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e81ea6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12e81ea9:;
  /* 12e81ea9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12e81eb0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12e81eb7:;
  /* 12e81eb7 cmp dword ptr [0x12e8dec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e8dec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81ebe jle 0x12e81ed3 */
  if ((C.zf||C.sf!=C.of)) goto L_12e81ed3;
  /* 12e81ec0 push 4 */
  push32((uint32_t)(0x4u));
  /* 12e81ec2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e81ec5 push edx */
  push32((uint32_t)(EDX));
  /* 12e81ec6 call 0x12e79460 */
  push32(0x12e81ecbu); f_12e79460();
  /* 12e81ecb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e81ece mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12e81ed1 jmp 0x12e81ee8 */
  goto L_12e81ee8;
L_12e81ed3:;
  /* 12e81ed3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e81ed6 mov ecx, dword ptr [0x12e8dcb8] */
  ECX = (r32((uint32_t)(0x12e8dcb8)));
  /* 12e81edc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e81ede mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12e81ee2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12e81ee5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_12e81ee8:;
  /* 12e81ee8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81eec je 0x12e81f29 */
  if (C.zf) goto L_12e81f29;
  /* 12e81eee push 0 */
  push32((uint32_t)(0x0u));
  /* 12e81ef0 push 0xa */
  push32((uint32_t)(0xau));
  /* 12e81ef2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e81ef5 push eax */
  push32((uint32_t)(EAX));
  /* 12e81ef6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e81ef9 push ecx */
  push32((uint32_t)(ECX));
  /* 12e81efa call 0x12e82dc0 */
  push32(0x12e81effu); f_12e82dc0();
  /* 12e81eff mov ecx, eax */
  ECX = (EAX);
  /* 12e81f01 mov esi, edx */
  ESI = (EDX);
  /* 12e81f03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e81f06 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e81f09 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e81f0a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e81f0c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12e81f0e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e81f11 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 12e81f14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e81f17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e81f19 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e81f1b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e81f1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e81f21 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e81f24 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12e81f27 jmp 0x12e81eb7 */
  goto L_12e81eb7;
L_12e81f29:;
  /* 12e81f29 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81f2d jne 0x12e81f3e */
  if (!C.zf) goto L_12e81f3e;
  /* 12e81f2f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e81f32 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e81f34 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e81f37 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e81f3a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e81f3c jmp 0x12e81f44 */
  goto L_12e81f44;
L_12e81f3e:;
  /* 12e81f3e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e81f41 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_12e81f44:;
  /* 12e81f44 pop esi */
  ESI = (pop32());
  /* 12e81f45 mov esp, ebp */
  ESP = (EBP);
  /* 12e81f47 pop ebp */
  EBP = (pop32());
  /* 12e81f48 ret  */
  ESPCHK(0x12e81e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f50 @ 0x12e81f50 (61 bytes, 18 insns) */
void f_12e81f50(void) {
  FTRACE(0x12e81f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e81f50 push ebp */
  push32((uint32_t)(EBP));
  /* 12e81f51 mov ebp, esp */
  EBP = (ESP);
  /* 12e81f53 cmp dword ptr [0x12e8f828], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f828))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81f5a jne 0x12e81f8b */
  if (!C.zf) goto L_12e81f8b;
  /* 12e81f5c push 0xb */
  push32((uint32_t)(0xbu));
  /* 12e81f5e call 0x12e76e50 */
  push32(0x12e81f63u); f_12e76e50();
  /* 12e81f63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e81f66 cmp dword ptr [0x12e8f828], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f828))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81f6d jne 0x12e81f81 */
  if (!C.zf) goto L_12e81f81;
  /* 12e81f6f call 0x12e81fb0 */
  push32(0x12e81f74u); f_12e81fb0();
  /* 12e81f74 mov eax, dword ptr [0x12e8f828] */
  EAX = (r32((uint32_t)(0x12e8f828)));
  /* 12e81f79 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e81f7c mov dword ptr [0x12e8f828], eax */
  w32((uint32_t)(0x12e8f828), (EAX));
L_12e81f81:;
  /* 12e81f81 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12e81f83 call 0x12e76ef0 */
  push32(0x12e81f88u); f_12e76ef0();
  /* 12e81f88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e81f8b:;
  /* 12e81f8b pop ebp */
  EBP = (pop32());
  /* 12e81f8c ret  */
  ESPCHK(0x12e81f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f90 @ 0x12e81f90 (30 bytes, 11 insns) */
void f_12e81f90(void) {
  FTRACE(0x12e81f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e81f90 push ebp */
  push32((uint32_t)(EBP));
  /* 12e81f91 mov ebp, esp */
  EBP = (ESP);
  /* 12e81f93 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12e81f95 call 0x12e76e50 */
  push32(0x12e81f9au); f_12e76e50();
  /* 12e81f9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e81f9d call 0x12e81fb0 */
  push32(0x12e81fa2u); f_12e81fb0();
  /* 12e81fa2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12e81fa4 call 0x12e76ef0 */
  push32(0x12e81fa9u); f_12e76ef0();
  /* 12e81fa9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e81fac pop ebp */
  EBP = (pop32());
  /* 12e81fad ret  */
  ESPCHK(0x12e81f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10011fb0 @ 0x12e81fb0 (939 bytes, 266 insns) */
void f_12e81fb0(void) {
  FTRACE(0x12e81fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e81fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e81fb1 mov ebp, esp */
  EBP = (ESP);
  /* 12e81fb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e81fb6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e81fbd push 0xc */
  push32((uint32_t)(0xcu));
  /* 12e81fbf call 0x12e76e50 */
  push32(0x12e81fc4u); f_12e76e50();
  /* 12e81fc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e81fc7 mov dword ptr [0x12e8f770], 0 */
  w32((uint32_t)(0x12e8f770), (0x0u));
  /* 12e81fd1 mov dword ptr [0x12e8ee58], 0xffffffff */
  w32((uint32_t)(0x12e8ee58), (0xffffffffu));
  /* 12e81fdb mov eax, dword ptr [0x12e8ee58] */
  EAX = (r32((uint32_t)(0x12e8ee58)));
  /* 12e81fe0 mov dword ptr [0x12e8ee48], eax */
  w32((uint32_t)(0x12e8ee48), (EAX));
  /* 12e81fe5 push 0x12e8b920 */
  push32((uint32_t)(0x12e8b920u));
  /* 12e81fea call 0x12e82e30 */
  push32(0x12e81fefu); f_12e82e30();
  /* 12e81fef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e81ff2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e81ff5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e81ff9 jne 0x12e82133 */
  if (!C.zf) goto L_12e82133;
  /* 12e81fff push 0xc */
  push32((uint32_t)(0xcu));
  /* 12e82001 call 0x12e76ef0 */
  push32(0x12e82006u); f_12e76ef0();
  /* 12e82006 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82009 push 0x12e8f778 */
  push32((uint32_t)(0x12e8f778u));
  /* 12e8200e call dword ptr [0x12e9229c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9229c))), 0x12e82014u);
  /* 12e82014 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82017 je 0x12e8212e */
  if (C.zf) goto L_12e8212e;
  /* 12e8201d mov dword ptr [0x12e8f770], 1 */
  w32((uint32_t)(0x12e8f770), (0x1u));
  /* 12e82027 mov ecx, dword ptr [0x12e8f778] */
  ECX = (r32((uint32_t)(0x12e8f778)));
  /* 12e8202d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e82030 mov dword ptr [0x12e8edb0], ecx */
  w32((uint32_t)(0x12e8edb0), (ECX));
  /* 12e82036 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e82038 mov dx, word ptr [0x12e8f7be] */
  DX = (r16((uint32_t)(0x12e8f7be)));
  /* 12e8203f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e82041 je 0x12e82059 */
  if (C.zf) goto L_12e82059;
  /* 12e82043 mov eax, dword ptr [0x12e8f7cc] */
  EAX = (r32((uint32_t)(0x12e8f7cc)));
  /* 12e82048 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e8204b mov ecx, dword ptr [0x12e8edb0] */
  ECX = (r32((uint32_t)(0x12e8edb0)));
  /* 12e82051 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82053 mov dword ptr [0x12e8edb0], ecx */
  w32((uint32_t)(0x12e8edb0), (ECX));
L_12e82059:;
  /* 12e82059 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e8205b mov dx, word ptr [0x12e8f812] */
  DX = (r16((uint32_t)(0x12e8f812)));
  /* 12e82062 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e82064 je 0x12e8208e */
  if (C.zf) goto L_12e8208e;
  /* 12e82066 cmp dword ptr [0x12e8f820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8206d je 0x12e8208e */
  if (C.zf) goto L_12e8208e;
  /* 12e8206f mov dword ptr [0x12e8edb4], 1 */
  w32((uint32_t)(0x12e8edb4), (0x1u));
  /* 12e82079 mov eax, dword ptr [0x12e8f820] */
  EAX = (r32((uint32_t)(0x12e8f820)));
  /* 12e8207e sub eax, dword ptr [0x12e8f7cc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e8f7cc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e82084 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e82087 mov dword ptr [0x12e8edb8], eax */
  w32((uint32_t)(0x12e8edb8), (EAX));
  /* 12e8208c jmp 0x12e820a2 */
  goto L_12e820a2;
L_12e8208e:;
  /* 12e8208e mov dword ptr [0x12e8edb4], 0 */
  w32((uint32_t)(0x12e8edb4), (0x0u));
  /* 12e82098 mov dword ptr [0x12e8edb8], 0 */
  w32((uint32_t)(0x12e8edb8), (0x0u));
L_12e820a2:;
  /* 12e820a2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12e820a5 push ecx */
  push32((uint32_t)(ECX));
  /* 12e820a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e820a8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12e820aa mov edx, dword ptr [0x12e8ee3c] */
  EDX = (r32((uint32_t)(0x12e8ee3c)));
  /* 12e820b0 push edx */
  push32((uint32_t)(EDX));
  /* 12e820b1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e820b3 push 0x12e8f77c */
  push32((uint32_t)(0x12e8f77cu));
  /* 12e820b8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12e820bd mov eax, dword ptr [0x12e8f6e0] */
  EAX = (r32((uint32_t)(0x12e8f6e0)));
  /* 12e820c2 push eax */
  push32((uint32_t)(EAX));
  /* 12e820c3 call dword ptr [0x12e92380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92380))), 0x12e820c9u);
  /* 12e820c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e820cb je 0x12e820df */
  if (C.zf) goto L_12e820df;
  /* 12e820cd cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e820d1 jne 0x12e820df */
  if (!C.zf) goto L_12e820df;
  /* 12e820d3 mov ecx, dword ptr [0x12e8ee3c] */
  ECX = (r32((uint32_t)(0x12e8ee3c)));
  /* 12e820d9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 12e820dd jmp 0x12e820e8 */
  goto L_12e820e8;
L_12e820df:;
  /* 12e820df mov edx, dword ptr [0x12e8ee3c] */
  EDX = (r32((uint32_t)(0x12e8ee3c)));
  /* 12e820e5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12e820e8:;
  /* 12e820e8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12e820eb push eax */
  push32((uint32_t)(EAX));
  /* 12e820ec push 0 */
  push32((uint32_t)(0x0u));
  /* 12e820ee push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12e820f0 mov ecx, dword ptr [0x12e8ee40] */
  ECX = (r32((uint32_t)(0x12e8ee40)));
  /* 12e820f6 push ecx */
  push32((uint32_t)(ECX));
  /* 12e820f7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e820f9 push 0x12e8f7d0 */
  push32((uint32_t)(0x12e8f7d0u));
  /* 12e820fe push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12e82103 mov edx, dword ptr [0x12e8f6e0] */
  EDX = (r32((uint32_t)(0x12e8f6e0)));
  /* 12e82109 push edx */
  push32((uint32_t)(EDX));
  /* 12e8210a call dword ptr [0x12e92380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92380))), 0x12e82110u);
  /* 12e82110 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e82112 je 0x12e82125 */
  if (C.zf) goto L_12e82125;
  /* 12e82114 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82118 jne 0x12e82125 */
  if (!C.zf) goto L_12e82125;
  /* 12e8211a mov eax, dword ptr [0x12e8ee40] */
  EAX = (r32((uint32_t)(0x12e8ee40)));
  /* 12e8211f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 12e82123 jmp 0x12e8212e */
  goto L_12e8212e;
L_12e82125:;
  /* 12e82125 mov ecx, dword ptr [0x12e8ee40] */
  ECX = (r32((uint32_t)(0x12e8ee40)));
  /* 12e8212b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_12e8212e:;
  /* 12e8212e jmp 0x12e82357 */
  goto L_12e82357;
L_12e82133:;
  /* 12e82133 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e82136 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e82139 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e8213b je 0x12e8215d */
  if (C.zf) goto L_12e8215d;
  /* 12e8213d cmp dword ptr [0x12e8f824], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f824))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82144 je 0x12e8216c */
  if (C.zf) goto L_12e8216c;
  /* 12e82146 mov ecx, dword ptr [0x12e8f824] */
  ECX = (r32((uint32_t)(0x12e8f824)));
  /* 12e8214c push ecx */
  push32((uint32_t)(ECX));
  /* 12e8214d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e82150 push edx */
  push32((uint32_t)(EDX));
  /* 12e82151 call 0x12e7f0e0 */
  push32(0x12e82156u); f_12e7f0e0();
  /* 12e82156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82159 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e8215b jne 0x12e8216c */
  if (!C.zf) goto L_12e8216c;
L_12e8215d:;
  /* 12e8215d push 0xc */
  push32((uint32_t)(0xcu));
  /* 12e8215f call 0x12e76ef0 */
  push32(0x12e82164u); f_12e76ef0();
  /* 12e82164 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82167 jmp 0x12e82357 */
  goto L_12e82357;
L_12e8216c:;
  /* 12e8216c push 2 */
  push32((uint32_t)(0x2u));
  /* 12e8216e mov eax, dword ptr [0x12e8f824] */
  EAX = (r32((uint32_t)(0x12e8f824)));
  /* 12e82173 push eax */
  push32((uint32_t)(EAX));
  /* 12e82174 call 0x12e73ee0 */
  push32(0x12e82179u); f_12e73ee0();
  /* 12e82179 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e8217c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 12e82181 push 0x12e8b918 */
  push32((uint32_t)(0x12e8b918u));
  /* 12e82186 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e82188 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e8218b push ecx */
  push32((uint32_t)(ECX));
  /* 12e8218c call 0x12e76280 */
  push32(0x12e82191u); f_12e76280();
  /* 12e82191 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82194 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82197 push eax */
  push32((uint32_t)(EAX));
  /* 12e82198 call 0x12e73450 */
  push32(0x12e8219du); f_12e73450();
  /* 12e8219d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e821a0 mov dword ptr [0x12e8f824], eax */
  w32((uint32_t)(0x12e8f824), (EAX));
  /* 12e821a5 cmp dword ptr [0x12e8f824], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f824))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e821ac jne 0x12e821bd */
  if (!C.zf) goto L_12e821bd;
  /* 12e821ae push 0xc */
  push32((uint32_t)(0xcu));
  /* 12e821b0 call 0x12e76ef0 */
  push32(0x12e821b5u); f_12e76ef0();
  /* 12e821b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e821b8 jmp 0x12e82357 */
  goto L_12e82357;
L_12e821bd:;
  /* 12e821bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e821c0 push edx */
  push32((uint32_t)(EDX));
  /* 12e821c1 mov eax, dword ptr [0x12e8f824] */
  EAX = (r32((uint32_t)(0x12e8f824)));
  /* 12e821c6 push eax */
  push32((uint32_t)(EAX));
  /* 12e821c7 call 0x12e76400 */
  push32(0x12e821ccu); f_12e76400();
  /* 12e821cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e821cf push 0xc */
  push32((uint32_t)(0xcu));
  /* 12e821d1 call 0x12e76ef0 */
  push32(0x12e821d6u); f_12e76ef0();
  /* 12e821d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e821d9 push 3 */
  push32((uint32_t)(0x3u));
  /* 12e821db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e821de push ecx */
  push32((uint32_t)(ECX));
  /* 12e821df mov edx, dword ptr [0x12e8ee3c] */
  EDX = (r32((uint32_t)(0x12e8ee3c)));
  /* 12e821e5 push edx */
  push32((uint32_t)(EDX));
  /* 12e821e6 call 0x12e76c70 */
  push32(0x12e821ebu); f_12e76c70();
  /* 12e821eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e821ee mov eax, dword ptr [0x12e8ee3c] */
  EAX = (r32((uint32_t)(0x12e8ee3c)));
  /* 12e821f3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 12e821f7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e821fa add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e821fd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e82200 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e82203 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e82206 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82209 jne 0x12e8221d */
  if (!C.zf) goto L_12e8221d;
  /* 12e8220b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e8220e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82211 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e82214 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e82217 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e8221a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12e8221d:;
  /* 12e8221d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e82220 push eax */
  push32((uint32_t)(EAX));
  /* 12e82221 call 0x12e81d00 */
  push32(0x12e82226u); f_12e81d00();
  /* 12e82226 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82229 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e8222f mov dword ptr [0x12e8edb0], eax */
  w32((uint32_t)(0x12e8edb0), (EAX));
L_12e82234:;
  /* 12e82234 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e82237 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e8223a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8223d je 0x12e82255 */
  if (C.zf) goto L_12e82255;
  /* 12e8223f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e82242 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e82245 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82248 jl 0x12e82260 */
  if ((C.sf!=C.of)) goto L_12e82260;
  /* 12e8224a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e8224d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e82250 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82253 jg 0x12e82260 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e82260;
L_12e82255:;
  /* 12e82255 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e82258 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e8225b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e8225e jmp 0x12e82234 */
  goto L_12e82234;
L_12e82260:;
  /* 12e82260 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e82263 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e82266 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82269 jne 0x12e82305 */
  if (!C.zf) goto L_12e82305;
  /* 12e8226f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e82272 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82275 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e82278 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e8227b push edx */
  push32((uint32_t)(EDX));
  /* 12e8227c call 0x12e81d00 */
  push32(0x12e82281u); f_12e81d00();
  /* 12e82281 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82284 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e82287 mov ecx, dword ptr [0x12e8edb0] */
  ECX = (r32((uint32_t)(0x12e8edb0)));
  /* 12e8228d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e8228f mov dword ptr [0x12e8edb0], ecx */
  w32((uint32_t)(0x12e8edb0), (ECX));
L_12e82295:;
  /* 12e82295 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e82298 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e8229b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8229e jl 0x12e822b6 */
  if ((C.sf!=C.of)) goto L_12e822b6;
  /* 12e822a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e822a3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e822a6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e822a9 jg 0x12e822b6 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e822b6;
  /* 12e822ab mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e822ae add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e822b1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e822b4 jmp 0x12e82295 */
  goto L_12e82295;
L_12e822b6:;
  /* 12e822b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e822b9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e822bc cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e822bf jne 0x12e82305 */
  if (!C.zf) goto L_12e82305;
  /* 12e822c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e822c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e822c7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e822ca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e822cd push ecx */
  push32((uint32_t)(ECX));
  /* 12e822ce call 0x12e81d00 */
  push32(0x12e822d3u); f_12e81d00();
  /* 12e822d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e822d6 mov edx, dword ptr [0x12e8edb0] */
  EDX = (r32((uint32_t)(0x12e8edb0)));
  /* 12e822dc add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e822de mov dword ptr [0x12e8edb0], edx */
  w32((uint32_t)(0x12e8edb0), (EDX));
L_12e822e4:;
  /* 12e822e4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e822e7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e822ea cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e822ed jl 0x12e82305 */
  if ((C.sf!=C.of)) goto L_12e82305;
  /* 12e822ef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e822f2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12e822f5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e822f8 jg 0x12e82305 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e82305;
  /* 12e822fa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e822fd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82300 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e82303 jmp 0x12e822e4 */
  goto L_12e822e4;
L_12e82305:;
  /* 12e82305 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82309 je 0x12e82319 */
  if (C.zf) goto L_12e82319;
  /* 12e8230b mov edx, dword ptr [0x12e8edb0] */
  EDX = (r32((uint32_t)(0x12e8edb0)));
  /* 12e82311 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e82313 mov dword ptr [0x12e8edb0], edx */
  w32((uint32_t)(0x12e8edb0), (EDX));
L_12e82319:;
  /* 12e82319 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e8231c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12e8231f mov dword ptr [0x12e8edb4], ecx */
  w32((uint32_t)(0x12e8edb4), (ECX));
  /* 12e82325 cmp dword ptr [0x12e8edb4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8edb4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8232c je 0x12e8234e */
  if (C.zf) goto L_12e8234e;
  /* 12e8232e push 3 */
  push32((uint32_t)(0x3u));
  /* 12e82330 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e82333 push edx */
  push32((uint32_t)(EDX));
  /* 12e82334 mov eax, dword ptr [0x12e8ee40] */
  EAX = (r32((uint32_t)(0x12e8ee40)));
  /* 12e82339 push eax */
  push32((uint32_t)(EAX));
  /* 12e8233a call 0x12e76c70 */
  push32(0x12e8233fu); f_12e76c70();
  /* 12e8233f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82342 mov ecx, dword ptr [0x12e8ee40] */
  ECX = (r32((uint32_t)(0x12e8ee40)));
  /* 12e82348 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 12e8234c jmp 0x12e82357 */
  goto L_12e82357;
L_12e8234e:;
  /* 12e8234e mov edx, dword ptr [0x12e8ee40] */
  EDX = (r32((uint32_t)(0x12e8ee40)));
  /* 12e82354 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12e82357:;
  /* 12e82357 mov esp, ebp */
  ESP = (EBP);
  /* 12e82359 pop ebp */
  EBP = (pop32());
  /* 12e8235a ret  */
  ESPCHK(0x12e81fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012360 @ 0x12e82360 (46 bytes, 18 insns) */
void f_12e82360(void) {
  FTRACE(0x12e82360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e82360 push ebp */
  push32((uint32_t)(EBP));
  /* 12e82361 mov ebp, esp */
  EBP = (ESP);
  /* 12e82363 push ecx */
  push32((uint32_t)(ECX));
  /* 12e82364 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12e82366 call 0x12e76e50 */
  push32(0x12e8236bu); f_12e76e50();
  /* 12e8236b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e8236e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e82371 push eax */
  push32((uint32_t)(EAX));
  /* 12e82372 call 0x12e82390 */
  push32(0x12e82377u); f_12e82390();
  /* 12e82377 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e8237a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e8237d push 0xb */
  push32((uint32_t)(0xbu));
  /* 12e8237f call 0x12e76ef0 */
  push32(0x12e82384u); f_12e76ef0();
  /* 12e82384 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82387 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e8238a mov esp, ebp */
  ESP = (EBP);
  /* 12e8238c pop ebp */
  EBP = (pop32());
  /* 12e8238d ret  */
  ESPCHK(0x12e82360u, _esp0);
  ESP += 4; return;
}

/* FUN_10012390 @ 0x12e82390 (762 bytes, 246 insns) */
void f_12e82390(void) {
  FTRACE(0x12e82390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e82390 push ebp */
  push32((uint32_t)(EBP));
  /* 12e82391 mov ebp, esp */
  EBP = (ESP);
  /* 12e82393 push ecx */
  push32((uint32_t)(ECX));
  /* 12e82394 cmp dword ptr [0x12e8edb4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8edb4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8239b jne 0x12e823a4 */
  if (!C.zf) goto L_12e823a4;
  /* 12e8239d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e8239f jmp 0x12e82686 */
  goto L_12e82686;
L_12e823a4:;
  /* 12e823a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e823a7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12e823aa cmp ecx, dword ptr [0x12e8ee48] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e8ee48))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e823b0 jne 0x12e823c4 */
  if (!C.zf) goto L_12e823c4;
  /* 12e823b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e823b5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e823b8 cmp eax, dword ptr [0x12e8ee58] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e8ee58))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e823be je 0x12e8258b */
  if (C.zf) goto L_12e8258b;
L_12e823c4:;
  /* 12e823c4 cmp dword ptr [0x12e8f770], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f770))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e823cb je 0x12e82545 */
  if (C.zf) goto L_12e82545;
  /* 12e823d1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e823d3 mov cx, word ptr [0x12e8f810] */
  CX = (r16((uint32_t)(0x12e8f810)));
  /* 12e823da test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e823dc jne 0x12e82439 */
  if (!C.zf) goto L_12e82439;
  /* 12e823de xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e823e0 mov dx, word ptr [0x12e8f81e] */
  DX = (r16((uint32_t)(0x12e8f81e)));
  /* 12e823e7 push edx */
  push32((uint32_t)(EDX));
  /* 12e823e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e823ea mov ax, word ptr [0x12e8f81c] */
  AX = (r16((uint32_t)(0x12e8f81c)));
  /* 12e823f0 push eax */
  push32((uint32_t)(EAX));
  /* 12e823f1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e823f3 mov cx, word ptr [0x12e8f81a] */
  CX = (r16((uint32_t)(0x12e8f81a)));
  /* 12e823fa push ecx */
  push32((uint32_t)(ECX));
  /* 12e823fb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e823fd mov dx, word ptr [0x12e8f818] */
  DX = (r16((uint32_t)(0x12e8f818)));
  /* 12e82404 push edx */
  push32((uint32_t)(EDX));
  /* 12e82405 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e82407 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e82409 mov ax, word ptr [0x12e8f814] */
  AX = (r16((uint32_t)(0x12e8f814)));
  /* 12e8240f push eax */
  push32((uint32_t)(EAX));
  /* 12e82410 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e82412 mov cx, word ptr [0x12e8f816] */
  CX = (r16((uint32_t)(0x12e8f816)));
  /* 12e82419 push ecx */
  push32((uint32_t)(ECX));
  /* 12e8241a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e8241c mov dx, word ptr [0x12e8f812] */
  DX = (r16((uint32_t)(0x12e8f812)));
  /* 12e82423 push edx */
  push32((uint32_t)(EDX));
  /* 12e82424 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e82427 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12e8242a push ecx */
  push32((uint32_t)(ECX));
  /* 12e8242b push 1 */
  push32((uint32_t)(0x1u));
  /* 12e8242d push 1 */
  push32((uint32_t)(0x1u));
  /* 12e8242f call 0x12e82690 */
  push32(0x12e82434u); f_12e82690();
  /* 12e82434 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82437 jmp 0x12e8248a */
  goto L_12e8248a;
L_12e82439:;
  /* 12e82439 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e8243b mov dx, word ptr [0x12e8f81e] */
  DX = (r16((uint32_t)(0x12e8f81e)));
  /* 12e82442 push edx */
  push32((uint32_t)(EDX));
  /* 12e82443 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e82445 mov ax, word ptr [0x12e8f81c] */
  AX = (r16((uint32_t)(0x12e8f81c)));
  /* 12e8244b push eax */
  push32((uint32_t)(EAX));
  /* 12e8244c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e8244e mov cx, word ptr [0x12e8f81a] */
  CX = (r16((uint32_t)(0x12e8f81a)));
  /* 12e82455 push ecx */
  push32((uint32_t)(ECX));
  /* 12e82456 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e82458 mov dx, word ptr [0x12e8f818] */
  DX = (r16((uint32_t)(0x12e8f818)));
  /* 12e8245f push edx */
  push32((uint32_t)(EDX));
  /* 12e82460 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e82462 mov ax, word ptr [0x12e8f816] */
  AX = (r16((uint32_t)(0x12e8f816)));
  /* 12e82468 push eax */
  push32((uint32_t)(EAX));
  /* 12e82469 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e8246b push 0 */
  push32((uint32_t)(0x0u));
  /* 12e8246d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e8246f mov cx, word ptr [0x12e8f812] */
  CX = (r16((uint32_t)(0x12e8f812)));
  /* 12e82476 push ecx */
  push32((uint32_t)(ECX));
  /* 12e82477 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e8247a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e8247d push eax */
  push32((uint32_t)(EAX));
  /* 12e8247e push 0 */
  push32((uint32_t)(0x0u));
  /* 12e82480 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e82482 call 0x12e82690 */
  push32(0x12e82487u); f_12e82690();
  /* 12e82487 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e8248a:;
  /* 12e8248a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e8248c mov cx, word ptr [0x12e8f7bc] */
  CX = (r16((uint32_t)(0x12e8f7bc)));
  /* 12e82493 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e82495 jne 0x12e824f2 */
  if (!C.zf) goto L_12e824f2;
  /* 12e82497 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e82499 mov dx, word ptr [0x12e8f7ca] */
  DX = (r16((uint32_t)(0x12e8f7ca)));
  /* 12e824a0 push edx */
  push32((uint32_t)(EDX));
  /* 12e824a1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e824a3 mov ax, word ptr [0x12e8f7c8] */
  AX = (r16((uint32_t)(0x12e8f7c8)));
  /* 12e824a9 push eax */
  push32((uint32_t)(EAX));
  /* 12e824aa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e824ac mov cx, word ptr [0x12e8f7c6] */
  CX = (r16((uint32_t)(0x12e8f7c6)));
  /* 12e824b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e824b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e824b6 mov dx, word ptr [0x12e8f7c4] */
  DX = (r16((uint32_t)(0x12e8f7c4)));
  /* 12e824bd push edx */
  push32((uint32_t)(EDX));
  /* 12e824be push 0 */
  push32((uint32_t)(0x0u));
  /* 12e824c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e824c2 mov ax, word ptr [0x12e8f7c0] */
  AX = (r16((uint32_t)(0x12e8f7c0)));
  /* 12e824c8 push eax */
  push32((uint32_t)(EAX));
  /* 12e824c9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e824cb mov cx, word ptr [0x12e8f7c2] */
  CX = (r16((uint32_t)(0x12e8f7c2)));
  /* 12e824d2 push ecx */
  push32((uint32_t)(ECX));
  /* 12e824d3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e824d5 mov dx, word ptr [0x12e8f7be] */
  DX = (r16((uint32_t)(0x12e8f7be)));
  /* 12e824dc push edx */
  push32((uint32_t)(EDX));
  /* 12e824dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e824e0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12e824e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e824e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e824e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e824e8 call 0x12e82690 */
  push32(0x12e824edu); f_12e82690();
  /* 12e824ed add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e824f0 jmp 0x12e82543 */
  goto L_12e82543;
L_12e824f2:;
  /* 12e824f2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e824f4 mov dx, word ptr [0x12e8f7ca] */
  DX = (r16((uint32_t)(0x12e8f7ca)));
  /* 12e824fb push edx */
  push32((uint32_t)(EDX));
  /* 12e824fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e824fe mov ax, word ptr [0x12e8f7c8] */
  AX = (r16((uint32_t)(0x12e8f7c8)));
  /* 12e82504 push eax */
  push32((uint32_t)(EAX));
  /* 12e82505 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e82507 mov cx, word ptr [0x12e8f7c6] */
  CX = (r16((uint32_t)(0x12e8f7c6)));
  /* 12e8250e push ecx */
  push32((uint32_t)(ECX));
  /* 12e8250f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e82511 mov dx, word ptr [0x12e8f7c4] */
  DX = (r16((uint32_t)(0x12e8f7c4)));
  /* 12e82518 push edx */
  push32((uint32_t)(EDX));
  /* 12e82519 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e8251b mov ax, word ptr [0x12e8f7c2] */
  AX = (r16((uint32_t)(0x12e8f7c2)));
  /* 12e82521 push eax */
  push32((uint32_t)(EAX));
  /* 12e82522 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e82524 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e82526 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e82528 mov cx, word ptr [0x12e8f7be] */
  CX = (r16((uint32_t)(0x12e8f7be)));
  /* 12e8252f push ecx */
  push32((uint32_t)(ECX));
  /* 12e82530 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e82533 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12e82536 push eax */
  push32((uint32_t)(EAX));
  /* 12e82537 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e82539 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e8253b call 0x12e82690 */
  push32(0x12e82540u); f_12e82690();
  /* 12e82540 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e82543:;
  /* 12e82543 jmp 0x12e8258b */
  goto L_12e8258b;
L_12e82545:;
  /* 12e82545 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e82547 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e82549 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e8254b push 2 */
  push32((uint32_t)(0x2u));
  /* 12e8254d push 0 */
  push32((uint32_t)(0x0u));
  /* 12e8254f push 0 */
  push32((uint32_t)(0x0u));
  /* 12e82551 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e82553 push 4 */
  push32((uint32_t)(0x4u));
  /* 12e82555 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e82558 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12e8255b push edx */
  push32((uint32_t)(EDX));
  /* 12e8255c push 1 */
  push32((uint32_t)(0x1u));
  /* 12e8255e push 1 */
  push32((uint32_t)(0x1u));
  /* 12e82560 call 0x12e82690 */
  push32(0x12e82565u); f_12e82690();
  /* 12e82565 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82568 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e8256a push 0 */
  push32((uint32_t)(0x0u));
  /* 12e8256c push 0 */
  push32((uint32_t)(0x0u));
  /* 12e8256e push 2 */
  push32((uint32_t)(0x2u));
  /* 12e82570 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e82572 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e82574 push 5 */
  push32((uint32_t)(0x5u));
  /* 12e82576 push 0xa */
  push32((uint32_t)(0xau));
  /* 12e82578 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e8257b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12e8257e push ecx */
  push32((uint32_t)(ECX));
  /* 12e8257f push 1 */
  push32((uint32_t)(0x1u));
  /* 12e82581 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e82583 call 0x12e82690 */
  push32(0x12e82588u); f_12e82690();
  /* 12e82588 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e8258b:;
  /* 12e8258b mov edx, dword ptr [0x12e8ee4c] */
  EDX = (r32((uint32_t)(0x12e8ee4c)));
  /* 12e82591 cmp edx, dword ptr [0x12e8ee5c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12e8ee5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82597 jge 0x12e825e4 */
  if ((C.sf==C.of)) goto L_12e825e4;
  /* 12e82599 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e8259c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12e8259f cmp ecx, dword ptr [0x12e8ee4c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e8ee4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e825a5 jl 0x12e825b5 */
  if ((C.sf!=C.of)) goto L_12e825b5;
  /* 12e825a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e825aa mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12e825ad cmp eax, dword ptr [0x12e8ee5c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e8ee5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e825b3 jle 0x12e825bc */
  if ((C.zf||C.sf!=C.of)) goto L_12e825bc;
L_12e825b5:;
  /* 12e825b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e825b7 jmp 0x12e82686 */
  goto L_12e82686;
L_12e825bc:;
  /* 12e825bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e825bf mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12e825c2 cmp edx, dword ptr [0x12e8ee4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12e8ee4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e825c8 jle 0x12e825e2 */
  if ((C.zf||C.sf!=C.of)) goto L_12e825e2;
  /* 12e825ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e825cd mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12e825d0 cmp ecx, dword ptr [0x12e8ee5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e8ee5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e825d6 jge 0x12e825e2 */
  if ((C.sf==C.of)) goto L_12e825e2;
  /* 12e825d8 mov eax, 1 */
  EAX = (0x1u);
  /* 12e825dd jmp 0x12e82686 */
  goto L_12e82686;
L_12e825e2:;
  /* 12e825e2 jmp 0x12e82627 */
  goto L_12e82627;
L_12e825e4:;
  /* 12e825e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e825e7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12e825ea cmp eax, dword ptr [0x12e8ee5c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e8ee5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e825f0 jl 0x12e82600 */
  if ((C.sf!=C.of)) goto L_12e82600;
  /* 12e825f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e825f5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12e825f8 cmp edx, dword ptr [0x12e8ee4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12e8ee4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e825fe jle 0x12e82607 */
  if ((C.zf||C.sf!=C.of)) goto L_12e82607;
L_12e82600:;
  /* 12e82600 mov eax, 1 */
  EAX = (0x1u);
  /* 12e82605 jmp 0x12e82686 */
  goto L_12e82686;
L_12e82607:;
  /* 12e82607 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e8260a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12e8260d cmp ecx, dword ptr [0x12e8ee5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e8ee5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82613 jle 0x12e82627 */
  if ((C.zf||C.sf!=C.of)) goto L_12e82627;
  /* 12e82615 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e82618 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12e8261b cmp eax, dword ptr [0x12e8ee4c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e8ee4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82621 jge 0x12e82627 */
  if ((C.sf==C.of)) goto L_12e82627;
  /* 12e82623 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e82625 jmp 0x12e82686 */
  goto L_12e82686;
L_12e82627:;
  /* 12e82627 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e8262a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12e8262d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e82630 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e82633 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e82635 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82637 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e8263a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12e8263d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e82643 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82645 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e8264b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e8264e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e82651 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12e82654 cmp edx, dword ptr [0x12e8ee4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12e8ee4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8265a jne 0x12e82672 */
  if (!C.zf) goto L_12e82672;
  /* 12e8265c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e8265f cmp eax, dword ptr [0x12e8ee50] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e8ee50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82665 jl 0x12e8266e */
  if ((C.sf!=C.of)) goto L_12e8266e;
  /* 12e82667 mov eax, 1 */
  EAX = (0x1u);
  /* 12e8266c jmp 0x12e82686 */
  goto L_12e82686;
L_12e8266e:;
  /* 12e8266e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e82670 jmp 0x12e82686 */
  goto L_12e82686;
L_12e82672:;
  /* 12e82672 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e82675 cmp ecx, dword ptr [0x12e8ee60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e8ee60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8267b jge 0x12e82684 */
  if ((C.sf==C.of)) goto L_12e82684;
  /* 12e8267d mov eax, 1 */
  EAX = (0x1u);
  /* 12e82682 jmp 0x12e82686 */
  goto L_12e82686;
L_12e82684:;
  /* 12e82684 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e82686:;
  /* 12e82686 mov esp, ebp */
  ESP = (EBP);
  /* 12e82688 pop ebp */
  EBP = (pop32());
  /* 12e82689 ret  */
  ESPCHK(0x12e82390u, _esp0);
  ESP += 4; return;
}

/* FUN_10012690 @ 0x12e82690 (504 bytes, 145 insns) */
void f_12e82690(void) {
  FTRACE(0x12e82690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e82690 push ebp */
  push32((uint32_t)(EBP));
  /* 12e82691 mov ebp, esp */
  EBP = (ESP);
  /* 12e82693 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e82696 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8269a jne 0x12e8276c */
  if (!C.zf) goto L_12e8276c;
  /* 12e826a0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e826a3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12e826a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e826a8 jne 0x12e826b9 */
  if (!C.zf) goto L_12e826b9;
  /* 12e826aa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e826ad mov edx, dword ptr [ecx*4 + 0x12e8ee6c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12e8ee6c)));
  /* 12e826b4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12e826b7 jmp 0x12e826c6 */
  goto L_12e826c6;
L_12e826b9:;
  /* 12e826b9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e826bc mov ecx, dword ptr [eax*4 + 0x12e8eea0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12e8eea0)));
  /* 12e826c3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12e826c6:;
  /* 12e826c6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e826c9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e826cc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12e826cf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e826d2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e826d5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e826db mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e826de add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e826e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e826e3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e826e6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 12e826e9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 12e826ed cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12e826ee mov ecx, 7 */
  ECX = (0x7u);
  /* 12e826f3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12e826f5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e826f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e826fb cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e826fe jg 0x12e82719 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e82719;
  /* 12e82700 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12e82703 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e82706 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e82709 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e8270c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e8270f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82712 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82714 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e82717 jmp 0x12e8272d */
  goto L_12e8272d;
L_12e82719:;
  /* 12e82719 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12e8271c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e8271f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e82722 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e82725 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82728 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e8272a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12e8272d:;
  /* 12e8272d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82731 jne 0x12e8276a */
  if (!C.zf) goto L_12e8276a;
  /* 12e82733 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e82736 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12e82739 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e8273b jne 0x12e8274c */
  if (!C.zf) goto L_12e8274c;
  /* 12e8273d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e82740 mov eax, dword ptr [edx*4 + 0x12e8ee70] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12e8ee70)));
  /* 12e82747 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12e8274a jmp 0x12e82759 */
  goto L_12e82759;
L_12e8274c:;
  /* 12e8274c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e8274f mov edx, dword ptr [ecx*4 + 0x12e8eea4] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12e8eea4)));
  /* 12e82756 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12e82759:;
  /* 12e82759 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e8275c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8275f jle 0x12e8276a */
  if ((C.zf||C.sf!=C.of)) goto L_12e8276a;
  /* 12e82761 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e82764 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e82767 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12e8276a:;
  /* 12e8276a jmp 0x12e827a1 */
  goto L_12e827a1;
L_12e8276c:;
  /* 12e8276c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e8276f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12e82772 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e82774 jne 0x12e82785 */
  if (!C.zf) goto L_12e82785;
  /* 12e82776 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e82779 mov ecx, dword ptr [eax*4 + 0x12e8ee6c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12e8ee6c)));
  /* 12e82780 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12e82783 jmp 0x12e82792 */
  goto L_12e82792;
L_12e82785:;
  /* 12e82785 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e82788 mov eax, dword ptr [edx*4 + 0x12e8eea0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12e8eea0)));
  /* 12e8278f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12e82792:;
  /* 12e82792 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e82795 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12e82798 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e8279b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e8279e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12e827a1:;
  /* 12e827a1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e827a5 jne 0x12e827e1 */
  if (!C.zf) goto L_12e827e1;
  /* 12e827a7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e827aa mov dword ptr [0x12e8ee4c], eax */
  w32((uint32_t)(0x12e8ee4c), (EAX));
  /* 12e827af mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12e827b2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e827b5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12e827b8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e827ba imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e827bd mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12e827c0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e827c2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e827c8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12e827cb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e827cd mov dword ptr [0x12e8ee50], ecx */
  w32((uint32_t)(0x12e8ee50), (ECX));
  /* 12e827d3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e827d6 mov dword ptr [0x12e8ee48], edx */
  w32((uint32_t)(0x12e8ee48), (EDX));
  /* 12e827dc jmp 0x12e82884 */
  goto L_12e82884;
L_12e827e1:;
  /* 12e827e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e827e4 mov dword ptr [0x12e8ee5c], eax */
  w32((uint32_t)(0x12e8ee5c), (EAX));
  /* 12e827e9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12e827ec imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e827ef mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12e827f2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e827f4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e827f7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12e827fa add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e827fc imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e82802 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12e82805 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82807 mov dword ptr [0x12e8ee60], ecx */
  w32((uint32_t)(0x12e8ee60), (ECX));
  /* 12e8280d mov edx, dword ptr [0x12e8edb8] */
  EDX = (r32((uint32_t)(0x12e8edb8)));
  /* 12e82813 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12e82819 mov eax, dword ptr [0x12e8ee60] */
  EAX = (r32((uint32_t)(0x12e8ee60)));
  /* 12e8281e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82820 mov dword ptr [0x12e8ee60], eax */
  w32((uint32_t)(0x12e8ee60), (EAX));
  /* 12e82825 cmp dword ptr [0x12e8ee60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8ee60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8282c jge 0x12e82851 */
  if ((C.sf==C.of)) goto L_12e82851;
  /* 12e8282e mov ecx, dword ptr [0x12e8ee60] */
  ECX = (r32((uint32_t)(0x12e8ee60)));
  /* 12e82834 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e8283a mov dword ptr [0x12e8ee60], ecx */
  w32((uint32_t)(0x12e8ee60), (ECX));
  /* 12e82840 mov edx, dword ptr [0x12e8ee5c] */
  EDX = (r32((uint32_t)(0x12e8ee5c)));
  /* 12e82846 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e82849 mov dword ptr [0x12e8ee5c], edx */
  w32((uint32_t)(0x12e8ee5c), (EDX));
  /* 12e8284f jmp 0x12e8287b */
  goto L_12e8287b;
L_12e82851:;
  /* 12e82851 cmp dword ptr [0x12e8ee60], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x12e8ee60))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8285b jl 0x12e8287b */
  if ((C.sf!=C.of)) goto L_12e8287b;
  /* 12e8285d mov eax, dword ptr [0x12e8ee60] */
  EAX = (r32((uint32_t)(0x12e8ee60)));
  /* 12e82862 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e82867 mov dword ptr [0x12e8ee60], eax */
  w32((uint32_t)(0x12e8ee60), (EAX));
  /* 12e8286c mov ecx, dword ptr [0x12e8ee5c] */
  ECX = (r32((uint32_t)(0x12e8ee5c)));
  /* 12e82872 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82875 mov dword ptr [0x12e8ee5c], ecx */
  w32((uint32_t)(0x12e8ee5c), (ECX));
L_12e8287b:;
  /* 12e8287b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e8287e mov dword ptr [0x12e8ee58], edx */
  w32((uint32_t)(0x12e8ee58), (EDX));
L_12e82884:;
  /* 12e82884 mov esp, ebp */
  ESP = (EBP);
  /* 12e82886 pop ebp */
  EBP = (pop32());
  /* 12e82887 ret  */
  ESPCHK(0x12e82690u, _esp0);
  ESP += 4; return;
}

/* FUN_10012890 @ 0x12e82890 (382 bytes, 135 insns) */
void f_12e82890(void) {
  FTRACE(0x12e82890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e82890 push ebp */
  push32((uint32_t)(EBP));
  /* 12e82891 mov ebp, esp */
  EBP = (ESP);
  /* 12e82893 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e82895 push 0x12e8b928 */
  push32((uint32_t)(0x12e8b928u));
  /* 12e8289a push 0x12e7c558 */
  push32((uint32_t)(0x12e7c558u));
  /* 12e8289f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12e828a5 push eax */
  push32((uint32_t)(EAX));
  /* 12e828a6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12e828ad add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e828b0 push ebx */
  push32((uint32_t)(EBX));
  /* 12e828b1 push esi */
  push32((uint32_t)(ESI));
  /* 12e828b2 push edi */
  push32((uint32_t)(EDI));
  /* 12e828b3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12e828b6 cmp dword ptr [0x12e8f82c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f82c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e828bd jne 0x12e82902 */
  if (!C.zf) goto L_12e82902;
  /* 12e828bf push 0 */
  push32((uint32_t)(0x0u));
  /* 12e828c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e828c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e828c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e828c7 call dword ptr [0x12e92298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92298))), 0x12e828cdu);
  /* 12e828cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e828cf je 0x12e828dd */
  if (C.zf) goto L_12e828dd;
  /* 12e828d1 mov dword ptr [0x12e8f82c], 1 */
  w32((uint32_t)(0x12e8f82c), (0x1u));
  /* 12e828db jmp 0x12e82902 */
  goto L_12e82902;
L_12e828dd:;
  /* 12e828dd push 0 */
  push32((uint32_t)(0x0u));
  /* 12e828df push 0 */
  push32((uint32_t)(0x0u));
  /* 12e828e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e828e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e828e5 call dword ptr [0x12e922b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922b0))), 0x12e828ebu);
  /* 12e828eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e828ed je 0x12e828fb */
  if (C.zf) goto L_12e828fb;
  /* 12e828ef mov dword ptr [0x12e8f82c], 2 */
  w32((uint32_t)(0x12e8f82c), (0x2u));
  /* 12e828f9 jmp 0x12e82902 */
  goto L_12e82902;
L_12e828fb:;
  /* 12e828fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e828fd jmp 0x12e82a11 */
  goto L_12e82a11;
L_12e82902:;
  /* 12e82902 cmp dword ptr [0x12e8f82c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f82c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82909 jne 0x12e82926 */
  if (!C.zf) goto L_12e82926;
  /* 12e8290b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e8290e push eax */
  push32((uint32_t)(EAX));
  /* 12e8290f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e82912 push ecx */
  push32((uint32_t)(ECX));
  /* 12e82913 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e82916 push edx */
  push32((uint32_t)(EDX));
  /* 12e82917 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e8291a push eax */
  push32((uint32_t)(EAX));
  /* 12e8291b call dword ptr [0x12e92298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92298))), 0x12e82921u);
  /* 12e82921 jmp 0x12e82a11 */
  goto L_12e82a11;
L_12e82926:;
  /* 12e82926 cmp dword ptr [0x12e8f82c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f82c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8292d jne 0x12e82a0f */
  if (!C.zf) goto L_12e82a0f;
  /* 12e82933 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82937 jne 0x12e82942 */
  if (!C.zf) goto L_12e82942;
  /* 12e82939 mov ecx, dword ptr [0x12e8f6e0] */
  ECX = (r32((uint32_t)(0x12e8f6e0)));
  /* 12e8293f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12e82942:;
  /* 12e82942 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e82944 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e82946 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e82949 push edx */
  push32((uint32_t)(EDX));
  /* 12e8294a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e8294d push eax */
  push32((uint32_t)(EAX));
  /* 12e8294e call dword ptr [0x12e922b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922b0))), 0x12e82954u);
  /* 12e82954 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12e82957 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8295b jne 0x12e82964 */
  if (!C.zf) goto L_12e82964;
  /* 12e8295d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e8295f jmp 0x12e82a11 */
  goto L_12e82a11;
L_12e82964:;
  /* 12e82964 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e8296b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e8296e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82971 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12e82973 call 0x12e765f0 */
  push32(0x12e82978u); f_12e765f0();
  /* 12e82978 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12e8297b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12e8297e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e82981 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12e82984 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12e8298b jmp 0x12e829a4 */
  goto L_12e829a4;
  /* 12e8298d mov eax, 1 */
  EAX = (0x1u);
  /* 12e82992 ret  */
  ESPCHK(0x12e82890u, _esp0);
  ESP += 4; return;
  /* 12e82993 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12e82996 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12e8299d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12e829a4:;
  /* 12e829a4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e829a8 jne 0x12e829ae */
  if (!C.zf) goto L_12e829ae;
  /* 12e829aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e829ac jmp 0x12e82a11 */
  goto L_12e82a11;
L_12e829ae:;
  /* 12e829ae mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e829b1 push edx */
  push32((uint32_t)(EDX));
  /* 12e829b2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e829b5 push eax */
  push32((uint32_t)(EAX));
  /* 12e829b6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e829b9 push ecx */
  push32((uint32_t)(ECX));
  /* 12e829ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e829bd push edx */
  push32((uint32_t)(EDX));
  /* 12e829be call dword ptr [0x12e922b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922b0))), 0x12e829c4u);
  /* 12e829c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e829c6 jne 0x12e829cc */
  if (!C.zf) goto L_12e829cc;
  /* 12e829c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e829ca jmp 0x12e82a11 */
  goto L_12e82a11;
L_12e829cc:;
  /* 12e829cc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e829d0 jne 0x12e829ed */
  if (!C.zf) goto L_12e829ed;
  /* 12e829d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e829d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e829d6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e829d8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e829db push eax */
  push32((uint32_t)(EAX));
  /* 12e829dc push 1 */
  push32((uint32_t)(0x1u));
  /* 12e829de mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e829e1 push ecx */
  push32((uint32_t)(ECX));
  /* 12e829e2 call dword ptr [0x12e922e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922e0))), 0x12e829e8u);
  /* 12e829e8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12e829eb jmp 0x12e82a0a */
  goto L_12e82a0a;
L_12e829ed:;
  /* 12e829ed mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e829f0 push edx */
  push32((uint32_t)(EDX));
  /* 12e829f1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e829f4 push eax */
  push32((uint32_t)(EAX));
  /* 12e829f5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e829f7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e829fa push ecx */
  push32((uint32_t)(ECX));
  /* 12e829fb push 1 */
  push32((uint32_t)(0x1u));
  /* 12e829fd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e82a00 push edx */
  push32((uint32_t)(EDX));
  /* 12e82a01 call dword ptr [0x12e922e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922e0))), 0x12e82a07u);
  /* 12e82a07 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12e82a0a:;
  /* 12e82a0a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e82a0d jmp 0x12e82a11 */
  goto L_12e82a11;
L_12e82a0f:;
  /* 12e82a0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e82a11:;
  /* 12e82a11 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12e82a14 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e82a17 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12e82a1e pop edi */
  EDI = (pop32());
  /* 12e82a1f pop esi */
  ESI = (pop32());
  /* 12e82a20 pop ebx */
  EBX = (pop32());
  /* 12e82a21 mov esp, ebp */
  ESP = (EBP);
  /* 12e82a23 pop ebp */
  EBP = (pop32());
  /* 12e82a24 ret  */
  ESPCHK(0x12e82890u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a30 @ 0x12e82a30 (398 bytes, 140 insns) */
void f_12e82a30(void) {
  FTRACE(0x12e82a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e82a30 push ebp */
  push32((uint32_t)(EBP));
  /* 12e82a31 mov ebp, esp */
  EBP = (ESP);
  /* 12e82a33 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e82a35 push 0x12e8b938 */
  push32((uint32_t)(0x12e8b938u));
  /* 12e82a3a push 0x12e7c558 */
  push32((uint32_t)(0x12e7c558u));
  /* 12e82a3f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12e82a45 push eax */
  push32((uint32_t)(EAX));
  /* 12e82a46 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12e82a4d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82a50 push ebx */
  push32((uint32_t)(EBX));
  /* 12e82a51 push esi */
  push32((uint32_t)(ESI));
  /* 12e82a52 push edi */
  push32((uint32_t)(EDI));
  /* 12e82a53 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12e82a56 cmp dword ptr [0x12e8f830], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f830))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82a5d jne 0x12e82aa2 */
  if (!C.zf) goto L_12e82aa2;
  /* 12e82a5f push 0 */
  push32((uint32_t)(0x0u));
  /* 12e82a61 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e82a63 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e82a65 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e82a67 call dword ptr [0x12e92298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92298))), 0x12e82a6du);
  /* 12e82a6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e82a6f je 0x12e82a7d */
  if (C.zf) goto L_12e82a7d;
  /* 12e82a71 mov dword ptr [0x12e8f830], 1 */
  w32((uint32_t)(0x12e8f830), (0x1u));
  /* 12e82a7b jmp 0x12e82aa2 */
  goto L_12e82aa2;
L_12e82a7d:;
  /* 12e82a7d push 0 */
  push32((uint32_t)(0x0u));
  /* 12e82a7f push 0 */
  push32((uint32_t)(0x0u));
  /* 12e82a81 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e82a83 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e82a85 call dword ptr [0x12e922b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922b0))), 0x12e82a8bu);
  /* 12e82a8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e82a8d je 0x12e82a9b */
  if (C.zf) goto L_12e82a9b;
  /* 12e82a8f mov dword ptr [0x12e8f830], 2 */
  w32((uint32_t)(0x12e8f830), (0x2u));
  /* 12e82a99 jmp 0x12e82aa2 */
  goto L_12e82aa2;
L_12e82a9b:;
  /* 12e82a9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e82a9d jmp 0x12e82bc1 */
  goto L_12e82bc1;
L_12e82aa2:;
  /* 12e82aa2 cmp dword ptr [0x12e8f830], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f830))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82aa9 jne 0x12e82ac6 */
  if (!C.zf) goto L_12e82ac6;
  /* 12e82aab mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e82aae push eax */
  push32((uint32_t)(EAX));
  /* 12e82aaf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e82ab2 push ecx */
  push32((uint32_t)(ECX));
  /* 12e82ab3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e82ab6 push edx */
  push32((uint32_t)(EDX));
  /* 12e82ab7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e82aba push eax */
  push32((uint32_t)(EAX));
  /* 12e82abb call dword ptr [0x12e922b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922b0))), 0x12e82ac1u);
  /* 12e82ac1 jmp 0x12e82bc1 */
  goto L_12e82bc1;
L_12e82ac6:;
  /* 12e82ac6 cmp dword ptr [0x12e8f830], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f830))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82acd jne 0x12e82bbf */
  if (!C.zf) goto L_12e82bbf;
  /* 12e82ad3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82ad7 jne 0x12e82ae2 */
  if (!C.zf) goto L_12e82ae2;
  /* 12e82ad9 mov ecx, dword ptr [0x12e8f6e0] */
  ECX = (r32((uint32_t)(0x12e8f6e0)));
  /* 12e82adf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12e82ae2:;
  /* 12e82ae2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e82ae4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e82ae6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e82ae9 push edx */
  push32((uint32_t)(EDX));
  /* 12e82aea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e82aed push eax */
  push32((uint32_t)(EAX));
  /* 12e82aee call dword ptr [0x12e92298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92298))), 0x12e82af4u);
  /* 12e82af4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12e82af7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82afb jne 0x12e82b04 */
  if (!C.zf) goto L_12e82b04;
  /* 12e82afd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e82aff jmp 0x12e82bc1 */
  goto L_12e82bc1;
L_12e82b04:;
  /* 12e82b04 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e82b0b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e82b0e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12e82b10 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82b13 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12e82b15 call 0x12e765f0 */
  push32(0x12e82b1au); f_12e765f0();
  /* 12e82b1a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12e82b1d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12e82b20 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e82b23 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12e82b26 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12e82b2d jmp 0x12e82b46 */
  goto L_12e82b46;
  /* 12e82b2f mov eax, 1 */
  EAX = (0x1u);
  /* 12e82b34 ret  */
  ESPCHK(0x12e82a30u, _esp0);
  ESP += 4; return;
  /* 12e82b35 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12e82b38 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12e82b3f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12e82b46:;
  /* 12e82b46 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82b4a jne 0x12e82b50 */
  if (!C.zf) goto L_12e82b50;
  /* 12e82b4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e82b4e jmp 0x12e82bc1 */
  goto L_12e82bc1;
L_12e82b50:;
  /* 12e82b50 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e82b53 push edx */
  push32((uint32_t)(EDX));
  /* 12e82b54 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e82b57 push eax */
  push32((uint32_t)(EAX));
  /* 12e82b58 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e82b5b push ecx */
  push32((uint32_t)(ECX));
  /* 12e82b5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e82b5f push edx */
  push32((uint32_t)(EDX));
  /* 12e82b60 call dword ptr [0x12e92298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92298))), 0x12e82b66u);
  /* 12e82b66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e82b68 jne 0x12e82b6e */
  if (!C.zf) goto L_12e82b6e;
  /* 12e82b6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e82b6c jmp 0x12e82bc1 */
  goto L_12e82bc1;
L_12e82b6e:;
  /* 12e82b6e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82b72 jne 0x12e82b96 */
  if (!C.zf) goto L_12e82b96;
  /* 12e82b74 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e82b76 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e82b78 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e82b7a push 0 */
  push32((uint32_t)(0x0u));
  /* 12e82b7c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e82b7e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e82b81 push eax */
  push32((uint32_t)(EAX));
  /* 12e82b82 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12e82b87 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e82b8a push ecx */
  push32((uint32_t)(ECX));
  /* 12e82b8b call dword ptr [0x12e92380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92380))), 0x12e82b91u);
  /* 12e82b91 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12e82b94 jmp 0x12e82bba */
  goto L_12e82bba;
L_12e82b96:;
  /* 12e82b96 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e82b98 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e82b9a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e82b9d push edx */
  push32((uint32_t)(EDX));
  /* 12e82b9e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e82ba1 push eax */
  push32((uint32_t)(EAX));
  /* 12e82ba2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e82ba4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e82ba7 push ecx */
  push32((uint32_t)(ECX));
  /* 12e82ba8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12e82bad mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e82bb0 push edx */
  push32((uint32_t)(EDX));
  /* 12e82bb1 call dword ptr [0x12e92380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92380))), 0x12e82bb7u);
  /* 12e82bb7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12e82bba:;
  /* 12e82bba mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e82bbd jmp 0x12e82bc1 */
  goto L_12e82bc1;
L_12e82bbf:;
  /* 12e82bbf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e82bc1:;
  /* 12e82bc1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12e82bc4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e82bc7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12e82bce pop edi */
  EDI = (pop32());
  /* 12e82bcf pop esi */
  ESI = (pop32());
  /* 12e82bd0 pop ebx */
  EBX = (pop32());
  /* 12e82bd1 mov esp, ebp */
  ESP = (EBP);
  /* 12e82bd3 pop ebp */
  EBP = (pop32());
  /* 12e82bd4 ret  */
  ESPCHK(0x12e82a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10012be0 @ 0x12e82be0 (11 bytes, 6 insns) */
void f_12e82be0(void) {
  FTRACE(0x12e82be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e82be0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e82be1 mov ebp, esp */
  EBP = (ESP);
  /* 12e82be3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e82be6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82be9 pop ebp */
  EBP = (pop32());
  /* 12e82bea ret  */
  ESPCHK(0x12e82be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012bf0 @ 0x12e82bf0 (147 bytes, 43 insns) */
void f_12e82bf0(void) {
  FTRACE(0x12e82bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e82bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e82bf1 mov ebp, esp */
  EBP = (ESP);
  /* 12e82bf3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e82bf4 cmp dword ptr [0x12e8f6d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f6d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82bfb jne 0x12e82c17 */
  if (!C.zf) goto L_12e82c17;
  /* 12e82bfd cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82c01 jl 0x12e82c12 */
  if ((C.sf!=C.of)) goto L_12e82c12;
  /* 12e82c03 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82c07 jg 0x12e82c12 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e82c12;
  /* 12e82c09 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e82c0c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82c0f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12e82c12:;
  /* 12e82c12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e82c15 jmp 0x12e82c7f */
  goto L_12e82c7f;
L_12e82c17:;
  /* 12e82c17 push 0x12e8f85c */
  push32((uint32_t)(0x12e8f85cu));
  /* 12e82c1c call dword ptr [0x12e92328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92328))), 0x12e82c22u);
  /* 12e82c22 cmp dword ptr [0x12e8f84c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f84c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82c29 je 0x12e82c49 */
  if (C.zf) goto L_12e82c49;
  /* 12e82c2b push 0x12e8f85c */
  push32((uint32_t)(0x12e8f85cu));
  /* 12e82c30 call dword ptr [0x12e92318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92318))), 0x12e82c36u);
  /* 12e82c36 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12e82c38 call 0x12e76e50 */
  push32(0x12e82c3du); f_12e76e50();
  /* 12e82c3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82c40 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12e82c47 jmp 0x12e82c50 */
  goto L_12e82c50;
L_12e82c49:;
  /* 12e82c49 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12e82c50:;
  /* 12e82c50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e82c53 push ecx */
  push32((uint32_t)(ECX));
  /* 12e82c54 call 0x12e82c90 */
  push32(0x12e82c59u); f_12e82c90();
  /* 12e82c59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82c5c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12e82c5f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82c63 je 0x12e82c71 */
  if (C.zf) goto L_12e82c71;
  /* 12e82c65 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12e82c67 call 0x12e76ef0 */
  push32(0x12e82c6cu); f_12e76ef0();
  /* 12e82c6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82c6f jmp 0x12e82c7c */
  goto L_12e82c7c;
L_12e82c71:;
  /* 12e82c71 push 0x12e8f85c */
  push32((uint32_t)(0x12e8f85cu));
  /* 12e82c76 call dword ptr [0x12e92318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92318))), 0x12e82c7cu);
L_12e82c7c:;
  /* 12e82c7c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12e82c7f:;
  /* 12e82c7f mov esp, ebp */
  ESP = (EBP);
  /* 12e82c81 pop ebp */
  EBP = (pop32());
  /* 12e82c82 ret  */
  ESPCHK(0x12e82bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c90 @ 0x12e82c90 (299 bytes, 91 insns) */
void f_12e82c90(void) {
  FTRACE(0x12e82c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e82c90 push ebp */
  push32((uint32_t)(EBP));
  /* 12e82c91 mov ebp, esp */
  EBP = (ESP);
  /* 12e82c93 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e82c96 cmp dword ptr [0x12e8f6d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f6d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82c9d jne 0x12e82cbc */
  if (!C.zf) goto L_12e82cbc;
  /* 12e82c9f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82ca3 jl 0x12e82cb4 */
  if ((C.sf!=C.of)) goto L_12e82cb4;
  /* 12e82ca5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82ca9 jg 0x12e82cb4 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e82cb4;
  /* 12e82cab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e82cae add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82cb1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12e82cb4:;
  /* 12e82cb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e82cb7 jmp 0x12e82db7 */
  goto L_12e82db7;
L_12e82cbc:;
  /* 12e82cbc cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82cc3 jge 0x12e82d03 */
  if ((C.sf==C.of)) goto L_12e82d03;
  /* 12e82cc5 cmp dword ptr [0x12e8dec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e8dec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82ccc jle 0x12e82ce1 */
  if ((C.zf||C.sf!=C.of)) goto L_12e82ce1;
  /* 12e82cce push 1 */
  push32((uint32_t)(0x1u));
  /* 12e82cd0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e82cd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e82cd4 call 0x12e79460 */
  push32(0x12e82cd9u); f_12e79460();
  /* 12e82cd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82cdc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12e82cdf jmp 0x12e82cf5 */
  goto L_12e82cf5;
L_12e82ce1:;
  /* 12e82ce1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e82ce4 mov eax, dword ptr [0x12e8dcb8] */
  EAX = (r32((uint32_t)(0x12e8dcb8)));
  /* 12e82ce9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e82ceb mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12e82cef and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12e82cf2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12e82cf5:;
  /* 12e82cf5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82cf9 jne 0x12e82d03 */
  if (!C.zf) goto L_12e82d03;
  /* 12e82cfb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e82cfe jmp 0x12e82db7 */
  goto L_12e82db7;
L_12e82d03:;
  /* 12e82d03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e82d06 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12e82d09 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e82d0f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e82d15 mov eax, dword ptr [0x12e8dcb8] */
  EAX = (r32((uint32_t)(0x12e8dcb8)));
  /* 12e82d1a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e82d1c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12e82d20 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12e82d26 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e82d28 je 0x12e82d4c */
  if (C.zf) goto L_12e82d4c;
  /* 12e82d2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e82d2d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12e82d30 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e82d36 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 12e82d39 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12e82d3c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 12e82d3f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 12e82d43 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12e82d4a jmp 0x12e82d5d */
  goto L_12e82d5d;
L_12e82d4c:;
  /* 12e82d4c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12e82d4f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12e82d52 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 12e82d56 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12e82d5d:;
  /* 12e82d5d push 1 */
  push32((uint32_t)(0x1u));
  /* 12e82d5f push 0 */
  push32((uint32_t)(0x0u));
  /* 12e82d61 push 3 */
  push32((uint32_t)(0x3u));
  /* 12e82d63 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12e82d66 push edx */
  push32((uint32_t)(EDX));
  /* 12e82d67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e82d6a push eax */
  push32((uint32_t)(EAX));
  /* 12e82d6b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12e82d6e push ecx */
  push32((uint32_t)(ECX));
  /* 12e82d6f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12e82d74 mov edx, dword ptr [0x12e8f6d0] */
  EDX = (r32((uint32_t)(0x12e8f6d0)));
  /* 12e82d7a push edx */
  push32((uint32_t)(EDX));
  /* 12e82d7b call 0x12e7b840 */
  push32(0x12e82d80u); f_12e7b840();
  /* 12e82d80 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82d83 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e82d86 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82d8a jne 0x12e82d91 */
  if (!C.zf) goto L_12e82d91;
  /* 12e82d8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e82d8f jmp 0x12e82db7 */
  goto L_12e82db7;
L_12e82d91:;
  /* 12e82d91 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82d95 jne 0x12e82da1 */
  if (!C.zf) goto L_12e82da1;
  /* 12e82d97 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e82d9a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e82d9f jmp 0x12e82db7 */
  goto L_12e82db7;
L_12e82da1:;
  /* 12e82da1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e82da4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e82da9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 12e82dac and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e82db2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12e82db5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_12e82db7:;
  /* 12e82db7 mov esp, ebp */
  ESP = (EBP);
  /* 12e82db9 pop ebp */
  EBP = (pop32());
  /* 12e82dba ret  */
  ESPCHK(0x12e82c90u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x12e82dc0 (52 bytes, 19 insns) */
void f_12e82dc0(void) {
  FTRACE(0x12e82dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e82dc0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12e82dc4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12e82dc8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12e82dca mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12e82dce jne 0x12e82dd9 */
  if (!C.zf) goto L_12e82dd9;
  /* 12e82dd0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12e82dd4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12e82dd6 ret 0x10 */
  ESPCHK(0x12e82dc0u, _esp0);
  ESP += 20; return;
L_12e82dd9:;
  /* 12e82dd9 push ebx */
  push32((uint32_t)(EBX));
  /* 12e82dda mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12e82ddc mov ebx, eax */
  EBX = (EAX);
  /* 12e82dde mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12e82de2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12e82de6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82de8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12e82dec mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12e82dee add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82df0 pop ebx */
  EBX = (pop32());
  /* 12e82df1 ret 0x10 */
  ESPCHK(0x12e82dc0u, _esp0);
  ESP += 20; return;
}

/* FUN_10012e00 @ 0x12e82e00 (46 bytes, 18 insns) */
void f_12e82e00(void) {
  FTRACE(0x12e82e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e82e00 push ebp */
  push32((uint32_t)(EBP));
  /* 12e82e01 mov ebp, esp */
  EBP = (ESP);
  /* 12e82e03 push ecx */
  push32((uint32_t)(ECX));
  /* 12e82e04 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12e82e06 call 0x12e76e50 */
  push32(0x12e82e0bu); f_12e76e50();
  /* 12e82e0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82e0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e82e11 push eax */
  push32((uint32_t)(EAX));
  /* 12e82e12 call 0x12e82e30 */
  push32(0x12e82e17u); f_12e82e30();
  /* 12e82e17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82e1a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e82e1d push 0xc */
  push32((uint32_t)(0xcu));
  /* 12e82e1f call 0x12e76ef0 */
  push32(0x12e82e24u); f_12e76ef0();
  /* 12e82e24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82e27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e82e2a mov esp, ebp */
  ESP = (EBP);
  /* 12e82e2c pop ebp */
  EBP = (pop32());
  /* 12e82e2d ret  */
  ESPCHK(0x12e82e00u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x12e82e30 (198 bytes, 69 insns) */
void f_12e82e30(void) {
  FTRACE(0x12e82e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e82e30 push ebp */
  push32((uint32_t)(EBP));
  /* 12e82e31 mov ebp, esp */
  EBP = (ESP);
  /* 12e82e33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e82e36 mov eax, dword ptr [0x12e8f4ec] */
  EAX = (r32((uint32_t)(0x12e8f4ec)));
  /* 12e82e3b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e82e3e cmp dword ptr [0x12e90fe0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e90fe0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82e45 jne 0x12e82e4e */
  if (!C.zf) goto L_12e82e4e;
  /* 12e82e47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e82e49 jmp 0x12e82ef2 */
  goto L_12e82ef2;
L_12e82e4e:;
  /* 12e82e4e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82e52 jne 0x12e82e76 */
  if (!C.zf) goto L_12e82e76;
  /* 12e82e54 cmp dword ptr [0x12e8f4f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f4f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82e5b je 0x12e82e76 */
  if (C.zf) goto L_12e82e76;
  /* 12e82e5d call 0x12e82f50 */
  push32(0x12e82e62u); f_12e82f50();
  /* 12e82e62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e82e64 je 0x12e82e6d */
  if (C.zf) goto L_12e82e6d;
  /* 12e82e66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e82e68 jmp 0x12e82ef2 */
  goto L_12e82ef2;
L_12e82e6d:;
  /* 12e82e6d mov ecx, dword ptr [0x12e8f4ec] */
  ECX = (r32((uint32_t)(0x12e8f4ec)));
  /* 12e82e73 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12e82e76:;
  /* 12e82e76 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82e7a je 0x12e82ef0 */
  if (C.zf) goto L_12e82ef0;
  /* 12e82e7c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82e80 je 0x12e82ef0 */
  if (C.zf) goto L_12e82ef0;
  /* 12e82e82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e82e85 push edx */
  push32((uint32_t)(EDX));
  /* 12e82e86 call 0x12e76280 */
  push32(0x12e82e8bu); f_12e76280();
  /* 12e82e8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82e8e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e82e91:;
  /* 12e82e91 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e82e94 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82e97 je 0x12e82ef0 */
  if (C.zf) goto L_12e82ef0;
  /* 12e82e99 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e82e9c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e82e9e push edx */
  push32((uint32_t)(EDX));
  /* 12e82e9f call 0x12e76280 */
  push32(0x12e82ea4u); f_12e76280();
  /* 12e82ea4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82ea7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82eaa jbe 0x12e82ee5 */
  if ((C.cf||C.zf)) goto L_12e82ee5;
  /* 12e82eac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e82eaf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e82eb1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e82eb4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 12e82eb8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82ebb jne 0x12e82ee5 */
  if (!C.zf) goto L_12e82ee5;
  /* 12e82ebd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e82ec0 push ecx */
  push32((uint32_t)(ECX));
  /* 12e82ec1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e82ec4 push edx */
  push32((uint32_t)(EDX));
  /* 12e82ec5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e82ec8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e82eca push ecx */
  push32((uint32_t)(ECX));
  /* 12e82ecb call 0x12e82f00 */
  push32(0x12e82ed0u); f_12e82f00();
  /* 12e82ed0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82ed3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e82ed5 jne 0x12e82ee5 */
  if (!C.zf) goto L_12e82ee5;
  /* 12e82ed7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e82eda mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e82edc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e82edf lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 12e82ee3 jmp 0x12e82ef2 */
  goto L_12e82ef2;
L_12e82ee5:;
  /* 12e82ee5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e82ee8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82eeb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12e82eee jmp 0x12e82e91 */
  goto L_12e82e91;
L_12e82ef0:;
  /* 12e82ef0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e82ef2:;
  /* 12e82ef2 mov esp, ebp */
  ESP = (EBP);
  /* 12e82ef4 pop ebp */
  EBP = (pop32());
  /* 12e82ef5 ret  */
  ESPCHK(0x12e82e30u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x12e82f00 (79 bytes, 32 insns) */
void f_12e82f00(void) {
  FTRACE(0x12e82f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e82f00 push ebp */
  push32((uint32_t)(EBP));
  /* 12e82f01 mov ebp, esp */
  EBP = (ESP);
  /* 12e82f03 push ecx */
  push32((uint32_t)(ECX));
  /* 12e82f04 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82f08 jne 0x12e82f0e */
  if (!C.zf) goto L_12e82f0e;
  /* 12e82f0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e82f0c jmp 0x12e82f4b */
  goto L_12e82f4b;
L_12e82f0e:;
  /* 12e82f0e mov eax, dword ptr [0x12e90ba4] */
  EAX = (r32((uint32_t)(0x12e90ba4)));
  /* 12e82f13 push eax */
  push32((uint32_t)(EAX));
  /* 12e82f14 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e82f17 push ecx */
  push32((uint32_t)(ECX));
  /* 12e82f18 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e82f1b push edx */
  push32((uint32_t)(EDX));
  /* 12e82f1c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e82f1f push eax */
  push32((uint32_t)(EAX));
  /* 12e82f20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e82f23 push ecx */
  push32((uint32_t)(ECX));
  /* 12e82f24 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e82f26 mov edx, dword ptr [0x12e90e44] */
  EDX = (r32((uint32_t)(0x12e90e44)));
  /* 12e82f2c push edx */
  push32((uint32_t)(EDX));
  /* 12e82f2d call 0x12e83000 */
  push32(0x12e82f32u); f_12e83000();
  /* 12e82f32 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82f35 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e82f38 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82f3c jne 0x12e82f45 */
  if (!C.zf) goto L_12e82f45;
  /* 12e82f3e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 12e82f43 jmp 0x12e82f4b */
  goto L_12e82f4b;
L_12e82f45:;
  /* 12e82f45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e82f48 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12e82f4b:;
  /* 12e82f4b mov esp, ebp */
  ESP = (EBP);
  /* 12e82f4d pop ebp */
  EBP = (pop32());
  /* 12e82f4e ret  */
  ESPCHK(0x12e82f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f50 @ 0x12e82f50 (174 bytes, 66 insns) */
void f_12e82f50(void) {
  FTRACE(0x12e82f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e82f50 push ebp */
  push32((uint32_t)(EBP));
  /* 12e82f51 mov ebp, esp */
  EBP = (ESP);
  /* 12e82f53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e82f56 mov eax, dword ptr [0x12e8f4f4] */
  EAX = (r32((uint32_t)(0x12e8f4f4)));
  /* 12e82f5b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12e82f5e:;
  /* 12e82f5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e82f61 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82f64 je 0x12e82ff8 */
  if (C.zf) goto L_12e82ff8;
  /* 12e82f6a push 0 */
  push32((uint32_t)(0x0u));
  /* 12e82f6c push 0 */
  push32((uint32_t)(0x0u));
  /* 12e82f6e push 0 */
  push32((uint32_t)(0x0u));
  /* 12e82f70 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e82f72 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e82f74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e82f77 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e82f79 push eax */
  push32((uint32_t)(EAX));
  /* 12e82f7a push 0 */
  push32((uint32_t)(0x0u));
  /* 12e82f7c push 1 */
  push32((uint32_t)(0x1u));
  /* 12e82f7e call dword ptr [0x12e92380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92380))), 0x12e82f84u);
  /* 12e82f84 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e82f87 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82f8b jne 0x12e82f92 */
  if (!C.zf) goto L_12e82f92;
  /* 12e82f8d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e82f90 jmp 0x12e82ffa */
  goto L_12e82ffa;
L_12e82f92:;
  /* 12e82f92 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12e82f94 push 0x12e8b944 */
  push32((uint32_t)(0x12e8b944u));
  /* 12e82f99 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e82f9b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e82f9e push ecx */
  push32((uint32_t)(ECX));
  /* 12e82f9f call 0x12e73450 */
  push32(0x12e82fa4u); f_12e73450();
  /* 12e82fa4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82fa7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e82faa cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e82fae jne 0x12e82fb5 */
  if (!C.zf) goto L_12e82fb5;
  /* 12e82fb0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e82fb3 jmp 0x12e82ffa */
  goto L_12e82ffa;
L_12e82fb5:;
  /* 12e82fb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e82fb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e82fb9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e82fbc push edx */
  push32((uint32_t)(EDX));
  /* 12e82fbd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e82fc0 push eax */
  push32((uint32_t)(EAX));
  /* 12e82fc1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e82fc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e82fc6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e82fc8 push edx */
  push32((uint32_t)(EDX));
  /* 12e82fc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e82fcb push 1 */
  push32((uint32_t)(0x1u));
  /* 12e82fcd call dword ptr [0x12e92380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92380))), 0x12e82fd3u);
  /* 12e82fd3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e82fd5 jne 0x12e82fdc */
  if (!C.zf) goto L_12e82fdc;
  /* 12e82fd7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e82fda jmp 0x12e82ffa */
  goto L_12e82ffa;
L_12e82fdc:;
  /* 12e82fdc push 0 */
  push32((uint32_t)(0x0u));
  /* 12e82fde mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e82fe1 push eax */
  push32((uint32_t)(EAX));
  /* 12e82fe2 call 0x12e83450 */
  push32(0x12e82fe7u); f_12e83450();
  /* 12e82fe7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82fea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e82fed add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e82ff0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e82ff3 jmp 0x12e82f5e */
  goto L_12e82f5e;
L_12e82ff8:;
  /* 12e82ff8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e82ffa:;
  /* 12e82ffa mov esp, ebp */
  ESP = (EBP);
  /* 12e82ffc pop ebp */
  EBP = (pop32());
  /* 12e82ffd ret  */
  ESPCHK(0x12e82f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10013000 @ 0x12e83000 (970 bytes, 340 insns) */
void f_12e83000(void) {
  FTRACE(0x12e83000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e83000 push ebp */
  push32((uint32_t)(EBP));
  /* 12e83001 mov ebp, esp */
  EBP = (ESP);
  /* 12e83003 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12e83005 push 0x12e8b998 */
  push32((uint32_t)(0x12e8b998u));
  /* 12e8300a push 0x12e7c558 */
  push32((uint32_t)(0x12e7c558u));
  /* 12e8300f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12e83015 push eax */
  push32((uint32_t)(EAX));
  /* 12e83016 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12e8301d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e83020 push ebx */
  push32((uint32_t)(EBX));
  /* 12e83021 push esi */
  push32((uint32_t)(ESI));
  /* 12e83022 push edi */
  push32((uint32_t)(EDI));
  /* 12e83023 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12e83026 cmp dword ptr [0x12e8f834], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f834))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8302d jne 0x12e83086 */
  if (!C.zf) goto L_12e83086;
  /* 12e8302f push 1 */
  push32((uint32_t)(0x1u));
  /* 12e83031 push 0x12e8aff4 */
  push32((uint32_t)(0x12e8aff4u));
  /* 12e83036 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e83038 push 0x12e8aff4 */
  push32((uint32_t)(0x12e8aff4u));
  /* 12e8303d push 0 */
  push32((uint32_t)(0x0u));
  /* 12e8303f push 0 */
  push32((uint32_t)(0x0u));
  /* 12e83041 call dword ptr [0x12e92290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92290))), 0x12e83047u);
  /* 12e83047 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e83049 je 0x12e83057 */
  if (C.zf) goto L_12e83057;
  /* 12e8304b mov dword ptr [0x12e8f834], 1 */
  w32((uint32_t)(0x12e8f834), (0x1u));
  /* 12e83055 jmp 0x12e83086 */
  goto L_12e83086;
L_12e83057:;
  /* 12e83057 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e83059 push 0x12e8aff0 */
  push32((uint32_t)(0x12e8aff0u));
  /* 12e8305e push 1 */
  push32((uint32_t)(0x1u));
  /* 12e83060 push 0x12e8aff0 */
  push32((uint32_t)(0x12e8aff0u));
  /* 12e83065 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e83067 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e83069 call dword ptr [0x12e92294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92294))), 0x12e8306fu);
  /* 12e8306f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e83071 je 0x12e8307f */
  if (C.zf) goto L_12e8307f;
  /* 12e83073 mov dword ptr [0x12e8f834], 2 */
  w32((uint32_t)(0x12e8f834), (0x2u));
  /* 12e8307d jmp 0x12e83086 */
  goto L_12e83086;
L_12e8307f:;
  /* 12e8307f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e83081 jmp 0x12e833e4 */
  goto L_12e833e4;
L_12e83086:;
  /* 12e83086 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8308a jle 0x12e8309f */
  if ((C.zf||C.sf!=C.of)) goto L_12e8309f;
  /* 12e8308c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e8308f push eax */
  push32((uint32_t)(EAX));
  /* 12e83090 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e83093 push ecx */
  push32((uint32_t)(ECX));
  /* 12e83094 call 0x12e83400 */
  push32(0x12e83099u); f_12e83400();
  /* 12e83099 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e8309c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_12e8309f:;
  /* 12e8309f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e830a3 jle 0x12e830b8 */
  if ((C.zf||C.sf!=C.of)) goto L_12e830b8;
  /* 12e830a5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12e830a8 push edx */
  push32((uint32_t)(EDX));
  /* 12e830a9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e830ac push eax */
  push32((uint32_t)(EAX));
  /* 12e830ad call 0x12e83400 */
  push32(0x12e830b2u); f_12e83400();
  /* 12e830b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e830b5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_12e830b8:;
  /* 12e830b8 cmp dword ptr [0x12e8f834], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f834))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e830bf jne 0x12e830e4 */
  if (!C.zf) goto L_12e830e4;
  /* 12e830c1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12e830c4 push ecx */
  push32((uint32_t)(ECX));
  /* 12e830c5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e830c8 push edx */
  push32((uint32_t)(EDX));
  /* 12e830c9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e830cc push eax */
  push32((uint32_t)(EAX));
  /* 12e830cd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e830d0 push ecx */
  push32((uint32_t)(ECX));
  /* 12e830d1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e830d4 push edx */
  push32((uint32_t)(EDX));
  /* 12e830d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e830d8 push eax */
  push32((uint32_t)(EAX));
  /* 12e830d9 call dword ptr [0x12e92294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92294))), 0x12e830dfu);
  /* 12e830df jmp 0x12e833e4 */
  goto L_12e833e4;
L_12e830e4:;
  /* 12e830e4 cmp dword ptr [0x12e8f834], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f834))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e830eb jne 0x12e833e2 */
  if (!C.zf) goto L_12e833e2;
  /* 12e830f1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e830f5 jne 0x12e83100 */
  if (!C.zf) goto L_12e83100;
  /* 12e830f7 mov ecx, dword ptr [0x12e8f6e0] */
  ECX = (r32((uint32_t)(0x12e8f6e0)));
  /* 12e830fd mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_12e83100:;
  /* 12e83100 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e83104 je 0x12e83110 */
  if (C.zf) goto L_12e83110;
  /* 12e83106 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8310a jne 0x12e8328c */
  if (!C.zf) goto L_12e8328c;
L_12e83110:;
  /* 12e83110 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e83113 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e83116 jne 0x12e83122 */
  if (!C.zf) goto L_12e83122;
  /* 12e83118 mov eax, 2 */
  EAX = (0x2u);
  /* 12e8311d jmp 0x12e833e4 */
  goto L_12e833e4;
L_12e83122:;
  /* 12e83122 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e83126 jle 0x12e83132 */
  if ((C.zf||C.sf!=C.of)) goto L_12e83132;
  /* 12e83128 mov eax, 1 */
  EAX = (0x1u);
  /* 12e8312d jmp 0x12e833e4 */
  goto L_12e833e4;
L_12e83132:;
  /* 12e83132 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e83136 jle 0x12e83142 */
  if ((C.zf||C.sf!=C.of)) goto L_12e83142;
  /* 12e83138 mov eax, 3 */
  EAX = (0x3u);
  /* 12e8313d jmp 0x12e833e4 */
  goto L_12e833e4;
L_12e83142:;
  /* 12e83142 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 12e83145 push eax */
  push32((uint32_t)(EAX));
  /* 12e83146 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12e83149 push ecx */
  push32((uint32_t)(ECX));
  /* 12e8314a call dword ptr [0x12e922ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922ec))), 0x12e83150u);
  /* 12e83150 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e83152 jne 0x12e8315b */
  if (!C.zf) goto L_12e8315b;
  /* 12e83154 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e83156 jmp 0x12e833e4 */
  goto L_12e833e4;
L_12e8315b:;
  /* 12e8315b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8315f jne 0x12e83167 */
  if (!C.zf) goto L_12e83167;
  /* 12e83161 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e83165 je 0x12e83194 */
  if (C.zf) goto L_12e83194;
L_12e83167:;
  /* 12e83167 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8316b jne 0x12e83173 */
  if (!C.zf) goto L_12e83173;
  /* 12e8316d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e83171 je 0x12e83194 */
  if (C.zf) goto L_12e83194;
L_12e83173:;
  /* 12e83173 push 0x12e8b958 */
  push32((uint32_t)(0x12e8b958u));
  /* 12e83178 push 0 */
  push32((uint32_t)(0x0u));
  /* 12e8317a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12e8317f push 0x12e8b950 */
  push32((uint32_t)(0x12e8b950u));
  /* 12e83184 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e83186 call 0x12e72510 */
  push32(0x12e8318bu); f_12e72510();
  /* 12e8318b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e8318e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e83191 jne 0x12e83194 */
  if (!C.zf) goto L_12e83194;
  /* 12e83193 int3  */
  x86_unimpl("int3 @ 0x12e83193");
L_12e83194:;
  /* 12e83194 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e83196 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e83198 jne 0x12e8315b */
  if (!C.zf) goto L_12e8315b;
  /* 12e8319a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8319e jle 0x12e83213 */
  if ((C.zf||C.sf!=C.of)) goto L_12e83213;
  /* 12e831a0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e831a4 jae 0x12e831b0 */
  if (!C.cf) goto L_12e831b0;
  /* 12e831a6 mov eax, 3 */
  EAX = (0x3u);
  /* 12e831ab jmp 0x12e833e4 */
  goto L_12e833e4;
L_12e831b0:;
  /* 12e831b0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 12e831b3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 12e831b6 jmp 0x12e831c1 */
  goto L_12e831c1;
L_12e831b8:;
  /* 12e831b8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12e831bb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e831be mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_12e831c1:;
  /* 12e831c1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12e831c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e831c6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e831c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e831ca je 0x12e83209 */
  if (C.zf) goto L_12e83209;
  /* 12e831cc mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12e831cf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e831d1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12e831d4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e831d6 je 0x12e83209 */
  if (C.zf) goto L_12e83209;
  /* 12e831d8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e831db xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e831dd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e831df mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12e831e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e831e4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e831e6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e831e8 jl 0x12e83207 */
  if ((C.sf!=C.of)) goto L_12e83207;
  /* 12e831ea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e831ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e831ef mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e831f1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12e831f4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e831f6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12e831f9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e831fb jg 0x12e83207 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e83207;
  /* 12e831fd mov eax, 2 */
  EAX = (0x2u);
  /* 12e83202 jmp 0x12e833e4 */
  goto L_12e833e4;
L_12e83207:;
  /* 12e83207 jmp 0x12e831b8 */
  goto L_12e831b8;
L_12e83209:;
  /* 12e83209 mov eax, 3 */
  EAX = (0x3u);
  /* 12e8320e jmp 0x12e833e4 */
  goto L_12e833e4;
L_12e83213:;
  /* 12e83213 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e83217 jle 0x12e8328c */
  if ((C.zf||C.sf!=C.of)) goto L_12e8328c;
  /* 12e83219 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8321d jae 0x12e83229 */
  if (!C.cf) goto L_12e83229;
  /* 12e8321f mov eax, 1 */
  EAX = (0x1u);
  /* 12e83224 jmp 0x12e833e4 */
  goto L_12e833e4;
L_12e83229:;
  /* 12e83229 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 12e8322c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 12e8322f jmp 0x12e8323a */
  goto L_12e8323a;
L_12e83231:;
  /* 12e83231 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12e83234 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e83237 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_12e8323a:;
  /* 12e8323a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12e8323d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e8323f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e83241 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e83243 je 0x12e83282 */
  if (C.zf) goto L_12e83282;
  /* 12e83245 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12e83248 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e8324a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12e8324d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e8324f je 0x12e83282 */
  if (C.zf) goto L_12e83282;
  /* 12e83251 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e83254 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e83256 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12e83258 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12e8325b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12e8325d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12e8325f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e83261 jl 0x12e83280 */
  if ((C.sf!=C.of)) goto L_12e83280;
  /* 12e83263 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e83266 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e83268 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e8326a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12e8326d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e8326f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12e83272 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e83274 jg 0x12e83280 */
  if ((!C.zf&&C.sf==C.of)) goto L_12e83280;
  /* 12e83276 mov eax, 2 */
  EAX = (0x2u);
  /* 12e8327b jmp 0x12e833e4 */
  goto L_12e833e4;
L_12e83280:;
  /* 12e83280 jmp 0x12e83231 */
  goto L_12e83231;
L_12e83282:;
  /* 12e83282 mov eax, 1 */
  EAX = (0x1u);
  /* 12e83287 jmp 0x12e833e4 */
  goto L_12e833e4;
L_12e8328c:;
  /* 12e8328c push 0 */
  push32((uint32_t)(0x0u));
  /* 12e8328e push 0 */
  push32((uint32_t)(0x0u));
  /* 12e83290 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e83293 push ecx */
  push32((uint32_t)(ECX));
  /* 12e83294 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e83297 push edx */
  push32((uint32_t)(EDX));
  /* 12e83298 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e8329a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12e8329d push eax */
  push32((uint32_t)(EAX));
  /* 12e8329e call dword ptr [0x12e922e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922e0))), 0x12e832a4u);
  /* 12e832a4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12e832a7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e832ab jne 0x12e832b4 */
  if (!C.zf) goto L_12e832b4;
  /* 12e832ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e832af jmp 0x12e833e4 */
  goto L_12e833e4;
L_12e832b4:;
  /* 12e832b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12e832bb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e832be shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12e832c0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e832c3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12e832c5 call 0x12e765f0 */
  push32(0x12e832cau); f_12e765f0();
  /* 12e832ca mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 12e832cd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12e832d0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 12e832d3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12e832d6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12e832dd jmp 0x12e832f6 */
  goto L_12e832f6;
  /* 12e832df mov eax, 1 */
  EAX = (0x1u);
  /* 12e832e4 ret  */
  ESPCHK(0x12e83000u, _esp0);
  ESP += 4; return;
  /* 12e832e5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12e832e8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12e832ef mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12e832f6:;
  /* 12e832f6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e832fa jne 0x12e83303 */
  if (!C.zf) goto L_12e83303;
  /* 12e832fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e832fe jmp 0x12e833e4 */
  goto L_12e833e4;
L_12e83303:;
  /* 12e83303 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e83306 push edx */
  push32((uint32_t)(EDX));
  /* 12e83307 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e8330a push eax */
  push32((uint32_t)(EAX));
  /* 12e8330b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12e8330e push ecx */
  push32((uint32_t)(ECX));
  /* 12e8330f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12e83312 push edx */
  push32((uint32_t)(EDX));
  /* 12e83313 push 1 */
  push32((uint32_t)(0x1u));
  /* 12e83315 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12e83318 push eax */
  push32((uint32_t)(EAX));
  /* 12e83319 call dword ptr [0x12e922e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922e0))), 0x12e8331fu);
  /* 12e8331f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e83321 jne 0x12e8332a */
  if (!C.zf) goto L_12e8332a;
  /* 12e83323 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e83325 jmp 0x12e833e4 */
  goto L_12e833e4;
L_12e8332a:;
  /* 12e8332a push 0 */
  push32((uint32_t)(0x0u));
  /* 12e8332c push 0 */
  push32((uint32_t)(0x0u));
  /* 12e8332e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12e83331 push ecx */
  push32((uint32_t)(ECX));
  /* 12e83332 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e83335 push edx */
  push32((uint32_t)(EDX));
  /* 12e83336 push 9 */
  push32((uint32_t)(0x9u));
  /* 12e83338 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12e8333b push eax */
  push32((uint32_t)(EAX));
  /* 12e8333c call dword ptr [0x12e922e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922e0))), 0x12e83342u);
  /* 12e83342 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12e83345 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e83349 jne 0x12e83352 */
  if (!C.zf) goto L_12e83352;
  /* 12e8334b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e8334d jmp 0x12e833e4 */
  goto L_12e833e4;
L_12e83352:;
  /* 12e83352 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12e83359 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e8335c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12e8335e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e83361 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12e83363 call 0x12e765f0 */
  push32(0x12e83368u); f_12e765f0();
  /* 12e83368 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 12e8336b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12e8336e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 12e83371 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12e83374 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12e8337b jmp 0x12e83394 */
  goto L_12e83394;
  /* 12e8337d mov eax, 1 */
  EAX = (0x1u);
  /* 12e83382 ret  */
  ESPCHK(0x12e83000u, _esp0);
  ESP += 4; return;
  /* 12e83383 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12e83386 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12e8338d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12e83394:;
  /* 12e83394 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e83398 jne 0x12e8339e */
  if (!C.zf) goto L_12e8339e;
  /* 12e8339a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e8339c jmp 0x12e833e4 */
  goto L_12e833e4;
L_12e8339e:;
  /* 12e8339e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e833a1 push edx */
  push32((uint32_t)(EDX));
  /* 12e833a2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e833a5 push eax */
  push32((uint32_t)(EAX));
  /* 12e833a6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12e833a9 push ecx */
  push32((uint32_t)(ECX));
  /* 12e833aa mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12e833ad push edx */
  push32((uint32_t)(EDX));
  /* 12e833ae push 1 */
  push32((uint32_t)(0x1u));
  /* 12e833b0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12e833b3 push eax */
  push32((uint32_t)(EAX));
  /* 12e833b4 call dword ptr [0x12e922e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e922e0))), 0x12e833bau);
  /* 12e833ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e833bc jne 0x12e833c2 */
  if (!C.zf) goto L_12e833c2;
  /* 12e833be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e833c0 jmp 0x12e833e4 */
  goto L_12e833e4;
L_12e833c2:;
  /* 12e833c2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12e833c5 push ecx */
  push32((uint32_t)(ECX));
  /* 12e833c6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12e833c9 push edx */
  push32((uint32_t)(EDX));
  /* 12e833ca mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12e833cd push eax */
  push32((uint32_t)(EAX));
  /* 12e833ce mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12e833d1 push ecx */
  push32((uint32_t)(ECX));
  /* 12e833d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e833d5 push edx */
  push32((uint32_t)(EDX));
  /* 12e833d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e833d9 push eax */
  push32((uint32_t)(EAX));
  /* 12e833da call dword ptr [0x12e92290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e92290))), 0x12e833e0u);
  /* 12e833e0 jmp 0x12e833e4 */
  goto L_12e833e4;
L_12e833e2:;
  /* 12e833e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e833e4:;
  /* 12e833e4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 12e833e7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e833ea mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12e833f1 pop edi */
  EDI = (pop32());
  /* 12e833f2 pop esi */
  ESI = (pop32());
  /* 12e833f3 pop ebx */
  EBX = (pop32());
  /* 12e833f4 mov esp, ebp */
  ESP = (EBP);
  /* 12e833f6 pop ebp */
  EBP = (pop32());
  /* 12e833f7 ret  */
  ESPCHK(0x12e83000u, _esp0);
  ESP += 4; return;
}

/* FUN_10013400 @ 0x12e83400 (80 bytes, 32 insns) */
void f_12e83400(void) {
  FTRACE(0x12e83400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e83400 push ebp */
  push32((uint32_t)(EBP));
  /* 12e83401 mov ebp, esp */
  EBP = (ESP);
  /* 12e83403 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e83406 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e83409 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e8340c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e8340f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12e83412:;
  /* 12e83412 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e83415 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e83418 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e8341b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e8341e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e83420 je 0x12e83437 */
  if (C.zf) goto L_12e83437;
  /* 12e83422 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e83425 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e83428 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e8342a je 0x12e83437 */
  if (C.zf) goto L_12e83437;
  /* 12e8342c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e8342f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e83432 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e83435 jmp 0x12e83412 */
  goto L_12e83412;
L_12e83437:;
  /* 12e83437 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e8343a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12e8343d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e8343f jne 0x12e83449 */
  if (!C.zf) goto L_12e83449;
  /* 12e83441 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e83444 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e83447 jmp 0x12e8344c */
  goto L_12e8344c;
L_12e83449:;
  /* 12e83449 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_12e8344c:;
  /* 12e8344c mov esp, ebp */
  ESP = (EBP);
  /* 12e8344e pop ebp */
  EBP = (pop32());
  /* 12e8344f ret  */
  ESPCHK(0x12e83400u, _esp0);
  ESP += 4; return;
}

/* FUN_10013450 @ 0x12e83450 (736 bytes, 224 insns) */
void f_12e83450(void) {
  FTRACE(0x12e83450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e83450 push ebp */
  push32((uint32_t)(EBP));
  /* 12e83451 mov ebp, esp */
  EBP = (ESP);
  /* 12e83453 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e83456 push esi */
  push32((uint32_t)(ESI));
  /* 12e83457 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8345b je 0x12e8347c */
  if (C.zf) goto L_12e8347c;
  /* 12e8345d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12e8345f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e83462 push eax */
  push32((uint32_t)(EAX));
  /* 12e83463 call 0x12e838a0 */
  push32(0x12e83468u); f_12e838a0();
  /* 12e83468 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e8346b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12e8346e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e83472 je 0x12e8347c */
  if (C.zf) goto L_12e8347c;
  /* 12e83474 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e83477 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8347a jne 0x12e83484 */
  if (!C.zf) goto L_12e83484;
L_12e8347c:;
  /* 12e8347c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e8347f jmp 0x12e8372b */
  goto L_12e8372b;
L_12e83484:;
  /* 12e83484 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e83487 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12e8348b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e8348d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e8348f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12e83490 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12e83493 mov ecx, dword ptr [0x12e8f4ec] */
  ECX = (r32((uint32_t)(0x12e8f4ec)));
  /* 12e83499 cmp ecx, dword ptr [0x12e8f4f0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12e8f4f0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8349f jne 0x12e834b5 */
  if (!C.zf) goto L_12e834b5;
  /* 12e834a1 mov edx, dword ptr [0x12e8f4ec] */
  EDX = (r32((uint32_t)(0x12e8f4ec)));
  /* 12e834a7 push edx */
  push32((uint32_t)(EDX));
  /* 12e834a8 call 0x12e837b0 */
  push32(0x12e834adu); f_12e837b0();
  /* 12e834ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e834b0 mov dword ptr [0x12e8f4ec], eax */
  w32((uint32_t)(0x12e8f4ec), (EAX));
L_12e834b5:;
  /* 12e834b5 cmp dword ptr [0x12e8f4ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f4ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e834bc jne 0x12e83575 */
  if (!C.zf) goto L_12e83575;
  /* 12e834c2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e834c6 je 0x12e834e7 */
  if (C.zf) goto L_12e834e7;
  /* 12e834c8 cmp dword ptr [0x12e8f4f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f4f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e834cf je 0x12e834e7 */
  if (C.zf) goto L_12e834e7;
  /* 12e834d1 call 0x12e82f50 */
  push32(0x12e834d6u); f_12e82f50();
  /* 12e834d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e834d8 je 0x12e834e2 */
  if (C.zf) goto L_12e834e2;
  /* 12e834da or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e834dd jmp 0x12e8372b */
  goto L_12e8372b;
L_12e834e2:;
  /* 12e834e2 jmp 0x12e83575 */
  goto L_12e83575;
L_12e834e7:;
  /* 12e834e7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e834eb je 0x12e834f4 */
  if (C.zf) goto L_12e834f4;
  /* 12e834ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e834ef jmp 0x12e8372b */
  goto L_12e8372b;
L_12e834f4:;
  /* 12e834f4 cmp dword ptr [0x12e8f4ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f4ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e834fb jne 0x12e83534 */
  if (!C.zf) goto L_12e83534;
  /* 12e834fd push 0x87 */
  push32((uint32_t)(0x87u));
  /* 12e83502 push 0x12e8b9b0 */
  push32((uint32_t)(0x12e8b9b0u));
  /* 12e83507 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e83509 push 4 */
  push32((uint32_t)(0x4u));
  /* 12e8350b call 0x12e73450 */
  push32(0x12e83510u); f_12e73450();
  /* 12e83510 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e83513 mov dword ptr [0x12e8f4ec], eax */
  w32((uint32_t)(0x12e8f4ec), (EAX));
  /* 12e83518 cmp dword ptr [0x12e8f4ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f4ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8351f jne 0x12e83529 */
  if (!C.zf) goto L_12e83529;
  /* 12e83521 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e83524 jmp 0x12e8372b */
  goto L_12e8372b;
L_12e83529:;
  /* 12e83529 mov eax, dword ptr [0x12e8f4ec] */
  EAX = (r32((uint32_t)(0x12e8f4ec)));
  /* 12e8352e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12e83534:;
  /* 12e83534 cmp dword ptr [0x12e8f4f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f4f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8353b jne 0x12e83575 */
  if (!C.zf) goto L_12e83575;
  /* 12e8353d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 12e83542 push 0x12e8b9b0 */
  push32((uint32_t)(0x12e8b9b0u));
  /* 12e83547 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e83549 push 4 */
  push32((uint32_t)(0x4u));
  /* 12e8354b call 0x12e73450 */
  push32(0x12e83550u); f_12e73450();
  /* 12e83550 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e83553 mov dword ptr [0x12e8f4f4], eax */
  w32((uint32_t)(0x12e8f4f4), (EAX));
  /* 12e83558 cmp dword ptr [0x12e8f4f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e8f4f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8355f jne 0x12e83569 */
  if (!C.zf) goto L_12e83569;
  /* 12e83561 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e83564 jmp 0x12e8372b */
  goto L_12e8372b;
L_12e83569:;
  /* 12e83569 mov ecx, dword ptr [0x12e8f4f4] */
  ECX = (r32((uint32_t)(0x12e8f4f4)));
  /* 12e8356f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_12e83575:;
  /* 12e83575 mov edx, dword ptr [0x12e8f4ec] */
  EDX = (r32((uint32_t)(0x12e8f4ec)));
  /* 12e8357b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12e8357e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e83581 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e83584 push eax */
  push32((uint32_t)(EAX));
  /* 12e83585 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e83588 push ecx */
  push32((uint32_t)(ECX));
  /* 12e83589 call 0x12e83730 */
  push32(0x12e8358eu); f_12e83730();
  /* 12e8358e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e83591 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e83594 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e83598 jl 0x12e83631 */
  if ((C.sf!=C.of)) goto L_12e83631;
  /* 12e8359e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e835a1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e835a4 je 0x12e83631 */
  if (C.zf) goto L_12e83631;
  /* 12e835aa cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e835ae je 0x12e83623 */
  if (C.zf) goto L_12e83623;
  /* 12e835b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e835b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e835b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e835b8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12e835bb push edx */
  push32((uint32_t)(EDX));
  /* 12e835bc call 0x12e73ee0 */
  push32(0x12e835c1u); f_12e73ee0();
  /* 12e835c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e835c4 jmp 0x12e835cf */
  goto L_12e835cf;
L_12e835c6:;
  /* 12e835c6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e835c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e835cc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12e835cf:;
  /* 12e835cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e835d2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e835d5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e835d9 je 0x12e835f0 */
  if (C.zf) goto L_12e835f0;
  /* 12e835db mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e835de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e835e1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e835e4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 12e835e7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 12e835eb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 12e835ee jmp 0x12e835c6 */
  goto L_12e835c6;
L_12e835f0:;
  /* 12e835f0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 12e835f5 push 0x12e8b9b0 */
  push32((uint32_t)(0x12e8b9b0u));
  /* 12e835fa push 2 */
  push32((uint32_t)(0x2u));
  /* 12e835fc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e835ff shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12e83602 push eax */
  push32((uint32_t)(EAX));
  /* 12e83603 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e83606 push ecx */
  push32((uint32_t)(ECX));
  /* 12e83607 call 0x12e738e0 */
  push32(0x12e8360cu); f_12e738e0();
  /* 12e8360c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e8360f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e83612 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e83616 je 0x12e83621 */
  if (C.zf) goto L_12e83621;
  /* 12e83618 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e8361b mov dword ptr [0x12e8f4ec], edx */
  w32((uint32_t)(0x12e8f4ec), (EDX));
L_12e83621:;
  /* 12e83621 jmp 0x12e8362f */
  goto L_12e8362f;
L_12e83623:;
  /* 12e83623 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e83626 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e83629 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e8362c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_12e8362f:;
  /* 12e8362f jmp 0x12e836a4 */
  goto L_12e836a4;
L_12e83631:;
  /* 12e83631 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e83635 jne 0x12e8369d */
  if (!C.zf) goto L_12e8369d;
  /* 12e83637 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8363b jge 0x12e83645 */
  if ((C.sf==C.of)) goto L_12e83645;
  /* 12e8363d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e83640 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e83642 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12e83645:;
  /* 12e83645 push 0xce */
  push32((uint32_t)(0xceu));
  /* 12e8364a push 0x12e8b9b0 */
  push32((uint32_t)(0x12e8b9b0u));
  /* 12e8364f push 2 */
  push32((uint32_t)(0x2u));
  /* 12e83651 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e83654 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 12e8365b push edx */
  push32((uint32_t)(EDX));
  /* 12e8365c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e8365f push eax */
  push32((uint32_t)(EAX));
  /* 12e83660 call 0x12e738e0 */
  push32(0x12e83665u); f_12e738e0();
  /* 12e83665 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e83668 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e8366b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8366f jne 0x12e83679 */
  if (!C.zf) goto L_12e83679;
  /* 12e83671 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e83674 jmp 0x12e8372b */
  goto L_12e8372b;
L_12e83679:;
  /* 12e83679 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e8367c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e8367f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e83682 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12e83685 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e83688 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e8368b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 12e83693 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e83696 mov dword ptr [0x12e8f4ec], eax */
  w32((uint32_t)(0x12e8f4ec), (EAX));
  /* 12e8369b jmp 0x12e836a4 */
  goto L_12e836a4;
L_12e8369d:;
  /* 12e8369d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e8369f jmp 0x12e8372b */
  goto L_12e8372b;
L_12e836a4:;
  /* 12e836a4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e836a8 je 0x12e83729 */
  if (C.zf) goto L_12e83729;
  /* 12e836aa push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 12e836af push 0x12e8b9b0 */
  push32((uint32_t)(0x12e8b9b0u));
  /* 12e836b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e836b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e836b9 push ecx */
  push32((uint32_t)(ECX));
  /* 12e836ba call 0x12e76280 */
  push32(0x12e836bfu); f_12e76280();
  /* 12e836bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e836c2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e836c5 push eax */
  push32((uint32_t)(EAX));
  /* 12e836c6 call 0x12e73450 */
  push32(0x12e836cbu); f_12e73450();
  /* 12e836cb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e836ce mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12e836d1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e836d5 je 0x12e83729 */
  if (C.zf) goto L_12e83729;
  /* 12e836d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e836da push edx */
  push32((uint32_t)(EDX));
  /* 12e836db mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e836de push eax */
  push32((uint32_t)(EAX));
  /* 12e836df call 0x12e76400 */
  push32(0x12e836e4u); f_12e76400();
  /* 12e836e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e836e7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12e836ea sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e836ed mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e836f0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e836f2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12e836f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e836f8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12e836fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e836fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e83701 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e83704 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12e83707 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12e83709 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e8370b not edx */
  EDX = (~(EDX));
  /* 12e8370d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12e83710 push edx */
  push32((uint32_t)(EDX));
  /* 12e83711 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e83714 push eax */
  push32((uint32_t)(EAX));
  /* 12e83715 call dword ptr [0x12e9228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12e9228c))), 0x12e8371bu);
  /* 12e8371b push 2 */
  push32((uint32_t)(0x2u));
  /* 12e8371d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e83720 push ecx */
  push32((uint32_t)(ECX));
  /* 12e83721 call 0x12e73ee0 */
  push32(0x12e83726u); f_12e73ee0();
  /* 12e83726 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e83729:;
  /* 12e83729 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e8372b:;
  /* 12e8372b pop esi */
  ESI = (pop32());
  /* 12e8372c mov esp, ebp */
  ESP = (EBP);
  /* 12e8372e pop ebp */
  EBP = (pop32());
  /* 12e8372f ret  */
  ESPCHK(0x12e83450u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x12e83730 (124 bytes, 47 insns) */
void f_12e83730(void) {
  FTRACE(0x12e83730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e83730 push ebp */
  push32((uint32_t)(EBP));
  /* 12e83731 mov ebp, esp */
  EBP = (ESP);
  /* 12e83733 push ecx */
  push32((uint32_t)(ECX));
  /* 12e83734 mov eax, dword ptr [0x12e8f4ec] */
  EAX = (r32((uint32_t)(0x12e8f4ec)));
  /* 12e83739 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12e8373c jmp 0x12e83747 */
  goto L_12e83747;
L_12e8373e:;
  /* 12e8373e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e83741 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e83744 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12e83747:;
  /* 12e83747 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e8374a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e8374d je 0x12e8379a */
  if (C.zf) goto L_12e8379a;
  /* 12e8374f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e83752 push eax */
  push32((uint32_t)(EAX));
  /* 12e83753 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e83756 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e83758 push edx */
  push32((uint32_t)(EDX));
  /* 12e83759 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e8375c push eax */
  push32((uint32_t)(EAX));
  /* 12e8375d call 0x12e82f00 */
  push32(0x12e83762u); f_12e82f00();
  /* 12e83762 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e83765 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12e83767 jne 0x12e83798 */
  if (!C.zf) goto L_12e83798;
  /* 12e83769 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e8376c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e8376e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e83771 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 12e83775 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e83778 je 0x12e8378a */
  if (C.zf) goto L_12e8378a;
  /* 12e8377a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e8377d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e8377f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e83782 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 12e83786 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e83788 jne 0x12e83798 */
  if (!C.zf) goto L_12e83798;
L_12e8378a:;
  /* 12e8378a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e8378d sub eax, dword ptr [0x12e8f4ec] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e8f4ec))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e83793 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12e83796 jmp 0x12e837a8 */
  goto L_12e837a8;
L_12e83798:;
  /* 12e83798 jmp 0x12e8373e */
  goto L_12e8373e;
L_12e8379a:;
  /* 12e8379a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e8379d sub eax, dword ptr [0x12e8f4ec] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12e8f4ec))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e837a3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12e837a6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_12e837a8:;
  /* 12e837a8 mov esp, ebp */
  ESP = (EBP);
  /* 12e837aa pop ebp */
  EBP = (pop32());
  /* 12e837ab ret  */
  ESPCHK(0x12e83730u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x12e837b0 (238 bytes, 80 insns) */
void f_12e837b0(void) {
  FTRACE(0x12e837b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e837b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e837b1 mov ebp, esp */
  EBP = (ESP);
  /* 12e837b3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e837b6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12e837bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e837c0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e837c3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e837c7 jne 0x12e837d0 */
  if (!C.zf) goto L_12e837d0;
  /* 12e837c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e837cb jmp 0x12e8389a */
  goto L_12e8389a;
L_12e837d0:;
  /* 12e837d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e837d3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e837d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e837d8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e837db mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12e837de test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e837e0 je 0x12e837ed */
  if (C.zf) goto L_12e837ed;
  /* 12e837e2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e837e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e837e8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12e837eb jmp 0x12e837d0 */
  goto L_12e837d0;
L_12e837ed:;
  /* 12e837ed push 0x146 */
  push32((uint32_t)(0x146u));
  /* 12e837f2 push 0x12e8b9b0 */
  push32((uint32_t)(0x12e8b9b0u));
  /* 12e837f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12e837f9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12e837fc lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 12e83803 push eax */
  push32((uint32_t)(EAX));
  /* 12e83804 call 0x12e73450 */
  push32(0x12e83809u); f_12e73450();
  /* 12e83809 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e8380c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12e8380f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e83812 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12e83815 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e83819 jne 0x12e83825 */
  if (!C.zf) goto L_12e83825;
  /* 12e8381b push 9 */
  push32((uint32_t)(0x9u));
  /* 12e8381d call 0x12e723c0 */
  push32(0x12e83822u); f_12e723c0();
  /* 12e83822 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e83825:;
  /* 12e83825 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e83828 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12e8382b:;
  /* 12e8382b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e8382e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e83831 je 0x12e8388e */
  if (C.zf) goto L_12e8388e;
  /* 12e83833 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 12e83838 push 0x12e8b9b0 */
  push32((uint32_t)(0x12e8b9b0u));
  /* 12e8383d push 2 */
  push32((uint32_t)(0x2u));
  /* 12e8383f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e83842 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12e83844 push edx */
  push32((uint32_t)(EDX));
  /* 12e83845 call 0x12e76280 */
  push32(0x12e8384au); f_12e76280();
  /* 12e8384a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e8384d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e83850 push eax */
  push32((uint32_t)(EAX));
  /* 12e83851 call 0x12e73450 */
  push32(0x12e83856u); f_12e73450();
  /* 12e83856 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e83859 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e8385c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12e8385e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e83861 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e83864 je 0x12e8387a */
  if (C.zf) goto L_12e8387a;
  /* 12e83866 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e83869 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12e8386b push ecx */
  push32((uint32_t)(ECX));
  /* 12e8386c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e8386f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12e83871 push eax */
  push32((uint32_t)(EAX));
  /* 12e83872 call 0x12e76400 */
  push32(0x12e83877u); f_12e76400();
  /* 12e83877 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12e8387a:;
  /* 12e8387a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12e8387d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e83880 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12e83883 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e83886 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e83889 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12e8388c jmp 0x12e8382b */
  goto L_12e8382b;
L_12e8388e:;
  /* 12e8388e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12e83891 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12e83897 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12e8389a:;
  /* 12e8389a mov esp, ebp */
  ESP = (EBP);
  /* 12e8389c pop ebp */
  EBP = (pop32());
  /* 12e8389d ret  */
  ESPCHK(0x12e837b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100138a0 @ 0x12e838a0 (237 bytes, 81 insns) */
void f_12e838a0(void) {
  FTRACE(0x12e838a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e838a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12e838a1 mov ebp, esp */
  EBP = (ESP);
  /* 12e838a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12e838a4 cmp dword ptr [0x12e90c2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12e90c2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e838ab jne 0x12e838c2 */
  if (!C.zf) goto L_12e838c2;
  /* 12e838ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12e838b0 push eax */
  push32((uint32_t)(EAX));
  /* 12e838b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e838b4 push ecx */
  push32((uint32_t)(ECX));
  /* 12e838b5 call 0x12e839a0 */
  push32(0x12e838bau); f_12e839a0();
  /* 12e838ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e838bd jmp 0x12e83989 */
  goto L_12e83989;
L_12e838c2:;
  /* 12e838c2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12e838c4 call 0x12e76e50 */
  push32(0x12e838c9u); f_12e76e50();
  /* 12e838c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e838cc jmp 0x12e838d7 */
  goto L_12e838d7;
L_12e838ce:;
  /* 12e838ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e838d1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e838d4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12e838d7:;
  /* 12e838d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e838da movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 12e838de mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 12e838e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e838e5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e838eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12e838ed je 0x12e8396b */
  if (C.zf) goto L_12e8396b;
  /* 12e838ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e838f2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e838f7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e838f9 mov cl, byte ptr [eax + 0x12e90d41] */
  CL = (r8((uint32_t)(EAX + 0x12e90d41)));
  /* 12e838ff and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12e83902 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e83904 je 0x12e83956 */
  if (C.zf) goto L_12e83956;
  /* 12e83906 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e83909 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e8390c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12e8390f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e83912 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e83914 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e83916 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12e83918 jne 0x12e83928 */
  if (!C.zf) goto L_12e83928;
  /* 12e8391a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12e8391c call 0x12e76ef0 */
  push32(0x12e83921u); f_12e76ef0();
  /* 12e83921 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e83924 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e83926 jmp 0x12e83989 */
  goto L_12e83989;
L_12e83928:;
  /* 12e83928 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e8392b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e83931 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12e83934 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e83937 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12e83939 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12e8393b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12e8393d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e83940 jne 0x12e83954 */
  if (!C.zf) goto L_12e83954;
  /* 12e83942 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12e83944 call 0x12e76ef0 */
  push32(0x12e83949u); f_12e76ef0();
  /* 12e83949 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e8394c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e8394f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12e83952 jmp 0x12e83989 */
  goto L_12e83989;
L_12e83954:;
  /* 12e83954 jmp 0x12e83966 */
  goto L_12e83966;
L_12e83956:;
  /* 12e83956 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e83959 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12e8395f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e83962 jne 0x12e83966 */
  if (!C.zf) goto L_12e83966;
  /* 12e83964 jmp 0x12e8396b */
  goto L_12e8396b;
L_12e83966:;
  /* 12e83966 jmp 0x12e838ce */
  goto L_12e838ce;
L_12e8396b:;
  /* 12e8396b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12e8396d call 0x12e76ef0 */
  push32(0x12e83972u); f_12e76ef0();
  /* 12e83972 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12e83975 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12e83978 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e8397d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12e83980 jne 0x12e83987 */
  if (!C.zf) goto L_12e83987;
  /* 12e83982 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12e83985 jmp 0x12e83989 */
  goto L_12e83989;
L_12e83987:;
  /* 12e83987 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12e83989:;
  /* 12e83989 mov esp, ebp */
  ESP = (EBP);
  /* 12e8398b pop ebp */
  EBP = (pop32());
  /* 12e8398c ret  */
  ESPCHK(0x12e838a0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x12e839a0 (193 bytes, 87 insns) */
void f_12e839a0(void) {
  FTRACE(0x12e839a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e839a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e839a2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12e839a6 push ebx */
  push32((uint32_t)(EBX));
  /* 12e839a7 mov ebx, eax */
  EBX = (EAX);
  /* 12e839a9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12e839ac mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 12e839b0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12e839b6 je 0x12e839cb */
  if (C.zf) goto L_12e839cb;
L_12e839b8:;
  /* 12e839b8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 12e839ba inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12e839bb cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e839bd je 0x12e83990 */
  if (C.zf) { jmp_ind(0x12e83990u); return; }
  /* 12e839bf test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12e839c1 je 0x12e83a14 */
  if (C.zf) goto L_12e83a14;
  /* 12e839c3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12e839c9 jne 0x12e839b8 */
  if (!C.zf) goto L_12e839b8;
L_12e839cb:;
  /* 12e839cb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 12e839cd push edi */
  push32((uint32_t)(EDI));
  /* 12e839ce mov eax, ebx */
  EAX = (EBX);
  /* 12e839d0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 12e839d3 push esi */
  push32((uint32_t)(ESI));
  /* 12e839d4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_12e839d6:;
  /* 12e839d6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12e839d8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 12e839dd mov eax, ecx */
  EAX = (ECX);
  /* 12e839df mov esi, edi */
  ESI = (EDI);
  /* 12e839e1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 12e839e3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12e839e5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12e839e7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12e839ea xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12e839ed xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 12e839ef xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12e839f1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12e839f4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 12e839fa jne 0x12e83a18 */
  if (!C.zf) goto L_12e83a18;
  /* 12e839fc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12e83a01 je 0x12e839d6 */
  if (C.zf) goto L_12e839d6;
  /* 12e83a03 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12e83a08 jne 0x12e83a12 */
  if (!C.zf) goto L_12e83a12;
  /* 12e83a0a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 12e83a10 jne 0x12e839d6 */
  if (!C.zf) goto L_12e839d6;
L_12e83a12:;
  /* 12e83a12 pop esi */
  ESI = (pop32());
  /* 12e83a13 pop edi */
  EDI = (pop32());
L_12e83a14:;
  /* 12e83a14 pop ebx */
  EBX = (pop32());
  /* 12e83a15 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12e83a17 ret  */
  ESPCHK(0x12e839a0u, _esp0);
  ESP += 4; return;
L_12e83a18:;
  /* 12e83a18 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12e83a1b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e83a1d je 0x12e83a55 */
  if (C.zf) goto L_12e83a55;
  /* 12e83a1f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12e83a21 je 0x12e83a12 */
  if (C.zf) goto L_12e83a12;
  /* 12e83a23 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e83a25 je 0x12e83a4e */
  if (C.zf) goto L_12e83a4e;
  /* 12e83a27 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12e83a29 je 0x12e83a12 */
  if (C.zf) goto L_12e83a12;
  /* 12e83a2b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12e83a2e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e83a30 je 0x12e83a47 */
  if (C.zf) goto L_12e83a47;
  /* 12e83a32 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12e83a34 je 0x12e83a12 */
  if (C.zf) goto L_12e83a12;
  /* 12e83a36 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12e83a38 je 0x12e83a40 */
  if (C.zf) goto L_12e83a40;
  /* 12e83a3a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12e83a3c je 0x12e83a12 */
  if (C.zf) goto L_12e83a12;
  /* 12e83a3e jmp 0x12e839d6 */
  goto L_12e839d6;
L_12e83a40:;
  /* 12e83a40 pop esi */
  ESI = (pop32());
  /* 12e83a41 pop edi */
  EDI = (pop32());
  /* 12e83a42 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 12e83a45 pop ebx */
  EBX = (pop32());
  /* 12e83a46 ret  */
  ESPCHK(0x12e839a0u, _esp0);
  ESP += 4; return;
L_12e83a47:;
  /* 12e83a47 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 12e83a4a pop esi */
  ESI = (pop32());
  /* 12e83a4b pop edi */
  EDI = (pop32());
  /* 12e83a4c pop ebx */
  EBX = (pop32());
  /* 12e83a4d ret  */
  ESPCHK(0x12e839a0u, _esp0);
  ESP += 4; return;
L_12e83a4e:;
  /* 12e83a4e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 12e83a51 pop esi */
  ESI = (pop32());
  /* 12e83a52 pop edi */
  EDI = (pop32());
  /* 12e83a53 pop ebx */
  EBX = (pop32());
  /* 12e83a54 ret  */
  ESPCHK(0x12e839a0u, _esp0);
  ESP += 4; return;
L_12e83a55:;
  /* 12e83a55 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 12e83a58 pop esi */
  ESI = (pop32());
  /* 12e83a59 pop edi */
  EDI = (pop32());
  /* 12e83a5a pop ebx */
  EBX = (pop32());
  /* 12e83a5b ret  */
  ESPCHK(0x12e839a0u, _esp0);
  ESP += 4; return;
  /* 12e83a5c jmp dword ptr [0x12e92304] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12e92304)))); return;
}

/* RtlUnwind @ 0x12e83bac (6 bytes, 1 insns) */
void f_12e83bac(void) {
  FTRACE(0x12e83bacu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12e83bac jmp dword ptr [0x12e922c8] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12e922c8)))); return;
}

